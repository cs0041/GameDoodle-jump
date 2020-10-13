#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
using namespace sf;
using namespace std;




bool percentrandom(int arryblock, int percent)
{
    switch (percent)
    {
    case 0:
        return false;
        break;
    case 10:
        if (arryblock == 0)
        { return true;}
        else{return false;}
    case 20:
        if (arryblock == 0 || arryblock == 1)
        {
            return true;
        }
        else { return false; }
        break;
    case 30:
        if (arryblock == 0 || arryblock == 1 || arryblock == 2)
        {
            return true;
        }
        else { return false; }
        break;
    case 40:
        if (arryblock == 0 || arryblock == 1 || arryblock == 2 || arryblock == 3)
        {
            return true;
        }
        else { return false; }
        break;
    case 50:
        if (arryblock == 0 || arryblock == 1 || arryblock == 2 || arryblock == 3 || arryblock == 4)
        {
            return true;
        }
        else { return false; }
        break;
    case 60:
        if (arryblock == 0 || arryblock == 1 || arryblock == 2 || arryblock == 3 || arryblock == 4 || arryblock == 5)
        {
            return true;
        }
        else { return false; }
        break;
    case 70:
        if (arryblock == 0 || arryblock == 1 || arryblock == 2 || arryblock == 3 || arryblock == 4 || arryblock == 5 || arryblock == 6)
        {
            return true;
        }
        else { return false; }
        break;
    case 80:
        if (arryblock == 0 || arryblock == 1 || arryblock == 2 || arryblock == 3 || arryblock == 4 || arryblock == 5 || arryblock == 6 || arryblock == 7)
        {
            return true;
        }
        else { return false; }
        break;
    case 90:
        if (arryblock == 0 || arryblock == 1 || arryblock == 2|| arryblock == 3 || arryblock == 4 || arryblock == 5 || arryblock == 6 || arryblock == 7 || arryblock == 8)
        {
            return true;
        }
        else { return false; }
        break;
    case 100:
            return true;
        break;
    default:
        break;
    }
}
struct point
{
    int x, y;
};
int randomrang(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}

