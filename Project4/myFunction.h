#include<stdlib.h>

typedef int Status;

typedef struct node{
	int num;
	int flag;
	struct node* next;
	struct node* prior;
}*DulList,dulnode;


Status INSERT(DulList L, int t, int update);
DulList InitList();
Status DestroyList(DulList L);
Status ClearList(DulList L);
Status Empty(DulList L);
Status Delete(DulList L);
void add(DulList L, int i, int x);
void Multiply(DulList L, int i, int x);
DulList GetElem(DulList L, int i);
int DulListlength(DulList L);