#include"hello.h"
#include"tailrecur.h"
//begin Hello Algo
struct Student{
    int age;
    char* name;
};
void getinfo(struct Student & A)
{
    std::cout<<A.name<<" "<<A.age<<std::endl;
}

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
    for (int i =1;i<10;i++)
    {
        std::cout<<recursion(i)<<" ";
    }
    std::cout<<"-----------------------------"<<std::endl;
    for(int i =0 ;i<10;i++){
    std::cout<<tailrecur(i,0)<<std::endl;
    }
    return 0;
}