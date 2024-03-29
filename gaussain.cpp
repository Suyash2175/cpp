#include "gaussian_elimination.hpp"
#include <iostream>

Matrix GaussianElimination::solve(const Matrix& matrix) {
    Matrix result = matrix;
    forwardElimination(result);
    backwardSubstitution(result);
    return result;
}

void GaussianElimination::forwardElimination(Matrix& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size() - 1;

    for (int pivot = 0; pivot < rows - 1; pivot++) {
        for (int row = pivot + 1; row < rows; row++) {
            double factor = matrix[row][pivot] / matrix[pivot][pivot];
            for (int col = pivot; col < cols + 1; col++) {
                matrix[row][col] -= factor * matrix[pivot][col];
            
            }
        }
    }
}

void GaussianElimination::backwardSubstitution(Matrix& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size() - 1;

    for (int i = rows - 1; i >= 0; i--) {
        matrix[i][cols] /= matrix[i][i];
        matrix[i][i] = 1;
        for (int k = i - 1; k >= 0; k--) {
            matrix[k][cols] -= matrix[k][i] * matrix[i][cols];
            matrix[k][i] = 0;
        }
    }
}

void printMatrix(const Matrix& matrix) {
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            std::cout << element << "\t";
        }
        std::cout << std::endl;
    }
}
