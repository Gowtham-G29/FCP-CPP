#include <iostream>
#include <vector>
using namespace std;
const int MAX = 10;
void printSpiral(std::vector<std::vector<int>>& matrix, int n) {
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            std::cout << matrix[top][i] << " ";
        }
        ++top;
        for (int i = top; i <= bottom; ++i) {
            std::cout << matrix[i][right] << " ";
        }
        --right;
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                std::cout << matrix[bottom][i] << " ";
            }
            --bottom;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                std::cout << matrix[i][left] << " ";
            }
            ++left;
        }
    }
}

int main() {
    int n;
    std::cin >> n;

    if (n < 1 || n > MAX) {
        return 1;
    }

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    printSpiral(matrix, n);
    return 0;
}