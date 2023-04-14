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
*/
