#!/bin/bash
make
# Define the directories that contain the tests
TEST_DIRS=("libft-unit-test" "libftTester" "libft-war-machine")

# Loop through each test directory
for dir in "${TEST_DIRS[@]}"
do
    # test Tripouille/libfTester
    if [ $dir == "libft-unit-test" ]
    then
        cd "$dir"
        make f
        cd ..
    fi
    # test alelievr/libft-unit-test
    if [ $dir == "libftTester" ]
    then
        cd "$dir"
        make strlen \
                strlcpy \
                strlcat \
                tolower \
                toupper \
                isalpha \
                isdigit \
                isprint \
                isascii \
                isalnum
        cd ..
    fi
    # test ska42/libft-war-machine
    if [ $dir == "libft-war-machine" ]
    then 
        cd "$dir"
        bash grademe.sh 
    fi
done