#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node{
    int num;
    struct node *nextptr;
}*stnode;

void createNodeList(int n);
void displayList();

int main(){
    int n;
    printf("\n \n Linked List : To create and display Singly Linked List :\n ");
    printf("\n");
    printf(" Input No.of nodes: ");
    scanf("%d", &n);
    
    createNodeList(n);
    printf("\n Data entered in List: \n");
    displayList();

    return 0;
}

void createNodeList(int n){
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL) {
        printf(" Memory can not be allocated.");
    } else {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;      
        stnode->nextptr = NULL; 
        tmp = stnode;
        for(i=2; i<=n; i++){
            fnNode = (struct node *)malloc(sizeof(struct node));

            if(fnNode==NULL){
                printf(" Memory cannot be allocated.");
                break;
            }
            else{
                printf(" Input data for node %d: ",i);
                scanf("%d", &num);
                fnNode->num = num;
                fnNode->nextptr=NULL;

                tmp->nextptr= fnNode;
                tmp= tmp->nextptr;
            }
        }
    }
}
void displayList(){
    struct node *tmp;
    if(stnode==NULL){
        printf(" The list is empty.");
    }
    else{
        tmp=stnode;

        while(tmp!=NULL){
            printf(" Data= %d\n", tmp->num);
            tmp = tmp->nextptr;
        }
    }
}