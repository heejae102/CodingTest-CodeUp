#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

����(1 ~ 100) 1���� �ԷµǾ��� �� ī��Ʈ�ٿ��� ����غ���.


����
int n;
scanf("%d", &n);
while(n!=0)
{
  n=n-1; //n--; �� ����.
  printf("%d", n);
}


�Է�
���� 1���� �Էµȴ�.
(1 ~ 100)

���
1�� ���̸鼭 �� �ٿ� �ϳ��� 0�� �� ������ ����Ѵ�.


�Է� ����
5

��� ����
4
3
2
1
0

*/

int main()
{
	int cnt;
	scanf("%d", &cnt);

	//while (1)
	//{
	//	printf("%d\n", --cnt);
	//	if (cnt <= 0) break;
	//}

	for (int i = cnt - 1; i >= 0; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}