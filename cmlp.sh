#!/bin/sh
file_name="$1"
gcc -o ./exec_file/$file_name ./src/$file_name.c