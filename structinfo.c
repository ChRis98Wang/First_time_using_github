#include <stdio.h>
 
int main(){
    int set[10]={0,0,0,0,0,0,0,0,0,0};
   
    for (int i = 10;i>3;--i){
        
        set[i]=set[i-1];
    } 
    set[3]=2;
     for (int i = 0;i<10;i++)
    {
        printf("%d",set[i]);
    }
}