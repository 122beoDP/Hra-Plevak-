#include <iostream>
#include <ctime>
#include <windows.h>

// Definice barev
const std::string RESET   = "\033[0m";
const std::string CERVENA = "\033[31m";
const std::string ZELENA  = "\033[32m";
const std::string ZLUTA   = "\033[33m";
const std::string MODRA   = "\033[34m";
const std::string SVETLE_SEDA = "\033[37m";
const std::string LEDOVA_SVETLA = "\033[38;5;123m";
const std::string KRYSTAL_RUZOVA  = "\033[38;5;207m";
const std::string JINA_ZELENA = "\033[38;5;41m";
const std::string ZLATA    = "\033[38;5;220m";
const std::string LIMETKA  = "\033[38;5;190m";
const std::string TEMNA_ORANZOVA  = "\033[38;5;166m";
const std::string HNEDA   = "\033[38;5;94m";
const std::string BEZOVA = "\033[38;5;223m";
const std::string SEDA  = "\033[38;5;244m";



// #include <locale.h> pouze muj PC
using namespace std;

void Menu()
{

    char menu;
    char ClassMenu;
    char UtokyMenu;
    char BestiarMenu;
    bool menuloop = true;
    bool BackMenu = true;
    menuloop = true;

    do
    {
        cout << "\n------------MENU-----------\n";
        cout << ZELENA<<"| -S- START\n"<<RESET;
        cout << "| -B- Bestiář "<<CERVENA<<"(Spoiler!)"<<RESET<<"\n";
        cout << "| -C- Classy "<<CERVENA<<"(Spoiler!)"<<RESET<<"\n";
        cout << "| -U- Útoky "<<CERVENA<<"(Spoiler!)"<<RESET<<"\n";
        cout << "| -K- Ukončit\n";

        cout << endl
             << "| -> ";
        cin >> menu;

        switch (menu)
        {
        case 'S':
            cout << "Pusť se za dobrodružstvím, které tě čeká...\nBude to dlouhá a náročná cesta, ale věŕím že to zvládneš.\n";
            menuloop = false;
            break;
        case 'B':
            BackMenu = true;
            do
            {
                cout << "------------BESTIÁŘ-----------\n";
                cout << ZELENA<<"| -P- Starter Plains\n"<<MODRA<<"| -M- Magic Forrest\n"<<CERVENA<<"| -C- Clifs of Abigail\n"<<SVETLE_SEDA<<"| -S- SkyHigh Mountains\n"<<LEDOVA_SVETLA<<"| -F- Frozen tundra\n"<<ZLUTA<<"| -D- Neverending desert\n"<<KRYSTAL_RUZOVA<<"| -Y- Crystal cave\n"<<JINA_ZELENA<<"| -A- Ancient Ruins\n"<<ZLATA<<"| -T- Time dimension\n"<<RESET<<"| -K- Menu\n\n| -> ";
                cin >> BestiarMenu;
                switch (BestiarMenu)
                {
                case 'P':
                    cout << "\n| Field goblin - Malý, ale zákeřný skřítek\n";
                    cout << "| Honey bee - Včela, která má nekonečný zásoby medu\n";
                    cout << "| Grassy bear - Medvídek roztomilý, ale optrně kámoš to není\n\n";
                    break;
                case 'M':
                    cout << "\n| Whispering wisp - ztracená duše bloudící v lese\n";
                    cout << "| Pink fairy - Růžová vílá létácí v lese s magickou silou\n";
                    cout << "| Prismatic lacewing - Barevný svítící motýl, dobrá otázka je zda ho chcete zabít\n\n";
                    break;
                case 'C':
                    cout << "\n| Abigail - MiniBoss, který chrání útesy, zaměřil bych se na kytku co naleznete na zemi\n\n";
                    break;
                case 'S':
                    cout << "\n| SharpFeather Harpy - Harpie, která má, jak už z názvu vypovídá, ostré pírka\n";
                    cout << "| Cloud Cruiser - Rychlí větrný tvor, který využívá v boji maskování v mracích\n";
                    cout << "| Strom vyvern - Vyverna pohyující se v bouřkových mracích, její srst je permanentně nabitá elektřinou\n\n";
                    break;
                case 'F':
                    cout << "\n| Frozen Stalker - Nebezpečný tvor s velice ostrými zuby, opatrně na záda\n";
                    cout << "| Ice Elemental - Mrazivý elementál vládne velkou mrazivou magickou silou\n";
                    cout << "| Glacial breaker - Obrovský monstrum s neuvěritelnou silou, schopný lámat stromy jak nic\n\n";
                    break;
                case 'D':
                    cout << "\n| Sand worm - písečný červ, který je schopen dorůstat různé velikosti, jsou i několika metrové exepláře\n";
                    cout << "| Mummified traveller - mumifikovaný cestovatel neboli mumie je velmi nebezpečná aćkoli se jeví velice pomale\n";
                    cout << "| SandStorm Elemental - elementál vytvořen v písečné bouři má tak rolehlé útoky, že není možné minout\n\n";
                    break;
                case 'Y':
                    cout << "\n| Prism golem - Miniboss, který je velmi tanky, opatrně na jeho druhou fázi\n";
                    cout << "| Crystal bat - Miniboss, který je rychlí se schopností vždy útočit první\n\n";
                    break;
                case 'A':
                    cout << "\n| Relic Guardian - Zbroj bez těla s magickou polovinou meče\n";
                    cout << "| Archive ghost - Duch chránící archiv, využívá dávno zapomenutou magii\n";
                    cout << "| FlamedEyes statue - Socha se zapalenými oči, využívá meč, ale i ohnivou magii\n\n";
                    break;
                case 'T':
                    cout << "\n| Chronarch - Finalní boss hry, ovládá čas takže hodně štěstí s bojováním v jeho dimenzi\n\n";
                    break;
                case 'K':
                    BackMenu = false;
                default:
                    cout << "\nNeplatná hodnota\n\n";
                }
            } while (BackMenu == true);
            // později dodelam
            break;
        case 'C':
            BackMenu = true;
            do
            {
                cout << "------------CLASSY-----------\n";
                cout << "| -W- Warrior\n| -R- Ranger\n| -M- Mage\n| -G- Rogue\n| -P- Priest\n| -K- Menu\n\n| -> ";
                cin >> ClassMenu;
                switch (ClassMenu)
                {
                case 'W':
                    cout << "\n| Knight - Nebojácný rytíř se zakladními staty --|100 HP|20 defense|\n";
                    cout << "| Bersberker - Malý, silný, rychlý avšak málo vydrží --|60 HP|5 defense|\n";
                    cout << "| Gladiator - Obrvoský silný gladiátor, jenže za cenu rychlosti --|150 HP|35 defense|\n";
                    cout << "| Paladin - Obrovská výdrž v boji, ale útok trochu postrádá --|200 HP|50 defense|\n\n";
                    break;
                case 'R':
                    cout << "\n| Archer - Zapálený lučištník s kapkou elfský krve v sobě -- |90 HP|5 defense|\n";
                    cout << "| Sniper - Oddstrelovač s obrovskou palnou střelou skoro bez možností minout, ale dlouho přebíjí -- |80 HP|10 defense|\n";
                    cout << "| Huntsman - Lovec s pořádnout brokovnicí, ale docela gamble útok je o tom kolik toho trefí -- |110 HP|15 defense|\n\n";
                    break;
                case 'M':
                    cout << "\n| Sorrencer - Mág všeho druhu, dokáže se naučit kterýkoli magický útok -- |100 HP|0 defense| Mana 100|\n";
                    cout << "| Iluzinosta - Tvoří iluze, který nemají za účel přímí útok, ale dostat nepřítele do stavu bezmoci -- |120 HP|0 defense| Mana 100|\n";
                    cout << "| Pyromancer - Vládce ohně, sice se nekáže naučit všechnu magii, ale má TOP ohnivou -- |100 HP|10 defense| Mana 110|\n\n";
                    break;
                case 'G':
                    cout << "\n| Assasin - Pán rychlosti, spoléhá na rychlé útoky s vysokou šancí na kritický zásah -- |80 HP|5 defense|\n";
                    cout << "| Duelist - Absolutně nemožné duelistu zasáhnout, všemu se vyhne -- |70 HP|5 defense|\n\n";
                    break;
                case 'P':
                    cout << "\n| Healer - Neni až tak moc silný, ale muže být pomalu nesmrtelný -- |100 HP|5 defense| Mana 200|\n";
                    cout << "| Bart - Absolutní GOATTT, dokáže porazit final bosse pomocí hudby... respekt -- |100 HP|0 defense|\n\n";
                    break;
                case 'K':
                    BackMenu = false;
                default:
                    cout << "\nNeplatná hodnota!\n\n";
                }
            } while (BackMenu == true);
            break;
        case 'U':
            BackMenu = true;
            do
            {
                cout << "------------ÚTOKY-----------\n";
                cout << "| -M- Melee\n| -R- Range\n| -C- Magic\n| -O- Other\n| -K- Menu\n\n| -> ";
                cin >> UtokyMenu;
                switch (UtokyMenu)
                {
                case 'M':
                    cout << "\n| Seknutí -- klasický útok mečem nebo jakoukoliv ostrou středně velkou zbraní\n |Speed - 20|CritChance - 10%|Damage - 15|\n\n";
                    cout << "| Bodnutí -- Bodnutí nožíkem vetšinou kritičtější a rychlí útok\n |Speed 40|CritChance - 30%|Damage - 5|\n\n";
                    cout << "| Těžký útok -- Možnost zaůtočit pomalu, ale silně pokud vlastníme velkou zbraň\n |Speed - 5|CritChance - 5%|Damage - 30|\n\n";
                    cout << "| Dvojitý seknutí -- Dvojitý seknutí je pokročilý útok, šance minout\n |Speed - 10|CritChance - 10%|Damage - 15|\n\n";
                    break;
                case 'R':
                    cout << "\n| Střela -- Prostě střela zbraní kterou vlastníš\n |Speed - 30|CritChance - 10%|Damage - 15|\n\n";
                    cout << "| Přesná střela -- Střela není tak rychlá, ale má velkou šanci na Kritický zásah\n |Speed - 10|CritChance - 40%|Damage - 15|\n\n";
                    cout << "| Zápalná střela -- Zapálená střela zažene mocný plamen, ale chceme to pokaždý ??\n |Speed - 20| CrtiChance - 10%|Damage - 10 + (2/s x 5)|\n\n";
                    cout << "| Světlice -- Světlice vypustí velké množství světla, což má možnost oslepit nepřítele, ale bez palebný síly\n |Speed - 5|CritChance/Damage - 0|Special Chance - 60%|\n\n";
                    break;
                case 'C':
                    cout << "\n| Magická střela -- Klasická magická střela s klasickými staty, žádný speciální effekt\n |Speed - 30|CritChance - 15%|Damage - 15|ManaCost - 20|\n\n";
                    cout << "Výbuch -- Vytvorí ohromný výbuch, který nejen štípne, ale i omráčí nepřítele\n |Speed - 10|CritChance - 10%|Damage -60|ManaCost - 80|\n\n";
                    cout << "Ohnivý kruh -- Vytvoří kruh pod enemákem, který ho zapalý a zmizí (Docela brutální)\n |Speed - 50|CritChance - 0%|Damage - 5 + (2/s x 5)|ManaCost - 30|\n\n";
                    cout << "Elektrický výboj -- Vyšle elektrickou střelu, který da slušnou pecku se šancí omráčení\n |Speed - 20| CritChance - 10%|Damage - 25|ManaCost - 45|\n\n";
                    cout << "Blesk z nebes -- Vyvolá blesk nad enemákem s šancí na multihit (Kazdou střelou je 1/5, že udeří znovu)\n |Speed - 5|Damage - 40|ManaCost - 80|\n\n";
                    break;
                case 'O':
                    cout << "\n| Zdravotní péče -- Uzdraví se a dopní životy o 20 HP s šancí na dopnění o 10 více\n |Speed - 0|Special Chance - 50%|ManaCost - 30|\n\n";
                    cout << "Duha radosti -- Objeví se duha, která sejme všechny negativní efekty a dá mi 20 HP\n |Speed - 0|CritChance/Damage - 0|ManaCost - 30|\n\n";
                    cout << "| Písnička vítězství -- Piseň, kterou bart zahraje pro poražení svých nepřátel\n |Speed - 20|Damage - 15| CritChance - 20%|\n\n";
                    cout << "| Ukolébavka -- Ukolebavka uspí nepřítele a uděla z něj snadný cíl\n |Speed - 5|Damage/CritChance - 0|Special Chance - 50%|\n\n";
                    cout << "| Rozžhavený hudebník -- Hraje tak dobře a rychle, že zapalí enemáka\n |Speed - 10|Damage - 20(2/s x 10)|\n\n";
                    cout << "| Obvnova harmonie -- Nastavení rovnováhy doplní 20 HP\n |Speed - 5|Damage/CrtiChance - 0|\n\n;";
                    cout << "| Poslední báseň -- Poslední pokus aby tento GOAT otočil celou hru\n |Speed - 100|Special effect - set 1 HP/set max HP\n\n";
                    break;
                case 'K':
                    BackMenu = false;
                }
            } while (BackMenu == true);
            break;
        case 'K':
            exit(0);
        default:
            cout << "Neplatná hodnota\n";
        }
    } while (menuloop == true);
}

