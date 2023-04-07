#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
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
*/
