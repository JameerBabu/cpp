#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main () {
  int a,b,c,d,i;
  vector<int>rem;
  cin >> a;
  for (i=0;i<a;i++) {
    cin >> b >> c;
    d = b%c;
    rem.push_back(d);

  }
  for (i=0;i<a;i++){
       cout << rem[i]<<endl;
     }




  return 0;
}
