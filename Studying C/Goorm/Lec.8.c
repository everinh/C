//
//  Lec.8.c
//  중간 평가
//  Studying C
//
//  Created by David Choi on 2020/10/27.
//

#include <stdio.h>
int main_08() {

    //1. C언어에서 출력을 위해 필요한 것은?
        //printf
    
    //2. 4 byte의 크기를 가지는 실수의 자료형은?
        //float
    
    //3. 코드의 출력값으로 옳은 것은?
    float f = 3.141592653f;
    printf("%.3f", f);
        //3.142 (3자리 출력 but 반올림)
    
    //4. 예상되는 출력값은?
    int a = 100;
    int b = 200;
    
    printf("%d", a < b); //참
    printf("%d", a > b); //거짓
    printf("%d", a == b); //거짓
    printf("%d", a != b); //참
        // 1001
    
    //5. 예상되는 출력값은?
    int ab = 100;
    int ba = 100;
    
    printf("%d", ab > ba || ab <= ba); // 0 || 1 거찟과 참 둘 중 하나가 참이면 참
        //1
    
    //6. for문이 코드를 반복하는 횟수는?
    int i;
    
    for(i = 0; i <=55; i++) {
        printf("%d", i);
    }
        // 56 -> 0부터 55까지 반복.
    
    //7. 코드를 실행했을 때 출력값은?
    int i = 0;
    
    do {
        i++;
        
    }while(i == 1);
    
    printf("%d", i);
        // 2
        // do를 한 번 거쳐서, i는 1로 시작한다. 그래서 while -> i는 1이기에 i++를 한 번 더 거친다. 그 후 i는 2가 되고, while문 탈출.
    
    //8. int 배열이 선언되었을 때 배열 안의 225 자릿값은?
    int ar[5] = { 155, 142, 137, 200, 225};
        //4
    
    //9. 문자열을 출력하기 위해 필요한 것은?
        //%s
    
    //10. 코드를 실행했을 때 출력되는 값은?
    int i;
    int arr[5] = {50, 100, 150, 50, 100};
    int length = sizeof(arr) / sizeof(arr[0]); // 20 / 4 = 5
    int sum = 0;
    
    for(i = 0; i < length - 1; i++); { //i = 0; i < 4; i++
        sum += arr[i] < arr[i + 1];
    }
        // +=보다 > 를 우선 계산한다.
        // i = 0일 경우 값은 1 ( 50 < 100), sum = 1
        // i = 1일 경우 값은 1 (100 < 150), sum = 2
        // i = 2일 경우 값은 0 (150 < 50), sum = 2
        // i = 3일 경우 값은 1 (50 < 100), sum = 3
        // i = 4일 경우 out
        // 결론은 sum = 3
    printf("%d", sum);
    
    
    return 0;
}

    
