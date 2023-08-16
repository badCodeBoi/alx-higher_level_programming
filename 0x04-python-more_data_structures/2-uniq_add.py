#!/usr/bin/python3

def uniq_add(my_list):
    """Add all unique integers in a list.

    Args:
        my_list (list): The input list.

    Returns:
        int: Sum of unique integers.
    """
    return sum(set(my_list)
