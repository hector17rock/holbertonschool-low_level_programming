#!/bin/bash

username="$1"

# Compile keygen5 if it's not already built
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-keygen.c -o keygen5 || exit 1

# Generate key
key=$(./keygen5 "$username")

# Debug prints (optional, but useful)
echo "Username: $username"
echo "Generated key: $key"

# Run the actual test
./crackme5 "$username" "$key"

