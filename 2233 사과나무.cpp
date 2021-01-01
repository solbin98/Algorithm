//#include<iostream>
//#include<cstdio>
//#define N 2000
//#define INF 987654321
//using namespace std;
//char str[2*N + 1];
//int stack[2*N + 1], link[N + 1][N + 1], point[2*N + 1];
//int cnt[N + 1], cnt_f[N + 1];
//int top = 0;
//bool fucking_apple[N + 1];
//
//int calc_num(int now)
//{
//	int ref = 0;
//	for (int i = 1; i <= N; i++) if (link[now][i] == 1) ref += calc_num(i);
//	return cnt[now] = ref + 1;
//}
//
//int calc_fucking_apple(int now)
//{
//	int ref = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		if (link[now][i] == 1) ref += calc_fucking_apple(i);
//	}
//	if (fucking_apple[now] == 1) ref++;
//	return cnt_f[now] = ref;
//}
//
//
//int main()
//{
//	int n, vertex = 0;
//	cin >> n;
//	cin >> str;
//	for (int i = 1; i <= n * 2; i++)
//	{
//		if ((str[i - 1] - '0') == 0)
//		{
//			vertex++;
//			point[i] = vertex;
//			link[stack[top]][vertex] = 1;
//			stack[++top] = vertex;
//		}
//		else
//		{
//			point[i] = stack[top];
//			top--;
//		}
//	}
//	
//	int a, b, sum = 2;
//	cin >> a >> b;
//	fucking_apple[point[a]] = 1, fucking_apple[point[b]] = 1;
//	if (point[a] == point[b]) sum = 1;
//
//	calc_num(0), calc_fucking_apple(0);
//
//	int min = INF, min_vertex = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (cnt_f[i] == sum && min > cnt[i]) min = cnt[i], min_vertex = i;
//	}
//
//	int zero_pos = 0, one_pos = 0;
//	for (int i = 1; i <= 2 * n; i++)
//	{
//		if (str[i - 1] == '0' && point[i] == min_vertex) zero_pos = i;
//		else if (str[i - 1] == '1' && point[i] == min_vertex) one_pos = i;
//	}
//
//	printf("%d %d", zero_pos, one_pos);
//	return 0;
//}