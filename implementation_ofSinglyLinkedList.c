#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node  {
    int value;
    struct node *next;
};

void insert();
void display();
void delete();
int count();

typedef struct node DATA_NODE;

DATA_NODE *head_node, *first_node, *temp_node =0 , *prev_node, next_node;

int data;

int main() {
    int option = 0;

    printf("Singly Linked List Example - ALL OPERATION \n");

    while(option < 5) {
        printf("\n Options \n ");

           printf("1: Insert into Linked List \n");
           printf("2: Delete from Linked List \n");
           printf("3: Display Linked List \n");
           printf("4: Count Linked List ");

   printf("Others : Exit()\n ");

       printf("Enter your option: "); 
       scanf("%d" , &option);
         switch(option)
 {

 }

 return 0;




    }
    
   void insert() {
    printf("Enter Elements for Insert Linked List : ");
    scanf("%d" , &data);

    temp_node = (DATA_NODE * ) malloc(sizeof(DATA_NODE));

    temp_node-> value = data;

    if(first_node == 0) {
        first_node = temp_node;
    }else{
        head_node-> next = temp_node;
    }
    temp_node-> next = 0;
    head_node = temp_node;
   }

    
}