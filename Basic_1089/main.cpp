#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

� ��Ģ�� ���� ���� ������� ������ ���� ����(series)�̶�� �Ѵ�.

���� ���
1 4 7 10 13 16 19 22 25 ... ��
1���� ������ ������ ���� ���� 3�� ���� ���� ���� ���� �����̴�.
�̷��� ���� ���п����� �յ� ������ ���̰� ���ٰ� �Ͽ�

����(���̰� ������ �ѹ� ��) �����̶�� �Ѵ�.
������ �˰� �� �����̴� ���ڱ� �ñ�������.

"�׷�.... 123��° ������ ���� ����?"

�����̴� ���α׷��� ����� �� ū ���� �ڵ����� ����ϰ� �;�����.

���� ��(a), ����(d), �� ��°������ ��Ÿ���� ����(n)�� �Էµ� ��
n��° ���� ����ϴ� ���α׷��� ������.


�Է�
���� ��(a), ������ ��(d), �� ��° �� ������ �ǹ��ϴ� ����(n)��
������ �ΰ� �Էµȴ�.(��� 0 ~ 100)


���
n��° ���� ����Ѵ�.


�Է� ����
1 3 5

��� ����
13

*/

int main()
{
	int initial, term, index, i, count;
	scanf("%d %d %d", &initial, &term, &index);

	for (int i = 1; i < index; i++)
	{
		initial += term;
	}

	printf("%d\n", initial);


	//---------------------------------------------------------//


	for (i = initial, count = 1; ; count++, i += term)
	{
		if (count >= index) break; 
	}

	printf("%d\n", i);


	//---------------------------------------------------------//


	for (i = initial, count = 1; ;)
	{
		count++;
		i += term;
		if (count >= index) break; 
	}

	printf("%d\n", i);

	return 0;
}