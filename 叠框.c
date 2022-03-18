#include <stdio.h>
#include <stdlib.h>

const int MAXN = 80 + 10;
char matrix[80][80];

int main()             //µş¿òÎÊÌâ
{
   int n;
   char center;
   char outside;
   bool firstCase =true;
   while (scanf("%d %c %c",&n,&center,&outside)!=EOF){
        if(firstCase){
            firstCase = false;
        }else{
            printf("\n");
        }
        for(int i = 0;i<=n/2; ++i ){
            int j=n -1 - i;
            int length = n- 2 * i;
            char current;
            if((n/2 - i)%2 == 0){
                current = center;
            }else{
                current = outside;
            }
            for(int k = 0;k<length;++k){
                matrix[i][i + k] = current;
                matrix[i + k][i] = current;
                matrix[j][j-k]   = current;
                matrix[j-k]][j]  = current;
            }

        }
        matrix[0][0]     = '';
        matrix[0][n - 1] = '';
        matrix[n - 1][0] = '';
        matrix[n - 1][0] = '';
        for(int i= 0 ; i<n;++i){
            for(int j=0;j<n;++j){
                printf("%c",matrix[i][j]);
            }
        }
   }
}



