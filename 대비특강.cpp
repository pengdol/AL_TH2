#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
/*
1. 2798
int main() {
  int N, M, max = 0;
  int num[300001];
  cin >> N >> M;
  for(int i = 0; i < N; i++) 
    cin >> num[i];
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      for(int k = 0; k < N; k++) {
        if(num[i] + num[j] + num[k] > max && num[i] + num[j] + num[k] <= M && num[i] != num[j] && num[i] != num[k] && num[j] != num[k])
          max = num[i] + num[j] + num[k];
      }
    }
  }
  cout << max;
}

2. 5585
int main() {
  int a[6] = {500, 100, 50, 10, 5, 1};
  int n, ans = 0;
  cin >> n;
  int money = 1000 - n;
  while (money != 0) {
    for(int i = 0; i < 6; i++) {
      if (money - a[i] >= 0){
        money -= a[i];
        ans++;
        break;
      }
    }
  }
  cout << ans;
}

3. 1476
int main(){
  int E, S, M, ans = 1;
  cin >> E >> S >> M;
  while(1) {
    if((ans - E) % 15 == 0 && (ans - S) % 28 == 0 && (ans - M) % 19 == 0) {
      cout << ans;
      return 0;
    }
    else
      ans++;
  }
}

4. 1065
int o(int n) {
  int o = n % 10;
  return o;
}
int t(int n) {
  n /= 10;
  int t = n % 10;
  return t;
}
int h(int n) {
  n /= 10;
  n /= 10;
  int h = n % 10;
  return h;
}
int main() {
  int n, ans = 0;
  cin >> n;
  if (n < 100){
    cout << n;
    return 0;
  }
  else if (n == 1000){
    cout << 144;
    return 0;
  }
  else {
    for(int i = n; i > 100; i--) {
      if(o(i) - t(i) == t(i) - h(i) || h(i) - t(i) == t(i) - o(i))
        ans++;
    }
  }
  cout << ans + 99;
}

5. 1026
bool cmp(int a, int b) {
  return a > b;
}
int main() {
  int A[50], B[50];
  int n, min = 101;
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> A[i];
  for(int i = 0; i < n; i++)
    cin >> B[i];
  sort(A, A + n);
  sort(B, B + n, cmp);
  int ans = 0;
  for(int i = 0; i < n; i++)
    ans += A[i] * B[i];
  cout << ans;
}*/
