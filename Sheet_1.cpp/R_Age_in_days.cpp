#include<iostream>
using namespace std;
int main()
{
    int N;
    int year,rem,month,days;
    cin>>N;
    year=N/365;
    rem=N%365;
    //cout<<year<<rem;
    month=rem/30;
    days=rem%30;
    cout<<year <<" " <<"years"<<endl<<month<<" "<<"months"<<endl<<days<<" "<<"days";




}