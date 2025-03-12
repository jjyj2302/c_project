#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char* pszBuffer = NULL, * pszNewBuffer = NULL;
    pszBuffer = (char*)malloc(sizeof(char) * 12);
    sprintf_s(pszBuffer, 12, "%s", "TestString");
    printf("[%p] %zd %s\n", pszBuffer, _msize(pszBuffer), pszBuffer);

    pszNewBuffer = (char*)realloc(pszBuffer, 32);
    //기존의 pszBuffer를 32바이트로 늘려달라.
    //realloc() 함수를 잘 못 쓰면, 새롭게 메모리 공간을 할당함과 동시에
    //메모리 내부 값도 복사해야하기 때문에 상당히 귀찮아진다.
    sprintf_s(pszNewBuffer, 32, "%s", "TestStringData");
    printf("[%p] %zd %s\n",
        pszNewBuffer, _msize(pszNewBuffer), pszNewBuffer);

   
    free(pszNewBuffer);
    return 0;
}
