#!/usr/bin/python3
"""Module"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    p = 0
    for i, r in enumerate(grid):
        for j, c in enumerate(r):
            if c == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    p += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    p += 1
                if j == 0 or grid[i][j - 1] == 0:
                    p += 1
                if j == len(r) - 1 or grid[i][j + 1] == 0:
                    p += 1
    return p
