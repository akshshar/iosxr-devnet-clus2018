#!/bin/bash

source /pkg/bin/ztp_helper.sh

function configure_xr()
{
   config_file=$1

   xrapply $config_file

   if [[ $? == 1 ]];then
       config_failed=`xrcmd "show configuration failed"`
       echo "$config_failed"
   else
       config_success=`xrcmd "show configuration commit changes last 1"`
       echo "$config_success"
   fi
}


cat > /root/rtr_config << EOF
!
netconf-yang agent
  ssh
!
end
EOF

configure_xr /root/rtr_config
