//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int translate(string str) {
//	if (str == "Mon") return 1;
//	else if (str == "Tue") return 2;
//	else if (str == "Wed") return 3;
//	else if (str == "Thu") return 4;
//	else return 5;
//}
//
//
//int main() {
//	int t, n;
//	cin >> t >> n;
//
//	for (int i = 1; i <= n; i++) {
//		string a, b;
//		int ta, tb, na, nb;
//
//		cin >> a >> ta >> b >> tb;
//		na = translate(a), nb = translate(b);
//		if (nb - na >= 2) {
//			t -= (24 * (nb - na - 1) + 24 - ta + tb);
//		}
//		else if(nb - na == 1){
//			t -= (24 - ta + tb);
//		}
//		else {
//			t -= tb - ta;
//		}
//	}
//
//	if (t <= 0) printf("0");
//	else if (t <= 48) printf("%d", t);
//	else printf("-1");
//}