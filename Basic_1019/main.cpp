#include<stdio.h>
#include<iostream>
using namespace std; 

/*

��, ��, ���� �Է¹޾� ������ �������� ����ϴ� ������ �غ���.


�Է�
��, ��, ���� ".(��)"���� ���еǾ� �Էµȴ�.


���
�Է¹��� ��, ��, ���� yyyy.mm.dd �������� ����Ѵ�.
(%02d�� ����ϸ� 2ĭ�� ����� ����ϴµ�, �� �ڸ� ���� ��� �տ� 0�� �ٿ� ����Ѵ�.)


�Է� ����
2013.8.5

��� ����
2013.08.05

*/

int main()
{
	int y, m, d;
	char ch; 

	scanf_s("%d.%d.%d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d);

	cin >> y >> ch >> m >> ch >> d;

	//width(n) : nĭ��ŭ ��� 
	//fill(n)  : ���� ĭ�� n�� �ٿ��� ��� 
	//��fill�� n�� ������ �Է��ϸ� ��ĭ���� ��µ�. 
	cout.width(4);
	cout.fill('0');
	cout << y << ch;

	cout.width(2);
	cout.fill('0');
	cout << m << ch;

	cout.width(2);
	cout.fill('0');
	cout << d << endl; 

	return 0; 
}