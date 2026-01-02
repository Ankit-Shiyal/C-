#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{

private:
    int ROLL;
    float GPA;
    string NAME;

public:
    Student()
    {
        ROLL = 0;
        GPA = 0;
        NAME = "not set";
    }

    Student(int R, float G, string N)
    {
        ROLL = R;
        GPA = G;
        NAME = N;
    }

    Student(const Student &s)
    {
        ROLL = s.ROLL;
        GPA = s.GPA;
        NAME = s.NAME;
    }

    int gatROLL() const
    {
        return ROLL;
    };

    float gatGPA() const
    {
        return GPA;
    };

    string gatNAME() const
    {
        return NAME;
    };

    void display() const
    {
        cout << "Name :" << NAME << "  Roll no : " << ROLL << "  Gpa :" << GPA << endl;
    }

    ~Student()
    {
        cout << "\ndestructure called  " << endl;
    }
};

class StudentManagement
{

private:
    vector<Student> student;

public:
    void addStudent(const Student &s)
    {
        student.push_back(s);
        cout << "student Data add";
    }

    void displayAllData()
    {
        cout << "all student detail " << endl;

        if (student.empty())
        {
            cout << "No Student data" << endl;
        }

        else
        {
            for (int i = 0; i < student.size(); i++)
            {
                student[i].display();
            }
        }
    }

    void searchByRoll(int roll) const
    {
        for (int i = 0; i < student.size(); i++)
        {
            if (student[i].gatROLL() == roll)
            {
                cout << "Student Found:\n";
                student[i].display();
                return;
            }
            else
            {
                cout << "Student not found" << endl;
            }
        }
    }
};

int main()
{

    Student s1(1, 7.11, "Sunil");
    Student s2(2, 8.50, "Abhay");
    Student s3(3, 9.00, "Rajveer ");

    StudentManagement manager;

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);

    manager.displayAllData();

    manager.searchByRoll(2);

    return 0;
}