#include <stdio.h>
#include <string.h>


#define N 1000


// Затем возьмёт это число в кавычки: _STR(1000) -> "1000"
#define _STR(X) #X


// Сначала подставит число вместо X: STR(N) -> _STR(1000)
#define STR(X) _STR(X)


int main(){
    char str[N+1];
    scanf("%s", str);
    char *f = str;
    f+=1;



    int l = strlen(str);

    printf("%s\n", f);


    return 0;
}