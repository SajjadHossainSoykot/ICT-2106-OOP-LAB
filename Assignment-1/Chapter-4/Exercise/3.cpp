#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> readMatrix(int n, int m=3) //Here m is default argument.
{ 
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the Matrix"<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

void displayMatrix(const vector<vector<int>>& matrix) {
    cout << "Matrix values:" << endl;
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Default rows = 3. Enter the number of columns (n): ";
    cin >> n;
    vector<vector<int>> matrix = readMatrix(n); //Reading Matrix
    displayMatrix(matrix); //Displaying Matrix
    return 0;
}
