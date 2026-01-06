#include <iostream>
using namespace std;

class RBI{

public:
    float rate;

    void getROI(){

        rate = 0.0;

        cout << "interest of RBI  : " << rate << endl;
    }
};

class SBI : virtual public RBI{

public:
    void getROI(){

        rate = 5.0;

        cout << "interest of SBI  : " << rate << endl;
    }
};

class BOB : virtual public SBI{

public:
    void getROI(){

        rate = 6.8;

        cout << "interest of BOB  : " << rate << endl;
    }
};

class ICICI : virtual public BOB{
    
public:
    void getROI(){

        rate = 8.8;

        cout << "interest of ICICI  : " << rate << endl;
    }
};

int main()
{

    RBI r;
    SBI s;
    BOB b;
    ICICI i;

    r.getROI();
    s.getROI();
    b.getROI();
    i.getROI();

    return 0;
}