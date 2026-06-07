#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#define VERDE  "\033[0;32m"
#define AMARELO "\033[0;33m"
#define VERMELHO "\033[0;31m"
#define AZUL "\033[34m"
#define CINZA "\033[90m"
#define RESET  "\033[0m"

    char barravida[20]={"| | | | | | | | | |",};

    char mapa[21][22]={
        "_____________________",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "#####################",
    };
    char victory[21][22]={
        "_____________________",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|    + + + + + +    |",
        "|    + VITORIA +    |",
        "|    +         +    |",
        "|    +  _A.A_  +    |",
        "|    +  \\{+}/  +    |",
        "|    +   :I:   +    |",
        "|    + + + + + +    |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "#####################",
    };
    char levelUp1[21][22]={
        "_____________________",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|    + + + + + +    |",
        "|   + LEVEL UP! +   |",
        "|   +           +   |",
        "|   +   _.A._   +   |",
        "|   +   '-+-'   +   |",
        "|   +    =!=    +   |",
        "|   + + + + + + +   |",
        "|                   |",
        "|      + VIDA       |",
        "|      + DANO       |",
        "|                   |",
        "|                   |",
        "|                   |",
        "#####################",
    };
    char levelUp2[21][22]={
        "_____________________",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|    + + + + + +    |",
        "|   + LEVEL UP! +   |",
        "|   +           +   |",
        "|   +   _A.A_   +   |",
        "|   +   \\{+}/   +   |",
        "|   +    :I:    +   |",
        "|   + + + + + + +   |",
        "|                   |",
        "|      + VIDA       |",
        "|      + DANO       |",
        "|    TIRO  DUPLO    |",
        "|                   |",
        "|                   |",
        "#####################",
    };

    char fim[9][18]={
    "XXXXXXXXXXXXXXXXX",
    " __   _        __",
    "| _  |_| |\\/| |_ ",
    "|__| | | |  | |__",
    " _        __  _  ",
    "| | |  | |_  |_| ",
    "|_|  \\/  |__ | \\ ",
    "                 ",
    "XXXXXXXXXXXXXXXXX",
    };
    char nivelum[7][18]={
    "            __   ",
    "|\\| | |  | |_  | ",
    "| | |  \\/  |__ |_",
    "                 ",
    "       /|        ",
    "       _|_       ",
    "-----------------",
    };
    char niveldois[7][18]={
    "            __   ",
    "|\\| | |  | |_  | ",
    "| | |  \\/  |__ |_",
    "        __       ",
    "        __|      ",
    "       |__       ",
    "-----------------",
    };
    char bossfight[9][18]={
    "X---------------X",
    "__    __   _   _ ",
    "|_!  |  | |_' |_'",
    "|__| !__! ._| ._|",
    " __    _      ___",
    "|_  | | _ |_|  | ",
    "|   | |_| | |  | ",
    "                 ",
    "X---------------X",
    };
    char bosssprite[6][20]={
    "\\    '\\ [=] /'    /",
    " |\\ :  '. .'  : /| ",
    " | |\\_  |I| __/| | ",
    " '='  V\\:_:/V  '=' ",
    "        | |        ",
    "        '='        ",
    };
    char deathbosssprite[19][20]={
    "+     + +++ +     +",
    " ++ +  +   +  + ++ ",
    " + ++   +++   ++ + ",
    " +++  +++ +++  +++ ",
    "        + +        ",
    "        +++        ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    "                   ",
    };

    char inicio[21][22]={//mapa 19,19, sem bordas
        "_____________________",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|     + SUPER +     |",//
        "|   + AIR ACTION +  |",
        "|     + 3000! +     |",
        "|         A         |",
        "|  ____^-/|\\-^____  |",
        "|  '+__|_:*:_|__+'  |",
        "|       __|__       |",
        "|       'v=v'       |",
        "|     * * * * *     |",//
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "|                   |",
        "#####################",
    //    -----  -----  -----
    //     -------  ------- 
    };

    char inimigo0[3][8]={ //3x5
        " ._. ",
        "-=|=-",
        "  V  ",
    };
        char boom0[3][8]={
            " +++ ",
            "+++++",
            "  +  ",
        };
    char inimigo1[3][8]={ //3x7
        "  =|=  ",
        "-=:|:=-",
        "  V'V  ",
    };
        char boom1[3][8]={
            "  +++  ",
            "+++++++",
            "  +++  ",
        };

    char aviao0[3][8]={//só se move para os lados./ 8,17
        " _A_ ",
        "/_!_\\",
        "  ^  ",
    };
        char boomviao0[3][8]={
            "  +  ",
            "+++++",
            "  +  ",
        };
    char aviao1[3][8]={
        "_.A._",
        "'-+-'",
        " =!= ",
    };
        char boomviao1[3][8]={
        "  +  ",
        "+++++",
        " +++ ",
        };
    char aviao2[3][8]={
        "_A.A_",
        "\\{+}/",
        " :I: ",
    };
        char boomviao2[3][8]={
        " + + ",
        "+++++",
        " +++ ",
        };

