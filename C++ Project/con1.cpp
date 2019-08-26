#include<iostream>
using namespace std;
class Square
{
     public:
         float side;
         Square(float s)  //Parameterized Constructor
         {  
              side = s;
         }
};
int main()
{
      Square sq(5);
      cout <<"Area of Square : "<<sq.side*sq.side;
}
