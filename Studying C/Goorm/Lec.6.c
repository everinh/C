//
//  Lec.6.c
//  반복문
//  Studying C
//
//  Created by David Choi on 2020/10/23.
//

#include <stdio.h>
int main_06() {

// 배열 = 일종의 집합. 하나의 변수에 여러 개의 값을 넣을 수 있다.
    
    // 배열 선언
    
    int t;
    int test[5] = {1, 33, 47, 102, 155};
    
    // 배열 출력(indexing), C 언어는 0 부터 카운트 한다.
    
    printf("test 배열의 0 번 째의 값 : %d\n", test[0]); // 1을 출력한다.
    
    // 배열 초기화: 배열 선언에서는 선언과 동시에 초기화 했지만, 다른 방법도 있다.
    
    int test1[5] = {1, 33, 47, 102, 155}; // 선언과 동시에 초기화
    int test2[5] = {5}; // 0 번째 값을 5로 초기화 하고, 나머지는 모두 0으로 초기화
    int test3[5] = {5, 10}; // 0 번째 값을 5, 1 번째 값을 10 으로 초기화 하고, 나머지는 모두 0으로 초기화
    int test4[5] = { }; // 모두 0 으로 초기화
    int test5[5]; // 초기화 하지 않음. 이 경우 대부분 쓰레기값이 나오게 된다.(메모리 자체에서 가지고 있는)
    int test6[] = {11, 22, 33, 44}; // 배열의 크기를 4로 자동으로 초기화
    
    // 배열과 반복문 -> 궁합이 좋다
        // 위 예제에서는 printf를 5번 사용했지만 간략히 표현할 수 있다.
    
    for(int t = 0; t < 5; t++) {
        printf("test1 배열의 %d 번 째의 값 : %d\n", t, test1[t]);
    }
    
    /*
     test1 배열의 0 번 째의 값 : 1
     test2 배열의 1 번 째의 값 : 33
     test3 배열의 2 번 째의 값 : 47
     test4 배열의 3 번 째의 값 : 102
     test5 배열의 4 번 째의 값 : 155
     */
    
    
    int x;
    int summ = 0;
    int art[5];
    
    for (x = 0; x < 5; x++) {
        scanf("%d", &art[x]);
        summ += art[x];
    }
    
    printf("%d", summ);
    
    
    return 0;
}
