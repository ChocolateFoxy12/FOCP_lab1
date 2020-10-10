#include <iostream>
#include <array>

using namespace std;
int main ()
{
    float a1, b1, c1, a2, b2, c2;

    cout<<"Hello! I'll find the X and Y from this equation:"<<endl; cout<<endl;
    cout<<"{a1x+b1y=c1"<<endl;
    cout<<"{a2x+b2y=c2"<<endl; cout<<endl;
    cout<<"Please choose your a1, b1, c1 & a2, b2, c2 down below :D"<<endl; cout<<endl;
    cout<<"a1: "; cin>>a1;
    cout<<"b1: "; cin>>b1;
    cout<<"c1: "; cin>>c1; cout<<endl;
    cout<<"and: "<<endl; cout<<endl;
    cout<<"a2: "; cin>>a2;
    cout<<"b2: "; cin>>b2;
    cout<<"c2: "; cin>>c2; cout<<endl;

    cout<<"The answers are:"<<endl; cout<<endl;

    float x1=(b1*c2-b2*c1)/(b1+a1*b2);

    cout<<"x="<<x1<<endl;

    float y=(c1-a1*x1)/b1;

    cout<<"y="<<y; cout<<endl;

    return 0;
}
