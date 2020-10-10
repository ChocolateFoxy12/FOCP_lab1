#include <iostream>

using namespace std;
main ()
{
    int my_number, messege;

    //cout<<"hello! nice to see you!"<<endl;

    cout<<"type your number: ";
    cin>>my_number;

    if (my_number==14||my_number==7)
        {cout<<"nice! :D"<<endl;
          if (my_number%2==0){cout<<"what an even number!"<<endl;}
          else {cout<<"what an odd number!"<<endl;}}
    else {cout<<"okay i guess"<<endl;
         if (my_number%2==0){cout<<"ur number s even"<<endl;}
          else {cout<<"ur number s odd"<<endl;}}

    return 0;
}
