#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

����(1 ~ 100) 1���� �Է¹޾� 1���� �� ������ ¦���� ���� ���غ���.


����
while( ) {...}, do {...} while( );, for(...; ...; ...) {...} ���� �ݺ����� ���¸� �ٸ�
��, �Ȱ��� ������ �����Ѵ�. �ʿ信 ���� ���� ������ ��� ����ϸ� �ȴ�.

����
//�Ʒ��� ���� Ȧ���� ��츸 ���� �� ����� ����Ѵ�.
int sum=0;
int i, n;
scanf("%d", &n);
for(i=1; i<=n; i++)
{
  if(i%2==1) sum=sum+i;
}


�Է�
���� 1���� �Էµȴ�.
(0 ~ 100)


���
1���� �Էµ� ������ ¦���� ���� ����Ѵ�.


�Է� ����
5

��� ����
6

*/

int main()
{
	int num, sum = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 0) sum += i;
	}

	printf("%d\n", sum);


	for (int i = 1; i <= num; i++)
	{
		sum += (i % 2 == 0) ? i : 0;
	}

	printf("%d\n", sum);

	return 0;
}