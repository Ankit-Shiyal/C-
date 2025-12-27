#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    void setStudentDetail(int id, string name, int age, string course, string city, string email, string college)
    {

        this->stu_id = id;
        this->stu_name = name;
        this->stu_age = age;
        this->stu_course = course;
        this->stu_city = city;
        this->stu_email = email;
        this->stu_college = college;
    }

    void getStudentDetail()
    {

        cout << "\nStudent detail are... " << endl;

        cout << "Student ID      : " << stu_id << endl;
        cout << "Student Name    : " << stu_name << endl;
        cout << "Student Age     : " << stu_age << endl;
        cout << "Student Course  : " << stu_course << endl;
        cout << "Student City    : " << stu_city << endl;
        cout << "Student Email   : " << stu_email << endl;
        cout << "Student College : " << stu_college << endl;
    }
};

int main()
{
     int n;
    cout<< "enter number of student";
    cin >> n;
    Student s[n];


    int id;
    string name;
    int age;
    string course;
    string city;
    string email;
    string college;

    for (int i = 0; i < n; i++)
    {

        cout << "\nenter student detail " << i + 1 << endl;

        cout << "Enter id :" ;
        cin >> id;
        cin.ignore();

        cout << "Enter name :" ;
        getline(cin, name);

        cout << "Enter age :" ;
        cin >> age;
        cin.ignore();

        cout << "Enter course :" ;
        getline(cin, course);

        cout << "Enter city :" ;
        getline(cin, city);

        cout << "Enter email :" ;
        getline(cin, email);

        cout << "Enter college :" ;
        getline(cin, college);

        s[i].setStudentDetail(id, name, age, course, city, email, college);
    }


    for (int i = 0; i < n; i++)
    {

        s[i].getStudentDetail();
    };

    return 0;
}