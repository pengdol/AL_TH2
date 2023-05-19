#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
/*
1. 줄 세우기
int a[1000001];
int main() {
  int n, max = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int b = 0;
    cin >> b;
    a[b] = a[b - 1] + 1;
    if(a[b] > max) max = a[b];
  }
  cout << n - max;
}

2. 두 번 뒤집기
bool check(int a[], int n) {
  for(int i = 1; i <= n; i++)
    if(a[i] != i) return false;
  return true;
}
int main() {
  int n, c, c_pos, first_start, first_end;
  cin >> n;
  int a[10001];
  int b[10001];
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  if(check(a, n) == true) {
    cout << '1' << ' ' << '1' << '\n' << '1' << ' ' << '1';
    return 0;
  }
  for(int i = 1; i <= n; i++) {
    if(a[i] != i) {
      c = a[i];
      c_pos = i;
      break;
    }
  }
  first_start = c_pos;
  first_end = c;
  reverse(a + c_pos, a + c + 1);
  if(check(a, n) == true) {
    cout << '1' << ' ' << '1' << '\n' <<  c_pos << ' ' << c;
    return 0;
  }
  for(int i = 1; i <= n; i++) {
    if(a[i] != i) {
      c = a[i];
      c_pos = i;
      break;
    }
  }
  reverse(a + c_pos, a + c + 1);
  if(check(b, n) == true) {
    cout << first_start << ' ' << first_end << '\n' <<  c_pos << ' ' << c;
    return 0;
  }
  for(int i = n; i >= 1; i--) {
    if(b[i] != i) {
      c = i;
      c_pos = b[i];
      break;
    }
  }
  first_start = c_pos;
  first_end = c;
  reverse(b + c_pos, b + c + 1);
  if(check(b, n) == true) {
    cout << '1' << ' ' << '1' << '\n' <<  c_pos << ' ' << c;
    return 0;
  }
  for(int i = n; i >= 1; i--) {
    if(b[i] != i) {
      c = i;
      c_pos = b[i];
      break;
    }
  }
  reverse(b + c_pos, b + c + 1);
  cout << first_start << ' ' << first_end << '\n' <<  c_pos << ' ' << c;
}*/
