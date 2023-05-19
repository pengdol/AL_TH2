#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

/*
1. 대표선수
vector<pair<int, int>> v;
int main() {
  int n, m, ans = 100000001;
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      int a;
      cin >> a;
      v.push_back(make_pair(a, i));
    }
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < n * m - n; i++) {
    vector<int> vv(n);
    for(int j = 0; j < n; j++) 
      vv[v[i + j].second] += 1;
    int ret = 1;
    for(int j = 0; j < n; j++) 
      ret *= vv[j];
    if(ret == 1) {
      if(ans > v[i + n - 1].first - v[i].first)
      ans = v[i + n - 1].first - v[i].first;
    }
  }
  cout << ans;
}*/
