#include <iostream>

using namespace std;
main ()
{
    int my_number, messege;
    float a, b, c, a1, b1, c1, a2, b2, c2;

    cout<<"hello! nice to see you!"<<endl;

    cout<<"please, type your number: ";
    cin>>my_number;

    if (my_number==14||my_number==7)
        {cout<<"nice! :D"<<endl;
          if (my_number%2==0){cout<<"what an even number!"<<endl;}
          else {cout<<"what an odd number!"<<endl;}}
    else {cout<<"okay i guess"<<endl;
         if (my_number%2==0){cout<<"ur number s even"<<endl;}
          else {cout<<"ur number s odd"<<endl;}}
          cout<<endl; cout<<endl;

    cout<<"what about some math? please choose your a, b & c!"<<endl;
    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    cout<<"c: "; cin>>c;

    float x=(c-b)/a;

    cout<<"ax+b=c <==> x="<<x<<endl;

    cout<<"and now something more! please choose your a1, b1, c1 & a2, b2, c2!"<<endl;
    cout<<"a1: "; cin>>a1;
    cout<<"b1: "; cin>>b1;
    cout<<"c1: "; cin>>c1;
    cout<<"the second set: "<<endl;
    cout<<"a2: "; cin>>a2;
    cout<<"b2: "; cin>>b2;
    cout<<"c2: "; cin>>c2;

    float x1=(b1*c2-b2*c1)/(b1+a1*b2);

    cout<<"x="<<x1<<endl;

    float y=(c1-a1*x1)/b1;

    cout<<"y="<<y;

    return 0;
}
