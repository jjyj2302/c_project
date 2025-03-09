#include <stdio.h>

int printMenu() {
	int nInput = 0;

	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n");
	scanf_s("%d", &nInput);

	return nInput;
}

int getAge() {
	int nAge = 0;
	printf("나이를 입력하세요. : ");
	scanf_s("%d%&c", &nAge); //계속해서 입력받기 위해 입력 버퍼를 지우는 행위를 해주어야 한다.
	return nAge;
}

int GetFee(int age) {

	double rate[5];


}
int main() {

	int nMenu = 0, nAge = 0;

	/// <summary>
	/// 이벤트 루프는 while문 내부에 약간의 swith-case문 조건문 처럼 실행한다!!! <- 모든 Application의 기본이다!!!
	/// </summary>

	while ((nMenu = printMenu()) != 0) {
		
		if (nMenu == 1) {
			nAge = getAge();
			printf("요금은 %d원입니다.\n", GetFee(nAge));
		}
		
		else if (nMenu == 2) {

		}
	}

	puts("Bye~~!");
	return 0;
}
