int tailrecur(int n , int rest){
    if (n==0){
        return rest;

    }
    else 
   return tailrecur(n-1,n+rest);
}