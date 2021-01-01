//#include<iostream>
//#include<cstdio>
//
//#define N 100
//#define INF 987654321
//#define abs(a,b) ((a-b < 0)? (b-a) : (a-b))
//
//using namespace std;
//int a[N + 10][2];
//int links[N + 1][N + 1], dp[N + 1][N + 1];
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		for (int i = 1; i <= n + 2; i++) scanf("%d %d", &a[i][0], &a[i][1]);
//		for (int i = 1; i <= n + 2; i++)
//			for (int j = 1; j <= n + 2; j++)
//			{
//				dp[i][j] = INF;
//				if (i == j)
//				{
//					links[i][j] = INF;
//					continue;
//				}
//				int tmp = (abs(a[i][0], a[j][0]) + abs(a[i][1], a[j][1]));
//				if (tmp % 50 != 0) tmp = (tmp / 50) + 1;
//				else tmp /= 50;
//				if (tmp <= 20) links[i][j] = 1;
//				else links[i][j] = INF;
//			}
//		
//		for (int k = 1; k <= n + 2; k++)
//			for (int i = 1; i <= n + 2; i++)
//			{
//				for (int j = 1; j <= n + 2; j++)
//				{
//					int min = INF;
//					if (links[i][j] < min) min = links[i][j];
//					if (dp[i][k] + dp[k][j] < min) min = dp[i][k] + dp[k][j];
//					if (dp[i][j] > min) dp[i][j] = min;
//				}
//			}
//
//		if (dp[1][n + 2] != INF) cout << "happy" << endl;
//		else cout << "sad" << endl;
//	}
//	return 0;
//}