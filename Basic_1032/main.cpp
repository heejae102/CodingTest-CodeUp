#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

10������ �Է¹޾� 16����(hexadecimal)�� ����غ���.

����
%d(10���� ����)�� �Է¹ް�
%x�� ����ϸ� 16����(hexadecimal) �ҹ��ڷ� ��µȴ�.

10������ �� �ڸ��� 10��(0 1 2 3 4 5 6 7 8 9)�� ���ڸ� ����ϰ�,
16������ �� �ڸ��� 16��(0 1 2 3 4 5 6 7 8 9 a b c d e f)�� ���ڸ� ����Ѵ�.
16������ a�� 10������ 10, b�� 11, c�� 12 ... �� ����.


�Է�
10���� 1���� �Էµȴ�.


���
16����(�ҹ���)�� ����Ѵ�.


�Է� ����
255

��� ����
ff

*/

int main()
{
	int num;

	scanf("%d", &num);
	printf("%x", num);


	cin >> num;
	cout << hex << num;

	return 0;
}