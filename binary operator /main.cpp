
#include<iostream>
using namespace std;

class A
{
    int a,b,summ,dif,prod;
    float div;
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void A :: get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}

inline void A :: sum()
{
    summ = a+b;
    cout << "Addition of two numbers: " <<summ << "\n";
}

inline void A :: difference()
{
    dif = a-b;
    cout << "Difference of two numbers: " <<dif << "\n";
}

inline void A :: product()
{
    prod = a*b;
    cout << "Product of two numbers: " << prod << "\n";
}

inline void A ::division()
{
    div=a/b;
    cout<<"Division of two numbers: "<<div<<"\n" ;
}

int main()
{
    cout << "Program using inline function\n";
    A ob1;
    ob1.get();
    ob1.sum();
    ob1.difference();
    ob1.product();
    ob1.division();

}
