#include<iostream>
using namespace std;

int findGcd(int a, int b){
    // loop until both are greater than 0
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if(a == 0){
        return b;
    }
    return a;

}

int main(){
    int n1 = 4, n2 = 8;
    // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);
    int lcm = (n1*n2) / gcd ;
    cout << "LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
return 0;
}
