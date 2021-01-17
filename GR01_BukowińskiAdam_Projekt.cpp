{\rtf1\ansi\ansicpg1250\cocoartf2576
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <iostream>\
#include <cstdlib>\
#include <time.h>\
#include <windows.h>\
#include <conio.h>\
#include <MMSystem.h>\
#include <fstream>\
\
\
//Autor: Adam Bukowi\'f1ski\
\
\
\
using namespace std;\
\
  class Postac\
    \{\
        public:\
\
        string plec;\
        int sila=0;\
        int hp=0;\
        int inteligencja=0;\
        int charyzma=0;\
        string name;\
        int exp=0;\
        int kraina=0;\
    \};\
\
\
Postac mojaPostac;\
\
int main()\
\{\
\
\
    //MENU GLOWNE\
\
    cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;\
    cout<<"X                            X"<<endl;\
    cout<<"X         SLAVIATOR          X"<<endl;\
    cout<<"X                            X"<<endl;\
    cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;\
    cout<<"                              "<<endl;\
    cout<<" 1.New Game                   "<<endl;\
    cout<<" 2.Load Game                  "<<endl;\
    cout<<" 3.Exit                       "<<endl;\
    cout<<"                              "<<endl;\
\
    char wybor_menu;\
wybor_menu=getch();\
\
\
    switch (wybor_menu)\
\
\{\
case '1':\{system("cls");break;\}\
//WCZYTYWANIE GRY\
case '2':\{system("cls");\
fstream save;\
string linia;\
int licznik_save=0;\
 save.open("save.txt", ios::in);\
    if(save.good() == true)\
\{\
\
while(!save.eof())\
        \{\
            getline(save, linia);\
            //cout << linia << endl; //wy\uc0\u347 wietlenie linii\
            //cout << licznik_save <<endl;\
            if (licznik_save==0) \{mojaPostac.name=linia;\} else \{\}\
            if (licznik_save==1) \{mojaPostac.plec=linia;\} else \{\}\
            if (licznik_save==2) \{mojaPostac.kraina=atoi(linia.c_str());\}  else \{\}\
            if (licznik_save==3) \{mojaPostac.sila=atoi(linia.c_str());\}  else \{\}\
            if (licznik_save==4) \{mojaPostac.hp=atoi(linia.c_str());\}  else \{\}\
            if (licznik_save==5) \{mojaPostac.inteligencja=atoi(linia.c_str());\}  else \{\}\
            if (licznik_save==6) \{mojaPostac.charyzma=atoi(linia.c_str());\} else \{\}\
            if (licznik_save==7) \{mojaPostac.exp=atoi(linia.c_str());\} else \{\}\
            licznik_save++;\
        \}\
        save.close();\
\
\
        cout<<endl;\
cout<<"Your saved game";\
cout<<endl;\
cout<<"CHARACTER: "<<mojaPostac.name<<" "<<"( "<<mojaPostac.plec<<" )"<<endl;\
cout<<"REGION: "<<"Weird House in snowy coast"<<endl;\
cout<<endl;\
    cout<< "Strength: current points " <<mojaPostac.sila<<endl;\
    cout<< "Health: current points " <<mojaPostac.hp<<endl;\
    cout<< "Intelligence: current points " <<mojaPostac.inteligencja<<endl;\
    cout<< "Charisma: current points " <<mojaPostac.charyzma<<endl;\
    cout<< "Unused points: "<<mojaPostac.exp<<endl;\
        cout<<endl;\
        cout<<"Confirm load ? "<<endl;\
\
        cout<<"1. Yes"<<endl;\
        cout<<"2. Exit"<<endl;\
\
            char wybor_potwierdzenie_wczytania;\
wybor_potwierdzenie_wczytania=getch();\
\
switch(wybor_potwierdzenie_wczytania)\
        \{\
            case '1':\{break;\}\
            case '2':\{return 0;\}\
        \}\
\
\
\}\
break;\}\
\
\
\
case '3':\{return 0;\}\
\}\
\
\
\
\
\
\
\
\
if (mojaPostac.kraina==0)\
\
\{\
\
\
\
\
    int x; //cos zupelnie nieznaczocego, uzywane jako wartosc dowolnego klawisza\
\
\
    //EKSPERYMENTY\
    //sndPlaySound("soundtrack.m4a",SND_ASYNC );\
    //PlaySound(("soundtrack.m4a"), NULL, SND_FILENAME);\
  //  PlaySound(TEXT("SystemStart"), NULL, SND_ALIAS);\
//PlaySound(TEXT("soundtrack.m4a"), NULL, SND_FILENAME | SND_ASYNC);\
//    PlaySound(TEXT("recycle.wav"), NULL, SND_soundtrack.m4a);\
\
mojaPostac.kraina=1;\
\
    cout << "Hello companion " << endl;\
    //Sleep (2000);\
    cout << "Let's start with creating your personality " << endl;\
    cout << "Press any key to continue... ";\
x=getch();\
system("cls");\
//cout<<endl;\
//Sleep (500);\
cout << "Press 1 or 2, whether you want to be a "<< endl;\
cout << "1. Man"<< endl;\
cout << "2. Woman"<< endl;\
\
char wybor_plci;\
wybor_plci=getch();\
\
switch (wybor_plci)\
\{\
case '1':\{mojaPostac.plec="Man";break;\}\
case '2':\{mojaPostac.plec="Woman";break;\}\
\}\
\
\
system("cls");\
\
cout <<"Great ";\
//if (mojaPostac.plec==1) \{cout<<"you're a Man";\} else\
    if (mojaPostac.plec=="Man") \{cout<<"you're a Man";\} else\
\
\{cout<<"you're a Woman";\}\
//Sleep (2500);\
cout<<endl;\
cout << "your decision will have impact on future gameplay ";\
cout<<endl;\
cout << "Press any key to continue... ";\
x=getch();\
system("cls");\
\
cout<<"Here you are, 10 slav points, you'll earn one additional each time you lvl up your character"<<endl;\
//Sleep (4000);\
cout<<"but for now, divide them wisely... "<<endl;\
cout<<endl;\
//Sleep (1500);\
cout<<"You got 10 slav points"<<endl;\
\
cout << "Press any key to continue... ";\
x=getch();\
system("cls");\
\
cout <<"You can choose from 4 statistics to divide your points, to do it, just press the number of the specified pool, point'll be added"<<endl;\
//Sleep (6000);\
cout<<endl;\
int exp;\
\
\
\
\
for (exp=10;exp>0;exp--)\
\
\{\
    if (exp<10) \{cout <<"You can choose from 4 statistics to divide your points, to do it, just press the number of the specified pool, point'll be added"<<endl;\
    cout<<endl;\}\
    cout<< "1. Strength: current points " <<mojaPostac.sila<<endl;\
    cout<< "2. Health: current points " <<mojaPostac.hp<<endl;\
    cout<< "3. Intelligence: current points " <<mojaPostac.inteligencja<<endl;\
    cout<< "4. Charisma: current points " <<mojaPostac.charyzma<<endl;\
    cout<< "Points left: "<<exp<<endl;\
    char wyborpool;\
    wyborpool=getch();\
\
    switch(wyborpool)\
    \{\
        case '1':\{mojaPostac.sila=mojaPostac.sila+1;break;\}\
        case '2':\{mojaPostac.hp=mojaPostac.hp+1;break;\}\
        case '3':\{mojaPostac.inteligencja=mojaPostac.inteligencja+1;break;\}\
        case '4':\{mojaPostac.charyzma=mojaPostac.charyzma+1;break;\}\
    \}\
    system("cls");\
\
\
\}\
if (mojaPostac.hp==0) \{cout<<"You have 0 hp, it means you are dead, try adding some the next time ;)";return 0;\}\
\
system("cls");\
cout<<"Your statistics have been saved"<<endl;\
cout<<endl;\
    cout<< "1. Strength: " <<mojaPostac.sila<<endl;\
    cout<< "2. Health: " <<mojaPostac.hp<<endl;\
    cout<< "3. Intelligence: " <<mojaPostac.inteligencja<<endl;\
    cout<< "4. Charisma: " <<mojaPostac.charyzma<<endl;\
\
\
//Sleep (500);\
cout<<endl;\
cout << "Press any key to continue... ";\
x=getch();\
system("cls");\
\
cout<<"Now it's time for your character name"<<endl;\
//Sleep (500);\
cout<<endl;\
cout<<"Type it below, then press enter"<<endl;\
cin>>mojaPostac.name;\
\
\
system("cls");\
\
cout<<"Hello "<<mojaPostac.name<<endl;\
//Sleep (500);\
cout<<"you're a "<<mojaPostac.plec<<" with statistics listed below"<<endl;\
cout<<endl;\
    cout<< "1. Strength: " <<mojaPostac.sila<<endl;\
    cout<< "2. Health: " <<mojaPostac.hp<<endl;\
    cout<< "3. Intelligence: " <<mojaPostac.inteligencja<<endl;\
    cout<< "4. Charisma: " <<mojaPostac.charyzma<<endl;\
    //Sleep (2000);\
cout<<endl;\
\
cout<<"Are you sure you want to start a game with this character ?"<<endl;\
\
\
cout<<"1. Yes"<<endl;\
cout<<"2. No"<<endl;\
\
char czy_chce_zaczac;\
czy_chce_zaczac=getch();\
\
\
switch (czy_chce_zaczac)\
\{\
case '1':\{system("cls");\
//Sleep (500);\
cout<<"Let's begin"<<endl;\
//Sleep (2000);\
break;\}\
case '2':\{system("cls");\
//Sleep (500);\
cout<<"..."<<endl;\
//Sleep (1000);\
cout<<"Well, then go play something else or start game again to create a new one"<<endl;\
//Sleep (5000);\
return 0;\}\
\}\
\
system("cls");\
cout<<"You woke up in a little room"<<endl;\
//Sleep (2000);\
cout<<"an unpleasant smell is in the air"<<endl;\
//Sleep (2000);\
cout<<"Your head hurts a lot, but you don't remember drinking yesterday"<<endl;\
//Sleep (2000);\
cout<<"It has been something else..."<<endl;\
//Sleep (2000);\
\
cout<<"Take a look around the room?"<<endl;\
\
\
\
cout<<"1. Yes"<<endl;\
cout<<"2. No, go to the door"<<endl;\
\
char decyzja_1;\
decyzja_1=getch();\
switch (decyzja_1)\
\{\
\
case '1':\{system("cls");cout<<"You have found a note, but it's wet and you can only see a little picture of a sickle and a hammer "<<endl;\
cout<<"between the soggy letters"<<endl;\
//Sleep (2000);\
cout<<"Take another look around the room?"<<endl;\
cout<<"1. Yes"<<endl;\
cout<<"2. No, go to the door"<<endl;\
char decyzja_2;\
decyzja_2=getch();\
switch (decyzja_2)\
        \{\
\
        case '1' :\{system("cls");cout<<"Looks like there's nothing else in the room, you just left "<<endl;\
        //Sleep (4500);\
        break;\}\
\
        case '2':\{system("cls");cout<<"You've opened the door, the sunlight reflecting off the enormous snow surface blinds you..."<<endl;break;\}\
\
        \}\
\
case '2':\{system("cls");cout<<"You've opened the door, the sunlight reflecting off the enormous snow surface blinds you..."<<endl;break;\}\
\
\}\
\
\
\
\}\
\
//Sleep (4500);\
system("cls");\
cout<<"Polar bear Appeared "<<endl;\
cout<<endl;\
cout<<"   ( )_____( )"<<endl;\
cout<<"    / O   O \\ "<<endl;\
cout<<"   |   (@)   |"<<endl;\
cout<<"   \\    ~    / "<<endl;\
 cout<<"   \\ <\}*\{> /   "<<endl;\
cout<<" ___/  ___  \\___"<<endl;\
cout<<"()___ /   \\ ___()"<<endl;\
cout<<"    ( \\___/ )"<<endl;\
 cout<<"  /_ /   \\ _\\""<<endl;\
cout<<"  (__)     (__) "<<endl;\
\
//Sleep (500);\
cout<<"It seems big and fearless"<<endl;\
\
cout << "Press any key to continue... ";\
x=getch();\
system("cls");\
int Opponent_hp=3;\
int ucieczka_check=0;\
while (Opponent_hp>0)\
\{\
\
if(mojaPostac.hp==0) \{cout<<"you died...";\
//Sleep (3000);\
return 0;\}\
\
cout<<endl;\
cout<<"   ( )_____( )"<<endl;\
cout<<"    / O   O \\ "<<endl;\
cout<<"   |   (@)   |"<<endl;\
cout<<"   \\    ~    / "<<endl;\
 cout<<"   \\ <\}*\{> /   "<<endl;\
cout<<" ___/  ___  \\___"<<endl;\
cout<<"()___ /   \\ ___()"<<endl;\
cout<<"    ( \\___/ )"<<endl;\
 cout<<"  /_ /   \\ _\\""<<endl;\
cout<<"  (__)     (__) "<<endl;\
\
cout<<"   Polar Bear"<<endl;\
cout<<"3 Strength / "<<Opponent_hp<<" Hp"<<endl<<endl;\
\
cout<<"What to do ?"<<endl;\
cout<<endl;\
cout<<"1.Fight      2.Talk"<<endl;\
cout<<"3.Pet        4.Escape"<<endl;\
\
char decyzja_3;\
decyzja_3=getch();\
switch (decyzja_3)\
\{\
\
    case '1' :\{system("cls");cout<<"When you fight your dmg will be equal to your strength + random number from 1-6, same with your opponent, if you win, opponent loses 1 hp, if opponent wins you lose 1";cout<<endl;\
    cout<<"your strength: "<<mojaPostac.sila<<endl;\
    cout<<"Opponent strength: 3"<<endl;\
    cout << "Press any key to begin fighting... ";\
    x=getch();\
    system("cls");\
    srand( time( NULL ) );\
    int Twoj_dmg;\
    int Opponent_dmg;\
    Twoj_dmg=mojaPostac.sila+rand()%6;\
    Opponent_dmg=3+rand()%6;\
cout<<"You dealt "<<Twoj_dmg<<endl;\
cout<<"Opponent dealt "<<Opponent_dmg<<endl;\
    cout<<endl;\
    if (Twoj_dmg>Opponent_dmg) \{cout<<"You won the fight, Opponent loses 1 hp";Opponent_hp=Opponent_hp-1;\}\
     if (Twoj_dmg<Opponent_dmg) \{cout<<"You lost the fight, you lose 1 hp";mojaPostac.hp=mojaPostac.hp-1;\}\
      if (Twoj_dmg==Opponent_dmg) \{cout<<"the fight ended in a draw, no one lost hp";\}\
      break;\
    \}\
\
    case '2' :\{system("cls");cout<<"The bear does not look very talkative...";\
    //Sleep (3000);\
    break;\}\
    case '3' :\{system("cls");cout<<"The bear seems to high to pet...";\
    //Sleep (3000);\
    break;\}\
    case '4' :\{system("cls");cout<<"When you escape, you have 50% chance to success in escaping, but when you fail, you loose 1 hp automatically"<<endl;\
    cout << "Press any key to escape... ";\
    x=getch();\
    system("cls");\
    srand( time( NULL ) );\
    int ucieczka=rand()%1;\
    if (ucieczka==0) \{system("cls");cout<<"You escaped...";Opponent_hp=0;ucieczka_check=1;break;\} else \{system("cls");cout<<"Escape failed, you lose 1 hp";mojaPostac.hp=mojaPostac.hp-1;break;\}\}\
    \}\
\
\
\
\
x=getch();\
system("cls");\
\
    \}\
\
\
int ucieczkaa=0;\
    if (ucieczka_check==1) \{cout<<"You gain 0 slav points..."<<endl<<"Yes you don't get slav points for escaping, try fighting the next time"<<endl;ucieczkaa=1;\}\
    if (ucieczka_check==0)\
    \{\
        cout<<endl;\
cout<<"   ( )_____( )"<<endl;\
cout<<"    / O   O \\ "<<endl;\
cout<<"   |   (@)   |"<<endl;\
cout<<"   \\    ~    / "<<endl;\
 cout<<"   \\ <\}*\{> /   "<<endl;\
cout<<" ___/  ___  \\___"<<endl;\
cout<<"()___ /   \\ ___()"<<endl;\
cout<<"    ( \\___/ )"<<endl;\
 cout<<"  /_ /   \\ _\\""<<endl;\
cout<<"  (__)     (__) "<<endl;\
\
\
Sleep (100);\
system("cls");\
cout<<endl;\
        cout<<endl;\
cout<<"   ( )_____( )"<<endl;\
cout<<"    / O   O \\ "<<endl;\
cout<<"   |   (@)   |"<<endl;\
cout<<"   \\    ~    / "<<endl;\
 cout<<"   \\ <\}*\{> /   "<<endl;\
cout<<" ___/  ___  \\___"<<endl;\
cout<<"()___ /   \\ ___()"<<endl;\
cout<<"    ( \\___/ )"<<endl;\
 cout<<"  /_ /   \\ _\\""<<endl;\
cout<<"  (__)     (__) "<<endl;\
\
Sleep (100);\
system("cls");\
\
        cout<<endl;\
cout<<"   ( )_____( )"<<endl;\
cout<<"    / X   X \\ "<<endl;\
cout<<"   |   (@)   |"<<endl;\
cout<<"   \\    ~    / "<<endl;\
 cout<<"   \\ <\}*\{> /   "<<endl;\
cout<<" ___/  ___  \\___"<<endl;\
cout<<"()___ /   \\ ___()"<<endl;\
cout<<"    ( \\___/ )"<<endl;\
 cout<<"  /_ /   \\ _\\""<<endl;\
cout<<"  (__)     (__) "<<endl;\
\
//Sleep (500);\
\
if (ucieczkaa=0)\
\{\
\
\
cout<<"You won, you gained 3 slav points"<<endl;mojaPostac.hp=mojaPostac.hp+3;\
\
\
\
\
    cout<<endl;\
    cout<<"Divide them now ?"<<endl;\
    cout<<"1. Yes"<<endl;\
    cout<<"2. Later"<<endl;\
\
\
char wybor5;\
wybor5=getch();\
\
    switch(wybor5)\
\
    \{\
       case '1':\
           \{\
system("cls");\
            for (exp=3;exp>0;exp--)\
\
\{\
\
\
    if (exp<4) \{cout <<"You can choose from 4 statistics to divide your points, to do it, just press the number of the specified pool, point'll be added"<<endl;\
    cout<<endl;\}\
    cout<< "1. Strength: current points " <<mojaPostac.sila<<endl;\
    cout<< "2. Health: current points " <<mojaPostac.hp<<endl;\
    cout<< "3. Intelligence: current points " <<mojaPostac.inteligencja<<endl;\
    cout<< "4. Charisma: current points " <<mojaPostac.charyzma<<endl;\
    cout<< "Points left: "<<exp<<endl;\
    char wyborpool;\
    wyborpool=getch();\
\
    switch(wyborpool)\
    \{\
        case '1':\{mojaPostac.sila=mojaPostac.sila+1;break;\}\
        case '2':\{mojaPostac.hp=mojaPostac.hp+1;break;\}\
        case '3':\{mojaPostac.inteligencja=mojaPostac.inteligencja+1;break;\}\
        case '4':\{mojaPostac.charyzma=mojaPostac.charyzma+1;break;\}\
    \}\
    system("cls");\
\
    \}\
\
    system("cls");\
cout<<"Your statistics have been saved"<<endl;\
cout<<endl;\
    cout<< "1. Strength: " <<mojaPostac.sila<<endl;\
    cout<< "2. Health: " <<mojaPostac.hp<<endl;\
    cout<< "3. Intelligence: " <<mojaPostac.inteligencja<<endl;\
    cout<< "4. Charisma: " <<mojaPostac.charyzma<<endl;\
\
\
break;\
           \}\
\
case '2': \{mojaPostac.exp=mojaPostac.exp+3;\
system("cls");\
cout<<"Your current slav points number is "<<mojaPostac.exp<<endl;\
cout<<"You can manage them from character menu later on"<<endl;\
break;\}\
\
    \}\
 \}\
\
\
\
//ZAPIS GRY\
\
cout<<"Do you want to save game now ?"<<endl;\
cout<<endl;\
\
cout<<"CHARACTER: "<<mojaPostac.name<<" "<<"( "<<mojaPostac.plec<<" )"<<endl;\
cout<<"REGION: "<<"Weird House in snowy coast"<<endl;\
cout<<endl;\
    cout<< "Strength: current points " <<mojaPostac.sila<<endl;\
    cout<< "Health: current points " <<mojaPostac.hp<<endl;\
    cout<< "Intelligence: current points " <<mojaPostac.inteligencja<<endl;\
    cout<< "Charisma: current points " <<mojaPostac.charyzma<<endl;\
    cout<< "Unused points: "<<mojaPostac.exp<<endl;\
\
    cout<<endl;\
cout<<"1. Save"<<endl;\
cout<<"2. Continue without saving "<<endl;\
\
\
mojaPostac.kraina=1;\
char save_1;\
    save_1=getch();\
\
    switch(save_1)\
    \{\
        case '1':\{fstream save;\
        save.open("save.txt",ios::out);\
        save<<mojaPostac.name<<endl;\
        save<<mojaPostac.plec<<endl;\
        save<<mojaPostac.kraina<<endl;\
        save<<mojaPostac.sila<<endl;\
        save<<mojaPostac.hp<<endl;\
        save<<mojaPostac.inteligencja<<endl;\
        save<<mojaPostac.charyzma<<endl;\
        save<<mojaPostac.exp<<endl;\
        system("cls");\
        cout<<"Game has been saved "<<endl;\
        cout<<endl;\
            cout << "Press any key to continue... ";\
x=getch();\
system("cls");\
    \}\
\
\
    case '2':\{system("cls");\}\
\
\
    \}\
 \}\
\
 \}\
\
 if (mojaPostac.kraina==1)\
 \{\
\
\
  //tworzenie planszy 20x20\
\
        string mapa[20][20];\
\
    for (int i=0;i<20;i++)\
\
    \{\
        for (int l=0;l<20;l++)\
        \{\
            mapa[i][l]="X";\
        \}\
    \}\
\
\
    //PRZEJSCIE POZIOME\
    for (int i=8;i<12;i++)\
\
    \{\
        for (int l=0;l<20;l++)\
        \{\
            mapa[i][l]=" ";\
        \}\
    \}\
//PRZEJSCIE PIONOWE\
   for (int l=8;l<12;l++)\
\
    \{\
        for (int i=0;i<20;i++)\
        \{\
            mapa[i][l]=" ";\
        \}\
    \}\
\
\
      //UZUPELNIENIE MAPY\
    for (int i=15;i<20;i++)\
\
    \{\
        for (int l=0;l<20;l++)\
        \{\
            mapa[i][l]="X";\
        \}\
    \}\
\
int x=10;\
int y=0;\
\
mapa[x][y]="A";\
\
\
\
\
\
\
\
    //WYSWIETLANIE MAPY\
       for (int i=0;i<20;i++)\
\
    \{\
        for (int l=0;l<20;l++)\
        \{\
            cout<<mapa[i][l];\
        \}\
        cout<<endl;\
    \}\
\
\
\
\
\
\
\
\
\
    char ruch;\
\
    for (;;)\
    \{\
\
\
ruch=getch();\
\
switch(ruch)\
\
\{\
\
    case 'd': \{system("cls");mapa[x][y]=" ";y=y+1;mapa[x][y]="A";\
    //WYSWIETLANIE MAPY\
       for (int i=0;i<20;i++)\
\
    \{\
        for (int l=0;l<20;l++)\
        \{\
            cout<<mapa[i][l];\
        \}\
        cout<<endl;\
    \}\}\
\
\
\
     case 'a': \{system("cls");mapa[x][y]=" ";y=y-1;mapa[x][y]="A";\
    //WYSWIETLANIE MAPY\
       for (int i=0;i<20;i++)\
\
    \{\
        for (int l=0;l<20;l++)\
        \{\
            cout<<mapa[i][l];\
        \}\
        cout<<endl;\
    \}\}\
\
\
     case 'w': \{system("cls");mapa[x][y]=" ";x=x-1;mapa[x][y]="A";\
    //WYSWIETLANIE MAPY\
       for (int i=0;i<20;i++)\
\
    \{\
        for (int l=0;l<20;l++)\
        \{\
            cout<<mapa[i][l];\
        \}\
        cout<<endl;\
    \}\}\
\
\
\
     case 's': \{system("cls");mapa[x][y]=" ";x=x+1;mapa[x][y]="A";\
    //WYSWIETLANIE MAPY\
       for (int i=0;i<20;i++)\
\
    \{\
        for (int l=0;l<20;l++)\
        \{\
            cout<<mapa[i][l];\
        \}\
        cout<<endl;\
    \}\}\
\
\
\}\
    \}\
\
\
\
 \}\
\
\
\
\
\
\
system("pause");\
\
\
\
    return 0;\
\}\
}