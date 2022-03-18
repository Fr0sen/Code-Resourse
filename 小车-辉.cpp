//#define _CRT_SECURE_NO_WARNING 1
//#include <stdio.h>
//int a[4][4];
//int i, j, k, s;
//void scan()
//{
//	for (i = 0; i < 4; i++)
//	{
//		if (i == 0)printf("请输入小车a小车到达A/B/C/D/车库的距离：");
//		else if (i == 1) printf("请输入小车b小车到达A/B/C/D/车库的距离：");
//		else if (i == 2)printf("请输入小车c小车到达A/B/C/D/车库的距离：");
//		else printf("请输入小车d小车到达A/B/C/D/车库的距离：");
//		for (j = 0; j < 4; j++)
//		{
//
//			scanf("%d", &a[i][j]);
//		}
//
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//
//}   //输入小车距离每个车库的位置 ，并打印 
//
//int Max(int a, int b, int c, int d)
//{
//	int max = a;
//	if (b > max)
//		max = b;
//	if (c > max)
//		max = c;
//	if (d > max)
//		max = d;
//	return max;
//}  //比较函数 
//
//int main()
//{
//	int array[5] = { 0,0,0,0,99999 };
//	scan();
//	int num1, num2, num3, num4, num, h;
//	for (i = 0; i < 4; i++)
//	{
//		num1 = a[0][i];
//		for (j = 0; j < 4; j++)
//		{
//			if (j == i)continue;
//			num2 = a[1][j];
//			for (k = 0; k < 4; k++)
//			{
//				if (k == i || k == j)continue;
//				num3 = a[2][k];
//				for (s = 0; s < 4; s++)
//				{
//					if (s == i || s == j || s == k)continue;
//					num4 = a[3][s];
//					num = Max(num1, num2, num3, num4);
//					if (array[4] > num)
//					{
//						array[0] = i;
//						array[1] = j;
//						array[2] = k;
//						array[3] = s;
//						array[4] = num;
//					}
//
//				}
//			}
//		}
//	} // 遍历整个二维数组，寻找最优方案排序。 
//	printf("最优解决方案为:\n");
//	char b[4] = "abcd";    //将i,j,k,s转化为相应车库号。 
//	for (i = 0; i < 4; i++)
//	{
//		printf("小车%c进入车库为：", b[i]);
//		switch (array[i])
//		{
//		case 0:printf("A\n"); break;
//		case 1:printf("B\n"); break;
//		case 2:printf("C\n"); break;
//		case 3:printf("D\n"); break;
//		}
//	}
//	printf("T = %d", array[4]);
//}