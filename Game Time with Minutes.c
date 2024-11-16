#include <stdio.h>

int main() {
    int startHour, startMinute, endHour, endMinute;
    int durationHours, durationMinutes;

    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    int startTotalMinutes = startHour * 60 + startMinute;
    int endTotalMinutes = endHour * 60 + endMinute;


    int durationTotalMinutes;
    if (endTotalMinutes > startTotalMinutes) {
        durationTotalMinutes = endTotalMinutes - startTotalMinutes;
    } else {
        durationTotalMinutes = (24 * 60 - startTotalMinutes) + endTotalMinutes;
    }

    durationHours = durationTotalMinutes / 60;
    durationMinutes = durationTotalMinutes % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHours, durationMinutes);

    return 0;
}
