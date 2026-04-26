#include <iostream>
#include <ctime>
#include <windows.h>
//#include <locale.h> pouze muj PC
using namespace std;

void Menu (){

char menu;
char ClassMenu;
char UtokyMenu;
char BestiarMenu;
bool menuloop = true;
bool BackMenu = true;
menuloop = true;

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
    case 'K':
        exit(0);
    default:
        cout<< "Neplatná hodnota\n";
    }
}while(menuloop == true);
}





struct Vesnice{

            int obchod;
            bool MageShop = true;
            bool MeleeShop;
            bool RangeShop;
            bool Priestshop;
            bool BardShop;
            bool RougueShop;
            bool LVL1;
            bool LVL2;
            bool LVL3;
            bool LVL4;

//Pole---------------------------

string utokyMelee [4]{"Seknutí", "Bodnutí", "Těžký útok", "Dvojitý seknutí"};
string utokyRange [4]{"Střela", "Přesná střela", "Zápalná střela", "Světlice"};
string utokyMagic [6]{"Magická střela", "Výbuch", "Ohnivý kruh", "Elektrický výboj", "Blesk z nebes", "Duha radosti"};
string utokyOther [5]{"Písnička vítěztví", "Ukolébavka", "Rozžhavený hudebník", "Obvnova harmonie", "Poslední báseň"};

string obyvatele [10]{"\nStařec\n| - Místní legenda mluví o motýlovi neboli jak ostatnní říkájí... Skáza  s barvami krásy\n", "\nDobrodruh\n| - Už jsem toho potkal dost tak buď opatrný, ale jedna holčina Abigail s její kytkou se ztratila\n| - Dokážeš ji najít\n", "\nZlobr\n| - HUGRRR... GRRRRR\n| - HARGGGG...URGGGG\n", "\nBanda trpaslíků\n| - Dáš si pivo ?? Neboslouchej ho... Šetři zlaťáky, budou se ti hodit\n", "\nVíla\n| - Chceš pomoct?? Ráda pomůžu.\n| - Skoč se k ohništi ohřát a uzdravit se, ale pozor na kapsáře\n", "\nTrol\n| - HUUUUUURGGG DEJ SI POZOR NA ČAS\n| - HRGRGGG ČAS JE ZDRÁDNÝ\n", "\nElf\n| - Luk sice vypadát slabě, ale v správných rukou je to smrtelná zbraň\n", "\nGolemite\n| - KÁMENNN, HODNĚ VYDRŽÍM, ALE JSEM POMALEJ\n| - I TAK KÁMENN\n", "\nRytíř\n| - Dlouhý boj mě dočista vyčepal\n| - Buď pŘpravený a nepodceň to\n", "\nMág\n| - Dej si pozor ať ti nedojde mana\n| - Může to být tvůj konec"};



};


struct Player{
// Hráčké staty------------------------
            int hp;
            int df;
            int mana;
            int dmg;
            string name;
            int gld;
            int lvl;
            int xp;
            bool poison;
            bool fire; 
            bool blind;
            bool conf;
            bool frez;
            bool sleep;
            int critorigin;
            int speedorigin;
            int specialorigin;
            float hitchanceorigin;
            
// Staty útoků---------------------------    
            float crit = 0;
            float speed = 0;
            float special = 0;
            float hitchance = 0;

// Staty útoků---------------------------
            int poisonTimer = 0;
            int fireTimer = 0;
            int blindTimer = 0;
            int confTimer = 0;
            int frezTimer = 0;
            int sleepTimer = 0;
            
            int DamageTake = 0;
            float DamageFinal = 0;
// Mosntrer schonpsti (pusobnost na hrace)
            bool pierce;
            };

void CheckStatsPlayer (Player &p1){

    
    if (p1.df > 0 && p1.DamageTake > 0 && p1.pierce == false){
            p1.DamageTake = p1.DamageTake / p1.df;   
        }



    if (p1.fire ==true && p1.frez == true){
            cout<< "Jsi zároveň spálený a zmrzlý, takže jsi rozmrzl\n";
            p1.frez = false;
        }
    if (p1.DamageTake > 0){
            p1.DamageFinal = p1.DamageTake / p1.df;
            }
    if (p1.fire == true && p1.fireTimer > 0){
            p1.DamageFinal = p1.DamageFinal + 2;
            p1.fireTimer--;
            cout<< "Jsi spálený, takže dostáváš o 2 více poškození\n";
            }
    if (p1.poison == true && p1.poisonTimer > 0){
            p1.DamageFinal = p1.DamageFinal + 2;
            p1.poisonTimer--;
            cout<< "Jsi otrávený, takže dostáváš o 2 více poškození\n";
            }
    if (p1.blind == true && p1.blindTimer > 0){
            cout<< "Jsi slepý, takže máš o 20% větší šanci minout\n";
            p1.blindTimer--;
            p1.hitchance = p1.hitchance - (p1.hitchance / 100 * 20);
            }
            else if (p1.blind == false){
            p1.hitchance = p1.hitchanceorigin;
            }
    if (p1.conf == true && p1.confTimer > 0){
            cout<< "Jsi zmatený, máš o 20 menší rychlost\n";
            p1.speed = p1.speed - 20;
            p1.confTimer--;      
            }
    else if (p1.conf == false){
            p1.speed = p1.speedorigin;
            }
    if (p1.frez == true && p1.frezTimer > 0){
            cout<< "Jsi zmrzlý, máš 20% šanci minout a dostáváš o 2 více poškození\n";
            p1.frezTimer--;
            }
    if (p1.sleep == true && p1.sleepTimer > 0){
            cout<< "Jsi uspaný, nemůžeš utočit\n";
            p1.sleepTimer--;
            }
    if (p1.hp <= 0){
        cout<< "Tady tvoje cesta končí... Došli ti životy";
        exit(0);
        }

            

            
            if (p1.fireTimer < 0){
                p1.fireTimer = 0;
                }
    if (p1.poisonTimer < 0){
        p1.poisonTimer = 0;
        }
        if (p1.blindTimer < 0){
            p1.blindTimer = 0;
        }
    if (p1.confTimer < 0){
        p1.confTimer = 0;
        }
    if (p1.frezTimer < 0){
        p1.frezTimer = 0;
        }
    if (p1.sleepTimer < 0){
        p1.sleepTimer = 0;
        }
    }

