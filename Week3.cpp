#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
/*
1. 퀵 소트

int a[1000000];
void swap(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
int choosePivot(int low, int high) {
  return low + (high-low)/2;
}
int partition(int low, int high) {
  int pivotIndex = choosePivot(low, high);
  int pivotValue = a[pivotIndex];
  swap(a[pivotIndex], a[high]);
  int storeIndex = low;
  for(int i = low; i < high; i++){
    if(a[i] < pivotValue) {
      swap(a[i], a[storeIndex]);
      storeIndex += 1;
    }
  }
  swap(a[storeIndex], a[high]);
  return storeIndex;
}
void quicksort(int low, int high) {
  if (low < high) {
    int pivot = partition(low, high);
    quicksort(low, pivot - 1);
    quicksort(pivot + 1, high);
  }
}
int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  quicksort(0, n - 1);
  for(int i = 0; i < n; i++){
    printf("%d\n", a[i]);
  }
  return 0;
}

2. 머지 소트

int a[1000000];
int b[1000000];

void merge(int start, int end) {
  int mid = (start+end)/2;
  int i = start;
  int j = mid+1;
  int k = 0;
  while (i <= mid && j <= end) {
    if(a[i] <= a[j])
      b[k++] = a[i++];
    else
      b[k++] = a[j++];
  }
  while (i <= mid) {
    b[k++] = a[i++];
  }
  while (j <= end) {
    b[k++] = a[j++];
  }
  for(int i=start; i<=end; i++) {
    a[i] = b[i-start];
  }
}
void sort(int start, int end) {
  if (start == end)
    return;
  int mid = (start+end)/2;
  sort(start, mid);
  sort(mid+1, end);
  merge(start, end);
}
int main() {
  int n;
  cin >> n;
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  sort(0, n-1);
  for(int i = 0; i<n; i++) {
    printf("%d\n", a[i]);
  }
  return 0;
}

3. 카드

long long a[1000000];
int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
    scanf("%lld", &a[i]);
  sort(a, a+n);
  long long finall = a[0];
  int final_ex = 1;
  int ex = 1;
  for(int i = 1; i < n; i++) {
    if(a[i] == a[i-1])
      ex++;
    else
      ex=1;
    if(final_ex < ex) {
      final_ex = ex;
      finall = a[i];
    }
  }
  printf("%lld\n", finall);
  return 0;
}
*/
