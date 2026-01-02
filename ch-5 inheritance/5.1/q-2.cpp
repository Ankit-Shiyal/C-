#include <iostream>
using namespace std;


class P{
protected:
    float temperature;   
};

class Q : public P{
protected:
    float fahrenheit;

public:
    void toFahrenheit(){
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;

        fahrenheit = (temperature * 9 / 5) + 32;
        cout << "Temperature convert in Fahrenheit: " << fahrenheit << endl;
    }
};


class R : public Q{
public:
    void toKelvin(){
        float kelvin;
        kelvin = temperature + 273.15;

        cout << "Temperature convert in Kelvin: " << kelvin << endl;
    }
};

int main(){
    R obj;

    obj.toFahrenheit();
    obj.toKelvin();

    return 0;
}
