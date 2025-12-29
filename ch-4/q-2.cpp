#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int emp_id;
    string emp_name;
    string emp_designation;
    string emp_department;
    int emp_salary;
    int emp_experience;

    static int totalCount;

public:
    void setEmployeeData(int id, string name, string designation,
                         string department, int salary, int experience)
    {
        emp_id = id;
        emp_name = name;
        emp_designation = designation;
        emp_department = department;
        emp_salary = salary;
        emp_experience = experience;

        totalCount++;
    }

    void getEmployeeData(int i)
    {
        cout << "\n\nRecord of Employee " << i + 1 << endl;
        cout << "Employee ID        : " << emp_id << endl;
        cout << "Employee Name      : " << emp_name << endl;
        cout << "Designation        : " << emp_designation << endl;
        cout << "Department         : " << emp_department << endl;
        cout << "Salary             : " << emp_salary << endl;
        cout << "Experience (Years) : " << emp_experience << endl;
    }

    static void showTotal()
    {
        cout << "\nTotal Employees: " << totalCount << endl;
    }
};

int Employee::totalCount = 0;

int main()
{
    int n;
    cout << "Enter number of Employees: ";
    cin >> n;

    Employee e[n];

    for (int i = 0; i < n; i++)
    {
        int id, salary, experience;
        string name, designation, department;

        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> id;
        cin.ignore();

        cout << "Employee Name: ";
        getline(cin, name);

        cout << "Designation: ";
        getline(cin, designation);

        cout << "Department: ";
        getline(cin, department);

        cout << "Salary: ";
        cin >> salary;
        cin.ignore();

        cout << "Experience (Years): ";
        cin >> experience;
        cin.ignore();

        e[i].setEmployeeData(id, name, designation, department, salary, experience);
    }

    for (int i = 0; i < n; i++)
    {
        e[i].getEmployeeData(i);
    }

    Employee::showTotal();

    return 0;
}