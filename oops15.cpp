#include<iostream>
using namespace std;
class unary
{
    private:
    int value;
    public:
        unary (int value)
        {
            this->value=value;
        }


        unary operator-()
        {
            return unary(-value);
        }

        unary operator++()
        {

            return ++value;
        }

         unary operator++(int nouse)
        {

            return value++;
        }

        unary operator--()
        {
            return --value;
        }


        unary operator--(int nouse)
        {
            return value--;
        }


void display()
{

    cout<<value<<endl;
}
};

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
