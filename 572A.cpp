
void solve(){
  int n,m;cin>>n>>m;
  vector<int> vec(n);
  vector<int> vec2(m);
  // string s;cin>>s;
  int k,l;cin>>k>>l;
  for(int i= 0;i<n;i++) cin>>vec[i];
  loop(i,0,m) cin>>vec2[i];
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
  int max = vec[k-1];
  int min = vec2[m-l];
  bool tr = (max<min);
  True(tr);
}