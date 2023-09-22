#! /usr/bin/bash
dir="."
if [ "$1" != "" ]; then
    cd $1
fi

echo "Looking at " $dir " directory."
echo "There are following subdirectories."
echo "Which directory do you want to see? (1=quit): "

while [ true ]; do
    dlist="quit $( ls -aF | grep / )"
    select dir in $dlist; do
      if [ "$dir" = "quit" -o "$dir" = "" ]; then 
        exit
      else
        cd $dir
        pwd
      fi
      break
    done
done