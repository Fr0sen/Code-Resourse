//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//#include <cstdio>
//#include <queue>
//
//using namespace std;
//
//int main() {
//	int n, p, m;
//	while (scanf("%d%d%d", &n, &p, &m)) {
//		if (n == 0 && p == 0 && m == 0) {
//			break;
//		}
//		queue<int> children;
//		for (int i = 1; i <= n; ++i) {
//			children.push(i);
//		}
//		for (int i = 1; i < p; ++i) {
//			children.push(children.front());
//			children.pop();
//		}
//		while (!children.empty()) {
//			for (int i = 1; i < m; ++i) {
//				children.push(children.front());
//				children.pop();
//			}
//			if (children.size() == 1) {
//				printf("%d\n", children.front());
//			}
//			else {
//				printf("%d,",children.front());
//			}
//			children.pop();
//		}
//	}
//	return 0;
//}