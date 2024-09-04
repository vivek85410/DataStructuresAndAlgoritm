#include<iostream>
using namespace std;

int printseries(int x){
    // base case
    if((x==1)||(x==0)) {
      return(x);
   }else {
      return(printseries(x-1)+printseries(x-2));
   }
}

int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";

   while(i < x) {
      cout << " " << printseries(i);
      i++;
   }
   return 0;
}
