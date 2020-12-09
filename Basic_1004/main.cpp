#include<stdio.h>
#include<iostream>
using namespace std; 

/*

다음 문장을 출력하시오.

'Hello'

※참고
printf( ) 함수로 따옴표 문자 ' 를 출력하기 위해서는 \' 로 입력해야 한다.
C++의 cout으로 출력할 때도 마찬가지  

\' 는 작은따옴표 문자 자체 출력
\" 는 큰따옴표 문자 자체 출력 …  등.

*/

int main()
{
	printf("\'Hello\'");

	cout << "\'Hello\'" << endl; 

	return 0; 
}