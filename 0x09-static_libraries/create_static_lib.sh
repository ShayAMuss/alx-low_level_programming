#!/bin/bash
gcc -wall -padantic -Werror -Wextra -c *.c
ar rc liball.a *.o
