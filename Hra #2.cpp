#include <iostream>
#include <ctime>
#include <windows.h>
//#include <locale.h> pouze muj PC
using namespace std;


int main(){
//setlocale(LC_ALL, "Czech"); pouze muj PC
SetConsoleOutputCP(CP_UTF8);
//------------------------------------------------------------------------------------//
char menu;
char ClassMenu;
char UtokyMenu;
char BestiarMenu;
bool menuloop = true;
bool BackMenu = true;
string jmeno;



//------------------------------------------------------------------------------------//



menuloop = true;

cout << "\n|-------------------------------------------------|\n";
cout << "|--------------- VÍTEJ VE HŘE .... ---------------|\n";
cout << "|-------------------------------------------------|\n";

do{
    cout<< "\n------------MENU-----------\n";
    cout<< "| -S- START\n";
    cout<< "| -A- Achivementy\n";
    cout<< "| -B- Bestiář (Spoiler!)\n";
    cout<< "| -C- Classy (Spoiler!)\n";
    cout<< "| -U- Útoky (Spoiler!)\n";
    cout<< "| -K- Ukončit\n";




    cout<<endl<< "| -> ";
    cin>> menu;

    switch(menu){
    case 'S':
        cout<< "Pusť se za dobrodružstvím, které tě čeká...\nBude to dlouhá a náročná cesta, ale věŕím že to zvládneš.\n";
        menuloop = false;
        break;
    case 'A':
        cout<< "------------ACHIVEMENTY-----------\n";
        // později dodelam posledni vec ngl
        break;
    case 'B':
        BackMenu = true;
        do{
        cout<< "------------BESTIÁŘ-----------\n";
        cout<< "| -P- Starter Plains\n| -M- Magic Forrest\n| -C- Clifs of Abigail\n| -S- SkyHigh Mountains\n| -F- Frozen tundra\n| -D- Neverending desert\n| -Y- Crystal cave\n| -A- Ancient Ruins\n| -T- Time dimension\n| -K- Menu\n\n| -> ";
        cin >>BestiarMenu;
        switch(BestiarMenu){
            case 'P':
                cout<< "\n| Field goblin - Malý, ale zákeřný skřítek\n";
                cout<< "| Honey bee - Včela, která má nekonečný zásoby medu\n";
                cout<< "| Grassy bear - Medvídek roztomilý, ale optrně kámoš to není\n\n";
                break;
            case 'M':
                cout<< "\n| Whispering wisp - ztracená duše bloudící v lese\n";
                cout<< "| Pink fairy - Růžová vílá létácí v lese s magickou silou\n";
                cout<< "| Prismatic lacewing - Barevný svítící motýl, dobrá otázka je zda ho chcete zabít\n\n";
                break;
            case 'C':
                cout<< "\n| Abigail - MiniBoss, který chrání útesy, zaměřil bych se na kytku co naleznete na zemi\n\n";
                break;
            case 'S':
                cout<< "\n| SharpFeather Harpy - Harpie, která má, jak už z názvu vypovídá, ostré pírka\n";
                cout<< "| Cloud Cruiser - Rychlí větrný tvor, který využívá v boji maskování v mracích\n";
                cout<< "| Strom vyvern - Vyverna pohyující se v bouřkových mracích, její srst je permanentně nabitá elektřinou\n\n";
                break;
            case'F':
                cout<< "\n| Frozen Stalker - Nebezpečný tvor s velice ostrými zuby, opatrně na záda\n";
                cout<< "| Ice Elemental - Mrazivý elementál vládne velkou mrazivou magickou silou\n";
                cout<< "| Glacial breaker - Obrovský monstrum s neuvěritelnou silou, schopný lámat stromy jak nic\n\n";
                break;
            case'D':
                cout<< "\n| Sand worm - písečný červ, který je schopen dorůstat různé velikosti, jsou i několika metrové exepláře\n";
                cout<< "| Mummified traveller - mumifikovaný cestovatel neboli mumie je velmi nebezpečná aćkoli se jeví velice pomale\n";
                cout<< "| SandStorm Elemental - elementál vytvořen v písečné bouři má tak rolehlé útoky, že není možné minout\n\n";
                break;
            case'Y':
                cout<< "\n| Prism golem - Miniboss, který je velmi tanky, opatrně na jeho druhou fázi\n";
                cout<< "| Crystal bat - Miniboss, který je rychlí se schopností vždy útočit první\n\n";
                break;
            case'A':
                cout<< "\n| Relic Guardian - Zbroj bez těla s magickou polovinou meče\n";
                cout<< "| Archive ghost - Duch chránící archiv, využívá dávno zapomenutou magii\n";
                cout<< "| FlamedEyes statue - Socha se zapalenými oči, využívá meč, ale i ohnivou magii\n\n";
                break;
            case'T':
                cout<< "\n| Chronarch - Finalní boss hry, ovládá čas takže hodně štěstí s bojováním v jeho dimenzi\n\n";
                break;
            case'K':
                BackMenu = false;
            default:
                cout<< "\nNeplatná hodnota\n\n";

        }
        }while(BackMenu == true);
        // později dodelam
        break;
    case 'C':
        BackMenu = true;
        do{
        cout<< "| Bersberker - Malý, silný, rychlý avšak málo vydrží --|60 HP|5 defense|\n";
        cout<< "------------CLASSY-----------\n";
        cout<< "| -W- Warrior\n| -R- Ranger\n| -M- Mage\n| -G- Rogue\n| -P- Priest\n| -K- Menu\n\n| -> ";
        cin>> ClassMenu;
        switch (ClassMenu){
            case 'W':
                cout<< "\n| Knight - Nebojácný rytíř se zakladními staty --|100 HP|20 defense|\n";
                cout<< "| Bersberker - Malý, silný, rychlý avšak málo vydrží --|60 HP|5 defense|\n";
                cout<< "| Gladiator - Obrvoský silný gladiátor, jenže za cenu rychlosti --|150 HP|35 defense|\n";
                cout<< "| Paladin - Obrovská výdrž v boji, ale útok trochu postrádá --|200 HP|50 defense|\n\n";
                break;
            case 'R':
                cout<< "\n| Archer - Zapálený lučištník s kapkou elfský krve v sobě -- |90 HP|5 defense|\n";
                cout<< "| Sniper - Oddstrelovač s obrovskou palnou střelou skoro bez možností minout, ale dlouho přebíjí -- |80 HP|10 defense|\n";
                cout<< "| Hutnsman - Lovec s pořádnout brokovnicí, ale docela gamble útok je o tom kolik toho trefí -- |110 HP|15 defense|\n\n";
                break;
            case'M':
                cout<< "\n| Sorrencer - Mág všeho druhu, dokáže se naučit kterýkoli magický útok -- |100 HP|0 defense| Mana 100|\n";
                cout<< "| Iluzinosta - Tvoří iluze, který nemají za účel přímí útok, ale dostat nepřítele do stavu bezmoci -- |120 HP|0 defense| Mana 100|\n";
                cout<< "| Pyromancer - Vládce ohně, sice se nekáže naučit všechnu magii, ale má TOP ohnivou -- |120 HP|10 defense| Mana 110|\n\n";
                break;
            case'G':
                cout<< "\n| Assasin - Pán rychlosti, spoléhá na rychlé útoky s vysokou šancí na kritický zásah -- |80 HP|5 defense|\n";
                cout<< "| Duelist - Absolutně nemožné duelistu zasáhnout, všemu se vyhne -- |70 HP|5 defense|\n\n";
                break;
            case'P':
                cout<< "\n| Healer - Neni až tak moc silný, ale muže být pomalu nesmrtelný -- |100 HP|5 defense| Mana 200|\n";
                cout<< "| Bart - Absolutní GOATTT, dokáže porazit final bosse pomocí hudby... respekt -- |100 HP|0 defense|\n\n";
                break;
            case 'K':
                BackMenu = false;
            default:
                cout<< "\nNeplatná hodnota!\n\n";

                }
            }while(BackMenu == true);
        break;
    case 'U':
        BackMenu = true;
        do{
        cout<< "------------ÚTOKY-----------\n";
        cout<< "| -M- Melee\n| -R- Range\n| -C- Magic\n| -O- Other\n| -K- Menu\n\n| -> ";
        cin>> UtokyMenu;
        switch(UtokyMenu){
            case 'M':
                cout<< "\n| Seknutí -- klasický útok mečem nebo jakoukoliv ostrou středně velkou zbraní\n |Speed - 20|CritChance - 10%|Damage - 15|\n\n";
                cout<< "| Bodnutí -- Bodnutí nožíkem vetšinou kritičtější a rychlí útok\n |Speed 40|CritChance - 30%|Damage - 5|\n\n";
                cout<< "| Těžký útok -- Možnost Zautočit pomalu, ale silně pokud vlastníme velkou zbraň\n |Speed - 5|CritChance - 5%|Damage - 30|\n\n";
                cout<< "| Dvojitý seknutí -- Dvojitý seknutí je pokročilý útok, šance minout\n |Speed - 10|CritChance - 10%|Damage - 15|\n\n";
                break;
            case 'R':
                cout<< "\n| Střela -- Prostě střela zbraní kterou vlastníš\n |Speed - 30|CritChance - 10%|Damage - 15|\n\n";
                cout<< "| Přesná střela -- Střela není tak rychlá, ale má velkou šanci na Kritický zásah\n |Speed - 10|CritChance - 40%|Damage - 15|\n\n";
                cout<< "| Zápalná střela -- Zapálená střela zažene mocný plamen, ale chceme to pokaždý ??\n |Speed - 20| CrtiChance - 10%|Damage - 10 + (2/s x 5)|\n\n";
                cout<< "| Světlice -- Světlice vypustí velké množství světla, což má možnost oslepit nepřítele, ale bez palebný síly\n |Speed - 5|CritChance/Damage - 0|Special Chance - 60%|\n\n";
                break;
            case'C':
                cout<< "\n| Magická střela -- Klasická magická střela s klasickými staty, žádný speciální effekt\n |Speed - 30|CritChance - 15%|Damage - 15|ManaCost - 20|\n\n";
                cout<< "Výbuch -- Vytvorí ohromný výbuch, který nejen štípne, ale i omráčí nepřítele\n |Speed - 10|CritChance - 10%|Damage -60|ManaCost - 80|\n\n";
                cout<< "Ohnivý kruh -- Vytvoří kruh pod enemákem, který ho zapalý a zmizí (Docela brutální)\n |Speed - 50|CritChance - 0%|Damage - 5 + (2/s x 5)|ManaCost - 30|\n\n";
                cout<< "Elektrický výboj -- Vyšle elektrickou střelu, který da slušnou pecku se šancí omráčení\n |Speed - 20| CritChance - 10%|Damage - 25|ManaCost - 45|\n\n";
                cout<< "Blesk z nebes -- Vyvolá blesk nad enemákem s šancí na multihit (Kazdou střelou je 1/5, že udeří znovu)\n |Speed - 5|Damage - 40|ManaCost - 80|\n\n";
                cout<< "Duha radosti -- Objeví se duha, která sejme všechny negativní efekty a dá mi 20 HP\n |Speed - 50|CritChance/Damage - 0|ManaCost - 40|\n\n";
                break;
            case'O':
                cout<< "\n| Písnička vítěztví -- Piseň, kterou bart zahraje pro poražení svých nepřátel\n |Speed - 20|Damage - 15| CritChance - 20%|\n\n";
                cout<< "| Ukolébavka -- Ukolebavka uspí nepřítele a uděla z něj snadný cíl\n |Speed - 5|Damage/CritChance - 0|Special Chance - 50%|\n\n";
                cout<< "| Rozžhavený hudebník -- Hraje tak dobře a rychle, že zapalí enemáka\n |Speed - 10|Damage - 20(2/s x 10)|\n\n";
                cout<< "| Obvnova harmonie -- Nastavení rovnováhy dolní 20 HP, lze vylepšit\n |Speed - 5|Damage/CrtiChance - 0|\n\n;";
                cout<< "| Poslední báseň -- Poslední pokus aby tento GOAT otočil celou hru\n |Speed - 100|Special effect - set 1 HP/set max HP\n\n";
                break;
            case'K':
                BackMenu = false;
            }
        }while(BackMenu == true);
        break;
        // později dodelam
    case 'K':
        return 0;
    default:
        cout<< "Neplatná hodnota\n";
    }
}while(menuloop == true);
cout<< "\n-----------------------------------------------------------------|\n";
cout<< "-----------------------------------------------------------------|\n\n";
cout<< "| - Teďka jsi na začátku příběhu a jako správný RPG hráč si musíš vybrat svoji classu a jméno\n| - Máš před sebou nabídku, ale pozor!!\n| - Každá classa má jiné schopnosti, což má svoje + ale i -\n\n";

cout<< "Zadej své jméno, které bude na konci znát celý svět\n| -> ";
cin >>jmeno;
cout<< jmeno;

}
