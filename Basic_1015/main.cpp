#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std; 

/*

�Ǽ�(float) 1���� �Է¹޾� ������ ��,
����Ǿ� �ִ� ���� �Ҽ��� �� ° �ڸ����� �ݿø��Ͽ�
�Ҽ��� ���� �� ° �ڸ����� ����Ͻÿ�.

����
%.3f �� ���� �������� �����ϸ�,
�Ҽ��� ���� �� ° �ڸ����� �ݿø��Ͽ� �Ҽ��� ���� �� ° �ڸ����� ����϶�� �ǹ��̴�.

�Է� ����
1.59254

��� ����
1.59

*/

int main()
{
	float num;

	scanf_s("%f", &num);
	printf("%.2f", num);

	cin >> num;
	cout << fixed << setprecision(2) << num << endl; 

	return 0;
}