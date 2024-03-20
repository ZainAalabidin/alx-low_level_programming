def island_perimeter(grid):
    """return the perimeter of island"""
    count = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, x in enumerate(grid):
        for j, y in enumerate(x):
            if y == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    count += 1
                if j == 0 or grid[i][j - 1] != 1:
                    count += 1
                if j == width or grid[i][j + 1] != 1:
                    count += 1
                if i == length or grid[i + 1][j] != 1:
                    count += 1
    return count
