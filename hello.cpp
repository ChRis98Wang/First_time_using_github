#include"hello.h"
//begin Hello Algo
int whileloop(int n ){
        int res = 0;
        int i = 1;
        while (i<=n)
        {
            res +=i;
            i++;
        }
        return res;
        
    }
int forloop(int n)
{
    return 0;
}
int main(){
    std::cout<<whileloop(4)<<std::endl;

    output();
    return 0;
}