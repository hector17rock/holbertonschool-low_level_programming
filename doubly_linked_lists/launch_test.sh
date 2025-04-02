#!/bin/bash

username="$1"
echo "Running with username: $username"
key=$(./keygen5 "$username")
echo "Generated key: $key"

# Run the actual crackme
./crackme5 "$username" "$key"

