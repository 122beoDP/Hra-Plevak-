#include <iostream>
#include <ctime>
#include <windows.h>
#include <locale.h>
using namespace std;


int main(){
setlocale(LC_ALL, "Czech");
SetConsoleOutputCP(CP_UTF8);
//------------------------------------------------------------------------------------//
char menu;
bool menuloop = true;
string jmeno;



//------------------------------------------------------------------------------------//



menuloop = true;

cout << "\n|-------------------------------------------------|\n";
cout << "|--------------- VÍTEJ VE HØE .... ---------------|\n";
cout << "|-------------------------------------------------|\n\n";

cout<< "------------MENU-----------\n";
cout<< "| -S- START\n";
cout<< "| -A- Achivementy\n";
cout<< "| -B- Bestiáø (Spoiler!)\n";
cout<< "| -C- Classy (Spoiler!)\n";
cout<< "| -U- Útoky (Spoiler!)\n";
cout<< "| -K- Ukonèit\n";



do{
    cout<<endl<< "| -> ";
    cin>> menu;

    switch(menu){
    case 'S':
        cout<< "Pus se za dobrodružstvím, které tì èeká...\nBude to dlouhá a nároèná cesta, ale vìàím že to zvládneš.\n";
        menuloop = false;
        break;
    case 'A':
        cout<< "------------ACHIVEMENTY-----------\n";
        // pozdìji dodelam
        break;
    case 'B':
        cout<< "------------BESTIÁØ-----------\n";
        // pozdìji dodelam
        break;
    case 'C':
        cout<< "------------CLASSY-----------\n";
        // pozdìji dodelam
        break;
    case 'U':
        cout<< "------------ÚTOKY-----------\n";
        // pozdìji dodelam
    case 'K':
        return 0;
    default:
        cout<< "Neplatná hodnota\n";
    }
}while(menuloop == true);
cout<< "\n-----------------------------------------------------------------|\n";
cout<< "-----------------------------------------------------------------|\n\n";
cout<< "| - Teïka jsi na zaèátku pøíbìhu a jako správný RPG hráè si musíš vybrat svoji classu a jméno\n| - Máš pøed sebou nabídku, ale pozor!!\n| - Každá classa má jiné schopnosti, což má svoje + ale i -\n\n";

cout<< "Zadej své jméno, které bude na konci znát celý svìt\n| -> ";
cin >>jmeno;
cout<< jmeno;

}




