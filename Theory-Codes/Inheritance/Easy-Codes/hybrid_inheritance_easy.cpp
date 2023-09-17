#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;

public:
    Student(int roll) : rollNumber(roll) {}

    void displayStudent() {
        cout << "Student Roll Number: " << rollNumber << endl;
    }
};

class Test : virtual public Student {
protected:
    float marks;

public:
    Test(int roll, float m) : Student(roll), marks(m) {}

    void displayTestMarks() {
        cout << "Test Marks: " << marks << endl;
    }
};

class Sports : virtual public Student {
protected:
    float score;

public:
    Sports(int roll, float s) : Student(roll), score(s) {}

    void displaySportsScore() {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Test, public Sports {
private:
    float total;

public:
    Result(int roll, float m, float s)
        : Student(roll), Test(roll, m), Sports(roll, s), total(m + s) {}

    void displayResult() {
        displayStudent();
        displayTestMarks();
        displaySportsScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result result(101, 85.5, 78.0);

    cout << "Result Details:" << endl;
    result.displayResult();

    return 0;
}
