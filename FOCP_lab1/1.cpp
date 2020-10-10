#include <iostream>

using namespace std;
main ()
{
    int my_number, messege;
    float a, b, c;

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
    cout<<"a: "; cin>>a; cout<<endl;
    cout<<"b: "; cin>>b; cout<<endl;
    cout<<"c: "; cin>>c; cout<<endl;

    float x=(c-b)/a;
  //  float y=
   // float z=

    cout<<"the x, y & z are: "<<endl;
    cout<<"x="<<x<<endl;
   // cout<<"y="<<y<<endl;
  //  cout<<"z="<<z<<endl;

    return 0;
}
