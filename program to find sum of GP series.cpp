#include<iostream>
#include<math.h>
using namespace std;

int findGp(int a, float r, int n){
    float sum = (a*(pow(r,n) -1)) / (r -1);
    return sum;
}

int main(){
    float a=2,r=1.5;
    int n = 4;
    float ans = findGp(a,r,n);
    cout<<"sum of Gp : "<<ans;
return 0;
}
