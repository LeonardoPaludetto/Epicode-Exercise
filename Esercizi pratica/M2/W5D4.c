#include <stdio.h>
#include <math.h>

int main() {
    float D; // Numero reale immesso dall'utente
    float areaquadrato, areacerchio, areatriangolo;

    // Input numero reale D
    printf("Inserisci un numero reale D: ");
    scanf("%f", &D);

    // Calcolo delle aree
    areaquadrato = D * D; // Area del quadrato lato D
    areacerchio = M_PI * (D / 2) * (D / 2); // Area del cerchio lato D
    areatriangolo = (sqrt(3) / 4) * D * D; // Area del triangolo lato D

    // Comunicazione risultati
    printf("Area del quadrato lato D: %.2f\n", areaquadrato);
    printf("Area del cerchio lato D: %.2f\n", areacerchio);
    printf("Area del triangolo lato D: %.2f\n", areatriangolo);

    return 0;
}