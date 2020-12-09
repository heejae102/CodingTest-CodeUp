#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

/*

실수형(float)로 변수를 선언하고 그 변수에 실수값을 저장한 후
저장되어 있는 실수값을 출력해보자.

참고
float x;
scanf("%f", &x);
printf("%f", x);

와 같은 방법으로 가능하다.

입력 예시
1.414213

출력 예시
1.414213

소수점 아래 6자리 수까지 출력해야 함. 

*/

int main()
{
	float num;

	scanf_s("%f", &num);
	printf("%f", num);

	cin >> num;
	cout << fixed << setprecision(6) << num << endl; 

	//fixed 없이 setprecision만 사용하면 숫자의 전체 자리수를 설정
	//fixed와 함께 setprecision 설정 시 소수점 아래의 자리수를 설정 

	return 0; 
}