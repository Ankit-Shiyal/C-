#include <iostream>
#include <string>
using namespace std;

class Hotel{
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    int hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

    static int totalCount;

public:
    void setHotelData(int id, string name, string type, int rating, string location, int establish_year, int staff_quantity, int room_quantity){
        hotel_id = id;
        hotel_name = name;
        hotel_type = type;
        hotel_rating = rating;
        hotel_location = location;
        hotel_establish_year = establish_year;
        hotel_staff_quantity = staff_quantity;
        hotel_room_quantity = room_quantity;

        totalCount++;
    }

    void getHotelData(int i){
        cout << "\n\nRecord of Hotel " << i + 1 << endl;

        cout << "Hotel ID            : " << hotel_id << endl;
        cout << "Hotel Name          : " << hotel_name << endl;
        cout << "Hotel Type          : " << hotel_type << endl;
        cout << "Hotel Rating        : " << hotel_rating << endl;
        cout << "Hotel Location      : " << hotel_location << endl;
        cout << "Establish Year      : " << hotel_establish_year << endl;
        cout << "Staff Quantity      : " << hotel_staff_quantity << endl;
        cout << "Room Quantity       : " << hotel_room_quantity << endl;
    }

    static void showTotal(){
        cout << "\nTotal Hotels: " << totalCount << endl;
    }
};

int Hotel::totalCount = 0;

int main(){
    int n;
    cout<< "enter number of Hotel";
    cin >> n;

    Hotel h[n];
    for (int i = 0; i < n; i++){
        int id, rating, establish_year, staff_qty, room_qty;
        string name, type, location;

        cout << "\nEnter Detail Of Hotel " << i + 1 << endl;

        cout << "Hotel ID: ";
        cin >> id;
        cin.ignore();
        cout << "Hotel Name: ";
        getline(cin, name);
        cout << "Hotel Type: ";
        getline(cin, type);
        cout << "Hotel Rating: ";
        cin >> rating;
        cin.ignore();
        cout << "Hotel Location: ";
        getline(cin, location);
        cout << "Establish Year: ";
        cin >> establish_year;
        cin.ignore();
        cout << "Staff Quantity: ";
        cin >> staff_qty;
        cin.ignore();

        cout << "Room Quantity: ";
        cin >> room_qty;
        cin.ignore();

        h[i].setHotelData(id, name, type, rating, location, establish_year, staff_qty, room_qty);
    }
    for (int i = 0; i < n; i++){
        h[i].getHotelData(i);
    }

    Hotel::showTotal();
    
    return 0;
}