struct Vesnice
{

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

    // Pole---------------------------

    string utokyMelee[4]{"Seknutí", "Bodnutí", "Těžký útok", "Dvojitý seknutí"};
    string utokyRange[4]{"Střela", "Přesná střela", "Zápalná střela", "Světlice"};
    string utokyMagic[6]{"Magická střela", "Výbuch", "Ohnivý kruh", "Elektrický výboj", "Blesk z nebes", "Duha radosti"};
    string utokyOther[5]{"Písnička vítěztví", "Ukolébavka", "Rozžhavený hudebník", "Obvnova harmonie", "Poslední báseň"};

    string obyvatele[10]{"\nStařec\n| - Místní legenda mluví o motýlovi neboli jak ostatnní říkájí... Skáza  s barvami krásy\n", "\nDobrodruh\n| - Už jsem toho potkal dost tak buď opatrný, ale jedna holčina Abigail s její kytkou se ztratila\n| - Dokážeš ji najít\n", "\nZlobr\n| - HUGRRR... GRRRRR\n| - HARGGGG...URGGGG\n", "\nBanda trpaslíků\n| - Dáš si pivo ?? Neboslouchej ho... Šetři zlaťáky, budou se ti hodit\n", "\nVíla\n| - Chceš pomoct?? Ráda pomůžu.\n| - Skoč se k ohništi ohřát a uzdravit se, ale pozor na kapsáře\n", "\nTrol\n| - HUUUUUURGGG DEJ SI POZOR NA ČAS\n| - HRGRGGG ČAS JE ZDRÁDNÝ\n", "\nElf\n| - Luk sice vypadát slabě, ale v správných rukou je to smrtelná zbraň\n", "\nGolemite\n| - KÁMENNN, HODNĚ VYDRŽÍM, ALE JSEM POMALEJ\n| - I TAK KÁMENN\n", "\nRytíř\n| - Dlouhý boj mě dočista vyčepal\n| - Buď pŘpravený a nepodceň to\n", "\nMág\n| - Dej si pozor ať ti nedojde mana\n| - Může to být tvůj konec"};
};

struct Player
{
    // Hráčké staty------------------------
    string name;
    int gld = 0;
    int lvl;
    int xp;
    bool poison;
    bool fire;
    bool blind;
    bool conf;
    bool frez;
    bool sleep;
    // Origin Staty (Classa)
    int hp = 0;
    int df = 1;
    int mana = 0;
    int dmg = 0;
    int dmgOrigin = 0;
    int manaorigin = 0;
    int critorigin = 0;
    int speedorigin = 0;
    int specialorigin = 0;
    float hitchanceorigin = 0;

    int hpBattle;
    int hpHeal;
    // Class---------------------------
    bool Warrior;
    bool Ranger;
    bool Rogue;
    bool Mage;
    bool Priest;

    bool Knight = false;
    bool Bersberker = false;
    bool Gladiator = false;
    bool Paladin = false;

    bool Archer = false;
    bool Sniper = false;
    bool Huntsman = false;

    bool Sorrencer = false;
    bool Iluzionista = false;
    bool Pyromancer = false;

    bool Assasin = false;
    bool Duelist = false;

    bool Healer = false;
    bool Bart = false;

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

    // Schopnosti---------------------------
    bool PowerFire = false;
    int PowerFireDmg = 2;
    bool PowerPoison = false;
    int PowerPoisonDmg = 6;
    bool PowerFreeze = false;
    int PowerFreezeDmg = 4;
};

struct Schopnosti
{
    int DamageGiveFinal = 0;
    float SpeedFinal = 0;
};

struct Enemy{

    bool Field_goblin = false;
    bool Honey_bee = false;
    bool Grassy_bear = false;

    bool Whispering_wisp = false;
    bool Pink_fairy = false;
    bool Prismatic_lacewing = false;

    bool MBOSS_Abigail = false;

    bool SharpFeather_Harpy = false;
    bool Cloud_Cruiser = false;
    bool Storm_vyvern = false;

    bool Frozen_Stalker = false;
    bool Ice_Elemental = false;
    bool Glacial_breaker = false;

    bool Sand_worm = false;
    bool Mummified_traveller = false;
    bool SandStorm_Elemental = false;

    bool MBOSSPrism_golem = false;
    bool MBOSSCrystal_bat = false;

    bool Relic_Guardian = false;
    bool Archive_ghost = false;
    bool FlamedEyes_statue = false;

    bool FBOSSChronarch = false;

    bool SecretBoss_Empres_of_Light = false;

    int hpEnemy = 0;
    int speedEnemy = 0;
    bool Enemy_Aktivni = false;

    //Player Final Utok
    int EnemyDamageTake = 0;
    int EnemyDamageFinal = 0;
    int EnemyCrit = 100;
    int EnemySpecialChance = 100;
    int EnemyHitChance = 0;

    // Debufs
    bool EnemyPoison = false;
    bool EnemyFire = false;
    bool EnemyBlind = false;
    bool EnemyConf = false;
    bool EnemyFrez = false;
    bool EnemySleep = false;

    int EnemyPoisonTimer = 0;
    int EnemyFireTimer = 0;
    int EnemyBlindTimer = 0;
    int EnemyConfTimer = 0;
    int EnemyFrezTimer = 0;
    int EnemySleepTimer = 0;


};

struct FalseL{
bool level_1 = false;
bool level_2 = false;
bool level_3 = false;
bool level_4 = false;
bool level_5 = false;
bool level_6 = false;
bool level_7 = false;
bool level_8 = false;
bool level_9 = false;
bool level_10 = false;

};

void CheckStatsPlayer(Player &p1);
void PowerFire(Player &p1, Vesnice &v1, char &KoupitEnchantMenu);
void ClassSchopnosti(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1);
void PowerFreeze(Player &p1, Vesnice &v1, char &KoupitEnchantMenu);
void PowerPoison(Player &p1, Vesnice &v1, char &KoupitEnchantMenu);
void vesniceINGAME(Player &p1, Vesnice &v1);
void VyberClass(Player &p1);
void EnemyUtok(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1);
void PlayerSpeedDebufs(Player &p1);
void FinalEncounter(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1, FalseL &f1);
void PlayerUtok(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1);
void Levelfalse(FalseL &f1);
void VyberEnemy(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1, FalseL &f1);
void Levelfalse(FalseL &f1);
void Loading();
void Enemyfalse(Enemy &e1);

int main()
{
    // setlocale(LC_ALL, "Czech"); pouze muj PC
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    //------------------------------------------------------------------------------------//
    
    int Goldplus = 0;

    //------------------------------------------------------------------------------------//
    FalseL f1;
    Player p1;
    Vesnice v1;
    Schopnosti u1;
    Enemy e1;
    //------------------------------------------------------------------------------------//




    cout << "\n|-------------------------------------------------|\n";
    cout << "|--------------- VÍTEJ VE HŘE .... ---------------|\n";
    cout << "|-------------------------------------------------|\n\n";


    Menu();
    // vesniceINGAME(p1, v1);

    cout << MODRA<<"\n-----------------------------------------------------------------|\n";
    cout << "-----------------------------------------------------------------|\n\n"<<RESET;
    cout << "| - Teďka jsi na začátku příběhu a jako správný RPG hráč si musíš vybrat svoji classu a jméno\n| - Máš před sebou nabídku, ale pozor!!\n| - Každá classa má jiné schopnosti, což má svoje + ale i -";
    Loading();
    cout << "| - Zadej své jméno, které bude na konci znát celý svět\n| -> ";
    cin >> p1.name;
    Loading();

    VyberClass(p1);
    p1.hpBattle = p1.hp;
    //Level 1


    f1.level_1 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 20 + 1;
    p1.gld += Goldplus;

    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    
    //Level 2
    f1.level_1 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 20 + 1;
    p1.gld += Goldplus;

    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    //Level 3 (2M)
    
    f1.level_2 = true;
    FinalEncounter(p1, v1, u1, e1, f1);
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();
    
    Goldplus = rand() % 20 + 1;
    p1.gld += Goldplus;

    f1.level_2 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 20 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    //Level 4 - Miniboss
    f1.level_3 = true;

    cout<< CERVENA<<"\n| - Dolnili se ti životy :D\n";
    p1.hpBattle = p1.hp;

    FinalEncounter(p1, v1, u1, e1, f1);
    
    Goldplus = rand() % 60 + 1;
    p1.gld += Goldplus;

    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    //Vesnice

    vesniceINGAME(p1, v1);
    Loading();

    //Level 5

    f1.level_4 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 30 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();
    
    //Level 6 (2M)

    f1.level_5 = true;
    FinalEncounter(p1, v1, u1, e1, f1);
    
    Goldplus = rand() % 30 + 1;
    p1.gld += Goldplus;

    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    f1.level_5 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 30 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    //Level 7

    f1.level_6 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 40 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    f1.level_6 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 40 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    //Vesnice

    vesniceINGAME(p1, v1);
    Loading();

    //Level 8 Minoboss(2)

    f1.level_7 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 70 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    f1.level_7 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 70 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    //Level 9 (2M)

    f1.level_8 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 50 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    f1.level_8 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 50 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    //Vesnice

    vesniceINGAME(p1, v1);
    Loading();

    //Level 10 (3M)

    f1.level_9 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 50 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    f1.level_9 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 50 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    f1.level_9 = true;
    FinalEncounter(p1, v1, u1, e1, f1);

    Goldplus = rand() % 50 + 1;
    p1.gld += Goldplus;
    
    cout<<"\n>> Dostáváš "<< Goldplus <<ZLATA<<" goldů\n"<<RESET;
    Loading();

    //Vesnice

    vesniceINGAME(p1, v1);
    Loading();

    //Level 10 - Final boss

    f1.level_10 = true;
    FinalEncounter(p1, v1, u1, e1, f1);
    
    cout<<"|                                                   |";
    cout<<"|                                                   |";
    cout<<"| ------------------------------------------------- |";
    cout<<"| -----------Vyhrál jsi hru... Gratulace----------- |";
    cout<<"| ------------------------------------------------- |";
    cout<<"|                                                   |";
    cout<<"|                                                   |";

}



