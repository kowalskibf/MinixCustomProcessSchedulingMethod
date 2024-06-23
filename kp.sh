#!/bin/sh
i=0
while [ $i -lt $2 ]; do
	kill `expr $1 + $i`
	i=`expr $i + 1`
done
