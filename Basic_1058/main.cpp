#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

/*

�� ���� ��(1) �Ǵ� ����(0)�� �Էµ� ��,
��� ������ ������ ���� ���Ǵ� ���α׷��� �ۼ��غ���.


�Է�
1 �Ǵ� 0�� ���� ������ 2���� ������ ������ �ΰ� �Էµȴ�.


���
�� �� ������ ��쿡�� 1�� ����ϰ�, �� ���� ��쿡�� 0�� ����Ѵ�.


�Է� ����
0 1

��� ����
0

*/

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", !a && !b);
	printf("%d", !(a || b));

	return 0;
}