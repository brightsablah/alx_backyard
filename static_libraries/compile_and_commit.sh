#!/bin/bash

# Compile .c files to object files (if not done already)
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Add and commit each object file with a custom message based on filename
for object_file in *.o; do
    filename="${object_file%.o}"  # Get the base filename without extension
    commit_message="Compile $filename.c to $object_file"
    
    # Add the object file to Git
    git add "$object_file"
    
    # Commit with a custom message
    git commit -m "$commit_message"
done

# Push the changes to GitHub
git push origin master  # Replace "master" with your branch name if different

