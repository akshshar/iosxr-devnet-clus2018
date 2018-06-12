#!/usr/bin/env python

import sys
sys.path.append("/pkg/bin")
from ztp_helper import ZtpHelpers
import json, tempfile
from pprint import pprint

ROOT_USER = "vagrant2"
ROOT_USER_CREDENTIALS = "$1$FzMk$Y5G3Cv0H./q0fG.LGyIJS1" 

class ZtpFunctions(ZtpHelpers):

    def create_new_user(self):
        config = """ !
                     username %s 
                     group root-lr
                     group cisco-support
                     secret 5 %s 
                     !
                     end""" % (ROOT_USER, ROOT_USER_CREDENTIALS)



        with tempfile.NamedTemporaryFile(delete=True) as f:
            f.write("%s" % config)
            f.flush()
            f.seek(0)
            result = self.xrapply(f.name)

        if result["status"] == "error":

            self.syslogger.info("Failed to apply root user to system %s" % result)

        return result


if __name__ == "__main__":

    # Create an Object of the child class, syslog parameters are optional. 
    # If nothing is specified, then logging will happen to local log rotated file.

    ztp_script = ZtpFunctions(syslog_file="/root/ztp_python.log")

    print "\n###### Debugs enabled ######\n"

    # Enable verbose debugging to stdout/console. By default it is off
    ztp_script.toggle_debug(1)


    # Use the child class methods
    print "\n###### Using Child class method, creating a new user ######\n"
    result = ztp_script.create_new_user()

    if result["status"] == "success":
        print "\n###### New user successfully created, return value: ######\n"
        pprint(result["output"])
        print "\n###### return value in json: ######\n"
        print json.dumps(result["output"],sort_keys=True, indent=4)


    print "\n###### Debugs Disabled  ######\n"
    ztp_script.toggle_debug(0)



    print "\n###### Applying an incorrect config  ######\n"
    # Apply a wrong config
    result = ztp_script.xrapply_string("hostnaime rtr1")

    if result["status"] == "error":
        print "\n###### Failed to apply configuration, error is:######\n"
        pprint(result["output"])
        print "\n###### error in json: ######\n" 
        print json.dumps(result["output"],sort_keys=True, indent=4)
    
