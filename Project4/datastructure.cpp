#include<stdio.h>
#include"myFunction.h"

int main()
{
	DulList* L = InitList();
	int update, t;
	while (1)
	{
		printf("��ѡ��\n1����һ����x�ӵ��洢��������\n2����һ����x�˵��洢��������\n3�����洢��������Ϊx\n4��ɾ����t�β���\n5����ѯ��t�β���ʱ�洢������ֵ��\n6���˳���\n");
		scanf("%d", &update);
		if (update != 6)
		{
			printf("���������������\n");
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
			printf("����������������룺\n");
			break;
		}
		printf("\n");
	}
	return 0;
}