#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int* elements;
    size_t size;
    size_t capacity;
}SequentialList;
void SequentialListinitial(SequentialList* list, int capacity){
    list->elements = (int*)malloc(sizeof(int)*capacity);
    list->size=0;
    list->capacity=capacity;

}
void SequentialListDestroy(SequentialList* list){
    if(list->elements){
        free(list->elements);
        list->elements=NULL;
    }
    
}
size_t SequentialListsize(SequentialList* list){
    return list->size;
}
void SequentialListinsert(SequentialList* list,int index,int elements){
    if(index<0||index>list->size){
        printf("error vialate the index");
        return ;
    }
    if(list->size==list->capacity){
        int* newelements=(int* )realloc(list->elements,sizeof(int)*list->capacity*2);
        if(newelements==NULL)
        {
            printf("failed realloc");
            return;
        }
        list->elements= newelements;
        list->size++;
        list->capacity*=2;
    }
    for (size_t i = list->size;i>index;--i){
        list->elements[i]=list->elements[i-1];
    }
    list->elements[index]=elements;
    list->size++;


}
void SequentialListDelete(SequentialList* list,size_t index){
    if(index<0||index>=list->size){
        printf("violate index");
        return ;

    }
    for(size_t i = index;i<list->size;i++)
    {
        list->elements[i]=list->elements[i+1];
    }
    list->size--;
}
size_t Sequentiallistfind(SequentialList* list,int element){
    for(size_t i=0;i<list->size;i++){
        if(list->elements[i]==element)
        return i;
    }
    return -1;
    
}
int SequentialListindex(SequentialList*list,int index){
    if(index<0||index>list->size){
        printf("index violate");
        return 0;
    }
    return list->elements[index];
}
void SequentialListreplace(SequentialList*list,int index,int element){
    if(index<0||index>list->size){
        printf("index violate");
        return ;
    }
 list->elements[index]= element;
}
int main()
{
    SequentialList list;
    SequentialListinitial(&list,100);
    //for (int i =0;i<100;i++){
      //  printf("%d --",list.elements[i]);
    //}
   // SequentialListDelete(&list);
     //for (int i =0;i<100;i++){
       // printf("%p --",list.elements);
    //}
    for (int i=0;i<100;i++)
    {
        SequentialListinsert(&list,i,i*3);
    }
    SequentialListinsert(&list,3,20);
    for (int i =0;i<SequentialListsize(&list);i++){
        printf("%d --",list.elements[i]);
    }
    SequentialListDelete(&list,3);
    for (int i =0;i<SequentialListsize(&list);i++){
        printf("%d --",list.elements[i]);
    }
    printf("________________________");
    printf("%zu",Sequentiallistfind(&list,201));

}