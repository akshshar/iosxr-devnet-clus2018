#!/usr/bin/env python

from ncclient import manager
import re
from subprocess import Popen, PIPE, STDOUT
    
xr = manager.connect(host='10.0.2.2', port=2201, username='vagrant', password='vagrant',
	allow_agent=False,
	look_for_keys=False,
	hostkey_verify=False,
	unknown_host_cb=True)


edit_data = '''
<config>
  <telemetry-system xmlns="http://openconfig.net/yang/telemetry">
   <sensor-groups>
    <sensor-group>
     <sensor-group-id>IPV6Neighbor</sensor-group-id>
     <sensor-paths nc:operation="replace">
      <sensor-path>
       <path>Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery/nodes/node/neighbor-interfaces/neighbor-interface/host-addresses/host-address</path>
      </sensor-path>
     </sensor-paths>
    </sensor-group>
   </sensor-groups>
   <subscriptions>
    <persistent>
     <subscription>
      <subscription-id>IPV6</subscription-id>
      <config>
       <subscription-id>IPV6</subscription-id>
      </config>
      <sensor-profiles>
       <sensor-profile>
        <sensor-group>IPV6Neighbor</sensor-group>
        <config>
         <sensor-group>IPV6Neighbor</sensor-group>
         <sample-interval>10000</sample-interval>
        </config>
       </sensor-profile>
      </sensor-profiles>
     </subscription>
    </persistent>
   </subscriptions>
  </telemetry-system>
</config>
'''


xr.edit_config(edit_data, default_operation='replace', target='candidate', format='xml')
xr.commit()
