#!/bin/sh
i=0
while [ $i -lt $1 ]; do
	./p0 &
	i=`expr $i + 1`
done
i=0
while [ $i -lt $2 ]; do
	./p1 &
	i=`expr $i + 1`
done
i=0
while [ $i -lt $3 ]; do
	./p2 &
	i=`expr $i + 1`
done
