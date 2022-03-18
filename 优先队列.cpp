//#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <cstdio>
//#include <cstdlib>
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <queue>
//
//using namespace std;
//
//priority_queue<int> myPriorityQueue;
//
//
//
//int main() {
//	int arr[10] = { 3,2,4,1,5,6,9,0,8,7 };
//	for (int i = 0; i < 10; i++) {
//		myPriorityQueue.push(arr[i]);
//	}
//	int sum = 0;
//	while (!myPriorityQueue.empty()) {
//		printf("%d",myPriorityQueue.top());  //优先队列有点像栈的操作
//		sum += myPriorityQueue.top();
//		myPriorityQueue.pop();
//	}
//	printf("\n%d\n",sum);
//	return 0;
//}