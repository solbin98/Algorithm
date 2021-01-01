//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#define N 11
//using namespace std;
//
//const string aei = "aeiouh";
//const string str[11] = { {"c"}, {"j"},{"n"},{"m"},{"t"},{"s"},{"l"},{"l"},{"d"},{"qu"},{"s"} };
//
//bool chk_aei(char a) {
//	for (int i = 0; i < aei.size(); i++) {
//		if (a == aei[i]) return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char a[5001];
//	string tmp;
//	int idx = 0, cnt = 0;
//	cin.getline(a, sizeof(a));
//	int size = strlen(a);
//	for (int i = 0; i < size; i++) {		
//		tmp.push_back(a[i]);
//		//cout << tmp;
//		//printf("\n");
//
//
//		if ((i + 1 == size) || a[i + 1] == '-' || a[i + 1] == ' ' || a[i+1] == (char)39) {
//			if (i + 1 == size) cnt++;
//			else if (a[i + 1] == (char)39)
//			{
//				bool flag = 0;
//				for (int j = 0; j < 11; j++)
//					if (str[j] == tmp) flag = 1;
//				if ((flag == 1) && chk_aei(a[i + 2])) cnt++, tmp.clear(), i++;
//
//			}
//			else cnt++, tmp.clear(), i++;
//		}
//	}
//	printf("%d", cnt);
//}