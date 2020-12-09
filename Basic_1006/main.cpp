#include<stdio.h>
#include<iostream>
using namespace std; 

/*

다음 문장을 출력하시오.

"!@#$%^&*()"
(단, 큰따옴표도 함께 출력한다.)

※참고
% 기호가 앞에 붙는 문자를 형식 지정자(format specifier)라고 하며,
그 위치에서 지정한 형식으로 값을 출력해 준다.
따라서, 퍼센트 문자 %를 출력하기 위해서는 %%로 출력해 주어야 한다.

단, C++에서 cout으로 출력시에는 %를 그대로 사용해야 한다. 

*/

int main()
{
	printf("\"!@#$%%^&*()\"");

	cout << "\"!@#$%^&*()\"" << endl; 

	return 0; 
}