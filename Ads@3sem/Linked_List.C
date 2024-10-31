/*Linked list program*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
typedef struct linked_list list;

struct node{
    int data;
    node* link;
};

struct linked_list{
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
        l1->start->link=NULL;
        l1->last=l1->start;
    }
    else{
        l1->last->link=(node*)malloc(sizeof(node));
        l1->last=l1->last->link;
        l1->last->data=data;
        l1->last->link=NULL;
    }
}

void display(list* l1){
    node* temp=l1->start;
        if(temp!=NULL){
            while(temp!=NULL){
        printf("this: %p data: %d next:%p\n",temp,temp->data,temp->link);
        temp=temp->link;
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
