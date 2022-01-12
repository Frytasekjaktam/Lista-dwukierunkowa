#include <iostream>
#include <list>
#include <windows.h>
#include <iomanip>
using namespace std;

list <int> lista; //utworzenie listy przechowujacej liczby calkowite
int wybor;


void wyswietl()
{
    system("CLS");
    cout << " ZAWARTOSC LISTY: " << endl <<endl;

    for(list<int>::iterator i=lista.begin(); i!= lista.end(); ++i)
       cout << setw(4) << *i;

    cout << endl << endl;
}


void push_front()
{
    int liczba;
    cout<<"Podaj jaka liczbe wstawic na poczatek listy: ";
    cin>>liczba;
    lista.push_front(liczba);
}


void push_back()
{
    int liczba;
    cout<<"Podaj jaka liczbe wstawic na koniec listy: ";
    cin>>liczba;
    lista.push_back(liczba);
}


void pop_front()
{
    cout<<"Nastapi usuniecie liczby z poczatku listy";
    Sleep(2000);
    lista.pop_front();
}


void pop_back()
{
    cout<<"Nastapi usuniecie liczby z konca listy";
    Sleep(2000);
    lista.pop_back();
}


void size()
{
    cout<<"Liczb na liscie: "<<lista.size();
    Sleep(4000);
}

void max_size()
{
    cout<<"Maksymalna ilosc liczb na liscie: "<<lista.max_size();
    Sleep(5000);
}

void empty()
{
    cout<<"Czy lista pusta? -> ";
    if (lista.empty()==1) cout<<"TRUE"; else cout<<"FALSE";
    Sleep(4000);
}

void wyczysc()
{
    cout << "Wyczyszczam zawartosc listy."<<endl;
    lista.clear();
    Sleep(2000);
}
void remove()
{
    int liczba;
    cout<<"Usun z listy wszystkie liczby rowne: ";
    cin>>liczba;
    lista.remove(liczba);
}


void sort()
{
    cout<<"Nastapi posortowanie listy! ";
    lista.sort();
    Sleep(4000);
}


void reverse()
{
    cout<<"Nastapi odwrocenie kolejnosci liczb!";
    lista.reverse();
    Sleep(4000);
}

void nastepny()
{
    int liczba;
   cout << "Podaj liczbe: ";
    cin >> liczba;
    for( list<int>::iterator i=lista.begin(); i!= lista.end(); ++i )
           if ( *i == liczba  )     cout << setw(4) << *next(i,1);
    Sleep(4000);

}

void poprzedni()
{
    int liczba;
   cout << "Podaj liczbe: ";
    cin >> liczba;
    for( list<int>::iterator i=lista.begin(); i!= lista.end(); ++i )
           if ( *i == liczba  )     cout << setw(4) << *prev(i,1);
    Sleep(4000);

}

void zlicz()
{
    int liczba, counter=0;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    for( list<int>::iterator i=lista.begin(); i!= lista.end(); ++i )
       {
           if (*i == liczba)
                counter++;
       }
    cout << "Element " << liczba << " wystapila: " << counter << " razy." << endl;
    Sleep(4000);
}

void znajdz()
{
   int liczba, counter=0;
   cout << "Podaj liczbe: ";
   cin >> liczba;
   cout << "Pozycja: ";
   for( list<int>::iterator i=lista.begin(); i!= lista.end(); ++i )
   {
       counter++;
       if(*i == liczba)
             cout << setw(4) << counter;
   }
       Sleep(4000);
}


void exit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    cout<<"Koniec programu!";
    Sleep(2000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
}

int main()
{

    do
    {
        wyswietl();
        cout << "1.  Dodaj na poczatek"<<endl;
        cout << "2.  Dodaj na koniec"<<endl;
        cout << "3.  Usun pierwszy element"<<endl;
        cout << "4.  Usun ostatni element"<<endl;
        cout << "5.  Wyswietl rozmiar"<<endl;
        cout << "6.  Wyswietl maksymalny mozliwy rozmiar listy"<<endl;
        cout << "7.  Czy lista jest pusta?"<<endl;
        cout << "8.  Usun z listy"<<endl;
        cout << "9.  Posortuj"<<endl;
        cout << "10. Odwroc elementy"<<endl;
        cout << "11. Pokaz kolejny element"<<endl;
        cout << "12. Pokaz poprzedni element"<<endl;
        cout << "13. Zlicz ile razy wystapil element"<<endl;
        cout << "14. Znajdz pozycje na liscie"<<endl;
        cout << "15. Wyczysc zawartosc listy"<<endl;
        cout << "16. Wyjdz"<<endl;
        cout << endl << endl;
        cout << "> ";
        cin >> wybor;

            switch (wybor)
            {
                case 1:  push_front(); break;
                case 2:  push_back();  break;
                case 3:  pop_front();  break;
                case 4:  pop_back();   break;
                case 5:  size();       break;
                case 6:  max_size();   break;
                case 7:  empty();      break;
                case 8:  remove();     break;
                case 9:  sort();       break;
                case 10: reverse();    break;
                case 11: nastepny();     break;
                case 12: poprzedni();     break;
                case 13: zlicz();      break;
                case 14: znajdz();      break;
                case 15: wyczysc();      break;
                case 16: exit();       break;

                default:
                cout<<"POMYLKA!";
                Sleep(2000);
                break;
            }
    }
    while(wybor!=16);

        return 0;
}
