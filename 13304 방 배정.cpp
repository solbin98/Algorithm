//#include<iostream>
//#include<cstdio>
//using namespace std;
//int people[3][2];
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (b >= 1 && b <= 2) people[0][a]++;
//		else if (b >= 3 && b <= 4) people[1][a]++;
//		else people[2][a]++;
//	}
//	
//	int ans = 0;	
//	ans += (people[0][0] + people[0][1]) / k;
//	if ((people[0][0] + people[0][1]) % k != 0) ans++;
//	for (int i = 1; i < 3; i++)
//	{
//		ans += people[i][0] / k;
//		if (people[i][0] % k != 0) ans++;
//		ans += people[i][1] / k;
//		if (people[i][1] % k != 0) ans++;
//	}
//	printf("%d", ans);
//	return 0;
//}