//
//#include<iostream>
//#include<cstdio>
//#include<bitset>
//#define N 170
//#define M 1200000
//using namespace std;
//int a[N + 1], sum1[N + 1], sum2[N + 1][N + 1];
//int n;
//bitset < M + 1 > dp[N + 1];
//
//void calc()
//{
//    for (int i = 1; i <= n; i++) sum1[i] = sum1[i - 1] + a[i];
//    for (int i = 1; i <= n; i++)
//        for (int j = i; j <= n; j++)
//            sum2[i][j] = sum2[i][j - 1] + sum1[j] - sum1[i - 1];
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//    calc();
//    int k;
//    cin >> k;
//
//    dp[0].set(0);
//    dp[1].set(a[1]);  dp[1].set(0);
//
//    for (int i = 2; i <= n; i++)
//    {
//        for (int j = i + 1; j >= 1; j--)
//        {
//            int sum = sum2[j][i];
//            if (j <= 2) dp[i].set(sum);
//            else dp[i] |= (dp[j - 2] << sum);
//        }
//    }
//
//    if (k > sum2[1][n])
//    {
//        printf("%d", k);
//        return 0;
//    }
//    for (int i = k; i <= sum2[1][n]; i++)
//    {
//        if (dp[n].test(i) == 0)
//        {
//            printf("%d", i);
//            return 0;
//        }
//    }
//    printf("%d", sum2[1][n] + 1);
//    return 0;
//}