#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    const long double pi= 3.141592653;
    long double Area,R;
    cin>>R;
    Area=pi*R*R;
    cout<< fixed << setprecision(9)<<Area<<endl;
}