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
//int number[128];
//
//int main() {
//	string str1,str2;
//	int length=0;
//	while (getline(cin, str1)) {
//		if (str1 == "#") {
//			return 0;
//		}
//		getline(cin, str2);
//		memset(number,0,sizeof(number));
//		for (int i = 0; i < str1.length(); i++) {
//			for (int j = 0; j < str2.length(); j++) {
//				if (str1[i] == str2[j]) {
//					length++;
//				}
//			}
//			if (length != 0) {
//				cout << str1[i] <<" "<< length << endl;
//			}
//			length = 0;
//		}
//	}
//}