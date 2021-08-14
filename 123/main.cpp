#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <Math.h>

void init()
{
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void road()
{
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f, 0.0f);
glVertex2f(-1.0f, -0.5f);
glVertex2f(1.0f, -0.5f);
glVertex2f(1.0f, 0.0f);
glEnd();

 glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(-1.0f, -0.15f);
glVertex2f(-0.8f, -0.15f);
glEnd();

 glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(-0.6f, -0.15f);
glVertex2f(-0.4f, -0.15f);
glEnd();

 glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(-0.2f, -0.15f);
glVertex2f(-0.0f, -0.15f);
glEnd();

 glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.2f, -0.15f);
glVertex2f(0.4f, -0.15f);
glEnd();

 glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.6f, -0.15f);
glVertex2f(0.8f, -0.15f);
glEnd();

 glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.9f, -0.15f);
glVertex2f(1.1f, -0.15f);
glEnd();


    glBegin(GL_QUADS);  // kobor kas
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.4f,-0.55f); //up
    glVertex2f(1.0f,-0.55f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(0.1f,-1.0f); //down
    glEnd();

   glBegin(GL_LINE_LOOP);// boundary
glColor3ub(244,164,96);
glVertex3f(0.1,-1.0,0);
glVertex3f(0.1,-0.9,0);
glVertex3f(0.4,-0.48,0);
glVertex3f(1.0,-0.48,0);
glVertex3f(1.0,-0.55,0);
glVertex3f(0.4,-0.55,0);
glVertex3f(0.1,-1.0,0);
glEnd();

    glBegin(GL_QUADS);   //1st kobor
    glColor3ub(139,69,19);
    glVertex2f(0.3f,-0.84f);
    glVertex2f(0.3f,-0.9f);
    glVertex2f(0.4f,-0.9f);
    glVertex2f(0.4f,-0.84f);
    glEnd();

    glBegin(GL_QUADS);   //1st row 1st colum kobor
    glColor3ub(160,82,45);
    glVertex2f(0.5f,-0.6f);
    glVertex2f(0.5f,-0.66f);
    glVertex2f(0.6f,-0.66f);
    glVertex2f(0.6f,-0.6f);
    glEnd();

    glBegin(GL_QUADS);   //1st row 2nd colum kobor
    glColor3ub(139,69,19);
    glVertex2f(0.5f,-0.72f);
    glVertex2f(0.5f,-0.78f);
    glVertex2f(0.6f,-0.78f);
    glVertex2f(0.6f,-0.72f);
    glEnd();

      glBegin(GL_QUADS);   //1st row 3rd colum kobor
    glColor3ub(139,69,19);
    glVertex2f(0.5f,-0.84f);
    glVertex2f(0.5f,-0.9f);
    glVertex2f(0.6f,-0.9f);
    glVertex2f(0.6f,-0.84f);
    glEnd();

     glBegin(GL_QUADS);   //2nd row 1st colum kobor
    glColor3ub(160,82,45);
    glVertex2f(0.7f,-0.6f);
    glVertex2f(0.7f,-0.66f);
    glVertex2f(0.8f,-0.66f);
    glVertex2f(0.8f,-0.6f);
    glEnd();

    glBegin(GL_QUADS);   //2nd row 2nd colum kobor
   glColor3ub(139,69,19);
    glVertex2f(0.7f,-0.72f);
    glVertex2f(0.7f,-0.78f);
    glVertex2f(0.8f,-0.78f);
    glVertex2f(0.8f,-0.72f);
    glEnd();

     glBegin(GL_QUADS);   //2nd row 3rd colum kobor
    glColor3ub(160,82,45);
    glVertex2f(0.7f,-0.84f);
    glVertex2f(0.7f,-0.9f);
    glVertex2f(0.8f,-0.9f);
    glVertex2f(0.8f,-0.84f);
    glEnd();

     glBegin(GL_QUADS);   //3rd row 1st colum kobor
    glColor3ub(139,69,19);
    glVertex2f(0.88f,-0.6f);
    glVertex2f(0.88f,-0.66f);
    glVertex2f(0.97f,-0.66f);
    glVertex2f(0.97f,-0.6f);
    glEnd();

    glBegin(GL_QUADS);   //3rd row 2nd colum kobor
   glColor3ub(160,82,45);
    glVertex2f(0.88f,-0.72f);
    glVertex2f(0.88f,-0.78f);
    glVertex2f(0.97f,-0.78f);
    glVertex2f(0.97f,-0.72f);
    glEnd();

     glBegin(GL_QUADS);   //3rd row 3rd colum kobor
   glColor3ub(160,82,45);
    glVertex2f(0.88f,-0.84f);
    glVertex2f(0.88f,-0.9f);
    glVertex2f(0.97f,-0.9f);
    glVertex2f(0.97f,-0.84f);
    glEnd();

}

