//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <algorithm>
//
//using namespace std;
//
//const int MAXN = 0x7fffffff;
//
//struct mins {
//	char name;//����
//	int time; //��¼�ķ�ʱ��
//	char barn; //��¼Ŀ�ĵ�����
//	int row, col;//�У�����Ϣ������ת���ɳ�����Ŀ�ĵػ��к÷�ʱ��
//};
//
//int car[4][4] = {
//	{4,8,7,15},
//	{7,9,17,14},
//	{6,9,12,8},
//	{6,7,14,6}
//};
//
//int rows[4] = { 0,0,0,0 };//��¼�е�MAXN�ĸ���
//
//bool Delete(mins &a) {
//	int max = 0;
//	int row = 0, col = 0; //����
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (max < car[i][j] && car[i][j] != MAXN) {
//				max = car[i][j];
//				row = i;
//				col = j;
//			}
//		}
//	}
//	if (rows[col] != 3) {
//		car[row][col] = MAXN; //�߼�ɾ��
//		rows[col] ++;
//		if (rows[col] == 3) {
//			for (int i = 0; i < 4; i++) {
//				if (car[i][col] != MAXN) {
//					a.row = i;
//					a.col = col;
//				}
//			}
//			a.time = car[row][col];
//			return false;
//		}
//		return true;
//	}else {
//		for (int i = 0; i < 4; i++) {
//			if (car[i][col] != MAXN) {
//				a.row = i;
//				a.col = col;
//			}
//		}
//		a.time = car[row][col];
//		return false;
//	}
//}
//
//mins Find(mins &a) {
//	switch (a.row)  {
//		case 0:	a.name = 'A'; break;
//		case 1:	a.name = 'B'; break;
//		case 2:	a.name = 'C'; break;
//		case 3:	a.name = 'D'; break;
//	}
//	switch (a.col)
//	{
//		case 0:	a.barn = 'A'; break;
//		case 1:	a.barn = 'B'; break;
//		case 2:	a.barn = 'C'; break;
//		case 3:	a.barn = 'D'; break;
//	}
//	return a;
//}
//
//int main()
//{
//	bool flag = false;
//	mins car1,car2,car3,car4;
//	car1.col = 0;
//	car1.row = 0;
//	car2.col = 0;
//	car2.row = 0;
//	car3.col = 0;
//	car3.row = 0;
//	car4.col = 0;
//	car4.row = 0;
//	printf("****С������****\n\n");
//	while (!flag) {
//		if (!Delete(car1)) {
//			flag = true;
//		}
//	}
//	flag = false;
//	/*printf("%d,%d\n",car1.row,car1.col);*/
//	for (int i = 0; i < 4; i++) {  //��һ��ȫ������
//		car[car1.row][i] = MAXN;
//		rows[i]++;  //��¼����ȫ��+1
//	}
//	
//	while (!flag) {
//		if (!Delete(car2)) {
//			flag = true;
//		}
//	}
//	flag = false;
//	/*printf("%d,%d\n", car2.row, car2.col);*/
//	while (!flag) {
//		if (!Delete(car3)) {
//			flag = true;
//		}
//	}
//	flag = false;
//	car3.row--;
//	/*printf("%d,%d\n", car3.row, car3.col);*/
//	for (int i = 0; i < 4; i++) {  //��һ��ȫ������
//		car[car3.row][i] = MAXN;
//		rows[i]++;  //��¼����ȫ��+1
//	}
//	for (int i = 0; i < 4; i++) {
//		if (i != car1.row && i != car2.row && i != car3.row) {
//			car4.row = i;
//			car4.col = 0;
//		}
//	}
//	/*printf("%d,%d\n", car4.row, car4.col);*/
//	printf("��%cȥ�� %c\n", Find(car1).name, Find(car1).barn);
//	printf("��%cȥ�� %c\n", Find(car2).name, Find(car2).barn);
//	printf("��%cȥ�� %c\n", Find(car3).name, Find(car3).barn);
//	printf("��%cȥ�� %c\n", Find(car4).name, Find(car4).barn);
//	int time[] = { car1.time,car2.time,car3.time,car4.time };
//	sort(time,time+3);  //���ĸ�ʱ������
//	printf("��Сʱ�俪��Ϊ��%d",time[0]);
//	return 0;
//}