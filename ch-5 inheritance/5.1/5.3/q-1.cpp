
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int employee_id;
    string name;
    int age;
    double salary;

public:
    void setEmployee(int id, string n, int a, double s)
    {
        employee_id = id;
        name = n;
        age = a;
        salary = s;
    }

    virtual void display()
    {
        cout << "Employee ID : " << employee_id << endl;
        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Salary      : " << salary << endl;
    }

    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee
{
private:
    double bonus;

public:
    FullTimeEmployee(int id, string n, int a, double s, double b)
    {
        setEmployee(id, n, a, s);
        bonus = b;
    }

    void display() override
    {

        cout << "\nFull Time Employee " << endl;
        Employee::display();
        cout << "Bonus       : " << bonus << endl;
    }
};

class PartTimeEmployee : public Employee
{
private:
    float hours_worked;

public:
    PartTimeEmployee(int id, string n, int a, double s, int h)
    {
        setEmployee(id, n, a, s);
        hours_worked = h;
    }

    void display() override
    {

        cout << "\npart Time Employee " << endl;
        Employee::display();
        cout << "Hours Worked: " << hours_worked << endl;
    }
};

int main()
{

    const int MAX = 10;
    int count = 0;
    int choice;
    Employee *emp[MAX];

    do
    {
        cout << "\n===== Employee Management System ===== " << endl;
        cout << "1. Full time Employee" << endl;
        cout << "2. Part time Employee" << endl;
        cout << "3. Display Employee" << endl;
        cout << "4. Delete Employee" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1 && count < MAX)
        {

            int id, age;
            string name;
            double salary, bonus;

            cout << "Enter Employee ID : ";
            cin >> id;
            cin.ignore();

            cout << "Enter Employee Name :";
            getline(cin, name);

            cout << "Enter Employee Age : ";
            cin >> age;
            cin.ignore();

            cout << "Enter Employee Salary : ";
            cin >> salary;
            cin.ignore();

            cout << "Enter Employee Bonus : ";
            cin >> bonus;
            cin.ignore();

            emp[count++] = new FullTimeEmployee(id, name, age, salary, bonus);
        }

        else if (choice == 2 && count < MAX)
        {

            int id, age;
            string name;
            double salary;
            float hours;

            cout << "Enter Employee ID : ";
            cin >> id;
            cin.ignore();

            cout << "Enter Employee Name :";
            getline(cin, name);

            cout << "Enter Employee Age : ";
            cin >> age;
            cin.ignore();

            cout << "Enter Employee Salary : ";
            cin >> salary;
            cin.ignore();

            cout << "Enter Employee Hours : ";
            cin >> hours;
            cin.ignore();

            emp[count++] = new PartTimeEmployee(id, name, age, salary, hours);
        }

        else if (choice == 3)
        {
            cout << "\n--- Display All Employee Details ---\n";
            for (int i = 0; i < count; i++)
            {
                emp[i]->display();
            }
        }

        else if (choice == 4)
        {
           int index;

            cout << "\n Enter Index Number to Delete Employee";
            cin >> index;

            if (index >= 0 && index < count)
            {

                delete emp[index];

                for (int i = index; i < count - 1; i++)
                {
                    emp[i] = emp[i + 1];
                }
                count--;
            }
        }

    } while (choice != 5);

    for (int i = 0; i < count; i++)
    {
        delete emp[i];
    }

    return 0;
}