#include <stdio.h>

int main(){
    char e_interruptor;
    printf("Lampada apagada\n");
    while (1){
    printf("a-aberto; f-fechado:\n");
    scanf("%c", & e_interruptor);
    switch(e_interruptor)
    {
        case'a': printf("apagado\n");
        break;
        case'b': printf("aceso\n");
        break;
    }
    }
    return 0;
}
