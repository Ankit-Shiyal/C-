#include <iostream>
using namespace std;

class Student{
private:
    int marks = 80;

public:
    void getStudentMarks(int m){
        marks = m;
    }

    void getMarks(){
        cout << "Marks :" << marks << endl;
    }
};

int main()
{
    Student s1;
    s1.getStudentMarks(90);
    s1.getMarks();

    Student s2;
    s2.getMarks();

    return 0;
}
