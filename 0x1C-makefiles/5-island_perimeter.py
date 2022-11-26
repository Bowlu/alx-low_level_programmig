#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for column in range(height):
        for row in range(width):
            if grid[column][row] == 1:
                size += 1
                if (row > 0 and grid[column][row - 1] == 1):
                    edges += 1
                if (column > 0 and grid[column - 1][row] == 1):
                    edges += 1
    return size * 4 - edges * 2
