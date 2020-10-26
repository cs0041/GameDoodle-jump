#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
using namespace sf;
using namespace std;


int randomrang(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}

bool randompercenn(int percent)
{
    int number;
    number = randomrang(1, 100);
    if (number <= percent)
    {
        return true;
    }
    else if (number > percent)
    {
        return false;
    }
    
}




bool haveblock(int percent)
{
    if (percent == 100)
    {
        return true;
    }
    if (percent == 0)
    {
        return false;
    }
   return  randompercenn(percent);
}
bool block_G(int percent)
{
    if (percent == 100)
    {
        return true;
    }
    if (percent == 0)
    {
        return false;
    }
    return  randompercenn(percent);
}
bool block_Gsp(int percent)
{
    if (percent == 100)
    {
        return true;
    }
    if (percent == 0)
    {
        return false;
    }
    return  randompercenn(percent);
}
bool block_B(int percent)
{
    if (percent == 100)
    {
        return true;
    }
    if (percent == 0)
    {
        return false;
    }
    return  randompercenn(percent);
}
bool block_Br(int percent)
{
    if (percent == 100)
    {
        return true;
    }
    if (percent == 0)
    {
        return false;
    }
    return  randompercenn(percent);
}
bool have_Devil(int percent)
{
    if (percent == 100)
    {
        return true;
    }
    if (percent == 0)
    {
        return false;
    }
    return  randompercenn(percent);
}

struct point
{
    int x, y;
};


