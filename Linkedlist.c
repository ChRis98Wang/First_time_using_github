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
        ListNode* temp=list->head;
        list->head=list->head->next;
        free(temp);
    }
    list->size=0;
}
void Listlinkedinsert(Listlinked* list,int i,eletype val){
    if (i<0||i>list->size){
        printf("out of range ");
        return ;
    }
    ListNode* newNode = (ListNode*) malloc(sizeof(ListNode));
    newNode->data = val;
    if(i == 0){
        newNode->next=list->head;
        list->head=newNode;
    }
    else{
        ListNode* current = list->head;
    for ( int j= 0;j<i-1;j++)
    {
        current=current->next;
        
    }
    newNode->next=current->next;
    current->next=newNode;
    }
    list->size++;
}
void ListlinkedDelete(Listlinked* list,int i){
    if(i<0||i>list->size)
    {
        printf("out of range");
        return;
    }
    else{
        if(i==0){
            ListNode* next=list->head->next;
            free(list->head);
            list->head=next;
        }
        else{
            ListNode* current=list->head;
            for (int j=0;j<i-1;j++){
                current=current->next;
            }
            ListNode* remotenote= current->next;
            current->next=remotenote->next;
            free(remotenote);

        }
        list->size--;
    }
}
ListNode* Listlinkedfind(Listlinked* list,eletype val){
    ListNode* current = list->head;
    while(current->next!= NULL){
        if(current->data == val)return current;
        current=current->next;



    }
    printf("no such value");
    return NULL;
}
ListNode* Listlinkedget(Listlinked* list, int i){
    if(i<0||i>list->size)
    {
        printf("out of range");
    }
    ListNode* current = list->head;
    for (int j=0 ;j<i;j++){
        current=current->next;
    
    }
    printf("get_it");
    return current;
}

int main(){
    Listlinked list;
    ListLinkedcreate(&list);
    Listlinkedinsert(&list,0,2);
    Listlinkedinsert(&list,1,2000);
    Listlinkedinsert(&list,2,1000000);
    Listlinkedinsert(&list,3,59);
    ListNode* node=list.head;
    for(int i = 0;i<list.size;i++){
    
        printf("%d-----",node->data);
        node=node->next;
        
    }
    ListNode* target=Listlinkedget(&list,1);
    printf("%d",target->data);
    free(node);
    /*
    ListlinkedDelete(&list,0);
     ListNode* temp=list.head;
    for(int i = 0;i<list.size;i++){
     
        printf("%d-----",temp->data);
        temp=temp->next; 
    }
*/
    /*int t;
    scanf("%d",&t);
    while(t--){
        printf("this is the %d th ",t);
    }*/
    ;
    }

