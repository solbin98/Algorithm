//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define INF 987654321
//using namespace std;
//int arr[N + 1];
//int main()
//{
//	int n, s, ans = INF;
//	cin >> n >> s;
//	for(int i=1;i<=n;i++) scanf("%d", &arr[i]);
//
//	int front = 1, tail = 1;
//	int sum = arr[front];
//	while (front <= n)
//	{
//		if (sum >= s)
//		{
//			if (front - tail + 1 < ans) ans = front - tail + 1;
//			sum -= arr[tail], tail++; 
//		}
//		else
//		{
//			front++;
//			sum += arr[front];
//		}
//	}
//	if (ans == INF) ans = 0;
//	printf("%d", ans);
//	return 0;
//}