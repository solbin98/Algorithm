//#include<iostream>
//#include<cstdio>
//#define N 50000
//#define INF 9876543210000	
//using namespace std;
//
//double a[N + 1][2], stack[N + 1][2];
//double tmp[N + 1][2], dp[N + 1];
//int top = 0;
//
//void merge(int s, int e)
//{
//	int mid = (s + e) / 2;
//	int i = s, j = mid + 1, index = 1;
//	while (i <= mid && j <= e)
//	{
//		if (a[i][0] > a[j][0]) tmp[index][0] = a[i][0], tmp[index++][1] = a[i++][1];
//		else if (a[i][0] == a[j][0])
//		{
//			if (a[i][1] > a[j][1]) tmp[index][0] = a[i][0], tmp[index++][1] = a[i++][1];
//			else tmp[index][0] = a[j][0], tmp[index++][1] = a[j++][1];
//		}
//		else tmp[index][0] = a[j][0], tmp[index++][1] = a[j++][1];
//	}
//	for (int ind = i; ind <= mid; ind++) tmp[index][0] = a[ind][0], tmp[index++][1] = a[ind][1];
//	for (int ind = j; ind <= e; ind++) tmp[index][0] = a[ind][0], tmp[index++][1] = a[ind][1];
//	for (int ind = s; ind <= e; ind++)
//	{
//		a[ind][0] = tmp[ind - s + 1][0];
//		a[ind][1] = tmp[ind - s + 1][1];
//	}
//}
//void merge_sort(int s, int e)
//{
//	int mid = (s + e) / 2;
//	if (s == e) return;
//	merge_sort(s, mid);
//	merge_sort(mid + 1, e);
//	merge(s, e);
//}
//
//double calc(double a, double b, double c, double d){ return (1.0)*((d - b) / (a - c));}
//
//int main()
//{
//	int n;
//	double max_height = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%lf %lf", &a[i][0], &a[i][1]);
//	merge_sort(1, n);
//	
//	for (int i = 1; i <= n; i++)
//	{	
//		if (max_height >= a[i][1])
//		{
//			dp[i] = dp[i - 1];
//			continue;
//		}
//		if (max_height < a[i][1]) max_height = a[i][1];
//	
//		while (top >= 2 && calc(a[i][0], dp[i - 1], stack[top][0], stack[top][1]) < calc(stack[top - 1][0], stack[top - 1][1], stack[top][0], stack[top][1]))
//		{
//			top--;
//		}
//		top++;
//		stack[top][0] = a[i][0];
//		stack[top][1] = dp[i - 1];
//
//		int low = 1, high = top, mid;
//		double min = INF;
//		while (low <= high)
//		{
//			mid = (low + high) / 2;
//			if (stack[mid][0] * a[i][1] + stack[mid][1] < min) min = stack[mid][0] * a[i][1] + stack[mid][1];
//			if (mid == 1 || calc(stack[mid][0], stack[mid][1], stack[mid - 1][0], stack[mid - 1][1]) < a[i][1]) low = mid + 1;
//			else high = mid - 1;
//		}
//		dp[i] = min;
//	}
//	printf("%.lf", dp[n]);
//	return 0;
//}