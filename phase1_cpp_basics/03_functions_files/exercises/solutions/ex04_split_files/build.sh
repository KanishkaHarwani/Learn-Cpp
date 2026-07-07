#!/bin/bash
set -e
g++ -std=c++17 -Wall -Wextra -c main.cpp -o main.o
g++ -std=c++17 -Wall -Wextra -c mathutils.cpp -o mathutils.o
g++ main.o mathutils.o -o app
echo "Built ./app"
