


#include <iostream>
#define pi 3.14
using namespace std;
float sheyda(int t)
{
    return pi*t*t;
}
float zare(int o)
{
    return pi*o*2;
}
int main()
{
    int r;
    cout<<"enter Radius:";
    cin>>r;
    cout<<"Area of circle is:"<<sheyda(r)<<endl;
    cout<<"perimeter of circle is :"<<zare(r);
    return 0;
}