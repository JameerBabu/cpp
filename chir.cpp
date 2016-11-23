#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main () {
int a,i,b,c,j,d,e,f;
cin >> a ;
  vector<int>second;
  for (i=0;i<a;i++) {

    cin >> b >> c >> d;
    if (b>c && b>d ){
      if (c>d) {
        second.push_back(c);}
        else{
          second.push_back(d);
        }


    }
      else {
        if (c>d){
          second.push_back(c);}
          else{
            if (d>c){
              second.push_back(d);}
              else{
                second.push_back(a);
              }
            }
          }

}
 for (i=0;i<a;i++){
      cout << second[i]<<endl;}


  return 0;
}
