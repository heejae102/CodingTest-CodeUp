#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

10�� ���� 1���� �Է¹޾� �ƽ�Ű ���ڷ� ����غ���.
��, 0 ~ 255 ������ ������ �Էµȴ�.


�Է�
10�� ���� 1��(0 ~ 255 ����)�� �Էµȴ�.


���
�ƽ�Ű�ڵ� ���� ���ڷ� ����Ѵ�.


�Է� ����
65

��� ����
A

*/


int main()
{
	int num;

	scanf("%d", &num);
	printf("%c", num);


	cin >> num;
	cout << char(num) << endl; 

	return 0;
}