void vesniceINGAME(Player &p1, Vesnice &v1){
char vesniceMenu;
char trhMenu;
int ohnisteTimer = 0;

int R1 = rand() % 10;
int R2 = rand() % 10;
int R3 = rand() % 10;

do{
if (R1 == R2){
    R2 = rand() % 10;
    }
if (R2 == R3){
    R3 = rand() % 10;
    }
if (R1 == R3){
    R1 = rand() % 10;
    }
}while(R1 == R2 || R2 == R3 || R1 == R3);

    cout <<"\n|-----------------------------------------------------------------|\n";
    cout << "|---------------------------VESNICE-------------------------------|\n";
    cout << "|-----------------------------------------------------------------|\n\n";
 do{   
    cout<< "| -T- Trh\n| -H- Hospoda\n| -O- Ohniště\n| -P- Pokracovat\n\n| -> ";
    cin >> vesniceMenu;
    switch (vesniceMenu){
        case 'T':
            cout<< "\nTrh je místo, kde můžeš nakupovat věci, ale pozor!!\nKaždý den se nabídka mění, takže pokud něco chceš, kup si to\n\n";
                if(v1.MageShop == true){
                    do{
                        cout<< "| -S- Svitky kouzel\n| -L lektvary\n| -O- Ostatní\n| -P- Pokračovat\n\n| -> ";
                        cin >> trhMenu;
                        switch(trhMenu){
                            case'S':
                                cout<<endl;
                                for (int i = 0; i < 6; i++){
                                    cout<< "| Svitek kouzla "<< i + 1 << ": " << v1.utokyMagic[i] << "\n";
                                    }
                                    cout<< "\n";
                                break;
                            case'L':
                                break;
                        }
                    }while(trhMenu != 'P');
                }
            break;
        case 'H':
            cout<< "| - Hospoda je místo, kde můžeš získat informace od místních obyvatel\n\n";
            _sleep(5000);
            cout<< "---Potkal jsi--- " <<v1.obyvatele[R1] << "\n";
            _sleep(5000);
            cout<< "---Potkal jsi--- " <<v1.obyvatele[R2] << "\n";
            _sleep(5000);
            cout<< "---Potkal jsi--- " <<v1.obyvatele[R3] << "\n\n\n";
            _sleep(5000);
            break;
        case 'O':
            cout<< "Ohniště je místo, kde můžeš odpočívat a léčit se, ale pozor!!\n| - Pokud budeš odpočívat příliš dlouho, může se stát, že tě někdo napadne\n| - Můžeš tam potkat i nějaké ty obyvatele\n";
            break;
        case 'P':
            cout<< "Pokracuješ ve své cestě...\n";
            break;
        default:
            cout<< "Neplatná hodnota\n";
        }
    }while(vesniceMenu != 'P');
    


}

    int main(){
    //setlocale(LC_ALL, "Czech"); pouze muj PC
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
//------------------------------------------------------------------------------------//
    
    
    



//------------------------------------------------------------------------------------//

Player p1;
Vesnice v1;





//------------------------------------------------------------------------------------//

cout << "\n|-------------------------------------------------|\n";
cout << "|--------------- VÍTEJ VE HŘE .... ---------------|\n";
cout << "|-------------------------------------------------|\n";

//Menu();
vesniceINGAME(p1,v1);




cout<< "\n-----------------------------------------------------------------|\n";
cout<< "-----------------------------------------------------------------|\n\n";
cout<< "| - Teďka jsi na začátku příběhu a jako správný RPG hráč si musíš vybrat svoji classu a jméno\n| - Máš před sebou nabídku, ale pozor!!\n| - Každá classa má jiné schopnosti, což má svoje + ale i -\n\n";

cout<< "Zadej své jméno, které bude na konci znát celý svět\n| -> ";
cin >>p1.name;
cout<< p1.name;

}
