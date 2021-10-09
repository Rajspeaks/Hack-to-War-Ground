// This program shows different operations on linked list
// Call a function to use it

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int *a, int n)
{
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = a[0];
    struct Node *p;
    struct Node *l;
    int i;
    l = first;
    for (i = 1; i < n; i++)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = a[i];
        p->next = NULL;
        l->next = p;
        l = p;
    }
}

int count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

int sum(struct Node *p)
{
    int s = 0;
    while (p)
    {
        s += p->data;
        p = p->next;
    }
    return s;
}

int maximum(struct Node *p)
{
    int max = first->data;
    p = first->next;
    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int minimum(struct Node *p)
{
    int min = first->data;
    p = first->next;
    while (p)
    {
        if (p->data < min)
            min = p->data;
        p = p->next;
    }
    return min;
}

//Improved version of linear search in linked list

struct Node *search(struct Node *p, int key)
{
    struct Node *q = NULL;

    if (key == p->data)
        return p;

    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}


void insert(struct Node *p, int pos, int x){
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if(p == NULL)
        first = t;

    else if(pos == 0){
        t->next = first;
        first = t;
    }
    else{
        for(int i=0; i<pos-1 && p; i++)
           p = p->next;
        if(p){
            t->next = p->next;
            p->next = t;
        }
    }
}

void insertLast(struct Node *p, int x){
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    struct Node *last = NULL;

    if(p == NULL)
       first = last = t;
    else{
        while(p){
            last = p;
            p = p->next;
        }
        last->next = t;
    }    
}

void sortedInsert(struct Node *p, int x){
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    struct Node *q = NULL;

    if(first == NULL)
       first = t;
    else{
        while(p && p->data < x){
            q = p;
            p = p->next;
        }
        if(p == first){
            t->next = p;
            first = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }
    }
}

int delete(struct Node *p, int pos){
    struct Node *q = NULL;
    int x = INT_MIN;

    if(pos < 1 || pos > count(p))
        return x;
    if(pos == 1){
        x = p->data;
        first = first->next;
        free(p);
        return x;
    }
    for(int i=0; i<pos-1; i++){
        q = p;
        p = p->next;
    }
    x = p->data;
    q->next = p->next;
    free(p);
    return x;
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{

    int a[] = {5,3,78,45,60};

    create(a, 5);
    
    printf("%d\n",sum(first));
    printf("%d\n",maximum(first));
    insert(first, 3, 100);
    delete(first, 5);

    display(first);
}

// Here output will be
/* 191
   78
   5 3 78 100 60 */
