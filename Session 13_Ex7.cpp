#include <iostream>
#include <vector>
using namespace std;

// Function to create a 2D matrix
vector<vector<int>> createMatrix(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the values for the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

// Function to display a 2D matrix
void displayMatrix(const vector<vector<int>>& matrix) {
    cout << "Matrix:\n";
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    // Input number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create and display the matrix
    vector<vector<int>> matrix = createMatrix(rows, cols);
    displayMatrix(matrix);

    return 0;
}

