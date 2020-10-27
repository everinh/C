//
//  Lec.9.c
//  이중 반복문
//  Studying C
//
//  Created by David Choi on 2020/10/27.
//

#include <stdio.h>
int main_09() {

// 이중 반복문: 난이도 급증! 반복해 따라해보자.
    
    //가장 간단한 형태.
    //바깥 반복문 -> 안쪽 반복문 -> 바깥 반복문
    int z;
    int x;
    
    for(z = 0; z < 5; z++){
        printf("----바깥 for 문 %d 시작---- \n", z);
        for(x = 0; x < 5; x++){
            printf("%d 번째 안쪽 for 문\n", x);
        }
        printf("----바깥 for 문 %d 종료----\n", z);
    }

        /*
        --바깥 for문 0 시작--
        0번째 안쪽 for문
        1번째 안쪽 for문
        2번째 안쪽 for문
        3번째 안쪽 for문
        4번째 안쪽 for문
        --바깥 for문 0 종료--
        --바깥 for문 1 시작--
        이런 식으로 작동한다.
        */

    //직각 삼각형 출력하기
    int q;
    int w;
    
    for(q = 0; q < 3; q++){
        for(w = 0; w <= q; w++){
            printf("*");
        }
        printf("\n");
    }





    return 0;
}

