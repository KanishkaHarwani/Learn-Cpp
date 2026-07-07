#!/bin/bash
# Manual two-step compile + link, no CMake.
set -e
g++ -std=c++17 -Wall -Wextra -c main.cpp -o main.o
g++ -std=c++17 -Wall -Wextra -c greet.cpp -o greet.o
g++ main.o greet.o -o greet_app
echo "Built ./greet_app"
