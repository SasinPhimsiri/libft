#!/bin/bash
clear
make fclean
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
        make a
        cd ..
    fi
    if [ $dir == "libft-war-machine" ]
    then 
        cd "$dir"
        bash grademe.sh
    fi
done

# lstmap \
# lstiter \
# lstclear \
# lstdelone \
# lstadd_back \
# lstlast \
# lstsize \
# lstadd_front \
# lstnew \
# split \
# strtrim \
# putnbr_fd \
# putendl_fd \
# putstr_fd \
# putchar_fd \
# striteri \
# strmapi \
# strjoin \
# substr \
# strlen \
# strlcpy \
# strlcat \
# strdup \
# tolower \
# toupper \
# isalpha \
# isdigit \
# isprint \
# isascii \
# isalnum \
# calloc \
# strchr \
# strrchr \
# bzero \
# atoi \
# strncmp \
# strnstr \
# memset \
# memcpy \
# memmove \
# memchr \
# memcmp \
# itoa