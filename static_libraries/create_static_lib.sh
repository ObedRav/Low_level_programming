#!/bin/bash
gcc -c ./library_functions/*.c
mkdir -p output_directory
mv *.o ./output_directory
ar -rc liball.a ./output_directory/*.o
echo "Library created successfully"
