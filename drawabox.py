#!/usr/bin/python
import sys
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("width", type=int, help="The width of the box.")
parser.add_argument("height", type=int, help="This will be the height of the box.")
args = parser.parse_args()

width = args.width
height = args.height

def box(width,height):
    print "*" * width
    for middle in range(height - 2):
        print "|" + ' ' * (width - 2) + "|"
    print "*" * width

box(width,height)