struct player{
    int x;
    int y;
    int vida;
    int vidaMax;
    int estado; //1.normal, 2.tomou dano, 3. morreu
    int altura, largura;
    char (*sprite)[8];
    char (*explosao)[8];
};
struct dano{
    int x;
    int y;
    int tipo;
    int direcao;
};
struct mobs{
    int x;
    int y;
    int vida;
    int vidaMax;
    int estado;  //1.vivo; 2. tomou dano; 3.explodindo; 4.morto
    int tempo;  //para explodir
    int cooldown;
    int tipo;
    int largura;
    int altura;
    int ataque;
    char (*sprite)[8];
    char (*explosao)[8];
    int tempo1;//para o boss
    int tempo2;//para o boss
};

struct player spawnPlayer0(){
    struct player novo;
    novo.x=8;
    novo.y=17;
    novo.vida=20;
    novo.vidaMax=20;
    novo.estado= 1;
    novo.altura= 3;
    novo.largura= 5;

    novo.sprite = aviao0;
    novo.explosao = boomviao0;

    return novo;
};
struct player spawnPlayer1(){
    struct player novo;
    novo.x=8;
    novo.y=17;
    novo.vida=30;
    novo.vidaMax=30;
    novo.estado= 1;
    novo.altura= 3;
    novo.largura= 5;

    novo.sprite= aviao1;
    novo.explosao= boomviao1;

    return novo;
};
struct player spawnPlayer2(){
    struct player novo;
    novo.x=8;
    novo.y=17;
    novo.vida=50;
    novo.vidaMax=50;
    novo.estado= 1;
    novo.altura= 3;
    novo.largura= 5;

    novo.sprite= aviao2;
    novo.explosao= boomviao2;

    return novo;
};
struct mobs spawnMob0 (){
    struct mobs novo;
    int i = rand()%3;
    int n;
    if(i==0){n=1;}
    if(i==1){n=8;}
    if(i==2){n=15;}
    novo.x= n;
    novo.y=-3;
    novo.vida=10;
    novo.estado=1;
    novo.tempo=5;
    novo.cooldown=10;
    novo.largura=5;
    novo.altura=3;

    novo.sprite = inimigo0;
    novo.explosao = boom0;

    return novo;
};
struct mobs spawnMob1 (){
    struct mobs novo;
    int i = rand()%2;
    int n;
    if(i==0){n=2;}
    if(i==1){n=11;}
    novo.x=n;
    novo.y=-3;
    novo.vida=15;
    novo.estado=1;
    novo.tempo=5;
    novo.cooldown=5;
    novo.largura=7;
    novo.altura=3;

    novo.sprite = inimigo1;
    novo.explosao = boom1;

    return novo;
};
struct mobs spawnboss (){
    struct mobs novo;
    novo.x=1;
    novo.y=1;
    novo.vida=100;
    novo.vidaMax=100;
    novo.estado=1;
    novo.ataque=1;//determina tipo de ataque atual
    novo.cooldown=10;//tempo entre cada projetil tipo 1
    novo.tempo1=60;//tempo em que ataque1 está ativo
    novo.tempo2=60;//tempo em que ataque2 está ativo
    return novo;
}

