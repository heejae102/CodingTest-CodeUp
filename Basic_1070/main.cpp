#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

���� �Էµ� �� ���� �̸��� ��µǵ��� �غ���.

��
�� : ���� �̸�
12, 1, 2 : winter
  3, 4, 5 : spring
  6, 7, 8 : summer
  9, 10, 11 : fall

����
swtich( ).. case ... break; �������
break;�� �����ϸ� ������ �ʰ� ���� ����� ����Ǵ� Ư���� �̿��� �� �ִ�.

switch(a)
{
  ...
  case 3:
  case 4:
  case 5:
	printf("spring");
  break;
  ...
}
�� �ۼ��ϸ�, 3, 4, 5�� �ԷµǾ��� �� ��� "spring"�� ��µȴ�.

** 12, 1, 2 �� ��� ó���ؾ� ���� ���� ������ ������ ���ƾ� �Ѵ�.


�Է�
���� �ǹ��ϴ� 1���� ������ �Էµȴ�.(1 ~ 12)


���
���� �̸��� ����Ѵ�.


�Է� ����
12

��� ����
winter

*/

int main()
{
	int m;

	scanf("%d", &m);

	switch (m)
	{
	case 12: case 1: case 2:
		printf("winter\n");
		break;

	case 3: case 4: case 5:
		printf("spring\n");
		break;	
	
	case 6: case 7: case 8:
		printf("summer\n");
		break;	
	
	case 9: case 10: case 11:
		printf("fall\n");
		break;
	}

	return 0;
}