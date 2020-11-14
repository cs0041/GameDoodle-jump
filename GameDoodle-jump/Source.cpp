#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
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
bool block_Gpp(int percent)
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
bool block_White(int percent)
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
bool block_Orange(int percent)
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
bool block_Y(int percent)
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
bool block_DB(int percent)
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
bool have_Propller(int percent)
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
bool Devil_haveBat(int percent)
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
bool Devil_haveBlue(int percent)
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
bool Devil_havefrog(int percent)
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
bool Devil_haveRed(int percent)
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
bool Devil_havePing(int percent)
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
bool Devil_haveGreen(int percent)
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
bool Devil_have3EYE(int percent)
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

    Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21,
        t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40, t41, t42,
        t43, t44, t45, t46, t47, t48, t49, t50, t51, t52, t53, t54, t55, t56, t57, t58, t59, t60, t61, t62, t63, t64, t65, t66, t67
        , t68, t69, t70, t71, t72,t73,t74,t75,t76,t77,t78,t79,t80,t81,t82,t83;

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
    t21.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/bg-grid33.png");
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
    t37.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/UFO1.png");
    t38.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/UFO2.png");
    t39.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/play.png");
    t40.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/play1.png");
    t41.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/scores.png");
    t42.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/scores1.png");
    t43.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/GPP.png");
    t44.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/De_1_0.png");
    t67.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/De_1_1.png");
    t45.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/De_2_1.png");
    t46.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/De_2_0.png");
    t47.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/buttonplayagin1.png");
    t48.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/buttonmenu1.png");
    t49.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/buttonplayagin2.png");
    t50.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/buttonmenu2.png");
    t51.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/menuscores.png");
    t52.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/bullet01.png");
    t53.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformW0.png");
    t54.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformW2.png");
    t55.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformW3.png");
    t56.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformOr1.png");
    t57.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformOr2.png");
    t58.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformOr3.png");
    t59.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformOr4.png");
    t60.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformOr5.png");
    t61.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformOr6.png");
    t62.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformOr7.png");
    t63.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformOr8.png");
    t64.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformY.png");
    t65.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformBD1.png");
    t66.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platformBD2.png");
    t68.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/ArrowDown.png");
    t69.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/ArrowLeft.png");
    t70.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/ArrowRight.png");
    t71.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/ArrowUp.png");
    t72.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/platforDevil.png");
    t73.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Red.png");
    t74.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Ping.png");
    t75.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/3e_1.png");
    t76.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/3e_2.png");
    t77.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/3e_3.png");
    t78.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/3e_A.png");
    t79.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Green_1.png");
    t80.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Green_2.png");
    t81.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Green_3.png");
    t82.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Green_4.png");
    t83.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Devilbullet.png");
    Sprite sMENU(t1), sPlatG(t2), sPersLeftt(t3), sPlatB(t4), sGameOver(t5), sPlatGy(t6)
        , sPersRight(t7), sPersATK(t8), SBullet(t9), sPlatGSp(t10), sPlatGSp2(t11), sPlatBrown1(t12),
        sPlatBrown2(t13), sPlatBrown3(t14), sPlatBrown4(t15), sPlatBrown5(t16), sPlatBrown6(t17),
        sPlatDevil_1(t18), sPlatDevil_2(t19), sPlatDevil_3(t20), sPlatDevil_2_2(t19), sBack_grid(t21),
        sPropeller_1(t22), sPropeller_2(t23), sPropeller_3(t24), sPropeller_4(t25), sTopbar(t26)
        , s0(t27), s1(t28), s2(t29), s3(t30), s4(t31), s5(t32), s6(t33), s7(t34), s8(t35), s9(t36),
        sUFO_1(t37), sUFO_2(t38), sPlay(t39), sPlay1(t40), sScores(t41), sScores1(t42), sGPP(t43),
        sDE_2_1(t45), sDE_2_0(t46), sbutton_playagin(t47), sbutton_menu(t48), sbutton_playagin2(t49), sbutton_menu2(t50),
        sMenu_scores(t51), stestxy(t52), sPlatwhite1(t53), sPlatwhite2(t54), sPlatwhite3(t55), sPlatOr1(t56), sPlatOr2(t57),
        sPlatOr3(t58), sPlatOr4(t59), sPlatOr5(t60), sPlatOr6(t61), sPlatOr7(t62), sPlatOr8(t63), sPlatY(t64), sPlatDB1(t65), sPlatDB2(t66),
        sArrowDown(t68), sArrowLeft(t69), sArrowRight(t70), sArrowUp(t71), sDE_1_0(t44), sDE_1_1(t67), sPlat_Devil(t72),sDevilRed(t73), sDevilPing(t74),sDevil3E_1(t75), sDevil3E_2(t76), sDevil3E_3(t77), sDevil3E_A(t78),sDevilGreen_1(t79)
        , sDevilGreen_2(t80), sDevilGreen_3(t81), sDevilGreen_4(t82),sBulleyDevil(t83);
   ;


    enum CHOSEMENU { PLAY, MENU, SCORE, TEST };
    CHOSEMENU CHOSEMENU = MENU;
