#include <iostream>
using namespace std;

class person{
public:
    void name()
    {
        cout << "Ankit" << endl;
    }
};

class men : public person{
public:
    void age(){
        cout << "my age is 20" << endl;
    }
};

int main(){

    men n1;
    n1.name();  
    n1.age(); 

    return 0;
}
