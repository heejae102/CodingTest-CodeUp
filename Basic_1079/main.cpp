#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

'q'�� �Էµ� ������ �Է��� ���ڸ� ��� ����ϴ� ���α׷��� �ۼ��غ���.


�Է�
���ڵ��� 1���� ����ؼ� �Էµȴ�.


���
'q'�� �Էµ� ������ �Էµ� ���ڸ� ���� �ٲ� �� �پ� ����Ѵ�.


�Է� ����
x b k d l q g a c

��� ����
x
b
k
d
l
q

*/

int main()
{
	char ch;

	while (1)
	{
		//���� �ڿ� ��ĭ ������ ���� ������ ��� �� �̻��� ������ ����. 
		scanf("%c ", &ch);
		printf("%c\n", ch);
		if (ch == 'q') break;
	}

	return 0;
}