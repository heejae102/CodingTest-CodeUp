#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

정수(1 ~ 100) 1개를 입력받아 1부터 그 수까지 짝수의 합을 구해보자.


참고
while( ) {...}, do {...} while( );, for(...; ...; ...) {...} 등의 반복문은 형태만 다르
고, 똑같은 성능을 발휘한다. 필요에 따라 편리한 것으로 골라 사용하면 된다.

예시
//아래의 예는 홀수일 경우만 더해 그 결과를 출력한다.
int sum=0;
int i, n;
scanf("%d", &n);
for(i=1; i<=n; i++)
{
  if(i%2==1) sum=sum+i;
}


입력
정수 1개가 입력된다.
(0 ~ 100)


출력
1부터 입력된 수까지 짝수의 합을 출력한다.


입력 예시
5

출력 예시
6

*/

int main()
{
	int num, sum = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 0) sum += i;
	}

	printf("%d\n", sum);


	for (int i = 1; i <= num; i++)
	{
		sum += (i % 2 == 0) ? i : 0;
	}

	printf("%d\n", sum);

	return 0;
}