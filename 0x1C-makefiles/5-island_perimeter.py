#!/usr/bin/python3

def island_perimeter(grid):
    # Initialize perimeter to 0
    perimeter = 0

    # Define the directions to check neighbors (up, down, left, right)
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            # Check if the current cell is land (grid[i][j] == 1)
            if grid[i][j] == 1:
                # Iterate through the four directions
                for dx, dy in directions:
                    ni, nj = i + dx, j + dy
                    # Check if the neighbor is out of bounds or is water (0)
                    if ni < 0 or ni >= len(grid) or nj < 0 or nj >= len(grid[0]) or grid[ni][nj] == 0:
                        perimeter += 1

    # Return the final perimeter
    return perimeter