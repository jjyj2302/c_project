
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
char** astrList = NULL;
astrList = (char**)malloc(sizeof(char*) * 3);

for (int i = 0; i < 3; i++)
	*(astrList + i) = (char*)malloc(sizeof(char) * 10);

char* srcList[3] = { "Hello", "World", "String" };

for (int i = 0; i < 3; i++)
	strcpy_s(*(astrList + i), sizeof(*(astrList + i)), srcList[i]);


printf("%s\\n", astrList[0]);
printf("%s\\n", astrList[1]);
printf("%s\\n", astrList[2]);

printf("%s\\n", astrList[0] + 1);
printf("%s\\n", astrList[1] + 2);
printf("%s\\n", astrList[2] + 3);

printf("%c\\n", astrList[0][3]);
printf("%c\\n", astrList[1][3]);
printf("%c\\n", astrList[2][3]);


for (int i = 0; i < 3; i++) {
	free(*(astrList + i));
}

free(astrList);
return 0;

}
