int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count = 0;
    int n = gridColSize[0];
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] < 0) {
                count++;
            }
        }
    }
    return count;
}