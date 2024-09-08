#include <iostream>
using namespace std;

bool palindrome(int i, string &s){

    // base case
    if(i>=s.length()/2){
        return true;
    }

    if(s[i]!=s.length()-1-i){
        return false;
    }
    return palindrome(i+1,s);

}

int main() {

	// Example string.
	string s = "madam";
	bool ans = palindrome(0,s);
	if(ans == 0){
        cout<<"true";
	}
	else{
        cout<<"false";
	}
	cout<<endl;
	return 0;
}
