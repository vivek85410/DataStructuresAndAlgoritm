#include<iostream>
using namespace std;

float sumofAp(float a, float d, int n){
    float sum = (n/2.0)*(2.0*a + (n-1)*d);
    return sum;

}

int main(){

    float a = 1.5, d = 3, n = 5;
    cout<<"sum of given Ap series: "<< sumofAp(a,d,n) << endl;
    return 0;
}
