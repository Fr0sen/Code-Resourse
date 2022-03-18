//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//int Char2Int(char target) {
//	if ('0' <= target && target <= '9') {
//		return target - '0';
//	}
//	else {
//		return target - 'A' + 10;
//	}
//}
//
//void ConvertM2T(string str, int m) {
//	int number = 0;
//	for (int i = 0; i < str.size(); ++i) {
//		number *= m;
//		number += Char2Int(str[i]);
//	}
//	printf("%d\n", number);
//}
//
//int main() {
//	string str;
//	while (cin >> str) {
//		str = str.substr(2);
//		ConvertM2T(str, 16);
//	}
//	return  0;
//}