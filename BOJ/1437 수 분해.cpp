//#include<iostream>
//#include<cstdio>
//#define N 1000000
//#define MOD 10007
//using namespace std;
//int main()
//{
//	int n;
//	int ans = 1;
//	cin >> n;
//	if (n <= 1)
//	{
//		printf("%d",n);
//		return 0;
//	}
//	int num_of_2 = n / 2;
//	int num_of_3 = 0;
//	if (n % 2 == 1) num_of_3++, num_of_2--;
//	num_of_3 += ((num_of_2) / 3) * 2, num_of_2 = (num_of_2) % 3;
//	while (num_of_2 > 0) ans *= 2, ans %= MOD, num_of_2--;
//	while (num_of_3 > 0) ans *= 3, ans %= MOD, num_of_3--;
//	printf("%d", ans);
//	return 0;
//}