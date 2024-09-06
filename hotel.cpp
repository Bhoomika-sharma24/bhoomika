#include<iostream>
using namespace std;

class hotel{
private:
int rno;
string name;
float tariff;
int nod;

 float calc()
 {
 for(int i=0;i<3;i++)
 {
 float amount=nod*tariff;
 if(nod*tariff>10000)
 {
 amount=1.05*nod*tariff;
 }
 return amount;
 }
 }


 public:
 void checkin(int r,string n,float t,int nd)
 {
for(int i=0;i<3;i++){
 rno=r;
 name=n;
 tariff=t;
 nod=nd;
 }
 }


void checkout()
{
for (int i=0;i<3;i++){
cout<<"room no is: "<<rno<<endl;
cout<<"name is: "<<name<<endl;
cout<<"tariff is: "<<tariff<<endl;
cout<<"nod is: "<<nod<<endl;
cout<<"amount is"<<calc()<<endl;
}
}
};


int main()
{
int rno;
string name;
float tariff;
int nod;
hotel h1[3];
for(int i = 0;i<3;i++)
{
cout<<"Enter the room no: ";
cin>>rno;
cout<<"enter the name ";
cin>>name;
cout<<"enter tariff";
cin>>tariff;
cout<<"enter nod";
cin>>nod;
h1[i].checkin(rno,name,tariff,nod);
 }
for(int i = 0;i<3;i++)
{
h1[i].checkout();
 }
return 0;
}




