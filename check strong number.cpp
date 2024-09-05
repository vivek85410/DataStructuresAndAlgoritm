#include<iostream>
using namespace std;

int factorialsum(int n){
    // base case
    if(n<=1){
        return 1;
    }

    return (n*factorialsum(n-1));
}

int main(){
    int n;
    cout<< "enter the number : ";
    cin>>n;
    int ans = n;
    int sum=0;
    while(n>0){
        sum+=factorialsum(n%10);
        n = n/10;
    }
    if(sum == ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}
