//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 200000
//using namespace std;
//int dp[N + 1][2], pare[N + 1], a[N + 1];
//vector<int> link[N + 1];
//
//int max(int a, int b)
//{
//    if (a > b) return a;
//    else return b;
//}
//
//int solve(int now, int chk)
//{
//    int& ref = dp[now][chk];
//    if (ref != -1) return ref;
//    ref = 0;
//
//
//    for (int i = 0; i < link[now].size(); i++)
//         ref += max(solve(link[now][i], 0), solve(link[now][i], 1));
//
//    if (chk == 1)
//    {
//        int maxi = 0;
//        for (int i = 0; i < link[now].size(); i++)
//        {
//            int one = solve(link[now][i], 0), two = solve(link[now][i], 1);
//            if (one > two)  maxi = max(ref + a[link[now][i]] * a[now], maxi);
//            else maxi = max(ref - two + a[link[now][i]] * a[now] + one, maxi);
//        }
//        return ref = maxi;
//    }
//    return ref;
//}
//
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 2; i <= n; i++)
//    {
//        int t;
//        scanf("%d", &t);
//        link[t].push_back(i);
//    }
//    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//    for (int i = 0; i <= N; i++) dp[i][0] = -1, dp[i][1] = -1;
//    printf("%d", max(solve(1, 0), solve(1, 1)));
//    return 0;
//}