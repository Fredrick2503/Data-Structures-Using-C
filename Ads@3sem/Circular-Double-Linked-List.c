/*Circular Double Linked list program*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
typedef struct D_linked_list list;

struct node{
    int data;
    node* prev;
    node* next;
};

struct D_linked_list{
    node*start;
    node*last;
};

list* initialize(){
    list* l1=(list*)malloc(sizeof(list));
    l1->start=NULL;
    l1->last=NULL;
    return l1;
}


void createnode(int data,list* l1){
    if (l1->start==NULL){
        l1->start=(node*)malloc(sizeof(node));
        l1->start->data=data;
        l1->start->next=NULL;
        l1->last=l1->start;
        l1->start->prev=l1->last;
    }
    else{
        l1->last->next=(node*)malloc(sizeof(node));
        (l1->last->next)->prev=l1->last;
        l1->last=l1->last->next;
        l1->last->data=data;
        l1->last->next=l1->start;
        l1->start->prev=l1->last;
    }
}

void display(list* l1){
    node* temp=l1->start;
        if(temp!=NULL){
        while(1){
        printf("prev:%p data: %d at %p next:%p\n",temp->prev,temp->data,temp,temp->next);
            temp=temp->next;
            if(temp==l1->start)
            break;
        }}
        else{
            printf("List empty");
        }
    }


void main(){
    int i=5;
    list* ll=initialize();
    while(i>0){
        createnode(i,ll);
        i--;
    }
    display(ll);
}
