#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node*create_node(int);
void insert_begin(int);
void reverse_list();
void print();
int main()
{
    insert_begin(10);
    insert_begin(90);
    insert_begin(31);
    insert_begin(78);
    insert_begin(99);
    printf("Linked List before reversed: \n");
    print();
    reverse_list();
    printf("\nLinked List after reversed: \n");
    print();
    return 0;
}
struct node* create_node(int data)
{
    struct node* new_node = (struct node*) malloc (sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Memory can't be allocated for new node");
        return NULL;
    }
    else
    {
        new_node -> data = data;
        new_node -> next = NULL;
        return new_node;
    }
}
void insert_begin(int data)
{
    struct node* new_node = create_node(data);
    if (new_node != NULL)
    {
        new_node -> next = head;
        head = new_node;
    }
}
void reverse_list()
{
    struct node* prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL)
    {
        next = curr -> next;
        curr ->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
void print()
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d ? ", temp->data);
        temp = temp->next;
    }
    printf("NULL \n");
}
