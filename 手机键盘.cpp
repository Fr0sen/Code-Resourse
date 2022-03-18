#include <iostream>
#include <cstdio>

using namespace std;

int keyTable[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};


int main(){
    string str;
    while(cin >> str){
        int time = 0;
        for(int i = 0;i<str.size();++i){
            time += keyTable[str[i] - 'a'];
            if(i!=0 && str[i] - str[i - 1] == keyTable[str[i]-'a']-keyTable[str[i-1]-'a']){
                time +=2;
            }
        }
        printf("%d\n",time);
    }
    return 0;
}
