#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
/*
1. vector

int main(){
  vector<int> v;

  v.push_back(12);
  v.push_back(5);
  v.push_back(96);

  for (int i = 0; i < v.size(); i++)
    printf("%d\n", v[i]);
}

2. stack

int main(){
  stack<int> st;
  
  st.push(4);
  st.push(5);
  st.pop();

  printf("%d\n", st.top());
  printf("%d\n", st.empty());
  printf("%d\n", st.size());
}

3. queue

int main(){
  queue<int> q;
  
  q.push(4);
  q.push(5);

  q.pop();

  printf("%d\n", q.front());
  printf("%d\n", q.empty());
  printf("%d\n", q.size());
}

4. pair

int main(){
  pair<int, char> p(15, 'H');

  printf("%d %c\n", p.first, p.second);

  p.first = 40;
  p.second = '*';
  printf("%d %c\n", p.first, p.second);

  p = {5, '+'};
  printf("%d %c\n", p.first, p.second);
}

5. map

int main(){
  map<int, int> m;

  m.insert(make_pair(4, 5));
  m[5] = 6;

  printf("%d\n", m.find(4)->second);
}

6. sort(algorithm)

bool cmp(const int a, int b){
  return a>b;
}
int main(){
  int arr1[10] = { 1, 3, 8, 2, 7, 10, 20, 4, 6, 5};
  vector<int> arr2 (arr1, arr1 + sizeof(arr1)/sizeof(int));
  int n = 10;

  sort(arr1, arr1 + n);
  for(int i = 0; i < 10; i++)
    printf("%d ", arr1[i]);
  printf("\n");
  
  sort(arr2.begin(), arr2.end());
  for(int i = 0; i < 10; i++)
    printf("%d ", arr2[i]);
  printf("\n");
  
  sort(arr1, arr1+n, cmp);
  for(int i = 0; i < 10; i++)
    printf("%d ", arr1[i]);
}

7. next_permutation

vector <int> v;

void print_vector(int n){
  for(int i = 0; i < n; i++){
    cout << v[i] << ' ';
  }
  cout << "\n\n";
}

int main(void){
  int n, r;
  int cnt = 0;
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    v.push_back(i);
  }
  print_vector(n);

  do{
    cout << ++cnt << " : ";
    print_vector(n);
  }while(next_permutation(v.begin(), v.end()));
}

8. 카드게임

int main(){
  int num = 10;
  int a[11], b[11];
  for(int i = 1; i <= num; i++)
    scanf("%d", &a[i]);
  for(int i = 1; i <= num; i++)
    scanf("%d", &b[i]);
  int awin = 0, bwin = 0, same = 0;
  for(int i = 1; i <= num; i++){
    if(a[i] > b[i]) awin++;
    else if (a[i] < b[i]) bwin++;
    else same++;
  }
  if(awin > bwin) printf("A");
  else if(awin < bwin) printf("B");
  else printf("D");
}

9. 쇠막대기

int main(){
  char x[100001];
  scanf("%s", x);
  stack<int> s;
  int p = 0;
  for(int i = 0; x[i]; i++){
    if(x[i] == '(')
      s.push(i);
    else{
      if(s.top() + 1 == i){
        s.pop();
        p += s.size();
      }
      else{
        s.pop();
        p += 1;
      }
    }
  }
  printf("%d", p);
}*/
