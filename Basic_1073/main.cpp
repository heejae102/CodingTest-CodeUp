#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

������ ������� �Էµȴ�.
-2147483648 ~ +2147483647, �� ������ �� �� ����.

0�� �ƴϸ� �Էµ� ������ ����ϰ�, 0�� �ԷµǸ� ����� �ߴ��غ���.


if(����)
{ //�ڵ����
  ...;
}
������ ����ϸ� �־��� ������ ���� ��츸 �ڵ���� �κ��� ����ȴ�.

����ϰ� � ���ǿ� ���� �ݺ������� �����ų ������ if�� while�� �ٲٱ⸸ �ϸ�

while(����)
{ //�ڵ����
  ...;
}

�� ���� ������� �ڵ������ ������ �ݺ������� �����ų �� �ִ�.

����Ǵ� ������
1. ���� ������ �˻��Ѵ�.
2. �ڵ������ �����Ѵ�.
3. �ٽ� ������ �˻��Ѵ�.
4. �ڵ������ �����Ѵ�.
...

�� ���� �־��� ������ ���� ���� ��������� �ݺ� �����Ѵ�.
�̷��� while(����){...}�� �̿��ϸ� goto ������ ������� �ʰ�
�ݺ��� ���� �� �ִ�.

����
int n=1; //ó�� ���� �˻縦 �Ѿ�� ���� 0�� �ƴ� �� �Է�
while(n!=0)
{
  scanf("%d", &n);
  printf("%d", n);
}


�Է�
������ ������� �Էµȴ�.
-2147483648 ~ +2147483647, �� ������ �� �� ����.


���
�Էµ� ������ ���� �ٲ� �ϳ��� ����ϴµ�, 0�� �ԷµǸ� �����Ѵ�.
(0�� ������� �ʴ´�.)


�Է� ����
7 4 2 3 0 1 5 6 9 10 8

��� ����
7
4
2
3

*/

int main()
{
	int num;

	while (1)
	{
		scanf("%d", &num);

		if (num == 0) break; 
		printf("%d\n", num);
	}

	while (1)
	{
		scanf("%d", &num);

		if (num != 0) printf("%d\n", num);
		else break; 
	}
	return 0;
}