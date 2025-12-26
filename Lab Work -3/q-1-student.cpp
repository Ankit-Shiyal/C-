#include <iostream>
#include <string>
using namespace std;

class Student{

private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:

 void setData( int id,int age, string name, string course, string city, string email,string college ){

        this->stu_id = id;
        this->stu_name = name;
        this->stu_age = age;
        this->stu_course = course;
        this->stu_city = city;
        this->stu_email = email;
        this->stu_college = college;
}
    
    void getData(){
        int i;
        cout << "\nrecord of student " << i + 1 << endl;

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

    cout<< "enter number of student"  <<endl;
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++){
         int id, age;
        string name, course, city, email, college;
        cout << "\nEnter student detail " << i + 1 << endl;

        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin,name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Course: ";
         getline(cin, course);
       
        cout << "Enter City: ";
         getline(cin,city);
   
        cout << "Enter Email: ";   
         getline(cin,email);
 
        cout << "Enter College: ";
         getline(cin,college);

         s[i].setData(id, age, name, course, city, email, college);
    }

    for (int i = 0; i < n; i++){
        s[i].getData();
    }

    return 0;
}