void CheckStatsPlayer(Player &p1)
{
    
    if (p1.df > 0 && p1.DamageTake > 0 && p1.pierce == false)
    {
        p1.DamageTake = p1.DamageTake / p1.df;
    }

    if (p1.fire == true && p1.frez == true)
    {
        cout << "Jsi zároveň spálený a zmrzlý, takže jsi rozmrzl\n";
        p1.frez = false;
    }
    if (p1.DamageTake > 0)
    {
        p1.DamageFinal = p1.DamageTake;
    }
    if (p1.fire == true && p1.fireTimer > 0)
    {
        p1.DamageFinal = p1.DamageFinal + 2;
        p1.fireTimer--;
        cout << "Jsi spálený, takže dostáváš o 2 více poškození\n";
    }
    if (p1.poison == true && p1.poisonTimer > 0)
    {
        p1.DamageFinal = p1.DamageFinal + 2;
        p1.poisonTimer--;
        cout << "Jsi otrávený, takže dostáváš o 2 více poškození\n";
    }
    if (p1.blind == true && p1.blindTimer > 0)
    {
        cout << "Jsi slepý, takže máš o 20% větší šanci minout\n";
        p1.blindTimer--;
        p1.hitchance = p1.hitchance - (p1.hitchance / 100 * 20);
    }
    else if (p1.blind == false)
    {
        p1.hitchance = p1.hitchanceorigin;
    }
    if (p1.frez == true && p1.frezTimer > 0)
    {
        cout << "Jsi zmrzlý, máš 20% šanci minout a dostáváš o 2 více poškození\n";
        p1.frezTimer--;
    }
    if (p1.sleep == true && p1.sleepTimer > 0)
    {
        cout << "Jsi uspaný, nemůžeš utočit\n";
        p1.sleepTimer--;
    }
   

    if (p1.fireTimer < 0)
    {
        p1.fireTimer = 0;
    }
    if (p1.poisonTimer < 0)
    {
        p1.poisonTimer = 0;
    }
    if (p1.blindTimer < 0)
    {
        p1.blindTimer = 0;
    }
    if (p1.confTimer < 0)
    {
        p1.confTimer = 0;
    }
    if (p1.frezTimer < 0)
    {
        p1.frezTimer = 0;
    }
    if (p1.sleepTimer < 0)
    {
        p1.sleepTimer = 0;
    }


}

void PlayerSpeedDebufs(Player &p1){


    if (p1.conf == true && p1.confTimer > 0)
    {
        cout << "Jsi zmatený, máš o 20 menší rychlost\n";
        p1.speed = p1.speed - 20;
        p1.confTimer--;
    }
    else if (p1.conf == true && p1.confTimer <=0)
    {
        p1.conf = false;
    }

}





void PowerFire(Player &p1, Vesnice &v1, char &KoupitEnchantMenu)
{
    if (p1.PowerFire == true)
    {
        cout << "\n| - Už máš tento enchant\n| - Vyplešení 50 goldů = + 2 dmg\n| - A/N\n\n| -> ";
        cin >> KoupitEnchantMenu;
        switch (KoupitEnchantMenu)
        {
        case 'A':
            if (p1.gld < 50)
            {
                cout << "Nemáš dostatek goldů\n\n";
                break;
            }
            else if (p1.gld >= 50)
            {
                p1.gld -= 50;
                p1.PowerFireDmg += 2;
                cout << "Ohnivý útok vylepšen\n\n";
            }
            break;
        case 'N':
            cout << "Pokracuješ zpět na trh...\n\n";
            break;
        default:
            cout << "Neplatná hodnota\n";
            break;
        }
    }
    else if (p1.PowerFire == false)
    {
        cout << "\n| - Ohnivý útok\n| - Cena 50 goldů\n| - A/N\n\n| -> ";
        cin >> KoupitEnchantMenu;
        switch (KoupitEnchantMenu)
        {
        case 'A':
            if (p1.gld < 50)
            {
                cout << "Nemáš dostatek goldů\n\n";
                break;
            }
            else if (p1.gld >= 50)
            {
                p1.gld -= 50;
                p1.PowerFire = true;
                cout << "Ohnivý útok koupen\n\n";
            }
            break;
        case 'N':
            cout << "Pokracuješ zpět na trh...\n\n";
            break;
        default:
            cout << "Neplatná hodnota\n";
            break;
        }
    }
}

void ClassSchopnosti(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1)
    {
    
        int SniperRand = rand() % 5;
        int HuntsmanRand = rand() % 7;
        int DuelistRand = rand() % 5;
        int HealerRand = rand() % 8;
        int IluzRand = rand() % 5;
    
        //Warrior---------------------
    
        if (p1.Knight == true)
        {
        }
        else if (p1.Bersberker == true)
        {
            e1.EnemyDamageTake *= 2;
        }
        else if (p1.Gladiator == true)
        {
            u1.SpeedFinal /= 2;
            e1.EnemyDamageTake *= 1.5;
        }
        else if (p1.Paladin == true)
        {
        }
    
        //Ranger---------------------
    
        else if (p1.Archer == true)
        {
        }
        else if (p1.Sniper == true)
        {
            e1.EnemyDamageTake *= 2;
            if (SniperRand == 3)
            {
                e1.EnemyDamageTake = 0;
            }
        }
        else if (p1.Huntsman)
        {
            if(e1.EnemyDamageTake > 0){
                if (HuntsmanRand == 0)
                {
                    cout<<HNEDA<<">> Netrefil jsi nic\n\n"<<RESET;
                    e1.EnemyDamageTake = 0;
                }
                else if (HuntsmanRand == 1)
                {
                    e1.EnemyDamageTake *= 0.1;
                    cout<<HNEDA<<">> Tefil jsi 1\n"<<RESET;
                }
                else if (HuntsmanRand == 2)
                {
                    e1.EnemyDamageTake *= 0.5;
                    cout<<HNEDA<<">> Tefil jsi 2\n"<<RESET;
                }
                else if (HuntsmanRand == 3)
                {
                    e1.EnemyDamageTake *= 1;
                    cout<<HNEDA<<">> Tefil jsi 3\n"<<RESET;
                }
                else if (HuntsmanRand == 4)
                {
                    e1.EnemyDamageTake *= 1.5;
                    cout<<HNEDA<<">> Tefil jsi 4\n"<<RESET;
                }
                else if (HuntsmanRand == 5)
                {
                    e1.EnemyDamageTake *= 2;
                    cout<<HNEDA<<">> Tefil jsi 5\n"<<RESET;
                }
                else if (HuntsmanRand == 6)
                {
                    e1.EnemyDamageTake *= 3;
                    cout<<HNEDA<<"> Tefil jsi 6\n"<<RESET;
                }
            }
    
        //Mage---------------------
    
        }
        else if (p1.Sorrencer == true)
        {
        }
        else if (p1.Iluzionista == true)
        {
            if(IluzRand == 1){
                cout<< KRYSTAL_RUZOVA <<">> Enemák dostal kvůli classe 5 poškození navíc\n\n"<<RESET;
            }
            else if(IluzRand == 2){
                cout<< KRYSTAL_RUZOVA<<">> Enemák dostal kvůli classe 10 poškození navíc\n\n"<<RESET;
            }
        }
        else if (p1.Pyromancer == true)
        {
            //Schopnost aktivovana při výběru classy
        }
    
        //Rogue---------------------
    
        else if (p1.Assasin == true)
        {
            p1.crit *= 2;
            e1.speedEnemy *= 3;
        }
        else if (p1.Duelist)
        {
            if (DuelistRand == 3)
            {
                p1.DamageTake = 0;
                cout << "Útoku si se vyhnul";
            }
        }
    
        //Priest---------------------
    
        else if (p1.Healer == true)
        {
            if (HealerRand == 2)
            {
                p1.hpBattle += p1.DamageTake;
                if(p1.hpBattle > p1.hp){
                    p1.hpBattle = p1.hp;
                }
                cout << ZELENA<<">> Útoku si se vyhnul a ještě ses vyléčil o " << p1.DamageTake << " HP\n"<<RESET;
                p1.DamageTake = 0;
            }
        }
        else if (p1.Bart)
        {
        }
    }

void PowerFreeze(Player &p1, Vesnice &v1, char &KoupitEnchantMenu)
{
    if (p1.PowerFreeze == true)
    {
        cout << "\n| - Už máš tento enchant\n| - Vyplešení 80 goldů = + 4 dmg\n| - A/N\n\n| -> ";
        cin >> KoupitEnchantMenu;
        switch (KoupitEnchantMenu)
        {
        case 'A':
            if (p1.gld < 80)
            {
                cout << "Nemáš dostatek goldů\n\n";
                break;
            }
            else if (p1.gld >= 80)
            {
                p1.gld -= 80;
                p1.PowerFreezeDmg += 4;
                cout << "Mrazící útok vylepšen\n\n";
            }
            break;
        case 'N':
            cout << "Pokracuješ zpět na trh...\n\n";
            break;
        default:
            cout << "Neplatná hodnota\n";
            break;
        }
    }
    else if (p1.PowerFreeze == false)
    {
        cout << "\n| - Mrazící útok\n| - Cena 80 goldů\n| - A/N\n\n| -> ";
        cin >> KoupitEnchantMenu;
        switch (KoupitEnchantMenu)
        {
        case 'A':
            if (p1.gld < 80)
            {
                cout << "Nemáš dostatek goldů\n\n";
                break;
            }
            else if (p1.gld >= 80)
            {
                p1.gld -= 80;
                p1.PowerFreeze = true;
                cout << "Mrazící útok koupen\n\n";
            }
            break;
        case 'N':
            cout << "Pokracuješ zpět na trh...\n\n";
            break;
        default:
            cout << "Neplatná hodnota\n";
            break;
        }
    }
}

