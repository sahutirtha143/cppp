#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rem;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    cout<<"Reverse of the no: "<<rev;
    return 0;
}
