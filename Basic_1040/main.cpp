#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

/*

�Էµ� ������ ��ȣ�� �ٲ� ����غ���.
��, -2147483647 ~ +2147483647 ������ ������ �Էµȴ�.

����
���� �������� -(negative)�� ���� �տ� ���̸� ��ȣ�� �ݴ�� �ٲ�� ���ȴ�.

����
int a;
scanf("%d", &a);
printf("%d", -a);


�Է�
���� 1���� �Էµȴ�.


���
��ȣ�� �ٲ� ����Ѵ�.


�Է� ����
-1

��� ����
1

*/

int main()
{
	int num;

	scanf("%d", &num);
	printf("%d", -num);


	cin >> num;
	cout << -num << endl; 

	return 0;
}