#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char szBuffer[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };

	memcpy(szNewBuffer, szBuffer, 4);
	//여기서 뒤에 있는 숫자는 바이트 크기 수이다.
	// 4는 4바이트를 의미한다!!!
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, 6);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);

	//이렇듯 특정 배열 값 내부를 복사해서 다른 배열로
	//갖다 넣으려면 배열명을 이용해서는 안 된다!!!
	//배열명은 r-value(상수)이기 때문에 l-value처럼 써선 안 된다.
	// memcpy() 함수를 쓰면 편하다!
	
	return 0;
}
