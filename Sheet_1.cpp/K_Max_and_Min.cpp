#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    int max=A;
    if (B>max) max=B;
    if (C>max) max=C;
    
    int min=A;
    if(B<min) min=B;
    if(C<min) min=C;

    cout << min <<" " << max;
    
   
}