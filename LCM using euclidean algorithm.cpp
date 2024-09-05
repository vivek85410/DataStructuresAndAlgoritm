#include<iostream>
using namespace std;

int findGcd(int a, int b){
    //base case
    if(b == 0){
        return a;
    }
    return findGcd(b,a%b);
}

int main(){
    int n1 = 4, n2 = 8;
    // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);
    int lcm = (n1*n2) / gcd ;
    cout << "LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
return 0;
}
