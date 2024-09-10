#include<iostream>
#include<string>
using namespace std;

int sumofnum(string &str){
    int l = str.length();
    int sum = 0;
    string tempsum = "";
    for(int i=0;i<l;i++){
        if(str[i]>='0' && str[i]<='9'){
            tempsum += str[i];
        }
        else{
            sum += atoi(tempsum.c_str()); // atoi() is function for string to integer
            // c_str() makes string array with null terminator pointer
            tempsum = "";
        }
    }
    return sum + atoi(tempsum.c_str());
}

int main(){
    string str;
    cout<<"enter the string : ";
    cin>>str;
    cout<<"sum is : "<<sumofnum(str)<<endl;
    return 0;
}
