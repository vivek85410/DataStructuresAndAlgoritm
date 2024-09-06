#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int flag=0;
    for(int i=32;i>=0;i--){
        if((n>>i)&1){
            flag=1;
            cout<<1;
        }
        else{
            if(flag==1){
                cout<<0;
            }
        }
    }

return 0;
}
