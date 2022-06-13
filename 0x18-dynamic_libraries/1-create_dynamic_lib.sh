#!/bin/bash
#creating a dynamic file
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -Wall -pedantic -Werror -Wextra -shared -o liball.so *.o
