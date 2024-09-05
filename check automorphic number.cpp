#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool automorphicnumber(int n){
    int ans = n*n;
    while(n>0){
        if(n%10 != ans % 10)
            return false;
        n /= 10;
        ans /= 10;
    }
    return true;
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    bool ans = automorphicnumber(n);
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}
