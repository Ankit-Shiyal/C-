#include <iostream>
using namespace std;

class Cricket{

public:
    virtual int getMatchOvers(){

        return 0;
    }
};
class T20Match : public Cricket{

public:
    virtual int getMatchOvers() override{

        return 20;
    }
};

class TestMatch : public Cricket{

public:
    virtual int getMatchOvers() override{

        return 80;
    }
};

int main()
{
    Cricket* Match;
    T20Match t20;
    TestMatch Test;


    Match=&t20;
    cout<<"T20 Match Overs: "<<Match->getMatchOvers()<<endl;


    Match=&Test;
    cout<<"Test Match Over: "<<Match->getMatchOvers()<<endl;


    return 0;
}
