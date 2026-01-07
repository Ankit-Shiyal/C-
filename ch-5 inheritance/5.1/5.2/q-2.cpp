#include <iostream>
using namespace std;

class A{

public:
    int numberA;

    A(int a){
        numberA = a;
    }
};

class B : virtual public A{
public:
    int numberB;

    B(int a, int b) : A(a){

        numberB = b;
    }
};

class C : virtual public A{

public:
    int numberC;

    C(int a, int c) : A(a){
        numberC = c;
    }
};

class D : public B, public C{

public:
    int numberD;

   

    D(int a,int b,int c,int d):A(a),B(a,b),C(a,c){

         numberD=d;
    }

    void sum(){

        int total;

        total = A::numberA + numberB + numberC + numberD;

        cout << "total " << total << endl;
    }
};

int main(){

    D obj(50,70,10,30);

    obj.sum();


    return 0;
}