#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main () {
  int a,i,c,d,e;
  long long b;
  cin >> a ;
  vector<int>four;
  vector<int>notfour;
  vector<int>total;
  int s = total.size();
  d=0;
  for (i=0; i<a; i++) {
    cin >> b;
  while  (b>0){

      if ((b%10 ) == 4){
      d = d+1 ;
    }else {
      e = 0;

    }


        b = b/10;


    }
    total.push_back(d);
     d=0;
    }
    for (i=0;i<a;i++){
         cout << total[i]<<endl;}


  return 0;
}
