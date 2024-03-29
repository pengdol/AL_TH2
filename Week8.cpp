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

2. 숫자 맞추기

int D[10001][10];
int From[10001];
int To[10001];
int Dir[10001][10];
int Cost[10001][10];

int f(int idx, int n, int turn) {
  if(idx == n) return 0;

  int& ret = D[idx][turn];
  if(ret != -1) return ret;

  int cur = (From[idx] + turn) % 10;

  int leftTurn = (To[idx] - cur + 10) % 10;
  int leftCostSum = f(idx + 1, n, (turn + leftTurn) % 10) + leftTurn;

  int rightTurn = (cur - To[idx] + 10) % 10;
  int rightCostSum = f(idx + 1, n, turn) + rightTurn;

  if(rightCostSum > leftCostSum) {
    ret = leftCostSum;
    Dir[idx][turn] = 1;
    Cost[idx][turn] = leftTurn;
  }
  else {
    ret = rightCostSum;
    Dir[idx][turn] = -1;
    Cost[idx][turn] = rightTurn;
  }

  return ret;
}

void print(int idx, int n, int turn) {
  if (idx == n) return;

  int move = Dir[idx][turn] * Cost[idx][turn];
  cout << idx + 1 << ' ' << move << '\n';

  if(Dir[idx][turn] > 0)
    print(idx + 1, n, (turn + move + 10) % 10);
  else print(idx + 1, n, turn);
}

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) scanf("%1d", &From[i]);
  for(int i = 0; i < n; i++) scanf("%1d", &To[i]);
  for(int i = 0; i < 10001; i++)
    for(int j = 0; j < 10; j++) D[i][j] = -1;
  cout << f(0, n, 0) << '\n';
  print(0, n, 0);
}
*/
