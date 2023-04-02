#!/bin/sh
cd libft-unit-test
make f
cd ..
cd libftTester
make "$1"
cd ..
cd libft-war-machine
bash grademe.sh -ft_"$1"
cd ..