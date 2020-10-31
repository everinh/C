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

    //역삼각형 출력하기
    int q;
    int w;
    
    scanf("%d", &q);
    
    for(q; q >= 0; q--){ //3210
        for(w = 1; w <= q; w++){ //3-123, 2-12, 1-1
            printf("*");
        }
        printf("\n");
    }
    
    /*
     안쪽 for문의 조건이 3일때 결과값은 3회, 2일때 2회, 1일때 1회가 출력되어야 한다.
     즉 안쪽 for문의 조건이 3일때, 1,2,3이 나와야하고, 2일때 1,2, 1일때 1이 나와야 한다.
     그러면 안쪽 조건문의 시작점은 1이어야 하고, 조건(q)의 최대 수는 3으로 시작해서 점점 줄어야 한다.
     그러면 바깥족 조건문의 최대 수는 입력받은 3 부터 점점 줄어야 한다.
     */

    
    //for 문의 다양한 조건
        //피라미드 출력에는 종결 조건과 증감 조건이 필요하다.
        // 값을 입력받아 입력값만큼의 줄 수를 가진 직각삼각형을 출력해보자.
        // 별 수는 2개씩 늘어난다.

    int q;
    int w;
    int input;
    
    scanf("%d", &input);
    
    for(q = 0; q < input; q++){
        for(w = 0; w < 1+q*2; w++){
            printf("*");
        }
        printf("\n");
    }
    
    
    /*
     4를 입력받는다고 가정하면 아래 모습
     
       *
      **
     ***
     ****
     
     */
    
    //피라미드 만들기
    
    int i;
    int j;
    int k;

    int a;

    scanf("%d", &a);

    for(i = 0; i < a; i++)
    {
        for(j = a; j > i; j--)
        {
            printf(" ");
        }
        
        for(k = 0; k <= i * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
    }
