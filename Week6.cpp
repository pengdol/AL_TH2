#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
/*
1. 붕어빵 판매하기

int a[1001];
int d[1001];
int main() {
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> a[i];
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++) {
      if(d[i] < d[i-j] + a[j])
        d[i] = d[i-j] + a[j];
    }
  }
  cout << d[n];
}

2. 1, 2, 3 더하기

int t[11];
int main() {
  int n, m;
  cin >> n;
  t[1] = 1;
  t[2] = 2;
  t[3] = 4;
  for(int i = 4; i <= 10; i++)
    t[i] = t[i - 1] + t[i - 2] + t[i - 3];
  for(int i = 1; i <= n; i++){
    int m;
    cin >> m;
    printf("%d\n", t[m]);
  }
}

3. 스티커

int a[100001][2];
int d[100001][3];
int main(){
  int t, n, big;
  cin >> t;
  for(int i = 1; i <= t; i++) {
    cin >> n;
    for(int j = 1; j <= n; j++)
      cin >> a[j][0];
    for(int j = 1; j <= n; j++)
      cin >> a[j][1];
    for(int i = 1; i <= n; i++) {
      d[i][0] = max(d[i - 1][1], d[i - 1][2]);
      d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[i][0];
      d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[i][1];
    }
    big = max(d[n][0], max(d[n][1], d[n][2]));
    cout << big << "\n";
  }
}

4. 포도주 시식
int a[10001];
int d[10001];
int main(){
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> a[i];
  d[1] = a[1];
  d[2] = a[1] + a[2];
  for(int i = 3; i <= n; i++){
    d[i] = d[i - 1];
    d[i] = max(d[i], max(d[i - 2] + a[i], d[i - 3] + a[i - 1] + a[i]));
  }
  cout << d[n];
}
*/
