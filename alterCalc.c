#include <stdio.h>

int main(void) {
    // Deklaration der Variablen für das Alter
    int alter1 = 23;
    int alter2 = 20;
    int alter3 = 25;

    // Deklaration der Variable für die Anzahl
    int anzahl = 3;

    // Berechnung der Summe der Alter
    int summe = alter1 + alter2 + alter3;

    // Berechnung des Durchschnittsalters
    int durchschnitt = summe / anzahl;

    // Ausgabe im Terminal mit printf
    printf("Durchschnittsalter: %d\n", durchschnitt);

    return 0;
}