void PowerPoison(Player &p1, Vesnice &v1, char &KoupitEnchantMenu)
{
    if (p1.PowerPoison == true)
    {
        cout << "\n| - Už máš tento enchant\n| - Vyplešení 120 goldů = + 6 dmg\n| - A/N\n\n| -> ";
        cin >> KoupitEnchantMenu;
        switch (KoupitEnchantMenu)
        {
        case 'A':
            if (p1.gld < 120)
            {
                cout << "Nemáš dostatek goldů\n\n";
                break;
            }
            else if (p1.gld >= 120)
            {
                p1.gld -= 120;
                p1.PowerPoisonDmg += 6;
                cout << "Otrávený útok vylepšen\n\n";
            }
            break;
        case 'N':
            cout << "Pokracuješ zpět na trh...\n\n";
            break;
        default:
            cout << "Neplatná hodnota\n";
            break;
        }
    }
    else if (p1.PowerPoison == false)
    {
        cout << "\n| - Otrávený útok\n| - Cena 120 goldů\n| - A/N\n\n| -> ";
        cin >> KoupitEnchantMenu;
        switch (KoupitEnchantMenu)
        {
        case 'A':
            if (p1.gld < 120)
            {
                cout << "Nemáš dostatek goldů\n\n";
                break;
            }
            else if (p1.gld >= 120)
            {
                p1.gld -= 120;
                p1.PowerPoison = true;
                cout << "Otrávený útok koupen\n\n";
            }
            break;
        case 'N':
            cout << "Pokracuješ zpět na trh...\n\n";
            break;
        default:
            cout << "Neplatná hodnota\n";
            break;
        }
    }
}

void vesniceINGAME(Player &p1, Vesnice &v1)
{
    bool ManaUser = false;
    char vesniceMenu;
    char trhMenu;
    char KoupitMenu;
    char KoupitEnchantMenu;
    int ohnisteTimer = 0;
    char ohnistevyber;
    bool ohnisteBool = false;

    if (p1.Mage == true || p1.Healer == true)
    {
        ManaUser = true;
    }

    int R1 = rand() % 10;
    int R2 = rand() % 10;
    int R3 = rand() % 10;
    int OhnisteRand = rand() % 5;
    do
    {
        if (R1 == R2)
        {
            R2 = rand() % 10;
        }
        if (R2 == R3)
        {
            R3 = rand() % 10;
        }
        if (R1 == R3)
        {
            R1 = rand() % 10;
        }
    } while (R1 == R2 || R2 == R3 || R1 == R3);

    cout << "\n|-----------------------------------------------------------------|\n";
    cout << "|---------------------------VESNICE-------------------------------|\n";
    cout << "|-----------------------------------------------------------------|\n\n";

    cout<< CERVENA<< "\n| - Dolnili se ti životy :D\n"<<RESET;
    p1.hpBattle = p1.hp;



    
    do
    {
        cout<<"\n|| --"<<ZLUTA<<" Máš "<<p1.gld<<" goldů "<<RESET<<"--||\n";
        cout<<"|| --"<<CERVENA<<" Máš "<<p1.hp<<" Hp "<<RESET<<"-- ||\n\n";

        cout << BEZOVA<<"| -T- Trh\n"<<HNEDA<<"| -H- Hospoda\n"<<TEMNA_ORANZOVA<<"| -O- Ohniště\n"<<RESET<<"| -P- Pokracovat\n\n| -> ";
        cin >> vesniceMenu;
        switch (vesniceMenu)
        {
        case 'T':
            cout << "\nTrh je místo, kde můžeš nakupovat věci, ale pozor!!\nKaždý den se nabídka mění, takže pokud něco chceš, kup si to\n\n";
            do
            {
                cout << "| -V- Vylepšení\n| -L- Enchanting\n| -P- Pokračovat\n\n| -> ";
                cin >> trhMenu;
                switch (trhMenu)
                {
                case 'V':
                    cout << endl;
                    do
                    {
                        if (ManaUser == true)
                        {
                            cout << LEDOVA_SVETLA<<"\n | -M- Mana -50- 20 goldů\n\n"<<RESET;
                        }
                        cout << CERVENA<<" | -S- Síla -2- 20 goldů\n"<<MODRA <<" | -O- Obrana -2- 20 goldů\n"<<ZELENA<<" | -Z- Životy -10- 20 goldů\n"<<TEMNA_ORANZOVA<<" | -C- Šance na kritický zásah -2%- 20 goldů\n"<<RESET<<" | -P- Pokračovat\n\n| -> ";
                        cin >> KoupitMenu;
                        switch (KoupitMenu)
                        {
                        case 'M':
                            if (ManaUser == false)
                            {
                                cout << "Nepoužíváš magii\n\n";
                                break;
                            }
                            if (ManaUser == true)
                            {
                                if (p1.gld >= 20)
                                {
                                    p1.gld -= 20;
                                    p1.manaorigin += 20;
                                    cout << ">> Koupil sis 20 maximální many\n";
                                }
                                else
                                {
                                    cout << "Nemáš dostatek goldů\n";
                                }
                            }
                            else
                            {
                                cout << "Neplatná hodnota\n";
                            }
                            break;
                        case 'S':
                            if (p1.gld >= 20)
                            {
                                p1.gld -= 20;
                                p1.dmgOrigin += 2;
                                cout << ">> Koupil sis 2 dmg\n";
                            }
                            else
                            {
                                cout << "Nemáš dostatek goldů\n";
                            }
                            break;
                        case 'O':
                            if (p1.gld >= 20)
                            {
                                p1.gld -= 20;
                                p1.df += 2;
                                cout << ">> Koupil sis 2 deffense\n";
                            }
                            else
                            {
                                cout << "Nemáš dostatek goldů\n";
                            }
                            break;
                        case 'Z':
                            if (p1.gld >= 20)
                            {
                                p1.gld -= 20;
                                p1.hp += 10;
                                cout << ">> Koupil sis 10 hp\n";
                            }
                            else
                            {
                                cout << "Nemáš dostatek goldů\n";
                            }
                            break;
                        case 'C':
                            if (p1.gld >= 20)
                            {
                                p1.gld -= 20;
                                p1.crit += 2;
                                cout << ">> Koupil sis 2% kritický zásah\n";
                            }
                            else
                            {
                                cout << "Nemáš dostatek goldů\n";
                            }
                            break;
                        case 'P':
                            cout << "Pokracuješ zpět na trh...\n\n";
                            break;
                        default:
                            cout << "Neplatná hodnota\n";
                            break;
                        }
                    } while (KoupitMenu != 'P');
                    break;
                case 'L':
                    do
                    {
                        cout << TEMNA_ORANZOVA<<"\n | -O- Ohnivý útok\n"<< LEDOVA_SVETLA<< "| -L- Ledový útok\n"<< ZELENA<<" | -J- Jedový útok\n"<<RESET<<" | -P- Pokračovat\n\n| -> ";
                        cin >> KoupitEnchantMenu;
                        switch (KoupitEnchantMenu)
                        {
                        case 'O':
                            PowerFire(p1, v1, KoupitEnchantMenu);
                            break;
                        case 'L':
                            PowerFreeze(p1, v1, KoupitEnchantMenu);
                            break;
                        case 'J':
                            PowerPoison(p1, v1, KoupitEnchantMenu);
                            break;
                        case 'P':
                            cout << "Pokracuješ zpět na trh...\n\n";
                            break;
                        default:
                            cout << "Neplatná hodnota\n";
                            break;
                        }
                    } while (KoupitEnchantMenu != 'P');
                    break;
                case 'P':
                    cout << "Pokracuješ zpět do vesnice...\n\n";
                    break;
                default:
                    cout << "\nNeplatná hodnota\n";
                    break;
                }
            } while (trhMenu != 'P');
            break;
        case 'H':
            cout << "| - Hospoda je místo, kde můžeš získat informace od místních obyvatel\n\n";
            _sleep(5000);
            cout << "---Potkal jsi--- " << v1.obyvatele[R1] << "\n";
            _sleep(5000);
            cout << "---Potkal jsi--- " << v1.obyvatele[R2] << "\n";
            _sleep(5000);
            cout << "---Potkal jsi--- " << v1.obyvatele[R3] << "\n\n\n";
            _sleep(5000);
            break;
        case 'O':
            ohnisteBool = false;
            cout << "| - Ohniště je místo, kde můžeš odpočívat a léčit se, ale pozor!!\n| - Pokud budeš odpočívat příliš dlouho, může se stát, že tě někdo napadne\n\n";
            if(p1.gld < 20){
                cout<< ">> Nemáš dost goldů na to aby jsi přespal... kamo opravu sis myslel že to takhle obejdeš...\n\n";
                ohnisteBool = true;
            }
            do{
                if(ohnisteBool == true){
                    ohnistevyber = 'S';
                }
                else if (ohnisteBool == false){
                    cout << "| - Opravdu chces jit opocivat ? (A = ANO | N = NE)\n";
                    cin>> ohnistevyber;
                }
            switch(ohnistevyber){
                case 'A':
                    p1.hp += 2;
                    cout<< ">> Přidali se ti maximalní 2 životy\n\n";
                    OhnisteRand = rand() % 3;
                    if(OhnisteRand == 1){
                        cout<< ">> Bandita ti ukradl 20 goldu bote... Moc to riskujes\n\n";
                        p1.gld -= 20;
                    }
                    break;
                case 'N':
                    cout<<"| - Vracíš se zpátky do vesnice\n\n";
                    break;
                case 'S':
                    break;
                }

            if(p1.gld < 20 && ohnistevyber != 'S'){
                cout<< "\n>> Došli ti goldy bro... chapes proč ti už musim vyhodit\n\n";
            }

            }while(ohnistevyber != 'N'&& p1.gld > 20 && ohnistevyber != 'S');

            break;
        case 'P':
            cout << "Pokracuješ ve své cestě...\n\n";
            break;
        default:
            cout << "Neplatná hodnota\n";
        }

    } while (vesniceMenu != 'P');
}

