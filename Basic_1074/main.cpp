#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

����(1 ~ 100) 1���� �ԷµǾ��� �� ī��Ʈ�ٿ��� ����غ���.


while(����)
{
  ...
}
������ �������.

����
int n;
scanf("%d", &n);
while(n!=0)
{
  printf("%d", n);
  n=n-1; //n--;�� ����.
}


�Է�
���� 1���� �Էµȴ�.
(1 ~ 100)


���
1�� ���̸鼭 �� �ٿ� �ϳ��� 1�� �� ������ ����Ѵ�.


�Է� ����
5

��� ����
5
4
3
2
1

*/

int main()
{
	int cnt;
	scanf("%d", &cnt);

	for (; cnt > 0; cnt--)
	{
		printf("%d\n", cnt);
	}

	while (1)
	{
		printf("%d\n", cnt--);
		if (cnt <= 0) break; 
	}

	return 0;
}