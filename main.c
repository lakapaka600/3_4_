#include <stdio.h>

int main(void) {
    char nome,sesso;
    printf("inserisci il nome ");
    scanf("%c",&nome);
    printf("inserisci il sesso ( M o F) ");
    scanf("%c",&sesso);
    if(sesso == 'M' ) {
        printf("egregio signor %c,",nome);
    }
    else {
        printf("gentilissima signora %c",nome);
    }

    return 0;
}
