#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	char szBuffer[] = "Hello";
	char* pszBuffer = szBuffer;

	char* pszHeap = (char*)malloc(sizeof(char) * 16);
	strcpy_s(pszHeap, sizeof(char) * 16, pszBuffer);  //strcpy_s()함수 내부에는 포인터, 주소값만 들어갈 수 있다!
	//pszHeap 변수(메모리)에 szBuffer 내용을 집어넣겠다.

	puts(pszHeap);
	free(pszHeap);
	return 0;
}
