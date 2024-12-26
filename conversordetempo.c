#include <stdio.h>

void converterTempo(int segundos) {
    int horas, minutos;

    horas = segundos / 3600;            // 1 hora = 3600 segundos
    segundos = segundos % 3600;         // Restante dos segundos após a conversão para horas
    minutos = segundos / 60;            // 1 minuto = 60 segundos
    segundos = segundos % 60;           // Restante dos segundos após a conversão para minutos

    printf("%d segundos correspondem a: %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos);
}

int main() {
    int segundos;

    printf("Introduza o tempo em segundos: ");
    scanf("%d", &segundos);

    converterTempo(segundos);

    return 0;
}

