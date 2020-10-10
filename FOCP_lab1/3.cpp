#include <iostream>
#include <array>

using namespace std;
int main ()
{
    array <int, 100> data;

    for(int i=0;i<100;i++)
    {data[i]=i;}

    for(int i=0;i<100;i++)
    {cout<<data[i]<<endl;}

    return 0;
}
