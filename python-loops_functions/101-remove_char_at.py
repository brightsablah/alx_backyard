#!/usr/bin/python3
def remove_char_at(str, n):
    index = 0
    new_str = ""
    for char in str:
        if index == n:
            new_str = new_str
        else:
            new_str += char
        index += 1
    return new_str
