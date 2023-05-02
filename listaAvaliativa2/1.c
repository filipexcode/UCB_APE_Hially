#include <stdio.h>

int main() {
    int n, i, melhor_volta = 1;
    float tempo, melhor_tempo = 1000000, tempo_total = 0, tempo_medio;

    printf("Digite o numero de voltas: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Digite o tempo da volta %d: ", i);
        scanf("%f", &tempo);
        
        if(tempo < melhor_tempo) {
            melhor_tempo = tempo;
            melhor_volta = i;
        }
        
        tempo_total += tempo;
    }

    tempo_medio = tempo_total / n;

    printf("\nMelhor tempo: %.2f", melhor_tempo);
    printf("\nVolta em que o melhor tempo ocorreu: %d", melhor_volta);
    printf("\nTempo medio das voltas: %.2f", tempo_medio);

    return 0;
}