void VyberClass(Player &p1)
{

    char VyberCl;
    char Classa;
    char Classa_2;
    bool OutVyber = false;
    do
    {
        do
        {
            cout << "| -> Vyber si Classu --- Zde máš výbér |\n\n";
            cout << "------------CLASSY-----------\n";
            cout << "| -W- Warrior\n| -R- Ranger\n| -M- Mage\n| -G- Rogue\n| -P- Priest\n\n| -> ";
            cin >> VyberCl;
            switch (VyberCl)
            {
                case 'W':
                do
                {
                    cout << "\n| -K- Knight - Nebojácný rytíř se zakladními staty --|100 HP|20 defense|\n";
                    cout << "| -B- Bersberker - Malý, silný, rychlý avšak málo vydrží --|60 HP|5 defense|\n";
                    cout << "| -G- Gladiator - Obrvoský silný gladiátor, jenže za cenu rychlosti --|150 HP|35 defense|\n";
                    cout << "| -P- Paladin - Obrovská výdrž v boji, ale útok trochu postrádá --|200 HP|50 defense|\n";
                    cout << "| -Z- Zpět\n\n| -> ";
                    cin >> Classa;
                    switch (Classa)
                    {
                    case 'K':
                        cout << ">> Vybral sis Knighta";
                        p1.hp = 100;
                        p1.df = 20;
                        p1.Knight = true;
                        p1.Warrior = true;
                        OutVyber = true;
                        break;
                    case 'B':
                        cout << ">> Vybral sis Besberkra";
                        p1.hp = 60;
                        p1.df = 5;
                        p1.Bersberker = true;
                        p1.Warrior = true;
                        OutVyber = true;
                        break;
                    case 'G':
                        cout << ">> Vybral sis Gladiatora";
                        p1.hp = 150;
                        p1.df = 35;
                        p1.Gladiator = true;
                        p1.Warrior = true;
                        OutVyber = true;
                        break;
                    case 'P':
                        cout << ">> Vybral sis Paladina";
                        p1.hp = 200;
                        p1.df = 50;
                        p1.Paladin = true;
                        p1.Warrior = true;
                        OutVyber = true;
                        break;
                    case 'Z':
                        break;
                    default:
                        cout << "Neplatná hodnota";
                    }
                } while (Classa != 'Z' && OutVyber != true);
                break;
            case 'R':
                do
                {
                    cout << "\n| -A- Archer - Zapálený lučištník s kapkou elfský krve v sobě -- |90 HP|5 defense|\n";
                    cout << "| -S- Sniper - Oddstrelovač s obrovskou palnou střelou skoro bez možností minout, ale dlouho přebíjí -- |80 HP|10 defense|\n";
                    cout << "| -H- Huntsman - Lovec s pořádnout brokovnicí, ale docela gamble útok je o tom kolik toho trefí -- |110 HP|15 defense|\n";
                    cout << "| -Z- Zpět\n\n| -> ";
                    cin >> Classa;
                    switch (Classa)
                    {
                    case 'A':
                        cout << ">> Vybral sis Archer";
                        p1.hp = 90;
                        p1.df = 5;
                        p1.Archer = true;
                        p1.Ranger = true;
                        OutVyber = true;
                        break;
                    case 'S':
                        cout << ">> Vybral sis Sniper";
                        p1.hp = 80;
                        p1.df = 10;
                        p1.Sniper = true;
                        p1.Ranger = true;
                        OutVyber = true;
                        break;
                    case 'H':
                        cout << ">> Vybral sis Huntsman";
                        p1.hp = 110;
                        p1.df = 15;
                        p1.Huntsman = true;
                        p1.Ranger = true;
                        OutVyber = true;
                        break;
                    case 'Z':
                        break;
                    default:
                        cout << "Neplatná hodnota";
                    }
                } while (Classa != 'Z' && OutVyber != true);
                break;
            case 'M':
                do
                {
                    cout << "\n| -S- Sorrencer - Mág všeho druhu, dokáže se naučit kterýkoli magický útok -- |100 HP|0 defense| Mana 100|\n";
                    cout << "| -I- Iluzinosta - Tvoří iluze, který nemají za účel přímí útok, ale dostat nepřítele do stavu bezmoci -- |120 HP|0 defense| Mana 100|\n";
                    cout << "| -P- Pyromancer - Vládce ohně, sice se nekáže naučit všechnu magii, ale má TOP ohnivou -- |100 HP|10 defense| Mana 110|\n";
                    cout << "| -Z- Zpět\n\n| -> ";
                    cin >> Classa;
                    switch (Classa)
                    {
                    case 'S':
                        cout << ">> Vybral sis Sorrencer";
                        p1.hp = 100;
                        p1.df = 0;
                        p1.manaorigin = 100;
                        p1.Sorrencer = true;
                        p1.Mage = true;
                        OutVyber = true;
                        break;
                    case 'I':
                        cout << ">> Vybral sis Iluzionista";
                        p1.hp = 120;
                        p1.df = 0;
                        p1.manaorigin = 100;
                        p1.Iluzionista = true;
                        p1.Mage = true;
                        OutVyber = true;
                        break;
                    case 'P':
                        cout << ">> Vybral sis Pyromancer";
                        p1.hp = 100;
                        p1.df = 10;
                        p1.manaorigin = 110;
                        p1.Pyromancer = true;
                        p1.Mage = true;
                        p1.PowerFire = true;
                        OutVyber = true;
                        break;
                    case 'Z':
                        break;
                    default:
                        cout << "Neplatná hodnota";
                    }
                } while (Classa != 'Z' && OutVyber != true);
                break;
            case 'G':
                do
                {
                    cout << "\n| -A- Assasin - Pán rychlosti, spoléhá na rychlé útoky s vysokou šancí na kritický zásah -- |80 HP|5 defense|\n";
                    cout << "| -D- Duelist - Absolutně nemožné duelistu zasáhnout, všemu se vyhne -- |70 HP|5 defense|\n";
                    cout << "| -Z- Zpět\n\n| -> ";
                    cin >> Classa;
                    switch (Classa)
                    {
                    case 'A':
                        cout << ">> Vybral sis Assasin";
                        p1.hp = 80;
                        p1.df = 5;
                        p1.Assasin = true;
                        p1.Rogue = true;
                        OutVyber = true;
                        break;
                    case 'D':
                        cout << ">> Vybral sis Duelist";
                        p1.hp = 70;
                        p1.df = 5;
                        p1.Duelist = true;
                        p1.Rogue = true;
                        OutVyber = true;
                        break;
                    case 'Z':
                        break;
                    default:
                        cout << "Neplatná hodnota";
                    }
                } while (Classa != 'Z' && OutVyber != true);
                break;
            case 'P':
                do
                {
                    cout << "\n| -H- Healer - Neni až tak moc silný, ale muže být pomalu nesmrtelný -- |100 HP|5 defense| Mana 200|\n";
                    cout << "| -B -Bart - Absolutní GOATTT, dokáže porazit final bosse pomocí hudby... respekt -- |100 HP|0 defense|\n";
                    cout << "| -Z- Zpět\n\n| -> ";
                    cin >> Classa;
                    switch (Classa)
                    {
                    case 'H':
                        cout << ">> Vybral sis Healer";
                        p1.hp = 100;
                        p1.df = 5;
                        p1.manaorigin = 200;
                        p1.Healer = true;
                        p1.Priest = true;
                        OutVyber = true;
                        break;
                    case 'B':
                        cout << ">> Vybral sis Bart";
                        p1.hp = 100;
                        p1.df = 0;
                        p1.Bart = true;
                        OutVyber = true;
                        break;
                    default:
                        cout << "Neplatná hodnota";
                    }
                } while (Classa != 'Z' && OutVyber != true);
                break;
            default:
                cout << "\nNeplatná hodnota!\n\n";
            }
        } while (OutVyber != true);

    } while (OutVyber != true);
    cout << "\n\n| - Skvělý výběr " << p1.name << "!!\n\n";
}



void EnemyUtok(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1){

    int PoisnoRand = rand() % 7;
    int FireRand = rand() % 7;
    int BlindRand = rand() % 7;
    int ConfRand = rand() % 7;
    int FrezRand = rand() % 7;
    int SleepRand = rand() % 7;





    if(e1.Field_goblin == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 20;
        e1.hpEnemy = 30;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 10;
    }
    else if(e1.Honey_bee == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 30;
        e1.hpEnemy = 20;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 5;
        if(PoisnoRand == 2){
            p1.poison = true;
            p1.poisonTimer = 3;
        }
    }
    else if(e1.Grassy_bear == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 10;
        e1.hpEnemy = 40;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 15;
    }
    else if(e1.Whispering_wisp == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 30;
        e1.hpEnemy = 25;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 5;
        if(ConfRand == 2){
            p1.conf = true;
            p1.confTimer = 3;
        }
    }
    else if(e1.Pink_fairy == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 40;
        e1.hpEnemy = 30;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 5;
    }
    else if(e1.Prismatic_lacewing == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 70;
        e1.hpEnemy = 20;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 10;
    }
    else if(e1.MBOSS_Abigail == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 30;
        e1.hpEnemy = 100;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 30;
    }
    else if(e1.SharpFeather_Harpy == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 40;
        e1.hpEnemy = 35;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 20;
    }
    else if(e1.Cloud_Cruiser == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 80;
        e1.hpEnemy = 30;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 15;
    }
    else if(e1.Storm_vyvern == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 50;
        e1.hpEnemy = 50;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 20;
    }
    else if(e1.Frozen_Stalker == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 20;
        e1.hpEnemy = 60;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 20;
        if(FrezRand == 2){
            p1.frez = true;
            p1.frezTimer = 3;
        }
    }
    else if(e1.Ice_Elemental == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 20;
        e1.hpEnemy = 50;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 30;
        if(FrezRand == 2){
            p1.frez = true;
            p1.frezTimer = 3;
        }
    }
    else if(e1.Glacial_breaker == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 6;
        e1.hpEnemy = 80;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 25;
        if(FrezRand == 2){
            p1.frez = true;
            p1.frezTimer = 3;
        }
    }
    else if(e1.Sand_worm == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 30;
        e1.hpEnemy = 40;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 25;
        if(PoisnoRand == 2){
            p1.poison = true;
            p1.poisonTimer = 3;
        }
    }
    else if(e1.Mummified_traveller == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 20;
        e1.hpEnemy = 50;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 20;
         if(SleepRand == 2){
            p1.sleep = true;
            p1.sleepTimer = 3;
        }
    }
    else if(e1.SandStorm_Elemental == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 70;
        e1.hpEnemy = 60;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 25;
         if(BlindRand == 2){
            p1.blind = true;
            p1.blindTimer = 3;
        }
    }
    else if(e1.MBOSSPrism_golem == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 10;
        e1.hpEnemy = 200;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 20;
    }
    else if(e1.MBOSSCrystal_bat == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 80;
        e1.hpEnemy = 100;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 45;
    }
    else if(e1.Relic_Guardian == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 50;
        e1.hpEnemy = 150;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 30;
    }
    else if(e1.Archive_ghost == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 60;
        e1.hpEnemy = 120;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 20;
        if(SleepRand == 2){
            p1.sleep = true;
            p1.sleepTimer = 3;
        }
    }
    else if(e1.FlamedEyes_statue == true){
        if(e1.Enemy_Aktivni == false){
        e1.speedEnemy = 40;
        e1.hpEnemy = 100;
        e1.Enemy_Aktivni = true;
        }
        p1.DamageTake = 35;
        if(FireRand == 2){
            p1.fire = true;
            p1.fireTimer = 3;
        }
    }
     else if(e1.FBOSSChronarch == true){
        
     }
     else if(e1.SecretBoss_Empres_of_Light == true){
        cout<< "||---Tak to jsi v prdeli brochacho... Neměl si ho zabíjet\n||---Good luck bráši\n";
        e1.speedEnemy = 100;
        e1.hpEnemy = 300;
        p1.DamageTake = 50;
        
    }

}

