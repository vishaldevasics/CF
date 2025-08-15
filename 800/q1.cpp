#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n ;
  cin>>n;
  int dig = log10(n);
  int ans = dig*9;
  int f = n/pow(10,dig);
  cout<<ans + f<<endl;
}

int main(){
  int n;
  cin>>n;
  while(n--){
    solve();
  }
  return 0;
}