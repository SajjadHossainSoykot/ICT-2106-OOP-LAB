#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> readMatrix(int m, int n) {
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the Matrix"<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m) and columns (n): ";
    cin >> m>> n;
    vector<vector<int>> matrix = readMatrix(m, n); //Reading Matrix
    return 0;
}
/* Output:

Enter the number of rows (m) and columns (n): 3 3
Enter the Matrix
1 2 3
4 5 6
7 8 9

*/