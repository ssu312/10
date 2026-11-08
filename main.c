//실습4: 문자열 길이 계산
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void main(void)
{
    char str[30] = "happy C programming";

//strlen(입력 문자열) = 문자열 길이 반환,, 널문자 제외 19 반환
    printf("문자열 \"%s\"의 길이: %i\n", str, strlen(str));

}