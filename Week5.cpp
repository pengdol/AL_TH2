#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define INF 1234567890
using namespace std;
/*
1. 국영수

struct Person {
  char name[11];
  int kuk, yeong, su;
};
bool cmp(const Person u, const Person v){
  if (u.kuk > v.kuk)
    return true;
  else if (u.kuk == v.kuk) {
    if (u.yeong < v.yeong)
      return true;
    else if(u.yeong == v.yeong) {
      if (u.su > v.su)
        return true;
      else if(u.su == v.su)
        return strcmp(u.name, v.name) <= 0;
    }
  }
  return false;
}
Person a[100000];
int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
    scanf("%s %d %d %d", a[i].name, &a[i].kuk, &a[i].yeong, &a[i].su);
  sort(a, a + n, cmp);
  for(int i = 0; i < n; i++){
    printf("%s\n", a[i].name);
  }
}

2. sugar delivery(Bottom-up)

int d[5001];
int main() {
  int n;
  cin >> n;
  for(int i = 0; i < 5001; i++)
    d[i] = INF;
  d[3] = 1;
  d[5] = 1;
  for(int i = 6; i <= 5000; i++)
    d[i] = min(d[i - 3], d[i - 5]) + 1;
  if(d[n] < INF)
    printf("%d", d[n]);
  else
    printf("-1");
}

3. sugar delivery(Top-down)

int n, m, d[5001];
int solve(int i){
  if (i > n)
    return INF;
  if (i == n)
    return d[i] = 0;
  if(d[i] < INF)
    return d[i];
  int ret = 0;
  ret += min(solve(i + 5), solve(i + 3)) + 1;
  d[i] = ret;
  return ret;
}
int main(){
  for(int i = 0; i < 5001; i++)
    d[i] = INF;
  cin >> n;
  int ans = solve(0);
  if(d[n] < INF)
    printf("%d", d[0]);
  else
    printf("-1");
}

4. 2 x n 타일링

int d[1001];
int main() {
  d[0] = 1;
  d[1] = 1;
  int n;
  cin >> n;
  for(int i = 2; i <= n; i++) {
    d[i] = d[i - 1] + d[i - 2];
  }
  printf("%d", d[n]);
}*/
