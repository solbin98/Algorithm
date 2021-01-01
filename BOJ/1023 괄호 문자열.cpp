//#include<iostream>
//#include<cstdio>
//#define N 50
//using namespace std;
//typedef long long ll;
//ll disjoint[N + 1], d[N + 1], dp[N + 1];
//ll sub_dp[N + 1][N + 1][N + 1], dp2[N + 1][N + 1];
//
//ll calc_sub(ll len, ll max_cnt, ll cnt, ll idx)
//{
//	ll& ret = sub_dp[len][cnt][idx];	
//	if (ret != -1) return ret;
//	ret = 0;
//	if (cnt == 1)
//	{
//		if ((idx-1)%2 == 0) return ret = d[idx-1];
//		else return ret = 0;
//	}
//	
//	for (int i = idx - 1; i >= 1; i -= 2)
//	{
//		ll tmp = calc_sub(len, max_cnt, cnt - 1, i) * d[idx-i-1];
//		ret += tmp;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	long long pows = 4;
//	d[0] = 1, dp[1] = 2, dp[0] = 1;
//	for (int i = 2; i <= N; i++)
//	{
//		dp[i] = pows;
//		pows *= 2;
//		disjoint[i] = d[i - 2];
//		for (int j = 2; j <= i; j += 2) d[i] += d[i - j] * disjoint[j];
//		dp[i] -= d[i];
//	}
//
//	for (int i = 0; i <= N; i++)
//		for (int j = 0; j <= N; j++)
//			for (int k = 0; k <= N; k++)
//				sub_dp[i][j][k] = -1;
//
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= i; j++)
//			for (int k = 1; k <= i; k++)
//				calc_sub(i, j, j, k);
//
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= i; j++)
//			for (int k = 1; k <= i; k++)
//				sub_dp[i][j][k] *= d[i - k], dp2[i][j] += sub_dp[i][j][k];
//
//	ll n, k;
//	cin >> n >> k;
//	k++;
//	if (k > dp[n])
//	{
//		printf("-1");
//		return 0;
//	}
//	char ans[N + 1];
//	bool flag = 0;
//	ll idx = 0;
//	pows = 1;
//	for (int i = 1; i < n; i++) pows *= 2;
//	while (n >= 1)
//	{
//		ll number = 0;
//		char stack[N + 1] = { 0 };
//		int top = 0;
//
//		for (int i = 1; i <= idx; i++)
//		{
//			char now = ans[i];
//			if (stack[top] == '(' && now == ')') top--;
//			else stack[++top] = now;
//		}
//
//		int cnts = 0;
//		for (int i = 1; i <= top; i++)
//			if (stack[i] == '(') cnts++;
//
//		if (cnts != top) flag = 1;
//		if (flag == 1) number = pows;
//		else
//		{
//			cnts++;
//			number = pows - dp2[n - 1][cnts];
//		}
//
//		if (k <= number) ans[++idx] = '(';
//		else
//		{
//			ans[++idx] = ')';
//			k -= number;
//		}
//		n--, pows /= 2;
//	}
//
//	for (int i = 1; i <= idx; i++) printf("%c", ans[i]);
//	return 0;
//}