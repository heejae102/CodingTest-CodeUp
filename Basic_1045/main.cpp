#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

/*

���� 2��(a, b)�� �Է¹޾� ��, ��, ��, ��, ������, ���� ���� �ڵ����� ����غ���.
�� 0 <= a, b <= 2147483647, b�� 0�� �ƴϴ�.


�Է�
���� 2���� ������ �ΰ� �Էµȴ�.


���
ù �ٿ� ��
��° �ٿ� ��,
��° �ٿ� ��,
��° �ٿ� ��,
�ټ�° �ٿ� ������,
����° �ٿ� ���� ���� ������� ����Ѵ�.
(�Ǽ�, �Ҽ��� ���� ��° �ڸ����� �ݿø��� ��° �ڸ����� ���)


�Է� ����
10 3

��� ����
13
7
30
3
1
3.33

*/

int main()
{
	long long a, b;

	scanf("%lld %lld", &a, &b);

	printf("%lld\n", a + b);
	printf("%lld\n", a - b);
	printf("%lld\n", a * b);
	printf("%lld\n", a / b);
	printf("%lld\n", a % b);
	printf("%.2lf\n", (double)a / b);


	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	cout << fixed << setprecision(2) << (double)a / b << endl;

	return 0;
}