#include<stdio.h>
#include "myFunction.h"

Status INSERT(DulList L, int t, int update)
{
	int x;
	scanf("%d", &x);
	
	switch (update)
	{
	case 1:
		
		break;
	case 2:
		
		break;
	case 3:
		
	default:
		break;
	}
}

DulList InitList()
{
	DulList L = (DulList)malloc(sizeof(dulnode));
	L->next = L->prior = L;
	L->num = 0;
	L->flag = 0;
	return L;
}

Status DestroyList(DulList L)
{
	ClearList(L);
	free(L);
	if (L)
		return 0;
	return 1;
}

Status ClearList(DulList L)
{
	DulList p = L->next;
	while (p != L)
	{
		p = p->next;
		free(p->prior);
	}
	L->next = L->prior = L;
	return 1;
}

Status Empty(DulList L)
{
	if (L->next == L && L->prior == L)
		return 1;
	return 0;
}

Status Delete(DulList L)
{
	DulList p;
	p->prior->next = p->next;
	p->next->prior = p->prior;
	free(p);
	if (p)
		return 0;
	return 1;
}

void add(DulList L, int i, int x)
{
	DulList p = (DulList)malloc(sizeof(dulnode));
	if (!p)
		return;
	p->flag = i;
	p->num = x;
	p->prior = L->prior;
	p->next = L;
	L->prior->next = p;
	L->prior = p;
}

void Multiply(DulList L, int i, int x)
{

}

DulList GetElem(DulList L, int i)
{
	int j;
	DulList p = L;
	if()
}

int DulListlength(DulList L)
{
	int len = 0;
	DulList p = L->next;
	while (p != L)
	{
		len++;
		p = p->next;
	}
	return len;
}


