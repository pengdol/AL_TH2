#include <cstdio>
#include <iostream>
using namespace std;
/*
1. 주사위 세개
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a == b && a == c){
    printf("%d", a * 1000 + 10000);
  }
  else if(a == b){
    printf("%d", a * 100 + 1000);
    return 0;
  }
  else if(a == c){
    printf("%d", a * 100 + 1000);
    return 0;
  }
  else if(b == c){
    printf("%d", b * 100 + 1000);
    return 0;
  }
  else
    printf("%d", max(max(a, b), c) * 100);
}

2. 행복
int happy[1001];
int main(){
  int n, min = 1000, max = 0;
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> happy[i];
  for(int i = 0; i < n; i++){
    if(happy[i] > max)
      max = happy[i];
    if(happy[i] < min)
      min = happy[i];
  }
  cout << max - min;
}

3. 색종이
int flat[1002][1002];
int main()
{
	int n;
	int a, b, c, d;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c >> d;
		for (int j = a; j < a + c; j++)
		{
			for (int k = b; k < b + d; k++)
			{
				flat[j][k] = i;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int j = 0; j < 101; j++)
		{
			for (int k = 0; k < 101; k++)
			{
				if (flat[j][k] == i)
					sum++;
			}
		}
		cout << sum << "\n";
	}
}*/
