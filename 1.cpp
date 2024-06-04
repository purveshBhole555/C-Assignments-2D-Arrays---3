#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix();
    int n = matrix[0].size();
    
    vector<int> zeroRows;
    vector<int> zeroCols;

    // Find the positions of zero elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                zeroRows.push_back(i);
                zeroCols.push_back(j);
            }
        }
    }

    // Set entire row and column to zeros
    for (int i = 0; i < zeroRows.size(); i++) {
        int row = zeroRows[i];
        for (int j = 0; j < n; j++) {
            matrix[row][j] = 0;
        }
    }

    for (int i = 0; i < zeroCols.size(); i++) {
        int col = zeroCols[i];
        for (int j = 0; j < m; j++) {
            matrix[j][col] = 0;
        }
    }
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }
}

int main() {
    // Input Matrix
    vector<vector<int>> inputMatrix {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    // Original Matrix
    cout << "Original Matrix:\n";
    printMatrix(inputMatrix);

    // Updating Matrix
    setZeroes(inputMatrix);

    // Output Matrix
    cout << "Output Matrix:\n";
    printMatrix(inputMatrix);

    return 0;
}
