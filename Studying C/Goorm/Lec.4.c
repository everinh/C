//
//  Lec.4.c
//  기본 연산자
//  Studying C
//
//  Created by David Choi on 2020/10/19.
//

#include <stdio.h>

//정수 덧셈
int main_04() {
    int a = 1;
    int b = 10;
    
    printf("a + b = %d", a + b);
    
//실수 덧셈
    float c = 1.3f;
    float d = 10.5f;
    
    printf("c + d = %f", c + d);
  
//정수+실수 덧셈
    int e = 2;
    float f = 10.5f;
    
    printf("e + f = %f", e + f);
    
//정수 뺄셈
    int g = 1;
    int h = 10;
    
    printf("g - h = %d\n", g - h);
    printf("h - g = %d", h - g);
    
//실수 뺄셈
    float i = 1.3f;
    float j = 10.5f;
    
    printf("i - j = %f\n", i - j);
    printf("j - i = %f", j - i);
    
//정수-실수 뺄셈
    int k = 2;
    float l = 10.5f;
    
    printf("k - l = %f\n", k - l);
    printf("l - k = %f", l - k);
    
// 곱셈
    int m = 2;
    int n = 3;
    
    printf("m * n = %d", m * n);
    
// 실수 곱셈
    float o = 1.3f;
    float p = 2.31f;
    
    printf("o * p = %f", o * p);

// 정수 실수 곱셈
    int q = 2;
    float r = 2.6f;
    
    printf("q * r = %f", q * r);
    
// 정수 나눗셈: 몫이 결과 값이 되며, 나머지 값은 버려진다. 실수끼리 나눗셈은 나머지 값 까지 저장된다.
    int s = 10;
    int t = 3;
    
    printf("s / t = %d", s / t);
    
// 실수 나눗셈
    float u = 5.5f;
    float v = 1.2f;
    
    printf("u / v = %f", u / v);

// 정수와 실수 나눗셈
    int w = 5;
    float x = 2.6f;
    
    printf("w / x = %f", w / x);

// 정수의 나머지: 나눗셈 후 남는 수를 의미한다. %기호를 사용한다. 정수끼리만 가능.
    int y = 10;
    int z = 3;
    
    printf("y %% z = %d", y % z);
    //질문, 왜 y%%z 두개가 들어가지?
    
// 증감 연산자: 값을 1씩 증가시키거나 감소시킨다. ++ 혹은 --로 처리한다.
// 전위 연산자는 값을 증가,감소 후에 연산자가 코드를 실행한다. 줄에서 증감된 후 코드가 실행된다.
    //전위 연산자
    int ab = 3;
    
    printf("%d\n", ++ab); //4
    printf("%d", ab); //4
    
    int ac = 3;
    
    printf("%d\n", --ac); //2
    printf("%d", ac); //2
    
    //후위 연산자
    int ad = 3;
    
    printf("%d\n", ad++); //3
    printf("%d", a); //4
    
// 관계 연산자: 같다 == 다르다 != 크다 > 작다 < 크거나 같다 >= 작거나 같다 <=
    // 참이면 1, 거짓은 0을 반환한다.
    
    int number = 5;
    
    printf("%d", number > 3);
    printf("%d", number < 3);
    printf("%d", number == 3);
    printf("%d", number != 3);
  
    
// 04-4. 논리 연산자
    // 논리곱 연산 &&: AND. 양쪽이 참이어야 결과값이 1이 된다.
    // 논리합 연산 ||: OR. 한쪽만 참이어도 결과값이 1이 된다.
    
    printf("AND(논리곱) : number 는 3보다 크다. 그리고 10보다 작다 : %d\n", number > 3 && number < 10);
    printf("AND(논리곱) : number 는 3보다 커야한다. 그리고 10 보다 커야한다. : %d\n", number > 3 && number > 10);
    printf("OR(논리합) : number 는 5 이거나 4이다. : %d\n", number == 5 || number == 4);
    printf("OR(논리합) : number 는 6 이거나 7이다. : %d\n", number == 6 || number == 7);

// 04-4. 복합 대입 연산자
    // 변수에 숫자를 액션하고, 그 값을 다시 변수에 대입하라.
    // 덧셈 뺄셈 곱셈 나눗셈 나머지 등 심지어 비트 연산자에도 적용 가능.
    
    int ae = 5;
    
    ae += 5;
    printf("%d\n", ae); // 10 출력
    
    ae -= 3;
    printf("%d\n", ae); // 7 출력
    
    ae *= 5;
    printf("%d\n", ae); // 35 출력
    
    ae /= 7;
    printf("%d\n", ae); // 5 출력
    
    a %= 4;
    printf("%d\n", ae); // 1 출력

// 04-4. 비트 연산자
    // 비트 연산은 정수나 정수로 변환 가능한 타입만 가능. 실수나 포인터는 불가능
    // 비트는 2진수를 저장한다. 메모리 공간의 효율성을 높인다. 사칙연산 보다 연산이 빠르다.
    // &: and 연산
    // |: or 연산
    // ^: xor 연산
    // ~: 모든 비트 반전. not 연산
    // <<: 지정한 수 만큼 비트 열을 왼쪽으로 이동
    // >>: 지정한 수 만큼 비트 열을 오른쪽으로 이동
    
    // & 연산자(and): 논리 연산자 &&는 true, false를, & 비트 연산은 값을 반환한다. 주소값 가리키는 &는 단항 연산자로서, 피연산자가 한개만 필요하다.(&b). 그러나 a&b 처럼 쓰일 때는 비트의 and 연산자를 나타낸다.
    
    unsigned char af = 4; // 00000100
    unsigned char ag = 8; // 00001000
    unsigned char ah = af & ag;
    
    printf("4와 8의 AND 연산 값 : %d\n", ah);
    // 모두 0이 되며, 10진수로 표현하면 0

    af = 6;  // 00000110
    ag = 13; // 00001101
    ah = af & ag;
    
    printf("6과 13의 AND 연산 값: %d", ah);
    // 4의 자리가 1이며, 10진수로 표현하면 4가 된다.
    
    // unsigned char:
    // char는 8비트 변수로서, signed 의 경우 -128~127까지, unsigned의 경우 0~255까지 사용이 가능하다.
    // signed의 경우 "부호 있는 정수"로서, 맨 왼쪽 비트가 부호비트다. 이를 MSB(Most Significant Bit)라 부르며 0이면 양수, 1이면 음수를 나타낸다.
    // MSB가 1이 되면 음수로 계산되어 보수연산을 하게 된다(이건 좀 까다롭다), 그래서 여기서는 unsigned를 사용했다.
    
    // OR 연산자: 둘 중 하나라도 1일 경우 1을 반환
    // XOR 연산자: 두 개의 비트가 다르면 1을 반환
    // NOT 연산자: 0일 경우 1을, 1일 경우 0을 반환(비트를 반전시킨다). 여기서 unsigned가 활약한다.
    
    
/* 명수님께 물어보기
 #include <stdio.h>
 int main() {
     unsigned char input;
     
     scanf("%hhu", &input);

     unsigned char a = input & 6;
     unsigned char b = input | 6;
     unsigned char c = input ^ 6;
     unsigned char d = ~ input;

     
         printf("%hhu ", a);
         printf("%hhu ", b);
         printf("%hhu ", c);
         printf("%hhu ", d);
     
     return 0;
 }
 
// 04-4. 비트 이동 연산자
 
 unsigned char input;
 unsigned char a;
 unsigned char b;
 
 scanf("%hhu", &input);
 
 a = input << 4;
 b = input >> 3;
 
 printf("%hhu %hhu", a, b);


signed char c = -16; // 11110000
11110000 무엇? signed char는 보수연산을 한다.
00001111 뒤집기
00000001 +1더하기
00010000 = 16

00010000 = 16
11101111 뒤집기(1의보수)
11110000 1의보수 +1(2의보수) = -16
 곧, 앞에 1이 붙어있으면 그대로 10진수로 바꾸지 말고 MSB라고 생각해 보자.

00010000
11110000
 두개를 더하면 9진수 100000000이 되고, 앞자리 1을 버리면 0이 되므로
 11110000을 -16으로 본다.

즉
 2의 보수 = 원수의 1의 보수에 1을 더해주었을 때.
 원수에 다시 2의 보수를 더하면? 0이 된다.
 즉 원수의 2의 보수가 -원수가 된다.

11110000
11101111
00010000
 
11111100
11111011
00000100
 
00000100
11111011
11111100

*/
  return 0;
}
