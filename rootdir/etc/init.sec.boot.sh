#!/system/bin/sh

# start deferred initcalls
cat /proc/deferred_initcalls

if [ getprop|grep -E "ro.radio.noril" -eq 1 ];then
	su 0
	stop ril-daemon
    stop qmuxd
    stop netmgrd
fi