int main(){ 
    srand(time(NULL));
    int nivel = 1;


    if(nivel==1){//animações de inicialização
        for(int i=0; i<21; i++){printf("%s\n", inicio[i]);}//tela de inicio
            printf("\n");
            system("pause");
            system("cls");
        for(int i=0; i<21; i++){printf("%s\n", mapa[i]);}
            printf("\033[H");
            for(int y=0; y<21; y++){//tela de nivel 1
                for(int x=0; x<21; x++){
                    if(y>=7 && y<7+7 && x>=2 && x<2+17){
                        printf(AZUL "%c" RESET, nivelum[y-7][x-2]);
                        Sleep(10);
                    }
                    else{printf("%c", mapa[y][x]);}
                }
                printf("\n");
            }
            printf("\n");
            system("pause");
            system("cls");
    }
//------------------------------------------------VARIAVEIS-----------------------------------------
    int vitoria = 0;
    int gameover=0;
    int inicio= 1;//spawna o aviao do player
    int frames=0;

    struct mobs inim[10];
    struct player plane;
    struct mobs boss;
    struct dano projetil[100];// do player
    struct dano projetil0[100];//do inimigo
    struct dano projetilBoss[100];//do boss

    //DOS NIVEIS 1 E 2----------------------------
    int tiro=0;//gera projeteis do player

    int k=-1;//contador de tiro do player
    int k0= -1;//contador de tiros de mobs

    int morte=-1;// identifica qual mob morreu
    int cd=0;//identifica se o inimigo está pronto para disparar
    int s=-1;//sujeito que disparou
    int spawn = 1;//permite o spawn de inimigos

    int ataque = 0; // permite o spawn de mobs
    int contagem=0;//limita o máximo de mobs que aparecem por nivel, no total
    int kill=16; //conta as mortes
    int m=-1;//contador de mobs; limita a quantidade de mobs que podem existir ao mesmo tempo.

    
    //DO NIVEL 3------------------------------------
    int kB=-1;//contagem de projeteis boss 

//-------------------------------------------------------

    while(nivel <3){//--------------------------------------------------------------------------------------------
        
        //0. Os estados 2 voltam a ser estado 1;
        //1. Spawn de Player e novos Inimigos
        //2. Inimigos e Player se movimentam;
        //3. Projéteis são disparados e movimentados;
        //4. Verificação de colisão;
        //5. Alteração de estado das entidades;
        //6. Redistribuição de inimigos e projéteis no array;
        //7. Impressão;
        

        printf("\033[H");
        frames++;

        if(kill>=16 && nivel==1){//avanço para o nível dois
            Sleep(2000);
            nivel=2;
            kill=0;
            inicio=1;
            contagem=0;
            system("cls");
            for(int i=0; i<21; i++){printf("%s\n", mapa[i]);}
            printf("\033[H");
            for(int i=0; i<21; i++){printf("%s\n", levelUp1[i]);}
            system("pause");
            system("cls");
            for(int i=0; i<21; i++){printf("%s\n", mapa[i]);}
            printf("\033[H");
            for(int y=0; y<21; y++){
                for(int x=0; x<21; x++){
                    if(y>=7 && y<7+7 && x>=2 && x<2+17){
                        printf(AMARELO "%c" RESET, niveldois[y-7][x-2]);
                        Sleep(10);
                    }
                    else{printf("%c", mapa[y][x]);}
                }
                printf("\n");
            }
            printf("\n");
            system("pause");
            system("cls");
        }
        if(kill>=16 && nivel==2){//avanço para o nível três
            system("cls");
            for(int i=0; i<21; i++){printf("%s\n", levelUp2[i]);}
            system("pause");
            system("cls");
            nivel=3;
            Sleep(2000);
            break;
        }
        //0.
        for(int j=0; j<=m; j++){//resetar estado 2 de inimigo
            if(inim[j].estado==2){
                inim[j].estado=1;
            }
        }
        if(plane.estado==2){//reseta estado 2 de player
            plane.estado=1;
        }

        //1.
        if(frames%30==0){//intervalo de tempo entre e condição para spawn de mobs
            spawn=1;
        }
        if(inicio){ //spawn do player
            if(nivel==1) {plane=spawnPlayer0(); inicio=0;}
            if(nivel==2) {plane=spawnPlayer1(); inicio=0;}
        }
        if(spawn && m<6 && contagem<16){//spawn de inimigos
            m++;
            contagem++;
            switch(nivel){
                case 1:
                    inim[m]=spawnMob0();
                    inim[m].sprite = inimigo0;
                    inim[m].explosao = boom0;
                    spawn=0;
                    break;
                case 2:
                    inim[m]=spawnMob1();
                    inim[m].sprite = inimigo1;
                    inim[m].explosao = boom1;
                    spawn=0;
                    break;
            }
        }
        //2.
        if (_kbhit()){//movimentação de player
        char comando = _getch();
        if(comando=='a' && plane.x>1) plane.x--;
        if(comando=='d' && plane.x<15) plane.x++;
        if(comando=='k') tiro=1;
        }
        if(frames%5==0){//movimentação de inimigos
            for(int j=0; j<=m; j++){
                int block =0;
                    for(int i=0; i<=m; i++){
                        if(j==i){continue;}
                        if(inim[j].x==inim[i].x){
                            if(inim[j].y+4 == inim[i].y){
                                block=1;
                                break;
                            }
                        }
                    }
                if(!block && inim[j].y<7){
                    inim[j].y++;
                }
            }
        }

        //3.
        if(tiro){//spawn de projétil: player
            k++;
            projetil[k].x=plane.x+2;
            projetil[k].y=plane.y-1;
            tiro=0;
        }
        for(int j=0; j<=k; j++){ //movimento de projéteis: player
            projetil[j].y--;
        }
        if(cd){//spawn de projétil: inimigo
            if(nivel==1){
                k0++;
                projetil0[k0].x= inim[s].x + (inim[s].largura-1)/2;
                projetil0[k0].y= inim[s].y+3;
                inim[s].cooldown=50;
                cd=0;
            }
            if(nivel==2){
                k0++;
                projetil0[k0].x= inim[s].x + (inim[s].largura-1)/2 -1;
                projetil0[k0].y= inim[s].y+3;
                k0++;
                projetil0[k0].x= inim[s].x + (inim[s].largura-1)/2 +1;
                projetil0[k0].y= inim[s].y+3;               
                inim[s].cooldown=50;
                cd=0;
            }
        }
        for(int j=0; j<=k0; j++){//movimento de projéteis: inimigos
            projetil0[j].y++;
        }

        //4.
        for(int j=0; j<=k; j++){ //verificar colisão player -> inimigo
            for(int i=0; i<=m; i++){
                if(projetil[j].x>=inim[i].x && 
                    projetil[j].y>=inim[i].y && 
                    projetil[j].x<inim[i].x + inim[i].largura && 
                    projetil[j].y<inim[i].y + inim[i].altura){ //"se o projetil estiver dentro da area do inimigo:"
                    
                    inim[i].vida--;
                    inim[i].estado=2;//vai entrar em estado de dano
                    projetil[j].y=-10;//vai somir projetil
                }
            }
        }    
        for(int j=0; j<=k0; j++){ //verificar colisão inimigo -> player
            if(projetil0[j].x>=plane.x && projetil0[j].y>=plane.y &&
                projetil0[j].x<plane.x+plane.largura && projetil0[j].y<plane.y+plane.altura){
                    plane.vida--;
                    plane.estado=2;
                    projetil0[j].y=25;
            }
        }

        //5.
        for(int j=0; j<=m; j++){//estados dos inimigos
            switch(inim[j].estado){
                case 1: //vivo
                    if(inim[j].y>1){
                        inim[j].cooldown--;
                        if(inim[j].cooldown<=0){
                            s=j;
                            cd=1;
                        }
                    }
                    break;
                case 2:  //ferido
                    if(inim[j].vida<=0){
                        inim[j].estado=3;
                    }
                    break;
                case 3: //explodindo
                    inim[j].tempo--;
                    if(inim[j].tempo<0){
                        inim[j].estado=4;
                    }
                    break;
                case 4: morte=j; kill++; //morto
                    break;
            }
        }
        switch(plane.estado){//estado do player
            case 1: break;
            case 2: if(plane.vida<=0) {plane.estado=3;} break;
            case 3: gameover=1; break;
        }

        //6.
        if(morte>=0){//redistribuição de mobs
            for(int j=morte; j<m; j++){
                inim[j]=inim[j+1];
            }
            m--;
            morte=-1;
        }
        for(int j=0; j<=k0; j++){//redistribuir tiros (inimigo)
            if(projetil0[j].y>20){
                for(int i=j; i<k0; i++){
                    projetil0[i]=projetil0[i+1];
                }
                k0--;
            }
        }
        for(int j=0; j<=k; j++){//redistribuir tiros(player)
            if(projetil[j].y<0){
                for(int i=j; i<k; i++){
                    projetil[i]=projetil[i+1];
                }
                k--;
            }
        }
          
        if(gameover){
            break;
        }

        //7.
        for(int y=0; y<21; y++){//imprime linha
            for(int x=0; x<21; x++){//imprime caracteres da linha

                if(y>=plane.y && y<plane.y+plane.altura && x>=plane.x && x<plane.x+plane.largura){ //altura/largura
                    if(plane.estado==2){
                        printf(VERMELHO "%c" RESET, plane.sprite[y-plane.y][x-plane.x]);
                    }
                    else{
                        printf("%c", plane.sprite[y-plane.y][x-plane.x]);
                    }
                }
                else{
                    int imp=0; //sinal para "bloquear" a impressão de mapa se houver projétil ou mob

                    for(int j=0; j<=k; j++){//imprime projeteis
                        if(y==projetil[j].y && x==projetil[j].x){
                            printf("*");
                            imp=1;
                            break;
                        }
                    }
                    for(int j=0; j<=k0; j++){
                        if(y==projetil0[j].y && x==projetil0[j].x){
                            if(nivel==1){printf(VERMELHO "+" RESET);}
                            if(nivel==2){printf(VERMELHO "|" RESET);}
                            imp=1;
                            break;
                        }
                    }
                    if(!imp){
                        for(int j=0; j<=m; j++){//imprime inimigos0
                            if(y>=inim[j].y && 
                                y<inim[j].y + inim[j].altura && 
                                x>=inim[j].x && 
                                x<inim[j].x + inim[j].largura){

                                //se inimigo sofreu dano e não morreu:
                                if(inim[j].estado==2){
                                    printf(VERMELHO "%c" RESET, inim[j].sprite[y-inim[j].y][x-inim[j].x]);
                                }
                                //se inimigo está explodindo:
                                else if(inim[j].estado==3){
                                    printf(AMARELO "%c" RESET, inim[j].explosao[y-inim[j].y][x-inim[j].x]);
                                }
                                //se inimigo está vivo e não tomou dano
                                else if(inim[j].estado==1){
                                    printf("%c", inim[j].sprite[y-inim[j].y][x-inim[j].x]);
                                }
                                imp=1;
                                break;
                            }
                        }
                    }
                    if(!imp){
                        printf("%c", mapa[y][x]);
                    }
                }
            }//x
            printf("\n");
        }//y

        int n= plane.vida*20/plane.vidaMax;
        printf("\nNivel: %d", nivel);
        printf("\nVida: %d/%d ", plane.vida, plane.vidaMax);
            if(n>10){printf(VERDE"( %-20.*s)"RESET, n, barravida);}
            if(n<=10 && n>=6){printf(AMARELO"( %-20.*s)"RESET, n, barravida);}
            if(n<6){printf(VERMELHO"( %-20.*s)"RESET, n, barravida);}
        printf("\nBaixas: %d", kill);

    }//fim do while--------------------------------------------------------------------------
    system("cls");

    if(nivel==3){
        for(int i=0; i<21; i++){printf("%s\n", mapa[i]);}
        printf("\033[H");
        
        for(int y=0; y<21; y++){//escreve "boss fight"
            for(int x=0; x<21; x++){
                if(y>=5 && y<5+9 && x>=2 && x<2+17){
                    printf(VERMELHO "%c" RESET, bossfight[y-5][x-2]);
                    Sleep(10);
                }
                else{printf("%c", mapa[y][x]);}
            }
            printf("\n");
        }
        printf("\n");
        system("pause");
        system("cls");
        for(int i=0; i<21; i++){
            printf(CINZA "%s\n" RESET, mapa[i]);
        }
        int a=-6;
        while(a<=1){ //animação de descida
            printf("\033[H");
            for(int y=0; y<21; y++){
                for(int x=0; x<21; x++){
                    if(y<=0 && x>=1 && x<20){printf(" ");}
                    else if(y>=-6 && y<a+6 && x>=1 && x<1+19){
                        printf("%c", bosssprite[y-a][x-1]);
                    }
                    else{printf(CINZA "%c" RESET, mapa[y][x]);}
                }
                printf("\n");
            }
            a++;
            Sleep (1000);
        }

        inicio=1;
        ataque=1;
        k=0;
        boss=spawnboss();
        char comando;
        
        while(1){
            frames++;
            printf("\033[H");
            if(inicio){plane=spawnPlayer2(); inicio=0;}
            boss.cooldown--;

            if(boss.ataque==1){//duração do ataque 1
                boss.tempo1--;
                if(boss.tempo1<=0){boss.ataque=2; boss.tempo1=20;}
            }
            if(boss.ataque==2){//duração do ataque 2
                boss.tempo2--;
                if(boss.tempo2<=0){boss.ataque=1; boss.tempo2=20;}
            }

            if(boss.estado==2){boss.estado=1;}
            if(plane.estado==2){plane.estado=1;}

            if(boss.cooldown<=0){//cooldown dos projeteis 1
                ataque=1;//"alavanca"
                boss.cooldown=5;
            }

            if (_kbhit()){//movimentação de player
                comando = _getch();
                if(comando=='a' && plane.x>1) plane.x--;
                if(comando=='d' && plane.x<15) plane.x++;
                if(comando=='w' && plane.y>12) plane.y--;
                if(comando=='s' && plane.y<17) plane.y++;
                if(comando=='k') tiro=1;
            }

            if(tiro){//spawn de projétil: player
                k++;
                projetil[k].x=plane.x+1;
                projetil[k].y=plane.y-1;
                k++;
                projetil[k].x=plane.x+3;
                projetil[k].y=plane.y-1;
                tiro=0;
            }
            for(int j=0; j<=k; j++){ //movimento de projéteis: player
                projetil[j].y--;
            }
            
            if(ataque){//spawn de projeteis do boss
                kB++;
                projetilBoss[kB].x= 10;
                projetilBoss[kB].y= 6;
                projetilBoss[kB].tipo=1;
                if(boss.ataque==1){
                    kB++;
                    projetilBoss[kB].x= 3;
                    projetilBoss[kB].y= 4;
                    projetilBoss[kB].tipo=1;

                    kB++;
                    projetilBoss[kB].x= 17;
                    projetilBoss[kB].y= 4;
                    projetilBoss[kB].tipo=1;
                }
                if(boss.ataque==2){
                    if(frames%2==0){
                        kB++;
                        projetilBoss[kB].x= 3;
                        projetilBoss[kB].y= 4;
                        projetilBoss[kB].tipo=2;
                        projetilBoss[kB].direcao=1;
                    }
                    if(frames%2!=0){
                    kB++;
                    projetilBoss[kB].x= 17;
                    projetilBoss[kB].y= 4;
                    projetilBoss[kB].tipo=2;
                    projetilBoss[kB].direcao=2;
                    }
                }
                ataque=0;
            }
            for(int j=0; j<=kB; j++){//movimentação projetil BOSS
                if(projetilBoss[j].tipo==1){
                    projetilBoss[j].y++;
                }
                if(projetilBoss[j].tipo==2){
                    if(projetilBoss[j].direcao==1){
                        projetilBoss[j].x=projetilBoss[j].x+2; 
                        projetilBoss[j].y=projetilBoss[j].y+2;
                    }
                    if(projetilBoss[j].direcao==2){
                        projetilBoss[j].x=projetilBoss[j].x-2; 
                        projetilBoss[j].y=projetilBoss[j].y+2;
                    }
                }
            }

            for(int j=0; j<=k; j++){ //verificar colisão player -> inimigo
                if(projetil[j].y<=2){ 
                    
                    boss.vida--;
                    boss.estado=2;//vai entrar em estado de dano
                    projetil[j].y=-1;//vai sumir projetil
                    break;
                }
            }    
            for(int j=0; j<=kB; j++){//verificar colisão BOSS -> player
                if(projetilBoss[j].x>=plane.x && projetilBoss[j].y>=plane.y &&
                    projetilBoss[j].x<plane.x+plane.largura && projetilBoss[j].y<plane.y+plane.altura){
                        plane.vida= plane.vida-2;
                        plane.estado=2;
                        projetilBoss[j].y=25;
                }
            }

            switch(plane.estado){
                case 1: break;
                case 2: if(plane.vida<=0){plane.estado=3;} break;
                case 3: gameover=1; break;
            }
            switch(boss.estado){
                case 1: break;
                case 2: if(boss.vida<=0){boss.estado=3;} break;
                case 3: vitoria =1; break;
            }

            for(int j=0; j<=k; j++){//redistribuir tiros(player)
                if(projetil[j].y<0){
                    for(int i=j; i<k; i++){
                        projetil[i]=projetil[i+1];
                    }
                    k--;
                }
            }
            for(int j=0; j<=kB; j++){//redistribuir projeteis(BOSS)
                if(projetilBoss[j].y>21){
                    for(int i=j; i<kB; i++){
                        projetilBoss[i]=projetilBoss[i+1];
                    }
                    kB--;
                }
            }

            for(int y=0; y<21; y++){//imprime linha
            for(int x=0; x<21; x++){//imprime caracteres da linha
                    int imp=0; //sinal para "bloquear" a impressão de mapa se houver projétil ou mob

                    if(y>=plane.y && y<plane.y+3 && x>=plane.x && x<plane.x+5){ //imprime avião do player
                        if(plane.estado==2){
                            printf(VERMELHO "%c" RESET, aviao2[y-plane.y][x-plane.x]);
                        }
                        else{
                            printf("%c", aviao2[y-plane.y][x-plane.x]);
                        }
                        imp=1;
                    }
                    for(int j=0; j<=k; j++){//imprime projeteis do player
                        if(y==projetil[j].y && x==projetil[j].x){
                            printf("|");
                            imp=1;
                            break;
                        }
                    }
                    for(int j=0; j<=kB; j++){//imprime projeteis do Boss
                        if(y==projetilBoss[j].y && x==projetilBoss[j].x){
                            if(projetilBoss[j].tipo==1){printf(VERMELHO "|" RESET);}
                            if(projetilBoss[j].tipo==2){printf(VERMELHO "+" RESET);}
                            imp=1;
                            //break;
                        }
                    }
                    if(y>=1 && y<=6 && x>=1 && x<=19 && !imp){//imprime boss
                        if(boss.estado==1){
                            printf("%c", bosssprite[y-1][x-1]);
                        }
                        else if(boss.estado==2){
                            printf(VERMELHO "%c" RESET, bosssprite[y-1][x-1]);
                        }
                        imp=1;
                    }
                    if(!imp){//imprime o mapa
                        printf("%c", mapa[y][x]);
                    }
            }//x
            printf("\n");
        }//y
    
            int n= plane.vida*20/plane.vidaMax;
                printf("\nNivel: %d", nivel);
                printf("\nVida: %d/%d ", plane.vida, plane.vidaMax);
                    if(n>10){printf(VERDE"( %-20.*s)"RESET, n, barravida);}
                    if(n<=10 && n>=6){printf(AMARELO"( %-20.*s)"RESET, n, barravida);}
                    if(n<6){printf(VERMELHO"( %-20.*s)"RESET, n, barravida);}

            int l= boss.vida*20/boss.vidaMax;                
                printf("\nBoss: %d/%d ", boss.vida, boss.vidaMax);
                printf(VERMELHO"( %-20.*s)"RESET, l, barravida);

            if(gameover || vitoria){
                break;
            }
        
        }//fim do while
    }//fim do nivel 3
    system("cls");

    if(gameover){//animação de gameover
        int a=4;

        while(a>0){
            printf("\033[H");
            for(int y=0; y<21; y++){
                for(int x=0; x<21; x++){
                    if(y>=plane.y && y<plane.y+plane.altura && 
                        x>=plane.x && x<plane.x+plane.largura){

                        printf(AMARELO "%c" RESET, plane.explosao[y-plane.y][x-plane.x]);
                    }
                    else{printf(CINZA "%c" RESET, mapa[y][x]);}
                }
                printf("\n");
            }
                for(int y=plane.altura; y>0; y--){//linha
                    for(int x=0; x<plane.largura; x++){//caracteres
                        plane.explosao[y][x]=plane.explosao[y-1][x];
                        plane.explosao[y-1][x]=' ';
                    }
                }
            a--;
            Sleep (1000);
        }
        printf("\033[H");
        for(int y=0; y<21; y++){//tela de gameover
            for(int x=0; x<21; x++){
                if(y>=5 && y<5+9 && x>=2 && x<2+17){
                    printf(CINZA "%c" RESET, fim[y-5][x-2]);
                    Sleep(10);
                }
                else{printf(CINZA "%c" RESET, mapa[y][x]);}
            }
            printf("\n");
        }
    }
    if(vitoria){
        int largura1=19;
        int altura1=6;
        int linhaMax=5;//vai aumentar até o limite do mapa
        int linhaMin=5;//vai diminuir até 0
        int m=60;
        int temMais = 1;
        int numerodemais=0;

        for(int y=0; y<21; y++){//pause dramatica
            for(int x=0; x<21; x++){//coluna
                int imp=0;
                if(y>=plane.y && y<plane.y+3 && x>=plane.x && x<plane.x+5){ //altura/largura
                    printf(CINZA"%c"RESET, aviao2[y-plane.y][x-plane.x]);
                    imp=1;
                }
                if(y>0 && x>0 && y<=altura1 && x<=largura1 && !imp){
                    printf("%c", bosssprite[y-1][x-1]);
                    imp=1;
                }
                else if (!imp){
                    printf(CINZA"%c"RESET, mapa[y][x]);
                }
            }
            printf("\n");
        }
        Sleep(1000);
        printf("\033[H");
        for(int y=0; y<21; y++){//pause dramatica
            for(int x=0; x<21; x++){//coluna
                int imp=0;
                if(y>=plane.y && y<plane.y+3 && x>=plane.x && x<plane.x+5){ //altura/largura
                    printf(CINZA"%c"RESET, aviao2[y-plane.y][x-plane.x]);
                    imp=1;
                }
                if(y>0 && x>0 && y<=altura1 && x<=largura1 && !imp){
                    printf(AMARELO"%c"RESET, deathbosssprite[y-1][x-1]);
                    imp=1;
                }
                else if (!imp){
                    printf(CINZA"%c"RESET, mapa[y][x]);
                }
            }
            printf("\n");
        }
        Sleep(3000);
        while(m>0){//animação falling
            printf("\033[H");
            numerodemais=0;
            temMais=0;
            for(int i=0; i<19; i++){
                for(int j=linhaMax; j>linhaMin; j--){
                    if(deathbosssprite[j][i]=='+'){
                        deathbosssprite[j+1][i]=deathbosssprite[j][i];
                        deathbosssprite[j][i]=' ';
                    }
                }
            }
            for(int i=0; i<19; i++){
                if(deathbosssprite[linhaMin][i]=='+'){
                    deathbosssprite[linhaMin+1][i]=deathbosssprite[linhaMin][i];
                    deathbosssprite[linhaMin][i]=' ';
                    break;
                }
            }
            for(int i = 0; i < largura1; i++){
                if(deathbosssprite[linhaMin][i] == '+'){
                    temMais = 1;
                    break;
                }
            }
            for(int i = 0; i < largura1; i++){
                if(deathbosssprite[linhaMin][i] == '+'){
                    numerodemais++;
                }
            }
            if(temMais==0 && linhaMin>0){
                linhaMin--;
            }
            if(altura1<19){altura1++;}
            linhaMax++;
            for(int y=0; y<21; y++){//linha
                for(int x=0; x<21; x++){//coluna
                    int imp=0;
                    if(y>=plane.y && y<plane.y+3 && x>=plane.x && x<plane.x+5){ //altura/largura
                        printf(CINZA"%c"RESET, aviao2[y-plane.y][x-plane.x]);
                        imp=1;
                    }
                    if(y>0 && x>0 && y<=altura1 && x<=largura1 && !imp){
                        printf(AMARELO"%c"RESET, deathbosssprite[y-1][x-1]);
                        imp=1;
                    }
                    else if (!imp){
                        printf(CINZA"%c"RESET, mapa[y][x]);
                    }
                }
                printf("\n");
            }
            m--;
        }
        Sleep(2000);
        system("cls");
        for(int i=0; i<21; i++){
            printf("%s\n", victory[i]);
        }
        printf("\nParabens! Voce venceu.");
    }//vitoria

    return 0;
}