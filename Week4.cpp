#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define inside(a, b, c) ((a) <= (c) && (c) <= (b))
/*
1. 점 모으기

int n, m, x[100000], y[100000], final_x, final_y;
int main() {
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++) {
    scanf("%d %d", &x[i], &y[i]);
  }
  sort(x, x + n);
  sort(y, y + n);
  final_x = x[m / 2];
  final_y = y[m / 2];
  int plus = 0;
  for(int i = 0; i < m; i++){
    if(final_x < x[i])
      plus += x[i] - final_x;
    else if(final_x > x[i])
      plus += final_x - x[i];
    if(final_y < y[i])
      plus += y[i] - final_y;
    else if(final_y > y[i])
      plus += final_y - y[i];
  }
  printf("%d", plus);
  return 0;
}

2. 고기잡이

int n, m, l;
int x[10001], y[10001];
int fish_x[10001], fish_y[10001];
int main() {
  scanf("%d %d %d", &n, &l, &m);
  int i, k, j, w, h, cnt, ans = 0;
  for(i = 0; i < m; i++){
    scanf("%d %d", &fish_x[i], &fish_y[i]);
    x[i] = fish_x[i];
    y[i] = fish_y[i];
  }
  sort(x, x + m);
  sort(y, y + m);
  l = l / 2;
  for(w = 1; w < l; w++){
    h = l - w;
    for(i = 0; i < m; i++){
      for(j = 0; j < m; j++){
        cnt = 0;
        for(k = 0; k < m; k++){
          if (inside(x[i], x[i] + w, fish_x[k]) && inside(y[j], y[j] + h, fish_y[k]))
            cnt++;
          if(ans < cnt)
            ans = cnt;
        }
      }
    }
  }
  printf("%d", ans);
  return 0;
}

3. 컬러볼

int main(){
  int n, ball[2000], a = 0;
  scanf("%d", &n);
  int color[200000];
  for(int i = 0; i < n; i++){
    scanf("%d %d", &color[i], &ball[i]);
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(color[i] != color[j]){
        if(ball[i] > ball[j])
          a += ball[j];
      }
    }
    printf("%d\n", a);
    a = 0;
  }
}
*/
