//#include<iostream>
//#include<cstdio>
//#define N 50
//using namespace std;
//bool dp[851][2501][2];
//int a[N + 1], sum = 0;
//int main() {
//	int n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf_s("%d", &a[i]), sum += a[i];
//	dp[0][0][0] = 1;
//
//	for (int p = 1; p <= n; p++) {
//		for (int i = 0; i <= 850; i++) {
//			if (sum - (i * 2) < i) break;
//			for (int j = 0; j <= 850; j++) {
//				dp[i][j][p % 2] = 0;
//				dp[i][j][p % 2] |= dp[i][j][(p - 1) % 2];
//				if(i >= a[p]) dp[i][j][p % 2] |= dp[i - a[p]][j][(p - 1) % 2];
//				if(j >= a[p]) dp[i][j][p % 2] |= dp[i][j - a[p]][(p - 1) % 2];
//				if (dp[i][j][p % 2] == 1 && i <= j && j <= sum - (i+j)) {
//					if (ans < i) ans = i;
//				}
//			}
//		}
//	}
//	printf("%d", ans);
//}