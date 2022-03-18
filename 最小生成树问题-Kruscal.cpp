//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//#include <cstdio>
//#include <queue>
//
//using namespace std;
//
//const int MAXN = 1000 + 10;
//
//struct Edge {
//	int from;
//	int to;
//	int length;
//	bool operator <(const Edge& e) const {  //重载小于号，这样才可以排序
//		return length < e.length;
//	}
//};
//
//Edge edge[MAXN * MAXN];
//int father[MAXN];
//int height[MAXN];
//
//void Initial(int n) {
//	for (int i = 0; i < n; i++) {
//		father[i] = i;
//		height[i] = 0;
//	}
//	return;
//
//}
//
//int Find(int x) {
//	if (x != father[x]) { //不是则合并,减少路径长度
//		father[x] = Find(father[x]);
//	}
//	return father[x];
//}
//
//void Union(int x, int y) {
//	x = Find(x);
//	y = Find(y);
//	if (x != y) {
//		if (height[x] < height[y]) {
//			father[x] = y;
//		}
//		else if (height[x] > height[y]) {
//			father[y] = x;
//		}
//		else {
//			father[y] = x;
//			height[x]++;
//		}
//	}
//}
//
//int Kruskal(int n, int edgeNumber) {
//	Initial(n);
//	int sum = 0;
//	sort(edge,edge+edgeNumber);
//	for (int i = 0; i < edgeNumber; i++) {
//		Edge current = edge[i];
//		if (Find(current.from) != Find(current.to)) {
//			Union(current.from, current.to);
//			sum += current.length;
//		}
//	}
//	return sum;
//}
//
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		if (n == 0) {
//			break;
//		}
//		int edgeNumber = n * (n - 1) / 2;
//		for (int i = 0; i < edgeNumber; i++) {
//			scanf("%d%d%d",&edge[i].from, &edge[i].to, &edge[i].length);
//		}
//		int answer = Kruskal(n,edgeNumber);
//		printf("Answer: %d\n",answer);
//	}
//	return 0;
//}