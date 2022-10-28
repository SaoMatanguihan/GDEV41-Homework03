#include "raylib.h"

int main() {
    InitWindow(800,600, "Homework 03 - GDEV41");
    SetTargetFPS(60);

    Vector2 cueball; 

    float cueballX = GetScreenWidth() / 4.0f;
    float cueballY = GetScreenHeight() / 4.0f; 
    float cueballRadius = 25; 
    float cueballSpeedX = 5;
    float cueballSpeedY = 5;

    Vector2 cueball1; 
    cueball1.x = 450.0f ;
    cueball1.y = 300.0f ;
    float cueball1SpeedX = 5;
    float cueball1SpeedY = 5;

    Vector2 cueball2; 
    cueball2.x = 500.0f ;
    cueball2.y = 265.0f ;
    float cueball2SpeedX = 5;
    float cueball2SpeedY = 5;

    Vector2 cueball3; 
    cueball3.x = 500.0f ;
    cueball3.y = 335.0f ;
    float cueball3SpeedX = 5;
    float cueball3SpeedY = 5;

    Vector2 cueball4; 
    cueball4.x = 550.0f ;
    cueball4.y = 300.0f ;
    float cueball4SpeedX = 5;
    float cueball4SpeedY = 5;



    while (!WindowShouldClose()) {

        cueballX += cueballSpeedX ; 
        cueballY += cueballSpeedY ; 
     

        if (cueballX < 75) {
            cueballX = 75 ; 
            cueballSpeedX *= -1; 
        }

        if (cueballX > 725){
            cueballX = 725; 
            cueballSpeedX *= -1; 
        }

        if (cueballY < 75) {
            cueballY = 75;
            cueballSpeedY *= -1 ;
        }


        if (cueballY > 525) {
            cueballY = 525;
            cueballSpeedY *= -1 ; 
        }




        BeginDrawing();
            ClearBackground(GREEN);
            //horizontal rectangles 
            DrawRectangle(100, 0, 600, 50, RED);
            DrawRectangle(100, 550, 600, 50, RED);
            //vertical rectangles
            DrawRectangle(0,100,50, 400, RED);
            DrawRectangle(750,100,50,400, RED);
            //circle
            DrawCircle(50,50,50,BLACK); 
            DrawCircle(750,50,50,BLACK); 
            DrawCircle(50,550,50,BLACK); 
            DrawCircle(750,550,50,BLACK); 
            //cueball 
            DrawCircle((int) cueballX, (int) cueballY, cueballRadius, WHITE);
            //other billiard balls 
            DrawCircle(500, 265, 25, BLUE);  //cueball2 
            DrawCircle(500, 335, 25, BLUE);  //cueball3
            DrawCircle(550, 300, 25, BLUE);  //cueball4
            DrawCircle(450, 300, 25, BLUE);  //cueball1 


        EndDrawing();


    }
    CloseWindow();
    return 0;

}