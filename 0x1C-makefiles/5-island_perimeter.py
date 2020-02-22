#!/usr/bin/python3
""" A function def island_perimeter(grid): that returns the perimeter of the
    island described in grid:
"""


def island_perimeter(grid):
    """grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island
    (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the
    water around the island).
    """
    perimeter = 0
    for y in range(len(grid)):
        # (x-y)
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                perimeter += 4
                if y > 0 and grid[y - 1][x] == 1:
                    perimeter -= 2
                if x > 0 and grid[y][x - 1] == 1:
                    perimeter -= 2
    return perimeter
