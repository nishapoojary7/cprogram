// C Program To Print Even Numbers From 1 To 100
#include <stdio.h>
int main(){
    for (int i = 2; i <= 100; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}