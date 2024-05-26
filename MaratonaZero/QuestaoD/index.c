#include <stdio.h>

int main()
{
    long long E, V;
    scanf("%lld %lld", &E, &V);

    long long horas = E / V;
    long long minutos =  (E % V) * 60 / V;

    long long horaSaida = 19;
    long long minutoSaida = 0;

    long long horaFinal = horaSaida + horas;
    long long minutoFinal = minutoSaida + minutos;

    if (minutoFinal >= 60)
    {
        horaFinal += minutoFinal / 60;
        minutoFinal = minutoFinal % 60;
    }

    // if (horaFinal >= 24)
    horaFinal = horaFinal % 24;

    // printf("Hora final %d\n", horaFinal);
    // printf("Minuto final %d\n", minutoFinal);

    printf("%02lld:%02lld\n", horaFinal, minutoFinal);

    return 0;
}