#include <iostream>
#include <string>
using namespace std;

class DiamondCompany{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    DiamondCompany(int id, string name, int staff, int revenue,
                   int import_diamonds, int export_diamonds, string ceo){

        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_diamonds;
        comp_export_diamonds = export_diamonds;
        comp_ceo = ceo;
    }

    void displayData(int i){

        cout << "\n--- Diamond Company " << i + 1 << " Details ---\n";
        cout << "Company ID            : " << comp_id << endl;
        cout << "Company Name          : " << comp_name << endl;
        cout << "Staff Quantity        : " << comp_staff_quantity << endl;
        cout << "Revenue (per year)    : " << comp_revenue << endl;
        cout << "Imported Diamonds     : " << comp_import_raw_diamonds << endl;
        cout << "Exported Diamonds     : " << comp_export_diamonds << endl;
        cout << "CEO Name              : " << comp_ceo << endl;
    }

    ~DiamondCompany(){
        cout << "Destructor called : " << endl;
    }
};

int main(){
    int n;
    cout << "Enter number of Diamond Companies: ";
    cin >> n;

    DiamondCompany *d[n];

    for (int i = 0; i < n; i++){
        
        int id, staff, revenue, import_diamonds, export_diamonds;

        string name, ceo;

        cout << "\nEnter details of Diamond Company " << i + 1 << endl;

        cout << "Company ID: ";
        cin >> id;
        cin.ignore();

        cout << "Company Name: ";
        getline(cin, name);

        cout << "Staff Quantity: ";
        cin >> staff;
        cin.ignore();

        cout << "Revenue (per year): ";
        cin >> revenue;
        cin.ignore();

        cout << "Imported Raw Diamonds: ";
        cin >> import_diamonds;
        cin.ignore();

        cout << "Exported Diamonds: ";
        cin >> export_diamonds;
        cin.ignore();

        cout << "CEO Name: ";
        getline(cin, ceo);

        DiamondCompany
            d(id, name, staff, revenue,
              import_diamonds, export_diamonds, ceo);
        d.displayData(i);
    }

    return 0;
}
