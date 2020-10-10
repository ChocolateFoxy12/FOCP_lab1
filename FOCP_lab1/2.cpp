#include <iostream>

using namespace std;
main ()
{
    int times;

    cout<<"how many times should it be repeated?"<<endl;
    cin>>times; cout<<endl;

    for (int i=0;i<times;i++)
    {cout<<"lol"<<endl;}

    int total_money, banknote_value;

    cout<<"the value of banknote: "; cin>>banknote_value;
    cout<<"amount of money: "; cin>>total_money;

    int banknotes=0;


    for (int banknotes=0; total_money>=50;banknotes++)
    {
        banknotes=banknotes-50;
    }

    cout<<banknotes;

    im lost now XD

    return 0;
}
