#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

10������ �Է¹޾� 8����(octal)�� ����غ���.

����
%d(10���� ����)�� �Է¹ް�,
%o�� ����� ����ϸ� 8����(octal)�� ��µȴ�.


�Է�
10���� 1���� �Էµȴ�.
��, �ԷµǴ� ������ int �����̴�.


���
8������ ����Ѵ�.


�Է� ����
10

��� ����
12

*/

int main()
{
	int num;

	scanf("%d", &num);
	printf("%o", num);

	cin >> num;
	cout << oct << num << endl; 

	return 0;
}