void FinalEncounter(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1, FalseL &f1){

    bool OnlyOneTimeLOL = true;
    bool ManaUser = false;
    int ManaUserRand;
    bool EnemyKill = false;



        if (p1.Mage == true || p1.Healer == true)
    {
        ManaUser = true;
    }





    e1.Enemy_Aktivni = false;

    p1.speed = p1.speedorigin;
    p1.mana = p1.manaorigin;
    p1.hitchance = p1.hitchanceorigin;


    VyberEnemy(p1,v1,u1,e1,f1);



    do{
    EnemyUtok(p1,v1,u1,e1);
        if(OnlyOneTimeLOL == true){
        cout<<"| << Enemy má "<< e1.hpEnemy<<" hp\n";
        cout<<"| << Enemy dává " <<p1.DamageTake<<" damage\n";
        cout<<"| << Rychlost Enemy: " <<e1.speedEnemy<<"\n\n";
        OnlyOneTimeLOL = false;
        }
    PlayerUtok(p1,v1,u1,e1);
    ClassSchopnosti(p1, v1, u1, e1);
    CheckStatsPlayer(p1);
    e1.EnemyDamageFinal = e1.EnemyDamageTake;
    e1.EnemyDamageFinal+= p1.dmgOrigin;




    EnemyKill = false;
    
  if(e1.EnemyDamageFinal > 0 || p1.DamageFinal > 0){  
    if(e1.speedEnemy > p1.speed){
    cout<< CERVENA<<"\n|-----Menší speed-----|"<<RESET;
    
        if(p1.DamageFinal > 0){
            p1.hpBattle -= p1.DamageFinal;
   
            cout<< "\n| - Enemák ti dal " << p1.DamageFinal << " poškození\n";
            cout<< "| - Máš " << p1.hpBattle << " hp\n\n";
        }
        if (p1.hpBattle <= 0)
        {
            p1.hp = 0;
            cout << "Tady tvoje cesta končí... Došli ti životy";
            exit(0);
        }

        if (e1.EnemyDamageFinal > 0){
            e1.hpEnemy -= e1.EnemyDamageFinal;
            cout<< "\n| - Dáváš enemákovi " << e1.EnemyDamageFinal << " poškození\n";
            if(e1.hpEnemy < 0){
                e1.hpEnemy = 0;
            }
            cout<< "| - Enemák má " << e1.hpEnemy << " hp\n\n";
        }
    }

    else if (e1.speedEnemy <= p1.speed){
    cout<< MODRA<<"\n|-----Větsi speed-----|"<<RESET;
            if(e1.EnemyDamageFinal > 0){
            e1.hpEnemy -= e1.EnemyDamageFinal;
            if(e1.hpEnemy < 0){
                e1.hpEnemy = 0;
            }
            cout<< "\n| - Dáváš enemákovi " << e1.EnemyDamageFinal << " poškození\n";
            if(e1.hpEnemy <= 0){
                e1.hpEnemy = 0;
                EnemyKill = true;
            }
            cout<< "| - Enemák má " << e1.hpEnemy << " hp\n\n";
        }

        if(EnemyKill == false){

            if(p1.DamageFinal > 0){
                p1.hpBattle -= p1.DamageFinal;
    
                cout<< "\n| - Enemák ti dal " << p1.DamageFinal << " poškození\n";
                cout<< "| - Máš " << p1.hpBattle << " hp\n\n";
            }
        }
        if (p1.hpBattle <= 0)
        {
            p1.hp = 0;
            cout << "Tady tvoje cesta končí... Došli ti životy";
            exit(0);
        }
    }
}
    if(ManaUser == true){
        ManaUserRand = rand() % 3 + 1;
        if(ManaUserRand == 1){
        p1.mana += 20;
        cout<< MODRA<<"| - Doplnilo se ti 20 many\n"<<RESET;
        }
        else if(ManaUserRand == 2){
        p1.mana += 30;
        cout<< MODRA<<"| - Doplnilo se ti 30 many\n"<<RESET;
        }
        else if(ManaUserRand == 3){
        p1.mana += 40;
        cout<< MODRA<<"| - Doplnilo se ti 40 many\n"<<RESET;
        }
        else{
        }
    }












        if (e1.hpEnemy <= 0)
        {
            e1.hpEnemy = 0;
            cout << "Vítězíš, ber goldy a pokračuj dál";
            Enemyfalse(e1);

            e1.EnemyBlind = false;
            e1.EnemyBlindTimer = 0;

            e1.EnemyConf = false;
            e1.EnemyConfTimer = 0;

            e1.EnemyFire = false;
            e1.EnemyFireTimer = 0;

            e1.EnemyFire = false;
            e1.EnemyFireTimer = 0;
        }
    }while(e1.hpEnemy>0);
    }

