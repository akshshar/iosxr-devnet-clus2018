#!/usr/bin/env python

from ncclient import manager
import re
from subprocess import Popen, PIPE, STDOUT

xr = manager.connect(host='10.0.2.2', port=2201, username='vagrant', password='vagrant',
        allow_agent=False,
        look_for_keys=False,
        hostkey_verify=False,
        unknown_host_cb=True)

for c in xr.server_capabilities:
    model = re.search('module=([^&]*IOS-XR[^&]*)&', c)
    #if model is not None:
    #    print model.group(1)


oc = xr.get_schema('openconfig-telemetry')
p = Popen(['pyang', '-f', 'tree'], stdout=PIPE, stdin=PIPE, stderr=PIPE)
print(p.communicate(input=oc.data)[0])

