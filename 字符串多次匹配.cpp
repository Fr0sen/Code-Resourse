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
//void GetNextTable(string pattern) {
//	int m = pattern.size();
//	int j = 0;
//	nextTable[j] = -1;
//	int t = nextTable[j];
//	while (j < m) {
//		if (t == -1 || pattern[j] == pattern[t]) {
//			t++, j++;
//			nextTable[j ] = t;
//		}
//		else {
//			t = nextTable[t];
//		}
//	}
//}
//
//
//
//int KMP(string text, string pattern) {
//	GetNextTable(pattern);
//	int n = text.size();
//	int m = pattern.size();
//	int i = 0;
//	int j = 0;
//	int number = 0;
//	while (i < n ) {
//		if (j == -1 || text[i] == pattern[j]) {
//			i++;
//			j++;
//		}
//		else {
//			j = nextTable[j];
//		}
//		if (j == m) {
//			number++;
//			j = nextTable[j]; // 允许字符重复匹配
//			//j = 0;		//不允许字符重复的匹配
//		}
//	}
//	return number;
//}
//
//
//int main() {
//	int caseNumber;
//	scanf("%d", &caseNumber);
//	while (caseNumber--) {
//		string text, pattern;
//		cin >> pattern >> text;
//		printf("%d\n",KMP(text,pattern));
//	}
//	return 0;
//}