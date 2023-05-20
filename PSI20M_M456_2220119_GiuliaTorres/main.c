#include <stdio.h>
#include <stdlib.h>
//  Portugûes
#include <locale.h>

// menu direcional com w,a,s,d
#include <windows.h>
#include <ctype.h>

// Cores e formatação
#include <conio.c>

// Data e hora
#include <time.h>

// Files
#include "ascii.h"

//Aplicações
#include "aplicacoes.h"



void cinco() //contador de 5 segundos
{
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
}
void gotoxyy(int x,int y) //coordenadas
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int hora() //determina a data e hora (parâmetro para definir dia da semana)
{
    int passmovel, errada;
    struct tm *data_hora_atual;
    time_t segundos;
    int x=0,y=0;
    errada=0;
    do{
        time(&segundos);
        data_hora_atual = localtime(&segundos);
        if (data_hora_atual->tm_wday == 1){
            movelsegunda();
            x=90;y=15;
            gotoxyy(x,y);printf("%d/%d/%d",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
            x=92;y=16;
            gotoxyy(x,y);printf("%d:%d",data_hora_atual->tm_hour,data_hora_atual->tm_min);
            x=92;y=23;
            gotoxyy(x,y);scanf("%i",&passmovel);fflush(stdin);
        }
        else if (data_hora_atual->tm_wday == 2){
            movelterca();
            x=90;y=15;
            gotoxyy(x,y);printf("%d/%d/%d",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
            x=92;y=16;
            gotoxyy(x,y);printf("%d:%d",data_hora_atual->tm_hour,data_hora_atual->tm_min);
            x=92;y=23;
            gotoxyy(x,y);scanf("%i",&passmovel);fflush(stdin);
        }
        else if (data_hora_atual->tm_wday == 3){
            movelquarta();
            x=90;y=15;
            gotoxyy(x,y);printf("%d/%d/%d",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
            x=92;y=16;
            gotoxyy(x,y);printf("%d:%d",data_hora_atual->tm_hour,data_hora_atual->tm_min);
            x=92;y=23;
            gotoxyy(x,y);scanf("%i",&passmovel);fflush(stdin);
        }
        else if (data_hora_atual->tm_wday == 4){
            movelquinta();
            x=90;y=15;
            gotoxyy(x,y);printf("%d/%d/%d",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
            x=92;y=16;
            gotoxyy(x,y);printf("%d:%d",data_hora_atual->tm_hour,data_hora_atual->tm_min);
            x=92;y=23;
            gotoxyy(x,y);scanf("%i",&passmovel);fflush(stdin);
        }
        else if (data_hora_atual->tm_wday == 5){
            movelsexta();
            x=90;y=15;
            gotoxyy(x,y);printf("%d/%d/%d",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
            x=92;y=16;
            gotoxyy(x,y);printf("%d:%d",data_hora_atual->tm_hour,data_hora_atual->tm_min);
            x=92;y=23;
            gotoxyy(x,y);scanf("%i",&passmovel);fflush(stdin);
        }
        else if (data_hora_atual->tm_wday == 6){
            movelsabado();
            x=90;y=15;
            gotoxyy(x,y);printf("%d/%d/%d",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
            x=92;y=16;
            gotoxyy(x,y);printf("%d:%d",data_hora_atual->tm_hour,data_hora_atual->tm_min);
            x=92;y=23;
            gotoxyy(x,y);scanf("%i",&passmovel);fflush(stdin);
        }
        else{
            moveldomingo();
            x=90;y=15;
            gotoxyy(x,y);printf("%d/%d/%d",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
            x=92;y=16;
            gotoxyy(x,y);printf("%d:%d",data_hora_atual->tm_hour,data_hora_atual->tm_min);
            x=92;y=23;
            gotoxyy(x,y);scanf("%i",&passmovel);fflush(stdin);
        }
        if(passmovel!= 1234){
            system("cls");
            x=83;y=14;
            movel();gotoxyy(x,y);
            x=86;y=15;
            gotoxyy(x,y);printf("Senha inválida");
            errada++;
//            sleep(2);
            system("cls");
        }
        if(errada==5){
            errada=0;
            x=83;y=14;
            movel();gotoxyy(x,y);printf("Demasiadas tentativas...");//sleep(2);
            system("cls");
            movel();gotoxyy(x,y);printf("Aguarde 5 segundos");cinco();
            system("cls");
        }
        x=0;y=0;
    }while(passmovel!=1234);
}
int menu() //ecrã principal
{
    int x=83, y=14;
    char ch,enter,ent;
    j:
    while(1){      //usar as teclas w a s d
    system("cls");
    movelmenu();
    desenhocalculadora();
    desenhodaish();
    desenhoplug();
    desenhonotas();
    desenhorelogio();
    desenhosobre();
    gotoxyy(x,y);
    textcolor(WHITE);
    printf("__");
    textcolor(WHITE);
        ch = getch();
        if(ch == 'a'){
            x=x-20;
        }
        else if(ch =='d'){
            x=x+20;
        }
        else if(ch == 'w'){
            y=y-11;
        }
        else if(ch == 's'){
            y=y+11;
        }
        system("cls");
        movelmenu();
        desenhocalculadora();
        desenhodaish();
        desenhoplug();
        desenhonotas();
        desenhorelogio();
        desenhosobre();
        gotoxyy(x,y);
        textcolor(WHITE);
        printf("__");
        textcolor(WHITE);
        if(x==83 && y==14){
            if(ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                system("cls");
                relogio();
                x=94;y=39;
                gotoxyy(x,y);textcolor(RED);printf("_");textcolor(WHITE);
                x=95;y=39;
                gotoxyy(x,y);enter=getch();
                if(enter=='w' || enter=='a' || enter=='s' || enter=='d' ){
                    x=90;y=24;
                }
                else{
                    menu();
                }
            }
        }
        else if(x==103 && y==14){
            if(ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                system("cls");
                calculadora();
                sleep(5);
            }
        }
        else if(x==83 && y==25){
            if(ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                system("cls");
                daish();
                sleep(5);
            }
        }
        else if(x==103 && y==25){
            if(ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                system("cls");
                pluginc();
                sleep(5);
            }
        }
        else if(x==83 && y==36){
            if(ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                system("cls");
                notas();
                sleep(5);
            }
        }
        else if(x==103 && y==36){
            if(ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                system("cls");
                movelsobre();
                vermelhosobre();
                x=94;y=39;
                gotoxyy(x,y);textcolor(RED);printf("_");textcolor(WHITE);
                x=95;y=39;
                gotoxyy(x,y);ent=getch();
                x=83; y=14;
                goto j;
            }
        }
        else{}
    }
}

int main() // main
{
    setlocale(LC_ALL,"portuguese");
    sleep(5);
    hora();
    menu();
    return 0;
}
