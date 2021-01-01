//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//
//#define N 200000
//#define MOD 1000003
//#define M 2
//using namespace std;
//char str[N + 1];
//vector <int> hashs[MOD + 1];
//long long prime[N + 1], n;
//
//long long calc(long long num)
//{
//	if (num > 0) return num;
//	else return ((-(num / MOD) + 1) * MOD + num) % MOD;
//}
//bool chk(int len)
//{
//	long long sum = 0, r = M;
//	for (int i = len-1; i >= 0; i--)
//	{
//		sum += ((long long)(str[i]) * r);
//		//printf(" + %lld! r : %lld i : %d\n", (long long)str[i] * M,r,i);
//		sum %= MOD;
//		if(i != 0) r *= M;
//		r %= MOD;
//	}
//	//printf("len : %d sum : %lld r : %lld \n", len, sum,r);
//	int idx = 0, flag = 0;
//	hashs[sum].push_back(len-1);
//	for (int i = len; i < n; i++)
//	{	
//		sum = (M * (calc(sum - ( ((long long)str[i - len]) * r) % MOD))) % MOD + ((long long)((str[i])) * M) % MOD;
//		sum %= MOD;
//		//printf("sum : %lld\n", sum);
//		if (hashs[sum].size() != 0)
//		{
//			for (int j = 0; j < hashs[sum].size(); j++)
//			{	
//				int tmp = 1;
//				int idx1 = hashs[sum][j], idx2 = i;
//				for (int k = 0; k < len; k++)
//				{
//					if (str[idx2 - k] != str[idx1 - k])
//					{
//						tmp = 0;
//						break;
//					}
//				}
//				if (tmp == 1) return 1;
//			}
//		}
//		hashs[sum].push_back(i);
//	}
//	return 0;
//}
//
//int main()
//{
//	cin >> n;
//	cin >> str;
//
//	int t = 1, ans = 0;
//	int low = 1, high = n, mid;
//
//	while (low <= high)
//	{
//		mid = (low + high)/2;
//		if (chk(mid) == 1)
//		{
//			if (mid > ans) ans = mid;
//			low = mid + 1;
//		}
//		else high = mid - 1;
//		for (int i = 0; i < MOD; i++) hashs[i].clear();
//	}
//	printf("%d", ans);
//	return 0;
//}