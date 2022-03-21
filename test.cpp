#include<iostream>
#include<vector>

#include<cstring>
using namespace std;


int main(){
    //bo n so cua xau lon hon.
    char str1[20], str2[20];
    for(int i = 0 ; i < 19 ; i ++ ){
        str1[i]  = '!';
        str2[i] = '!';
    }
    cin>>str1>>str2;
    int count = 0;
    for(int i = 0 ; i < 19 ; i ++ ){
        if(str1[i] == '!') break;
        count++;
    }
    char str_small [count];
    for(int i = 0 ; i < count ; i ++ ){
        str_small[i] = str1[i];
    }

    
    //xong xau small,xau str2 0 vde, xau str_small 0 vde,count = 4;
    
    int i = 0, count_rep = 0;
    
    for(int i = 0 ; str2[i + count - 2 ] != '!' ; i = i + 3 ){
        for(int j = i ;  j <= i + count - 2 ; j ++ ){
            char str_current[count];
            str_current[0] = str2[j];
            str_current[1] = str2[j + 1];
            str_current[2] = str2[j + 2];
            if(strcmp(str_small,str_current) == 0 ){
                count_rep ++;
            }
            cout<<str_current<<endl;
        }
    }

    







    cout<<count_rep<<endl;
}
