//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <cmath>
//#include <vector>
//using namespace std;
//
//const int MAXN = 40000;
//vector<int> prime;
//bool isPrime[MAXN];
//
//void Initial() {
//	fill(isPrime, isPrime + MAXN, true);
//	isPrime[0] = false;
//	isPrime[1] = false;
//	for (int i = 2; i < MAXN; i++) {
//		if (!isPrime[i]) {
//			continue;
//		}
//		prime.push_back(i);
//		if (i > MAXN / i) {
//			continue;
//		}
//		for (int j = i * i; j < MAXN; j += i) {
//			isPrime[j] = false;
//		}
//	}
//}
//
//int NumberOfFactors(int number) {
//	int answer = 1;
//	for (int i = 0; i < prime.size(); ++i) {
//		int factor = prime[i];
//		if (number < factor) {
//			break;
//		}
//		int exponent = 0;
//		while (number % factor == 0) {
//			exponent++;
//			number /= factor;
//		}
//		answer += exponent;
//	}
//	if (number > 1) {
//		answer *=2;
//	}
//	return answer;
//}
//
//
//int main() {
//	Initial();
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		if (n == 0) {
//			break;
//		}
//		for (int i = 0; i < n;++i) {
//			int number;
//			scanf("%d",&number);
//			printf("%d\n",NumberOfFactors(number));
//		}
//	
//	}
//}