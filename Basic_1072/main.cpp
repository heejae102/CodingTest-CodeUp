#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

n개의 정수가 순서대로 입력된다.
-2147483648 ~ +2147483647, 단 n의 최대 개수는 알 수 없다.

n개의 입력된 정수를 순서대로 출력해보자.

while( ), for( ), do~while( ) 등의 반복문을 사용할 수 없다.


예시
  int n, m;
  scanf("%d", &n);
reget: //레이블은 콜론( : ) 으로 끝난다.
  scanf("%d", &m);
  printf("%d\n", m);
  if(n-- != 0) goto reget; //reget:으로 이동, n의 값 1만큼 감소


입력
첫 줄에 정수의 개수 n이 입력되고,
두 번째 줄에 n개의 정수가 공백을 두고 입력된다.
-2147483648 ~ +2147483647, 단 n의 최대 개수는 알 수 없다.


출력
n개의 정수를 한 개씩 줄을 바꿔 출력한다.


입력 예시
5
1 2 3 4 5

출력 예시
1
2
3
4
5

*/

int main()
{
	int cnt, num;
	scanf("%d", &cnt);
	
//reInput:
//	if (cnt-- > 0)
//	{
//		scanf("%d", &num);
//		printf("%d\n", num);
//		goto reInput;
//	}

//reInput:
//	scanf("%d", &num);
//	printf("%d\n", num);
//	cnt--;
//
//	if (cnt > 0) goto reInput;


reInput:
	if (cnt--)
	{
		scanf("%d", &num);
		printf("%d\n", num);
		goto reInput;
	}

	return 0;
}