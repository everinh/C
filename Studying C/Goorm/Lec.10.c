//
//  Lec.10.c
//  이차원 배열
//  Studying C
//
//  Created by David Choi on 2020/10/31.
//

#include <stdio.h>
int main_10() {

//이차원 배열
    //이차원 배열 만들기
    
    int ar[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    
    for(int i = 0; i < 2; i++) {
        for int (j = 0; i < 4; j++) {
            print("%d", ar[i][j]);
            printf(" ");
        }
        printf("\n")
    }
    
    
    
    return 0;
    }
