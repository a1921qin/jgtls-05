#include"list.h"
int main()
{
	LinkList L;
	InitList(&L);
	int k,i;
	elemtype m ;
	CreateListHead(&L);
	ShowList(&L);
	printf("单链表的长度为%d\n", LengthList(&L));
	CreateListTail(&L);
	ShowList(&L);
	printf("单链表的长度为%d\n",LengthList(&L));
	GetElem(L, 5, &m);
	printf("得到的元素值为：%d\n", m);
	InsertList(&L, 4, 25);
	printf("插入元素后的");
	ShowList(&L);
	DeleteList(&L, 3, &m);
	printf("删除元素后的");
	ShowList(&L);
	printf("删除的元素值为：%d\n", m);
	ClearList(&L);
	return 0;
}

