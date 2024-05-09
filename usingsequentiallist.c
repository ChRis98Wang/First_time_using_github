#include <stdio.h>
#include<stdlib.h>
int* getConnected(int* set,int size,int*ansSize)
{
    int* ans=(int*)malloc(sizeof(int)*size*2);
    *ansSize=2*size;
    for(int i=0;i<size;i++){
        ans[i]=set[i];
        ans[i+size]=set[i];
    }
    return ans;

}
double a[100];
int sizea;
int main(){
    while(scanf("d",&sizea)!=EOF){
        if(sizea==0)
        break;
        for(int i =0;i<sizea;i++){
            scanf("lf",&a[i]);

        }
        int n=0;
        int p=0;
        int z =0;
        for (int i =0 ;i<sizea;i++){
            if (a[i]>0)
            p++;
            else if(a[i]<0)
            n++;
            else 
            z++;
            

        }
        printf("%d,%d,%d",n,p,z);
    }
}