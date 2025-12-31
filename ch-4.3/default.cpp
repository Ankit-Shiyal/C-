#include <iostream>
#include <string>
using namespace std;

class Cafe{

private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff;

public:
    Cafe(){
        cafe_id = 0;
        cafe_name = "not set";
        cafe_type = "not set";
        cafe_rating = 0;
        cafe_location = "not set";
        cafe_establish_year = 0;
        cafe_staff = 0;
    }

    void setData(){
        cout << "\nEnter Cafe ID: ";
        cin >> cafe_id;
        cin.ignore();

        cout << "Enter Cafe Name: ";
        getline(cin, cafe_name);

        cout << "Enter Cafe Type: ";
        getline(cin, cafe_type);

        cout << "Enter Cafe Rating: ";
        cin >> cafe_rating;
        cin.ignore();

        cout << "Enter Cafe Location: ";
        getline(cin, cafe_location);

        cout << "Enter Establish Year: ";
        cin >> cafe_establish_year;

        cout << "Enter Staff Count: ";
        cin >> cafe_staff;
    }
    void displayData ()
    {

        
        cout <<"................................." << endl;
        cout << "ID             : " << cafe_id << endl;
        cout << "Name           : " << cafe_name  << endl;
        cout << "Type           : " << cafe_type  << endl;
        cout << "Rating         : " << cafe_rating  << endl;
        cout << "Location       : " << cafe_location  << endl;
        cout << "Establish Year : " << cafe_establish_year  << endl;
        cout << "Staff          : " << cafe_staff << endl;
     
    }
    ~Cafe(){

        " destructor called   :";

    }

};

int main()
{
    int n;
    cout << "Enter number of Cafe : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Cafe obj;

        obj.setData();

        obj.displayData();

    
    }

    return 0;
}