#include<stdio.h>
#include"myFunction.h"

int main()
{
	DulList* L = InitList();
	int update, t;
	while (1)
	{
		printf("请选择：\n1、将一个数x加到存储的整数中\n2、将一个数x乘到存储的整数中\n3、将存储的整数设为x\n4、删除第t次操作\n5、查询第t次操作时存储的整数值。\n6、退出。\n");
		scanf("%d", &update);
		if (update != 6)
		{
			printf("请输入操作次数：\n");
			scanf("%d", &t);
			printf("\n");
		}

		switch (update)
		{
		case 1:
		case 2:
		case 3:
			INSERT(L, t, update);
			break;
		case 4:
			DELETE(L, t);
			break;
		case 5:
			printf("%d\n", QUERY(L, t));
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}
		printf("\n");
	}
	return 0;
}