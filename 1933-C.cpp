
// CF Round 929 Div3 Q3
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b,l;cin>>a>>b>>l;
  // vector<int> vec(n); // hitpoint
  // for(int i=0;i<n;i++) cin>>vec[i];
  // string s;cin>>s;
  // int x = 100000;
  // vector<pair<int, int>> query(n,make_pair(0,0));
  priority_queue<pair<int,int>> pqueue;
  unordered_map<int,int> hashmap;
  unordered_map<int,int>hmap;
  unordered_set<int> sett;
  // vector<int> dp(n+1,0);
  queue<int> que;
  // sort(vec.begin(),vec.end());
  int count=0;
  int cnt=0;
  bool flag=false;
  bool flag2 = false;
  int res=0;
  int extra=1;
  // vector<vector<int>> mat(n,vector<int>(2*m));
  res=a;
  cnt=b;
  count=a*b;
  loop(i,0,30){
    loop(j,0,30){
      int rem = pow(a,i)*pow(b,j);
      if(rem>l){
        break;
      }
      if(l%rem==0) sett.insert(l/rem);
    }
  }
  cout<<(sett.size())<<endl;

}