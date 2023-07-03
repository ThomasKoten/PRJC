#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
    char *data;
    struct Node *next;
} nod;

typedef struct Stack
{
    struct Node *top;
} sta;

void push(nod *node, sta *stack)
{
    nod *new_node = (nod *)malloc(sizeof(nod));
    // nod * top=stack->top;
//printf("%d %d %d")
    new_node->data = node->data;
    new_node->next = stack->top;
    stack->top = new_node;
    //free((void*)new_node);
}

void pop(sta *st)
{

    if (st->top == NULL)
        printf("Stack is Empty\n");
    else
    {
        nod *temp = st->top;
        st->top = temp->next;
        temp->next = NULL;
        printf("%s\n", temp->data);
    }
}

char *alok(int N)
{
    char *text = (char *)malloc(sizeof(char) * N);
    return text;
}

void edit(char *txt, char c, int pos, struct Stack *s, struct Node *n)
{
    nod *next_node = (nod *)malloc(sizeof(nod));
    txt[pos] = c;
    next_node->data = txt;
    next_node->next=NULL;
    push(next_node,s);
}

void edit2(char *txt, char *string, int from)
{

    if (strlen(txt) - from < strlen(string))
    {
        strcpy(txt + from, string);
    }
    else
    {
        for (int i = 0; i < strlen(string); i++)
        {
            *(txt + from + i) = *(string + i);
        }
    }
}

int main()
{
    struct Node *n = (nod *)malloc(sizeof(nod));
    struct Stack *s = (sta *)malloc(sizeof(sta));
    n->next = NULL;
    s->top = NULL;
    char *txt = alok(10);
    char *t2="Ahoj";
    scanf("%s \n", txt);
    n->data = txt;
    // strcpy(txt,"Ahoj");
    // printf("%s\n", txt);
    edit(txt,'T', 2, s, n);
    push(n, s);
    edit(txt,'Z', 2, s, n);
    push(n, s);
    pop(s);
    pop(s);
    // printf("%s", n->data);
    printf("%s\n", txt);
    free((void *)txt);
    txt = NULL;
}