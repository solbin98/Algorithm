//#include<iostream>
//using namespace std;
//int tmp[10];
//int is_hansoo(int num)
//{
//	if (num <= 10) return 1;
//	int index = 0, abss;
//	while (num > 0) tmp[index++] = num % 10, num /= 10;
//	abss = tmp[1] - tmp[0];
//	for (int i = 1; i < index-1; i++)
//	{
//		if (tmp[i+1]-tmp[i] != abss) return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) ans += is_hansoo(i);
//	cout << ans;
//}