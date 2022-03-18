//#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <cstdio>
//#include <algorithm>
//#include <string>		
////#include <string.h>  //和cstring一样，是c语言里面的
////#include <cstring>   
//#include <iostream>
//
//using namespace std;
//const int MAXM = 10000;
//const int MAXN = 1000000;
//
//int nextTable[MAXN];
//int text[MAXN];
//int pattern[MAXN];
//
//void GetNextTable(int m) {
//	int j = 0;
//	nextTable[j] = -1;
//	int t = nextTable[j];
//	while (j<m) {
//		if (t == -1||pattern[j] == pattern[t]) {
//			t++, j++;
//			nextTable[j + 1] = nextTable[j] + 1;
//		}
//		else {
//			t = nextTable[t];
//		}
//	}
//}
//
//
//
//int KMP(int n,int m) {
//	GetNextTable(m);
//	int i = 0;
//	int j = 0;
//	while (i <n && j <m) {
//		if (j == -1 || text[i] == pattern[j]) {
//			i++;
//			j++;
//		}
//		else {
//			j = nextTable[j];
//		}
//	}
//	if (j == m) {
//		return i - j + 1;
//	}
//	else {
//		return 1;
//	}
//}
//
//
//int main() {
//	int caseNumber;
//	scanf("%d",&caseNumber);
//	while (caseNumber--) {
//		int n, m;
//		scanf("%d%d",&n,&m);
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &text[i] );
//		}
//		for (int i = 0; i < m; i++) {
//			scanf("%d", &pattern[i]);
//		}
//		printf("%d\n",KMP(n,m));
//	}
//	return 0;
//}