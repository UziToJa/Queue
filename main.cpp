#include <iostream>
using namespace std;
#include "queue.h"

void menu(void)
{
    cout << endl;
    cout <<"1 - dodaj liczbe na kolejce (Add)" << endl;
    cout <<"2 - odczytaj wartosc z poczatku kolejki (Peek)"<< endl;
    cout <<"3 - wez liczbe ze kolejki (Pop)"<< endl;
    cout <<"4 - sprawdz czy kolejka jest pusta"<< endl;
    cout <<"5 - sprawdz czy kolejka jest pelna"<< endl;
    cout <<"6 - koniec programu"<< endl;
    cout << endl;
}

int main()
{
    int temp = 0;
    int option = 0;
    cout <<"KOLEJKA - implementacja w tablicy statycznej"<< endl;
    while (1)
    {
        menu();
        cin >> option;

        switch (option)
        {
            case 1:
                if ( !isQueueFull()){
                    cout<<"Podaj wartosc: ";
                    cin >> temp;
                    Add(temp);
                }
                else {
                    cout << "operacja niedozwolona KOLEJKA jest pelna!!!"<< endl;
                }
                break;
            case 2:
                if (!isQueueEmpty()) {
                    temp = Peek();
                    cout << "Odczytana wartosc:"<< temp << endl;
                }
                else {
                    cout <<"operacja niedozwolona KOLEJKA jest pusta!!!"<< endl;
                }
                break;
            case 3:
                if (!isQueueEmpty()) {
                    temp = Poll();
                    cout << "Odczytana wartosc: " << temp << endl;
                }
                else {
                    cout << "operacja niedozwolona KOLEJKA jest pusta!!!"<< endl;
                }
                break;
                break;
            case 4:
                if (isQueueEmpty())
                {
                    cout <<"KOLEJKA jest pusta." << endl;
                } else
                {
                    cout <<"KOLEJKA nie jest pusta." << endl;
                }
                break;
            case 5:
                if (isQueueFull())
                {
                    cout <<"KOLEJKA jest pelna."<< endl;
                } else {
                    cout <<"KOLEJKA nie jest pelna."<< endl;
                }
                break;
            case 6:
                //zakonczenie programu
                return 0;
            default:
                cout <<"Wybierz wlasciwa opcje."<< endl;
                break;
        }
    }
}
