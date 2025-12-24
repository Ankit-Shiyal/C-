#include <iostream>
using namespace std;

class Person{
public:
    string Name;

public:
    void setName(string n){
        Name = n;
    }

    void showName(){
        cout << "Name : " << Name << endl;
    }
};

int main(){
    Person s1;
    s1.setName("Ankit");
    s1.showName();

    Person s2;
    s2.setName("Sunil");
    s2.showName();

    return 0;
}
