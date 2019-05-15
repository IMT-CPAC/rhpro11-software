#!/bin/bash
rc=1
tries=5
for i in $(seq 1 $tries ); do
  echo "Reading hwclock..."
  if /sbin/hwclock --hctosys --utc --rtc /dev/rtc; then
     echo "Success reading hwclock"
     rc=0
     break;
  else
     sleep 1;
  fi;
done
if [ "$rc" != "0" ]; then
  echo "Clock failed to read"
  # Set the error flag
  rhprocntl-cmd SetError int32:-2
fi
exit $rc

