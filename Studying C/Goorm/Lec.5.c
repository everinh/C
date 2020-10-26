//
//  Lec.5.c
//  반복문
//  Studying C
//
//  Created by David Choi on 2020/10/21.
//

#include <stdio.h>
int main_05() {

// for
    // 초기값(어떤 값부터 반복할 것인가?)
    // 조건식(어떤 조건에 한해 한복할 것인가?)
    // 변화 조건(어떻게 변화시킬 것인가?)
    
    // 기본 형식: for(초기값;조건식;변화조건) {반복할 코드}
    // 변수 선언은 for 문의 초기값에서 바로 선언도 가능
    // 반복할 코드는 반드시 중괄호로.
    // 반복문 변수는 i(일반),j(이중),k(삼중)
    
    /*
    int i;
    int j;

    scanf("%d", &j);

    for(i = 1; i < 10; i++) {
        printf("%d X %d = %d\n", j, i, j*i);
       }
    */
    

// while
    // 특정 조건까지 계속해서 반복할 때 사용.
    // for문과는 다르게 초기값을 바깥에서 설정해주고, 형식상 조건식만 이용한다. 변화조건도 while문 내부에 있다.
    
    /*
     int i = 1;
         int j;
         
         scanf("%d", &j);
         
       while(i < 10) {
             printf("%d X %d = %d\n", j, i, i*j);
             i++;
       }
     */
    
    
// do while 명수님
    // do(먼저 한 번 코드를 실행)한 후 while(조건 확인 및 반복)
    
    /*
     
     do {
      반복할 코드(적어도 한 번 실행)
     }while(조건식);
     
     // 1 ~ 10 까지의 합을 구하는 코드입니다.

     int main() {
       int number = 0;
       int sum = 0; // 합
       
       do {
         number++;
         sum += number;
       }while(number < 10);
         
       printf("1~10 까지의 합 : %d", sum);

     */
    
    
//  누적 계산기
    // 값을 입력받고 1부터 입력받은 값까지의 합을 출력하세요
    
    /*
     
     int main() {
         int sum = 0;
         int input;
         int a = 1;
         
         scanf("%d", &input);
         
         while(a <= input) {
             sum = sum + a;
             a++;
         }
         
         printf("%d", sum);
         return 0;

     */
    return 0;
}
