//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//int cnt[5][2] = { {0,0} };
//int arr[7][2];
//int main()
//{
//	int price;
//	cin >> price;
//	for (int i = 0; i < 6; i++) cin >> arr[i][0] >> arr[i][1], cnt[arr[i][0]][0]++, cnt[arr[i][0]][1] = i;
//	if (cnt[1][0] == 1 && cnt[3][0] == 1) printf("%d", price*(arr[cnt[1][1]][1] * arr[(cnt[1][1] + 5)%6][1] - arr[(cnt[1][1] + 2)%6][1] * arr[(cnt[1][1] + 3)%6][1]));
//	else if (cnt[4][0] == 1 && cnt[2][0] == 1) printf("%d", price * (arr[cnt[2][1]][1] * arr[(cnt[2][1] + 5) % 6][1] - arr[(cnt[2][1] + 2) % 6][1] * arr[(cnt[2][1] + 3) % 6][1]));
//	else if (cnt[3][0] == 1 && cnt[2][0] == 1) printf("%d", price * (arr[cnt[2][1]][1] * arr[(cnt[2][1] + 1) % 6][1] - arr[(cnt[2][1] + 3) % 6][1] * arr[(cnt[2][1] + 4) % 6][1]));
//	else printf("%d", price * (arr[cnt[1][1]][1] * arr[(cnt[1][1] + 1) % 6][1] - arr[(cnt[1][1] + 3) % 6][1] * arr[(cnt[1][1] + 4) % 6][1]));
//	return 0;
//}