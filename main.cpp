/******************************************/
//    NAME: JOHN REY CABINTOY             //
//    DATE: 11 / 16 / 2018                //
//    SUBJECT: FUNDAMENTAL PROGRAMMING    //
/******************************************/

// LIBRARY SET
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

//-------------------COLORS SET / GOTOXY SYNTAX--------------------//
HANDLE hCon;

enum Color { DARKBLUE = 1, DARKGREEN, DARKTEAL, DARKRED, DARKPINK, DARKYELLOW, GRAY, DARKGRAY, BLUE, GREEN, TEAL, RED, PINK, YELLOW, WHITE };

void SetColor(Color c){
        if(hCon == NULL)
                hCon = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hCon, c);
}
void gotoxy( int x, int y )
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
}
//------------------------ END OF PARAMETER --------------------------//

// FUNCTION DECLARATION
//----------------------------//
void design_1();
void design_2();
//----------------------------//
void pattern_1();
void pattern_2();
void pattern_3();
//----------------------------//

void sequence_for_1();
void sequence_for_2();
void sequence_for_3();

void sequence_while_1();
void sequence_while_2();
void sequence_while_3();

void sequence_do_while_1();
void sequence_do_while_2();
void sequence_do_while_3();
//----------------------------//
void pattern_for_input1();
void pattern_for_input2();
void pattern_for_input3();
void pattern_while_input1();
void pattern_while_input2();
void pattern_while_input3();
void pattern_do_while_input1();
void pattern_do_while_input2();
void pattern_do_while_input3();
//-----------------------------//
void pattern_x_mas_for_1(int);
void pattern_x_mas_for_2(int);
void pattern_x_mas_for_3(int);
void pattern_x_mas_while_1(int);
void pattern_x_mas_while_2(int);
void pattern_x_mas_while_3(int);
void pattern_x_mas_do_while_1(int);
void pattern_x_mas_do_while_2(int);
void pattern_x_mas_do_while_3(int);
void error_input_1();
void error_input_2();
void exit_program();
void submain();


// Global Declaration

/****** ANSII *******/
char style_1 = (char)219 ;
char style_2 = (char)186 ;
char style_3 = (char)176 ;
char style_4 = (char)177 ;
char style_5 = (char)178 ;
char style_6 = (char)193 ;
char style_7 = (char)205 ;
char style_8 = (char)204 ;
char style_9 = (char)185 ;
/***** VARIABLE ******/
int a,b,c,d,e,x,y,n;
char ch_1,ch;


