#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

8������ �Էµ� ���� 1���� 10������ �ٲپ� ����غ���.

����
%o�� �Է¹����� 8������ �νĽ��� �����ų �� �ִ�.
%d�� ����ϸ� 10������ ��µȴ�.

����
int n;
scanf("%o", &n);
printf("%d", n);
(C���� �ҽ� �ڵ� �ۼ� �� 0���� �����ϴ� ���� 8������ �νĵȴ�. int a = 013; // 10���� 11�� ���� ��)


�Է�
8�� ���� 1���� �Էµȴ�.


���
10������ �ٲپ� ����Ѵ�.


�Է� ����
13

��� ����
11


*/

int main()
{
	int num;

	scanf("%o", &num);
	printf("%d", num);


	cin >> oct >> num;
	cout << num;

	return 0;
}