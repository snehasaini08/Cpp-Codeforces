#include<iostream>
using namespace std;
int main()
{
    int A,B;
    char ch;
    cin>>A>>ch>>B;
    if(A>B && ch=='>'){
        cout<<"Right";
    }
    else if(A<B && ch=='<'){
        cout<<"Right";
    }
    else if(A==B && ch=='='){
        cout<<"Right";
    }
    else cout<<"Wrong";
}