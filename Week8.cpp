#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define MOD 20150523
using namespace std;
/*
1. 369게임

int dy(char a[]) {
  int i, j, k, len = strlen(a), last = 0, d[2][3] = { {0} }, anum = 0, num;
  for(i = 0; i < len; i++) {
    num = a[i] - '0';
    anum = (anum * 10 + num) % MOD;
    for(j = 0; j < 9; j++) {
      if(j && j % 3 == 0) continue;
      for(k = 0; k < 3; k++) d[1][(j + k) % 3] += d[0][k];
    }
    if(last >= 0) {
      for(j = 0; j < num; j++) {
        if(j && j % 3 == 0) continue;
        d[1][(last + j) % 3]++;
      }
      if(num && num % 3 == 0) last = -1;
      else last = (last + num) % 3;
    }
    for(j = 0; j < 3; j++) {
      d[0][j] = d[1][j] % MOD;
      d[1][j] = 0;
    }
  }
  if(last > 0)
    d[0][last]++;
  return (anum - d[0][1] - d[0][2] + MOD * 2) % MOD;
}

char A[100010], B[100010];
int main() {
  int len, ans, i;
  scanf("%s %s", A, B);
  
  len = strlen(A);
  for(i = len - 1; i > 0; i--) {
    A[i]--;
    if(A[i] >= '0') break;
    A[i] += 10;
  }

  ans = (dy(B) - dy(A) + MOD) % MOD;
  cout << ans;

  return 0;
}
*/