STAR:

    srand(time(0));

    // RenderWindow app(VideoMode(400, 533), "Doodle Game!");
      // RenderWindow app(VideoMode(400, 650), "Doodle Game!");
    // app.setFramerateLimit(60);


    point bullet[1000], platchosen[40], platdelbrown[40], propllerdel
        , Devil, Background, position_digit_forbackground,BulletDevil[1000];

    position_digit_forbackground.x = 275;
    position_digit_forbackground.y = 305 + 650;


    Background.x = 0;
    Background.y = 0;




    enum UFODIR { UFO_1, UFO_2 };
    UFODIR UFOfrme = UFO_1;


    enum eDirecton { LEFT, RIGHT, ATK, };
    eDirecton dir = LEFT;
    bool dooler_alive = true;


    enum amongspeedoodle { Normal, Spring, Propeller, Rocket };
    amongspeedoodle speeddoodle = Normal;



    enum propller { propller_1, propller_2, propller_3, propller_4 };
    propller framepropller = propller_1;
    bool propller_on = false;
    bool propller_out = false;
    bool have_propller = false;




    enum Chosenblock { G, Gsp, Gsp2, B, Gy, blank, Br, Gpp, Wh, Or, Y, DB, G_Devil };
    Chosenblock chosenbloack[40];
    bool Greensp[40];
    for (int i = 0; i < 40; i++)
    {
        chosenbloack[i] = blank;
        Greensp[i] = false;
    }



    enum framYellow { Y1, Y2, Y3, Y4 };
    framYellow Yellowfram[40];
    bool Yellow_move[40];
    int loopdelayyellow[40];
    bool dirx[40];
    int  randx[40];
    for (int i = 0; i < 40; i++)
    {
        loopdelayyellow[i] = 0;
        Yellowfram[i] = Y1;
        Yellow_move[i] = false;
    }


    enum framDrakBlue { DB1, DB2 };
    framDrakBlue DrakBluefram[40];
    int loopdelayDrakBlue[40];
    point conDB[40], conmouseDB[40];
    bool fristmouseDB = true;
    int  indexcanmoveDB = -1;
    for (int i = 0; i < 40; i++)
    {
        conDB[i].x = 0;
        conDB[i].y = 0;
        conmouseDB[i].x = 0;
        conmouseDB[i].y = 0;
        DrakBluefram[i] = DB1;
        loopdelayDrakBlue[i] = 0;

    }






    enum frambrown { Br1, Br2, Br3, Br4, Br5, Br6 };
    frambrown brownfram[40];
    bool brownout[40];
    for (int i = 0; i < 40; i++)
    {
        brownout[i] = false;
    }

    enum framwhite { Wh1, Wh2, Wh3, Wh4, Wh5, Wh6, Wh7, Wh8, Wh9 };
    framwhite whitefram[40];
    bool whiteout[40];
    for (int i = 0; i < 40; i++)
    {
        whiteout[i] = false;
    }


    enum framOrange { Or1, Or2, Or3, Or4, Or5, Or6, Or7, Or8 };
    framOrange orangefram[40];
    bool orangeout[40];
    bool fristorange[40];
    int loopdelayorange[40];
    for (int i = 0; i < 40; i++)
    {
        loopdelayorange[i] = 0;
        orangeout[i] = false;
        fristorange[i] = true;
    }


    enum CHOSENDevil { Empty, Devil_Bat, Devil_Blue, Devil_frog, Devil_Red,Devil_Ping,Devil_Green,Devil_3EYE};
    CHOSENDevil CHOSENDEVIL = Empty;
    bool Devil_die_by_foot = false;


    int heartDevil;
    bool Devilalive = false;


      
    enum framGreen { G1, G2, G3, G4 };
    framGreen Greenfram;
    enum framGreenATK { AG1, AG2, AG3, AG4 };
    framGreenATK GreenATKfram;
    int loopdelayGreen = 0;


    enum framRed { R1, R2 , R3 ,R4 };
    framRed Redfram;
    int loopdelayRed = 0;


    enum framPing { P1, P2, P3,P4 };
    framPing Pingfram;
    int loopdelayPing = 0;


    enum fram3EYE { E1, AE2, E3,E4};
    fram3EYE EYE3fram;
    int loopdelay3EYE  = 0;
    bool EYE3ATK ;

    enum DirecDevil { LU, LD, RU, RD };
    DirecDevil DeVilDirec;
   





    enum framDevil_Blue { Blue_1, Blue_2 };
    framDevil_Blue DeVil_Bluet_fram = Blue_1;
    bool direction_BLue = true;



    enum framDevil { DeVil1_1, DeVil1_2, DeVil1_3, DeVil1_4, DeVil1_5, DeVil1_6, DeVil1_7, DeVil1_8, DeVil1_9, DeVil1_10, DeVil1, DeVil2, DeVil3, DeVil4 };
    framDevil DeVil_Bat_fram;
    int framefristseeDevil = 0;
    int loopdelayfristseeDevil = 0;
    DeVil_Bat_fram = DeVil1_1;






    float dx = 0, dy = 0;
    int x = 200, y = 570, h = 400;
    switch (CHOSEMENU)
    {
    case PLAY:

        x = 200;
        y = 650 - 100;

        break;
    case MENU:

        x = 30 + 10;
        //    y = 520 - 60;
        y = 620;
        dy = -8;
        break;
    case SCORE:
        break;
    default:
        break;
    }

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
    int blockg = 32;

    for (int i = 0; i < blockg - 4; i++)
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
        //   cout << "  platplatchosen[" << i << "].x : " << platchosen[i].x << "  platplatchosen[" << i << "].y : " << platchosen[i].y << endl;
    }
    platchosen[31].x = 160;
    platchosen[31].y = 650 - (20);
    chosenbloack[31] = G;
    platchosen[30].x = 240;
    platchosen[30].y = 650 - (20);
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


    enum ChosenblockDUMME { G_dumme, Gsp_dumme, Gpp_dumme, B_dumme, blank_dumme, Br_dumme, Wh_dumme, Or_dumme, Y_dumme, DB_dumme, G_Devil_dumme };
    ChosenblockDUMME chosenbloackDumme[40];
    for (int i = 0; i < 40; i++)
    {
        chosenbloackDumme[i] = blank_dumme;
    }

    int delaybullet = 0;
    bool bullet_can_on = true;
    bool first_for_doolerfall = true;
    bool dooler_dieby_Devil = false;
    bool one_read_write = true;
    int score_read_write[5];
    int star_y[] = { 305 + 650,352 + 650 };



    int amountbullet = 0;
    int loopdelayBulletDevil = 0;
    bool DevilBatcanBullet = false;

    while (app.isOpen())
    {
        // srand(time(0));
        Event e;
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }
        while (true)
        {
            srand(time(0));
            if (CHOSEMENU == PLAY)
            {

                if (Keyboard::isKeyPressed(Keyboard::Right))
                {
                    x += 4;
                    dir = RIGHT;

                }
                if (Keyboard::isKeyPressed(Keyboard::Left))
                {
                    x -= 4;
                    dir = LEFT;

                }

                if (((Keyboard::isKeyPressed(Keyboard::Up))) && !propller_on && dooler_alive)
                {
                    if (bullet_can_on)
                    {
                        bullet_can_on = false;
                        bullet[allb].x = x + 15;
                        bullet[allb].y = y;
                        allb++;
                        dir = ATK;
                    }
                    if (delaybullet >= 16)
                    {
                        delaybullet = 0;
                        bullet_can_on = true;
                    }
                    fflush(stdin);
                }
                if (!bullet_can_on)
                {
                    delaybullet++;
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
                if (dooler_alive)
                {
                    switch (speeddoodle)
                    {
                    case Normal:
                        dy += 0.2;
                        y += dy;
                        break;
                    case Spring:
                        dy + 0.2;
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
                }
                else
                {
                    if (one_read_write)
                    {
                        ifstream readfile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Config/scores.txt");
                        if (readfile.is_open())
                        {
                            for (int i = 0; i < 5; i++)
                            {
                                readfile >> score_read_write[i];
                                cout << "score[i]" << score_read_write[i] << endl;
                            }
                            cout << "read suscess" << endl;
                        }
                        else
                        {
                            cout << "ERROE" << endl;
                        }
                        readfile.close();


                        ofstream writer("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Config/scores.txt");
                        if (writer.is_open())
                        {
                            int index_score;
                            bool index_on = false;
                            for (int i = 0; i < 5; i++)
                            {
                                if (score > score_read_write[i])
                                {
                                    index_score = i;
                                    index_on = true;
                                    break;
                                }
                            }

                            if (index_on)
                            {
                                for (int i = 4; i > index_score; i--)
                                {
                                    score_read_write[i] = score_read_write[i - 1];

                                }

                                score_read_write[index_score] = score;


                            }
                            for (int i = 0; i < 5; i++)
                            {
                                writer << score_read_write[i] << endl;
                                cout << "score[i]" << score_read_write[i] << endl;
                            }
                            cout << "writer suscess" << endl;
                        }
                        else
                        {
                            cout << "ERROE" << endl;
                        }

                        writer.close();
                        one_read_write = false;
                    }


                    bool bloack_out_all = true;
                    for (int i = 0; i < blockg; i++)
                    {
                        if (platchosen[i].y >= -15)
                        {
                            bloack_out_all = false;
                        }
                    }
                    if (!bloack_out_all)
                    {

                        int tall_y;
                        if (dir == LEFT)
                        {
                            tall_y = 65;
                        }
                        if (dir == RIGHT)
                        {
                            tall_y = 65;
                        }
                        if (dir == ATK)
                        {
                            tall_y = 80;
                        }
                        if (y > 650 - tall_y)
                        {

                            first_for_doolerfall = false;

                        }

                        if (!first_for_doolerfall)
                        {
                            if (dooler_dieby_Devil)
                            {

                                dy += 0.4;
                                y += dy;
                            }
                            else
                            {

                                dy -= 0.3;
                                y -= dy;
                            }

                            int dumme_dy = -15;
                            for (int i = 0; i < blockg; i++)
                            {
                                platchosen[i].y = platchosen[i].y + dumme_dy;
                            }
                            if (Devilalive)
                            {
                                Devil.y = Devil.y + dumme_dy;
                                if (Devil.y > 650  || Devil.y < -100)
                                {
                                    Devilalive = false;
                                    CHOSENDEVIL = Empty;
                                }
    
                            }
                        }
                        else
                        {
                            dooler_dieby_Devil = true;
                            dy -= 0.4;
                            y -= dy;
                        }

                    }
                    else
                    {
                        if (Background.y >= -630)
                        {
                            sBack_grid.setPosition(Background.x, Background.y -= 20);
                        }

                        if (Background.y <= -630)
                        {
                            dy = 12;
                            y += dy;

                        }


                    }


                }

                if (x > 380)
                {
                    x = -23;
                }
                else if (x < -23)
                {
                    x = 380;
                }

                /*///////////////random block dumme*/
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
                    //chose constan block////////




                    /* PATTERN BLOCK SPECIAL*/
                    bool patternY = false, patternOr = false, patternDB = false;
                    if (block_Y(5))
                    {
                        patternY = true;
                    }
                    else if (block_Orange(5))
                    {
                        patternOr = true;
                    }
                    else if (block_DB(20))
                    {
                        patternDB = true;
                    }


                    for (int i = 0; i < 8; i++)
                    {
                        int keeprandomrang;
                        keeprandomrang = randomrang(low, row);

                        consand[keeprandomrang] = true;
                        switch (LEVEL)
                        {
                        case 1:



                            if (patternY)
                            {
                                rowpass[i] = true;
                                chosenbloackDumme[keeprandomrang] = Y_dumme;
                            }
                            else if (patternOr)
                            {
                                chosenbloackDumme[keeprandomrang] = Or_dumme;
                            }
                            else if (patternDB)
                            {
                                if (i % 2 == 0)
                                {
                                    chosenbloackDumme[keeprandomrang] = DB_dumme;
                                }
                                rowpass[i] = true;
                            }
                            /*
                             else if (have_Devil(70) && CHOSENDEVIL == Empty)
                              {
                                      if (Devil_havefrog(70))
                                      {
                                          cout << "frogggggggg" << endl;
                                       //   rowpass[i] = true;


                                          CHOSENDEVIL = Devil_frog;
                                          chosenbloackDumme[keeprandomrang] = G_Devil_dumme;


                                      }
                              }*/

                            else if (block_B(10))
                            {

                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;

                            }
                            else if (block_Gsp(5))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_White(5))
                            {
                                chosenbloackDumme[keeprandomrang] = Wh_dumme;
                            }
                            else  if (block_Gpp(1) && !have_propller)
                            {
                                have_propller = true;
                                chosenbloackDumme[keeprandomrang] = Gpp_dumme;
                            }
                            else if (block_G(100))
                            {

                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }





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

                        if (!rowpass[i])
                        {

                            for (int j = low_2; j <= row_2; j++)
                            {
                                if (!consand[j])
                                {
                                    switch (LEVEL)
                                    {
                                    case 1:
                                        if (haveblock(40))
                                        {
                                            if (patternOr)
                                            {
                                                if (haveblock(20))
                                                {
                                                    chosenbloackDumme[j] = Or_dumme;
                                                }

                                            }
                                            else if (block_Br(20))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;

                                            }
                                            else if (block_Gsp(5))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_White(5))
                                            {
                                                chosenbloackDumme[j] = Wh_dumme;
                                            }
                                            else if (block_Gpp(1) && !have_propller)
                                            {
                                                have_propller = true;
                                                chosenbloackDumme[j] = Gpp_dumme;
                                            }
                                            else if (block_G(100))
                                            {
                                                chosenbloackDumme[j] = G_dumme;
                                            }
                                        }
                                        else
                                        {
                                            chosenbloackDumme[j] = blank_dumme;
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


                    switch (LEVEL)
                    {
                    case 1:
                        if (!Devilalive && CHOSENDEVIL == Empty)
                        {
                            if (have_Devil(100))
                            {
                                if (Devil_haveBat(80))
                                {
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

                                    Devilalive = true;
                                    heartDevil = 3;
                                    CHOSENDEVIL = Devil_Bat;

                                    DeVil_Bat_fram = DeVil1_1;
                                    framefristseeDevil = 0;
                                    loopdelayfristseeDevil = 0;
                                    Devil.x = 0;
                                    Devil.y = 650 - 67;
                                }
                                else if (Devil_haveBlue(10))
                                {
                                    Devil_die_by_foot = false;
                                    direction_BLue = true;
                                    Devilalive = true;
                                    heartDevil = 3;
                                    CHOSENDEVIL = Devil_Blue;
                                    DeVil_Bluet_fram = Blue_1;
                                    Devil.x = randomrang(150, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveRed(10))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 2;
                                    CHOSENDEVIL = Devil_Red;
                                    Redfram = R1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_havePing(10))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 2;
                                    CHOSENDEVIL = Devil_Ping;
                                    Pingfram = P1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveGreen(10))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 4;
                                    CHOSENDEVIL = Devil_Green;
                                    GreenATKfram =   AG1;
                                    Greenfram = G1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_have3EYE(10))
                                {
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
                                    loopdelay3EYE = 0;
                                    EYE3ATK = false;

                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 3;
                                    CHOSENDEVIL = Devil_3EYE;

                                    EYE3fram = E1;
                                    loopdelay3EYE = 0;
                                    Devil.x = randomrang(100, 300);;
                                    Devil.y = -70;
                                }

                                

                            }
                        }
                    default:
                        break;
                    }

                    countblock = 0;
                }


                // map up re 32

                if (y < h)
                {
                    score += 1;
                    if (Devilalive && dooler_alive)
                    {
                        switch (CHOSENDEVIL)
                        {
                        case Empty:
                            break;
                        case Devil_Bat:
                            break;
                        case Devil_Blue:
                            Devil.y = Devil.y - dy;
                            if (Devil.y > 650)
                            {
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            break;
                        case Devil_frog:
                            Devil.y = Devil.y - dy;
                            if (Devil.y > 650)
                            {
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            break;
                        case Devil_Red:
                            Devil.y = Devil.y - dy;
                            if (Devil.y > 650)
                            {
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            break;
                        case Devil_Ping:
                            Devil.y = Devil.y - dy;
                            if (Devil.y > 650)
                            {
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            break;
                        case Devil_Green:
                            Devil.y = Devil.y - dy;
                            if (Devil.y > 650)
                            {
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            break;
                        case Devil_3EYE:
                            Devil.y = Devil.y - dy;
                            if (Devil.y > 650)
                            {
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            break;
                        default:
                            break;
                        }

                    }
                    for (int i = 0; i < blockg; i++)
                    {
                        y = h;
                        if (dooler_alive)
                        {
                            platchosen[i].y = platchosen[i].y - dy;
                        }

                        if (platchosen[i].y > 650)
                        {

           


                            if (xrownew % 4 == 0)
                            {
                                xrownew = 0;
                                prexnew = 0;

                            }

                            if (chosenbloackDumme[i] == G_Devil_dumme)
                            {
                                switch (CHOSENDEVIL)
                                {
                                case Devil_frog:
                                    Devil_die_by_foot = false;
                                    heartDevil = 3;
                                    Devilalive = true;
                                    cout << "LOOP SET XY" << endl;
                                    platchosen[i].y = -20;
                                    platchosen[i].x = randomrang(prexnew, 100 + ((xrownew * 100) - 108));
                                    Devil.y = 0 - 50;
                                    Devil.x = platchosen[i].x;
                                    break;

                                }

                            }
                            else
                            {
                                platchosen[i].y = 0;
                                platchosen[i].x = randomrang(prexnew, 100 + ((xrownew * 100) - 60));

                            }

                            //       sDE_1_0(t44), sDE_1_1(t67);

                            switch (chosenbloackDumme[i])
                            {
                            case  G_dumme:
                                chosenbloack[i] = G;
                                break;
                            case  Gsp_dumme:
                                chosenbloack[i] = Gsp;
                                break;
                            case  B_dumme:
                                chosenbloack[i] = B;
                                break;
                            case  Br_dumme:
                                chosenbloack[i] = Br;
                                break;
                            case Gpp_dumme:
                                chosenbloack[i] = Gpp;
                                break;
                            case Wh_dumme:
                                chosenbloack[i] = Wh;
                                break;
                            case Or_dumme:
                                    orangeout[i] = false;
                                    loopdelayorange[i] = 0;
                                    fristorange[i] = true;

                                chosenbloack[i] = Or;
                                break;
                            case Y_dumme:
                                chosenbloack[i] = Y;
                                break;
                            case DB_dumme:
                                chosenbloack[i] = DB;
                                break;
                            case G_Devil_dumme:
                                cout << "dddd" << endl;
                                chosenbloack[i] = G_Devil;
                                break;
                            case  blank_dumme:
                                chosenbloack[i] = blank;
                                break;
                            default:
                                break;
                            }

                            prexnew = 100 + (xrownew * 100);
                            xrownew++;
                            // cout << "  platplatchosen[" << i << "].x : " << platchosen[i].x << "  platplatchosen[" << i << "].y : " << platchosen[i].y << endl;
                            countblock++;
                        }
                    }



                }

                // jump plat doodler on plat
                int jump = -8;
                int jumpsp = -16;
                for (int i = 0; i < blockg; i++)
                {
                    switch (chosenbloack[i])
                    {
                    case G:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            dy = jump;
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {


                            dy = jump;
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

                            }
                            else
                            {
                                dy = jump;
                            }

                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {
                            if ((x + 31 >= platchosen[i].x + 5) && (x <= platchosen[i].x + 12))
                            {
                                dy = jumpsp;
                                Greensp[i] = true;

                            }
                            else
                            {
                                dy = jump;
                            }

                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            if ((x + 34 >= platchosen[i].x + 5) && (x <= platchosen[i].x + 15))
                            {
                                dy = jumpsp;
                                Greensp[i] = true;

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

                            dy = jump;
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {


                            dy = jump;
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

                                platdelbrown[i].x = platchosen[i].x;
                                platdelbrown[i].y = platchosen[i].y;
                                platchosen[i].x = 500;

                                brownout[i] = true;
                                brownfram[i] = Br1;


                            }
                            if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                            {


                                platdelbrown[i].x = platchosen[i].x;
                                platdelbrown[i].y = platchosen[i].y;
                                platchosen[i].x = 500;
                                brownout[i] = true;
                                brownfram[i] = Br1;
                            }
                            if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                            {
                                platdelbrown[i].x = platchosen[i].x;
                                platdelbrown[i].y = platchosen[i].y;
                                platchosen[i].x = 500;
                                brownout[i] = true;
                                brownfram[i] = Br1;
                            }
                        }
                        break;
                    case Gy:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {

                            dy = jump;
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {


                            dy = jump;
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            dy = jump;
                        }
                        break;
                    case Wh:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            whiteout[i] = true;
                            whitefram[i] = Wh1;
                            dy = jump;
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {

                            whiteout[i] = true;
                            whitefram[i] = Wh1;
                            dy = jump;
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            whiteout[i] = true;
                            whitefram[i] = Wh1;
                            dy = jump;
                        }
                        break;
                    case Or:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            if (fristorange[i])
                            {
                                orangeout[i] = true;
                                orangefram[i] = Or1;
                                fristorange[i] = false;

                            }
                            dy = jump;

                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {

                            if (fristorange[i])
                            {
                                orangeout[i] = true;
                                orangefram[i] = Or1;
                                fristorange[i] = false;

                            }
                            dy = jump;
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            if (fristorange[i])
                            {
                                orangeout[i] = true;
                                orangefram[i] = Or1;
                                fristorange[i] = false;

                            }
                            dy = jump;
                        }
                        break;
                    case Y:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {

                            Yellow_move[i] = true;
                            dy = jump;

                            for (int g = 0; g < blockg; g++)
                            {

                                switch (chosenbloack[g])
                                {
                                case Y:
                                    Yellow_move[g] = true;
                                    int randdom;
                                    int rand_x = platchosen[g].x + 0;
                                    int rand_y = (400 - 60) - platchosen[g].x;
                                    if (rand_x >= rand_y)
                                    {
                                        randdom = rand_x;
                                        dirx[g] = false;
                                    }
                                    else
                                    {
                                        randdom = rand_y;
                                        dirx[g] = true;
                                    }
                                    randx[g] = randomrang(randdom / 4, randdom);
                                    break;
                                }
                            }

                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {

                            Yellow_move[i] = true;
                            dy = jump;

                            for (int g = 0; g < blockg; g++)
                            {

                                switch (chosenbloack[g])
                                {
                                case Y:
                                    Yellow_move[g] = true;
                                    int randdom;
                                    int rand_x = platchosen[g].x + 0;
                                    int rand_y = (400 - 60) - platchosen[g].x;
                                    if (rand_x >= rand_y)
                                    {
                                        randdom = rand_x;
                                        dirx[g] = false;
                                    }
                                    else
                                    {
                                        randdom = rand_y;
                                        dirx[g] = true;
                                    }
                                    randx[g] = randomrang(randdom / 4, randdom);
                                    break;
                                }
                            }

                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            Yellow_move[i] = true;
                            dy = jump;

                            for (int g = 0; g < blockg; g++)
                            {

                                switch (chosenbloack[g])
                                {
                                case Y:
                                    Yellow_move[g] = true;
                                    int randdom;
                                    int rand_x = platchosen[g].x + 0;
                                    int rand_y = (400 - 60) - platchosen[g].x;
                                    if (rand_x >= rand_y)
                                    {
                                        randdom = rand_x;
                                        dirx[g] = false;
                                    }
                                    else
                                    {
                                        randdom = rand_y;
                                        dirx[g] = true;
                                    }
                                    randx[g] = randomrang(randdom / 4, randdom);
                                    break;
                                }
                            }


                        }

                        break;

                    case DB:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            chosenbloack[i] = G;
                            dy = jump;

                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {

                            chosenbloack[i] = G;
                            dy = jump;

                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            chosenbloack[i] = G;
                            dy = jump;

                        }
                        break;


                    case G_Devil:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35 + 58) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            dy = jump;
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47 + 58) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {


                            dy = jump;
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50 + 58) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            dy = jump;
                        }
                        break;


                    case Gpp:
                        if ((x + 40 >= platchosen[i].x) && (x <= platchosen[i].x + 45) && (y + 57 >= platchosen[i].y) && (y + 12 <= platchosen[i].y) && (dir == LEFT))
                        {

                            speeddoodle = Rocket;
                            scoreold = score;
                            propller_on = true;
                            chosenbloack[i] = G;
                            platchosen[i].y += 15;
                        }
                        else if ((x + 48 >= platchosen[i].x) && (x <= platchosen[i].x + 32) && (y + 42 >= platchosen[i].y) && (y + 42 <= platchosen[i].y + 14) && (dir == LEFT) && dy > 0)
                        {
                            dy = jump;
                        }

                        if ((x + 40 >= platchosen[i].x) && (x <= platchosen[i].x + 45) && (y + 57 >= platchosen[i].y) && (y + 12 <= platchosen[i].y) && (dir == RIGHT))
                        {


                            speeddoodle = Rocket;
                            scoreold = score;
                            propller_on = true;
                            chosenbloack[i] = G;
                            platchosen[i].y += 15;
                        }
                        else if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 42 >= platchosen[i].y) && (y + 42 <= platchosen[i].y + 14) && (dir == RIGHT) && dy > 0)
                        {
                            dy = jump;
                        }

                        if ((x + 18 >= platchosen[i].x) && (x <= platchosen[i].x + 45) && (y + 73 >= platchosen[i].y) && (y <= platchosen[i].y + 12) && (dir == ATK))
                        {

                            dir = RIGHT;
                            speeddoodle = Rocket;
                            scoreold = score;
                            propller_on = true;
                            chosenbloack[i] = G;
                            platchosen[i].y += 15;
                        }
                        else if ((x + 28 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 60 >= platchosen[i].y) && (y + 60 <= platchosen[i].y + 14) && (dir == ATK) && dy > 0)
                        {
                            dy = jump;
                        }


                        break;

                    default:
                        break;
                    }
                }


                /*Devil and dooler colision*/
                if (Devilalive && !Devil_die_by_foot && dooler_alive)
                {
                    switch (CHOSENDEVIL)
                    {
                    case Empty:
                        break;
                    case Devil_Bat:
                        break;
                    case Devil_Blue:
                        if ((x + 32 >= Devil.x) && (x <= Devil.x + 37) && (y + 70 >= Devil.y) && (y <= Devil.y + 50) && (dir == ATK))
                        {
                            if (y + (75 - 30) < Devil.y && dy > 0)
                            {
                                score += 100;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;

                            }

                        }
                        if ((x + 50 >= Devil.x) && (x <= Devil.x + 37) && (y + 50 >= Devil.y) && (y <= Devil.y + 50) && (dir == RIGHT))
                        {
                            if (y + (60 - 30) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;


                            }
                        }
                        if ((x + 50 >= Devil.x) && (x <= Devil.x + 37) && (y + 50 >= Devil.y) && (y <= Devil.y + 50) && (dir == LEFT))
                        {
                            if (y + (60 - 30) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                dooler_alive = false;

                            }
                        }
                        break;
                    
                    case Devil_Red:
                        if ((x + 70 >= Devil.x) && (x <= Devil.x + 84) && (y + 70 >= Devil.y) && (y <= Devil.y + 50) && (dir == ATK))
                        {
                            if (y + (75 - 30) < Devil.y && dy > 0)
                            {
                                score += 100;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;

                            }

                        }
                        if ((x + 48 >= Devil.x) && (x <= Devil.x + 50) && (y + 54 >= Devil.y) && (y <= Devil.y + 38) && (dir == RIGHT))
                        {
                            if (y + (60 - 30) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;


                            }
                        }
                        if ((x + 48 >= Devil.x) && (x <= Devil.x + 50) && (y + 54 >= Devil.y) && (y <= Devil.y + 38) && (dir == LEFT))
                        {
                            if (y + (60 - 30) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                dooler_alive = false;

                            }
                        }
                        break;

                    case Devil_Ping:
                        if ((x + 70 >= Devil.x) && (x <= Devil.x + 64) && (y + 70 >= Devil.y) && (y <= Devil.y + 54) && (dir == ATK))
                        {
                            if (y + (75 - 30) < Devil.y && dy > 0)
                            {
                                score += 100;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;

                            }

                        }
                        if ((x + 48 >= Devil.x) && (x <= Devil.x + 60) && (y + 46 >= Devil.y) && (y <= Devil.y + 55) && (dir == RIGHT))
                        {
                            if (y + (60 - 30) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;


                            }
                        }
                        if ((x + 48 >= Devil.x) && (x <= Devil.x + 60) && (y + 46 >= Devil.y) && (y <= Devil.y + 55) && (dir == LEFT))
                        {
                            if (y + (60 - 30) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                dooler_alive = false;

                            }
                        }
                        break;
                    case Devil_Green:
                        if ((x +70 >= Devil.x) && (x <= Devil.x + 84) && (y + 70 >= Devil.y) && (y <= Devil.y + 50) && (dir == ATK))
                        {
                            if (y + (75 - 30) < Devil.y && dy > 0)
                            {
                                score += 100;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;

                            }

                        }
                        if ((x + 50 >= Devil.x) && (x <= Devil.x + 83) && (y + 54 >= Devil.y) && (y <= Devil.y + 50) && (dir == RIGHT))
                        {
                            if (y + (60 - 30) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;


                            }
                        }
                        if ((x + 50 >= Devil.x) && (x <= Devil.x + 83) && (y + 54 >= Devil.y) && (y <= Devil.y + 50) && (dir == LEFT))
                        {
                            if (y + (60 - 30) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                dooler_alive = false;

                            }
                        }
                        break;



                    case Devil_3EYE:
                        if ((x +31  >= Devil.x) && (x <= Devil.x + 59) && (y + 70 >= Devil.y) && (y <= Devil.y + 87) && (dir == ATK))
                        {
                            if (y + (75 - 50) < Devil.y && dy > 0)
                            {
                                score += 100;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;

                            }

                        }
                        if ((x + 45 >= Devil.x) && (x <= Devil.x + 57) && (y + 55 >= Devil.y) && (y <= Devil.y + 86) && (dir == RIGHT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                dooler_alive = false;


                            }
                        }
                        if ((x + 45 >= Devil.x) && (x <= Devil.x + 57) && (y + 55 >= Devil.y) && (y <= Devil.y + 86) && (dir == LEFT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on)
                            {

                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                dooler_alive = false;

                            }
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





                sBack_grid.setPosition(Background.x, Background.y);
                app.draw(sBack_grid);

                // app.draw(sBackground);







                /*draw plat*/

                for (int i = 0; i < blockg; i++)
                {
                    switch (chosenbloack[i])
                    {
                    case G:
                        sPlatG.setPosition(platchosen[i].x, platchosen[i].y);
                        app.draw(sPlatG);
                        break;
                    case G_Devil:
                        //     cout << "drraw G _  devil" << endl;
                        sPlat_Devil.setPosition(platchosen[i].x, platchosen[i].y);
                        app.draw(sPlat_Devil);
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
                    case Gpp:
                        sGPP.setPosition(platchosen[i].x, platchosen[i].y);
                        app.draw(sGPP);
                        break;
                    case B:
                        if (!directionplatB[i])
                        {
                            platchosen[i].x++;
                        }
                        else if (directionplatB[i])
                        {
                            platchosen[i].x--;
                        }
                        if (platchosen[i].x >= 335)
                        {
                            directionplatB[i] = true;
                        }
                        else if (platchosen[i].x <= 0)
                        {
                            directionplatB[i] = false;
                        }
                        sPlatB.setPosition(platchosen[i].x, platchosen[i].y);
                        app.draw(sPlatB);
                        break;
                    case Br:
                        if (brownout[i])
                        {
                            int speedbrown_out = 8;
                            switch (brownfram[i])
                            {
                            case Br1:
                                sPlatBrown1.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown1);
                                brownfram[i] = Br2;
                                platdelbrown[i].y += speedbrown_out;
                                break;
                            case Br2:
                                sPlatBrown2.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown2);
                                brownfram[i] = Br3;
                                platdelbrown[i].y += speedbrown_out;
                                break;
                            case Br3:
                                sPlatBrown3.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown3);
                                brownfram[i] = Br4;
                                platdelbrown[i].y += speedbrown_out;
                                break;
                            case Br4:
                                sPlatBrown4.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown4);
                                brownfram[i] = Br5;
                                platdelbrown[i].y += speedbrown_out;
                                break;
                            case Br5:
                                sPlatBrown5.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown5);
                                brownfram[i] = Br6;
                                platdelbrown[i].y += speedbrown_out;
                                break;
                            case Br6:
                                if (platdelbrown[i].y > 650)
                                {
                                    brownout[i] = false;
                                    //     platdelbrown[i].x = -100;
                                }
                                sPlatBrown6.setPosition(platdelbrown[i].x, platdelbrown[i].y);
                                app.draw(sPlatBrown6);
                                platdelbrown[i].y += speedbrown_out;
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
                    case Wh:
                        if (whiteout[i])
                        {
                            int sleep = 10;
                            switch (whitefram[i])
                            {
                            case Wh1:
                                sPlatwhite1.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatwhite1);
                                whitefram[i] = Wh2;
                                Sleep(sleep);

                                break;
                            case Wh2:
                                sPlatwhite1.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatwhite1);
                                whitefram[i] = Wh3;
                                Sleep(sleep);
                                break;
                            case Wh3:
                                sPlatwhite1.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatwhite1);
                                whitefram[i] = Wh4;
                                Sleep(sleep);
                                break;
                            case Wh4:
                                sPlatwhite2.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatwhite2);
                                whitefram[i] = Wh5;
                                Sleep(sleep);
                                break;
                            case Wh5:
                                sPlatwhite2.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatwhite2);
                                whitefram[i] = Wh6;
                                Sleep(sleep);
                                break;
                            case Wh6:
                                sPlatwhite2.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatwhite2);
                                whitefram[i] = Wh7;
                                Sleep(sleep);
                                break;
                            case Wh7:
                                sPlatwhite3.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatwhite3);
                                whitefram[i] = Wh8;
                                Sleep(sleep);
                                break;
                            case Wh8:
                                sPlatwhite3.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatwhite3);
                                whitefram[i] = Wh9;
                                Sleep(sleep);
                                break;
                            case Wh9:
                                sPlatwhite3.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatwhite3);
                                whiteout[i] = false;
                                chosenbloack[i] = blank;
                                Sleep(sleep);
                                break;
                            default:
                                break;
                            }
                        }
                        else
                        {
                            sPlatwhite1.setPosition(platchosen[i].x, platchosen[i].y);
                            app.draw(sPlatwhite1);
                        }
                        break;

                    case Or:
                        if (orangeout[i])
                        {
                            int sleep = 0;
                            int delaytime = 12;
                            switch (orangefram[i])
                            {
                            case Or1:
                                sPlatOr1.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatOr1);
                                Sleep(sleep);
                                loopdelayorange[i]++;
                                if (loopdelayorange[i] >= 8)
                                {
                                    orangefram[i] = Or2;
                                    loopdelayorange[i] = 0;
                                }
                                else
                                {
                                    orangefram[i] = Or1;
                                }

                                break;
                            case Or2:
                                sPlatOr2.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatOr2);
                                Sleep(sleep);
                                loopdelayorange[i]++;
                                if (loopdelayorange[i] >= 8)
                                {
                                    orangefram[i] = Or3;
                                    loopdelayorange[i] = 0;
                                }
                                else
                                {
                                    orangefram[i] = Or2;
                                }
                                break;
                            case Or3:
                                sPlatOr3.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatOr3);
                                Sleep(sleep);
                                loopdelayorange[i]++;
                                if (loopdelayorange[i] >= 8)
                                {
                                    orangefram[i] = Or4;
                                    loopdelayorange[i] = 0;
                                }
                                else
                                {
                                    orangefram[i] = Or3;
                                }
                                break;
                            case Or4:
                                sPlatOr4.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatOr4);
                                Sleep(sleep);
                                loopdelayorange[i]++;
                                if (loopdelayorange[i] >= 8)
                                {
                                    orangefram[i] = Or5;
                                    loopdelayorange[i] = 0;
                                }
                                else
                                {
                                    orangefram[i] = Or4;
                                }
                                break;
                            case Or5:
                                sPlatOr5.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatOr5);
                                Sleep(sleep);
                                loopdelayorange[i]++;
                                if (loopdelayorange[i] >= 48)
                                {
                                    orangefram[i] = Or6;
                                    loopdelayorange[i] = 0;
                                }
                                else
                                {
                                    orangefram[i] = Or5;
                                }
                                break;
                            case Or6:
                                sPlatOr6.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatOr6);
                                Sleep(sleep);
                                loopdelayorange[i]++;
                                if (loopdelayorange[i] >= 6)
                                {
                                    orangefram[i] = Or7;
                                    loopdelayorange[i] = 0;
                                }
                                else
                                {
                                    orangefram[i] = Or6;
                                }
                                break;
                            case Or7:
                                sPlatOr7.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatOr7);
                                Sleep(sleep);
                                loopdelayorange[i]++;
                                if (loopdelayorange[i] >= 6)
                                {
                                    orangefram[i] = Or8;
                                    loopdelayorange[i] = 0;
                                }
                                else
                                {
                                    orangefram[i] = Or7;
                                }
                                break;
                            case Or8:
                                sPlatOr8.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatOr8);
                                Sleep(sleep);
                                loopdelayorange[i]++;
                                if (loopdelayorange[i] >= 6)
                                {
                                    orangeout[i] = false;
                                    chosenbloack[i] = blank;
                                    loopdelayorange[i] = 0;
                                    fristorange[i] = true;
                                }
                                else
                                {

                                }
                                break;

                            default:
                                break;
                            }
                        }
                        else
                        {
                            sPlatOr1.setPosition(platchosen[i].x, platchosen[i].y);
                            app.draw(sPlatOr1);
                        }
                        break;
                    case Y:

                        if (!Yellow_move[i])
                        {
                            int delaytime = 6;
                            int movex = 10;
                            switch (Yellowfram[i])
                            {
                            case Y1:
                                loopdelayyellow[i]++;
                                if (loopdelayyellow[i] >= delaytime)
                                {
                                    sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                    app.draw(sPlatY);
                                    platchosen[i].x += movex;
                                    Yellowfram[i] = Y2;
                                    loopdelayyellow[i] = 0;
                                }
                                else
                                {
                                    sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                    app.draw(sPlatY);
                                }
                                break;
                            case Y2:
                                loopdelayyellow[i]++;
                                if (loopdelayyellow[i] >= delaytime)
                                {
                                    sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                    app.draw(sPlatY);
                                    platchosen[i].x -= movex;
                                    Yellowfram[i] = Y3;
                                    loopdelayyellow[i] = 0;
                                }
                                else
                                {
                                    sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                    app.draw(sPlatY);
                                }
                                break;
                            case Y3:
                                loopdelayyellow[i]++;
                                if (loopdelayyellow[i] >= delaytime)
                                {
                                    sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                    app.draw(sPlatY);
                                    platchosen[i].x -= movex;
                                    Yellowfram[i] = Y4;
                                    loopdelayyellow[i] = 0;
                                }
                                else
                                {
                                    sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                    app.draw(sPlatY);
                                }
                                break;
                            case Y4:
                                loopdelayyellow[i]++;
                                if (loopdelayyellow[i] >= delaytime)
                                {
                                    sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                    app.draw(sPlatY);
                                    platchosen[i].x += movex;
                                    Yellowfram[i] = Y1;
                                    loopdelayyellow[i] = 0;
                                }
                                else
                                {
                                    sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                    app.draw(sPlatY);
                                }
                                break;
                            default:
                                break;
                            }

                        }
                        else
                        {
                            //        bool dirx[40];
                             //       int  randx[10];


                                //    Yellow_move[i] = true;
                            int move = 10;


                            if (dirx[i])
                            {
                                platchosen[i].x += move;
                                randx[i] -= move;
                                sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatY);
                                if (0 >= randx[i])
                                {

                                    Yellow_move[i] = false;

                                }
                            }
                            else
                            {
                                platchosen[i].x -= move;
                                randx[i] -= move;
                                sPlatY.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatY);
                                if (0 >= randx[i])
                                {

                                    Yellow_move[i] = false;

                                }
                            }
                        }
                        break;



                    case DB:


                        sf::Vector2f Mouse = app.mapPixelToCoords(sf::Mouse::getPosition(app));


                        bool mousein = false;
                        if (sf::Mouse::getPosition(app).x >= platchosen[i].x && sf::Mouse::getPosition(app).x <= platchosen[i].x + 57 && sf::Mouse::getPosition(app).y >= platchosen[i].y && sf::Mouse::getPosition(app).y <= platchosen[i].y + 13)
                        {
                            mousein = true;;
                        }
                        if (((mousein && sf::Mouse::isButtonPressed(sf::Mouse::Left)) || (sf::Mouse::isButtonPressed(sf::Mouse::Left) && !fristmouseDB)))
                        {
                            if (fristmouseDB)
                            {
                                indexcanmoveDB = i;
                                conmouseDB[i].x = sf::Mouse::getPosition(app).x;
                                conmouseDB[i].y = sf::Mouse::getPosition(app).y;
                                conDB[i].x = platchosen[i].x;
                                conDB[i].y = platchosen[i].y;
                                fristmouseDB = false;
                            }
                            if (i == indexcanmoveDB)
                            {
                                platchosen[i].x = conDB[i].x + (sf::Mouse::getPosition(app).x - conmouseDB[i].x);
                                platchosen[i].y = conDB[i].y + (sf::Mouse::getPosition(app).y - conmouseDB[i].y);
                                sPlatDB2.setPosition(platchosen[i].x - 22, platchosen[i].y - 27);
                                app.draw(sPlatDB2);
                            }
                            else
                            {
                                goto DBD;
                            }

                        }
                        else
                        {
                            if (mousein && !fristmouseDB)
                            {
                                fristmouseDB = true;
                            }
                        DBD:
                            switch (DrakBluefram[i])
                            {
                            case DB1:
                                sPlatDB1.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatDB1);
                                sArrowUp.setPosition(platchosen[i].x + 26, platchosen[i].y - 10);
                                app.draw(sArrowUp);

                                sArrowDown.setPosition(platchosen[i].x + 28, platchosen[i].y + 15);
                                app.draw(sArrowDown);

                                sArrowLeft.setPosition(platchosen[i].x - 14, platchosen[i].y + 4);
                                app.draw(sArrowLeft);

                                sArrowRight.setPosition(platchosen[i].x + 60, platchosen[i].y + 1);
                                app.draw(sArrowRight);
                                loopdelayDrakBlue[i] ++;
                                if (loopdelayDrakBlue[i] >= 8)
                                {
                                    loopdelayDrakBlue[i] = 0;
                                    DrakBluefram[i] = DB2;
                                }
                                break;
                            case DB2:
                                sPlatDB1.setPosition(platchosen[i].x, platchosen[i].y);
                                app.draw(sPlatDB1);
                                sArrowUp.setPosition(platchosen[i].x + 26, platchosen[i].y - 15);
                                app.draw(sArrowUp);

                                sArrowDown.setPosition(platchosen[i].x + 28, platchosen[i].y + 20);
                                app.draw(sArrowDown);

                                sArrowLeft.setPosition(platchosen[i].x - 19, platchosen[i].y + 4);
                                app.draw(sArrowLeft);

                                sArrowRight.setPosition(platchosen[i].x + 65, platchosen[i].y + 1);
                                app.draw(sArrowRight);
                                loopdelayDrakBlue[i] ++;
                                if (loopdelayDrakBlue[i] >= 8)
                                {
                                    loopdelayDrakBlue[i] = 0;
                                    DrakBluefram[i] = DB1;
                                }
                                break;
                            default:
                                break;
                            }
                        }
                        break;


                    }

                }

                /*draw Devil*/
                if (Devilalive)
                {
                    switch (CHOSENDEVIL)
                    {
                    case Empty:
                        break;
                    case Devil_Bat:
                        switch (DeVil_Bat_fram)
                        {
                        case DeVil1_1:
                            sPlatDevil_1.setPosition(Devil.x, Devil.y);
                            app.draw(sPlatDevil_1);
                            DeVil_Bat_fram = DeVil1_2;
   
                            break;
                        case DeVil1_2:
                            sPlatDevil_1.setPosition(-200, Devil.y);
                            app.draw(sPlatDevil_1);
                            loopdelayfristseeDevil++;
                            if (loopdelayfristseeDevil >= 8)
                            {
                                DeVil_Bat_fram = DeVil1_3;
                            }
                            else
                            {
                                DeVil_Bat_fram = DeVil1_2;
                            }
                            break;
                        case DeVil1_3:
                            sPlatDevil_1.setPosition(-200, Devil.y);
                            app.draw(sPlatDevil_1);
                            framefristseeDevil++;
                            loopdelayfristseeDevil = 0;
                            if (framefristseeDevil >= 12)
                            {
                                DeVil_Bat_fram = DeVil1;
                            }
                            else
                            {
                                DeVil_Bat_fram = DeVil1_1;
                            }
                            break;
                        case DeVil1:
                            sPlatDevil_1.setPosition(Devil.x, Devil.y);
                            app.draw(sPlatDevil_1);
                            DeVil_Bat_fram = DeVil2;
                            break;
                        case DeVil2:
                            sPlatDevil_2.setPosition(Devil.x, Devil.y);
                            app.draw(sPlatDevil_2);
                            DeVil_Bat_fram = DeVil3;
                            break;
                        case DeVil3:
                            sPlatDevil_3.setPosition(Devil.x, Devil.y);
                            app.draw(sPlatDevil_3);
                            DeVil_Bat_fram = DeVil4;
                            switch (DeVilDirec)
                            {
                            case LU:
                                if (Devil.y < 105)
                                {
                                    DevilBatcanBullet = true;
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
                                    DevilBatcanBullet = true;
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
                                    DevilBatcanBullet = true;
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
                                    DevilBatcanBullet = true;
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
                            DeVil_Bat_fram = DeVil1;
                            break;
                        default:
                            break;
                        }
                        break;
                    case Devil_Blue: 
                        if (!Devil_die_by_foot)
                        {
                            if (!direction_BLue)
                            {
                                Devil.x += 3;
                            }
                            else if (direction_BLue)
                            {
                                Devil.x -= 3;
                            }
                            if (Devil.x >= 335)
                            {
                                direction_BLue = true;
                                DeVil_Bluet_fram = Blue_1;
                            }
                            else if (Devil.x <= 0)
                            {
                                direction_BLue = false;
                                DeVil_Bluet_fram = Blue_2;
                            }
                            switch (DeVil_Bluet_fram)
                            {
                            case Blue_1:
                                sDE_2_0.setPosition(Devil.x, Devil.y);
                                app.draw(sDE_2_0);
                                break;
                            case Blue_2:
                                sDE_2_1.setPosition(Devil.x, Devil.y);
                                app.draw(sDE_2_1);
                                break;
                            default:
                                break;
                            }

                        }
                        else
                        {
                            switch (DeVil_Bluet_fram)
                            {
                            case Blue_1:
                                sDE_2_0.setPosition(Devil.x, Devil.y += 8);
                                app.draw(sDE_2_0);
                                break;
                            case Blue_2:
                                sDE_2_1.setPosition(Devil.x, Devil.y += 8);
                                app.draw(sDE_2_1);
                                break;
                            default:
                                break;
                            }
                        }
                        break;
                    case Devil_frog:
                        sDE_1_0.setPosition(Devil.x, Devil.y);
                        app.draw(sDE_1_0);
                        break;
                    case Devil_Red:
                        if (!Devil_die_by_foot)
                        {
                            int delaytime = 4;
                            int movex = 10;
                            switch (Redfram)
                            {
                            case R1:
                                loopdelayRed++;
                                if (loopdelayRed >= delaytime)
                                {
                                    sDevilRed.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilRed);
                                    Devil.x  += movex;
                                    Redfram = R2;
                                    loopdelayRed = 0;
                                }
                                else
                                {
                                    sDevilRed.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilRed);
                                }
                                break;
                            case R2:
                                loopdelayRed++;
                                if (loopdelayRed >= delaytime)
                                {
                                    sDevilRed.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilRed);
                                    Devil.x -= movex;
                                    Redfram = R3;
                                    loopdelayRed = 0;
                                }
                                else
                                {
                                    sDevilRed.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilRed);
                                }
                                break;
                            case R3:
                                loopdelayRed++;
                                if (loopdelayRed >= delaytime)
                                {
                                    sDevilRed.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilRed);
                                    Devil.x -= movex;
                                    Redfram = R4;
                                    loopdelayRed = 0;
                                }
                                else
                                {
                                    sDevilRed.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilRed);
                                }
                                break;
                            case R4:
                                loopdelayRed++;
                                if (loopdelayRed >= delaytime)
                                {
                                    sDevilRed.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilRed);
                                    Devil.x += movex;
                                    Redfram = R1;
                                    loopdelayRed = 0;
                                }
                                else
                                {
                                    sDevilRed.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilRed);
                                }
                                break;
                            default:
                                break;
                            }
                        }
                        else
                        {
                            sDevilRed.setPosition(Devil.x, Devil.y += 8);
                            app.draw(sDevilRed);
                        }
                        break;

                    case Devil_Ping:
                        if (!Devil_die_by_foot)
                        {
                            int delaytime = 4;
                            int movex = 10;
                            switch (Pingfram)
                            {
                            case P1:
                                loopdelayPing++;
                                if (loopdelayPing >= delaytime)
                                {
                                    sDevilPing.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilPing);
                                    Devil.x += movex;
                                    Pingfram = P2;
                                    loopdelayPing = 0;
                                }
                                else
                                {
                                    sDevilPing.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilPing);
                                }
                                break;
                            case P2:
                                loopdelayPing++;
                                if (loopdelayPing >= delaytime)
                                {
                                    sDevilPing.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilPing);
                                    Devil.x -= movex;
                                    Pingfram = P3;
                                    loopdelayPing = 0;
                                }
                                else
                                {
                                    sDevilPing.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilPing);
                                }
                                break;
                            case P3:
                                loopdelayPing++;
                                if (loopdelayPing >= delaytime)
                                {
                                    sDevilPing.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilPing);
                                    Devil.x -= movex;
                                    Pingfram = P4;
                                    loopdelayPing = 0;
                                }
                                else
                                {
                                    sDevilPing.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilPing);
                                }
                                break;
                            case P4:
                                loopdelayPing++;
                                if (loopdelayPing >= delaytime)
                                {
                                    sDevilPing.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilPing);
                                    Devil.x += movex;
                                    Pingfram = P1;
                                    loopdelayPing = 0;
                                }
                                else
                                {
                                    sDevilPing.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilPing);
                                }
                                break;
                            default:
                                break;
                            }
                        }
                        else
                        {
                            sDevilPing.setPosition(Devil.x, Devil.y += 8);
                            app.draw(sDevilPing);
                        }
                        break;

                    case Devil_Green:
                        if (!Devil_die_by_foot)
                        {
                            int delaytime = 4;
                            int movex = 10;
                            switch (Greenfram)
                            {
                               
                            case G1:
                                loopdelayGreen++;
                                if (loopdelayGreen >= delaytime)
                                { 
                                    Devil.x += movex;
                                    Greenfram = G2;
                                    loopdelayGreen = 0;
                                }
                                switch (GreenATKfram)
                                {
                                case AG1:
                                    sDevilGreen_1.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_1);
                                    break;
                                case AG2:
                                    sDevilGreen_2.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_2);
                                    break;
                                case AG3:
                                    sDevilGreen_3.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_3);
                                    break;
                                case AG4:
                                    sDevilGreen_4.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_4);
                                    break;
                                default:
                                    break;
                                }
                                break;



                            case G2:
                                loopdelayGreen++;
                                if (loopdelayGreen >= delaytime)
                                {
                                    
                                    Devil.x -= movex;
                                    Greenfram = G3;
                                    loopdelayGreen = 0;
                                }
                                switch (GreenATKfram)
                                {
                                case AG1:
                                    sDevilGreen_1.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_1);
                                    break;
                                case AG2:
                                    sDevilGreen_2.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_2);
                                    break;
                                case AG3:
                                    sDevilGreen_3.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_3);
                                    break;
                                case AG4:
                                    sDevilGreen_4.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_4);
                                    break;
                                default:
                                    break;
                                }

                                break;
                            case G3:
                                loopdelayGreen++;
                                if (loopdelayGreen >= delaytime)
                                {
                                    
                                    Devil.x -= movex;
                                    Greenfram = G4;
                                    loopdelayGreen = 0;
                                }
                                switch (GreenATKfram)
                                {
                                case AG1:
                                    sDevilGreen_1.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_1);
                                    break;
                                case AG2:
                                    sDevilGreen_2.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_2);
                                    break;
                                case AG3:
                                    sDevilGreen_3.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_3);
                                    break;
                                case AG4:
                                    sDevilGreen_4.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_4);
                                    break;
                                default:
                                    break;
                                }

                                break;
                            case G4:
                                loopdelayGreen++;
                                if (loopdelayGreen >= delaytime)
                                {
                                   
                                    Devil.x += movex;
                                    Greenfram = G1;
                                    loopdelayGreen = 0;
                                }
                                switch (GreenATKfram)
                                {
                                case AG1:
                                    sDevilGreen_1.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_1);
                                    break;
                                case AG2:
                                    sDevilGreen_2.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_2);
                                    break;
                                case AG3:
                                    sDevilGreen_3.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_3);
                                    break;
                                case AG4:
                                    sDevilGreen_4.setPosition(Devil.x, Devil.y);
                                    app.draw(sDevilGreen_4);
                                    break;
                                default:
                                    break;
                                }

                                break;
                            default:
                                break;
                            }
                        }
                        else
                        {
                            sDevilGreen_1.setPosition(Devil.x, Devil.y += 8);
                            app.draw(sDevilGreen_1);
                        }
                        break;

                      
                      
                         case Devil_3EYE:
                             if (!Devil_die_by_foot)
                             {
                                             int Delaytime = 2;
                                             switch (EYE3fram)
                                             {
                                             case E1:
                                                 loopdelay3EYE++;
                                                 sDevil3E_1.setPosition(Devil.x, Devil.y);
                                                 app.draw(sDevil3E_1);
                                                 if (EYE3ATK)
                                                 {
                                                     sDevil3E_A.setPosition(Devil.x + 18, Devil.y + 1);
                                                     app.draw(sDevil3E_A);
                                                 }
                                                 if (loopdelay3EYE >= Delaytime)
                                                 {
                                                     EYE3ATK = false;
                                                     loopdelay3EYE = 0;
                                                     EYE3fram = E3;
                                                 }
                                                 break;
                                             case E3:
                                                 loopdelay3EYE++;
                                                 sDevil3E_2.setPosition(Devil.x, Devil.y);
                                                 app.draw(sDevil3E_2);
                                                 if (EYE3ATK)
                                                 {
                                                     sDevil3E_A.setPosition(Devil.x + 18, Devil.y + 1);
                                                     app.draw(sDevil3E_A);
                                                 }
                                                 if (loopdelay3EYE >= Delaytime)
                                                 {
                                                     EYE3ATK = false;
                                                     loopdelay3EYE = 0;
                                                     EYE3fram = E4;
                                                 }
                                                 break;

                                             case E4:
                                                 loopdelay3EYE++;
                                                 sDevil3E_3.setPosition(Devil.x, Devil.y);
                                                 app.draw(sDevil3E_3);
                                                 if (EYE3ATK)
                                                 {
                                                     sDevil3E_A.setPosition(Devil.x + 18, Devil.y + 1);
                                                     app.draw(sDevil3E_A);
                                                 }
                                                 if (loopdelay3EYE >= Delaytime)
                                                 {
                                                     EYE3ATK = false;
                                                     loopdelay3EYE = 0;
                                                     EYE3fram = E1;
                                                     int movenormal = 8;

                                                     switch (DeVilDirec)
                                                     {
                                                     case LU:

                                                         Devil.x -= movenormal;
                                                         Devil.y -= movenormal;


                                                         break;
                                                     case LD:

                                                         Devil.x -= movenormal;
                                                         Devil.y += movenormal;


                                                         break;
                                                     case RU:

                                                         Devil.x += movenormal;
                                                         Devil.y -= movenormal;

                                                         break;
                                                     case RD:

                                                         Devil.x += movenormal;
                                                         Devil.y += movenormal;

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
                                                     else if (Devil.x >= 400 - 67 && DeVilDirec == RU)
                                                     {
                                                         DeVilDirec = LU;
                                                     }
                                                     else if (Devil.x >= 400 - 67 && DeVilDirec == RD)
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
                                                     else if (Devil.y >= 650 - 100 && DeVilDirec == LD)
                                                     {
                                                         DeVilDirec = LU;
                                                     }
                                                     else if (Devil.y >= 650 - 100 && DeVilDirec == RD)
                                                     {
                                                         DeVilDirec = RU;
                                                     }
                                                 }
                                                 break;

                                             default:
                                                 break;
                                             }
                                 
                              }
                             else
                             {
                             sDevil3E_1.setPosition(Devil.x, Devil.y+=8);
                             app.draw(sDevil3E_1);
                             }
                             break; 

                    default:
                        break;
                    }
                }




                /*bulletbat*/
                bool bulletDevil = false;
                if (Devilalive && DeVil_Bat_fram != DeVil1_1 && DeVil_Bat_fram != DeVil1_2 && DeVil_Bat_fram != DeVil1_3 && DevilBatcanBullet )
                {
                        
                
                    if (CHOSENDEVIL == Devil_Bat)
                    {
                        loopdelayBulletDevil++;
                        if (loopdelayBulletDevil >= 40)
                        {
                            loopdelayBulletDevil = 0;
                            BulletDevil[amountbullet].x = Devil.x + 50;
                            BulletDevil[amountbullet].y = Devil.y-65;
                            amountbullet++;
                        }
                        // sBulleyDevil(t83)
                    }
                    if (amountbullet > 0)
                    {
                        for (int i = 0; i < amountbullet; i++)
                        {
                            if (BulletDevil[i].y <= 670)
                            {
                                BulletDevil[i].y += 12;
                            }
                            else
                            {
                                BulletDevil[i].x = -20;

                            }
                            if (BulletDevil[i].y <= 670)
                            {
                                if (dy < 0)
                                {
                                    BulletDevil[i].y = BulletDevil[i].y - dy;
                                }

                                sBulleyDevil.setPosition(BulletDevil[i].x, BulletDevil[i].y);
                                app.draw(sBulleyDevil);
                            }
                        }
                    }
                }
                else
                {
                    amountbullet = 0;
                }

                




                /*bullet*/

                if (allb > 0)
                {
                    for (int i = 0; i < allb; i++)
                    {
                        if (bullet[i].y >= 0)
                        {
                            bullet[i].y -= 12;
                        }
                        switch (CHOSENDEVIL)
                        {
                        case Empty:
                            break;
                        case Devil_Bat:
                            if ((bullet[i].x + 10 >= Devil.x) && (bullet[i].x <= Devil.x + 112) && (bullet[i].y <= Devil.y + 67) && (bullet[i].y - 10 >= Devil.y) && bullet[i].y >= 0 && Devilalive)
                            {
                                heartDevil--;
                                if (heartDevil == 0)
                                {
                                    Devilalive = false;
                                    CHOSENDEVIL = Empty;
                                    DevilBatcanBullet = false;

                                }
                                bullet[i].y = -50;
                                bullet[i].x = -50;
                            }
                            break;
                        case Devil_Blue:

                            if ((bullet[i].x + 5 >= Devil.x) && (bullet[i].x <= Devil.x + 40) && (bullet[i].y <= Devil.y + 50) && (bullet[i].y - 10 >= Devil.y) && bullet[i].y >= 0 && Devilalive)
                            {
                                heartDevil--;
                                if (heartDevil == 0)
                                {
                                    Devilalive = false;
                                    CHOSENDEVIL = Empty;

                                }
                                bullet[i].y = -50;
                                bullet[i].x = -50;
                            }
                            break;
                        case Devil_Red:
                           
                            if ((bullet[i].x + 6 >= Devil.x) && (bullet[i].x <= Devil.x + 55) && (bullet[i].y <= Devil.y + 40) && (bullet[i].y - 10 >= Devil.y) && bullet[i].y >= 0 && Devilalive)
                            {
                                heartDevil--;
                                if (heartDevil == 0)
                                {
                                    Devilalive = false;
                                    CHOSENDEVIL = Empty;

                                }
                                bullet[i].y = -50;
                                bullet[i].x = -50;
                            }
                            break;
                        case Devil_Ping:

                            if ((bullet[i].x + 5 >= Devil.x) && (bullet[i].x <= Devil.x + 64) && (bullet[i].y <= Devil.y + 56) && (bullet[i].y - 10 >= Devil.y) && bullet[i].y >= 0 && Devilalive)
                            {
                                heartDevil--;
                                if (heartDevil == 0)
                                {
                                    Devilalive = false;
                                    CHOSENDEVIL = Empty;

                                }
                                bullet[i].y = -50;
                                bullet[i].x = -50;
                            }
                            break;
                        case Devil_Green:

                            if ((bullet[i].x + 4 >= Devil.x) && (bullet[i].x <= Devil.x + 89) && (bullet[i].y <= Devil.y + 50) && (bullet[i].y - 10 >= Devil.y) && bullet[i].y >= 0 && Devilalive)
                            {
                                heartDevil--;

                                switch (GreenATKfram)
                                {
                                case AG1:
                                    GreenATKfram = AG2;
                                    break;
                                case AG2:
                                    GreenATKfram = AG3;
                                    break;
                                case AG3:
                                    GreenATKfram = AG4;
                                    break;
                                default:
                                    break;
                                }

                                if (heartDevil == 0)
                                {
                                    Devilalive = false;
                                    CHOSENDEVIL = Empty;

                                }
                                bullet[i].y = -50;
                                bullet[i].x = -50;
                            }
                            break;

                        case Devil_3EYE:
                            if ((bullet[i].x + 5 >= Devil.x) && (bullet[i].x <= Devil.x + 60) && (bullet[i].y <= Devil.y + 88) && (bullet[i].y - 10 >= Devil.y) && bullet[i].y >= 0 && Devilalive)
                            {
                                heartDevil--;

                                EYE3ATK = true;

                                if (heartDevil == 0)
                                {
                                    Devilalive = false;
                                    CHOSENDEVIL = Empty;

                                }
                                bullet[i].y = -50;
                                bullet[i].x = -50;
                            }
                            break;
                      
                        default:
                            break;
                        }
                        if (bullet[i].y >= 0)
                        {
                            SBullet.setPosition(bullet[i].x, bullet[i].y);
                            app.draw(SBullet);
                        }
                    }
                }


                /*score topbar*/
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


                /*die dooler by fall*/
                int tall_y;
                if (dir == LEFT)
                {
                    tall_y = 65;
                }
                if (dir == RIGHT)
                {
                    tall_y = 65;
                }
                if (dir == ATK)
                {
                    tall_y = 80;
                }
                if (y > 665 - tall_y && dooler_alive)
                {


                    dooler_alive = false;

                    cout << "dawdawd" << endl;

                }

          //      cout << "Devil.x : " << Devil.x << " Devil.y : "<< Devil.y << endl;




                /*fall doe and finsh - background*/
                if (Background.y < -630)
                {
                    //      cout << " Mouse x : " << sf::Mouse::getPosition(app).x;
                    //      cout << " Mouse y : " << sf::Mouse::getPosition(app).y << endl;

                    sf::Vector2f Mouse = app.mapPixelToCoords(sf::Mouse::getPosition(app));


                    if (sbutton_playagin.getGlobalBounds().contains(Mouse))
                    {
                        sbutton_playagin2.setPosition(150, 452);
                        app.draw(sbutton_playagin2);
                        if (sbutton_playagin.getGlobalBounds().contains(Mouse) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
                        {
                            system("CLS");
                            CHOSEMENU = PLAY;
                            one_read_write = true;
                            goto STAR;
                        }
                    }
                    else
                    {
                        sbutton_playagin.setPosition(150, 452);
                        app.draw(sbutton_playagin);
                    }

                    if (sbutton_menu.getGlobalBounds().contains(Mouse))
                    {
                        sbutton_menu2.setPosition(161, 514);
                        app.draw(sbutton_menu2);
                        if (sbutton_menu.getGlobalBounds().contains(Mouse) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
                        {
                            system("CLS");
                            CHOSEMENU = MENU;
                            one_read_write = true;
                            goto STAR;
                        }
                    }
                    else
                    {
                        sbutton_menu.setPosition(161, 514);
                        app.draw(sbutton_menu);
                    }

                    for (int k = 1; k <= 2; k++)
                    {
                        int scorefordigit, star_x;
                        if (k == 1)
                        {
                            position_digit_forbackground.y = 305;
                            star_x = 275;
                            scorefordigit = score;
                        }
                        else if (k == 2)
                        {
                            position_digit_forbackground.y = 352;
                            star_x = 251;
                            scorefordigit = score_read_write[0];
                        }


                        int digit = 1;
                        int Total_digits = to_string(scorefordigit).length();
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

                                    position_digit_forbackground.x = star_x;
                                    break;
                                case 2:

                                    position_digit_forbackground.x = star_x + 25;
                                    break;
                                case 3:


                                    position_digit_forbackground.x = star_x + 50;
                                    break;
                                case 4:

                                    position_digit_forbackground.x = star_x + 75;
                                    break;
                                case 5:
                                    position_digit_forbackground.x = star_x + 100;
                                    break;
                                case 6:

                                    position_digit_forbackground.x = star_x + 125;
                                    break;
                                case 7:

                                    position_digit_forbackground.x = star_x + 150;
                                    break;
                                case 8:

                                    position_digit_forbackground.x = star_x + 175;
                                    break;
                                default:
                                    break;
                                }

                                switch (number_digit)
                                {
                                case 0:
                                    s0.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                    app.draw(s0);
                                    break;
                                case 1:
                                    s1.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                    app.draw(s1);
                                    break;
                                case 2:
                                    s2.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                    app.draw(s2);
                                    break;
                                case 3:
                                    s3.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                    app.draw(s3);
                                    break;
                                case 4:
                                    s4.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                    app.draw(s4);
                                    break;
                                case 5:
                                    s5.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                    app.draw(s5);
                                    break;
                                case 6:
                                    s6.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                    app.draw(s6);
                                    break;
                                case 7:
                                    s7.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                    app.draw(s7);
                                    break;
                                case 8:
                                    s8.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                    app.draw(s8);
                                    break;
                                case 9:
                                    s9.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);;
                                    app.draw(s9);
                                    break;
                                default:
                                    break;
                                }
                            }
                        }
                    }
                }
                else
                {
                    /*fall but notfinsh - background*/

                    bool bloack_out_all = true;
                    for (int i = 0; i < blockg; i++)
                    {
                        if (platchosen[i].y >= -15)
                        {
                            bloack_out_all = false;
                        }
                    }
                    if (bloack_out_all && Background.y >= -630)
                    {

                        star_y[0] -= 20;
                        star_y[1] -= 20;

                        for (int k = 1; k <= 2; k++)
                        {
                            int scorefordigit, star_x;
                            if (k == 1)
                            {
                                position_digit_forbackground.y = star_y[0];
                                star_x = 275;
                                scorefordigit = score;
                            }
                            else if (k == 2)
                            {
                                position_digit_forbackground.y = star_y[1];
                                star_x = 251;
                                scorefordigit = score_read_write[0];
                            }


                            int digit = 1;
                            int Total_digits = to_string(scorefordigit).length();
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

                                        position_digit_forbackground.x = star_x;
                                        break;
                                    case 2:

                                        position_digit_forbackground.x = star_x + 25;
                                        break;
                                    case 3:


                                        position_digit_forbackground.x = star_x + 50;
                                        break;
                                    case 4:

                                        position_digit_forbackground.x = star_x + 75;
                                        break;
                                    case 5:
                                        position_digit_forbackground.x = star_x + 100;
                                        break;
                                    case 6:

                                        position_digit_forbackground.x = star_x + 125;
                                        break;
                                    case 7:

                                        position_digit_forbackground.x = star_x + 150;
                                        break;
                                    case 8:

                                        position_digit_forbackground.x = star_x + 175;
                                        break;
                                    default:
                                        break;
                                    }

                                    switch (number_digit)
                                    {
                                    case 0:
                                        s0.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                        app.draw(s0);
                                        break;
                                    case 1:
                                        s1.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                        app.draw(s1);
                                        break;
                                    case 2:
                                        s2.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                        app.draw(s2);
                                        break;
                                    case 3:
                                        s3.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                        app.draw(s3);
                                        break;
                                    case 4:
                                        s4.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                        app.draw(s4);
                                        break;
                                    case 5:
                                        s5.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                        app.draw(s5);
                                        break;
                                    case 6:
                                        s6.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                        app.draw(s6);
                                        break;
                                    case 7:
                                        s7.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                        app.draw(s7);
                                        break;
                                    case 8:
                                        s8.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                        app.draw(s8);
                                        break;
                                    case 9:
                                        s9.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);;
                                        app.draw(s9);
                                        break;
                                    default:
                                        break;
                                    }
                                }
                            }
                        }



                    }

                }



                /*draw doodler*/
                if (dir == LEFT)
                {
                    sPersLeftt.setPosition(x, y);
                    app.draw(sPersLeftt);
                }
                if (dir == RIGHT)
                {
                    sPersRight.setPosition(x, y);
                    app.draw(sPersRight);
                }
                if (dir == ATK)
                {
                    sPersATK.setPosition(x, y);
                    app.draw(sPersATK);
                }


                /*draw propller*/
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
                        have_propller = false;
                    }
                    propllerdel.y += 8;
                    sPropeller_1.setPosition(propllerdel.x, propllerdel.y);
                    app.draw(sPropeller_1);
                }


                break;
            }


            if (CHOSEMENU == MENU)
            {

                if (Keyboard::isKeyPressed(Keyboard::T))
                {
                    system("CLS");
                    CHOSEMENU = TEST;


                }


                platchosen[0].x = 30;
                platchosen[0].y = 520;
                dir = RIGHT;
                int jump = -7;
                dy += 0.2;
                y += dy;
                if ((x + 31 >= platchosen[0].x) && (x <= platchosen[0].x + 47) && (y + 52 >= platchosen[0].y) && (y + 52 <= platchosen[0].y + 14) && (dy > 0) && (dir == RIGHT))
                {


                    dy = jump;
                }

                if ((x + 50 >= platchosen[0].x) && (x <= platchosen[0].x + 35) && (y + 52 >= platchosen[0].y) && (y + 52 <= platchosen[0].y + 14) && (dy > 0) && (dir == LEFT))
                {

                    dy = jump;
                }

                if ((x + 34 >= platchosen[0].x) && (x <= platchosen[0].x + 50) && (y + 77 >= platchosen[0].y) && (y + 77 <= platchosen[0].y + 14) && (dy > 0) && (dir == ATK))
                {
                    dy = jump;
                }


                app.draw(sMENU);

                sf::Vector2f Mouse = app.mapPixelToCoords(sf::Mouse::getPosition(app));


                if (sPlay1.getGlobalBounds().contains(Mouse))
                {
                    sPlay.setPosition(80, 150);
                    app.draw(sPlay);
                    if (sPlay1.getGlobalBounds().contains(Mouse) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
                    {
                        system("CLS");
                        CHOSEMENU = PLAY;
                        goto STAR;
                    }
                }
                else
                {
                    sPlay1.setPosition(80, 150);
                    app.draw(sPlay1);
                }

                if (sScores1.getGlobalBounds().contains(Mouse))
                {
                    sScores.setPosition(120, 250);
                    app.draw(sScores);
                    if (sScores1.getGlobalBounds().contains(Mouse) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
                    {
                        system("CLS");
                        CHOSEMENU = SCORE;
                        goto STAR;
                    }
                }
                else
                {
                    sScores1.setPosition(120, 250);
                    app.draw(sScores1);
                }






                sPersRight.setPosition(x, y);
                app.draw(sPersRight);

                sPlatG.setPosition(platchosen[0].x, platchosen[0].y);
                app.draw(sPlatG);


                switch (UFOfrme)
                {
                case UFO_1:
                    sUFO_1.setPosition(266, 29);
                    app.draw(sUFO_1);
                    UFOfrme = UFO_2;
                    break;
                case UFO_2:
                    sUFO_2.setPosition(266, 29);
                    app.draw(sUFO_2);
                    UFOfrme = UFO_1;
                    break;
                default:
                    break;
                }

                /*
                sDE_1_0.setPosition(200, 200);
                app.draw(sDE_1_0);


                sPlatG.setPosition(200, 230);
                app.draw(sPlatG);
                sPlatG.setPosition(250, 230);
                app.draw(sPlatG);

                sDE_2_1.setPosition(200, 400);
                app.draw(sDE_2_1);*/

                break;
            }

            if (CHOSEMENU == SCORE)
            {


                //    cout << " Mouse x : " << sf::Mouse::getPosition(app).x;
                //    cout << " Mouse y : " << sf::Mouse::getPosition(app).y << endl;
                app.draw(sMenu_scores);


                sf::Vector2f Mouse = app.mapPixelToCoords(sf::Mouse::getPosition(app));


                if (sbutton_menu.getGlobalBounds().contains(Mouse))
                {
                    sbutton_menu2.setPosition(238, 525);
                    app.draw(sbutton_menu2);
                    if (sbutton_menu.getGlobalBounds().contains(Mouse) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
                    {
                        system("CLS");
                        CHOSEMENU = MENU;
                        one_read_write = true;
                        goto STAR;
                    }
                }
                else
                {
                    sbutton_menu.setPosition(238, 525);
                    app.draw(sbutton_menu);
                }

                if (one_read_write)
                {
                    ifstream readfile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Config/scores.txt");
                    if (readfile.is_open())
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            readfile >> score_read_write[i];
                            cout << "score[i]" << score_read_write[i] << endl;
                        }
                        cout << "read suscess" << endl;
                    }
                    else
                    {
                        cout << "ERROE" << endl;
                    }
                    readfile.close();
                    one_read_write = false;
                }



                for (int k = 0; k < 5; k++)
                {

                    int scorefordigit, star_x = 100;
                    scorefordigit = score_read_write[k];
                    if (k == 0)
                    {
                        position_digit_forbackground.y = 165;
                    }
                    if (k == 1)
                    {
                        position_digit_forbackground.y = 221;
                    }
                    if (k == 2)
                    {
                        position_digit_forbackground.y = 280;
                    }
                    if (k == 3)
                    {
                        position_digit_forbackground.y = 340;
                    }
                    if (k == 4)
                    {
                        position_digit_forbackground.y = 400;
                    }
                    int digit = 1;
                    int Total_digits = to_string(scorefordigit).length();
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

                                position_digit_forbackground.x = star_x;
                                break;
                            case 2:

                                position_digit_forbackground.x = star_x + 25;
                                break;
                            case 3:


                                position_digit_forbackground.x = star_x + 50;
                                break;
                            case 4:

                                position_digit_forbackground.x = star_x + 75;
                                break;
                            case 5:
                                position_digit_forbackground.x = star_x + 100;
                                break;
                            case 6:

                                position_digit_forbackground.x = star_x + 125;
                                break;
                            case 7:

                                position_digit_forbackground.x = star_x + 150;
                                break;
                            case 8:

                                position_digit_forbackground.x = star_x + 175;
                                break;
                            default:
                                break;
                            }

                            switch (number_digit)
                            {
                            case 0:
                                s0.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                app.draw(s0);
                                break;
                            case 1:
                                s1.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                app.draw(s1);
                                break;
                            case 2:
                                s2.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                app.draw(s2);
                                break;
                            case 3:
                                s3.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                app.draw(s3);
                                break;
                            case 4:
                                s4.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                app.draw(s4);
                                break;
                            case 5:
                                s5.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                app.draw(s5);
                                break;
                            case 6:
                                s6.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                app.draw(s6);
                                break;
                            case 7:
                                s7.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                app.draw(s7);
                                break;
                            case 8:
                                s8.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);
                                app.draw(s8);
                                break;
                            case 9:
                                s9.setPosition(position_digit_forbackground.x, position_digit_forbackground.y);;
                                app.draw(s9);
                                break;
                            default:
                                break;
                            }
                        }
                    }
                }


                break;
            }

            if (CHOSEMENU == TEST)
            {


                cout << " x : " << x ;
                cout << " y : " << y << endl;






                if (Keyboard::isKeyPressed(Keyboard::Right))
                {
                    x += 1;
                }
                if (Keyboard::isKeyPressed(Keyboard::Left))
                {
                    x -= 1;
                }
                if (Keyboard::isKeyPressed(Keyboard::Up))
                {
                    y -= 1;
                }
                if (Keyboard::isKeyPressed(Keyboard::Down))
                {
                    y += 1;
                }
                if (Keyboard::isKeyPressed(Keyboard::M))
                {
                    system("CLS");
                    CHOSEMENU = MENU;
                    one_read_write = true;

                }
                if (Keyboard::isKeyPressed(Keyboard::L))
                {
                    dir = LEFT;

                }
                if (Keyboard::isKeyPressed(Keyboard::R))
                {
                    dir = RIGHT;

                }
                if (Keyboard::isKeyPressed(Keyboard::A))
                {
                    dir = ATK;

                }

                sBack_grid.setPosition(Background.x, Background.y);
                app.draw(sBack_grid);



                stestxy.setPosition(x, y);
                app.draw(stestxy);
              





               // sDevil3E_1.setPosition(200, 160);
             //   app.draw(sDevil3E_1);

                sDevilGreen_1.setPosition(100, 100);
                app.draw(sDevilGreen_1);

                    sDevilRed.setPosition(200, 100);
                app.draw(sDevilRed);

                sDevilPing.setPosition(300, 100);
                app.draw(sDevilPing);

/*
     //       Devil_Red:

                if ((x+ 6 >= 200) && (x <= 200 + 55) && (y <= 100 + 40) && (y - 10 >= 100) &&y >= 0 )
                {
                    cout << "redd" << endl;
                }

          //  Devil_Ping:

                if ((x + 5 >= 300) && (x <= 300 + 64) && (y<= 100 + 56) && (y - 10 >= 100) && y >= 0 )
                {
                    cout << "Pingg" << endl;
                }

           //  Devil_Green:

                if ((x + 4 >= 100) && (x <=100 + 89) && (y <= 100 + 50) && (y - 10 >= 100) && y >= 0)
                {
                    cout << "Greenn" << endl;
                }


                Devil_3EYE:
                   if ((x + 5 >= 300) && (x <= 300 + 60) && (y <= 300 + 88) && (y - 10 >= 300) && y >= 0)
                {
                    cout << "EYEEEEE" << endl;
                }
                */
         

             

            //    cout << " Mouse x : " << sf::Mouse::getPosition(app).x;
            //    cout << " Mouse y : " << sf::Mouse::getPosition(app).y << endl;



                /*
                                platchosen[1].x = 100;
                                platchosen[1].y = 100;

                                if (sf::Mouse::getPosition(app).x >= platchosen[1].x && sf::Mouse::getPosition(app).x <= platchosen[1].x+57 && sf::Mouse::getPosition(app).y >= platchosen[1].y && sf::Mouse::getPosition(app).y <= platchosen[1].y + 13)
                                {
                                    cout << " find in " << endl;
                                }

                                sPlatDB1.setPosition(platchosen[1].x, platchosen[1].y);
                                app.draw(sPlatDB1);*/

                                /*
                                sf::Vector2f Mouse = app.mapPixelToCoords(sf::Mouse::getPosition(app));



                                    if (( sPlatDB1.getGlobalBounds().contains(Mouse) &&  sf::Mouse::isButtonPressed(sf::Mouse::Left) ) || (sf::Mouse::isButtonPressed(sf::Mouse::Left)  && !fristmouseDB[i]))
                                    {
                                          cout << "iffffffffffffff" << endl;
                                        if (fristmouseDB[i])
                                        {
                                            conmouseDB[i].x = sf::Mouse::getPosition(app).x;
                                            conmouseDB[i].y = sf::Mouse::getPosition(app).y;
                                            conDB[i].x = platchosen[i].x;
                                            conDB[i].y = platchosen[i].y ;
                                            fristmouseDB[i] = false;
                                        }


                                        platchosen[i].x = conDB[i].x + (sf::Mouse::getPosition(app).x - conmouseDB[i].x);
                                        platchosen[i].y = conDB[i].y + (sf::Mouse::getPosition(app).y - conmouseDB[i].y);
                                        sPlatDB2.setPosition(platchosen[i].x -22, platchosen[i].y -27);
                                        app.draw(sPlatDB2);


                                    }



                                else
                                {
                                        if (sPlatDB1.getGlobalBounds().contains(Mouse) &&  !fristmouseDB[i])
                                        {
                                            cout << "Released" << endl;
                                                fristmouseDB[i] = true;
                                             // Darx = 0;
                                             //   Dary = 0;
                                        }

                                    switch (DrakBluefram[i])
                                    {
                                    case DB1:
                                        sPlatDB1.setPosition(platchosen[i].x, platchosen[i].y);
                                        app.draw(sPlatDB1);
                                        sArrowUp.setPosition(platchosen[i].x + 26, platchosen[i].y - 10);
                                        app.draw(sArrowUp);

                                        sArrowDown.setPosition(platchosen[i].x + 28, platchosen[i].y + 15);
                                        app.draw(sArrowDown);

                                        sArrowLeft.setPosition(platchosen[i].x - 14, platchosen[i].y + 4);
                                        app.draw(sArrowLeft);

                                        sArrowRight.setPosition(platchosen[i].x + 60, platchosen[i].y + 1);
                                        app.draw(sArrowRight);
                                        loopdelayDrakBlue[i] ++;
                                        if (loopdelayDrakBlue[i] >= 8)
                                        {
                                            loopdelayDrakBlue[i] = 0;
                                            DrakBluefram[i] = DB2;
                                        }
                                        break;
                                    case DB2:
                                        sPlatDB1.setPosition(platchosen[i].x, platchosen[i].y);
                                        app.draw(sPlatDB1);
                                        sArrowUp.setPosition(platchosen[i].x + 26, platchosen[i].y - 15);
                                        app.draw(sArrowUp);

                                        sArrowDown.setPosition( platchosen[i].x + 28, platchosen[i].y + 20);
                                        app.draw(sArrowDown);

                                        sArrowLeft.setPosition(platchosen[i].x - 19, platchosen[i].y + 4);
                                        app.draw(sArrowLeft);

                                        sArrowRight.setPosition(platchosen[i].x + 65, platchosen[i].y + 1);
                                        app.draw(sArrowRight);
                                        loopdelayDrakBlue[i] ++;
                                        if (loopdelayDrakBlue[i] >= 8)
                                        {
                                            loopdelayDrakBlue[i] = 0;
                                            DrakBluefram[i] = DB1;
                                        }
                                        break;
                                    default:
                                        break;
                                    }
                                }
                                    */




                                    /*       sPlatDB1.setPosition(100, 160);
                                           app.draw(sPlatDB1);

                                           sPlatDB2.setPosition(x, y);
                                           app.draw(sPlatDB2);*/



                                           /*
                                           sPlatDB1.setPosition(100, 160);
                                           app.draw(sPlatDB1);


                                           sPlatDB3.setPosition(100, 240);
                                           app.draw(sPlatDB3);

                                           sPlatG.setPosition(x,y);
                                           app.draw(sPlatG);
                                           */
                                       
                                            if (dir == LEFT)
                                           {
                                               
                                            //    SBullet.setPosition(x, y);
                                              //  app.draw(SBullet);



                                              sPersLeftt.setPosition(x, y);
                                               app.draw(sPersLeftt);
                                           }
                                           if (dir == RIGHT)
                                           {
                                            
                                             //  SBullet.setPosition(x, y);
                                             //  app.draw(SBullet);
                                               
                                               
                                               sPersRight.setPosition(x, y);
                                               app.draw(sPersRight);
                                           }
                                           if (dir == ATK)
                                           {
                                           
                                              // SBullet.setPosition(x, y);
                                              // app.draw(SBullet);

                                              sPersATK.setPosition(x, y);
                                               app.draw(sPersATK);
                                           }

                                           sDevil3E_3.setPosition(300, 300);
                                            app.draw(sDevil3E_3);


                                       
                                           


                break;
            }
        }


        app.display();

    }






    return 0;
}


