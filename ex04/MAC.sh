ifconfig |grep -Eo "ether [0-9a-f:]{17}" | cut -d ' ' -f2