int main()
{
    Texture t1, t2, t3, t4, t5, t6, t7, t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,t19,t20;
    t1.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/background.png");
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
    Sprite sBackground(t1), sPlatG(t2), sPersLeftt(t3), sPlatB(t4), sGameOver(t5), sPlatGy(t6)
        , sPersRight(t7), sPersATK(t8), SBullet(t9), sPlatGSp(t10), sPlatGSp2(t11), sPlatBrown1(t12),
        sPlatBrown2(t13), sPlatBrown3(t14), sPlatBrown4(t15), sPlatBrown5(t16), sPlatBrown6(t17),
        sPlatDevil_1(t18), sPlatDevil_2(t19), sPlatDevil_3(t20), sPlatDevil_2_2(t19);


STAR:

    srand(time(0));

    RenderWindow app(VideoMode(400, 533), "Doodle Game!");
    app.setFramerateLimit(60);


    point bullet[1000],platchosen[20],platdelbrown[20]
        ,Devil{};
    Devil.x = 0;
    Devil.y = 533-67;

    enum eDirecton { LEFT = 0, RIGHT,  ATK, };
    eDirecton dir = LEFT;


    enum Chosenblock { G,Gsp,Gsp2,B,Gy,blank,Br};
    Chosenblock chosenbloack[10] ;
    bool Greensp[10];
    for (int i = 0; i < 10; i++)
    {
        Greensp[i] = false;
    }

    enum frambrown { Br1, Br2, Br3, Br4,Br5,Br6 };
    frambrown brownfram[10];
    bool brownout[10];
    for (int i = 0; i < 10; i++)
    {
        brownout[i] = false;
    }

    enum framDevil { DeVil1_1, DeVil1_2 ,DeVil1_3, DeVil1_4, DeVil1_5, DeVil1_6, DeVil1_7, DeVil1_8, DeVil1_9, DeVil1_10, DeVil1, DeVil2, DeVil3,DeVil4};
    framDevil DeVilfram;
    enum DirecDevil { LU, LD, RU, RD };
    DirecDevil DeVilDirec;
    int heartDevil;
    int framefristseeDevil = 0;
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
        
    



    int x = 100, y = 100, h = 200;
    float dx = 0, dy = 0;
    bool directionplatB[10];
    bool directionplatGy[10];
    int score = 0;
    int allb = 0;
    int LEVEL = 1;
    int prexnew = 14;
    int xrownew = 0;
        int prex = 14;
        int prey = 14;
        int xrow = 0;
        int yrow = -1;
        bool yk = false;
        int blockg=9;
        for (int i = 0; i < blockg; i++)
        {
            if (i % 3 == 0)
            {
                if (yk)
                {
                    prey = 182 + (yrow * 168);
                }
                yrow++;
                yk = true;
            }
            if (i % 3 == 0)
            {
                prex = 14;
                xrow = 0;
            }
            platchosen[i].x = randomrang(prex, 140 + ((xrow * 126) - 55));
            platchosen[i].y = randomrang(prey, 182 + ((yrow * 168) - 16));
            chosenbloack[i] = G;
            prex = 140 + (xrow * 126);
            xrow++;
        }
        int countblock = 9;
        int arryblock[10];
        int fordelaykeyborad=0;
    while (app.isOpen())
    {
        fordelaykeyborad++;
        srand(time(0));
        Event e;
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }

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
        if( ((Keyboard::isKeyPressed(Keyboard::Up)) ) && (fordelaykeyborad%6==0))
        {
            bullet[allb].x = x+15;
            bullet[allb].y = y;
            allb ++;
            dir = ATK;
            fflush(stdin);
        }
         dy += 0.2;   //force g
         y += dy;     //jump
         //x  cross

         if (x > 380)
         {
             x = -23;
         }
         else if (x < -23)
         {
             x = 380;
         }
        // map up
         if (countblock == 9)
         {
             for (int i = 0; i < blockg; i++)
             {
                 arryblock[i] = randomrang(0,9);
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
                 case 5: /* can not*/
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
                                 arryblock[i -3 ] = 10;
                                 arryblock[i -6 ] = 10;
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
                     /*spring*/
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
        if (y < h)
        {
            score += 1;
            for (int i = 0; i < blockg; i++)
            {
                y = h;
                platchosen[i].y = platchosen[i].y - dy;
                if (platchosen[i].y > 533)
                {
                    if (xrownew % 3 == 0)
                    {
                        xrownew = 0;
                        prexnew = 14;
         
                    }
                        platchosen[i].y = 0;
                        platchosen[i].x = randomrang(prexnew, 140 + ((xrownew * 126) - 55));

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
                            if (arryblock[i] == 0 ) { chosenbloack[i] = B; }
                            else if (arryblock[i] == 10) { chosenbloack[i] = blank; }
                            else if (arryblock[i] == 9 ) { chosenbloack[i] = Br; }
                            else { chosenbloack[i] = G; }
                            break;
                        case 5:
                            if (arryblock[i] == 5) { chosenbloack[i] = Gy; }
                            else if (arryblock[i] == 10) { chosenbloack[i] = blank; }
                            else { chosenbloack[i] = G; }
                            break;
                        case 6:
                            if (arryblock[i] == 6) { chosenbloack[i] = Gsp; }
                            else { chosenbloack[i] = G; }
                            break;
                            
                        case 7:
                            chosenbloack[i] = G;
                            break;
                        default:
                            break;
                        }
                   
                    prexnew = 140 + (xrownew * 126);
                    xrownew++;
                    cout << "  platplatchosen[" << i << "].x : " << platchosen[i].x << "  platplatchosen[" << i << "].y : " << platchosen[i].y << endl;
                    countblock++;
                }
            }
            
            
     
        }
        // jump plat
        for (int i = 0; i < blockg; i++)
        {
            switch (chosenbloack[i])
            {
            case G:
                if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                {
                    // Sleep(500);
                     // if jump and what to do ?
                    dy = -10; //-16 spring
                }
                if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                {

                    //Sleep(500);
                    // if jump and what to do ?
                    dy = -10; //-16 spring
                }
                if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                {
                    dy = -10;
                }
                break;
            case Gsp:
                if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                {
                    // Sleep(500);
                     // if jump and what to do ?
                    dy = -16; //-16 spring
                    Greensp[i] = true;
                }
                if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                {

                    //Sleep(500);
                    // if jump and what to do ?
                    dy = -16; //-16 spring
                    Greensp[i] = true;
                }
                if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                {
                    dy = -16;
                    Greensp[i] = true;
                }
                break;
            case B:
                if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                {
                    // Sleep(500);
                     // if jump and what to do ?
                    dy = -10; //-16 spring
                }
                if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                {

                    //Sleep(500);
                    // if jump and what to do ?
                    dy = -10; //-16 spring
                }
                if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                {
                    dy = -10;
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
                        platchosen[i].x =500; //-16 spring
                      
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
                    dy = -10; //-16 spring
                }
                if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                {

                    //Sleep(500);
                    // if jump and what to do ?
                    dy = -10; //-16 spring
                }
                if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                {
                    dy = -10;
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
                if( platchosen[i].x == 335)
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
      
        app.draw(sBackground);
       
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
                        platdelbrown[i].y +=6;
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
                    case Br6 :
                        if (platdelbrown[i].y > 530)
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
                DeVilfram = DeVil1_3;
                break;
            case DeVil1_3:
                sPlatDevil_1.setPosition(-200, Devil.y);
                app.draw(sPlatDevil_1);
                DeVilfram = DeVil1_4;
                break;
            case DeVil1_4:
                sPlatDevil_1.setPosition(-200, Devil.y);
                app.draw(sPlatDevil_1);
                DeVilfram = DeVil1_5;
                break;
            case DeVil1_5:
                sPlatDevil_1.setPosition(-200, Devil.y);
                app.draw(sPlatDevil_1);
                DeVilfram = DeVil1_6;
                break;
            case DeVil1_6:
                sPlatDevil_1.setPosition(-200, Devil.y);
                app.draw(sPlatDevil_1);
                DeVilfram = DeVil1_7;
                break;
            case DeVil1_7:
                sPlatDevil_1.setPosition(-200, Devil.y);
                app.draw(sPlatDevil_1);
                DeVilfram = DeVil1_8;
                break;
            case DeVil1_8:
                sPlatDevil_1.setPosition(-200, Devil.y);
                app.draw(sPlatDevil_1);
                DeVilfram = DeVil1_9;
                break;
            case DeVil1_9:
                sPlatDevil_1.setPosition(-200, Devil.y);
                app.draw(sPlatDevil_1);
                DeVilfram = DeVil1_10;
                break;
            case DeVil1_10:
                sPlatDevil_1.setPosition(-200, Devil.y);
                app.draw(sPlatDevil_1);
                framefristseeDevil++;
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

                if( Devil.x <= 0 && DeVilDirec == LU)
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
        



        if (allb > 0)
        {
            for (int i = 0; i < allb; i++)
            {
                            if (bullet[i].y >= 0)
                            {
                                bullet[i].y -= 12;
                            }
                            if ((bullet[i].x + 10 >= Devil.x) && (bullet[i].x <= Devil.x + 112) && (bullet[i].y <= Devil.y + 67) && (bullet[i].y-10 >= Devil.y ) && bullet[i].y>=0 && Devilalive)
                            {
                                heartDevil--;
                                if (heartDevil == 0)
                                {
                                    Devilalive = false;
                                    DeVilfram  = DeVil1_1;
                                    framefristseeDevil = 0;
                                    Devil.x = 0;
                                    Devil.y = 533 - 67;
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
        //cout << " LEVEL : " << LEVEL  << " score : " << score << " countblock : " << countblock << endl;
        app.display();

       
        if (score >= 1500)//dis 1
        {
            LEVEL = 7;
        }
        else if (score >= 1000)//dis2
        {
            LEVEL = 7;
        }
        else if (score >=500)//no sp
        {
            LEVEL = 7;

        }
        else if (score >= 100)//new color
        {
            LEVEL = 7;
        }


        if (y > 500)
        {
            sGameOver.setPosition((400 / 2) - 130, (534 / 2) - 130);
            app.draw(sGameOver);
            app.display();
            cout << "dawdawd" << endl;
            // Sleep(10000); 
            // system("cls"); //system("clear");
             //  app.close();
            goto STAR;
        }
    }
    return 0;
}
