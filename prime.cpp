#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"It is a special no.:";
        exit(1);
    }
    else{
        for(int i=2;i<=n;i++){
            if(n%i==0){
                count++;
               
            }
          
        }
    }
    if(count==1){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    
    return 0;

}