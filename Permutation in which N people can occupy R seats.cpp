#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n<=1){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int n,r;
    cout<<"enter N ans R : ";
    cin>>n>>r;
    int ans = factorial(n)/factorial(n-r);
    cout<<ans<<endl;
return 0;
}
