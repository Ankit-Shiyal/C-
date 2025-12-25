#include <iostream>

using namespace std;

class Parent{
   private:
      char name[50] = "Sunil";

   public:
      void getParentName(){
         cout << "the Student name is " << "Ankit" << endl;
      };
   };

   class Child : public Parent{

   public:
      void parentName(){
      getParentName();
      }

      void getName(){
         char name;
        name;
     }
   };

int main(){   

   Child c1;
   c1.parentName();

   return 0;
}
