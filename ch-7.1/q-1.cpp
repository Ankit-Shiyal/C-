#include <iostream>
using namespace std;

class Calculate{

public:
      void Calculator(int a, int b){

        cout<<"Division :" << a/b<<endl;
    }

       void Calculator(int a, int b, int c){

        cout<<"Substraction :" << a-b-c<<endl;
    }

        void Calculator(int a, int b, int c, int d){

        cout<<"Multiplication :" << a*b*c*d<<endl;
    }

        void Calculator(int a, int b, int c, int d, int e){

        cout<<"Addition :" << a+b+c+d+e<<endl;
    }
};

int main(){
    Calculate cal;
    cal.Calculator(10,20,30,40,50);
    cal.Calculator(100,18,22);
    cal.Calculator(12,6);
    cal.Calculator(12,13,14,15);
    

    return 0;
}


