#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

n���� ������ ������� �Էµȴ�.
-2147483648 ~ +2147483647, �� n�� �ִ� ������ �� �� ����.

n���� �Էµ� ������ ������� ����غ���.

while( ), for( ), do~while( ) ���� �ݺ����� ����� �� ����.


����
  int n, m;
  scanf("%d", &n);
reget: //���̺��� �ݷ�( : ) ���� ������.
  scanf("%d", &m);
  printf("%d\n", m);
  if(n-- != 0) goto reget; //reget:���� �̵�, n�� �� 1��ŭ ����


�Է�
ù �ٿ� ������ ���� n�� �Էµǰ�,
�� ��° �ٿ� n���� ������ ������ �ΰ� �Էµȴ�.
-2147483648 ~ +2147483647, �� n�� �ִ� ������ �� �� ����.


���
n���� ������ �� ���� ���� �ٲ� ����Ѵ�.


�Է� ����
5
1 2 3 4 5

��� ����
1
2
3
4
5

*/

int main()
{
	int cnt, num;
	scanf("%d", &cnt);
	
//reInput:
//	if (cnt-- > 0)
//	{
//		scanf("%d", &num);
//		printf("%d\n", num);
//		goto reInput;
//	}

//reInput:
//	scanf("%d", &num);
//	printf("%d\n", num);
//	cnt--;
//
//	if (cnt > 0) goto reInput;


reInput:
	if (cnt--)
	{
		scanf("%d", &num);
		printf("%d\n", num);
		goto reInput;
	}

	return 0;
}