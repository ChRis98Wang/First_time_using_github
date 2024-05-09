#include<stdio.h>
#include<stdlib.h>
#define eletype int
typedef struct {
    eletype data;
    struct ListNode* next;
}ListNode;
typedef struct {
    ListNode* head;
    size_t size;

}Listlinked;
void ListLinkedcreate(Listlinked* list){
    list->head = NULL;
    list->size=0;
}
void ListLinkedDestory(Listlinked* list){
    while(list->head){
        
    }
}
void Listlinkedinsert(Listlinked* list,int i,ListNode* node)

int main(){
    Listlinked list;
    ListLinkedcreate(&list);
    printf("%d",list.size);
    
}

