//
//  Lec.2.c
//  Hello World!
//  Studying C
//
//  Created by David Choi on 2020/10/19.
//

#include <stdio.h>
int main_02() {
    
// 입력을 받는 scanf

/* scanf로 입력을 받는다.
    입력받은 값을 변수에 저장한다.
    저장한 값을 printf로 출력한다.
 
    scanf는 변수 앞에 무조건 &를 써준다.
    정수는 %d, 실수는 %f 동일하게 사용한다. */

  int a;
  
  printf("아무 정수나 입력해주세요 : ");
  scanf("%d", &a);
  printf("입력받은 정수 : %d", a);
  
    // scanf는 인자(파라미터를 먼저 받고, 그 뒤의 변수에는 &를 붙여준다. 그 변수를 다시 불러올 때에는 변수명만 가져온다.
    
  return 0;
}
