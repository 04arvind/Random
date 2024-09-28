#include<iostream>
using namespace std;

int main(){int n,r;
   cout<<"enter value of n : ";
    cin>>n;
    cout<<"enter value of r : ";
    cin>>r;
    int nfact=1, rfact=1;
    for(int i=n;i>=1;i--){
        nfact*=i;
    }
    for(int i=n-r;i>=1;i--)
    rfact*=i;

    cout<<nfact/rfact;
    return 0;
}