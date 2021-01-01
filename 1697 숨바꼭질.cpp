//#include<iostream>
//#include<cstdio>
//
//#define N 100000
//using namespace std;
//int queue[N + 1];
//bool visit[N + 1];
//
//
//int main()
//{
//	int n, k, bottom=1, top=1;
//	int lev = 1, sum = 0, cnt = 0;
//	cin >> n >> k;
//	queue[bottom] = n;
//	visit[n] = 1;
//	top++;
//	while (top >= bottom)
//	{
//		if (queue[bottom] == k) break;
//		int pop = queue[bottom];
//		if (pop - 1 >= 0 && visit[pop - 1] == 0) queue[top++] = pop - 1, sum++, visit[pop - 1] = 1;
//		if (pop + 1 <= N && visit[pop + 1] == 0) queue[top++] = pop + 1, sum++, visit[pop + 1] = 1;
//		if (pop * 2 <= N && visit[pop * 2] == 0) queue[top++] = pop * 2, sum++, visit[pop * 2] = 1;
//
//		if (bottom == lev)
//		{
//			lev += sum;
//			sum = 0;
//			cnt++;
//		}
//		bottom++;
//	}
//	printf("%d", cnt);
//	return 0;
//}