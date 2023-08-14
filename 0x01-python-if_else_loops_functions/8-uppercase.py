#!/usr/bin/python3
def to_upper(character):
    if ord(character) >= ord('a') and ord(character) <= ord('z'):
        return chr(ord(character) - ord('a') + ord('A'))
    return character

def uppercase(string):
    result = ""
    for character in string:
        result += to_upper(character)
    print(result)
