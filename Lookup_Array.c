#include <stdio.h>

int main() {

    //전체 경우에 대한 과금률 결과를 담은 배열의 선언 및 정의 <-- Lookup 배열!!
    double aRate[10] = {
        0.0, 0.1, 0.25,  // 1-3세 0%,  10%,  25%
        0.5, 0.5,        // 4-5세 
        0.6, 0.65,       // 6-7세
        0.8, 0.8, 0.97   // 8-10세
    };
    int nage = 0;
    int nFee = 1000;
    printf("요금표\n");


    // 배열을 잘 사용하면 기존의 if문, switch문 같이 복잡하게 메모리 낭비 없이 코드를 짤 수 있다.
    for (int i = 1; i <= 10; i++) {
        printf("%d세 요금 : \t%d원\n", i, 
            (int)(nFee * aRate[i - 1])
            );
    }
    putchar('\n');
    
    
    return 0;
}
