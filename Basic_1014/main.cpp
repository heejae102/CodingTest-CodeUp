#include<stdio.h>
#include<iostream>
using namespace std; 

/*

2���� ����(ASCII CODE)�� �Է¹޾Ƽ� ������ �ٲ� ����غ���.

����
char x, y;
scanf("%c %c", &x, &y);
printf("%c %c", y, x); //��µǴ� ������ �ۼ�
�� ���� ������� �ذ��� �� �ִ�.

�Է�
2���� ���ڰ� �������� ���еǾ� �Էµȴ�.

���
�� ������ ������ �ٲ� ����Ѵ�.

*/

int main()
{
	char a, b;

	//scanf("%c %c", &a, &b);
	//scanf_s �Լ��� ���ڸ� �Է¹��� ��, ������ ����� �Ű������� �Ѱܾ� ��. 
	scanf_s("%c %c", &a, 1, &b, 1);
	printf("%c %c", b, a);

	cin >> a >> b;
	cout << b << " " << a << endl; 

	return 0; 
}