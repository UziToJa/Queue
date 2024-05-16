#include <stdio.h>
#include "queue.h"

void menu(void)
{
    printf("\n");
    printf("1 - dodaj liczbe na kolejce (Add)\n");
    printf("2 - odczytaj wartosc z poczatku kolejki (Peek)\n");
    printf("3 - wez liczbe ze kolejki (Pop)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    printf("KOLEJKA - implementacja w tablicy statycznej\n");
    while (1)
    {
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                if (isQueueEmpty())
                {
                    printf("KOLEJKA jest pusta.\n");
                } else
                {
                    printf("KOLEJKA nie jest pusta.\n");
                }
                break;
            case 5:
                if (isQueueFull())
                {
                    printf("KOLEJKA jest pelna.\n");
                } else {
                    printf("KOLEJKA nie jest pelna.\n");
                }
                break;
            case 6:
                //zakonczenie programu
                return 0;
            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}
