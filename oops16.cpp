#include<iostream>
using namespace std;
class unary
{
    private:
    int value;
     public:
           unary()
          {
          }

    unary (int value)
    {
            this->value=value;
    }

    friend unary operator-(unary&);
    friend unary operator++(unary&);
    friend unary operator++(unary&,int nouse);
    friend unary operator--(unary&);
    friend unary operator--(unary&,int nouse);



    void display()
    {

        cout<<value<<endl;
    }
};



        unary operator-(unary &d2)
        {
            return unary(-(d2.value));
        }

        unary operator++(unary &d3)
        {

            return (++(d3.value));
        }

         unary operator++(unary &d4,int nouse)
        {

            return ((d4.value)++);
        }

        unary operator--(unary &d5)
        {
            return ( --(d5.value));
        }


        unary operator--(unary &d7,int nouse)
        {
            return ((d7.value)--);
        }

int main()
{

    unary d1(5);
    unary d2=(-d1);
    d2.display();
    (++d1);
    d1.display();
    (d1++);
    d1.display();
    (--d1);
     d1.display();
    (d1--);
     d1.display();


}


