#!/usr/bin/python3
# 11-delete_at.py

def delete_at(my_list=[], idx=0):
    """Delete an item at a specific position in a list."""
    new_list = my_list[:]
    if idx >= 0 and idx < len(new_list):
        del new_list[idx]
    return new_list
