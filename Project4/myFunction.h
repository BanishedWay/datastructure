#include<stdlib.h>

typedef int Status;

typedef struct node{
	int num;
	int flag;
	struct node* next;
	struct node* prior;
}DulList,dulnode;


Status INSERT(DulList* L, int t, int update);
Status DELETE(DulList* L, int t);
int QUERY(DulList* L, int t);
DulList* InitList();
Status DestroyList(DulList* L);
Status ClearList(DulList* L);
Status Empty(DulList* L);
void Add(DulList* L, int i, int x);
void Multiply(DulList* L, int i, int x);
DulList* GetElem(DulList* L, int i);
int DulListlength(DulList* L);
void Set(DulList* L, int i, int x);