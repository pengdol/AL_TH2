#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
/*
1. ranking system

int main(){
  pair<int, pair<int, int>> p[100001];
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d %d %d", &p[i].first, &p[i].second.first, &p[i].second.second);
  sort(p, p + n, greater<>());
  for(int i = 0; i < n; i++)
    printf("%d %d %d\n", p[i].first, p[i].second.first, p[i].second.second);
}

2. 괄호

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    char str[51];
    cin >> str;
    int c = 0;
    stack<char> s;
    for(int j = 0; str[j]; j++){
      if(str[j] == '(')
        s.push(str[j]);
      else{
        if(s.empty() || s.top() == ')'){
          c = 1;
          break;
        }
        else
          s.pop();
      }
    }
    if(!s.empty() || c)
      printf("NO\n");
    else
      printf("YES\n");
  }
}

3. map

int main(){
  map<int, int> m;
  m.insert(make_pair(4, 5));
  m[5] = 6;
  printf("%d\n", m.find(4)->second);
  return 0;
}

4. sort

bool cmp(const int a, const int b){
  return a>b;
}
int main(){
  int arr1[10] = { 1, 3, 8, 2, 7, 10, 20, 4, 6, 5};
  vector<int> arr2(arr1, arr1 + sizeof(arr1)/sizeof(int));
  int n = 10;
  sort(arr1, arr1 + n);
  for(int i = 0; i < 10; i++)
    printf("%d ", arr1[i]);
  printf("\n");
  sort(arr2.begin(), arr2.end());
  for(int i = 0; i < 10; i++)
    printf("%d ", arr1[i]);
  printf("\n");
  sort(arr1, arr1+n, cmp);
  for(int i = 0; i < 10; i++)
    printf("%d ", arr1[i]);
  return 0;
}
*/
