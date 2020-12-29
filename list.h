#ifndef LIST_H
#define LIST_H
#include<stdio.h>
#include<stdlib.h>
typedef int elemtype;
typedef struct Node
{
	elemtype data;
	struct Node *next;
}Node;
typedef struct Node *LinkList;


int InitList(LinkList *L);
void CreateListHead(LinkList *L) ;
void CreateListTail(LinkList *L) ;
int LengthList(LinkList *L);
int GetElem(LinkList L, int i, elemtype *e) ;
int InsertList(LinkList *L, int i, elemtype e);
int DeleteList(LinkList *L, int i, elemtype *e) ;
int ClearList(LinkList *L) ;
void ShowList(LinkList *L);



#endif
