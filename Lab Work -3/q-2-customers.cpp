#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    int cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    void setCustomerDetail(int id, string name, int age, string city, int number, int validity, string telecom_brand)
    {

        this->cust_id = id;
        this->cust_name = name;
        this->cust_age = age;
        this->cust_city = city;
        this->cust_mobile_number = number;
        this->cust_simcard_validity= validity;
        this->cust_telecom_brand_name = telecom_brand;
    }

    void getCustomerDetail()
    {

        cout << "\nCustomer detail are... " << endl;

        cout << "Customer ID            : " << cust_id << endl;
        cout << "Customer Name          : " << cust_name << endl;
        cout << "Customer Age           : " << cust_age << endl;
        cout << "Customer City          : " << cust_city << endl;
        cout << "Customer Number        : " << cust_mobile_number << endl;
        cout << "Customer Validity      : " << cust_simcard_validity << endl;
        cout << "Customer telecom brand : " << cust_telecom_brand_name << endl;
    }
};

int main()
{
     int n;
    cout<< "enter number of customer";
    cin >> n;
    Customer s[n];


    int id;
    string name;
    int age;
    string city;
    int number;
    int validity;
    string telecom_brand;

    for (int i = 0; i < n; i++)
    {

        cout << "\nenter customer detail " << i + 1 << endl;

        cout << "Enter id :" ;
        cin >> id;
        cin.ignore();

        cout << "Enter name :" ;
        getline(cin, name);

        cout << "Enter age :" ;
        cin >> age;
        cin.ignore();

        cout << "Enter city :" ;
        getline(cin, city);

        cout << "Enter number :";
        cin >> number;
        cin.ignore();

        cout << "Enter validity year :";
        cin >> validity;
        cin.ignore();

        cout << "Enter telecom brand :";
        getline(cin, telecom_brand);

        s[i].setCustomerDetail(id,  name, age, city,  number,  validity,  telecom_brand);
    }


    for (int i = 0; i < n; i++)
    {

        s[i].getCustomerDetail();
    };

    return 0;
}