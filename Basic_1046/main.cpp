#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

/*

���� 3���� �Է¹޾� �հ� ����� ����غ���.
��, -2147483648 ~ +2147483647


�Է�
���� 3���� ������ �ΰ� �Էµȴ�.
��, -2147483648 ~ +2147483647


���
�հ� ����� ���� �ٲ� ����Ѵ�.
����� �Ҽ��� ���� ��° �ڸ����� �ݿø��ؼ� �Ҽ��� ���� ù° �ڸ����� ����Ѵ�.


�Է� ����
1 2 3

��� ����
6
2.0

*/

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a + b + c);
	printf("%.1lf\n", (a + b + c) / 3.0);


	cin >> a >> b >> c;
	cout << a + b + c << endl; 
	cout << fixed << setprecision(1) << (a + b + c) / 3.0f << endl; 


	return 0; 
}