#ifndef APLICACOES_H_INCLUDED
#define APLICACOES_H_INCLUDED
#define celta 198
#define escher 100
#define grega 290
#define pc1 352
#define pc2 400
#define material1 10
#define material2 7.50

struct s_funcionario{
    char nome[20];
    char apelido[20];
    char justifica[100];
    char aprovado[20];
};
struct s_signin{
    char nomed[20];
    char apelidod[20];
    char usernamed[20];
    char moradad[100];
    int senhad;
    int datanascimentod;
};

int relogio()
{
    int x,y;
    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);

    //switch para horas
    switch(data_hora_atual->tm_hour){
        case 0:movel();n0d();doisp();break;
        case 1:movel();n1d();doisp();break;
        case 2:movel();n2d();doisp();break;
        case 3:movel();n3d();doisp();break;
        case 4:movel();n4d();doisp();break;
        case 5:movel();n5d();doisp();break;
        case 6:movel();n6d();doisp();break;
        case 7:movel();n7d();doisp();break;
        case 8:movel();n8d();doisp();break;
        case 9:movel();n9d();doisp();break;
        case 10:movel();n10d();doisp();break;
        case 11:movel();n11d();doisp();break;
        case 12:movel();n12d();doisp();break;
        case 13:movel();n1d();doisp();break;
        case 14:movel();n2d();doisp();break;
        case 15:movel();n3d();doisp();break;
        case 16:movel();n4d();doisp();break;
        case 17:movel();n5d();doisp();break;
        case 18:movel();n6d();doisp();break;
        case 19:movel();n7d();doisp();break;
        case 20:movel();n8d();doisp();break;
        case 21:movel();n9d();doisp();break;
        case 22:movel();n10d();doisp();break;
        case 23:movel();n11d();doisp();break;
        case 24:movel();n12d();doisp();break;
    }
    data_hora_atual = localtime(&segundos);

    //switch para minutos
    switch(data_hora_atual->tm_min){
        case 0:n0();break;
        case 1:n1();break;
        case 2:n2();break;
        case 3:n3();break;
        case 4:n4();break;
        case 5:n5();break;
        case 6:n6();break;
        case 7:n7();break;
        case 8:n8();break;
        case 9:n9();break;
        case 10:n10();break;
        case 11:n11();break;
        case 12:n12();break;
        case 13:n13();break;
        case 14:n14();break;
        case 15:n15();break;
        case 16:n16();break;
        case 17:n17();break;
        case 18:n18();break;
        case 19:n19();break;
        case 20:n20();break;
        case 21:n21();break;
        case 22:n22();break;
        case 23:n23();break;
        case 24:n24();break;
        case 25:n25();break;
        case 26:n26();break;
        case 27:n27();break;
        case 28:n28();break;
        case 29:n29();break;
        case 30:n30();break;
        case 31:n31();break;
        case 32:n32();break;
        case 33:n33();break;
        case 34:n34();break;
        case 35:n35();break;
        case 36:n36();break;
        case 37:n37();break;
        case 38:n38();break;
        case 39:n39();break;
        case 40:n40();break;
        case 41:n41();break;
        case 42:n42();break;
        case 43:n43();break;
        case 44:n44();break;
        case 45:n45();break;
        case 46:n46();break;
        case 47:n47();break;
        case 48:n48();break;
        case 49:n49();break;
        case 50:n50();break;
        case 51:n51();break;
        case 52:n52();break;
        case 53:n53();break;
        case 54:n54();break;
        case 55:n55();break;
        case 56:n56();break;
        case 57:n57();break;
        case 58:n58();break;
        case 59:n59();break;
    }

    //switch dia e data
    switch(data_hora_atual->tm_wday){
        case 0:x=84;y=23;gotoxyy(x,y);printf("Domingo, %i/%i/%i",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);break;
        case 1:x=84;y=23;gotoxyy(x,y);printf("Segunda-feira, %i/%i/%i",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);break;
        case 2:x=84;y=23;gotoxyy(x,y);printf("Terça-feira, %i/%i/%i",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);break;
        case 3:x=84;y=23;gotoxyy(x,y);printf("Quarta-feira, %i/%i/%i",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);break;
        case 4:x=84;y=23;gotoxyy(x,y);printf("Quinta-feira, %i/%i/%i",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);break;
        case 5:x=84;y=23;gotoxyy(x,y);printf("Sexta-feira, %i/%i/%i",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);break;
        case 6:x=84;y=23;gotoxyy(x,y);printf("Sábado, %i/%i/%i",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);break;
        default:printf("Erro");
    }


}
int calculadora()
{
    int x=82,y=29;
    int a=0;
    float vf=0,num1,num2;
    char ch,ent,enter;
    while(1){      //usar as teclas w a s d
            system("cls");
            movelcalculadora();
            desenhomultiplicacao();
            desenhosubtracao();
            desenhodivisao();
            desenhosoma();
            desenholetracalculadora();
            x=90;y=8;
            gotoxyy(x,y);scanf("%f",&num1);fflush(stdin);
            x=82;y=29;
            do{
                system("cls");
                movelcalculadora();
                desenhomultiplicacao();
                desenhosubtracao();
                desenhodivisao();
                desenhosoma();
                desenholetracalculadora();
                gotoxyy(x,y);
                textcolor(RED);
                printf("__");
                textcolor(WHITE);
                ch = getch();
                    if(ch == 'a'){
                        x=x-23;
                    }
                    else if(ch =='d'){
                        x=x+23;
                    }
                    else if(ch == 'w'){
                        y=y-6;
                    }
                    else if(ch == 's'){
                        y=y+6;
                    }
                    else{}
                system("cls");
                movelcalculadora();
                desenhomultiplicacao();
                desenhosubtracao();
                desenhodivisao();
                desenhosoma();
                desenholetracalculadora();
                gotoxyy(x,y);
                textcolor(RED);
                printf("__");
                textcolor(WHITE);
            }while(ch=='w' || ch=='a' || ch=='s' || ch=='d' );

            //Multiplicação
            if(x==82 && y==29 && ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                x=90;y=8;
                gotoxyy(x,y);printf("%f",num1);
                x=92;y=9;
                gotoxyy(x,y);printf("X");
                x=94;y=10;
                gotoxyy(x,y);scanf("%f",&num2);fflush(stdin);
                vf=num1*num2;
                system("cls");
                movelcalculadora();
                desenhomultiplicacao();
                desenhosubtracao();
                desenhodivisao();
                desenhosoma();
                desenholetracalculadora();
                x=92;y=10;
                gotoxyy(x,y);printf("%.5f",vf);
                ent= getch();
            }
            else{}

            // Subtração
            if(x==82 && y==35 && ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                x=90;y=8;
                gotoxyy(x,y);printf("%f",num1);
                x=92;y=9;
                gotoxyy(x,y);printf("-");
                x=94;y=10;
                gotoxyy(x,y);scanf("%f",&num2);fflush(stdin);
                vf=num1-num2;
                system("cls");
                movelcalculadora();
                desenhomultiplicacao();
                desenhosubtracao();
                desenhodivisao();
                desenhosoma();
                desenholetracalculadora();
                x=92;y=9;
                gotoxyy(x,y);printf("%.5f",vf);
                ent= getch();
                }
            else{}

            // Divisão
            if(x==105 && y==29 && ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                x=90;y=8;
                gotoxyy(x,y);printf("%f",num1);
                x=92;y=9;
                gotoxyy(x,y);printf(":");
                x=94;y=10;
                gotoxyy(x,y);scanf("%f",&num2);fflush(stdin);
                vf=num1/num2;
                system("cls");
                movelcalculadora();
                desenhomultiplicacao();
                desenhosubtracao();
                desenhodivisao();
                desenhosoma();
                desenholetracalculadora();
                x=92;y=9;
                gotoxyy(x,y);printf("%.5f",vf);
                ent= getch();
                }
            else{}

            // Soma
            if(x==105 && y==35 && ch!='w' && ch!='s' && ch!='a' && ch!='d'){
                x=90;y=8;
                gotoxyy(x,y);printf("%f",num1);
                x=92;y=9;
                gotoxyy(x,y);printf("+");
                x=94;y=10;
                gotoxyy(x,y);scanf("%f",&num2);fflush(stdin);
                vf=num1+num2;
                system("cls");
                movelcalculadora();
                desenhomultiplicacao();
                desenhosubtracao();
                desenhodivisao();
                desenhosoma();
                desenholetracalculadora();
                x=92;y=9;
                gotoxyy(x,y);printf("%.5f",vf);
                ent= getch();
                }
            else{}

            // Parâmetro para saida
            x=94;y=39;
            gotoxyy(x,y);textcolor(RED);printf("_");textcolor(WHITE);
            x=95;y=39;
            gotoxyy(x,y);enter=getch();
            if(enter=='w' || enter=='a' || enter=='s' || enter=='d' ){
                x=82;y=29;
            }
            else{
                menu();
            }
        }

}
int notas()
{
    int x=85,y=19;
    char texto[200][50],teste[200],ch,ch2,enter;
    int a,i;
    system("cls");
    FILE * notas;
    movelnotas();
    titulonotas();
    x=73;y=10;gotoxyy(x,y);textcolor(BROWN);printf("Seja bem-vindo(a) ao seu bloco de notas!!!");textcolor(WHITE);
    x=73;y=11;gotoxyy(x,y);printf("Para a melhor utilização do mesmo deixamos ");
    x=73;y=12;gotoxyy(x,y);printf("aqui algumas remoendações:");
    x=73;y=13;gotoxyy(x,y);printf("\t-Para posicionar frases na");
    x=73;y=14;gotoxyy(x,y);printf("\tmesma linha utilize ""_"" ou ""."" ");
    x=73;y=15;gotoxyy(x,y);printf("\tTente sempre não ultrapassar os");
    x=73;y=16;gotoxyy(x,y);printf("\tlimites do ecrã");
    x=73;y=17;gotoxyy(x,y);textcolor(BROWN);printf("APROVEITE ;)");textcolor(WHITE);
    ch=getch();
    x=85;y=19;
    while(1){      //usar as teclas w a s d
        system("cls");
        movelnotasmenu();
        titulonotas();
        gotoxyy(x,y);
        textcolor(BROWN);
        printf("-->");
        textcolor(WHITE);
        ch = getch();
        if(ch == 'w'){
            y=y-5;
        }
        else if(ch == 's'){
            y=y+5;
        }
        else{}
        system("cls");
        movelnotasmenu();
        titulonotas();
        gotoxyy(x,y);
        textcolor(BROWN);
        printf("-->");
        textcolor(WHITE);

        //ler/escrever
        if(x==85 && y==19 && ch!='w' && ch!='s'){
          notasescrever();
        }

        // Exluir e sair
        if(x==85 && y==24 && ch!='w' ){
                ch=getch();
                if(ch=='s'){            //Sair
                system("cls");
                movelnotasmenu();
                titulonotas();
                x=94;y=39;
                gotoxyy(x,y);textcolor(RED);printf("_");textcolor(WHITE);
                x=95;y=39;
                gotoxyy(x,y);enter=getch();
                if(enter=='w' || enter=='a' || enter=='s' || enter=='d' ){
                    x=85;y=19;
                }
                else{
                    menu();
                }
            }
            notas=fopen("notas.txt","w");
            notas=fclose;
            x=73;y=14;gotoxyy(x,y);printf("A excluir");cinco();
            x=85;y=19;
        }

    }
}
int notasescrever()
{
    int x=85,y=19;
    char texto[200][50],teste[200],ch,ch2;
    FILE * notas;
    while(1){
        system("cls");
        movelnotas();
        notas=fopen("notas.txt","a");
        x=73;y=14;gotoxyy(x,y);gets(texto);
        fprintf(notas,"%s\n",texto);
        fclose(notas);
        system("cls");
        movelnotas();
        notas=fopen("notas.txt","r");
        y=10;
        do{
            fscanf(notas,"%s",&teste);fflush(stdin);
            x=73;y=y+1;gotoxyy(x,y);printf("%s ",teste);
            if(y>=35){
                ch=getch();
                y=10;
                system("cls");
                movelnotas();
                do{
                    fscanf(notas,"%s",&teste);fflush(stdin);
                    x=73;y=y+1;gotoxyy(x,y);printf("%s ",teste);
                }while(!feof(notas));
            }
            else{}
        }while(!feof(notas));
        fclose(notas);
        ch2= getch();
  }
}
int pluginc()
{
    struct s_funcionario funcionario[12];
    char ch,ch2,enter;
    char login[20],user[20]="adm";
    char ap[20]="Aprovado",rp[20]="Reprovado";
    int senha,pass;
    int x,y,a;
    pass=1234;

    //Validação de credenciais
    do{
        system("cls");
        movelplugmenu();
        loginplug();
        x=90;y=20;
        gotoxyy(x,y);gets(login);
        x=90;y=23;
        gotoxyy(x,y);scanf("%i",&senha);fflush(stdin);
        if(senha!=pass || strcmp(user,login)!=0){
            system("cls");
            movel();
            x=76;y=14;gotoxyy(x,y);printf("Credenciais inválidas tente novamente.");sleep(4);
        }
        else{}
    }while(senha!=pass || strcmp(user,login)!=0);
    x=80;y=18;
    v:
    while(1){      //usar as teclas w a s d
        system("cls");
        movelplugescolhas();
        tituloplug();
        gotoxyy(x,y);
        textcolor(BLUE);
        printf("|_|");
        textcolor(WHITE);
        ch = getch();
        if(ch == 'w'){
            y=y-5;
        }
        else if(ch == 's'){
            y=y+5;
        }
        else{}
        system("cls");
        movelplugescolhas();
        tituloplug();
        gotoxyy(x,y);
        textcolor(BLUE);
        printf("|_|");
        textcolor(WHITE);

        // Justificar
        if(x==80 && y==18 && ch!='w' && ch!='s'){
            for(a=0;a<11;a=a){
                f:
                system("cls");
                movelplugjustifica();
                titulojustifica();
                boneco();
                x=98;y=17;
                gotoxyy(x,y);gets(funcionario[a].nome);
                x=101;y=19;
                gotoxyy(x,y);gets(funcionario[a].apelido);
                x=100;y=21;
                gotoxyy(x,y);printf("%i",a+1);
                x=105;y=23;
                gotoxyy(x,y);gets(funcionario[a].justifica);
                x=83;y=31;
                while(1){      //usar as teclas w a s d
                    system("cls");
                    movelplugjustifica();
                    titulojustifica();
                    boneco();
                    gotoxyy(x,y);
                    textcolor(BLUE);
                    printf("->");
                    textcolor(WHITE);
                    ch = getch();
                    if(ch == 'a'){
                        x=83;y=31;
                    }
                    else if(ch == 'd'){
                        x=99;y=31;
                    }
                    else{}
                    system("cls");
                    movelplugjustifica();
                    titulojustifica();
                    boneco();
                    gotoxyy(x,y);
                    textcolor(BLUE);
                    printf("->");
                    textcolor(WHITE);
                    if(x==83 && y==31 && ch!='d' && ch!='a'){
                        strcpy(funcionario[a].aprovado,ap);
                        if(a==11){
                            x=80;y=18;
                            goto v;
                        }
                        else{
                            a++;
                            goto f;
                        }
                    }
                    if(x==99 && y==31 && ch!='d' && ch!='a'){
                        strcpy(funcionario[a].aprovado,rp);
                        if(a==11){
                            x=80;y=18;
                            goto v;
                        }
                        else{
                            a++;
                            goto f;
                        }
                    }
                }
            }
        }

        // Visualizar
        if(x==80 && y==23 && ch!='w'){
            ch=getch();
            if(ch=='s'){
                system("cls");
                movelplugescolhas();
                tituloplug();
                x=94;y=39;
                gotoxyy(x,y);textcolor(RED);printf("_");textcolor(WHITE);
                x=95;y=39;
                gotoxyy(x,y);enter=getch();
                if(enter=='w' || enter=='a' || enter=='s' || enter=='d' ){
                    x=80;y=18;
                    goto v;
                }
                else{
                    menu();
                }
            }
            for(a=0;a<12;a=a){
                system("cls");
                movelplugfuncionarios();
                x=96;y=6;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].nome);textcolor(WHITE);
                x=99;y=8;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].apelido);textcolor(WHITE);
                x=97;y=10;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].aprovado);textcolor(WHITE);
                a++;
                x=96;y=14;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].nome);textcolor(WHITE);
                x=99;y=16;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].apelido);textcolor(WHITE);
                x=97;y=18;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].aprovado);textcolor(WHITE);
                a++;
                x=96;y=23;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].nome);textcolor(WHITE);
                x=99;y=25;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].apelido);textcolor(WHITE);
                x=97;y=27;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].aprovado);textcolor(WHITE);
                a++;
                x=96;y=32;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].nome);textcolor(WHITE);
                x=99;y=34;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].apelido);textcolor(WHITE);
                x=97;y=36;
                gotoxyy(x,y);textcolor(BLUE);printf("%s",funcionario[a].aprovado);textcolor(WHITE);
                a++;
                x=111;y=37;
                gotoxyy(x,y);textcolor(BLUE);printf("->");textcolor(WHITE);
                x=112;y=37;
                gotoxyy(x,y);enter=getch();

            }
           x=80;y=18;
        }
    }
}
int daish()
{
    FILE *nomed,*apelidod,*usernamed,*moradad,*senhad,*datanascimentod;
    struct s_signin signin;
    int x,y,pass;
    char ch,user[20],enter;
    float vf=0;
    x=90;y=24;
    while(1){      //usar as teclas w a s d
        d:
        system("cls");
        moveldaishmenu();
        titulodaish();
        gotoxyy(x,y);
        textcolor(MAGENTA);
        printf("»");
        textcolor(WHITE);
        ch = getch();
        if(ch == 'w'){
            y=y-3;
        }
        else if(ch == 's'){
            y=y+3;
        }
        else{}
        system("cls");
        moveldaishmenu();
        titulodaish();
        gotoxyy(x,y);
        textcolor(MAGENTA);
        printf("»");
        textcolor(WHITE);

        // Guardar informações
        if(x==90 && y==24 && ch!='w' && ch!='s'){
            nomed=fopen("nomed.txt","w");
            apelidod=fopen("apelidod.txt","w");
            moradad=fopen("moradad.txt","w");
            usernamed=fopen("usernamed.txt","w");
            senhad=fopen("senhad.txt","w");
            datanascimentod=fopen("datanascimentod.txt","w");
            system("cls");
            moveldaishsignin();
            signindaish();
            x=86;y=16;gotoxyy(x,y);gets(signin.nomed);
            x=89;y=19;gotoxyy(x,y);gets(signin.apelidod);
            x=88;y=22;gotoxyy(x,y);gets(signin.moradad);
            x=90;y=25;gotoxyy(x,y);gets(signin.usernamed);
            x=87;y=28;gotoxyy(x,y);scanf("%i",&signin.senhad);fflush(stdin);
            x=100;y=31;gotoxyy(x,y);scanf("%i",&signin.datanascimentod);fflush(stdin);
            fprintf(nomed,"%s",signin.nomed);
            fprintf(apelidod,"%s",signin.apelidod);
            fprintf(moradad,"%s",signin.moradad);
            fprintf(usernamed,"%s",signin.usernamed);
            fprintf(senhad,"%i",signin.senhad);
            fprintf(datanascimentod,"%i",signin.datanascimentod);
            system("cls");
            movel();
            x=80;y=15;
            gotoxyy(x,y);printf("Dados atualizados com sucesso!!!\n");
            x=86;y=16;
            gotoxyy(x,y);cinco();
            x=90;y=24;
            sleep(5);
            fclose(nomed);
            fclose(apelidod);
            fclose(usernamed);
            fclose(moradad);
            fclose(senhad);
            fclose(datanascimentod);

        }
        // Remover e sair
        if(x==90 && y==27 && ch!='w'){
            ch=getch();
            if(ch=='s'){    // Sair
                system("cls");
                moveldaishescolha();
                menudaish();
                x=94;y=39;
                gotoxyy(x,y);textcolor(RED);printf("_");textcolor(WHITE);
                x=95;y=39;
                gotoxyy(x,y);enter=getch();
                if(enter=='w' || enter=='a' || enter=='s' || enter=='d' ){
                    x=90;y=24;
                    goto d;
                }
                else{
                    menu();
                }
            }
            while(1){
                // validação de credenciais
                usernamed=fopen("usernamed.txt","r");
                senhad=fopen("senhad.txt","r");
                system("cls");
                movelplugmenu();
                logindaish();
                x=90;y=20;
                gotoxyy(x,y);gets(user);
                x=90;y=23;
                gotoxyy(x,y);scanf("%i",&pass);fflush(stdin);

                //Senha errada
                if(pass!=fscanf(senhad,"%i",&signin.senhad) && strcmp(user,fscanf(usernamed,"%s",&signin.usernamed))!=0){
                    //system("cls");
                    printf("Credenciais inválidas");
                    sleep(4);
                }
                //Senha certa
                else {
//------------------------------------------------------------------------------------------------------------------------
        //voltar aqui
                    m:
                    x=88;y=24;
                    while(1){
                        system("cls");
                        moveldaishescolha();
                        menudaish();
                        gotoxyy(x,y);
                        textcolor(MAGENTA);
                        printf("»");
                        textcolor(WHITE);
                        ch = getch();
                        if(ch == 'w'){
                            y=y-4;
                        }
                        else if(ch == 's'){
                            y=y+4;
                        }
                        else{}
                        system("cls");
                        moveldaishescolha();
                        menudaish();
                        gotoxyy(x,y);
                        textcolor(MAGENTA);
                        printf("»");
                        textcolor(WHITE);
//--------------------------------------------------------------------------------------------------------------------------
                        //Entrar em computadores
                        if(x==88 && y==20 && ch!='w' && ch!='s'){
                           x=88;y=33;
                           while(1){
                                system("cls");
                                moveldaishcomputador1();
                                gotoxyy(x,y);
                                textcolor(MAGENTA);
                                printf("-->");
                                textcolor(WHITE);
                                ch = getch();
                                if(ch == 'w'){
                                    x=88;y=33;
                                }
                                else if(ch == 's'){
                                    x=112;y=36;
                                }
                                else{}
                                system("cls");
                                moveldaishcomputador1();
                                gotoxyy(x,y);
                                textcolor(MAGENTA);
                                printf("-->");
                                textcolor(WHITE);
                                if(x==88 && y==33 && ch!='w' && ch!='s'){
                                    vf=vf+pc1;
                                    system("cls");
                                    movel();
                                    x=80;y=16;gotoxyy(x,y);printf("Produto adicionado com succeso");
                                    sleep(2);
                                }
                                if(x==112 && y==36 && ch!='w' && ch!='s'){
                                        while(1){
                                        system("cls");
                                        moveldaishcomputador2();
                                        gotoxyy(x,y);
                                        textcolor(MAGENTA);
                                        printf("-->");
                                        textcolor(WHITE);
                                        ch = getch();
                                        if(ch == 'w'){
                                            x=88;y=33;
                                        }
                                        else if(ch == 's'){
                                            x=112;y=36;
                                        }
                                        else{}
                                        system("cls");
                                        moveldaishcomputador2();
                                        gotoxyy(x,y);
                                        textcolor(MAGENTA);
                                        printf("-->");
                                        textcolor(WHITE);
                                        if(x==88 && y==33 && ch!='w' && ch!='s'){
                                            vf=vf+pc2;
                                            system("cls");
                                            movel();
                                            x=80;y=16;gotoxyy(x,y);printf("Produto adicionado com succeso");
                                            sleep(2);
                                        }
                                        if(x==112 && y==36 && ch!='w' && ch!='s'){
                                            goto m;
                                        }
                                        else{}
                                    }
                                }
                           }
                        }
//-------------------------------------------------------------------------------------------------------------------------------
                        //Entrar em ferramentas
                        else if(x==88 && y==24 && ch!='w' && ch!='s'){
                           x=88;y=33;
                           while(1){
                                system("cls");
                                moveldaishmaterial1();
                                gotoxyy(x,y);
                                textcolor(MAGENTA);
                                printf("-->");
                                textcolor(WHITE);
                                ch = getch();
                                if(ch == 'w'){
                                    x=88;y=33;
                                }
                                else if(ch == 's'){
                                    x=112;y=36;
                                }
                                else{}
                                system("cls");
                                moveldaishmaterial1();
                                gotoxyy(x,y);
                                textcolor(MAGENTA);
                                printf("-->");
                                textcolor(WHITE);
                                if(x==88 && y==33 && ch!='w' && ch!='s'){
                                    vf=vf+material1;
                                    system("cls");
                                    movel();
                                    x=80;y=16;gotoxyy(x,y);printf("Produto adicionado com succeso");
                                    sleep(2);
                                }
                                if(x==112 && y==36 && ch!='w' && ch!='s'){
                                        while(1){
                                        system("cls");
                                        moveldaishmaterial2();
                                        gotoxyy(x,y);
                                        textcolor(MAGENTA);
                                        printf("-->");
                                        textcolor(WHITE);
                                        ch = getch();
                                        if(ch == 'w'){
                                            x=88;y=33;
                                        }
                                        else if(ch == 's'){
                                            x=112;y=36;
                                        }
                                        else{}
                                        system("cls");
                                        moveldaishmaterial2();
                                        gotoxyy(x,y);
                                        textcolor(MAGENTA);
                                        printf("-->");
                                        textcolor(WHITE);
                                        if(x==88 && y==33 && ch!='w' && ch!='s'){
                                            vf=vf+material2;
                                            system("cls");
                                            movel();
                                            x=80;y=16;gotoxyy(x,y);printf("Produto adicionado com succeso");
                                            sleep(2);
                                        }
                                        if(x==112 && y==36 && ch!='w' && ch!='s'){
                                            goto m;
                                        }
                                        else{}
                                    }
                                }
                           }
                        }
//----------------------------------------------------------------------------------------------------------------------------
                        //Entrar em esculturas
                        else if(x==88 && y==28 && ch!='w' && ch!='s'){
                            x=88;y=33;
                            while(1){
                                system("cls");
                                moveldaishcelta();
                                gotoxyy(x,y);
                                textcolor(MAGENTA);
                                printf("-->");
                                textcolor(WHITE);
                                ch = getch();
                                if(ch == 'w'){
                                    x=88;y=33;
                                }
                                else if(ch == 's'){
                                    x=112;y=36;
                                }
                                else{}
                                system("cls");
                                moveldaishcelta();
                                gotoxyy(x,y);
                                textcolor(MAGENTA);
                                printf("-->");
                                textcolor(WHITE);
                                if(x==88 && y==33 && ch!='w' && ch!='s'){
                                    vf=vf+celta;
                                    system("cls");
                                    movel();
                                    x=80;y=16;gotoxyy(x,y);printf("Produto adicionado com succeso");
                                    sleep(2);
                                }
                                if(x==112 && y==36 && ch!='w' && ch!='s'){
                                        while(1){
                                        system("cls");
                                            moveldaishescher();
                                            gotoxyy(x,y);
                                            textcolor(MAGENTA);
                                            printf("-->");
                                            textcolor(WHITE);
                                            ch = getch();
                                            if(ch == 'w'){
                                                x=88;y=33;
                                            }
                                            else if(ch == 's'){
                                                x=112;y=36;
                                            }
                                            else{}
                                            system("cls");
                                            moveldaishescher();
                                            gotoxyy(x,y);
                                            textcolor(MAGENTA);
                                            printf("-->");
                                            textcolor(WHITE);
                                            if(x==88 && y==33 && ch!='w' && ch!='s'){
                                                vf=vf+escher;
                                                system("cls");
                                                movel();
                                                x=80;y=16;gotoxyy(x,y);printf("Produto adicionado com succeso");
                                                sleep(2);
                                            }
                                            if(x==112 && y==36 && ch!='w' && ch!='s'){
                                                while(1){
                                                    system("cls");
                                                    moveldaishgrega();
                                                    gotoxyy(x,y);
                                                    textcolor(MAGENTA);
                                                    printf("-->");
                                                    textcolor(WHITE);
                                                    ch = getch();
                                                    if(ch == 'w'){
                                                        x=88;y=33;
                                                    }
                                                    else if(ch == 's'){
                                                        x=112;y=36;
                                                    }
                                                    else{}
                                                    system("cls");
                                                    moveldaishgrega();
                                                    gotoxyy(x,y);
                                                    textcolor(MAGENTA);
                                                    printf("-->");
                                                    textcolor(WHITE);
                                                    if(x==88 && y==33 && ch!='w' && ch!='s'){
                                                        vf=vf+grega;
                                                        system("cls");
                                                        movel();
                                                        x=80;y=16;gotoxyy(x,y);printf("Produto adicionado com succeso");
                                                        sleep(2);
                                                    }
                                                    if(x==112 && y==36 && ch!='w' && ch!='s'){
                                                        goto m;
                                                    }
                                                }
                                            }
                                        }
                                }
                            }
                        }
//-------------------------------------------------------------------------------------------------------------------------------
                        //Total
                        else if(x==88 && y==32 && ch!='w'){
                            ch=getch();
                            if(ch=='s'){
                                system("cls");
                                moveldaishescolha();
                                menudaish();
                                x=94;y=39;
                                gotoxyy(x,y);textcolor(RED);printf("_");textcolor(WHITE);
                                x=95;y=39;
                                gotoxyy(x,y);enter=getch();
                                if(enter=='w' || enter=='a' || enter=='s' || enter=='d' ){
                                    x=88;y=24;
                                    goto m;
                                }
                                else{
                                    menu();
                                }
                            }
                            else{
                                system("cls");
                                movel();
                                x=85;y=15;
                                gotoxyy(x,y);printf("TOTAL: %.2f",vf);
                                sleep(5);
                                x=88;y=24;
                            }
                        }
                    }
                }
            }
            x=88;y=24;
        }
    }
    fclose(usernamed);fclose(senhad);
}

#endif // APLICACOES_H_INCLUDED
