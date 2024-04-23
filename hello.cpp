#include<iostream>
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
int main(){
    std::cout<<whileloop(4)<<std::endl;
    
    std::cout<<"hello github"<<std::endl;
    return 0;
}