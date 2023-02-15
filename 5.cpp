#include<bits/stdc++.h>
using namespace std;

int main(){

   int count1=1;
   int count2=0;

   for(int i=0;i<5;i++){
    count1=i;
    count2=i*2;
    for(int j=0;j<=5-i;j++){
        cout<<" ";
    }
    for(int k=0;k<=i;k++){
       cout<<count1+1;
       count1++;
    }
    for(int l=0;l<i;l++){
      cout<<count2;
      count2--;
    }
    cout<<"\n";
   }

    return 0;
}
