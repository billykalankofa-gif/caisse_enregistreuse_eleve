#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));


    double prix = (rand() % 10000) / 100.0;
    double paye = 0;

    printf("Montant à payer : Rs %.2f\n", prix);

    while (paye < prix) {
        printf("Somme donnée par le client : ");
        scanf("%lf", &paye);
        if (paye < prix) printf("Montant insuffisant !\n");
    }

    

    return 0;
}
