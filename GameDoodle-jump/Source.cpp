#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
using namespace sf;
using namespace std;

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
    Texture t1, t2, t3, t4, t5, t6, t7, t8,t9,t10,t11;
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
    Sprite sBackground(t1), sPlatG(t2), sPersLeftt(t3), sPlatB(t4), sGameOver(t5), sPlatGy(t6)
        , sPersRight(t7), sPersATK(t8),SBullet(t9),sPlatGSp(t10), sPlatGSp2(t11);


STAR:

    srand(time(0));

    RenderWindow app(VideoMode(400, 533), "Doodle Game!");
    app.setFramerateLimit(60);


    point platG[20], platB[20], platGy[20],bullet[1000];
    enum eDirecton { LEFT = 0, RIGHT,  ATK, };
    eDirecton dir = LEFT;
    int x = 100, y = 100, h = 200;
    float dx = 0, dy = 0;
    bool directionplatB = false;
    int score = 0;
    int allb = 0;
    int LEVEL = 1;
    int prexnew = 14;
    int xrownew = 0;
    int randplatG;
    int addspring;
    switch (LEVEL)
    {
    case 1:
        addspring = rand() % 3;
        randplatG = 2;
        break;
    case 2:
        addspring = rand() % 2;
        randplatG = 1;
        break;
    case 3:
        randplatG = 2;
        break;
    case 4:

        break;
    case 5:

        break;
    case 6:

        break;
    }
    int blockg = 9 - randplatG;
    cout << blockg << endl;    
    for (int j = 0; j < 1; j++)
    {
        int prex = 14;
        int prey = 14;
        int xrow = 0;
        int yrow = -1;
        bool yk = false;
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
            platG[i].x = randomrang(prex, 140 + ((xrow * 126) - 55));
            platG[i].y = randomrang(prey, 182 + ((yrow * 168) - 16));
            /*   if (platG[i].x >= 345)
               {
                   platG[i].x -= 55;
               }*/
            prex = 140 + (xrow * 126);
            xrow++;
        }
    }


    /*
    for (int i = 0; i < 10; i++)
    {
        platG[i].x = rand() % 400;
        platG[i].y = rand() % 533;
    }*/
    /*
    for (int i = 0; i < 2; i++)
    {
        platB[i].x = rand() % 400;
        platB[i].y = rand() % 533;
    }
    for (int i = 0; i < 1; i++)
    {
        platGy[i].x = rand() % 400;
        platGy[i].y = rand() % 533;
    }*/


    while (app.isOpen())
    {

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
        if (Keyboard::isKeyPressed(Keyboard::P))
        {
            bullet[allb].x = x+15;
            bullet[allb].y = y;
            allb++;
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
        if (y < h)
        {
            score += 1;
            //bolck Gree
            for (int i = 0; i < blockg; i++)
            {
                y = h;
                platG[i].y = platG[i].y - dy;
                if (platG[i].y > 533)
                {
                    if (xrownew % 3 == 0)
                    {
                        xrownew = 0;
                        prexnew = 14;
                    }
                    platG[i].y = 0; 
                    platG[i].x = randomrang(prexnew, 140 + ((xrownew * 126) - 55));
                    prexnew = 140 + (xrownew * 126);
                    xrownew++;
                    cout << "  platG[" << i << "].x : " << platG[i].x << "  platG[" << i << "].y : " << platG[i].y << endl;
                }
            }
            /*
            for (int i = 0; i < 2; i++)
            {
                y = h;
                platB[i].y = platB[i].y - dy;
                if (platB[i].y > 533)
                {
                    platB[i].y = 0; platB[i].x = rand() % 400;
                }
            }
            for (int i = 0; i < 1; i++)
            {
                y = h;
                platGy[i].y = platGy[i].y - dy;
                if (platGy[i].y > 533)
                {
                    platGy[i].y = 0; platGy[i].x = rand() % 400;
                }
            }*/
        }
        // jump plat
        for (int i = 0; i < blockg; i++)
        {
            if  ((x + 50 >= platG[i].x) && (x <= platG[i].x + 35) && (y + 52 >= platG[i].y) && (y + 52 <= platG[i].y+14) &&  (dy > 0) && (dir == LEFT))
            {
               // Sleep(500);
                // if jump and what to do ?
                dy = -10; //-16 spring
            }
             if ((x + 31 >= platG[i].x) && (x <= platG[i].x + 47) && (y + 52 >= platG[i].y) && (y + 52 <= platG[i].y+14) && (dy > 0) && (dir ==RIGHT))
            {

                //Sleep(500);
                // if jump and what to do ?
                dy = -10; //-16 spring
            }
            if ((x + 34 >= platG[i].x) && (x <= platG[i].x + 50) && (y + 77 >= platG[i].y) && (y + 77 <= platG[i].y + 14) && (dy > 0) && (dir == ATK))
            {
                dy = -10;
            }               
        }
        /*
        for (int i = 0; i < 1; i++)
        {
            if ((x + 50 > platB[i].x) && (x + 20 < platB[i].x + 68) && (y + 70 > platB[i].y) && (y + 70 < platB[i].y + 14) && (dy > 0))
            {

                dy = -10;
            }
        }
        for (int i = 0; i < 2; i++)
        {
            if ((x + 50 > platGy[i].x) && (x + 20 < platGy[i].x + 68) && (y + 70 > platGy[i].y) && (y + 70 < platGy[i].y + 14) && (dy > 0))
            {
                platGy[i].y = 534;

            }
        }*/
        /*
        for (int i = 0; i < 1; i++)
        {
            if (!directionplatB)
            {
                platB[i].x++;
            }
            else if (directionplatB)
            {
                platB[i].x--;
            }
            if (platB[i].x == 335)
            {
                directionplatB = true;
            }
            else if (platB[i].x == 0)
            {
                directionplatB = false;
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
            sPlatG.setPosition(platG[i].x, platG[i].y);
            app.draw(sPlatG);
        }
        /*
        for (int i = 0; i < 1; i++)
        {
            sPlatB.setPosition(platB[i].x, platB[i].y);
            app.draw(sPlatB);
        }
        for (int i = 0; i < 2; i++)
        {
            sPlatGy.setPosition(platGy[i].x, platGy[i].y);
            app.draw(sPlatGy);
        }*/
        if (allb > 0)
        {
            for (int i = 0; i < allb; i++)
            {
                bullet[i].y-=12; 
                if (bullet[i].y >= 0)
                {
                    SBullet.setPosition(bullet[i].x, bullet[i].y);
                    app.draw(SBullet);
                }
                
            }
        }
        cout << " x : " << x << " y : " << y << " score : " << score << endl;
        app.display();

        if (score >= 150)//sp
        {
            LEVEL = 2;
        }
        else if (score >= 300)//dis 1
        {
            LEVEL = 3;
        }
        else if (score >= 500)//dis2
        {
            LEVEL = 4;
        }
        else if (score >= 700)//no sp
        {
            LEVEL = 5;

        }
        else if (score >= 1800)//new color
        {
            LEVEL = 6;
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
