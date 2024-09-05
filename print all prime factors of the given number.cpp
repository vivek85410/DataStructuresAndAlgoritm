#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

vector<int> prime_factor(int n){
    vector<int>arr;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
        while(n%i == 0){
            n = n/i;
        }
    }
    return arr;
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    vector<int>ans = prime_factor(n);
    cout<<"prime factors are : ";
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
return 0;
}
