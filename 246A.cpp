void solve(){
  int n;cin>>n;
  vector<int> vec(n);
  // string s;cin>>s;
  // for(int i= 0;i<n;i++) cin>>vec[i];
  // int x = 100000;
  // vector<pair<int, int>> query(n,make_pair(0,0));
  priority_queue<pair<int,int>> pqueue;
  unordered_map<int,int> hashmap;
  unordered_map<int,int>hmap;
  unordered_set<int> sett;
  vector<int> dp;
  queue<int> que;
  // sort(vec.begin(),vec.end());
  int count=0;
  int cnt=0;
  bool flag=false;
  bool flg = false;
  int res=0;
  // vector<vector<int>> mat(5,vector<int>(5));
  if(n<3) cout<<-1<<endl;
  else{
    dp.push_back(n-1);
    dp.push_back(n);
    for(int i=n-2;i>=1;i--){
      dp.push_back(i);
    }
    for(auto it:dp ) cout<<it<<" ";
    cout<<"\n";
  }
}