#include <iostream>
using namespace std;


int main() {
    string name;
    double unit;
    double charges;

    cout<<"enter the name of the user : ";
    cin>>name;

    cout<<"Enter the unit: ";
    cin>>unit;

     if(unit<=100)
     {
         charges=0.60*unit;
     }
     else if(unit>=300)
     {
         charges=(0.60*100)+0.80*(unit-100);
     }
     else
     {
         charges=(0.60*100)+(0.80*200)+0.90*(unit-300);
     }
     if(charges>300)
     {
         charges=charges+(0.15*charges);
     }
     cout<<"charge is : "<<charges<<endl;

    return 0;
}
