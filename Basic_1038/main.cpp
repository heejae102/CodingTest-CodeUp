#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

/*

���� 2���� �Է¹޾� ���� ����ϴ� ���α׷��� �ۼ��غ���.
(��, �ԷµǴ� ������ -1073741824 ~ 1073741824 �̴�.)


�Է�
2���� ������ �������� ���еǾ� �Էµȴ�.
** ���� : ����� ����� int ������ �Ѿ������ �� ������ ���ƾ� �Ѵ�.


���
�� ������ ���� ����Ѵ�.


�Է� ����
123 -123

��� ����
0

*/

int main()
{
	long long a, b;

	scanf("%lld %lld", &a, &b);
	printf("%lld", a + b);


	cin >> a >> b;
	cout << a + b << endl; 

	return 0;
}