void PlayerUtok(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1){
  
int Vyber_utoku;
char Vyber;
bool Vybrano = false;
int critChance100 = rand() % 100 + 1;
int hitChance100 = rand() % 100 + 1;
int specialChance100 = rand() % 100 + 1;
int confChance = rand() % 7;
int BlidnChance = rand() % 2 + 1;


int blesk = 0;
do{

    confChance = rand() % 5;
    critChance100 = rand() % 100 + 1;
    hitChance100 = rand() % 100 + 1;
    specialChance100 = rand() % 100 + 1;

    e1.EnemySleep = false;
    if(e1.EnemySleepTimer >= 1){
        e1.EnemySleepTimer--;
        e1.EnemySleep = true;
    }

    cout<< "\n| - Vyber si utok, který chces použít";

    if(p1.Warrior == true){
        cout << "\n| 1 |Seknutí| - Běžný útok >> Speed 20, Crit 10%, Damage 15\n";
        cout << "| 2 |Bodnutí| - Bodnutí nožíkem >> Speed 40, Crit 30%, Damage 5\n";
        cout << "| 3 |Těžký útok| - Možnost zaůtočit silně >> Speed 5, Crit 5%, Damage 30\n";
        cout << "| 4 |Dvojitý seknutí| - Dvojitý seknutí, šance minout >> Speed 10, Crit 10%, Damage 15\n\n| -> ";
        cin >> Vyber_utoku;
        switch(Vyber_utoku){
            case 1:
                cout << "\n\n| 1 |Seknutí| - Běžný útok >> Speed 20, Crit 10%, Damage 15\n\n";
                e1.EnemyDamageTake = 15;
                p1.speed = 20;
                e1.EnemyCrit = 10;
                Vybrano = true;
                break;
            case 2:
                cout << "\n| 2 |Bodnutí| - Bodnutí nožíkem >> Speed 40, Crit 30%, Damage 5\n\n";
                e1.EnemyDamageTake = 5;
                p1.speed = 40;
                e1.EnemyCrit = 30;
                Vybrano = true;
                break;
            case 3:
                cout << "\n| 3 |Těžký útok| - Možnost zaůtočit silně >> Speed 5, Crit 5%, Damage 30\n\n";
                e1.EnemyDamageTake = 30;
                p1.speed = 5;
                e1.EnemyCrit = 5;
                Vybrano = true;
                break;
            case 4:
                cout << "\n| 4 |Dvojitý seknutí| - Dvojitý seknutí, šance minout >> Speed 10, Crit 10%, Damage 15\n\n";
                e1.EnemyDamageTake = 15;
                p1.speed = 10;
                e1.EnemyCrit = 10;
                e1.EnemyHitChance = 50;
                Vybrano = true;
                break;
            default:
                cout<< "Neplatná hodnota";
        }
    }
    else if(p1.Ranger == true){
        cout << "\n| 1 |Střela| - Běžný sťřela >> Speed 30, Crit 10%, Damage 15\n";
        cout << "| 2 |Přesná střela| - Bodnutí nožíkem >> Speed 10, Crit 40%, Damage 15\n";
        cout << "| 3 |Zapalná střela| - Prostě zapálí >> Speed 20, Crit 10%, Damage 10 + (2/s x 5)\n";
        cout << "| 4 |Světlice| - Možnost oslepit nepřítele, šance minout >> Speed 5, Crit/Damage 0, Special Chance 60%\n\n| -> ";
        cin >> Vyber_utoku;
        switch(Vyber_utoku){
            case 1:
                cout << "\n\n| 1 |Střela| - Běžný sťřela >> Speed 30, Crit 10%, Damage 15\n\n";
                e1.EnemyDamageTake = 15;
                p1.speed = 30;
                e1.EnemyCrit = 10;
                Vybrano = true;
                break;
            case 2:
                cout << "\n| 2 |Přesná střela| - Bodnutí nožíkem >> Speed 10, Crit 40%, Damage 15\n\n";
                e1.EnemyDamageTake = 15;
                p1.speed = 10;
                e1.EnemyCrit = 40;
                Vybrano = true;
                break;
            case 3:
                cout << "\n| 3 |Zapalná střela| - Prostě zapálí >> Speed 20, Crit 10%, Damage 10 + (2/s x 5)\n\n";
                e1.EnemyDamageTake = 10;
                p1.speed = 20;
                e1.EnemyCrit = 10;
                if(e1.EnemyFire == false){
                    e1.EnemyFire = true;
                    e1.EnemyFireTimer = 5;
                }
                else if(e1.EnemyFire == true){
                    e1.EnemyFireTimer = 5;
                }
                Vybrano = true;
                break;
            case 4:
                cout << "\n| 4 |Světlice| - Možnost oslepit nepřítele, šance minout >> Speed 5, Crit/Damage 0, Special Chance 60%\n\n";
                e1.EnemyDamageTake = 0;
                p1.speed = 5;
                e1.EnemyCrit = 0;
                if(specialChance100 <= 60){
                    e1.EnemyBlind = true;
                    e1.EnemyBlindTimer = 3;
                }
                else if(specialChance100 > 60){
                    cout<< "Nezvládl jsi oslepit nepřítele\n";
                }
                Vybrano = true;
                break;
            default:
                cout<< "Neplatná hodnota";
        }
    }
    else if(p1.Mage == true){
        cout << "\n| 1 |Magická střela| - Běžný sťřela >> Speed 30, Crit 15%, Damage 15, Mana 20\n";
        cout << "| 2 |Výbuch| - Silný útok, který omračí i nepřítele >> Speed 10, Crit 10%, Damage 60, Mana 80\n";
        cout << "| 3 |Ohnivý kruh| - Kruh tvořený ohněm >> Speed 50, Crit 0%, Damage 5 + (2/s x 5), Mana 30\n";
        cout << "| 4 |Elektrický výboj| - Elektrická rána s šancí na omráčení nepřítele >> Speed 20, Crit 10%, Damage 25, Mana 45\n";
        cout << "| 5 |Blesk z nebes| - Blesk s šancí 1/5 na multihit >> Speed 5, Damage 40, Mana 80\n\n| -> ";
        cin >> Vyber_utoku;
        switch(Vyber_utoku){
            case 1:
                cout << "\n\n| 1 |Magická střela| - Běžný sťřela >> Speed 30, Crit 15%, Damage 15, Mana 20\n\n";
                if(p1.mana >= 20){
                    e1.EnemyDamageTake = 15;
                    p1.speed = 30;
                    e1.EnemyCrit = 15;
                    p1.mana -= 20;
                    Vybrano = true;
                }
                else{
                    cout << "\nNedostatek many!\n";
                }
                break;
            case 2:
                cout << "\n| 2 |Výbuch| - Silný útok, který omračí i nepřítele >> Speed 10, Crit 10%, Damage 60, Mana 80\n\n";
                if(p1.mana >= 80){
                    e1.EnemyDamageTake = 60;
                    p1.speed = 10;
                    e1.EnemyCrit = 10;
                    p1.mana -= 80;
                    Vybrano = true;
                }
                else{
                    cout << "\nNedostatek many!\n";
                }
                break;
            case 3:
                cout << "\n| 3 |Ohnivý kruh| - Kruh tvořený ohněm >> Speed 50, Crit 0%, Damage 5 + (2/s x 5), Mana 30\n\n";
                if(p1.mana >= 30){
                    e1.EnemyDamageTake = 5;
                        if(e1.EnemyFire == false){
                            e1.EnemyFire = true;
                            e1.EnemyFireTimer = 5;
                            Vybrano = true;
                        }
                        else if(e1.EnemyFire == true){
                            e1.EnemyFireTimer = 5;
                            Vybrano = true;
                        }
                    p1.speed = 50;
                    e1.EnemyCrit = 0;
                    p1.mana -= 30;
                }
                else{
                    cout << "\nNedostatek many!\n";
                }
                break;
            case 4:
                cout << "\n| 4 |Elektrický výboj| - Elektrická rána s šancí na omráčení nepřítele >> Speed 20, Crit 10%, Damage 25, Mana 45\n\n";
                if(p1.mana >= 45){
                    e1.EnemyDamageTake = 25;
                    p1.speed = 20;
                    e1.EnemyCrit = 10;
                    if(specialChance100 <= 30){
                        e1.EnemyConf = true;
                        e1.EnemyConfTimer = 3;
                        Vybrano = true;
                    }
                    else if(specialChance100 > 30){
                        cout<< "Nezvládl jsi omráčit nepřítele\n";
                        Vybrano = true;
                    }
                    p1.mana -= 45;
                }
                else{
                    cout << "\nNedostatek many!\n";
                }
                break;
            case 5:
                cout << "\n| 5 |Blesk z nebes| - Blesk s šancí 1/5 na multihit >> Speed 5, Damage 40, Mana 80\n\n";
                if(p1.mana >= 80){
                    e1.EnemyDamageTake = 40;
                    p1.speed = 5;
                    do{
                    if(blesk = rand() % 5 + 1 == 3){
                        e1.EnemyDamageTake += 40;
                        cout<< "Blesk z nebes zasáhl znovu!\nDamage = " << e1.EnemyDamageTake << "\n";
                    }
                    }while(blesk == 3);
                    p1.mana -= 80;
                    Vybrano = true;
                }
                else{
                    cout << "\nNedostatek many!\n";
                }
                break;
            default:
                cout<< "Neplatná hodnota";
        }
    }
    else if(p1.Rogue == true){
        cout << "\n| 1 |Seknutí| - Běžný útok >> Speed 20, Crit 10%, Damage 15\n";
        cout << "| 2 |Bodnutí| - Bodnutí nožíkem >> Speed 40, Crit 30%, Damage 5\n";
        cout << "| 3 |Těžký útok| - Možnost zaůtočit silně, možnost minout >> Speed 5, Crit 5%, Damage 30\n";
        cout << "| 4 |Dvojitý seknutí| - Dvojitý seknutí >> Speed 10, Crit 10%, Damage 15\n\n| -> ";
        cin >> Vyber_utoku;
        switch(Vyber_utoku){
            case 1:
                cout << "\n\n| 1 |Seknutí| - Běžný útok >> Speed 20, Crit 10%, Damage 15\n\n";
                e1.EnemyDamageTake = 15;
                p1.speed = 20;
                e1.EnemyCrit = 10;
                Vybrano = true;
                break;
            case 2:
                cout << "\n| 2 |Bodnutí| - Bodnutí nožíkem >> Speed 40, Crit 30%, Damage 5\n\n";
                e1.EnemyDamageTake = 5;
                p1.speed = 40;
                e1.EnemyCrit = 30;
                Vybrano = true;
                break;
            case 3:
                cout << "\n| 3 |Těžký útok| - Možnost zaůtočit silně, možnost minout >> Speed 5, Crit 5%, Damage 30\n\n";
                e1.EnemyDamageTake = 30;
                p1.speed = 5;
                e1.EnemyCrit = 5;
                e1.EnemyHitChance = 70;
                if(hitChance100 >= e1.EnemyHitChance){
                    cout<< "Nezvládl jsi těžký útok, minul jsi!\n";
                    e1.EnemyDamageTake = 0;
                }
                
                Vybrano = true;
                break;
            case 4:
                cout << "\n| 4 |Dvojitý seknutí| - Dvojitý seknutí >> Speed 10, Crit 10%, Damage 15\n\n";
                e1.EnemyDamageTake = 15 * 2;
                p1.speed = 10;
                e1.EnemyCrit = 10;  
                Vybrano = true;
                break;
            default:
                cout<< "Neplatná hodnota";
        }
    }
    else if(p1.Priest == true){
        cout << "\n| 1 |Duha z nebes| - Sejme všechny negativní efekty a dá 20 hp >> Speed 0, Damage/Crit = 0, Special Chance 50%, Mana 30\n";
        cout << "| 2 |Zdravotní péče| - Uzdraví se a dopní životy o 20 HP s šancí na dopnění o 10 více >> Speed 0, Special Chance 50%, Mana 30\n";
        cout << "| 3 |Magická střela| - Běžný sťřela >> Speed 30, Crit 15%, Damage 15, Mana 20\n";
        cout << "| 4 |Výbuch| - Silný útok, který omračí i nepřítele >> Speed 5, Crit 10%, Damage 60, Mana 80\n\n| -> ";
        cin >> Vyber_utoku;
        switch(Vyber_utoku){
            case 1:
                cout << "\n\n| 1 |Duha z nebes| - Sejme všechny negativní efekty a dá 20 hp >> Speed 0, Damage/Crit = 0, Special Chance 50%, Mana 30\n\n";
                if(p1.mana >= 30){
                p1.mana -= 30;
                p1.poison = false;
                p1.speed = 20;
                p1.conf = false;
                p1.frez = false;
                p1.sleep = false;
                p1.blind = false;
                p1.fire = false;
                if(specialChance100 <= 50){
                    p1.hpBattle += 30;
                    cout<< "Duha z nebes ti dala 20 hp a odstranila negativni efekty\n";
                    if(p1.hpBattle > p1.hp){
                        p1.hpBattle = p1.hp;
                    }
                }
                else if(specialChance100 > 50){
                    cout<< "Duha z nebes odstranila pouze negativni efekty\n";
                    
                }
                Vybrano = true;
                e1.EnemyCrit = 0;
                e1.EnemyDamageTake = 0;

            }
            else{
                    cout << "\nNedostatek many!\n";
                }
                e1.EnemyCrit = 0;
                e1.EnemyDamageTake = 0;
                break;
            case 2 :
                cout << "\n| 2 |Zdravotní péče| - Uzdraví se a dopní životy o 20 HP s šancí na dopnění o 10 více >> Speed 0, Special Chance 50%, Mana 30\n\n";
                if(p1.mana >= 30){
                    p1.mana -= 30;
                if(specialChance100 <= 50){
                    p1.hpBattle += 20;
                    cout<< "Zdravotní péče ti dala 20 hp\n";
                    if(p1.hpBattle > p1.hp){
                        p1.hpBattle = p1.hp;
                    }
                }
                else if(specialChance100 > 50){
                    p1.hpBattle += 30;
                    cout<< "Zdravotní péče ti dala 30 hp\n";
                    if(p1.hpBattle > p1.hp){
                        p1.hpBattle = p1.hp;
                    }
                }
                Vybrano = true;
                e1.EnemyDamageTake = 0;
                e1.EnemyCrit = 0;

                p1.speed = 0;
                }else{
                    cout << "\nNedostatek many!\n";
                }
                e1.EnemyCrit = 0;
                break;
            case 3:
                cout << "\n| 3 |Magická střela| - Běžný sťřela >> Speed 30, Crit 15%, Damage 15, Mana 20\n\n";
                if(p1.mana >= 20){
                    e1.EnemyDamageTake = 15;
                    p1.speed = 30;
                    e1.EnemyCrit = 15;
                    p1.mana -= 20;
                    Vybrano = true;
                }
                else{
                    cout << "\nNedostatek many!\n";
                }
                break;
            case 4:
                cout << "\n| 4 |Výbuch| - Silný útok, který omračí i nepřítele >> Speed 5, Crit 10%, Damage 60, Mana 80\n\n";
                if(p1.mana >= 80){
                    e1.EnemyDamageTake = 60;
                    p1.speed = 5;
                    e1.EnemyCrit = 10;
                    p1.mana -= 80;
                    Vybrano = true;
                }
                else{
                    cout << "\nNedostatek many!\n";
                }
                break;
            default:
                cout<< "Neplatná hodnota";  
        }
    }
    else if(p1.Bart == true){
        cout << "\n| 1 |Písnička vítězství - Písnička udeří a udělá damage >> Speed 20, Damage 15, Crit = 20%\n";
        cout << "| 2 |Ukolébavka| - Dopnění o 10 hp + šance na uspání protivníka >> Speed 5, Damage/Crit 0, Special Chance 70%\n";
        cout << "| 3 |Rozžhavený hudeník| - Hraje tak dobře a rychle, že zapálí enemáka >> Speed 10, Damage 20 + (5/s x 3)\n";
        cout << "| 4 |Obnova hramonie| - Nastaví rovnováhu, což mu přida 20 hp >> Speed 0, Damage/Crit = 0, Special Chance 80%\n";
        cout << "| 5 |Poslední báseň| - Poslední pokus aby tento GOAT otočil celou hru >> Speed 100, Special effect - set 1 HP/set max HP, Special Chance 50/50\n\n| -> ";
        cin >> Vyber_utoku;
        switch(Vyber_utoku){
            case 1:
                cout << "\n\n| 1 |Písnička vítězství - Písnička udeří a udělá damage >> Speed 20, Damage 15, Crit 20%\n\n";
                e1.EnemyDamageTake = 15;
                p1.speed = 20;
                e1.EnemyCrit = 20;
                Vybrano = true;
                break;
            case 2 :
                cout << "\n | 2 |Ukolébavka| - Dopnění o 10 hp + šance na uspání protivníka >> Speed 5, Damage/Crit 0, Special Chance 50%\n\n";
                    if(specialChance100 <= 50){
                        e1.EnemySleep = true;
                        cout<<">> Uspal jsi protivníka\n";
                        e1.EnemySleepTimer = 1;
                    }
                        p1.hpBattle += 10;
                        cout<< ">> Ukolébavka ti dala 10 hp\n";
                        if(p1.hpBattle > p1.hp){
                            p1.hpBattle = p1.hp;
                        }
                    e1.EnemyCrit = 0;
                Vybrano = true;
                p1.speed = 5;
                e1.EnemyDamageTake = 0;
                e1.EnemyCrit = 0;
                break;
            case 3:
                cout << "\n| 3 |Rozžhavený hudeník| - Hraje tak dobře a rychle, že zapálí enemáka >> Speed 10, Damage 20 + (2/s x 10)\n\n";
                e1.EnemyDamageTake = 20;
                p1.speed = 10;
                if(e1.EnemyFire == false){
                    e1.EnemyFire = true;
                    e1.EnemyFireTimer = 3;
                }
                else if(e1.EnemyFire == true){
                    e1.EnemyFireTimer = 3;
                }
                Vybrano = true;
                break;
            case 4:
                cout << "\n| 4 |Obnova hramonie| - Nastaví rovnováhu, což mu přida 20 hp >> Speed 0, Damage/Crit = 0, Special Chance 80%\n\n";
                if(specialChance100 <= 80){
                    p1.hpBattle += 20;
                    cout<< "Obnova harmonie ti dala 20 hp\n";
                    if(p1.hpBattle > p1.hp){
                        p1.hpBattle = p1.hp;
                    }
                }
                else if(specialChance100 > 80){
                    cout<< "Obnova harmonie selhala... přeřekl jsi se botee, nedostala jsi žádné hp\n";
                }
                Vybrano = true;
                e1.EnemyDamageTake = 0;
                e1.EnemyCrit = 0;
                p1.speed = 0;
                break;
            case 5:
                cout << "\n| 5 |Poslední báseň| - Poslední pokus aby tento GOAT otočil celou hru >> Speed 100, Special effect - set 1 HP/set max HP, Special Chance 50/50\n\n";
                if(specialChance100 <= 50){
                    p1.hpBattle = 1;
                    cout<< "Poslední báseň selhala... máš smůlu lol skill issue, máš 1 hp\n";
                }
                else if(specialChance100 > 50){
                    p1.hpBattle = p1.hp;
                    cout<< "Poslední báseň uspěla!! Máš všechny své hp zpět\n";
                }
                Vybrano = true;
                p1.speed = 100;
                e1.EnemyDamageTake = 0;
                e1.EnemyCrit = 0;
                break;
            default:
                cout<< "Neplatná hodnota";
        }
    }
}while(Vybrano == false);




    e1.EnemyCrit += p1.crit;

    //Crit Chance-------------------------------

    if(critChance100 <= e1.EnemyCrit){
        cout<< "\n| - Kritický zásah!!\n";
        e1.EnemyDamageTake *= 2;
        e1.EnemyCrit = 0;
    }

    //Hit Chance-------------------------------

    if(e1.EnemyHitChance > 0){
        if(hitChance100 <= e1.EnemyHitChance){
            cout<<MODRA<<"\n| - Útok trefil 2x!\n"<<RESET;
            e1.EnemyDamageTake *= 2;
            e1.EnemyHitChance = 0;
        }
    }
    //Fire Effect-------------------------------

    if(e1.EnemyFire == true){
        cout<< CERVENA<<"\n| - Enemák hoří, bere 5 poškození\n"<<RESET;
        e1.EnemyDamageTake += 5;
        e1.EnemyFireTimer -= 1;
        if(e1.EnemyFireTimer <= 0){
            e1.EnemyFire = false;
            cout<< CERVENA<<"\n| - Oheň uhasl\n"<<RESET;
        }
    }
    //Blind Effect-------------------------------

    if(e1.EnemyBlind == true){
        cout<< SEDA<<"\n| - Enemák je slepý, má sníženou přesnost\n"<<RESET;
        if (BlidnChance == 1){
            cout<< SEDA<<"\n| - Slepota způsobila, že enemák minul útok\n"<<RESET;
            p1.DamageFinal = 0;
            p1.DamageTake = 0;
        }
        e1.EnemyBlindTimer -= 1;
        if(e1.EnemyBlindTimer <= 0){
            e1.EnemyBlind = false;
            cout<< SEDA<<"\n| - Enemák už není slepý\n"<<RESET ;
        }
    }
    //Conf Effect---------------------------------

    if(e1.EnemyConf == true){
        cout<< KRYSTAL_RUZOVA<<"\n| - Enemák je zmatený, má šanci se zranit\n"<<RESET;
        if (confChance == 2){
            cout<< KRYSTAL_RUZOVA<<"\n| - Zmatek způsobil, že enemák se zranil\n"<<RESET;
            e1.EnemyDamageTake += 5;
        }
        e1.EnemyConfTimer -= 1;
        if(e1.EnemyConfTimer <= 0){
            e1.EnemyConf = false;
            cout<< KRYSTAL_RUZOVA<<"\n| - Enemák už není zmatený\n"<<RESET;
        }
    }
    //Conf Effect---------------------------------

    if(e1.EnemySleep == true){
        cout<<LEDOVA_SVETLA<<"\n| >> Enemák je spí... GNGN bro\n\n"<<RESET;
        p1.DamageTake = 0;
    }
}

