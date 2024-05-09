// this is a head file using some easy class of function 
#include <iostream>
int recursion(int n )
{
    
  
    if(n<2){
        return n;

    }
    
    else{
        return recursion(n-2)+recursion(n-1);
    }

    
}