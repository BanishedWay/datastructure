#include<stdio.h>
#include "myFunction.h"

Status INSERT(DulList* L, int t, int update)
{
	int x;
	printf("ÇëÊäÈëx£º\n");
	scanf("%d", &x);
	
	switch (update)
	{
	case 1:
		Add(L, t, x);
		break;
	case 2:
		Multiply(L, t, x);
		break;
	case 3:
		Set(L, t, x);
	default:
		break;
	}
	return 1;
}

Status DELETE(DulList* L, int t)
{
	DulList* p = GetElem(L, t);
	p->prior->next = p->next;
	p->next->prior = p->prior;
	p->next = NULL;
	p->prior = NULL;
	p->num = 0;
	p->flag = 0;
	free(p);
	return 1;
}

int QUERY(DulList* L, int t)
{
	DulList* p = GetElem(L, t);
	if (!p)
		return 0;
	return p->num;
}

DulList* InitList()
{
	DulList* L = (DulList*)malloc(sizeof(dulnode));
	L->next = L->prior = L;
	L->num = 0;
	L->flag = 0;
	return L;
}

Status DestroyList(DulList* L)
{
	ClearList(L);
	free(L);
	return 1;
}

Status ClearList(DulList* L)
{
	DulList* p = L->next;
	while (p != L)
	{
		p = p->next;
		free(p->prior);
	}
	L->next = L->prior = L;
	return 1;
}

Status Empty(DulList* L)
{
	if (L->next == L && L->prior == L)
		return 1;
	return 0;
}

void Add(DulList* L, int i, int x)
{
	DulList* p = (DulList*)malloc(sizeof(dulnode));
	if (!p)
		return;
	p->flag = i;
	p->num = x;
	p->prior = L->prior;
	p->next = L;
	L->prior->next = p;
	L->prior = p;
	return;
}

void Multiply(DulList* L, int i, int x)
{
	DulList* p = GetElem(L, i);
	if (!p)
		return;
	p->num *= x;
	return;
}

DulList* GetElem(DulList* L, int i)
{
	DulList* p = L;
	if (i<0 || i>DulListlength(L))
		return NULL;
	while (p->flag != i)
		p = p->next;
	return p;
	
}

int DulListlength(DulList* L)
{
	int len = 0;
	DulList* p = L->next;
	while (p != L)
	{
		len++;
		p = p->next;
	}
	return len;
}

void Set(DulList* L, int i, int x)
{
	DulList* p = GetElem(L, i);
	if (!p)
		return;
	p->num = x;
	return;
}