int main()
{
    /*
    S1:
    srand(time(0));
    float tt = 0, ff = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (randompercenn(99))
        {
            tt++;
        }
        else 
        {
            ff++;
        }
    }
  //  cout << "tt : " << tt << endl;
  //  cout << "ff : " << ff << endl;
    cout << tt/10 << " %"<< endl;
    Sleep(500);
    goto S1;

    */


    RenderWindow app(VideoMode(400, 650), "Doodle Game!");
    app.setFramerateLimit(60);

    Texture t1, t2, t3, t4, t5, t6, t7, t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,t19,t20,t21,
        t22,t23,t24,t25,t26,t27, t28, t29, t30, t31, t32, t33, t34, t35, t36;

    t1.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/MENU.png");
    t2.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformG.png");
    t3.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/doodleLeft.png");
    t4.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformB.png");
    t5.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/gameOverText.png");
    t6.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformGy.png");
    t7.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/doodleRight.png");
    t8.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/doodleATK.png");
    t9.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/bullet.png");
    t10.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/plat.spring.png");
    t11.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/plat.spring2.png");
    t12.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/p-brown-1.png");
    t13.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/p-brown-2.png");
    t14.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/p-brown-3.png");
    t15.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/p-brown-4.png");
    t16.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/p-brown-5.png");
    t17.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/p-brown-6.png");
    t18.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/bat1.png");
    t19.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/bat2.png");
    t20.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/bat3.png");
    t21.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/bg-grid.png");
    t22.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Propeller_1_1.png");
    t23.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Propeller_5_1.png");
    t24.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Propeller_3_1.png");
    t25.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Propeller_4_1.png");
    t26.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/topbar.png");
    t27.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/0.png");
    t28.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/1.png");
    t29.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/2.png");
    t30.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/3.png");
    t31.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/4.png");
    t32.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/5.png");
    t33.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/6.png");
    t34.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/7.png");
    t35.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/8.png");
    t36.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/9.png");
    Sprite sMENU(t1), sPlatG(t2), sPersLeftt(t3), sPlatB(t4), sGameOver(t5), sPlatGy(t6)
        , sPersRight(t7), sPersATK(t8), SBullet(t9), sPlatGSp(t10), sPlatGSp2(t11), sPlatBrown1(t12),
        sPlatBrown2(t13), sPlatBrown3(t14), sPlatBrown4(t15), sPlatBrown5(t16), sPlatBrown6(t17),
        sPlatDevil_1(t18), sPlatDevil_2(t19), sPlatDevil_3(t20), sPlatDevil_2_2(t19),sBack_grid(t21),
        sPropeller_1(t22), sPropeller_2(t23), sPropeller_3(t24), sPropeller_4(t25),sTopbar(t26)
        , s0(t27), s1(t28), s2(t29), s3(t30), s4(t31), s5(t32), s6(t33), s7(t34), s8(t35), s9(t36);


    enum CHOSEMENU {PLAY,MENU,SCORE};
    CHOSEMENU CHOSEMENU = MENU;
STAR:

    srand(time(0));

   // RenderWindow app(VideoMode(400, 533), "Doodle Game!");
     // RenderWindow app(VideoMode(400, 650), "Doodle Game!");
   // app.setFramerateLimit(60);


    point bullet[1000],platchosen[40],platdelbrown[40],propllerdel
        ,Devil{};
    Devil.x = 0;
    Devil.y = 650-67;

    enum eDirecton { LEFT = 0, RIGHT,  ATK, };
    eDirecton dir = LEFT;


    enum amongspeedoodle { Normal, Spring, Propeller, Rocket};
    amongspeedoodle speeddoodle = Normal;

    enum propller {propller_1, propller_2, propller_3, propller_4 };
    propller framepropller = propller_1;
    bool propller_on = false;
    bool propller_out = false;




    enum Chosenblock { G,Gsp,Gsp2,B,Gy,blank,Br};
    Chosenblock chosenbloack[40] ;
    bool Greensp[40];
    for (int i = 0; i < 40; i++)
    {
        chosenbloack[i] = blank;
        Greensp[i] = false;
    }

    enum frambrown { Br1, Br2, Br3, Br4,Br5,Br6 };
    frambrown brownfram[40];
    bool brownout[40];
    for (int i = 0; i < 40; i++)
    {
        brownout[i] = false;
    }

    enum framDevil { DeVil1_1, DeVil1_2 ,DeVil1_3, DeVil1_4, DeVil1_5, DeVil1_6, DeVil1_7, DeVil1_8, DeVil1_9, DeVil1_10, DeVil1, DeVil2, DeVil3,DeVil4};
    framDevil DeVilfram;
    enum DirecDevil { LU, LD, RU, RD };
    DirecDevil DeVilDirec;
    int heartDevil;
    int framefristseeDevil = 0;
    int loopdelayfristseeDevil = 0;
    bool Devilalive = false;
        DeVilfram = DeVil1_1;

            switch (randomrang(0, 4))
            {
            case 1:
                DeVilDirec = LU;
                break;
            case 2:
                DeVilDirec = LD;
                break;
            case 3:
                DeVilDirec = RU;
                break;
            case 4:
                DeVilDirec = RD;
                break;
            default:
                DeVilDirec = LU;
                break;
            }
        
    
            


    int x = 200, y =650-100, h = 400;
    switch (CHOSEMENU)
    {
    case PLAY:

        x = 200;
        y = 650 - 100;
        break;
    case MENU:

        x = 30 + 10;
        y = 520 - 60;
        break;
    case SCORE:
        break;
    default:
        break;
    }

    float dx = 0, dy = 0;
    bool directionplatB[40];
    bool directionplatGy[40];
    int score = 0;
    int allb = 0;
    int LEVEL = 1;
    int prexnew = 0;
    int xrownew = 0;
        int prex = 0;
        int prey = 0;
        int xrow = 0;
        int yrow = -1;
        bool yk = false;
        int blockg=32;
        
        for (int i = 0; i < blockg-4; i++)
        {
            if (i % 4 == 0)
            {
                if (yk)
                {
                    prey = 80 + (yrow * 80);
                 //   prey = 182 + (yrow * 168);
                }
                yrow++;
                yk = true;
            }
            if (i % 4 == 0)
            {
                prex = 0;
                xrow = 0;
            }
            platchosen[i].x = randomrang(prex, 100 + ((xrow * 100) - 60));
            platchosen[i].y = randomrang(prey, 80 + ((yrow * 80) - 20));
           //platchosen[i].x = randomrang(prex, 140 + ((xrow * 126) - 55));
            //platchosen[i].y = randomrang(prey, 182 + ((yrow * 168) - 16));
            chosenbloack[i] = G;

         // prex = 140 + (xrow * 126);
            prex = 100 + (xrow * 100);
            xrow++;
            cout << "  platplatchosen[" << i << "].x : " << platchosen[i].x << "  platplatchosen[" << i << "].y : " << platchosen[i].y << endl;
        }
        platchosen[31].x = 160;
        platchosen[31].y = 650-20;
        chosenbloack[31] = G;
        platchosen[30].x = 240;
        platchosen[30].y = 650-20;
        chosenbloack[30] = G;
        platchosen[29].x = 100;
        platchosen[29].y = 650 - 40;
        chosenbloack[29] = G;
        platchosen[28].x = 300;
        platchosen[28].y = 650 - 40;
        chosenbloack[28] = G;
        /*
         for (int i = 0; i < 40; i++)
                    {
                        chosenbloack[i] = blank;
                    }
        
         */


        int countblock = 32;
        int arryblock[40];


        int scoreold = 0;
       

        enum ChosenblockDUMME { G_dumme, Gsp_dumme, B_dumme, blank_dumme, Br_dumme   };
        ChosenblockDUMME chosenbloackDumme[40];
        for (int i = 0; i < 40; i++)
        {
            chosenbloackDumme[i] = blank_dumme;
        }
    while (app.isOpen())
    {
        srand(time(0));
        Event e;
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }
        while (true)
        {
            if (CHOSEMENU == PLAY)
            {
                if (Keyboard::isKeyPressed(Keyboard::Right))
                {
                    x += 3;
                    dir = RIGHT;

                }
                if (Keyboard::isKeyPressed(Keyboard::Left))
                {
                    x -= 3;
                    dir = LEFT;

                }

                if (((Keyboard::isKeyPressed(Keyboard::Up))) && !propller_on)
                {
                    bullet[allb].x = x + 15;
                    bullet[allb].y = y;
                    allb++;
                    dir = ATK;
                    fflush(stdin);
                }
                if (Keyboard::isKeyPressed(Keyboard::M))
                {
                    system("CLS");
                    CHOSEMENU = MENU;
                    goto STAR;

                }
                if (score - scoreold >= 200 && propller_on)
                {
                    speeddoodle = Normal;
                    propller_on = false;
                    propller_out = true;
                    if (dir == LEFT)
                    {
                        propllerdel.x = x + 19;
                        propllerdel.y = y - 9;

                    }
                    else if (dir == RIGHT)
                    {
                        propllerdel.x = x - 2;
                        propllerdel.y = y - 9;

                    }
                }

                switch (speeddoodle)
                {
                case Normal:
                    dy += 0.2;
                    y += dy;
                    break;
                case Spring:
                    dy  +0.2;
                    y += dy;
                    break;
                case Propeller:
                    dy = -8;
                    y += dy;
                    break;
                case Rocket:
                    dy = -10;
                    y += dy;
                    break;
                default:
                    break;
                }
                // dy += 0.2;   //force g
               //  y += dy;     //jump
                 //x  cross

                if (x > 380)
                {
                    x = -23;
                }
                else if (x < -23)
                {
                    x = 380;
                }


              

                if (countblock == 32)
                {
                   

                    
                    for (int i = 0; i < 40; i++)
                    {
                        chosenbloackDumme[i] = blank_dumme;
                    }

                    
                    
                    bool rowpass[8];
                    bool consand[32];
                    for (int i = 0; i < 8; i++)
                    {

                        rowpass[i] = false;
                    }
                    for (int i = 0; i < blockg; i++)
                    {
                        consand[i] = false;

                    }

                    int row = 3;
                    int low = 0;
                    //chose constan block//
                    for (int i = 0; i < 8; i++)
                    {
                        int keeprandomrang;
                        keeprandomrang = randomrang(low, row);
                        cout << "CONSTANDDD: " << keeprandomrang << endl;
                        consand[keeprandomrang] = true;
                        switch (LEVEL)
                        {
                        case 1:
                            cout << "block_B(100) :  " << block_B(100) << endl;
                            if (block_Gsp(5))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_B(100))
                            {
 
                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;
                                cout << " rowpass[i]: " << i << endl;
                            }
                            else if(block_G(100))
                            {
                                cout << "noBBB ??? WHY "  << endl;
                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }
                            cout << "+++++++++++ " << endl; 
                            break;

                        default:
                            break;
                        }
                        low += 4;
                        row += 4;
                    }

                    //chose normal block//
                    int row_2 = 3;
                    int low_2 = 0;
                    for (int i = 0; i < 8; i++)
                    {
                        cout << "i : " << i << endl;
                        if (!rowpass[i])
                        {
                            cout << "findddddddddddd "<< endl;
                           cout << "low_2 : " << low_2 << endl;
                            cout << "row_2 : " << row_2 << endl;
                            for (int j = low_2; j <= row_2; j++)
                            {
                                cout << "j : " << j << endl;
                                if (!consand[j])
                                {
                                    switch (LEVEL)
                                    {
                                    case 1:
                                        if (haveblock(80))
                                        {
                                            if (block_Br(10))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;
                                            }
                                            else if (block_Gsp(20))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_G(80))
                                            {
                                                chosenbloackDumme[j] = G_dumme;
                                            }
                                        }
                                        else
                                        {
                                            chosenbloackDumme[j] = blank_dumme;
                                        }
                                        if (!Devilalive)
                                        {
                                            if (have_Devil(0))
                                            {
                                                Devilalive = true;
                                                heartDevil = 3;
                                            }
                                        }

                                        break;

                                    default:
                                        break;
                                    }



                                }
                            }
                            
                        }
                        row_2 += 4;
                        low_2 += 4;

                    }
                    countblock = 0;
                }


               // system("pause");

                // map up
                    /*
                if (countblock == 32)
                {
                    for (int i = 0; i < blockg; i++)
                    {
                        arryblock[i] = randomrang(0, 9);
                    }

                    switch (LEVEL)
                    {
                    case 1:
                        break;
                    case 2:
                        for (int i = 0; i < blockg; i++)
                        {
                            if (arryblock[i] == 0)
                            {
                                switch (i)
                                {
                                case 0:
                                    arryblock[i + 1] = 10;
                                    arryblock[i + 2] = 10;
                                    break;
                                case 1:
                                    arryblock[i + 1] = 10;
                                    arryblock[i - 1] = 10;
                                    break;
                                case 2:
                                    arryblock[i - 1] = 10;
                                    arryblock[i - 2] = 10;
                                    break;
                                case 3:
                                    arryblock[i + 1] = 10;
                                    arryblock[i + 2] = 10;
                                    break;
                                case 4:
                                    arryblock[i + 1] = 10;
                                    arryblock[i - 1] = 10;
                                    break;
                                case 5:
                                    arryblock[i - 1] = 10;
                                    arryblock[i - 2] = 10;
                                    break;
                                case 6:
                                    arryblock[i + 1] = 10;
                                    arryblock[i + 2] = 10;
                                    break;
                                case 7:
                                    arryblock[i + 1] = 10;
                                    arryblock[i - 1] = 10;
                                    break;
                                case 8:
                                    arryblock[i - 1] = 10;
                                    arryblock[i - 2] = 10;
                                    break;
                                default:
                                    break;
                                }
                            }

                        }
                        break;
                    case 3:

                        while ((arryblock[0] == 9 || arryblock[0] == 8 || arryblock[0] == 7) && (arryblock[1] == 9 || arryblock[1] == 8 || arryblock[1] == 7) && (arryblock[2] == 9 || arryblock[2] == 8 || arryblock[2] == 7))
                        {
                            int indexi = randomrang(0, 2);
                            arryblock[indexi] = randomrang(0, 8);
                        }
                        while ((arryblock[3] == 9 || arryblock[3] == 8 || arryblock[3] == 7) && (arryblock[4] == 9 || arryblock[4] == 8 || arryblock[4] == 7) && (arryblock[5] == 9 || arryblock[5] == 8 || arryblock[5] == 7))
                        {
                            int indexi = randomrang(3, 5);
                            arryblock[indexi] = randomrang(0, 8);
                        }
                        while ((arryblock[6] == 9 || arryblock[6] == 8 || arryblock[6] == 7) && (arryblock[7] == 9 || arryblock[7] == 8 || arryblock[7] == 7) && (arryblock[8] == 9 || arryblock[8] == 8 || arryblock[8] == 7))
                        {
                            int indexi = randomrang(6, 9);
                            arryblock[indexi] = randomrang(0, 8);
                        }

                        break;
                    case 4:

                        while ((arryblock[0] == 9) && (arryblock[1] == 9) && (arryblock[2] == 9))
                        {
                            int indexi = randomrang(0, 2);
                            arryblock[indexi] = randomrang(0, 8);
                        }
                        while ((arryblock[3] == 9) && (arryblock[4] == 9) && (arryblock[5] == 9))
                        {
                            int indexi = randomrang(3, 5);
                            arryblock[indexi] = randomrang(0, 8);
                        }
                        while ((arryblock[6] == 9) && (arryblock[7] == 9) && (arryblock[8] == 9))
                        {
                            int indexi = randomrang(6, 9);
                            arryblock[indexi] = randomrang(0, 8);
                        }

                        for (int i = 0; i < blockg; i++)
                        {
                            if (arryblock[i] == 0)
                            {
                                switch (i)
                                {
                                case 0:
                                    arryblock[i + 1] = 10;
                                    arryblock[i + 2] = 10;
                                    break;
                                case 1:
                                    arryblock[i + 1] = 10;
                                    arryblock[i - 1] = 10;
                                    break;
                                case 2:
                                    arryblock[i - 1] = 10;
                                    arryblock[i - 2] = 10;
                                    break;
                                case 3:
                                    arryblock[i + 1] = 10;
                                    arryblock[i + 2] = 10;
                                    break;
                                case 4:
                                    arryblock[i + 1] = 10;
                                    arryblock[i - 1] = 10;
                                    break;
                                case 5:
                                    arryblock[i - 1] = 10;
                                    arryblock[i - 2] = 10;
                                    break;
                                case 6:
                                    arryblock[i + 1] = 10;
                                    arryblock[i + 2] = 10;
                                    break;
                                case 7:
                                    arryblock[i + 1] = 10;
                                    arryblock[i - 1] = 10;
                                    break;
                                case 8:
                                    arryblock[i - 1] = 10;
                                    arryblock[i - 2] = 10;
                                    break;
                                default:
                                    break;
                                }
                            }
                        }
                        break;
                    case 5: /* can not*//*
                        for (int i = 0; i < blockg; i++)
                        {
                            if (arryblock[i] == 5)
                            {
                                switch (i)
                                {
                                case 0:
                                    arryblock[i + 3] = 10;
                                    arryblock[i + 6] = 10;
                                    break;
                                case 1:
                                    arryblock[i + 3] = 10;
                                    arryblock[i + 6] = 10;
                                    break;
                                case 2:
                                    arryblock[i + 3] = 10;
                                    arryblock[i + 6] = 10;
                                    break;
                                case 3:
                                    arryblock[i - 3] = 10;
                                    arryblock[i + 3] = 10;
                                    break;
                                case 4:
                                    arryblock[i - 3] = 10;
                                    arryblock[i + 3] = 10;
                                    break;
                                case 5:
                                    arryblock[i - 3] = 10;
                                    arryblock[i + 3] = 10;
                                    break;
                                case 6:
                                    arryblock[i - 3] = 10;
                                    arryblock[i - 6] = 10;
                                    break;
                                case 7:
                                    arryblock[i - 3] = 10;
                                    arryblock[i - 6] = 10;
                                    break;
                                case 8:
                                    arryblock[i - 3] = 10;
                                    arryblock[i - 6] = 10;
                                    break;
                                default:
                                    break;
                                }
                            }
                        }
                    case 6:
                        /*spring*//*
                        break;

                    case 7:
                        if (!Devilalive)
                        {
                            int chosedevil;
                            chosedevil = randomrang(-1, 9);
                            if (chosedevil == -1 || chosedevil == 0 || chosedevil == 1 || chosedevil == 2 || chosedevil == 3 || chosedevil == 4 || chosedevil == 5 || chosedevil == 6)
                            {
                                Devilalive = true;
                                heartDevil = 3;
                            }
                        }
                        break;
                    default:
                        break;
                    }

                    countblock = 0;
                }
                */
                if (y < h)
                {
                    score += 1;
                    for (int i = 0; i < blockg; i++)
                    {
                        y = h;
                        platchosen[i].y = platchosen[i].y - dy;
                        if (platchosen[i].y > 650)
                        {
                            if (xrownew % 4 == 0)
                            {
                                xrownew = 0;
                                prexnew = 0;

                            }
                            platchosen[i].y = 0;
                            platchosen[i].x = randomrang(prexnew, 100 + ((xrownew * 100) - 60));


                                switch (chosenbloackDumme[i])
                                {
                                case  G_dumme:
                                    chosenbloack[i] = G;
                                    break;
                                case  Gsp_dumme:
                                    chosenbloack[i] = G;
                                    break;
                                case  B_dumme:
                                    chosenbloack[i] = B;
                                    break;
                                case  Br_dumme:
                                    chosenbloack[i] = Br;
                                    break;
                                case  blank_dumme:
                                    chosenbloack[i] = blank;
                                    break;
                                default:
                                    break;
                                }
                            /*
                            switch (LEVEL)
                            {
                            case 1:
                                chosenbloack[i] = G;
                                break;
                            case 2:
                                if (arryblock[i] == 0) { chosenbloack[i] = B; }
                                else if (arryblock[i] == 10) { chosenbloack[i] = blank; }
                                else { chosenbloack[i] = G; }
                                break;
                            case 3:
                                if (arryblock[i] == 9 || arryblock[i] == 8 || arryblock[i] == 7) { chosenbloack[i] = Br; }
                                else { chosenbloack[i] = G; }
                                break;
                            case 4:
                                if (arryblock[i] == 0) { chosenbloack[i] = B; }
                                else if (arryblock[i] == 10) { chosenbloack[i] = blank; }
                                else if (arryblock[i] == 9) { chosenbloack[i] = Br; }
                                else { chosenbloack[i] = G; }
                                break;
                            case 5:
                                if (arryblock[i] == 5) { chosenbloack[i] = Gy; }
                                else if (arryblock[i] == 10) { chosenbloack[i] = blank; }
                                else { chosenbloack[i] = G; }
                                break;
                            case 6:
                                if (arryblock[i] == 6 || arryblock[i] == 5 || arryblock[i] == 4 || arryblock[i] == 3) { chosenbloack[i] = Gsp; }
                                else { chosenbloack[i] = G; }
                                break;

                            case 7:
                                chosenbloack[i] = G;
                                break;
                            default:
                                break;
                            }
                            */
                            prexnew = 100 + (xrownew * 100);
                            xrownew++;
                            // cout << "  platplatchosen[" << i << "].x : " << platchosen[i].x << "  platplatchosen[" << i << "].y : " << platchosen[i].y << endl;
                            countblock++;
                        }
                    }



                }

                // jump plat
                int jump = -8;
                int jumpsp = -16;
                for (int i = 0; i < blockg; i++)
                {
                    switch (chosenbloack[i])
                    {
                    case G:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            // Sleep(500);
                             // if jump and what to do ?
                            dy = jump; //-16 spring
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {

                            //Sleep(500);
                            // if jump and what to do ?
                            dy = jump; //-16 spring
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            dy = jump;
                        }
                        break;
                    case Gsp:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            if ((x + 50 >= platchosen[i].x + 5) && (x <= platchosen[i].x))
                            {
                                dy = jumpsp;
                                Greensp[i] = true;
                                /*
                                speeddoodle = Rocket;
                                scoreold = score;
                                propller_on = true;
                                */
                            }
                            else
                            {
                                dy = jump;
                            }
                            // Sleep(500);
                             // if jump and what to do ?

                            //dy = -16; //-16 spring
                           // Greensp[i] = true;
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {
                            if ((x + 31 >= platchosen[i].x + 5) && (x <= platchosen[i].x + 12))
                            {
                                dy = jumpsp;
                                Greensp[i] = true;
                                /*
                                speeddoodle = Rocket;
                                scoreold = score;
                                propller_on = true;*/
                            }
                            else
                            {
                                dy = jump;
                            }
                            //Sleep(500);
                            // if jump and what to do ?
                            //dy = -16; //-16 spring
                            //Greensp[i] = true;
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            if ((x + 34 >= platchosen[i].x + 5) && (x <= platchosen[i].x + 15))
                            {
                                dy = jumpsp;
                                Greensp[i] = true;
                                /*
                                dir = RIGHT;
                                speeddoodle = Rocket;
                                scoreold = score;
                                propller_on = true;
                                */
                            }
                            else
                            {
                                dy = jump;
                            }
                        }
                        break;
                    case B:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            // Sleep(500);
                             // if jump and what to do ?
                            dy = jump; //-16 spring
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {

                            //Sleep(500);
                            // if jump and what to do ?
                            dy = jump; //-16 spring
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            dy = jump;
                        }
                        break;
                    case Br:
                        if (!brownout[i])
                        {
                            if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                            {
                                // Sleep(500);
                                 // if jump and what to do ?
                                platdelbrown[i].x = platchosen[i].x;
                                platdelbrown[i].y = platchosen[i].y;
                                platchosen[i].x = 500; //-16 spring

                                brownout[i] = true;
                                brownfram[i] = Br1;


                            }
                            if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                            {

                                //Sleep(500);
                                // if jump and what to do ?
                                platdelbrown[i].x = platchosen[i].x;
                                platdelbrown[i].y = platchosen[i].y;
                                platchosen[i].x = 500;  //-16 spring
                                brownout[i] = true;
                                brownfram[i] = Br1;
                            }
                            if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                            {
                                platdelbrown[i].x = platchosen[i].x;
                                platdelbrown[i].y = platchosen[i].y;
                                platchosen[i].x = 500;  //-16 spring
                                brownout[i] = true;
                                brownfram[i] = Br1;
                            }
                        }
                        break;
                    case Gy:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            // Sleep(500);
                             // if jump and what to do ?
                            dy = jump; //-16 spring
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {

                            //Sleep(500);
                            // if jump and what to do ?
                            dy = jump; //-16 spring
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            dy = jump;
                        }
                        break;
                    default:
                        break;
                    }
                }


                for (int i = 0; i < blockg; i++)
                {
                    switch (chosenbloack[i])
                    {
                    case B:
                        if (!directionplatB[i])
                        {
                            platchosen[i].x++;
                        }
                        else if (directionplatB[i])
                        {
                            platchosen[i].x--;
                        }
                        if (platchosen[i].x == 335)
                        {
                            directionplatB[i] = true;
                        }
                        else if (platchosen[i].x == 0)
                        {
                            directionplatB[i] = false;
                        }
                        break;
                    default:
                        break;
                    }

                }

                /* can not*/
                /*

                for (int i = 0; i < blockg; i++)
                {
                    switch (chosenbloack[i])
                    {
                    case Gy:
                        if (!directionplatGy[i])
                        {
                            platchosen[i].y--;

                        }
                        else if (directionplatGy[i])
                        {
                            platchosen[i].y++;

                        }
                        if (platchosen[i].y == 0 )
                        {
                           directionplatGy[i] = true;
                        }
                         if(platchosen[i].y == 520 )
                        {
                            directionplatGy[i] = false;
                        }
                        break;
                    default:
                        break;
                    }

                }
                */





                sPersLeftt.setPosition(x, y);
                sPersRight.setPosition(x, y);
                sPersATK.setPosition(x, y);

                app.draw(sBack_grid);
                // app.draw(sBackground);

                if (dir == LEFT)
                {

                    app.draw(sPersLeftt);
                }
                if (dir == RIGHT)
                {
                    app.draw(sPersRight);
                }
                if (dir == ATK)
                {
                    app.draw(sPersATK);
                }




                for (int i = 0; i < blockg; i++)
                {
                    switch (chosenbloack[i])
                    {
                    case G:
                        sPlatG.setPosition(platchosen[i].x, platchosen[i].y);
                        app.draw(sPlatG);
                        break;
                    case Gsp:
                        if (Greensp[i])
                        {
                            sPlatGSp2.setPosition(platchosen[i].x, platchosen[i].y);
                            app.draw(sPlatGSp2);
                            if (platchosen[i].y <= 0)
                            {

                                Greensp[i] = false;
                            }

                        }
                        else
                        {
                            sPlatGSp.setPosition(platchosen[i].x, platchosen[i].y);
                            app.draw(sPlatGSp);
                        }
                        break;
                    case B:
                        sPlatB.setPosition(platchosen[i].x, platchosen[i].y);
                        app.draw(sPlatB);
                        break;
                    case Br:
                        if (brownout[i])
                        {
                            switch (brownfram[i])
                            {
                            case Br1:
                                sPlatBrown1.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown1);
                                brownfram[i] = Br2;
                                platdelbrown[i].y += 6;
                                break;
                            case Br2:
                                sPlatBrown2.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown2);
                                brownfram[i] = Br3;
                                platdelbrown[i].y += 6;
                                break;
                            case Br3:
                                sPlatBrown3.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown3);
                                brownfram[i] = Br4;
                                platdelbrown[i].y += 6;
                                break;
                            case Br4:
                                sPlatBrown4.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown4);
                                brownfram[i] = Br5;
                                platdelbrown[i].y += 6;
                                break;
                            case Br5:
                                sPlatBrown5.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown5);
                                brownfram[i] = Br6;
                                platdelbrown[i].y += 6;
                                break;
                            case Br6:
                                if (platdelbrown[i].y > 650)
                                {
                                    brownout[i] = false;
                                    platdelbrown[i].x = -100;
                                }
                                sPlatBrown6.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown6);
                                platdelbrown[i].y += 6;
                                break;
                            default:
                                break;
                            }
                        }
                        else
                        {
                            sPlatBrown1.setPosition(platchosen[i].x, platchosen[i].y);
                            app.draw(sPlatBrown1);
                        }
                        break;
                    case Gy:
                        sPlatGy.setPosition(platchosen[i].x, platchosen[i].y);
                        app.draw(sPlatGy);
                        break;
                    default:
                        break;
                    }

                }

                if (Devilalive)
                {
                    switch (DeVilfram)
                    {
                    case DeVil1_1:
                        sPlatDevil_1.setPosition(Devil.x, Devil.y);
                        app.draw(sPlatDevil_1);
                        DeVilfram = DeVil1_2;
                        break;
                    case DeVil1_2:
                        sPlatDevil_1.setPosition(-200, Devil.y);
                        app.draw(sPlatDevil_1);
                        loopdelayfristseeDevil++;
                        if (loopdelayfristseeDevil >= 8)
                        {
                            DeVilfram = DeVil1_3;
                        }
                        else
                        {
                            DeVilfram = DeVil1_2;
                        }
                        break;
                    case DeVil1_3:
                        sPlatDevil_1.setPosition(-200, Devil.y);
                        app.draw(sPlatDevil_1);
                        framefristseeDevil++;
                        loopdelayfristseeDevil = 0;
                        if (framefristseeDevil >= 12)
                        {
                            DeVilfram = DeVil1;
                        }
                        else
                        {
                            DeVilfram = DeVil1_1;
                        }
                        break;
                    case DeVil1:
                        sPlatDevil_1.setPosition(Devil.x, Devil.y);
                        app.draw(sPlatDevil_1);
                        DeVilfram = DeVil2;
                        break;
                    case DeVil2:
                        sPlatDevil_2.setPosition(Devil.x, Devil.y);
                        app.draw(sPlatDevil_2);
                        DeVilfram = DeVil3;
                        break;
                    case DeVil3:
                        sPlatDevil_3.setPosition(Devil.x, Devil.y);
                        app.draw(sPlatDevil_3);
                        DeVilfram = DeVil4;
                        switch (DeVilDirec)
                        {
                        case LU:
                            if (Devil.y < 105)
                            {
                                Devil.x -= 10;
                                Devil.y -= 10;
                            }
                            else
                            {
                                Devil.x -= 25;
                                Devil.y -= 25;
                            }
                            break;
                        case LD:
                            if (Devil.y < 105)
                            {
                                Devil.x -= 10;
                                Devil.y += 10;
                            }
                            else
                            {
                                Devil.x -= 25;
                                Devil.y += 25;
                            }
                            break;
                        case RU:
                            if (Devil.y < 105)
                            {
                                Devil.x += 10;
                                Devil.y -= 10;
                            }
                            else
                            {
                                Devil.x += 25;
                                Devil.y -= 25;
                            }
                            break;
                        case RD:
                            if (Devil.y < 105)
                            {
                                Devil.x += 10;
                                Devil.y += 10;
                            }
                            else
                            {
                                Devil.x += 25;
                                Devil.y += 25;
                            }
                            break;
                        default:
                            break;
                        }

                        if (Devil.x <= 0 && DeVilDirec == LU)
                        {
                            DeVilDirec = RU;
                        }
                        else if (Devil.x <= 0 && DeVilDirec == LD)
                        {
                            DeVilDirec = RD;
                        }
                        else if (Devil.x >= 400 - 112 && DeVilDirec == RU)
                        {
                            DeVilDirec = LU;
                        }
                        else if (Devil.x >= 400 - 112 && DeVilDirec == RD)
                        {
                            DeVilDirec = LD;
                        }
                        else if (Devil.y <= 0 && DeVilDirec == LU)
                        {
                            DeVilDirec = LD;
                        }
                        else if (Devil.y <= 0 && DeVilDirec == RU)
                        {
                            DeVilDirec = RD;
                        }
                        else if (Devil.y >= 105 - 67 && DeVilDirec == LD)
                        {
                            DeVilDirec = LU;
                        }
                        else if (Devil.y >= 105 - 67 && DeVilDirec == RD)
                        {
                            DeVilDirec = RU;
                        }
                        break;
                    case DeVil4:
                        sPlatDevil_2_2.setPosition(Devil.x, Devil.y);
                        app.draw(sPlatDevil_2_2);
                        DeVilfram = DeVil1;
                        break;
                    default:
                        break;
                    }
                }
                if (propller_on)
                {
                    switch (framepropller)
                    {
                    case propller_1:
                        if (dir == LEFT)
                        {
                            sPropeller_1.setPosition(x + 19, y - 9);
                        }
                        else if (dir == RIGHT)
                        {
                            sPropeller_1.setPosition(x - 2, y - 9);
                        }
                        app.draw(sPropeller_1);
                        framepropller = propller_2;
                        break;
                    case propller_2:
                        if (dir == LEFT)
                        {
                            sPropeller_2.setPosition(x + 19, y - 21);
                        }
                        else if (dir == RIGHT)
                        {
                            sPropeller_2.setPosition(x - 2, y - 21);
                        }
                        app.draw(sPropeller_2);
                        framepropller = propller_3;
                        break;
                    case propller_3:
                        if (dir == LEFT)
                        {
                            sPropeller_3.setPosition(x + 19, y - 21);
                        }
                        else if (dir == RIGHT)
                        {
                            sPropeller_3.setPosition(x - 2, y - 21);
                        }
                        app.draw(sPropeller_3);
                        framepropller = propller_4;
                        break;
                    case propller_4:
                        if (dir == LEFT)
                        {
                            sPropeller_4.setPosition(x + 19, y - 21);
                        }
                        else if (dir == RIGHT)
                        {
                            sPropeller_4.setPosition(x - 2, y - 21);
                        }
                        app.draw(sPropeller_4);
                        framepropller = propller_3;
                        break;
                    default:
                        break;
                    }
                }
                else if (propller_out && !propller_on)
                {
                    if (propllerdel.y > 650)
                    {
                        propller_on = false;
                        propller_out = false;
                    }
                    propllerdel.y += 8;
                    sPropeller_1.setPosition(propllerdel.x, propllerdel.y);
                    app.draw(sPropeller_1);
                }











                if (allb > 0)
                {
                    for (int i = 0; i < allb; i++)
                    {
                        if (bullet[i].y >= 0)
                        {
                            bullet[i].y -= 12;
                        }
                        if ((bullet[i].x + 10 >= Devil.x) && (bullet[i].x <= Devil.x + 112) && (bullet[i].y <= Devil.y + 67) && (bullet[i].y - 10 >= Devil.y) && bullet[i].y >= 0 && Devilalive)
                        {
                            heartDevil--;
                            if (heartDevil == 0)
                            {
                                Devilalive = false;
                                DeVilfram = DeVil1_1;
                                framefristseeDevil = 0;
                                loopdelayfristseeDevil = 0;
                                Devil.x = 0;
                                Devil.y = 650 - 67;
                            }
                            bullet[i].y = -10;
                        }
                        if (bullet[i].y >= 0)
                        {
                            SBullet.setPosition(bullet[i].x, bullet[i].y);
                            app.draw(SBullet);
                        }
                    }
                }


                sTopbar.setPosition(0, 0);
                app.draw(sTopbar);
                int scorefordigit = score;
                int digit = 1;
                point position_digit;
                int Total_digits = to_string(score).length();
                for (int digit = 1; digit <= Total_digits; digit++)
                {
                    int number_digit = scorefordigit;
                    if (Total_digits != 1)
                    {
                        for (int k = 1; k <= Total_digits - digit; k++)
                        {
                            number_digit /= 10;
                        }
                        number_digit = number_digit % 10;
                        switch (digit)
                        {
                        case 1:
                            position_digit.x = 10;
                            position_digit.y = 5;
                            break;
                        case 2:
                            position_digit.x = 35;
                            position_digit.y = 5;
                            break;
                        case 3:

                            position_digit.x = 60;
                            position_digit.y = 5;
                            break;
                        case 4:
                            position_digit.x = 85;
                            position_digit.y = 5;
                            break;
                        case 5:
                            position_digit.x = 110;
                            position_digit.y = 5;
                            break;
                        case 6:
                            position_digit.x = 135;
                            position_digit.y = 5;
                            break;
                        case 7:
                            position_digit.x = 160;
                            position_digit.y = 5;
                            break;
                        case 8:
                            position_digit.x = 185;
                            position_digit.y = 5;
                            break;
                        default:
                            break;
                        }

                        switch (number_digit)
                        {
                        case 0:
                            s0.setPosition(position_digit.x, position_digit.y);
                            app.draw(s0);
                            break;
                        case 1:
                            s1.setPosition(position_digit.x, position_digit.y);
                            app.draw(s1);
                            break;
                        case 2:
                            s2.setPosition(position_digit.x, position_digit.y);
                            app.draw(s2);
                            break;
                        case 3:
                            s3.setPosition(position_digit.x, position_digit.y);
                            app.draw(s3);
                            break;
                        case 4:
                            s4.setPosition(position_digit.x, position_digit.y);
                            app.draw(s4);
                            break;
                        case 5:
                            s5.setPosition(position_digit.x, position_digit.y);
                            app.draw(s5);
                            break;
                        case 6:
                            s6.setPosition(position_digit.x, position_digit.y);
                            app.draw(s6);
                            break;
                        case 7:
                            s7.setPosition(position_digit.x, position_digit.y);
                            app.draw(s7);
                            break;
                        case 8:
                            s8.setPosition(position_digit.x, position_digit.y);
                            app.draw(s8);
                            break;
                        case 9:
                            s9.setPosition(position_digit.x, position_digit.y);;
                            app.draw(s9);
                            break;
                        default:
                            break;
                        }
                    }
                }



                //  cout << " LEVEL : " << LEVEL  << " score : " << score << " countblock : " << countblock << endl;
                //  cout << " LEVEL : " << LEVEL << " score : " << score  << endl;
                 //  cout << " x : " << x  << " y : " << y  << endl;



                if (score >= 1500)//dis 1
                {
                    LEVEL = 1;
                }
                else if (score >= 1000)//dis2
                {
                    LEVEL = 1;
                }
                else if (score >= 500)//no sp
                {
                    LEVEL = 1;

                }
                else if (score >= 0)//new color
                {
                    LEVEL = 1;
                }


                if (y > 650)
                {
                    sGameOver.setPosition((400 / 2) - 130, (650 / 2) - 130);
                    app.draw(sGameOver);
                    cout << "dawdawd" << endl;
                    // Sleep(10000); 
                    // system("cls"); //system("clear");
                     //  app.close();
                  //  goto STAR;
                }
              
                break;
            }


            if (CHOSEMENU == MENU)
            {
                if (dir == LEFT)
                {

                    app.draw(sPersLeftt);
                }
                if (dir == RIGHT)
                {
                    app.draw(sPersRight);
                }
                if (dir == ATK)
                {
                    app.draw(sPersATK);
                }
                    if (Keyboard::isKeyPressed(Keyboard::P))
                    {
                        system("CLS");
                        CHOSEMENU = PLAY;
                        goto STAR;

                    }
                   

                    platchosen[0].x = 30;
                    platchosen[0].y = 520;
                    dir = RIGHT;
                    int jump = -7;
                    dy += 0.2;
                    y += dy;
                    if ((x + 50 >= platchosen[0].x) && (x <= platchosen[0].x + 35) && (y + 52 >= platchosen[0].y) && (y + 52 <= platchosen[0].y + 14) && (dy > 0) && (dir == LEFT))
                    {
                        
                        dy = jump; 
                    }
                    if ((x + 31 >= platchosen[0].x) && (x <= platchosen[0].x + 47) && (y + 52 >= platchosen[0].y) && (y + 52 <= platchosen[0].y + 14) && (dy > 0) && (dir == RIGHT))
                    {

                       
                        dy = jump; 
                    }
                    if ((x + 34 >= platchosen[0].x) && (x <= platchosen[0].x + 50) && (y + 77 >= platchosen[0].y) && (y + 77 <= platchosen[0].y + 14) && (dy > 0) && (dir == ATK))
                    {
                        dy = jump;
                    }


                    app.draw(sMENU);

                    sPersRight.setPosition(x,y);
                    app.draw(sPersRight);
                    
                    sPlatG.setPosition(platchosen[0].x, platchosen[0].y);
                    app.draw(sPlatG);
                break;
            }
        }
           

        app.display();
       
    }






    return 0;
}
