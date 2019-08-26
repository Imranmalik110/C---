#include <iostream>
using namespace std;
int main()
{
     char color='R';
     switch(color)
     {
           case 'R': cout<<"Red"<<endl;
               break;
           case 'G': cout<<"Green"<<endl;
               break;
           case 'B': cout<<"Blue"<<endl;
               break;
           case 'O': cout<<"Orange"<<endl;
               break;
           case 'P': cout<<"Pink"<<endl;
               break;
           case 'W': cout<<"White"<<endl;
               break;
           case 'Y' : cout<<"Yellow"<<endl;
               break;
           default: cout<<"Inavlid Color"<<endl;
     }
     return 0;
}