void VyberEnemy(Player &p1, Vesnice &v1, Schopnosti &u1, Enemy &e1, FalseL &f1){

int EnemyRand = rand() % 3 + 1;


    if(f1.level_1 == true){
        Levelfalse(f1);
        EnemyRand = rand() % 3 + 1;
        switch(EnemyRand){
            case 1:
                e1.Field_goblin = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< ZELENA <<"Field goblin\n"<<RESET;
                break;
            case 2:
                e1.Honey_bee = true;
            cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< ZELENA <<"Honey bee\n"<<RESET;
                break;
            case 3:
                e1.Grassy_bear = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< ZELENA <<"Grassy bear\n"<<RESET;
                break;
        }
        
    }
    else if (f1.level_2 == true){
        Levelfalse(f1);
        EnemyRand = rand() % 3 + 1;
        switch(EnemyRand){
            case 1:
                e1.Whispering_wisp = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< MODRA <<"Whispering wisp\n"<<RESET;
                break;
            case 2:
                e1.Pink_fairy = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< MODRA <<"Pink fairy\n"<<RESET;
                break;
            case 3:
                e1.Prismatic_lacewing = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< MODRA <<"Prismatic lacewing\n"<<RESET;
                break;
        }
    }
     else if (f1.level_3 == true){
        Levelfalse(f1);
        e1.MBOSS_Abigail = true;
        cout<< CERVENA <<"-------TVUJ MINIBOSS JE... Abigail\n"<<RESET;
        }

     else if (f1.level_4 == true){
        Levelfalse(f1);
        EnemyRand = rand() % 3 + 1;
        switch(EnemyRand){
            case 1:
                e1.SharpFeather_Harpy = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< SVETLE_SEDA <<"SharpFeather Harpy\n"<<RESET;
                break;
            case 2:
                e1.Cloud_Cruiser = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< SVETLE_SEDA <<"Cloud Cruiser\n"<<RESET;
                break;
            case 3:
                e1.Storm_vyvern = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< SVETLE_SEDA <<"Storm vyvern\n"<<RESET;
                break;
        }
     }
      else if (f1.level_5 == true){
        Levelfalse(f1);
        EnemyRand = rand() % 3 + 1;
        switch(EnemyRand){
            case 1:
                e1.Frozen_Stalker = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< LEDOVA_SVETLA <<"Frozen stalker\n"<<RESET;
                break;
            case 2:
                e1.Ice_Elemental = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< LEDOVA_SVETLA <<"Ice elemental\n"<<RESET;
                break;
            case 3:
                e1.Glacial_breaker= true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< LEDOVA_SVETLA <<"Glacial breaker\n"<<RESET;
                break;
        }
      }
       else if (f1.level_6 == true){
        Levelfalse(f1);
        EnemyRand = rand() % 3 + 1;
        switch(EnemyRand){
            case 1:
                e1.Sand_worm = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< ZLUTA <<"Sand worm\n"<<RESET;
                break;
            case 2:
                e1.Mummified_traveller = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< ZLUTA <<"Mummified traveller\n"<<RESET;
                break;
            case 3:
                e1.SandStorm_Elemental = true;
                cout<< CERVENA <<"-------TVUJ ENEMY JE... "<< ZLUTA <<"SandStorm elemental\n"<<RESET;
                break;
        }
       }
       else if (f1.level_7 == true){
        Levelfalse(f1);
            do{
                EnemyRand = rand() % 2 + 1;
            }while(EnemyRand < 1 || EnemyRand > 2);
        switch(EnemyRand){
            case 1:
                e1.MBOSSCrystal_bat = true;
                cout<<"-------TVUJ MINIBOSS JE... "<< KRYSTAL_RUZOVA <<"Crystal bat\n"<<RESET;
                break;
            case 2:
                e1.MBOSSPrism_golem = true;
                cout<<"-------TVUJ MINIBOSS JE... "<< KRYSTAL_RUZOVA <<"Prism golem\n"<<RESET;
                break;
        }
       }
       else if (f1.level_8 == true){
        Levelfalse(f1);
        EnemyRand = rand() % 3 + 1;
        switch(EnemyRand){
            case 1:
                e1.Relic_Guardian = true;
                cout<<"-------TVUJ ENEMY JE... "<< JINA_ZELENA <<"Relic guardian\n"<<RESET;
                break;
            case 2:
                e1.Archive_ghost = true;
                cout<<"-------TVUJ ENEMY JE... "<< JINA_ZELENA <<"Archive ghost\n"<<RESET;
                break;
            case 3:
                e1.FlamedEyes_statue = true;
                cout<<"-------TVUJ ENEMY JE... "<< JINA_ZELENA <<"FlamedEyes statue\n"<<RESET;
                break;
        }
         }
        else if (f1.level_9 == true){
        Levelfalse(f1);
        e1.FBOSSChronarch = true;
}
        else if (f1.level_10 == true){
        Levelfalse(f1);
        e1.SecretBoss_Empres_of_Light = true;
    }
}



void Loading(){

    int LoadingI = 0;

        cout<<"\n\nLoading";
    do{
    LoadingI++;
    _sleep(500);
    for(int i = 0; i<3; i++){
        cout<<".";
        _sleep(500);
    }
    cout << "\b\b\b";
    cout<< "   ";
    cout<< "\b\b\b";
    _sleep(500);
    }while(LoadingI != 1);
    cout<<".";
    _sleep(500);
        cout<<".";
    _sleep(500);
        cout<<".";
    _sleep(500);
    cout<<"\b\b\b\b\b\b\b\b\b\b"<<"          \n";
    LoadingI = 0;

}

void Levelfalse(FalseL &f1){


    f1.level_1 = false;
    f1.level_2 = false;
    f1.level_3 = false;
    f1.level_4 = false;
    f1.level_5 = false;
    f1.level_6 = false;
    f1.level_7 = false;
    f1.level_8 = false;
    f1.level_9 = false;
    f1.level_10 = false;

}

void Enemyfalse(Enemy &e1){

    e1.Field_goblin = false;
    e1.Honey_bee = false;
    e1.Grassy_bear = false;

    e1.Whispering_wisp = false;
    e1.Pink_fairy = false;
    e1.Prismatic_lacewing = false;

    e1.MBOSS_Abigail = false;

    e1.SharpFeather_Harpy = false;
    e1.Cloud_Cruiser = false;
    e1.Storm_vyvern = false;

    e1.Frozen_Stalker = false;
    e1.Ice_Elemental = false;
    e1.Glacial_breaker = false;

    e1.Sand_worm = false;
    e1.Mummified_traveller = false;
    e1.SandStorm_Elemental = false;

    e1.MBOSSPrism_golem = false;
    e1.MBOSSCrystal_bat = false;

    e1.Relic_Guardian = false;
    e1.Archive_ghost = false;
    e1.FlamedEyes_statue = false;

    e1.FBOSSChronarch = false;

    e1.SecretBoss_Empres_of_Light = false;




}