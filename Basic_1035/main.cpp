#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

16������ �Էµ� ���� 1���� 8������ �ٲپ� ����غ���.

����
%x(������ �ҹ���) �� %X(������ �빮��)�� �Է� ������
16������ �νĽ��� �����ų �� �ִ�. %o�� ����ϸ� 8������ ��µȴ�.

C���� �ҽ� �ڵ� �ۼ��� 0���� �����ϴ� ���� 8������ �νĵȴ�.


����
int n;
scanf("%x", &n); //�ҹ��ڷ� 16���� �Է�
printf("%o", n);


�Է�
16�� ���� 1���� �Էµȴ�.
(��, 16������ ���� �ҹ��ڷ� �Էµȴ�.)


���
8������ �ٲپ� ����Ѵ�.


�Է� ����
f

��� ����
17

*/

int main()
{
	int num;

	scanf("%x", &num);
	printf("%o", num);


	cin >> hex >> num;
	cout << oct << num;

	return 0;
}