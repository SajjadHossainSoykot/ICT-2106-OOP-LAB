#include <iostream>
using namespace std;
class Matrix
{
private:
    int m[3][3];

public:
    void read()
    {
        cout << "Enter the elements of the matrix (3x3):\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> m[i][j];
            }
        }
    }

    void display()
    {
        cout << "Matrix:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << m[i][j] << " ";
            }
            cout << "\n";
        }
    }
    friend Matrix trans(Matrix);
};

Matrix trans(Matrix m1)
{
    Matrix m2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m2.m[i][j] = m1.m[j][i];
        }
    }
    return (m2);
}

int main()
{
    Matrix mat1;
    mat1.read();

    cout << "Original Matrix:\n";
    mat1.display();

    Matrix mat2 = trans(mat1);

    cout << "\nTransposed Matrix:\n";
    mat2.display();

    return 0;
}