void sky()
{
glBegin(GL_QUADS);
glColor3ub(174, 225, 230); //sky
glVertex2f(-1.0f, 0.6f);
glVertex2f(-1.0f, 1.0f);
glVertex2f(1.0f, 1.0f);
glVertex2f(1.0f, 0.6f);
glEnd();

}
void hills()
{

 glBegin(GL_TRIANGLES);//hills
glColor3ub(0,120,0);
glVertex2f(-1.0f,0.3f);
glVertex2f(-0.5f,0.3f);
glVertex2f(-1.0f,0.6f);
glEnd();

 glBegin(GL_TRIANGLES);
glColor3ub(0,120,0);
glVertex2f(-0.8f,0.3f);
glVertex2f(-0.25f,0.3f);
glVertex2f(-0.63f,0.5f);
glEnd();
}
void sun()
{
glBegin(GL_TRIANGLE_FAN);//SUN
glColor3ub(252, 177, 3);

 glVertex2f(0.6, 0.75);
int i;
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.12*cos(M_PI * i / 180.0) + 0.6, 0.15*sin(M_PI * i / 180.0) + 0.75);

 glEnd();

}
void river()
{
glBegin(GL_POLYGON);
glColor3ub(55, 159, 212);
glVertex2f(0.6f,1.0f);
glVertex2f(0.5f,0.6f);
glVertex2f(0.7f,0.6f);
glVertex2f(0.6f,0.2f);
glVertex2f(1.0f,0.2f);
glVertex2f(1.0f,1.0f);
// glVertex2f(0.6f,1.0f);

}
void buiding1()
{
//building 1 from right
//chad
glBegin(GL_QUADS);
glColor3ub(25,144,153);
glVertex2f(0.5f,0.55f);
glVertex2f(0.55f,0.7f);
glVertex2f(0.75f,0.7f);
glVertex2f(0.7f,0.55f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(25,144,153);
glVertex2f(0.5f,0.55f);
glVertex2f(0.7f,0.55f);
glVertex2f(0.7f,0.1f);
glVertex2f(0.5f,0.1f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(25,144,153);
glVertex2f(0.7f,0.55f);
glVertex2f(0.7f,0.1f);
glVertex2f(0.75f,0.1f);
glVertex2f(0.75f,0.7f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(0.5f, 0.55f);
glVertex2f(0.7f, 0.55f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(0.75f, 0.7f);
glVertex2f(0.7f, 0.55f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(0.7f, 0.1f);
glVertex2f(0.7f, 0.55f);
glEnd();


}

void buiding2()
{
//building 2 from right
//chad
glBegin(GL_QUADS);
glColor3ub(25,144,153);
glVertex2f(0.1f,0.75f);
glVertex2f(0.15f,0.9f);
glVertex2f(0.35f,0.9f);
glVertex2f(0.3f,0.75f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(25,144,153);
glVertex2f(0.1f,0.75f);
glVertex2f(0.3f,0.75f);
glVertex2f(0.3f,0.1f);
glVertex2f(0.1f,0.1f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(25,144,153);
glVertex2f(0.3f,0.75f);
glVertex2f(0.3f,0.1f);
glVertex2f(0.35f,0.1f);
glVertex2f(0.35f,0.9f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(0.1f, 0.75f);
glVertex2f(0.3f, 0.75f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(0.35f, 0.9f);
glVertex2f(0.3f, 0.75f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(0.3f, 0.1f);
glVertex2f(0.3f, 0.75f);
glEnd();


}
void hospital()
{
glBegin(GL_POLYGON);
glColor3ub(12,126,14);
glVertex2f(-0.2f, 0.4f);
glVertex2f(-0.2f, 0.7f);
glVertex2f(-0.7f, 0.7f);
glVertex2f(-0.85f, 0.5f);
glVertex2f(-0.7f, 0.4f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(12,126,14);
glVertex2f(-0.2f, 0.4f);
glVertex2f(-0.2f, 0.7f);
glVertex2f(-0.1f, 0.6f);
glVertex2f(-0.1f, 0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(240,230,194);
glVertex2f(-0.2f, 0.1f);
glVertex2f(-0.2f, 0.4f);
glVertex2f(-0.7f, 0.4f);
glVertex2f(-0.7f, 0.1f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(240,230,194);
glVertex2f(-0.7f, 0.4f);
glVertex2f(-0.85f, 0.5f);
glVertex2f(-0.85f, 0.2f);
glVertex2f(-0.7f, 0.1f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(240,230,194);
glVertex2f(-0.7f, 0.4f);
glVertex2f(-0.85f, 0.5f);
glVertex2f(-0.85f, 0.2f);
glVertex2f(-0.7f, 0.1f);
glEnd();


 glBegin(GL_QUADS);
glColor3ub(240,230,194);
glVertex2f(-0.2f, 0.4f);
glVertex2f(-0.1f, 0.45f);
glVertex2f(-0.1f, 0.2f);
glVertex2f(-0.2f, 0.1f);
glEnd();

 //door
glBegin(GL_QUADS);
glColor3ub(174, 225, 230);
glVertex2f(-0.5f, 0.1f);
glVertex2f(-0.5f, 0.3f);
glVertex2f(-0.4f, 0.3f);
glVertex2f(-0.4f, 0.1f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(210,38,13);
glVertex2f(-0.5f, 0.5f);
glVertex2f(-0.5f, 0.6f);
glVertex2f(-0.47f, 0.6f);
glVertex2f(-0.47f, 0.5f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(210,38,13);
glVertex2f(-0.4f, 0.5f);
glVertex2f(-0.4f, 0.6f);
glVertex2f(-0.37f, 0.6f);
glVertex2f(-0.37f, 0.5f);
glEnd();

 //board

 glBegin(GL_QUADS);
glColor3ub(238,238,228);
glVertex2f(-0.3f, 0.55f);
glVertex2f(-0.3f, 0.85);
glVertex2f(-0.6f, 0.85f);
glVertex2f(-0.6f, 0.55f);
glEnd();

 //plus sign verticle part
glLineWidth(25);
glBegin(GL_LINES);
glColor3ub(255,0,0);
glVertex2f(-0.45f, 0.65f);
glVertex2f(-0.45f, 0.75f);
glEnd();

 //plus sign horizontal line part
glLineWidth(20);
glBegin(GL_LINES);
glColor3ub(255,0,0);
glVertex2f(-0.5f, 0.7f);
glVertex2f(-0.4f, 0.7f);
glEnd();

 //black line

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(-0.2f, 0.1f);
glVertex2f(-0.2f, 0.4f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(-0.7f, 0.1f);
glVertex2f(-0.7f, 0.4f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(-0.7f, 0.1f);
glVertex2f(-0.85f, 0.2f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(-0.85f, 0.2f);
glVertex2f(-0.85f, 0.5f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(-0.2f, 0.1f);
glVertex2f(-0.1f, 0.2f);
glEnd();

 glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(31,24,30);
glVertex2f(-0.1f, 0.45f);
glVertex2f(-0.1f, 0.2f);
glEnd();


 /*glBegin(GL_POLYGON);
glColor3ub(0,0,255);
glVertex2f(-0.85f, 0.5f);
glVertex2f(-0.7f, 0.4f);
glVertex2f(-0.2f, 0.4f);
glVertex2f(-0.2f, 0.1f);
glVertex2f(-0.7f, 0.1f);
glVertex2f(-0.85f, 0.2f);
glEnd();

*/


}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();

 sky();
// river();
sun();
//hills();
road();
hospital();
buiding1();
buiding2();

 glFlush();

}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize(1920,1080);
glutInitWindowPosition(0,0);
glutCreateWindow("Covid-19 Hospital Scenerio");
glutDisplayFunc(display);
init();
// glutKeyboardFunc(handleKeypress);
// glutMouseFunc(handleMouse);
// glutTimerFunc(100, update, 0);
// glutTimerFunc(100, update2, 0);
// glutTimerFunc(100, update3, 0);
glutMainLoop();
return 0;
}
