#!/bin/bash
STR1=$1
STR2=$(sed 's/\..*$//' <<< $STR1)
STR3=$(sed 's/^.*\.//' <<< $STR1)
if [ "$STR3" = "c" ]
then
	gcc -g $STR1 -o $STR2
elif [ "$STR3" = "cpp" ]
then
	g++ -g $STR1 -o $STR2
else
	echo "Need a .c or .cpp file extension."
fi
