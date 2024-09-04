#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

void min_max(int n){
    // always store int_max value in min ans int_min value in max
    int Min = INT_MAX, Max = INT_MIN;
    while(n!=0){
        int d = n%10;
        Min = min(Min,d);
        Max = max(Max,d);
        n/=10;
    }
    cout<<"the minimum number is : "<<Min<<endl;
    cout<<"the maximum number is : "<<Max<<endl;
}

int main(){
    int n = 2746;
    min_max(n);
return 0;
}
