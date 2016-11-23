#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main (){
  int a,b,c,d,i;
  vector<int>root;
  cin >> a;
  for (i=0;i<a;i++) {
    cin >> b;
    c = sqrt(b);
    root.push_back(c);
  }
  for (i=0;i<a;i++){
         cout << root[i]<<endl;
       }

  return 0;
}
