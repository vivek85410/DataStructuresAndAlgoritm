#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n<=1){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int n,r;
    cout<<"enter N ans R : ";
    cin>>n>>r;
    int ans = factorial(n)/factorial(n-r);
    cout<<ans<<endl;
    /*
    int ans = 1;
	for (int i = n; i >= n - r + 1; i--) {
		ans *= i;
	}
	cout << ans;
    
    */
return 0;
}
