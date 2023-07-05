#include <iostream>
#include <vector>
using namespace std;

vector<int>* createVector(int size) {
    vector<int>* vec = new vector<int>(size);
    return vec;
}

int main() {
    int M;
    cout << "Enter the size of the vector: ";
    cin >> M;

    vector<int>* myVector = createVector(M);

    // Input values into the vector
    cout << "Enter " << M << " elements for the vector: ";
    for (int i = 0; i < M; i++) {
        int value;
        cin >> value;
        (*myVector)[i] = value;
    }

    // Display the vector elements
    cout << "Vector elements: ";
    for (int i = 0; i < M; i++) {
        cout << (*myVector)[i] << " ";
    }
    cout << endl;

    // Deallocate the vector memory
    delete myVector;

    return 0;
}
/* Output:

Enter the size of the vector: 5
Enter 5 elements for the vector: 1 2 3 4 5
Vector elements: 1 2 3 4 5

*/