/******************************** Design *******************************/
void design_1()
{
    SetColor(YELLOW);
    //Border Design
    for(x=1;x<=45;x++)
    {
        for(y=1;y<=95;y++)
        {
            if(y==1 || y==2 || y==3 || y==93 || y==94 || y==95 || x==7 || x==45)
            {
                cout<<style_4;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
void design_2()
{
    for(x=1;x<=75;x++)
    {
        if(x==1)
        {
            SetColor(DARKGRAY);
            cout<<style_8;
        }
        else if(x==75)
        {
            cout<<style_9;
        }
        else
        {
            cout<<style_7;
        }
    }
}
void design_3()
{
    SetColor(RED);
    //Border Design
    for(x=1;x<=45;x++)
    {
        for(y=1;y<=95;y++)
        {
            if(y==1 || y==2 || y==3 || y==93 || y==94 || y==95 || x==7 || x==45)
            {
                cout<<style_4;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
void design_4()
{
    SetColor(GREEN);
    //Border Design
    for(x=1;x<=45;x++)
    {
        for(y=1;y<=95;y++)
        {
            if(y==1 || y==2 || y==3 || y==93 || y==94 || y==95 || x==7 || x==45)
            {
                cout<<style_4;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
void design_5()
{
    SetColor(TEAL);
    //Border Design
    for(x=1;x<=45;x++)
    {
        for(y=1;y<=95;y++)
        {
            if(y==1 || y==2 || y==3 || y==93 || y==94 || y==95 || x==7 || x==45)
            {
                cout<<style_4;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
void text_design_1()
{
    SetColor(WHITE);
    gotoxy(26,3);cout<<"$$\\      $$\\ $$$$$$$$\\ $$\\   $$\\ $$\\   $$\\   ";
    gotoxy(26,4);cout<<"$$$\\    $$$ |$$  _____|$$$\\  $$ |$$ |  $$ |       ";
    gotoxy(26,5);cout<<"$$$$\\  $$$$ |$$ |      $$$$\\ $$ |$$ |  $$ |       ";
    gotoxy(26,6);cout<<"$$\\$$\\$$ $$ |$$$$$\\    $$ $$\\$$ |$$ |  $$ |     ";
    gotoxy(26,7);cout<<"$$ \\$$$  $$ |$$  __|   $$ \\$$$$ |$$ |  $$ |       ";
    gotoxy(26,8);cout<<"$$ |\\$  /$$ |$$ |      $$ |\\$$$ |$$ |  $$ |       ";
    gotoxy(26,9);cout<<"$$ | \\_/ $$ |$$$$$$$$\\ $$ | \\$$ |\\$$$$$$  |     ";
    gotoxy(26,10);cout<<"\\__|     \\__|\________| \\__|  \\__| \\______/   ";
}
void text_design_3()
{
    SetColor(WHITE);
    gotoxy(20,2);cout<<"__       __  ________  __    __  __    __         ______       ";
    gotoxy(20,3);cout<<"/  \\     /  |/        |/  \\  /  |/  |  /  |       /      \\  ";
    gotoxy(20,4);cout<<"$$  \\   /$$ |$$$$$$$$/ $$  \\ $$ |$$ |  $$ |      /$$$$$$  |  ";
    gotoxy(20,5);cout<<"$$$  \\ /$$$ |$$ |__    $$$  \\$$ |$$ |  $$ |      $$____$$ |  ";
    gotoxy(20,6);cout<<"$$$$  /$$$$ |$$    |   $$$$  $$ |$$ |  $$ |       /    $$/     ";
    gotoxy(20,7);cout<<"$$ $$ $$/$$ |$$$$$/    $$ $$ $$ |$$ |  $$ |      /$$$$$$/      ";
    gotoxy(20,8);cout<<"$$ |$$$/ $$ |$$ |_____ $$ |$$$$ |$$ \\__$$ |      $$ |_____    ";
    gotoxy(20,9);cout<<"$$ | $/  $$ |$$       |$$ | $$$ |$$    $$/       $$       |    ";
    gotoxy(20,10);cout<<"$$/      $$/ $$$$$$$$/ $$/   $$/  $$$$$$/        $$$$$$$$/     ";


}
void goodbye()
{
    SetColor(TEAL);
    gotoxy(14,15);cout<<"##   ## ##### ####  #### ##  ##     ##    ##      ##   ##   ##     ###   ";
    gotoxy(14,16);cout<<"### ### ##    ##  # ##  # #  #        #  #        ### ### ##  ## ##      ";
    gotoxy(14,17);cout<<"## # ## ####  ####  ####   ##          ##    #### ## # ## ######  ####   ";
    gotoxy(14,18);cout<<"##   ## ##    ## ## ## ##  ##         #  #        ##   ## ##  ##     ##  ";
    gotoxy(14,19);cout<<"##   ## ##### ## ## ## ##  ##       ##    ##      ##   ## ##  ##  ####   ";
    gotoxy(25,20);
    gotoxy(35,21);cout<<"GOODBYE THANK YOU!!";
    gotoxy(35,39);
}
void text_design_2()
{
    gotoxy(29,13);cout<<"PROJECT CHRISTMAS SYMBOLS PATTERN 2018";
    gotoxy(38,14);cout<<"BY JOHNREY CABINTOY";
    gotoxy(30,15);//ENDL
    gotoxy(30,16);//ENDL
}
/******************************DESIGN END**********************************/

//----------------------SIMPLE FUNCTION IN PROGRAM------------------//
void error_input_1()
{
        system("cls");
        design_1();
        text_design_1();
        gotoxy(10,12);design_2();
        text_design_2();

        SetColor(RED);
        gotoxy(35,22);cout<<"INVALID CHARACTER !!";
        getch();
        submain();

}
void error_input_2()
{
        system("cls");
        design_1();
        text_design_3();
        gotoxy(10,12);design_2();
        text_design_2();

        SetColor(RED);
        gotoxy(35,22);cout<<"INVALID CHARACTER !!";
        getch();
        pattern_1();

}
void error_input_3()
{
        system("cls");
        design_1();
        text_design_3();
        gotoxy(10,12);design_2();
        text_design_2();

        SetColor(RED);
        gotoxy(35,22);cout<<"INVALID CHARACTER !!";
        getch();
        pattern_2();

}
void error_input_4()
{
        system("cls");
        design_1();
        text_design_3();
        gotoxy(10,12);design_2();
        text_design_2();

        SetColor(RED);
        gotoxy(35,22);cout<<"INVALID CHARACTER !!";
        getch();
        pattern_3();

}
void exit_program()
{
    system("MODE CON COLS=96 LINES=40");
    design_1();
    SetColor(WHITE);
    gotoxy(35,18);cout<<"ARE YOU SURE TO EXIT [Y/N]?";
    gotoxy(47,19);cin>>ch_1;
    if(ch_1=='y' || ch_1=='Y')
    {
        system("cls");
        goodbye();
        getch();
        exit(0);
    }
    else if(ch_1=='n' || ch_1=='N')
    {
        system("cls");
        design_1();
        SetColor(WHITE);
        gotoxy(30,18);cout<<"TO RETURN TO MAIN PLEASE HIT ENTER";
        getch();
        submain();
    }
    else
    {
        system("cls");
        design_1();
        SetColor(RED);
        gotoxy(35,19);cout<<"INVALID CHARACTER !!";
        getch();
        exit_program();
    }
}
//-------------------------------------------------------------------------//


/********************** CHRISTMASS TREE PATTERN SUB-MENU **************************/
void pattern_1()
{
    //Calling Design in function
    design_3();
    text_design_3();
    gotoxy(10,12);design_2();
    // END

    text_design_2();
    SetColor(WHITE);
    gotoxy(35,19);cout<<"* CHRISTMAS TREE PATTERN *";
    gotoxy(30,20);//ENDL
    gotoxy(30,21);cout<<">> PATTERN IN FOR LOOP          [1]";
    gotoxy(30,22);cout<<">> PATTERN IN WHILE             [2]";
    gotoxy(30,23);cout<<">> PATTERN IN DO-WHILE          [3]";
    gotoxy(30,24);cout<<">> GO BACK                      [4]";
    gotoxy(27,25);
    gotoxy(30,26);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_for_input1();
        break;
    case '2':
        pattern_while_input1();
        break;
    case '3':
        pattern_do_while_input1();
        break;
    case '4':
        submain();
        break;
    default:
        //system("cls");
        error_input_2();
        getch();
        break;
    }
    getch();
}
/********************** CHRISTMASS TREE PATTERN END ***************************/
/********************** CHRISTMASS CANDLE PATTERN SUB-MENU **************************/
void pattern_2()
{
    //Calling Design in function
    design_4();
    text_design_3();
    gotoxy(10,12);design_2();
    // END

    text_design_2();
    SetColor(WHITE);
    gotoxy(33,19);cout<<"* CHRISTMAS CANDLE PATTERN *";
    gotoxy(30,20);//ENDL
    gotoxy(30,21);cout<<">> PATTERN IN FOR LOOP          [1]";
    gotoxy(30,22);cout<<">> PATTERN IN WHILE             [2]";
    gotoxy(30,23);cout<<">> PATTERN IN DO-WHILE          [3]";
    gotoxy(30,24);cout<<">> GO BACK                      [4]";
    gotoxy(27,25);
    gotoxy(30,26);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_for_input2();
        break;
    case '2':
        pattern_while_input2();
        break;
    case '3':
        pattern_do_while_input2();
        break;
    case '4':
        submain();
        break;
    default:
        //system("cls");
        error_input_3();
        getch();
        break;
    }
    getch();
}
/********************** CHRISTMASS CANDLE PATTERN END ***************************/
/********************** CHRISTMASS GIFT PATTERN SUB-MENU **************************/
void pattern_3()
{
    //Calling Design in function
    design_5();
    text_design_3();
    gotoxy(10,12);design_2();
    // END

    text_design_2();
    SetColor(WHITE);
    gotoxy(33,19);cout<<"* CHRISTMAS GIFT PATTERN *";
    gotoxy(30,20);//ENDL
    gotoxy(30,21);cout<<">> PATTERN IN FOR LOOP          [1]";
    gotoxy(30,22);cout<<">> PATTERN IN WHILE             [2]";
    gotoxy(30,23);cout<<">> PATTERN IN DO-WHILE          [3]";
    gotoxy(30,24);cout<<">> GO BACK                      [4]";
    gotoxy(27,25);
    gotoxy(30,26);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_for_input3();
        break;
    case '2':
        pattern_while_input3();
        break;
    case '3':
        pattern_do_while_input3();
        break;
    case '4':
        submain();
        break;
    default:
        //system("cls");
        error_input_4();
        getch();
        break;
    }
    getch();
}
/********************** CHRISTMASS GIFT PATTERN END ***************************/

//------------------------ SUB-MENU SEQUENCE--------------------------//
//====================== SEQUENCE FOR LOOP IN X-MAS TREE ==========================//
// IF 1 SELECT
void sequence_for_1()
{
    system("cls");
    system("MODE CON COLS=96 LINES=40");
    design_1();

    SetColor(WHITE);
    gotoxy(25,15);cout<<"* SELECTED CHRISTMAS TREE PATTERN (FOR LOOP) *";
    gotoxy(40,16);cout<<"- JUMP TO NEXT -";
    gotoxy(30,17);//ENDL
    gotoxy(30,18);cout<<">> CHRISTMAS CANDLE PATTERN     [1]";
    gotoxy(30,19);cout<<">> CHRISTMAS GIFT PATTERN       [2]";
    gotoxy(30,20);cout<<">> DO IT AGAIN                  [3]";
    gotoxy(30,21);cout<<">> GO BACK                      [4]";
    gotoxy(27,22);
    gotoxy(30,23);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_2();
        break;
    case '2':
        pattern_3();
        break;
    case '3':
        pattern_for_input1();
        break;
    case '4':
        pattern_1();
        break;
    default:
        //system("cls");
        error_input_2();
        getch();
        break;
    }
    getch();
}
// If select 2
void sequence_while_1()
{
    system("cls");
    system("MODE CON COLS=96 LINES=40");
    design_1();

    SetColor(WHITE);
    gotoxy(25,15);cout<<"* SELECTED CHRISTMAS TREE PATTERN (WHILE LOOP) *";
    gotoxy(40,16);cout<<"- JUMP TO NEXT -";
    gotoxy(30,17);//ENDL
    gotoxy(30,18);cout<<">> CHRISTMAS CANDLE PATTERN     [1]";
    gotoxy(30,19);cout<<">> CHRISTMAS GIFT PATTERN       [2]";
    gotoxy(30,20);cout<<">> DO IT AGAIN                  [3]";
    gotoxy(30,21);cout<<">> GO BACK                      [4]";
    gotoxy(27,22);
    gotoxy(30,23);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_2();
        break;
    case '2':
        pattern_3();
        break;
    case '3':
        pattern_while_input1();
        break;
    case '4':
        pattern_1();
        break;
    default:
        error_input_2();
        getch();
        break;
    }
    getch();
}
// if select 3
void sequence_do_while_1()
{
    system("cls");
    system("MODE CON COLS=96 LINES=40");
    design_1();
    SetColor(WHITE);
    gotoxy(20,15);cout<<"* SELECTED CHRISTMAS TREE PATTERN (DO-WHILE LOOP) *";
    gotoxy(40,16);cout<<"- JUMP TO NEXT -";
    gotoxy(30,17);//ENDL
    gotoxy(30,18);cout<<">> CHRISTMAS CANDLE PATTERN     [1]";
    gotoxy(30,19);cout<<">> CHRISTMAS GIFT PATTERN       [2]";
    gotoxy(30,20);cout<<">> DO IT AGAIN                  [3]";
    gotoxy(30,21);cout<<">> GO BACK                      [4]";
    gotoxy(27,22);
    gotoxy(30,23);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_2();
        break;
    case '2':
        pattern_3();
        break;
    case '3':
        pattern_do_while_input1();
        break;
    case '4':
        pattern_1();
        break;
    default:
        //system("cls");
        error_input_2();
        getch();
        break;
    }
    getch();
}
//====================== SEQUENCE FOR LOOP IN X-MAS CANDLE ==========================//
// if select 1
void sequence_for_2()
{
    system("cls");
    system("MODE CON COLS=96 LINES=40");
    design_1();

    SetColor(WHITE);
    gotoxy(25,15);cout<<"* SELECTED CHRISTMAS CANDLE PATTERN (FOR LOOP) *";
    gotoxy(40,16);cout<<"- JUMP TO NEXT -";
    gotoxy(30,17);//ENDL
    gotoxy(30,18);cout<<">> CHRISTMAS TREE PATTERN       [1]";
    gotoxy(30,19);cout<<">> CHRISTMAS GIFT PATTERN       [2]";
    gotoxy(30,20);cout<<">> DO IT AGAIN                  [3]";
    gotoxy(30,21);cout<<">> GO BACK                      [4]";
    gotoxy(27,22);
    gotoxy(30,23);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_1();
        break;
    case '2':
        pattern_3();
        break;
    case '3':
        pattern_for_input2();
        break;
    case '4':
        pattern_2();
        break;
    default:
        //system("cls");
        error_input_2();
        getch();
        break;
    }
    getch();
}
// if select 2
void sequence_while_2()
{
    system("cls");
    system("MODE CON COLS=96 LINES=40");
    design_1();
    SetColor(WHITE);
    gotoxy(24,15);cout<<"* SELECTED CHRISTMAS CANDLE PATTERN (WHILE LOOP) *";
    gotoxy(40,16);cout<<"- JUMP TO NEXT -";
    gotoxy(30,17);//ENDL
    gotoxy(30,18);cout<<">> CHRISTMAS TREE PATTERN       [1]";
    gotoxy(30,19);cout<<">> CHRISTMAS GIFT PATTERN       [2]";
    gotoxy(30,20);cout<<">> DO IT AGAIN                  [3]";
    gotoxy(30,21);cout<<">> GO BACK                      [4]";
    gotoxy(27,22);
    gotoxy(30,23);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_1();
        break;
    case '2':
        pattern_3();
        break;
    case '3':
        pattern_while_input2();
        break;
    case '4':
        pattern_2();
        break;
    default:
        //system("cls");
        error_input_2();
        getch();
        break;
    }
    getch();
}
// if select 3
void sequence_do_while_2()
{
    system("cls");
    system("MODE CON COLS=96 LINES=40");
    design_1();
    SetColor(WHITE);
    gotoxy(24,15);cout<<"* SELECTED CHRISTMAS CANDLE PATTERN (DO-WHILE LOOP) *";
    gotoxy(40,16);cout<<"- JUMP TO NEXT -";
    gotoxy(30,17);//ENDL
    gotoxy(30,18);cout<<">> CHRISTMAS TREE PATTERN       [1]";
    gotoxy(30,19);cout<<">> CHRISTMAS GIFT PATTERN       [2]";
    gotoxy(30,20);cout<<">> DO IT AGAIN                  [3]";
    gotoxy(30,21);cout<<">> GO BACK                      [4]";
    gotoxy(27,22);
    gotoxy(30,23);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_1();
        break;
    case '2':
        pattern_3();
        break;
    case '3':
        pattern_do_while_input2();
        break;
    case '4':
        pattern_2();
        break;
    default:
        //system("cls");
        error_input_2();
        getch();
        break;
    }
    getch();
}
//====================== SEQUENCE FOR LOOP IN X-MAS GIFT ==========================//
// if select 1
void sequence_for_3()
{
    system("cls");
    system("MODE CON COLS=96 LINES=40");
    design_1();

    SetColor(WHITE);
    gotoxy(24,15);cout<<"* SELECTED CHRISTMAS GIFT PATTERN (FOR LOOP) *";
    gotoxy(40,16);cout<<"- JUMP TO NEXT -";
    gotoxy(30,17);//ENDL
    gotoxy(30,18);cout<<">> CHRISTMAS TREE PATTERN       [1]";
    gotoxy(30,19);cout<<">> CHRISTMAS CANDLE PATTERN     [2]";
    gotoxy(30,20);cout<<">> DO IT AGAIN                  [3]";
    gotoxy(30,21);cout<<">> GO BACK                      [4]";
    gotoxy(27,22);
    gotoxy(30,23);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_1();
        break;
    case '2':
        pattern_2();
        break;
    case '3':
        pattern_for_input3();
        break;
    case '4':
        pattern_3();
        break;
    default:
        //system("cls");
        error_input_2();
        getch();
        break;
    }
    getch();
}
// if select 2
void sequence_while_3()
{
    system("cls");
    system("MODE CON COLS=96 LINES=40");
    design_1();
    SetColor(WHITE);
    gotoxy(23,15);cout<<"* SELECTED CHRISTMAS GIFT PATTERN (WHILE LOOP) *";
    gotoxy(40,16);cout<<"- JUMP TO NEXT -";
    gotoxy(30,17);//ENDL
    gotoxy(30,18);cout<<">> CHRISTMAS TREE PATTERN       [1]";
    gotoxy(30,19);cout<<">> CHRISTMAS CANDLE PATTERN     [2]";
    gotoxy(30,20);cout<<">> DO IT AGAIN                  [3]";
    gotoxy(30,21);cout<<">> GO BACK                      [4]";
    gotoxy(27,22);
    gotoxy(30,23);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_1();
        break;
    case '2':
        pattern_2();
        break;
    case '3':
        pattern_while_input3();
        break;
    case '4':
        pattern_3();
        break;
    default:
        //system("cls");
        error_input_2();
        getch();
        break;
    }
    getch();
}
// if select 3
void sequence_do_while_3()
{
    system("cls");
    system("MODE CON COLS=96 LINES=40");
    design_1();
    SetColor(WHITE);
    gotoxy(20,15);cout<<"* SELECTED CHRISTMAS GIFT PATTERN (DO-WHILE LOOP) *";
    gotoxy(40,16);cout<<"- JUMP TO NEXT -";
    gotoxy(30,17);//ENDL
    gotoxy(30,18);cout<<">> CHRISTMAS TREE PATTERN       [1]";
    gotoxy(30,19);cout<<">> CHRISTMAS CANDLE PATTERN     [2]";
    gotoxy(30,20);cout<<">> DO IT AGAIN                  [3]";
    gotoxy(30,21);cout<<">> GO BACK                      [4]";
    gotoxy(27,22);
    gotoxy(30,23);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_1();
        break;
    case '2':
        pattern_2();
        break;
    case '3':
        pattern_do_while_input3();
        break;
    case '4':
        pattern_3();
        break;
    default:
        //system("cls");
        error_input_2();
        getch();
        break;
    }
    getch();
}

//================================END==================================//



//======================USER INPUT /FOR/WHILE/DO-WHILE==================//
//---------------------------FOR INPUT--------------------------------//
void pattern_for_input1()
{
    int user_input;
    system("cls");
    design_1();
    SetColor(GREEN);
    gotoxy(28,13);cout<<"*   CHRISTMAS TREE PATTERN IN FOR LOOP  *";
    gotoxy(28,14);cout<<"-----------------------------------------";
    SetColor(GRAY);
    gotoxy(28,15);cout<<"     Input [20 - 30] for perfect form    ";
    gotoxy(30,17);
    SetColor(WHITE);
    gotoxy(33,21);cout<<"INPUT NUMBER: "; cin>>user_input;
    pattern_x_mas_for_1(user_input);
    pattern_1();
}
void pattern_for_input2()
{
    int user_input;
    system("cls");
    design_1();
    SetColor(GREEN);
    gotoxy(28,13);cout<<"*  CHRISTMAS CANDLE PATTERN IN FOR LOOP *";
    gotoxy(28,14);cout<<"-----------------------------------------";
    SetColor(GRAY);
    gotoxy(30,15);cout<<"   Input [20] for perfect form    ";
    gotoxy(30,17);
    SetColor(WHITE);
    gotoxy(33,21);cout<<"INPUT NUMBER: "; cin>>user_input;
    pattern_x_mas_for_2(user_input);
    pattern_2();
}
void pattern_for_input3()
{
    int user_input;
    system("cls");
    design_1();
    SetColor(GREEN);
    gotoxy(28,13);cout<<"*   CHRISTMAS GIFT PATTERN IN FOR LOOP  *";
    gotoxy(28,14);cout<<"-----------------------------------------";
    SetColor(GRAY);
    gotoxy(28,15);cout<<"   Input [20 - 30] for perfect form    ";
    gotoxy(30,17);
    SetColor(WHITE);
    gotoxy(33,21);cout<<"INPUT NUMBER: "; cin>>user_input;
    pattern_x_mas_for_3(user_input);
    pattern_3();
}
//----------------------- END OF FOR LOOP INPUT------------------------//
//----------------------------WHILE INPUT------------------------------//
void pattern_while_input1()
{
    int user_input;
    system("cls");
    design_1();
    SetColor(GREEN);
    gotoxy(28,13);cout<<"* CHRISTMAS TREE PATTERN IN WHILE LOOP  *";
    gotoxy(28,14);cout<<"-----------------------------------------";
    SetColor(GRAY);
    gotoxy(28,15);cout<<"   Input [20 - 30] for perfect form    ";
    gotoxy(28,17);
    SetColor(WHITE);
    gotoxy(33,21);cout<<"INPUT NUMBER: "; cin>>user_input;
    pattern_x_mas_while_1(user_input);
    pattern_1();
}
void pattern_while_input2()
{
    int user_input;
    system("cls");
    design_1();
    SetColor(GREEN);
    gotoxy(28,13);cout<<"* CHRISTMAS CANDLE PATTERN IN WHILE LOOP *";
    gotoxy(28,14);cout<<"------------------------------------------";
    SetColor(GRAY);
    gotoxy(30,15);cout<<"   Input [20] for perfect form     ";
    gotoxy(30,17);
    SetColor(WHITE);
    gotoxy(33,21);cout<<"INPUT NUMBER: "; cin>>user_input;
    pattern_x_mas_while_2(user_input);
    pattern_2();
}
void pattern_while_input3()
{
    int user_input;
    system("cls");
    design_1();
    SetColor(GREEN);
    gotoxy(28,13);cout<<"* CHRISTMAS CANDL PATTERN IN WHILE LOOP  *";
    gotoxy(28,14);cout<<"------------------------------------------";
    SetColor(GRAY);
    gotoxy(30,15);cout<<"   Input [20] for perfect form    ";
    gotoxy(30,17);
    SetColor(WHITE);
    gotoxy(33,21);cout<<"INPUT NUMBER: "; cin>>user_input;
    pattern_x_mas_while_3(user_input);
    pattern_3();
}
//------------------------END OF WHILE INPUT-------------------------------//

//----------------------------DO WHILE INPUT------------------------------//
void pattern_do_while_input1()
{
    int user_input;
    system("cls");
    design_1();
    SetColor(GREEN);
    gotoxy(28,13);cout<<"* CHRISTMAS TREE PATTERN IN DO-WHILE LOOP *";
    gotoxy(28,14);cout<<"-------------------------------------------";
    SetColor(GRAY);
    gotoxy(28,15);cout<<"   Input [10 and 20] for perfect form    ";
    gotoxy(30,17);
    SetColor(WHITE);
    gotoxy(33,21);cout<<"INPUT NUMBER: "; cin>>user_input;
    pattern_x_mas_do_while_1(user_input);
    pattern_1();
}
void pattern_do_while_input2()
{
    int user_input;
    system("cls");
    design_1();
    SetColor(GREEN);
    gotoxy(28,13);cout<<"* CHRISTMAS CANDLE PATTERN IN DO-WHILE LOOP *";
    gotoxy(28,14);cout<<"---------------------------------------------";
    SetColor(GRAY);
    gotoxy(28,15);cout<<"   Input [10 and 20] for perfect form    ";
    SetColor(WHITE);
    gotoxy(33,21);cout<<"INPUT NUMBER: "; cin>>user_input;
    pattern_x_mas_do_while_2(user_input);
    pattern_2();
}
void pattern_do_while_input3()
{
    int n,m;
    system("cls");
    design_1();
    SetColor(GREEN);
    gotoxy(28,13);cout<<"* CHRISTMAS GIFT PATTERN IN DO-WHILE LOOP *";
    gotoxy(28,14);cout<<"-------------------------------------------";
    SetColor(GRAY);
    gotoxy(28,15);cout<<"   Input [20 - 30] for perfect form    ";
    gotoxy(30,17);
    SetColor(WHITE);
    gotoxy(33,21);cout<<"INPUT NUMBER: "; cin>>n;
    pattern_x_mas_do_while_3(n);
    pattern_3();
}
//------------------------END OF DO-WHILE INPUT-------------------------------//

/************************CHRISTMAS TREE PATTERN / DECORATION IN FOR LOOP*******************************/
void xmas_dec_for_1(int c)
{
    if(c==1)
    {
        SetColor(RED);
        cout<<"*";
    }
    else
    {
        SetColor(GREEN);
        cout<<style_1;
    }
}
void xmas_dec_for_2(int d,int b)
{
    if(d==b-1)
    {
        SetColor(RED);
        cout<<"*";
    }
    else
    {
        SetColor(GREEN);
        cout<<style_1;
    }
}
void xmas_dec_stamp(int b,int n)
{
    if(b==n || b==n-1 || b==n-2 || b==n-3 || b==n-4)
    {
        SetColor(DARKYELLOW);
        cout<<style_2;
    }
    else
    {
        cout<<" ";
    }
}
void pattern_x_mas_for_1(int n)
{
    system("MODE CON COLS=100 LINES=80");

    for(a=1;a<=n/3;a++)
{
    cout<<"\t";
    for(b=n;b>a;b--)
    {
        cout<<" ";
    }
    for(c=1;c<=b;c++)
    {
        xmas_dec_for_1(c);
    }
    for(d=1;d<b;d++)
    {
        xmas_dec_for_2(d,b);
    }
    cout<<endl;

}
for(a=4;a<=n/2;a++)
{
    cout<<"\t";
    for(b=n;b>a;b--)
    {
        cout<<" ";
    }
    for(c=1;c<=b;c++)
    {
        xmas_dec_for_1(c);
    }
    for(d=1;d<b;d++)
    {
        xmas_dec_for_2(d,b);
    }
    cout<<endl;
}
for(a=5;a<=n;a++)
{
    cout<<"\t";
    for(b=n;b>a;b--)
    {
        cout<<" ";
    }
    for(c=1;c<=b;c++)
    {
        xmas_dec_for_1(c);
    }
    for(d=1;d<b;d++)
    {
        xmas_dec_for_2(d,b);
    }
    cout<<endl;
}
//stamp
for(a=3;a<=n/3;a++)
{
    cout<<"\t  ";
    for(b=1;b<=n;b++)
    {
        xmas_dec_stamp(b,n);
    }
    cout<<endl;
}
//land
for(a=1;a<=n/2;a++)
{
    //cout<<"\t";
    for(b=1;b<=n/3;b++)
    {
        SetColor(DARKGREEN);
        cout<<style_6;
    }
}
    SetColor(WHITE);
    gotoxy(70,33);cout<<"TAP ENTER TO EXIT!"<<endl;
    gotoxy(89,33);getch();
    sequence_for_1();
}
/************************CHRISTMAS TREE PATTERN / DECORATION IN WHILE LOOP*******************************/
void xmas_dec_while_1(int c)
{
    if(c==1)
    {
        SetColor(RED);
        cout<<"*";
    }
    else
    {
        SetColor(YELLOW);
        cout<<style_7;
    }
}
void xmas_dec_while_2(int d,int b)
{
    if(d==b-1)
    {
        SetColor(RED);
        cout<<"*";
    }
    else
    {
        SetColor(YELLOW);
        cout<<style_7;
    }
}

void pattern_x_mas_while_1(int n)
{
    system("MODE CON COLS=100 LINES=80");
    a=1;
    while(a<=n/3)
    {
        cout<<"\t";
        b=n;
        while(b>a)
        {
            cout<<" ";
            b--;
        }
        c=1;
        while(c<=b)
        {
            xmas_dec_while_1(c);
            c++;
        }
        d=1;
        while(d<b)
        {
            xmas_dec_while_2(d,b);
            d++;
        }
        cout<<endl;
        a++;
    }
    a=4;
    while(a<=n/2)
    {
        cout<<"\t";
        b=n;
        while(b>a)
        {
            cout<<" ";
            b--;
        }
        c=1;
        while(c<=b)
        {
            xmas_dec_while_1(c);
            c++;
        }
        d=1;
        while(d<b)
        {
            xmas_dec_while_2(d,b);
            d++;
        }
        cout<<endl;
        a++;
    }
    a=5;
    while(a<=n)
    {
        cout<<"\t";
        b=n;
        while(b>a)
        {
            cout<<" ";
            b--;
        }
        c=1;
        while(c<=b)
        {
            xmas_dec_while_1(c);
            c++;
        }
        d=1;
        while(d<b)
        {
            xmas_dec_while_2(d,b);
            d++;
        }
        cout<<endl;
        a++;
    }
    //stamp
    a=3;
    while(a<=n/3)
    {
        cout<<"\t  ";
        b=1;
        while(b<=n)
        {
            xmas_dec_stamp(b,n);
            b++;
        }
        cout<<endl;
        a++;
    }
    //land
    a=1;
    while(a<=n/2)
    {
        //cout<<"\t";
        b=1;
        while(b<=n/3)
        {
            SetColor(DARKGREEN);
            cout<<style_6;
            b++;
        }
        a++;
    }
    SetColor(WHITE);
    gotoxy(70,33);cout<<"TAP ENTER TO EXIT!"<<endl;
    gotoxy(89,33);getch();
    sequence_while_1();
}
/************************CHRISTMAS TREE PATTERN / DECORATION IN DO-WHILE LOOP*******************************/
void xmas_dec_do_while_1(int c)
{
    if(c==1)
    {
        SetColor(RED);
        cout<<"*";
    }
    else
    {
        SetColor(GREEN);
        cout<<style_2;
    }
}
void xmas_dec_do_while_2(int d,int b)
{
    if(d==b-1)
    {
        SetColor(RED);
        cout<<"*";
    }
    else
    {
        SetColor(GREEN);
        cout<<style_2;
    }
}

void pattern_x_mas_do_while_1(int n)
{
    system("MODE CON COLS=100 LINES=80");
    a=1;
do
{
    cout<<"\t";
    b=n;
    do
    {
        cout<<" ";
        b--;
    }while(b>a);
    c=1;
    while(c<=b)
    {
        xmas_dec_do_while_1(c);
        c++;
    }
    d=1;
    while(d<b)
    {
        xmas_dec_do_while_2(d,b);
        d++;
    }
    a++;
    cout<<endl;
}while(a<=n/3);

a=4;
do
{
    cout<<"\t";
    b=n;
    do
    {
        cout<<" ";
        b--;
    }while(b>a);
    c=1;
    do
    {
        xmas_dec_do_while_1(c);
        c++;
    }while(c<=b);
    d=1;
    do
    {
        xmas_dec_do_while_2(d,b);
        d++;
    }while(d<b);
    a++;
    cout<<endl;
}while(a<=n/2);

    a=5;
    do
    {
        cout<<"\t";
        b=n;
        do
        {
            cout<<" ";
            b--;
        }while(b>a);
        c=1;
        do
        {
           xmas_dec_do_while_1(c);
            c++;
        }while(c<=b);
        d=1;
        do
        {
           xmas_dec_do_while_2(d,b);
            d++;
        }while(d<b);
        a++;
        cout<<endl;
    }while(a<=n);
    //stamp
    a=3;
    do
    {
        cout<<"\t  ";
        b=1;
        do
        {
            xmas_dec_stamp(b,n);
            b++;
        }while(b<=n);
        cout<<endl;
        a++;
    }while(a<=n/3);
    //land
    a=1;
    do
    {
        //cout<<"\t";
        b=1;
        while(b<=n/3)
        {
            SetColor(DARKGREEN);
            cout<<style_6;
            b++;
        }
        a++;
    }while(a<=n/2);
    SetColor(WHITE);
    gotoxy(70,33);cout<<"TAP ENTER TO EXIT!"<<endl;
    gotoxy(89,33);getch();
    sequence_do_while_1();
}
/**************************** CHRISTMAS PATTERN END **********************/

/************************** CHRISTMAS CANDLE PATTERN IN FOR***********************/
void candle_body(int b,int n)
{
    if(b==n-2 || b==n-3 || b==n-4 || b==n-5 || b==n-6 || b==n-7 || b==n-8 || b==n-9 || b==n-10 || b==n-11 || b==n-12 || b==n-13 || b==n-14 || b==n-15)
    {
        SetColor(WHITE);
        cout<<style_1;
    }
    else
    {
        cout<<" ";
    }
}
void pattern_x_mas_for_2(int n)
{
    system("MODE CON COLS=100 LINES=50");
    for(a=1;a<=n/2;a++)
    {
        cout<<"      ";
        for(b=n/2;b>=a;b--)
        {
            cout<<" ";
        }
        for(c=1;c<b;c++)
        {
            SetColor(RED);
            cout<<style_2;
        }
        for(e=1;e<=b;e++)
        {
            SetColor(RED);
            cout<<style_2;
        }
        cout<<endl;
    }

    for(a=1;a<=n/2;a++)
    {
        cout<<"      ";
        for(b=1;b<=a+1;b++)
        {
            cout<<" ";
        }
        for(c=n/2;c>b;c--)
        {
            SetColor(DARKRED);
            cout<<style_4;
        }
        for(e=n/2;e>=b;e--)
        {
            cout<<style_4;
        }
        cout<<endl;
    }

    for(a=1;a<=n+3;a++)
    {
        cout<<"    ";
        for(b=1;b<=n;b++)
        {
            candle_body(b,n);
        }
        cout<<endl;
    }
    for(a=1;a<=n;a++)
    {
    //cout<<"\t";
        for(b=1;b<=n/2;b++)
        {
            SetColor(DARKYELLOW);
            cout<<style_3;
        }
    }
    SetColor(WHITE);
    gotoxy(70,33);cout<<"TAP ENTER TO EXIT!"<<endl;
    gotoxy(89,33);getch();
    sequence_for_2();
}
//==================================CHRISTMAS CANDLE PATTERN IN WHILE=================================================================
void pattern_x_mas_while_2(int n)
{
    system("MODE CON COLS=100 LINES=50");
    a=1;
    while(a<=n/2)
    {
        cout<<"      ";
        b=n/2;
        while(b>=a)
        {
            cout<<" ";
            b--;
        }
        c=1;
        while(c<b)
        {
            SetColor(RED);
            cout<<style_2;
            c++;
        }
        e=1;
        while(e<=b)
        {
            SetColor(RED);
            cout<<style_2;
            e++;
        }
        cout<<endl;
        a++;
    }
    a=1;
    while(a<=n/2)
    {
        cout<<"      ";
        b=1;
        while(b<=a+1)
        {
            cout<<" ";
            b++;
        }
        c=n/2;
        while(c>b)
        {
            SetColor(DARKRED);
            cout<<style_4;
            c--;
        }
        e=n/2;
        while(e>=b)
        {
            cout<<style_4;
            e--;
        }

        cout<<endl;
        a++;
    }
    a=1;
    while(a<=n+3)
    {
        cout<<"    ";
        b=1;
        while(b<=n)
        {
            candle_body(b,n);
            b++;
        }
        cout<<endl;
        a++;
    }
    a=1;
    while(a<=n)
    {
        b=1;
        while(b<=n/2)
        {
            SetColor(DARKYELLOW);
            cout<<style_3;
            b++;
        }
        a++;
    }
    SetColor(WHITE);
    gotoxy(70,33);cout<<"TAP ENTER TO EXIT!"<<endl;
    gotoxy(89,33);getch();
    sequence_while_2();
}
//==================================CHRISTMAS CANDLE PATTERN IN DO-WHILE==============================//
void pattern_x_mas_do_while_2(int n)
{
    system("MODE CON COLS=100 LINES=50");
    a=1;
    do
    {
        cout<<"      ";
        b=n/2;
        do
        {
            cout<<" ";
            b--;
        }while(b>=a);
        c=1;
        while(c<b)
        {
            SetColor(RED);
            cout<<style_2;
            c++;
        }
        e=1;
        while(e<=b)
        {
            SetColor(RED);
            cout<<style_2;
            e++;
        }
        cout<<endl;
        a++;
    }while(a<=n/2);
    a=1;
    do
    {
        cout<<"      ";
        b=1;
        do
        {
            cout<<" ";
            b++;
        }while(b<=a+1);
        c=n/2;
        while(c>b)
        {
            SetColor(DARKRED);
            cout<<style_4;
            c--;
        }
        e=n/2;
        while(e>=b)
        {
            cout<<style_4;
            e--;
        }

        cout<<endl;
        a++;
    }while(a<=n/2);
    a=1;
    do
    {
        cout<<"    ";
        b=1;
        do
        {
           candle_body(b,n);
            b++;
        }while(b<=n);
        cout<<endl;
        a++;
    }while(a<=n+3);
    a=1;
    do
    {
        b=1;
        do
        {
            SetColor(DARKYELLOW);
            cout<<style_3;
            b++;
        }while(b<=n/2);
        a++;
    }while(a<=n);
    SetColor(WHITE);
    gotoxy(70,33);cout<<"TAP ENTER TO EXIT!"<<endl;
    gotoxy(89,33);getch();
    sequence_do_while_2();
}
//****************************************************************************************************//
//==================================CHRISTMAS GIFT PATTERN IN FOR====================================//
void box_dec_1(int a,int n)
{
    if(a==n/2 - 3 || a==n/2 - 2)
    {
        SetColor(WHITE);
        cout<<style_2;
    }
    else if(b == n)
    {
        SetColor(WHITE);
        cout<<style_2;
    }
    else
    {
        SetColor(RED);
        cout<<style_1;
    }
}
void box_dec_2(int a,int n)
{
    if(a==n/2 - 3 || a==n/2 - 2)
    {
        SetColor(WHITE);
        cout<<style_2;
    }
    else
    {
        SetColor(RED);
        cout<<style_1;
    }
}
void pattern_x_mas_for_3(int n)
{
    system("MODE CON COLS=100 LINES=40");
   //Space box
     a=1;
    do
    {
        cout<<"\t";
        b=1;
        do
        {
            cout<<" ";
            b++;
        }while(b<=n);
        a++;
        cout<<endl;
    }while(a<=n);

    for(a=1;a<=n;a++)
    {
        cout<<"\t";
        for(b=1;b<=n;b++)
        {
            box_dec_1(a,n);
        }

        for(c=1;c<=n;c++)
        {
            box_dec_2(a,n);
        }
        cout<<endl;
    }

    for(a=1;a<=n/2;a++)
    {

        for(b=1;b<n;b++)
        {
            SetColor(DARKGREEN);
            cout<<"-";
        }
    }
    SetColor(WHITE);
    gotoxy(70,33);cout<<"TAP ENTER TO EXIT!"<<endl;
    gotoxy(89,33);getch();
    sequence_for_3();
}
//***************************************************************************************************//
//==================================CHRISTMAS GIFT PATTERN IN WHILE==================================//
void pattern_x_mas_while_3(int n)
{
    system("MODE CON COLS=100 LINES=40");
    //Space box
     a=1;
    do
    {
        cout<<"\t";
        b=1;
        do
        {
            cout<<" ";
            b++;
        }while(b<=n);
        a++;
        cout<<endl;
    }while(a<=n);
    a=1;
    while(a<=n)
    {
        cout<<"\t";
        b=1;
        while(b<=n)
        {
            box_dec_1(a,n);
            b++;
        }
        c=1;
        while(c<=n)
        {
            box_dec_2(a,n);
            c++;
        }
        cout<<endl;
        ++a;
    }
    a=1;
    while(a<=n/2)
    {
        b=1;
        do
        {
            SetColor(DARKGREEN);
            cout<<"-";
            ++b;
        }while(b<n);
        ++a;
    }
    SetColor(WHITE);
    gotoxy(70,33);cout<<"TAP ENTER TO EXIT!"<<endl;
    gotoxy(89,33);getch();
    sequence_while_3();
}
//***************************************************************************************************//
//==================================CHRISTMAS GIFT PATTERN IN DO-WHILE===============================//
void pattern_x_mas_do_while_3(int n)
{
    system("MODE CON COLS=100 LINES=40");

    //Space box
     a=1;
    do
    {
        cout<<"\t";
        b=1;
        do
        {
            cout<<" ";
            b++;
        }while(b<=n);
        a++;
        cout<<endl;
    }while(a<=n);
    //
    a=1;
    do
    {
        cout<<"\t\t";
        b=1;
        do
        {
            box_dec_1(a,n);
            b++;
        }while(b<=n);
        c=1;
        do
        {
            box_dec_2(a,n);
            c++;
        }while(c<=n);
        cout<<endl;
        ++a;
    }while(a<=n);
    a=1;
    do
    {
        b=1;
        do
        {
            SetColor(DARKGREEN);
            cout<<"-";
            ++b;
        }while(b<n);
        ++a;
    }while(a<=n/2);
    SetColor(WHITE);
    gotoxy(70,33);cout<<"TAP ENTER TO EXIT!"<<endl;
    gotoxy(89,33);getch();
    sequence_do_while_3();
}
//***************************************************************************************************//
/*************************** QUEEN MENU :) ******************************/
void submain()
{
    //Calling Design
    design_1();
    text_design_1();
    gotoxy(10,12);design_2();
    // END

    text_design_2();
    SetColor(WHITE);
    gotoxy(38,19);cout<<"* PATTERN CHOICES *";
    gotoxy(30,20);//ENDL
    gotoxy(30,21);cout<<">> CHRISTMAS TREE PATTERN       [1]";
    gotoxy(30,22);cout<<">> CHRISTMAS CANDLE PATTERN     [2]";
    gotoxy(30,23);cout<<">> CHRISTMAS GIFT PATTERN       [3]";
    gotoxy(30,24);cout<<">> EXIT PROGRAM                 [4]";
    gotoxy(27,25);
    gotoxy(30,26);cout<<"ENTER YOUR CHOICE: "; cin>>ch;
    switch(ch)
    {
    case '1':
        pattern_1();
        break;
    case '2':
        pattern_2();
        break;
    case '3':
        pattern_3();
        break;
    case '4':
        exit_program();
        break;
    default:
        //system("cls");
        error_input_1();
        getch();
        break;
    }
    gotoxy(30,27);getch();
}
/***************************** SUBMAIN END ***********************************/
int main()
{
    system("MODE CON COLS=96 LINES=40");
    submain();
    return 0;
}
