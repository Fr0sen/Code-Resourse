#include <stdio.h>
#include <cstdio>

using namespace std;

int dayTable[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

bool IsLeapYear(int year){
    return (year %4 ==0 && year % 100 !=0)||(year % 400==0);
}

int main(){
    int year,month,day;
    while(scanf("%d %d %d",&year,&month,&day)!=EOF){
        int number = 0;
        int row = IsLeapYear(year);
        for(int j=0;j<month;++j){
            number +=dayTable[row][j];
        }
        number +=day;
        printf("%d\n",number);
    }
    return 0;
}
