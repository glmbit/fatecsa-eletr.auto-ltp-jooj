#include <stdio.h>

int main(){
    char e_interruptor;
    printf("Lampada apagada\n");
    while(1){
    printf("t-toque:\n");
    scanf("%c", e_interruptor);
    switch(e_interruptor){
        case 'a': ("aceso\n");
        break;
        case 'b': ("apagado\n");
        break;
    }
    }
    return 0;
}
