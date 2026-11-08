//실습2: 문자열 출력
#include <stdio.h> 

int main(void){
    int i=0;
    char str[4];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';
//문자열 출력
    printf("%s\n", str);

//문자 하나씩 출력, 결과 동일
    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
//문자열 개수 세기   
    printf("\"%s\"의 길이: %i", str, i);

    return 0;
}