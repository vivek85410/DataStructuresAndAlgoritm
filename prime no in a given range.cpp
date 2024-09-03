#include<iostream>
#include<math.h>
using namespace std;

bool checkprime(int n){
    int cnt = 0;
    for(int i=0;i<= sqrt(n);i++){
        if(n%i == 0){
            cnt++;
            if(n/i != i){
            cnt++;
        }
        }
    }
    if(cnt == 2){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int start_no = 2, end_no = 10;
    for(int i=2;i<=10;i++){
       bool ans = checkprime(i);
       if(ans == true){
        cout<<i<<" ";
       }
    }

return 0;
}
