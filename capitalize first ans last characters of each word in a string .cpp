#include<bits/stdc++.h>
using namespace std;

void capitalize(string &str, int l){
    for(int i=0;i<l;i++){
        if(i == 0 || i == (l-1)){
            str[i] = towupper(str[i]);
        }
        else if(str[i] == ' '){
            str[i-1] = towupper(str[i-1]);
            str[i+1] = towupper(str[i+1]);
        }
    }

    cout<< str << endl;
}

int main(){
    string str = "take u forward Is awesome";
    //cout<<"enter the string : ";
    //cin>>str;
    int l = str.length();
    capitalize(str,l);
return 0;
}
