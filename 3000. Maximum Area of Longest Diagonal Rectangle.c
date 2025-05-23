int areaOfMaxDiagonal(int** dimensions, int dimensionsSize,
                      int* dimensionsColSize) {
    double maxDiagonal = 0.0;
    int maxArea = 0;
    for (int i = 0; i < dimensionsSize; i++) {
        double diagonal = sqrt((double)dimensions[i][0] * dimensions[i][0] +
                               (double)dimensions[i][1] * dimensions[i][1]);

        int area = dimensions[i][0] * dimensions[i][1];

        if (diagonal > maxDiagonal ||
            (diagonal == maxDiagonal && area > maxArea)) {
            maxDiagonal = diagonal;
            maxArea = area;
        }
    }
    return maxArea;
}