#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island
    Args:
        grid (list): A list of list of integers representing an island
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edge += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edge += 1
    return size * 4 - edge * 2
