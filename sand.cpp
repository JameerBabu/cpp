#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main () {
int t,i;
long long a,b,c;
cin >> t;
vector<int>second;
for (i=0;i<t;i++) {
  cin >> a >> b >>c;

 if (a>b) {
   if (a>c){
     if (b>c) {
       second.push_back(b);
     }else {
      second.push_back(c);
     }
   }else{
     second.push_back(a);

   }
 }else{
   if (a>c) {
     second.push_back(a);
   }else {
     if (b>c) {
       second.push_back(c);
     }else{
       second.push_back(b);
     }
   }



 }






}for (i=0;i<t;i++){
    cout << second[i]<<endl;}


  return 0;


}
