#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
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
bool block_Shield(int percent)
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
}bool block_Rocket(int percent)
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
    sf::Font font;
    font.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/al-seana.ttf");
    sf::Text text,name;


    RenderWindow app(VideoMode(400, 650), "Doodle Game!");
    app.setFramerateLimit(60);

    Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21,
        t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40, t41, t42,
        t43, t44, t45, t46, t47, t48, t49, t50, t51, t52, t53, t54, t55, t56, t57, t58, t59, t60, t61, t62, t63, t64, t65, t66, t67
        , t68, t69, t70, t71, t72, t73, t74, t75, t76, t77, t78, t79, t80, t81, t82, t83, t84, t85, t86, t87, t88, t89, t90, t91, t92, t93, t94, t95, t96,
        t97, t98, t99, t100, t101, t102, t103, t104, t105, t106,t107,t108,t109,t110;

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
    t84.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Resume.png");
    t85.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/cancel1.png");
    t86.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/cancel2.png");
    t87.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/STOP1.png");
    t88.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/STOP2.png");
    t89.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/stars1.png");
    t90.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/stars2.png");
    t91.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/stars3.png");
    t92.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/shield.png");
    t93.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket.png");
    t94.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/shield1.png");
    t95.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/shield2.png");
    t96.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/shield3.png");
    t97.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket1.png");
    t98.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket2.png");
    t99.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket3.png");
    t100.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket4.png");
    t101.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket5.png");
    t102.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket6.png");
    t103.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket7.png");
    t104.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket8.png");
    t105.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket9.png");
    t106.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Rocket10.png");
    t107.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/BgDrak.png");
    t108.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/BgforDrakmap.png");
    t109.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/MENUforDarkMap.png");
    t110.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Moon.png");
    Sprite sMENU(t1), sPlatG(t2), sPersLeftt(t3), sPlatB(t4), sGameOver(t5), sPlatGy(t6)
        , sPersRight(t7), sPersATK(t8), SBullet(t9), sPlatGSp(t10), sPlatGSp2(t11), sPlatBrown1(t12),
        sPlatBrown2(t13), sPlatBrown3(t14), sPlatBrown4(t15), sPlatBrown5(t16), sPlatBrown6(t17),
        sPlatDevil_1(t18), sPlatDevil_2(t19), sPlatDevil_3(t20), sPlatDevil_2_2(t19), sBack_grid(t21),
        sPropeller_1(t22), sPropeller1_1(t22), sPropeller_2(t23), sPropeller_3(t24), sPropeller_4(t25), sTopbar(t26)
        , s0(t27), s1(t28), s2(t29), s3(t30), s4(t31), s5(t32), s6(t33), s7(t34), s8(t35), s9(t36),
        sUFO_1(t37), sUFO_2(t38), sPlay(t39), sPlay1(t40), sScores(t41), sScores1(t42), sGPP(t43),
        sDE_2_1(t45), sDE_2_0(t46), sbutton_playagin(t47), sbutton_menu(t48), sbutton_playagin2(t49), sbutton_menu2(t50),
        sMenu_scores(t51), stestxy(t52), sPlatwhite1(t53), sPlatwhite2(t54), sPlatwhite3(t55), sPlatOr1(t56), sPlatOr2(t57),
        sPlatOr3(t58), sPlatOr4(t59), sPlatOr5(t60), sPlatOr6(t61), sPlatOr7(t62), sPlatOr8(t63), sPlatY(t64), sPlatDB1(t65), sPlatDB2(t66),
        sArrowDown(t68), sArrowLeft(t69), sArrowRight(t70), sArrowUp(t71), sDE_1_0(t44), sDE_1_1(t67), sPlat_Devil(t72), sDevilRed(t73), sDevilPing(t74), sDevil3E_1(t75), sDevil3E_2(t76), sDevil3E_3(t77), sDevil3E_A(t78), sDevilGreen_1(t79)
        , sDevilGreen_2(t80), sDevilGreen_3(t81), sDevilGreen_4(t82), sBulleyDevil(t83), sSTOP(t84), sCancel_1(t85), sCancel_2(t86), sSTOP_1(t86), sSTOP_2(t87), sStars1(t89), sStars2(t90), sStars3(t91), sShield(t92), sRocket(t93), sShield1(t94)
        , sShield2(t95), sShield3(t96), sRocket1(t97), sRocket2(t98), sRocket3(t99), sRocket4(t100), sRocket5(t101), sRocket6(t102), sRocket7(t103), sRocket8(t104), sRocket9(t105), sRocket10(t106), sRocket11(t106), sBgDarkmap(t107), sBgforDrakmap(t108)
        , sMoon(t110);
   

    sf::SoundBuffer sound1, sound2, sound3, sound4, sound5, sound6, sound7, sound8, sound9, sound10, sound11, sound12, sound13, sound14, sound15, sound16;
    sound1.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/jump.wav");
    sound2.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/sp.wav");
    sound3.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/propeller.wav");
    sound4.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/monsterAlive.wav");
    sound5.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/fall.wav");
    sound6.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/explodplatform.wav");
    sound7.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/explodplatform2.wav");
    sound8.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/brownout.wav");
    sound9.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/Atk1.wav");
    sound10.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/Atk2.wav");
    sound11.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/jumpwhile.wav");
    sound12.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/jumponmonster.wav");
    sound13.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/jetpack.wav");
    sound14.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/monsterDiebybullet.wav");
    sound15.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/NinjaATK1.wav");
    sound16.loadFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/NinjaATK2.wav");
   

    sf::Sound Sjump, SAtk1, SAtk2, Sbrownout1, Sexplod1, Sexplod2, Sfall, SmosterAlive, Spropeller, Sspring,
        Sjumpwhile, Sjumponmonster, SRocket, SmonsterDiebybullet, SNinjaATK1, SNinjaATK2;

    Sjump.setBuffer(sound1);
    Sspring.setBuffer(sound2);
    Spropeller.setBuffer(sound3);
    SmosterAlive.setBuffer(sound4);
    Sfall.setBuffer(sound5);
    Sexplod1.setBuffer(sound6);
    Sexplod2.setBuffer(sound7);
    Sbrownout1.setBuffer(sound8);
    SAtk1.setBuffer(sound9);
    SAtk2.setBuffer(sound10);
    Sjumpwhile.setBuffer(sound11);
    Sjumponmonster.setBuffer(sound12);
    SRocket.setBuffer(sound13);
    SmonsterDiebybullet.setBuffer(sound14);
    SNinjaATK1.setBuffer(sound15);
    SNinjaATK2.setBuffer(sound16);

   
   



    enum CHOSEMENU { PLAY, MENU, SCORE, TEST };
    CHOSEMENU CHOSEMENU = MENU;

    bool Dark = false;
MUSICCC:
    sf::Music music;
    music.openFromFile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/Sound/song.wav");

    music.play();
    music.setLoop(true);
