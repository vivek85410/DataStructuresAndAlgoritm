#include<bits/stdc++.h>
using namespace std;

void removevowels(string &str){
    for(int i=0;i<str.length();i++){
        str[i] = towlower(str[i]);
    }

    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            continue;
        }
        else{
            cout<<str[i];
        }
    }

}

int main(){

    string str = "Take u Forward";
    removevowels(str);
return 0;
}
