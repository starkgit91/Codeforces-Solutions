// CF Round 929 Div3 Q2 & 1 
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;cin>>n;
  vector<int> vec(n); // hitpoint
  for(int i=0;i<n;i++) cin>>vec[i];
  // string s;cin>>s;
  // int x = 100000;
  vector<pair<int, int>> query(n,make_pair(0,0));
  priority_queue<pair<int,int>> pqueue;
  unordered_map<int,int> hashmap;
  unordered_map<int,int>hmap;
  unordered_set<int> sett;
  vector<int> dp(n+1,0);
  queue<int> que;
  // sort(vec.begin(),vec.end());
  int count=0;
  int cnt=0;
  bool flag=false;
  bool flag2 = false;
  int res=0;
  int extra=0;
  // vector<vector<int>> mat(n,vector<int>(2*m));
  loop(i,0,n){
    count += vec[i];
  }
  if(count%3==0){
    cout<<0<<endl;
    return;
  }
  if(count%3==2){
    cout<<1<<endl;
    return;
  }
  if(count%3==1){
    for(int i=0;i<n;i++){
      if(vec[i]%3==1){
        flag=true;
        break;
      }
    }
    if(flag==true){
      cout<<1<<endl;
    }
    else{
      cout<<2<<endl;
    }
    return;
  }

}