STAR:

    srand(time(0));

   

    point bullet[1000], platchosen[96], platdelbrown[96], propllerdel, Rocketdel
        , Devil, Background, position_digit_forbackground, BulletDevil[1000];

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

    enum Shield { Shield_1, Shield_2, Shield_3 };
    Shield frameShield = Shield_1;
    bool Shield_on = false;
    bool Shield_out = false;
    bool have_Shield = false;
    int loopdelayShield = 0;


    enum RRocket { Rocket_1, Rocket_2, Rocket_3, Rocket_4, Rocket_5, Rocket_6, Rocket_7, Rocket_8, Rocket_9, Rocket_10 };
    RRocket frameRocket = Rocket_1;
    bool Rocket_on = false;
    bool Rocket_out = false;
    bool have_Rocket = false;
    int loopdelayRocket = 0;



    enum Chosenblock { G, Gsp, Gsp2, B, Gy, blank, Br, Gpp, Wh, Or, Y, DB, G_Devil, GS, GRk };
    Chosenblock chosenbloack[96];
    bool Greensp[96];
    for (int i = 0; i < 96; i++)
    {
        chosenbloack[i] = blank;
        Greensp[i] = false;
    }



    enum framYellow { Y1, Y2, Y3, Y4 };
    framYellow Yellowfram[96];
    bool Yellow_move[96];
    int loopdelayyellow[96];
    bool dirx[96];
    int  randx[96];
    for (int i = 0; i < 96; i++)
    {
        loopdelayyellow[i] = 0;
        Yellowfram[i] = Y1;
        Yellow_move[i] = false;
    }


    enum framDrakBlue { DB1, DB2 };
    framDrakBlue DrakBluefram[96];
    int loopdelayDrakBlue[96];
    point conDB[96], conmouseDB[96];
    bool fristmouseDB = true;
    int  indexcanmoveDB = -1;
    for (int i = 0; i < 96; i++)
    {
        conDB[i].x = 0;
        conDB[i].y = 0;
        conmouseDB[i].x = 0;
        conmouseDB[i].y = 0;
        DrakBluefram[i] = DB1;
        loopdelayDrakBlue[i] = 0;

    }






    enum frambrown { Br1, Br2, Br3, Br4, Br5, Br6 };
    frambrown brownfram[96];
    bool brownout[96];
    for (int i = 0; i < 96; i++)
    {
        brownout[i] = false;
    }

    enum framwhite { Wh1, Wh2, Wh3, Wh4, Wh5, Wh6, Wh7, Wh8, Wh9 };
    framwhite whitefram[96];
    bool whiteout[96];
    for (int i = 0; i < 96; i++)
    {
        whiteout[i] = false;
    }


    enum framOrange { Or1, Or2, Or3, Or4, Or5, Or6, Or7, Or8 };
    framOrange orangefram[96];
    bool orangeout[96];
    bool fristorange[96];
    int loopdelayorange[96];
    for (int i = 0; i < 96; i++)
    {
        loopdelayorange[i] = 0;
        orangeout[i] = false;
        fristorange[i] = true;
    }


    enum CHOSENDevil { Empty, Devil_Bat, Devil_Blue, Devil_frog, Devil_Red, Devil_Ping, Devil_Green, Devil_3EYE };
    CHOSENDevil CHOSENDEVIL = Empty;
    bool Devil_die_by_foot = false;


    int heartDevil;
    bool Devilalive = false;



    enum framGreen { G1, G2, G3, G4 };
    framGreen Greenfram;
    enum framGreenATK { AG1, AG2, AG3, AG4 };
    framGreenATK GreenATKfram;
    int loopdelayGreen = 0;


    enum framRed { R1, R2, R3, R4 };
    framRed Redfram;
    int loopdelayRed = 0;


    enum framPing { P1, P2, P3, P4 };
    framPing Pingfram;
    int loopdelayPing = 0;


    enum fram3EYE { E1, AE2, E3, E4 };
    fram3EYE EYE3fram;
    int loopdelay3EYE = 0;
    bool EYE3ATK;

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

        y = 620;
        dy = -8;
        break;
    case SCORE:
        break;
    default:
        break;
    }

    bool directionplatB[96];
    bool directionplatGy[96];
    int score = 0;
    int allb = 0;
    int LEVEL = 1;
    int prexnew = 0;
    int xrownew = 0;
    int prex = 0;
    int prey = -650;
    int xrow = 0;
    int yrow = -1;
    bool yk = false;
    int blockg = 96;

    for (int i = 0; i < 64 - 4; i++)
    {
        if (i % 4 == 0)
        {
            if (yk)
            {
                prey = -570 + (yrow * 80);

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
        platchosen[i].y = randomrang(prey, -570 + ((yrow * 80) - 20));
      
        chosenbloack[i] = G;

     
        prex = 100 + (xrow * 100);
        xrow++;
       
    }
    platchosen[63].x = 160;
    platchosen[63].y = 650 - (20);
    chosenbloack[63] = G;
    platchosen[62].x = 240;
    platchosen[62].y = 650 - (20);
    chosenbloack[62] = G;
    platchosen[61].x = 100;
    platchosen[61].y = 650 - 40;
    chosenbloack[61] = G;
    platchosen[60].x = 300;
    platchosen[60].y = 650 - 40;
    chosenbloack[60] = G;
 



    int countblock = 32;



    int scoreold = 0;


    enum ChosenblockDUMME { G_dumme, Gsp_dumme, Gpp_dumme, B_dumme, blank_dumme, Br_dumme, Wh_dumme, Or_dumme, Y_dumme, DB_dumme, G_Devil_dumme, GS_dumme, GRk_dumme };
    ChosenblockDUMME chosenbloackDumme[96];
    for (int i = 0; i < 96; i++)
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



 
    bool fallSoundOnetime = true;
    bool DevilSoundOnetime = true;
    bool PropellSoundOnetime = true;
    bool RocketSoundOnetime = true;



    enum stars { Ss1, Ss2, Ss3 };
    stars framestars;
    framestars = Ss1;
    bool doolderdiebystats = true;
    int loopdelaystars = 0;


    
    point line;
    line.y = -650;
    line.x = 0;

    enum blockset { set1, set2, set3 };
    blockset setblock = set1;

    sf::Clock clock, SoundPrppller, SoundRocket;

    point BgforDrakmap;
    bool SetBackBgforDrakmap = false;
  
 
  
    int loopdelayMouse = 0;
    while (app.isOpen())
    {
        if (Keyboard::isKeyPressed(Keyboard::Q))
        {
            app.close();

        }
       
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
                music.pause();
                if (Keyboard::isKeyPressed(Keyboard::Right))
                {
                    x += 4;
                    dir = RIGHT;

                }
                else  if (Keyboard::isKeyPressed(Keyboard::Left))
                {
                    x -= 4;
                    dir = LEFT;

                }

                else if (((Keyboard::isKeyPressed(Keyboard::Up))) && !propller_on && !Rocket_on && dooler_alive)
                {
                    if (bullet_can_on)
                    {
                        bullet_can_on = false;
                        bullet[allb].x = x + 15;
                        bullet[allb].y = y;
                        allb++;
                        dir = ATK;
                        int randsound;
                        randsound = randomrang(1, 2);
                        if (randsound == 1)
                        {
                            SAtk1.play();
                        }
                        else if (randsound == 2)
                        {
                            SAtk2.play();
                        }
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


                if (SoundPrppller.getElapsedTime().asSeconds() >= 3 && propller_on)
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
                  
                    PropellSoundOnetime = true;
                }
                if (SoundRocket.getElapsedTime().asSeconds() >= 3 && Rocket_on)
                {
                    speeddoodle = Normal;
                    Rocket_on = false;
                    Rocket_out = true;
                    if (dir == LEFT)
                    {
                        sRocket10.setTextureRect(sf::IntRect(0, 0, 21, 58));
                        Rocketdel.x = x + 56;
                        Rocketdel.y = y - 4;
                    }
                    else if (dir == RIGHT)
                    {
                        sRocket10.setTextureRect(sf::IntRect(21, 0, -21, 58));
                        Rocketdel.x = x - 19;
                        Rocketdel.y = y - 4;
                    }
                    RocketSoundOnetime = true;
                  

                }
                if (clock.getElapsedTime().asSeconds() >= 10 && Shield_on)
                {

                    Shield_on = false;
                    Shield_out = false;
                    have_Shield = false;
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
                        score += 1;
                        if (PropellSoundOnetime)
                        {
                            Spropeller.play();
                         
                            PropellSoundOnetime = false;
                        }

                        dy = -12;
                        y += dy;
                        break;
                    case Rocket:
                        score += 2;

                        if (RocketSoundOnetime)
                        {

                            SRocket.play();
                        
                            RocketSoundOnetime = false;

                        }
                        dy = -36;
                        y += dy;
                        break;
                    default:
                        break;
                    }
                   
                }
                else
                {

                    if (dir == ATK)
                    {
                        dir = RIGHT;
                    }
                    if (fallSoundOnetime)
                    {

                        Sfall.play();
                        fallSoundOnetime = false;
                    }


                    if (one_read_write)
                    {
                        ifstream readfile("C:/Users/GP73/source/repos/Test_sfml/Test_sfml/Picture/New folder/Config/scores.txt");
                        if (readfile.is_open())
                        {
                            for (int i = 0; i < 5; i++)
                            {
                                readfile >> score_read_write[i];
                            
                            }
                     
                        }
                        else
                        {
                     
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
                       
                            }
                      
                        }
                        else
                        {
                       
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
                                if (Devil.y > 650 || Devil.y < -100)
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

               
                if (line.y >= 0)
                {
                
                    line.y = -650;
                    int maxnumberblock, minnumberblock, maxrowpass, minrowpass, row_2, low_2, row, low;
                    if (setblock == set1)
                    {
                        maxnumberblock = 96;
                        minnumberblock = 64;
                        maxrowpass = 24;
                        minrowpass = 16;
                        setblock = set2;
                        row_2 = 67;
                        low_2 = 64;
                     
                        row = 67;
                        low = 64;

                    }
                    else if (setblock == set2)
                    {
                        maxnumberblock = 64;
                        minnumberblock = 32;
                        maxrowpass = 16;
                        minrowpass = 8;
                        setblock = set3;
                        row_2 = 35;
                        low_2 = 32;
                       
                        row = 35;
                        low = 32;
                    }
                    else if (setblock == set3)
                    {
                        maxnumberblock = 32;
                        minnumberblock = 0;
                        maxrowpass = 8;
                        minrowpass = 0;
                        setblock = set1;
                        row_2 = 3;
                        low_2 = 0;
                      
                        row = 3;
                        low = 0;
                    }



                    for (int i = minnumberblock; i < maxnumberblock; i++)
                    {
                        chosenbloackDumme[i] = blank_dumme;
                    }

                    bool rowpass[24];
                    bool consand[96];

                    for (int i = minrowpass; i < maxrowpass; i++)
                    {

                        rowpass[i] = false;
                    }
                    for (int i = minnumberblock; i < maxnumberblock; i++)
                    {
                        consand[i] = false;

                    }


                   

                    bool patternY = false, patternOr = false, patternDB = false;
                    for (int i = minrowpass; i < maxrowpass; i++)
                    {
                        int keeprandomrang;
                        keeprandomrang = randomrang(low, row);

                        consand[keeprandomrang] = true;

                      /*LEVEL FOR Plat con*/
                        if (LEVEL == 1)
                        {
                            cout << "LEVEL : " << LEVEL << endl;
                            if (block_Y(0))
                            {
                                patternY = true;
                            }
                            else if (block_Orange(0))
                            {
                                patternOr = true;
                            }
                            else if (block_DB(0))
                            {
                                patternDB = true;
                            }

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

                          
                            else if (block_B(2))
                            {

                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;

                            }
                            else if (block_Gsp(2))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_White(0))
                            {
                                chosenbloackDumme[keeprandomrang] = Wh_dumme;
                            }
                            else  if (block_Gpp(0) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_propller = true;
                                chosenbloackDumme[keeprandomrang] = Gpp_dumme;
                            }
                            else  if (block_Shield(0) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Shield = true;
                                chosenbloackDumme[keeprandomrang] = GS_dumme;
                            }
                            else  if (block_Rocket(0) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Rocket = true;
                                chosenbloackDumme[keeprandomrang] = GRk_dumme;
                            }
                            else if (block_G(100))
                            {

                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }

                        }
                        if (LEVEL == 2)
                        {
                            cout << "LEVEL : " << LEVEL << endl;
                            if (block_Y(0))
                            {
                                patternY = true;
                            }
                            else if (block_Orange(0))
                            {
                                patternOr = true;
                            }
                            else if (block_DB(0))
                            {
                                patternDB = true;
                            }

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

                           
                            else if (block_B(4))
                            {

                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;

                            }
                            else if (block_Gsp(4))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_White(1))
                            {
                                chosenbloackDumme[keeprandomrang] = Wh_dumme;
                            }
                            else  if (block_Gpp(1) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_propller = true;
                                chosenbloackDumme[keeprandomrang] = Gpp_dumme;
                            }
                            else  if (block_Shield(0) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Shield = true;
                                chosenbloackDumme[keeprandomrang] = GS_dumme;
                            }
                            else  if (block_Rocket(0) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Rocket = true;
                                chosenbloackDumme[keeprandomrang] = GRk_dumme;
                            }
                            else if (block_G(100))
                            {

                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }

                        }
                        if (LEVEL == 3)
                        {
                            cout << "LEVEL : " << LEVEL << endl;
                            if (block_Y(0))
                            {
                                patternY = true;
                            }
                            else if (block_Orange(2))
                            {
                                patternOr = true;
                            }
                            else if (block_DB(0))
                            {
                                patternDB = true;
                            }

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

                          
                            else if (block_B(10))
                            {

                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;

                            }
                            else if (block_Gsp(10))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_White(3))
                            {
                                chosenbloackDumme[keeprandomrang] = Wh_dumme;
                            }
                            else  if (block_Gpp(2) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_propller = true;
                                chosenbloackDumme[keeprandomrang] = Gpp_dumme;
                            }
                            else  if (block_Shield(1) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Shield = true;
                                chosenbloackDumme[keeprandomrang] = GS_dumme;
                            }
                            else  if (block_Rocket(1) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Rocket = true;
                                chosenbloackDumme[keeprandomrang] = GRk_dumme;
                            }
                            else if (block_G(100))
                            {

                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }

                        }
                        if (LEVEL == 4)
                        {
                            cout << "LEVEL : " << LEVEL << endl;
                            if (block_Y(2))
                            {
                                patternY = true;
                            }
                            else if (block_Orange(4))
                            {
                                patternOr = true;
                            }
                            else if (block_DB(2))
                            {
                                patternDB = true;
                            }

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

                           
                            else if (block_B(15))
                            {

                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;

                            }
                            else if (block_Gsp(10))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_White(7))
                            {
                                chosenbloackDumme[keeprandomrang] = Wh_dumme;
                            }
                            else  if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_propller = true;
                                chosenbloackDumme[keeprandomrang] = Gpp_dumme;
                            }
                            else  if (block_Shield(3) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Shield = true;
                                chosenbloackDumme[keeprandomrang] = GS_dumme;
                            }
                            else  if (block_Rocket(3) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Rocket = true;
                                chosenbloackDumme[keeprandomrang] = GRk_dumme;
                            }
                            else if (block_G(100))
                            {

                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }

                        }
                        if (LEVEL == 5)
                        {
                            cout << "LEVEL : " << LEVEL << endl;
                            if (block_Y(5))
                            {
                                patternY = true;
                            }
                            else if (block_Orange(5))
                            {
                                patternOr = true;
                            }
                            else if (block_DB(5))
                            {
                                patternDB = true;
                            }

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

                           
                            else if (block_B(15))
                            {

                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;

                            }
                            else if (block_Gsp(10))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_White(10))
                            {
                                chosenbloackDumme[keeprandomrang] = Wh_dumme;
                            }
                            else  if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_propller = true;
                                chosenbloackDumme[keeprandomrang] = Gpp_dumme;
                            }
                            else  if (block_Shield(3) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Shield = true;
                                chosenbloackDumme[keeprandomrang] = GS_dumme;
                            }
                            else  if (block_Rocket(3) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Rocket = true;
                                chosenbloackDumme[keeprandomrang] = GRk_dumme;
                            }
                            else if (block_G(100))
                            {

                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }

                        }
                        if (LEVEL == 6)
                        {
                            cout << "LEVEL : " << LEVEL << endl;
                            if (block_Y(8))
                            {
                                patternY = true;
                            }
                            else if (block_Orange(6))
                            {
                                patternOr = true;
                            }
                            else if (block_DB(7))
                            {
                                patternDB = true;
                            }

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

                          
                            else if (block_B(17))
                            {

                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;

                            }
                            else if (block_Gsp(8))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_White(12))
                            {
                                chosenbloackDumme[keeprandomrang] = Wh_dumme;
                            }
                            else  if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_propller = true;
                                chosenbloackDumme[keeprandomrang] = Gpp_dumme;
                            }
                            else  if (block_Shield(3) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Shield = true;
                                chosenbloackDumme[keeprandomrang] = GS_dumme;
                            }
                            else  if (block_Rocket(3) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Rocket = true;
                                chosenbloackDumme[keeprandomrang] = GRk_dumme;
                            }
                            else if (block_G(100))
                            {

                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }

                        }
                        if (LEVEL == 7)
                        {
                            cout << "LEVEL : " << LEVEL << endl;
                            if (block_Y(10))
                            {
                                patternY = true;
                            }
                            else if (block_Orange(5))
                            {
                                patternOr = true;
                            }
                            else if (block_DB(8))
                            {
                                patternDB = true;
                            }

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

                            
                            else if (block_B(20))
                            {

                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;

                            }
                            else if (block_Gsp(8))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_White(15))
                            {
                                chosenbloackDumme[keeprandomrang] = Wh_dumme;
                            }
                            else  if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_propller = true;
                                chosenbloackDumme[keeprandomrang] = Gpp_dumme;
                            }
                            else  if (block_Shield(3) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Shield = true;
                                chosenbloackDumme[keeprandomrang] = GS_dumme;
                            }
                            else  if (block_Rocket(3) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Rocket = true;
                                chosenbloackDumme[keeprandomrang] = GRk_dumme;
                            }
                            else if (block_G(100))
                            {

                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }

                        }
                        if (LEVEL == 8)
                        {
                            cout << "LEVEL : " << LEVEL << endl;
                            if (block_Y(25))
                            {
                                patternY = true;
                            }
                            else if (block_Orange(5))
                            {
                                patternOr = true;
                            }
                            else if (block_DB(10))
                            {
                                patternDB = true;
                            }

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

                            else if (block_B(25))
                            {

                                chosenbloackDumme[keeprandomrang] = B_dumme;
                                rowpass[i] = true;

                            }
                            else if (block_Gsp(10))
                            {
                                chosenbloackDumme[keeprandomrang] = Gsp_dumme;
                            }
                            else if (block_White(20))
                            {
                                chosenbloackDumme[keeprandomrang] = Wh_dumme;
                            }
                            else  if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_propller = true;
                                chosenbloackDumme[keeprandomrang] = Gpp_dumme;
                            }
                            else  if (block_Shield(5) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Shield = true;
                                chosenbloackDumme[keeprandomrang] = GS_dumme;
                            }
                            else  if (block_Rocket(5) && !have_propller && !have_Shield && !have_Rocket)
                            {
                                have_Rocket = true;
                                chosenbloackDumme[keeprandomrang] = GRk_dumme;
                            }
                            else if (block_G(100))
                            {

                                chosenbloackDumme[keeprandomrang] = G_dumme;
                            }

                        }
                        low += 4;
                        row += 4;
                    }


                    for (int i = minrowpass; i < maxrowpass; i++)
                    {

                        if (!rowpass[i])
                        {

                            for (int j = low_2; j <= row_2; j++)
                            {
                                if (!consand[j])
                                {
                                    /*LEVEL FOR Plat normal*/
                                    if (LEVEL == 1)
                                    {
                                        if (haveblock(70))
                                        {
                                            if (patternOr)
                                            {
                                                if (haveblock(20))
                                                {
                                                    chosenbloackDumme[j] = Or_dumme;
                                                }

                                            }
                                            else if (block_Br(10))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;

                                            }
                                            else if (block_Gsp(5))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_White(0))
                                            {
                                                chosenbloackDumme[j] = Wh_dumme;
                                            }
                                            else if (block_Gpp(0) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_propller = true;
                                                chosenbloackDumme[j] = Gpp_dumme;
                                            }
                                            else if (block_Shield(0) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Shield = true;
                                                chosenbloackDumme[j] = GS_dumme;
                                            }
                                            else if (block_Rocket(0) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Rocket = true;
                                                chosenbloackDumme[j] = GRk_dumme;
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
                                    }
                                    if (LEVEL == 2)
                                    {
                                        if (haveblock(60))
                                        {
                                            if (patternOr)
                                            {
                                                if (haveblock(20))
                                                {
                                                    chosenbloackDumme[j] = Or_dumme;
                                                }

                                            }
                                            else if (block_Br(10))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;

                                            }
                                            else if (block_Gsp(5))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_White(3))
                                            {
                                                chosenbloackDumme[j] = Wh_dumme;
                                            }
                                            else if (block_Gpp(3) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_propller = true;
                                                chosenbloackDumme[j] = Gpp_dumme;
                                            }
                                            else if (block_Shield(3) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Shield = true;
                                                chosenbloackDumme[j] = GS_dumme;
                                            }
                                            else if (block_Rocket(0) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Rocket = true;
                                                chosenbloackDumme[j] = GRk_dumme;
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
                                    }
                                    if (LEVEL == 3)
                                    {
                                        if (haveblock(50))
                                        {
                                            if (patternOr)
                                            {
                                                if (haveblock(20))
                                                {
                                                    chosenbloackDumme[j] = Or_dumme;
                                                }

                                            }
                                            else if (block_Br(12))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;

                                            }
                                            else if (block_Gsp(7))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_White(5))
                                            {
                                                chosenbloackDumme[j] = Wh_dumme;
                                            }
                                            else if (block_Gpp(3) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_propller = true;
                                                chosenbloackDumme[j] = Gpp_dumme;
                                            }
                                            else if (block_Shield(3) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Shield = true;
                                                chosenbloackDumme[j] = GS_dumme;
                                            }
                                            else if (block_Rocket(3) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Rocket = true;
                                                chosenbloackDumme[j] = GRk_dumme;
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
                                    }
                                    if (LEVEL == 4)
                                    {
                                        if (haveblock(40))
                                        {
                                            if (patternOr)
                                            {
                                                if (haveblock(20))
                                                {
                                                    chosenbloackDumme[j] = Or_dumme;
                                                }

                                            }
                                            else if (block_Br(12))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;

                                            }
                                            else if (block_Gsp(10))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_White(10))
                                            {
                                                chosenbloackDumme[j] = Wh_dumme;
                                            }
                                            else if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_propller = true;
                                                chosenbloackDumme[j] = Gpp_dumme;
                                            }
                                            else if (block_Shield(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Shield = true;
                                                chosenbloackDumme[j] = GS_dumme;
                                            }
                                            else if (block_Rocket(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Rocket = true;
                                                chosenbloackDumme[j] = GRk_dumme;
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
                                    }
                                    if (LEVEL == 5)
                                    {
                                        if (haveblock(30))
                                        {
                                            if (patternOr)
                                            {
                                                if (haveblock(20))
                                                {
                                                    chosenbloackDumme[j] = Or_dumme;
                                                }

                                            }
                                            else if (block_Br(12))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;

                                            }
                                            else if (block_Gsp(10))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_White(10))
                                            {
                                                chosenbloackDumme[j] = Wh_dumme;
                                            }
                                            else if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_propller = true;
                                                chosenbloackDumme[j] = Gpp_dumme;
                                            }
                                            else if (block_Shield(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Shield = true;
                                                chosenbloackDumme[j] = GS_dumme;
                                            }
                                            else if (block_Rocket(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Rocket = true;
                                                chosenbloackDumme[j] = GRk_dumme;
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
                                    }
                                    if (LEVEL == 6)
                                    {
                                        if (haveblock(20))
                                        {
                                            if (patternOr)
                                            {
                                                if (haveblock(20))
                                                {
                                                    chosenbloackDumme[j] = Or_dumme;
                                                }

                                            }
                                            else if (block_Br(15))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;

                                            }
                                            else if (block_Gsp(10))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_White(15))
                                            {
                                                chosenbloackDumme[j] = Wh_dumme;
                                            }
                                            else if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_propller = true;
                                                chosenbloackDumme[j] = Gpp_dumme;
                                            }
                                            else if (block_Shield(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Shield = true;
                                                chosenbloackDumme[j] = GS_dumme;
                                            }
                                            else if (block_Rocket(15) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Rocket = true;
                                                chosenbloackDumme[j] = GRk_dumme;
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
                                    }
                                    if (LEVEL == 7)
                                    {
                                        if (haveblock(10))
                                        {
                                            if (patternOr)
                                            {
                                                if (haveblock(20))
                                                {
                                                    chosenbloackDumme[j] = Or_dumme;
                                                }

                                            }
                                            else if (block_Br(15))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;

                                            }
                                            else if (block_Gsp(10))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_White(15))
                                            {
                                                chosenbloackDumme[j] = Wh_dumme;
                                            }
                                            else if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_propller = true;
                                                chosenbloackDumme[j] = Gpp_dumme;
                                            }
                                            else if (block_Shield(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Shield = true;
                                                chosenbloackDumme[j] = GS_dumme;
                                            }
                                            else if (block_Rocket(15) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Rocket = true;
                                                chosenbloackDumme[j] = GRk_dumme;
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
                                    }
                                    if (LEVEL == 8)
                                    {
                                        if (haveblock(5))
                                        {
                                            if (patternOr)
                                            {
                                                if (haveblock(20))
                                                {
                                                    chosenbloackDumme[j] = Or_dumme;
                                                }

                                            }
                                            else if (block_Br(15))
                                            {
                                                chosenbloackDumme[j] = Br_dumme;

                                            }
                                            else if (block_Gsp(10))
                                            {
                                                chosenbloackDumme[j] = Gsp_dumme;
                                            }
                                            else if (block_White(15))
                                            {
                                                chosenbloackDumme[j] = Wh_dumme;
                                            }
                                            else if (block_Gpp(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_propller = true;
                                                chosenbloackDumme[j] = Gpp_dumme;
                                            }
                                            else if (block_Shield(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Shield = true;
                                                chosenbloackDumme[j] = GS_dumme;
                                            }
                                            else if (block_Rocket(5) && !have_propller && !have_Shield && !have_Rocket)
                                            {
                                                have_Rocket = true;
                                                chosenbloackDumme[j] = GRk_dumme;
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
                                    }
                                    



                                }
                            }

                        }
                        row_2 += 4;
                        low_2 += 4;

                    }

                    /*LEVEL FOR EN*/

                    if(LEVEL ==1)
                    { 
                        if (!Devilalive && CHOSENDEVIL == Empty)
                        {
                            if (have_Devil(10) && !Rocket_on && !Rocket_out)
                            {
                                if (Devil_haveBat(0))
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
                                else if (Devil_haveBlue(15))
                                {
                                    Devil_die_by_foot = false;
                                    direction_BLue = true;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Blue;
                                    DeVil_Bluet_fram = Blue_1;
                                    Devil.x = randomrang(150, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveRed(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Red;
                                    Redfram = R1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_havePing(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Ping;
                                    Pingfram = P1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveGreen(0))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 4;
                                    CHOSENDEVIL = Devil_Green;
                                    GreenATKfram = AG1;
                                    Greenfram = G1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_have3EYE(0))
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
                    }
                    if (LEVEL == 2)
                    {
                        if (!Devilalive && CHOSENDEVIL == Empty)
                        {
                            if (have_Devil(25) && !Rocket_on && !Rocket_out)
                            {
                                if (Devil_haveBat(0))
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
                                else if (Devil_haveBlue(15))
                                {
                                    Devil_die_by_foot = false;
                                    direction_BLue = true;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Blue;
                                    DeVil_Bluet_fram = Blue_1;
                                    Devil.x = randomrang(150, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveRed(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Red;
                                    Redfram = R1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_havePing(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Ping;
                                    Pingfram = P1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveGreen(0))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 4;
                                    CHOSENDEVIL = Devil_Green;
                                    GreenATKfram = AG1;
                                    Greenfram = G1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_have3EYE(0))
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
                    }
                    if (LEVEL == 3)
                    {
                        if (!Devilalive && CHOSENDEVIL == Empty)
                        {
                            if (have_Devil(25) && !Rocket_on && !Rocket_out)
                            {
                                if (Devil_haveBat(0))
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
                                else if (Devil_haveBlue(20))
                                {
                                    Devil_die_by_foot = false;
                                    direction_BLue = true;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Blue;
                                    DeVil_Bluet_fram = Blue_1;
                                    Devil.x = randomrang(150, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveRed(20))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Red;
                                    Redfram = R1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_havePing(20))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
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
                                    GreenATKfram = AG1;
                                    Greenfram = G1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_have3EYE(5))
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
                    }
                    if (LEVEL == 4)
                    {
                        if (!Devilalive && CHOSENDEVIL == Empty)
                        {
                            if (have_Devil(25) && !Rocket_on && !Rocket_out)
                            {
                                if (Devil_haveBat(5))
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
                                else if (Devil_haveBlue(20))
                                {
                                    Devil_die_by_foot = false;
                                    direction_BLue = true;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Blue;
                                    DeVil_Bluet_fram = Blue_1;
                                    Devil.x = randomrang(150, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveRed(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Red;
                                    Redfram = R1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_havePing(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Ping;
                                    Pingfram = P1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveGreen(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 4;
                                    CHOSENDEVIL = Devil_Green;
                                    GreenATKfram = AG1;
                                    Greenfram = G1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_have3EYE(15))
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
                    }
                    if (LEVEL == 5)
                    {
                        if (!Devilalive && CHOSENDEVIL == Empty)
                        {
                            if (have_Devil(25) && !Rocket_on && !Rocket_out)
                            {
                                if (Devil_haveBat(20))
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
                                else if (Devil_haveBlue(15))
                                {
                                    Devil_die_by_foot = false;
                                    direction_BLue = true;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Blue;
                                    DeVil_Bluet_fram = Blue_1;
                                    Devil.x = randomrang(150, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveRed(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Red;
                                    Redfram = R1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_havePing(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Ping;
                                    Pingfram = P1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveGreen(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 4;
                                    CHOSENDEVIL = Devil_Green;
                                    GreenATKfram = AG1;
                                    Greenfram = G1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_have3EYE(15))
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
                    }
                    if (LEVEL == 6)
                    {
                        if (!Devilalive && CHOSENDEVIL == Empty)
                        {
                            if (have_Devil(25) && !Rocket_on && !Rocket_out)
                            {
                                if (Devil_haveBat(20))
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
                                else if (Devil_haveBlue(20))
                                {
                                    Devil_die_by_foot = false;
                                    direction_BLue = true;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Blue;
                                    DeVil_Bluet_fram = Blue_1;
                                    Devil.x = randomrang(150, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveRed(20))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Red;
                                    Redfram = R1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_havePing(20))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Ping;
                                    Pingfram = P1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveGreen(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 4;
                                    CHOSENDEVIL = Devil_Green;
                                    GreenATKfram = AG1;
                                    Greenfram = G1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_have3EYE(15))
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
                    }
                    if (LEVEL == 7)
                    {
                        if (!Devilalive && CHOSENDEVIL == Empty)
                        {
                            if (have_Devil(30) && !Rocket_on && !Rocket_out)
                            {
                                if (Devil_haveBat(15))
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
                                else if (Devil_haveBlue(20))
                                {
                                    Devil_die_by_foot = false;
                                    direction_BLue = true;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Blue;
                                    DeVil_Bluet_fram = Blue_1;
                                    Devil.x = randomrang(150, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveRed(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Red;
                                    Redfram = R1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_havePing(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Ping;
                                    Pingfram = P1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveGreen(15))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 4;
                                    CHOSENDEVIL = Devil_Green;
                                    GreenATKfram = AG1;
                                    Greenfram = G1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_have3EYE(25))
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
                    }
                    if (LEVEL == 8)
                    {
                        if (!Devilalive && CHOSENDEVIL == Empty)
                        {
                            if (have_Devil(30) && !Rocket_on && !Rocket_out)
                            {
                                if (Devil_haveBat(30))
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
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Blue;
                                    DeVil_Bluet_fram = Blue_1;
                                    Devil.x = randomrang(150, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveRed(5))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Red;
                                    Redfram = R1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_havePing(5))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 1;
                                    CHOSENDEVIL = Devil_Ping;
                                    Pingfram = P1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_haveGreen(20))
                                {
                                    Devil_die_by_foot = false;
                                    Devilalive = true;
                                    heartDevil = 4;
                                    CHOSENDEVIL = Devil_Green;
                                    GreenATKfram = AG1;
                                    Greenfram = G1;
                                    Devil.x = randomrang(100, 300);
                                    Devil.y = 0;
                                }
                                else if (Devil_have3EYE(20))
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
                    }


             

                    int prex = 0;
                    int prey = -650;
                    int xrow = 0;
                    int yrow = -1;
                    bool yk = false;

                    for (int i = minnumberblock; i < maxnumberblock; i++)
                    {
                        if (i % 4 == 0)
                        {
                            if (yk)
                            {
                                prey = -570 + (yrow * 80);

                            }
                            yrow++;
                            yk = true;
                        }
                        if (i % 4 == 0)
                        {
                            prex = 0;
                            xrow = 0;
                        }

                        if (chosenbloackDumme[i] == G_Devil_dumme)
                        {
                            switch (CHOSENDEVIL)
                            {
                            case Devil_frog:
                                Devil_die_by_foot = false;
                                heartDevil = 3;
                                Devilalive = true;
                            
                                platchosen[i].y = -20;
                                platchosen[i].x = randomrang(prexnew, 100 + ((xrownew * 100) - 108));
                                Devil.y = 0 - 50;
                                Devil.x = platchosen[i].x;

                                break;

                            }

                        }
                        else
                        {
                            platchosen[i].x = randomrang(prex, 100 + ((xrow * 100) - 60));
                            platchosen[i].y = randomrang(prey, -570 + ((yrow * 80) - 20));
                        }

                       
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
                        case GS_dumme:
                            chosenbloack[i] = GS;
                            break;
                        case GRk_dumme:
                            chosenbloack[i] = GRk;
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
                    
                            chosenbloack[i] = G_Devil;
                            break;
                        case  blank_dumme:
                            chosenbloack[i] = blank;
                            break;
                        default:
                            break;
                        }



                        prex = 100 + (xrow * 100);
                        xrow++;
                    }





                    countblock = 0;
                }


                /* map up*/

                if (y < h)
                {
                    score += 12;
                    line.y = line.y - dy;
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
                            platchosen[i].y = -2000;
                            platchosen[i].x = -100;
                            if (chosenbloack[i] == GS || chosenbloack[i] == Gpp || chosenbloack[i] == GRk)
                            {
                                have_propller = false;
                                have_Shield = false;
                                have_Rocket = false;
                            }
                            countblock++;
                        }
                    }



                }




                /* jump plat doodler on plat*/
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
                            Sjump.play();

                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {


                            dy = jump;
                            Sjump.play();

                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            dy = jump;
                            Sjump.play();

                        }
                        break;
                    case Gsp:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            if ((x + 50 >= platchosen[i].x + 5) && (x <= platchosen[i].x))
                            {
                                dy = jumpsp;
                                Greensp[i] = true;
                                Sspring.play();
                            }
                            else
                            {
                                dy = jump;
                                Sjump.play();
                            }

                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {
                            if ((x + 31 >= platchosen[i].x + 5) && (x <= platchosen[i].x + 12))
                            {
                                dy = jumpsp;
                                Greensp[i] = true;
                                Sspring.play();
                            }
                            else
                            {
                                dy = jump;
                                Sjump.play();
                            }

                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            if ((x + 34 >= platchosen[i].x + 5) && (x <= platchosen[i].x + 15))
                            {
                                dy = jumpsp;
                                Greensp[i] = true;
                                Sspring.play();
                            }
                            else
                            {
                                dy = jump;
                                Sjump.play();
                            }
                        }
                        break;
                    case B:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            Sjump.play();
                            dy = jump;
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {

                            Sjump.play();
                            dy = jump;
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            Sjump.play();
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

                                Sbrownout1.play();


                            }
                            if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                            {


                                platdelbrown[i].x = platchosen[i].x;
                                platdelbrown[i].y = platchosen[i].y;
                                platchosen[i].x = 500;
                                brownout[i] = true;
                                brownfram[i] = Br1;
                                Sbrownout1.play();
                            }
                            if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                            {
                                platdelbrown[i].x = platchosen[i].x;
                                platdelbrown[i].y = platchosen[i].y;
                                platchosen[i].x = 500;
                                brownout[i] = true;
                                brownfram[i] = Br1;
                                Sbrownout1.play();
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

                            Sjumpwhile.play();
                            whiteout[i] = true;
                            whitefram[i] = Wh1;
                            dy = jump;
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {

                            Sjumpwhile.play();
                            whiteout[i] = true;
                            whitefram[i] = Wh1;
                            dy = jump;
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {

                            Sjumpwhile.play();
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
                            Sjump.play();
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
                            Sjump.play();
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
                            Sjump.play();
                        }
                        break;
                    case Y:
                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            Sjump.play();
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
                            Sjump.play();
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
                            Sjump.play();
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
                            Sjump.play();
                            chosenbloack[i] = G;
                            dy = jump;

                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {
                            Sjump.play();
                            chosenbloack[i] = G;
                            dy = jump;

                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            Sjump.play();
                            chosenbloack[i] = G;
                            dy = jump;

                        }
                        break;


                    case G_Devil:


                        if ((x + 50 >= platchosen[i].x) && (x <= platchosen[i].x + 35 + 58) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == LEFT))
                        {
                            Sjump.play();
                            dy = jump;
                        }
                        if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47 + 58) && (y + 52 >= platchosen[i].y) && (y + 52 <= platchosen[i].y + 14) && (dy > 0) && (dir == RIGHT))
                        {
                            Sjump.play();

                            dy = jump;
                        }
                        if ((x + 34 >= platchosen[i].x) && (x <= platchosen[i].x + 50 + 58) && (y + 77 >= platchosen[i].y) && (y + 77 <= platchosen[i].y + 14) && (dy > 0) && (dir == ATK))
                        {
                            Sjump.play();
                            dy = jump;
                        }
                        break;


                    case Gpp: 
                        if ((x + 40 >= platchosen[i].x) && (x <= platchosen[i].x + 45) && (y + 57 >= platchosen[i].y) && (y + 12 <= platchosen[i].y) && (dir == LEFT))
                        {

                            speeddoodle = Propeller;
                          
                            propller_on = true;
                            chosenbloack[i] = G;
                            platchosen[i].y += 15;
                            SoundPrppller.restart();
                        }
                        else if ((x + 48 >= platchosen[i].x) && (x <= platchosen[i].x + 32) && (y + 42 >= platchosen[i].y) && (y + 42 <= platchosen[i].y + 14) && (dir == LEFT) && dy > 0)
                        {
                            dy = jump;
                        }

                        if ((x + 40 >= platchosen[i].x) && (x <= platchosen[i].x + 45) && (y + 57 >= platchosen[i].y) && (y + 12 <= platchosen[i].y) && (dir == RIGHT))
                        {


                            speeddoodle = Propeller;
                           
                            propller_on = true;
                            chosenbloack[i] = G;
                            platchosen[i].y += 15;
                            SoundPrppller.restart();
                        }
                        else if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 42 >= platchosen[i].y) && (y + 42 <= platchosen[i].y + 14) && (dir == RIGHT) && dy > 0)
                        {
                            dy = jump;
                        }

                        if ((x + 18 >= platchosen[i].x) && (x <= platchosen[i].x + 45) && (y + 73 >= platchosen[i].y) && (y <= platchosen[i].y + 12) && (dir == ATK))
                        {

                            dir = RIGHT;
                            speeddoodle = Propeller;
                           
                            propller_on = true;
                            chosenbloack[i] = G;
                            platchosen[i].y += 15;
                            SoundPrppller.restart();


                        }
                        else if ((x + 28 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 60 >= platchosen[i].y) && (y + 60 <= platchosen[i].y + 14) && (dir == ATK) && dy > 0)
                        {
                            dy = jump;
                        }
                        break;

                    case GS:
                        if ((x + 46 >= platchosen[i].x) && (x <= platchosen[i].x + 25) && (y >= platchosen[i].y - 100) && (y <= platchosen[i].y - 5) && (dir == LEFT))
                        {


                            chosenbloack[i] = G;
                            Shield_on = true;
                            clock.restart();

                        }
                        else if ((x + 48 >= platchosen[i].x) && (x <= platchosen[i].x + 32) && (y + 42 >= platchosen[i].y) && (y + 42 <= platchosen[i].y + 14) && (dir == LEFT) && dy > 0)
                        {
                            dy = jump;
                        }

                        if ((x + 25 >= platchosen[i].x) && (x <= platchosen[i].x + 46) && (y >= platchosen[i].y - 100) && (y <= platchosen[i].y - 5) && (dir == RIGHT))
                        {


                            chosenbloack[i] = G;
                            Shield_on = true;
                            clock.restart();

                        }
                        else if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 42 >= platchosen[i].y) && (y + 42 <= platchosen[i].y + 14) && (dir == RIGHT) && dy > 0)
                        {
                            dy = jump;
                        }

                        if ((x + 25 >= platchosen[i].x) && (x <= platchosen[i].x + 46) && (y >= platchosen[i].y - 113) && (y <= platchosen[i].y - 5) && (dir == ATK))
                        {
                            chosenbloack[i] = G;
                            Shield_on = true;
                            clock.restart();

                        }
                        else if ((x + 28 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 60 >= platchosen[i].y) && (y + 60 <= platchosen[i].y + 14) && (dir == ATK) && dy > 0)
                        {
                            dy = jump;
                        }
                        break;

                    case GRk:
                        if ((x + 40 >= platchosen[i].x) && (x <= platchosen[i].x + 20) && (y >= platchosen[i].y - 100) && (y <= platchosen[i].y - 5) && (dir == LEFT))
                        {
                            SoundRocket.restart();
                            speeddoodle = Rocket;
                           
                            Rocket_on = true;
                            chosenbloack[i] = G;
                            frameRocket = Rocket_1;

                        }
                        else if ((x + 48 >= platchosen[i].x) && (x <= platchosen[i].x + 32) && (y + 42 >= platchosen[i].y) && (y + 42 <= platchosen[i].y + 14) && (dir == LEFT) && dy > 0)
                        {
                            dy = jump;
                        }

                        if ((x + 20 >= platchosen[i].x) && (x <= platchosen[i].x + 40) && (y >= platchosen[i].y - 100) && (y <= platchosen[i].y - 5) && (dir == RIGHT))
                        {

                            SoundRocket.restart();
                            speeddoodle = Rocket;
                           
                            Rocket_on = true;
                            chosenbloack[i] = G;
                            frameRocket = Rocket_1;

                        }
                        else if ((x + 31 >= platchosen[i].x) && (x <= platchosen[i].x + 47) && (y + 42 >= platchosen[i].y) && (y + 42 <= platchosen[i].y + 14) && (dir == RIGHT) && dy > 0)
                        {
                            dy = jump;
                        }

                        if ((x + 20 >= platchosen[i].x) && (x <= platchosen[i].x + 40) && (y >= platchosen[i].y - 100) && (y <= platchosen[i].y - 5) && (dir == ATK))
                        {
                            SoundRocket.restart();
                            dir = RIGHT;
                            speeddoodle = Rocket;
                           
                            Rocket_on = true;
                            chosenbloack[i] = G;
                            frameRocket = Rocket_1;

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
                            if (y + (75 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                score += 100;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 100;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }

                        }
                        if ((x + 50 >= Devil.x) && (x <= Devil.x + 37) && (y + 50 >= Devil.y) && (y <= Devil.y + 50) && (dir == RIGHT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 100;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }
                        }
                        if ((x + 50 >= Devil.x) && (x <= Devil.x + 37) && (y + 50 >= Devil.y) && (y <= Devil.y + 50) && (dir == LEFT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 100;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }
                        }
                        break;

                    case Devil_Red:
                        if ((x + 70 >= Devil.x) && (x <= Devil.x + 84) && (y + 70 >= Devil.y) && (y <= Devil.y + 50) && (dir == ATK))
                        {
                            if (y + (75 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                score += 100;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 100;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }

                        }
                        if ((x + 48 >= Devil.x) && (x <= Devil.x + 50) && (y + 54 >= Devil.y) && (y <= Devil.y + 38) && (dir == RIGHT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 100;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }



                            }
                        }
                        if ((x + 48 >= Devil.x) && (x <= Devil.x + 50) && (y + 54 >= Devil.y) && (y <= Devil.y + 38) && (dir == LEFT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 100;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }
                        }
                        break;

                    case Devil_Ping:
                        if ((x + 70 >= Devil.x) && (x <= Devil.x + 64) && (y + 70 >= Devil.y) && (y <= Devil.y + 54) && (dir == ATK))
                        {
                            if (y + (75 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                score += 100;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 100;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }

                        }
                        if ((x + 48 >= Devil.x) && (x <= Devil.x + 60) && (y + 46 >= Devil.y) && (y <= Devil.y + 55) && (dir == RIGHT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 100;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }
                        }
                        if ((x + 48 >= Devil.x) && (x <= Devil.x + 60) && (y + 46 >= Devil.y) && (y <= Devil.y + 55) && (dir == LEFT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 100;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 100;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }
                        }
                        break;
                    case Devil_Green:
                        if ((x + 70 >= Devil.x) && (x <= Devil.x + 84) && (y + 70 >= Devil.y) && (y <= Devil.y + 50) && (dir == ATK))
                        {
                            if (y + (75 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                score += 500;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 500;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }

                        }
                        if ((x + 50 >= Devil.x) && (x <= Devil.x + 83) && (y + 54 >= Devil.y) && (y <= Devil.y + 50) && (dir == RIGHT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 500;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 500;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }



                            }
                        }
                        if ((x + 50 >= Devil.x) && (x <= Devil.x + 83) && (y + 54 >= Devil.y) && (y <= Devil.y + 50) && (dir == LEFT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 500;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 500;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }

                            }
                        }
                        break;



                    case Devil_3EYE:
                        if ((x + 31 >= Devil.x) && (x <= Devil.x + 59) && (y + 70 >= Devil.y) && (y <= Devil.y + 87) && (dir == ATK))
                        {
                            if (y + (75 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                score += 300;
                                Devil_die_by_foot = true;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 300;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }

                        }
                        if ((x + 45 >= Devil.x) && (x <= Devil.x + 57) && (y + 55 >= Devil.y) && (y <= Devil.y + 86) && (dir == RIGHT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 300;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 300;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {
                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }



                            }
                        }
                        if ((x + 45 >= Devil.x) && (x <= Devil.x + 57) && (y + 55 >= Devil.y) && (y <= Devil.y + 86) && (dir == LEFT))
                        {
                            if (y + (60 - 40) < Devil.y && dy > 0)
                            {
                                Sjumponmonster.play();
                                Devil_die_by_foot = true;
                                score += 300;
                                dy = jump;
                            }
                            else if (propller_on || Rocket_on)
                            {
                                score += 300;
                                Devilalive = false;
                                CHOSENDEVIL = Empty;
                            }
                            else
                            {

                                if (!Shield_on)
                                {
                                    dooler_alive = false;
                                }


                            }
                        }
                        break;


                    default:
                        break;

                    }
                }







             



                if (Dark)
                {
                  
                    sBack_grid.setTexture(t107);
                }
                else if (!Dark)
                {
                
                    sBack_grid.setTexture(t21);
                }
              
            

                sBack_grid.setPosition(Background.x, Background.y);
                app.draw(sBack_grid);

               







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
                      



                        sPlat_Devil.setPosition(platchosen[i].x, Devil.y + 30);
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
                    case GS:

                        sPlatG.setPosition(platchosen[i].x, platchosen[i].y);
                        app.draw(sPlatG);
                        sShield.setPosition(platchosen[i].x + 11, platchosen[i].y - 42);
                        app.draw(sShield);
                        break;
                    case GRk:
                        sPlatG.setPosition(platchosen[i].x, platchosen[i].y);
                        app.draw(sPlatG);
                        sRocket.setPosition(platchosen[i].x + 15, platchosen[i].y - 43);
                        app.draw(sRocket);
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


                                    int randsound;
                                    randsound = randomrang(1, 2);
                                    if (randsound == 1)
                                    {
                                        Sexplod1.play();
                                    }
                                    else if (randsound == 2)
                                    {
                                        Sexplod2.play();
                                    }
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

                    if (DevilSoundOnetime)
                    {
                        SmosterAlive.play();
                        SmosterAlive.setLoop(true);
                        DevilSoundOnetime = false;
                    }

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
                                    Devil.x += movex;
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
                            sDevil3E_1.setPosition(Devil.x, Devil.y += 8);
                            app.draw(sDevil3E_1);
                        }
                        break;

                    default:
                        break;
                    }
                }
                else
                {

                    SmosterAlive.stop();
                    DevilSoundOnetime = true;
                }




                /*bulletbat*/
                bool bulletDevil = false;
                bool AllbulletDevilout = true;
                if (Devilalive && DeVil_Bat_fram != DeVil1_1 && DeVil_Bat_fram != DeVil1_2 && DeVil_Bat_fram != DeVil1_3 && DevilBatcanBullet && !propller_on && !propller_out && !Rocket_on && !Rocket_out)
                {

                    if (CHOSENDEVIL == Devil_Bat)
                    {
                        loopdelayBulletDevil++;
                        if (loopdelayBulletDevil >= 40)
                        {
                            int random_sound_Devil_bullet;
                            random_sound_Devil_bullet = randomrang(1, 2);
                            switch (random_sound_Devil_bullet)
                            {
                            case 1:
                                SNinjaATK1.play();
                                break;
                            case 2:
                                SNinjaATK2.play();
                                break;
                            }

                            loopdelayBulletDevil = 0;
                            BulletDevil[amountbullet].x = Devil.x + 60;
                            BulletDevil[amountbullet].y = Devil.y + 65;
                            amountbullet++;
                        }
                     
                    }

                }
                if (amountbullet > 0)
                {
                    for (int i = 0; i < amountbullet; i++)
                    {
                        if (BulletDevil[i].y <= 670)
                        {
                            AllbulletDevilout = false;
                            BulletDevil[i].y += 12;
                        }
                        else
                        {
                            BulletDevil[i].y = 700;

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
                        if ((BulletDevil[i].x + 7 >= x) && (BulletDevil[i].x <= x + 57) && (BulletDevil[i].y <= y + 58) && (BulletDevil[i].y - 8 >= y) && BulletDevil[i].y >= 0 && Devilalive && dir == LEFT)
                        {
                            if (!Shield_on && !Rocket_on && !propller_on)
                            {
                                dooler_alive = false;
                            }

                            BulletDevil[i].y = 700;
                        }
                        if ((BulletDevil[i].x + 7 >= x) && (BulletDevil[i].x <= x + 57) && (BulletDevil[i].y <= y + 58) && (BulletDevil[i].y - 8 >= y) && BulletDevil[i].y >= 0 && Devilalive && dir == RIGHT)
                        {
                            if (!Shield_on && !Rocket_on && !propller_on)
                            {
                                dooler_alive = false;
                            }
                            BulletDevil[i].y = 700;
                        }
                        if ((BulletDevil[i].x + 8 >= x) && (BulletDevil[i].x <= x + 36) && (BulletDevil[i].y <= y + 72) && (BulletDevil[i].y - 9 >= y) && BulletDevil[i].y >= 0 && Devilalive && dir == ATK)
                        {
                            if (!Shield_on && !Rocket_on && !propller_on)
                            {
                                dooler_alive = false;
                            }
                            BulletDevil[i].y = 700;
                        }
                    }
                }
                if (AllbulletDevilout)
                {
                    amountbullet = 0;
                }







                /*bullet*/
                bool Allbulletout = true;
                if (allb > 0)
                {
                    for (int i = 0; i < allb; i++)
                    {
                        if (bullet[i].y >= 0)
                        {
                            Allbulletout = false;
                            bullet[i].y -= 12;
                        }

                        for (int j = 0; j < amountbullet; j++)
                        {


                            if ((BulletDevil[j].x + 8 >= bullet[i].x) && (BulletDevil[j].x <= bullet[i].x + 8) && (BulletDevil[j].y <= bullet[i].y + 10) && (BulletDevil[j].y >= bullet[i].y - 11) && BulletDevil[j].y >= 0)
                            {
                                bullet[i].y = -50;
                                bullet[i].x = -50;
                                BulletDevil[j].y = 700;
                                ;

                            }
                        }

                        switch (CHOSENDEVIL)
                        {
                        case Empty:
                            break;
                        case Devil_Bat:
                            if ((bullet[i].x + 10 >= Devil.x) && (bullet[i].x <= Devil.x + 112) && (bullet[i].y <= Devil.y + 67) && (bullet[i].y - 10 >= Devil.y) && bullet[i].y >= 0 && Devilalive)
                            {
                                SmonsterDiebybullet.play();
                                heartDevil--;
                                if (heartDevil == 0)
                                {
                                    score += 700;
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
                                SmonsterDiebybullet.play();
                                heartDevil--;
                                if (heartDevil == 0)
                                {
                                    score += 100;
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
                                SmonsterDiebybullet.play();
                                heartDevil--;
                                if (heartDevil == 0)
                                {
                                    score += 100;
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
                                SmonsterDiebybullet.play();
                                heartDevil--;
                                if (heartDevil == 0)
                                {
                                    score += 100;
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
                                SmonsterDiebybullet.play();
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
                                    score += 500;
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
                                SmonsterDiebybullet.play();
                                heartDevil--;

                                EYE3ATK = true;

                                if (heartDevil == 0)
                                {
                                    score += 300;
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
                if (dir != ATK && Allbulletout)
                {
                    allb = 0;
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

                    doolderdiebystats = false;
                    dooler_alive = false;

             

                }

              




                      /*fall doe and finsh - background*/
                if (Background.y < -630)
                {
                 

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
                            goto MUSICCC;
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
                int delaytime = 4;
                /*draw doodler*/
                if (dir == LEFT)
                {
                    sPersLeftt.setPosition(x, y);
                    app.draw(sPersLeftt);
                    if (doolderdiebystats && !dooler_alive)
                    {
                        switch (framestars)
                        {
                        case Ss1:
                            loopdelaystars++;
                            sStars1.setPosition(x + 15, y - 14);
                            app.draw(sStars1);
                            if (loopdelaystars >= delaytime)
                            {
                                loopdelaystars = 0;
                                framestars = Ss2;

                            }

                            break;
                        case Ss2:
                            loopdelaystars++;
                            sStars2.setPosition(x + 15, y - 14);
                            app.draw(sStars2);
                            if (loopdelaystars >= delaytime)
                            {
                                loopdelaystars = 0;
                                framestars = Ss3;
                            }
                            break;
                        case Ss3:
                            loopdelaystars++;
                            sStars3.setPosition(x + 15, y - 14);
                            app.draw(sStars3);
                            if (loopdelaystars >= delaytime)
                            {
                                loopdelaystars = 0;
                                framestars = Ss1;
                            }
                            break;
                        default:
                            break;
                        }



                    }
                }
                if (dir == RIGHT)
                {
                    sPersRight.setPosition(x, y);
                    app.draw(sPersRight);
                    if (doolderdiebystats && !dooler_alive)
                    {
                        switch (framestars)
                        {
                        case Ss1:
                            loopdelaystars++;
                            sStars1.setPosition(x - 6, y - 14);
                            app.draw(sStars1);
                            if (loopdelaystars >= delaytime)
                            {
                                loopdelaystars = 0;
                                framestars = Ss2;
                            }

                            break;
                        case Ss2:
                            loopdelaystars++;
                            sStars2.setPosition(x - 6, y - 14);
                            app.draw(sStars2);
                            if (loopdelaystars >= delaytime)
                            {
                                loopdelaystars = 0;
                                framestars = Ss3;
                            }
                            break;
                        case Ss3:
                            loopdelaystars++;
                            sStars3.setPosition(x - 6, y - 14);
                            app.draw(sStars3);
                            if (loopdelaystars >= delaytime)
                            {
                                loopdelaystars = 0;
                                framestars = Ss1;
                            }
                            break;
                        default:
                            break;
                        }
                    }
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
                    sPropeller1_1.rotate(3);
                    sPropeller1_1.setPosition(propllerdel.x, propllerdel.y);
                    app.draw(sPropeller1_1);
                }





                /*draw Shield*/
                if (Shield_on)
                {
                    int delaytime = 6;
                    if (clock.getElapsedTime().asSeconds() >= 8 && Shield_on)
                    {
                        delaytime = 0;
                    }
                    switch (frameShield)
                    {
                    case Shield_1:
                        loopdelayShield++;
                        if (dir == LEFT)
                        {
                            sShield1.setPosition(x - 23, y - 17);
                        }
                        else if (dir == RIGHT)
                        {
                            sShield1.setPosition(x - 33, y - 17);
                        }
                        else if (dir == ATK)
                        {
                            sShield1.setPosition(x - 33, y - 8);
                        }
                        app.draw(sShield1);
                        if (loopdelayShield >= delaytime)
                        {
                            frameShield = Shield_2;
                            loopdelayShield = 0;
                        }
                        break;
                    case Shield_2:
                        loopdelayShield++;
                        if (dir == LEFT)
                        {
                            sShield2.setPosition(x - 23, y - 17);
                        }
                        else if (dir == RIGHT)
                        {
                            sShield2.setPosition(x - 33, y - 17);
                        }
                        else if (dir == ATK)
                        {
                            sShield2.setPosition(x - 33, y - 8);
                        }
                        app.draw(sShield2);
                        if (loopdelayShield >= delaytime)
                        {
                            frameShield = Shield_3;
                            loopdelayShield = 0;
                        }
                        break;
                    case Shield_3:
                        loopdelayShield++;
                        if (dir == LEFT)
                        {
                            sShield3.setPosition(x - 23, y - 17);
                        }
                        else if (dir == RIGHT)
                        {
                            sShield3.setPosition(x - 33, y - 17);
                        }
                        else if (dir == ATK)
                        {
                            sShield3.setPosition(x - 33, y - 8);
                        }
                        app.draw(sShield3);
                        if (loopdelayShield >= delaytime)
                        {
                            frameShield = Shield_1;
                            loopdelayShield = 0;
                        }
                        break;
                    default:
                        break;
                    }
                }




                /*draw Rocket*/


                if (Rocket_on)
                {
                    int delaytime = 4;
                    switch (frameRocket)
                    {
                    case Rocket_1:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket1.setTextureRect(sf::IntRect(0, 0, 22, 67));
                            sRocket1.setPosition(x + 56, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket1.setTextureRect(sf::IntRect(22, 0, -22, 67));
                            sRocket1.setPosition(x - 19, y - 4);
                        }
                        app.draw(sRocket1);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 0;
                            frameRocket = Rocket_2;
                        }
                        break;
                    case Rocket_2:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket2.setTextureRect(sf::IntRect(0, 0, 27, 78));
                            sRocket2.setPosition(x + 56, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket2.setTextureRect(sf::IntRect(27, 0, -27, 78));
                            sRocket2.setPosition(x - 24, y - 4);
                        }
                        app.draw(sRocket2);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 0;
                            frameRocket = Rocket_3;
                        }
                        break;
                    case Rocket_3:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket3.setTextureRect(sf::IntRect(0, 0, 27, 85));
                            sRocket3.setPosition(x + 56, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket3.setTextureRect(sf::IntRect(27, 0, -27, 85));
                            sRocket3.setPosition(x - 24, y - 4);
                        }
                        app.draw(sRocket3);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 0;
                            frameRocket = Rocket_4;
                        }
                        break;
                    case Rocket_4:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket4.setTextureRect(sf::IntRect(0, 0, 36, 98));
                            sRocket4.setPosition(x + 50, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket4.setTextureRect(sf::IntRect(36, 0, -36, 98));
                            sRocket4.setPosition(x - 24, y - 4);
                        }
                        app.draw(sRocket4);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 0;
                            frameRocket = Rocket_5;
                        }
                        break;
                    case Rocket_5:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket5.setTextureRect(sf::IntRect(0, 0, 42, 97));
                            sRocket5.setPosition(x + 46, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket5.setTextureRect(sf::IntRect(42, 0, -42, 97));
                            sRocket5.setPosition(x - 28, y - 4);
                        }
                        app.draw(sRocket5);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 0;
                            frameRocket = Rocket_6;
                        }
                        break;
                    case Rocket_6:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket6.setTextureRect(sf::IntRect(0, 0, 44, 99));
                            sRocket6.setPosition(x + 46, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket6.setTextureRect(sf::IntRect(44, 0, -44, 99));
                            sRocket6.setPosition(x - 30, y - 4);
                        }
                        app.draw(sRocket6);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 0;
                            if (SoundRocket.getElapsedTime().asSeconds() >= 2 && Rocket_on)
                               
                            {
                                frameRocket = Rocket_7;
                            }
                            else
                            {
                                frameRocket = Rocket_4;
                            }
                        }
                        break;
                    case Rocket_7:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket7.setTextureRect(sf::IntRect(0, 0, 25, 88));
                            sRocket7.setPosition(x + 56, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket7.setTextureRect(sf::IntRect(25, 0, -25, 88));
                            sRocket7.setPosition(x - 22, y - 4);
                        }
                        app.draw(sRocket7);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 0;
                            frameRocket = Rocket_8;
                        }
                        break;
                    case Rocket_8:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket8.setTextureRect(sf::IntRect(0, 0, 23, 78));
                            sRocket8.setPosition(x + 56, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket8.setTextureRect(sf::IntRect(23, 0, -23, 78));
                            sRocket8.setPosition(x - 20, y - 4);
                        }
                        app.draw(sRocket8);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 9;
                            frameRocket = Rocket_9;
                        }
                        break;
                    case Rocket_9:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket9.setTextureRect(sf::IntRect(0, 0, 22, 70));
                            sRocket9.setPosition(x + 56, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket9.setTextureRect(sf::IntRect(22, 0, -22, 70));
                            sRocket9.setPosition(x - 19, y - 4);
                        }
                        app.draw(sRocket9);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 0;
                            frameRocket = Rocket_10;
                        }
                        break;
                    case Rocket_10:
                        loopdelayRocket++;
                        if (dir == LEFT)
                        {
                            sRocket10.setTextureRect(sf::IntRect(0, 0, 21, 58));
                            sRocket10.setPosition(x + 56, y - 4);
                        }
                        else if (dir == RIGHT)
                        {
                            sRocket10.setTextureRect(sf::IntRect(21, 0, -21, 58));
                            sRocket10.setPosition(x - 19, y - 4);
                        }
                        app.draw(sRocket10);
                        if (loopdelayRocket >= delaytime)
                        {
                            loopdelayRocket = 0;
                            if (SoundRocket.getElapsedTime().asSeconds() >= 2.5 && Rocket_on)
                               
                            {
                                frameRocket = Rocket_8;
                            }
                            else
                            {
                                frameRocket = Rocket_7;
                            }

                        }
                        break;

                    default:
                        break;
                    }
                }
                else if (Rocket_out && !Rocket_on)
                {
                    if (Rocketdel.y > 650)
                    {
                        if (Rocketdel.y > 1550)
                        {
                     
                            Rocket_on = false;
                            Rocket_out = false;
                            have_Rocket = false;
                        }
                    }
                    Rocketdel.y += 8;
                    sRocket11.rotate(3);
                    sRocket11.setPosition(Rocketdel.x, Rocketdel.y);
                    app.draw(sRocket11);
                }



                if (Dark)
                {
            
                   
                    if (y >= 600 && !dooler_alive)
                    {
                        SetBackBgforDrakmap = true;
                     
                    }
                    if (SetBackBgforDrakmap)
                    {
                        if (BgforDrakmap.x > 214)
                        {
                            BgforDrakmap.x -= 3;
                        }
                        else if (BgforDrakmap.x < 214)
                        {
                            BgforDrakmap.x += 3;
                        }

                        if (BgforDrakmap.y > 319)
                        {
                            BgforDrakmap.y -= 3;
                        }
                        else if (BgforDrakmap.y < 319)
                        {
                            BgforDrakmap.y += 3;
                        }
                    }
                    else
                    {
                        BgforDrakmap.x = -(x - (867 * 0.5));
                        BgforDrakmap.y = -(y - ((920 * 0.5) + 233));
                    }

                    sBgforDrakmap.setOrigin(sf::Vector2f(BgforDrakmap.x, BgforDrakmap.y));
                    app.draw(sBgforDrakmap);
                }



                /*score*/
                if (score >= 25000)
                {
                    LEVEL = 8;
                  
                }
                else if (score >= 18000)
                {
                    LEVEL = 7;
            
                }
                else if (score >= 14000)
                {
                    LEVEL = 6;

                }
                else if (score >= 10000)
                {
                    LEVEL = 5;

                }
                else if (score >= 7000)
                {
                    LEVEL = 4;
                }
                else if (score >= 4000)
                {
                    LEVEL = 3;
                }
                else if (score >= 1500)
                {
                    LEVEL = 2;
                }
                else if (score >= 0)
                {
                    LEVEL = 1;
                }
 
               


                break;
            }


            if (CHOSEMENU == MENU)
            {
                sf::Vector2f Mouse = app.mapPixelToCoords(sf::Mouse::getPosition(app));

                if (Keyboard::isKeyPressed(Keyboard::T))
                {
                    system("CLS");
                    CHOSEMENU = TEST;


                }

                name.setFont(font);
                name.setCharacterSize(30);
                name.setPosition(70, 600);
                name.setString("Purin Tabtimto - 63010770");
                name.setFillColor(sf::Color::Yellow);

                text.setFont(font);
                text.setCharacterSize(50);
                text.setPosition(300, 430);

                int delaytime=10;
                if (loopdelayMouse < delaytime)
                {
                    loopdelayMouse++;
                }
                if (text.getGlobalBounds().contains(Mouse))
                {
                    if (Dark)
                    {
                        text.setString("light");
                        text.setFillColor(sf::Color::Yellow);

                    }
                    else if (!Dark)
                    {
                        text.setString("Dark");
                        text.setFillColor(sf::Color::Red);

                    }
                   
                    if (text.getGlobalBounds().contains(Mouse) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
                    {
                        if (loopdelayMouse >= delaytime)
                        {
                            loopdelayMouse = 0;
                            if (!Dark)
                            {
                                sMENU.setTexture(t109);
                                Dark = true;
                            }
                            else if (Dark)
                            {
                                sMENU.setTexture(t1);
                                Dark = false;
                            }
                        }
                      
                       
                    }
                }
                else
                {
                    if (Dark)
                    {
                        text.setFillColor(sf::Color::White);
                        text.setString("light");
                        sMENU.setTexture(t109);

                    }
                    else if (!Dark)
                    {
                        text.setFillColor(sf::Color::Black);
                        text.setString("Dark");
                        sMENU.setTexture(t1);

                    }
                }
                app.draw(sMENU);



                platchosen[0].x = 30;
                platchosen[0].y = 520;
                dir = RIGHT;
                int jump = -7;
                dy += 0.2;
                y += dy;
                if ((x + 31 >= platchosen[0].x) && (x <= platchosen[0].x + 47) && (y + 52 >= platchosen[0].y) && (y + 52 <= platchosen[0].y + 14) && (dy > 0) && (dir == RIGHT))
                {

                    Sjump.play();
                    dy = jump;
                }

                if ((x + 50 >= platchosen[0].x) && (x <= platchosen[0].x + 35) && (y + 52 >= platchosen[0].y) && (y + 52 <= platchosen[0].y + 14) && (dy > 0) && (dir == LEFT))
                {
                    Sjump.play();
                    dy = jump;
                }

                if ((x + 34 >= platchosen[0].x) && (x <= platchosen[0].x + 50) && (y + 77 >= platchosen[0].y) && (y + 77 <= platchosen[0].y + 14) && (dy > 0) && (dir == ATK))
                {
                    Sjump.play();
                    dy = jump;
                }


               


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


                app.draw(text);
                app.draw(name);


                sPersRight.setPosition(x, y);
                app.draw(sPersRight);

                sPlatG.setPosition(platchosen[0].x, platchosen[0].y);
                app.draw(sPlatG);


                switch (UFOfrme)
                {
                case UFO_1:
                    if (Dark)
                    {
                        sMoon.setPosition(266, 29);
                        app.draw(sMoon);
                    }
                    else if (!Dark)
                    {
                        sUFO_1.setPosition(266, 29);
                        app.draw(sUFO_1);
                    }
                    UFOfrme = UFO_2;
                    break;
                case UFO_2:
                    if (Dark)
                    {
                        
                    }
                    else if (!Dark)
                    {

                         sUFO_2.setPosition(266, 29);
                         app.draw(sUFO_2);
                    }
                    UFOfrme = UFO_1;
                    break;
                default:
                    break;
                }

               
                break;
            }

            if (CHOSEMENU == SCORE)
            {
               
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
                         
                        }
                  
                    }
                    else
                    {
                 
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


           
        }


        app.display();

    }






    return 0;
}

