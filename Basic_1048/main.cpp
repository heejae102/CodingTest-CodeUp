#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

/*

���� 2��(a, b)�� �Է¹޾� a�� 2b�� ���� ������ ����غ���.
0 <= a <= 10, 0 <= b <= 10


����
���� ��� 1 3 �� �ԷµǸ� 1�� 23(8)�� �Ͽ� ����Ѵ�.

����
int a=1, b=10;
printf("%d", a << b); //210 = 1024 �� ��µȴ�.


�Է�
���� 2���� ������ �ΰ� �Էµȴ�.
0 <= a, b <= 10


���
a �� 2b�� ��ŭ ���� ���� ����Ѵ�.


�Է� ����
1 3

��� ����
8

*/

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d\n", a << b);


	cin >> a >> b;
	cout << (a << b) << endl; 

	return 0;
}