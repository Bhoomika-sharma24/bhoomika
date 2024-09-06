#include<iostream>
using namespace std;
class Calculate{
public:
 double calculatearea(double side)
 {
 return side*side;}
 double calculatearea(double length,double breadth)
 {
 return length*breadth;
 }
double calculatearea(double base,float height )
{
return (base*height)/2;
}
};


int main()
{
Calculate d1;
cout<<d1.calculatearea(5.0d)<<endl;
cout<<d1.calculatearea(2.3d,3.4d)<<endl;
cout<<d1.calculatearea(2.3d,4.4f)<<endl;
return 0;


}
