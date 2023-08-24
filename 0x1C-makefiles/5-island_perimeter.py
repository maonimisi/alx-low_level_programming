#!/usr/bin/python3
"""Defines an island perimeter measuring function"""


def island_perimeter(grid):
    """Return the perimiter of the island described in grid
    Args:
        grid (list): A list of list of integers representing an island
    Returns:
        The perimeter of the island defined in grid.
    """
    row = len(grid)
    col = len(grid[0])
    edges = 0
    size = 0

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
