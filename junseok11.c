#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    
    char op;
    int x, y, result;
    result = 0;
    
    printf("수식을 입력하세요.(예: 2+5)\n");
    printf(">>");
    scanf("%d %c %d",&x, &op, &y);
    
    switch(op){
        case '+':
        result = x + y;
        break;
    
        case '-':
        result = x - y;
        break;
        
        case '*':
        result = x * y;
        break;
        
        case '/':
        result = x / y;
        break;
        
        case '%':
        result = x % y;
        break;
        
        default:
            printf("지원되지 않는 연산자입니다.\n");
        break;
    }
    
    printf("%d %c %d = %d",x, op, y, result);
    return 0;
}

