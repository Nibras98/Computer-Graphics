#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <Math.h>
float ve = 0.0f;
//float vee = 0.0f;
float movee = 0.0f;
float le = 0.0f;
float angl = 0.0f;
float anglee = 0.0f;
float par = 0.8f;
//float pare = 0.8f;
float mb=-0.0f;
float mbm=-0.0f;

float upph=-0.1f;
float up=-0.05f;

//float speed=0.02;
//float position=0.0;
float _move = 0.0f;
float _angle = 0.0f;
float p = -0.8f;
float phead = -0.6f;
float v = -0.1f;
float x=-0.4;
float u=-0.5;
float z = 0.6;
float up_move = 0.0f;
float up_angle = 0.0f;
float opo = -0.8f;
float ver = 0.0f;
bool me = false;

bool run = false;
bool ru = false;
bool o2=false;
bool ha=false;
bool haa=false;
bool sa=false;
bool rue=false;

void update6(int value) {         // manus morar kat nia jay pasonar matha
if (run)
    {
//po += 0.02;

    if(p > 0.38)
        p = 0.38f;

    p += 0.02;
    }

	glutPostRedisplay();
	glutTimerFunc(100, update6, 0);



}

void update8(int value) { // manus morar kat nia jay samnar manus matha
if (run)
    {
//po += 0.02;

    if(phead > 0.58)
        phead = 0.58f;

    phead += 0.02;
    }

	glutPostRedisplay();
	glutTimerFunc(100, update8, 0);



}

void update10(int value)      // manus morar kat nia jay pason ar pa movement
{
    if (run)
    {
        _angle+=0.5f;
        if(_angle > 1.0)
        {
            _angle-=3;
        }
        _move += .02;
        if(_move > 1.2)
        {
            _move = 1.2;
        }

    }
    glutPostRedisplay();
	glutTimerFunc(100, update10, 0);
}

void update7(int value)   //dethbody 2nd path pasonor manus movemant
{
    if (ru)
    {

       // v += .02;
        if(v > 0.6)
        {
            v = 0.6;
        }
                    v += .02;

    }
    glutPostRedisplay();
	glutTimerFunc(100, update7, 0);
}

void update12(int value)
{
    if (ru)
    {

       // v += .02;
        if(u > 0.2)
        {
            u = 0.2;
        }
                    u += .02;

    }
    glutPostRedisplay();
	glutTimerFunc(100, update12, 0);
}

void updateee(int value)
{
    if (rue)              //las jonay update;
    {

       // v += .02;
        if(z > 0.8)
        {
            z = 0.8;
        }
                    z += .01;

    }
    glutPostRedisplay();
	glutTimerFunc(100, updateee, 0);
}

void update32(int value) {
if (ha)
    {
//po += 0.02;

    if(par < -0.38)
        par = -0.38f;

    par -= 0.01;
    }

	glutPostRedisplay();
	glutTimerFunc(100, update32, 0);



}


void update33(int value) {
if (ha)
    {
//po += 0.02;

    if(mb < -0.78)
        mb = -0.78f;

    mb -= 0.02;
    }

	glutPostRedisplay();
	glutTimerFunc(100, update33, 0);



}

void update30(int value)
{
    if (ha)
    {
        le+=0.5f;
        if(le > 1.0)
        {
            le-=2;
        }
        ve -= .01;
        if(ve < -1.2)
        {
            ve = -1.2;
        }

    }
    glutPostRedisplay();
	glutTimerFunc(100, update30, 0);
}




void update31(int value)
{
    if (ha)
    {
        angl+=0.5f;
        if(angl > 1.0)
        {
            angl-=3;
        }
        movee -= .02;
        if(movee < -0.8)
        {
            movee = -0.8;
        }

    }
    glutPostRedisplay();
	glutTimerFunc(100, update31, 0);
}






void update36(int value)  // cilinder oper first bakti
{
    if (haa)
    {
       anglee+=0.5f;
        if(anglee > 1.0)
        {
            anglee-=3;
        }

       // v += .02;
        if(up > 0.3)
        {
            up = 0.3;
        }
                    up += .02;

    }
    glutPostRedisplay();
	glutTimerFunc(100, update36, 0);
}

void update35(int value)
{
    if (haa)
    {

       // v += .02;
        if(upph > 0.3)
        {
            upph = 0.3;
        }
                    upph += .02;

    }
    glutPostRedisplay();
	glutTimerFunc(100, update35, 0);
}

void update40(int value) {
if (me)
    {
//po += 0.02;

    if(opo > 0.37)
        opo = 0.37f;

    opo += 0.02;
    }

	glutPostRedisplay();
	glutTimerFunc(100, update40, 0);



}
void update42(int value) {
if (me)
    {
//po += 0.02;

    if(ver > 1.2)
        ver = 1.2f;

    ver += 0.02;
    }

	glutPostRedisplay();
	glutTimerFunc(100, update42, 0);



}

void update41(int value)
{
    if (me)
    {
        up_angle+=0.5f;
        if(up_angle > 1.0)
        {
            up_angle-=3;
        }
        up_move += .02;
        if(up_move > 1.2)
        {
            up_move = 1.2;
        }

    }
    glutPostRedisplay();
	glutTimerFunc(100, update41, 0);
}




int moveVehicleStatus=0;
int movePlanStatus=0;
int moveBirdStatus=0;
int moveShipStatus;

float a=-0.5;
float b=-0.8;
float c=-0.5;
float d=-0.3;
float e=0.2;
float f=0.48;
float n=0.33;
float m=0.5;

float speed=0.02;
float position=0.0;
void update(int value) {

    if(position > 1.8)
        position = -1.5f;

    position += speed;


	glutPostRedisplay();
	glutTimerFunc(100, update, 0);

}

//for plane
float speed4=0.02;
float position4=0.0;
void update4(int value) {

    if(position4 <= -2.00)
        position4 = 1.2f;

    position4 -= speed4;


	glutPostRedisplay();
	glutTimerFunc(100, update4, 0);



}

//for bird
float speed5=0.002;
float position5=0.0;
void update5(int value) {

    if(position5 <= -2.00)
        position5 = 1.2f;

    position5 -= speed5;


	glutPostRedisplay();
	glutTimerFunc(100, update5, 0);



}

float speed2=0.02;
float position2=0.0;

void update2(int value) {

    if(position2 < - 1.8)
        position2 = 1.5f;

    position2 -= speed2;


	glutPostRedisplay();
	glutTimerFunc(100, update2, 0);

}
void ambulancea(int value) {

    if(a > 1.8)
        a = -1.5f;

    a += speed;


	glutPostRedisplay();
	glutTimerFunc(100, ambulancea, 0);



}
void ambulanceb(int value) {

    if(b > 1.8)
        b = -1.5f;

    b += speed;


	glutPostRedisplay();
	glutTimerFunc(100, ambulanceb, 0);



}

void ambulance2a(int value) {

    if(c < - 1.8)
        c = 1.5f;

    c -= speed2;


	glutPostRedisplay();
	glutTimerFunc(100, ambulance2a, 0);

}

void ambulance2b(int value) {

    if(d < - 1.8)
        d = 1.5f;

    d -= speed2;


	glutPostRedisplay();
	glutTimerFunc(100, ambulance2b, 0);

}

void trucka(int value) {

    if(e > 1.8)
        e = -1.5f;

    e += speed;


	glutPostRedisplay();
	glutTimerFunc(100, trucka, 0);

}

void truckb(int value) {

    if(f > 1.8)
        f = -1.5f;

    f += speed;


	glutPostRedisplay();
	glutTimerFunc(100, truckb, 0);

}
//for nouka
float speed3=0.002;
float position3=0.0;

void update3(int value) {


     position3 += speed3;
     glutPostRedisplay();
	glutTimerFunc(100, update3, 0);

}
void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void circle(float x, float y, float rad, float red, float green, float blue) {
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(x + 0.0f, y + 0.0f, 0.0f);
glColor3f(1.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i = 0; i < 200; i++) {
glColor3f(red, green, blue);
float pi = 3.1416;
float A = (i * 2 * pi) / 200;
float x = rad * cos(A);
float y = rad * sin(A);
glVertex2f(x, y);
}
glEnd();
glPopMatrix();
}

void moon()
{
   // glPushMatrix();
    circle(0.2,0.75,0.10,1.0,1.0,1.0);
    circle(0.25,0.75,0.10,0.0,0.0,0.0);
    //glPopMatrix();
}

void sun()
{
    circle(0.6,0.75,0.10,1.0,1.0,0.0);
        circle(0.6,0.45,0.06,1.0,1.0,0.0);

}

void cloud()
{
    circle(-0.86,0.85,0.05,1.0,1.0,1.0);
    circle(-0.81,0.90,0.04,1.0,1.0,1.0);
    circle(-0.84,0.90,0.03,1.0,1.0,1.0);
    circle(-0.79,0.90,0.03,1.0,1.0,1.0);
    circle(-0.81,0.8,0.05,1.0,1.0,1.0);
    circle(-0.76,0.85,0.05,1.0,1.0,1.0);

    // 2nd cloud
    circle(-0.65,0.8,0.05,1.0,1.0,1.0);
    circle(-0.6,0.85,0.04,1.0,1.0,1.0);
    circle(-0.63,0.85,0.03,1.0,1.0,1.0);
    circle(-0.58,0.85,0.03,1.0,1.0,1.0);
    circle(-0.6,0.75,0.05,1.0,1.0,1.0);
    circle(-0.55,0.80,0.05,1.0,1.0,1.0);

    //3rd cloud
    circle(-0.44,0.85,0.05,1.0,1.0,1.0);
    circle(-0.39,0.90,0.04,1.0,1.0,1.0);
    circle(-0.41,0.90,0.03,1.0,1.0,1.0);
    circle(-0.37,0.90,0.03,1.0,1.0,1.0);
    circle(-0.39,0.8,0.05,1.0,1.0,1.0);
    circle(-0.34,0.85,0.05,1.0,1.0,1.0);


}

void road()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, -0.6f);
    glVertex2f(1.0f, -0.6f);
    glVertex2f(1.0f, 0.0f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-0.8f, -0.3f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.6f, -0.3f);
    glVertex2f(-0.4f, -0.3f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.0f, -0.3f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.4f, -0.3f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.8f, -0.3f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.9f, -0.3f);
    glVertex2f(1.1f, -0.3f);
    glEnd();

    //side work

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, 0.03f);
    glVertex2f(1.0f, 0.03f);
    glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.6f);
    glVertex2f(-1.0f, -0.63f);
    glVertex2f(1.0f, -0.63f);
    glVertex2f(1.0f,-0.6f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-1.0f, -0.6f);
    glVertex2f(-1.0f, -0.63f);
    glEnd();

     glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.9f, -0.6f);
    glVertex2f(-0.9f, -0.63f);
    glEnd();


    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.8f, -0.6f);
    glVertex2f(-0.8f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.7f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.6f, -0.6f);
    glVertex2f(-0.6f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.5f, -0.6f);
    glVertex2f(-0.5f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.4f, -0.6f);
    glVertex2f(-0.4f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.3f, -0.6f);
    glVertex2f(-0.3f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.2f, -0.6f);
    glVertex2f(-0.2f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.1f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.0f, -0.6f);
    glVertex2f(-0.0f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(1.0f, -0.6f);
    glVertex2f(1.0f, -0.63f);
    glEnd();

     glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.9f, -0.63f);
    glEnd();


    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.8f, -0.6f);
    glVertex2f(0.8f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.7f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.6f, -0.63f);
    glEnd();

    glColor3ub(0,0,0);
    glLineWidth(30);
    glBegin(GL_LINES);
    glVertex2f(0.5f, -0.6f);
    glVertex2f(0.5f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.4f, -0.6f);
    glVertex2f(0.4f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.3f, -0.6f);
    glVertex2f(0.3f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.2f, -0.63f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.1f, -0.63f);
    glEnd();
//------------------------------------------
//------------------------------------------


    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, 0.03f);
    glEnd();

     glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.9f, -0.0f);
    glVertex2f(-0.9f, 0.03f);
    glEnd();


    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.8f, -0.0f);
    glVertex2f(-0.8f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.7f, -0.0f);
    glVertex2f(-0.7f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.6f, -0.0f);
    glVertex2f(-0.6f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.5f, -0.0f);
    glVertex2f(-0.5f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.4f, -0.0f);
    glVertex2f(-0.4f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.3f, -0.0f);
    glVertex2f(-0.3f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.2f, -0.0f);
    glVertex2f(-0.2f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.1f, -0.0f);
    glVertex2f(-0.1f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.0f, -0.0f);
    glVertex2f(-0.0f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(1.0f, -0.0f);
    glVertex2f(1.0f, 0.03f);
    glEnd();

     glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.9f, -0.0f);
    glVertex2f(0.9f, 0.03f);
    glEnd();


    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.8f, -0.0f);
    glVertex2f(0.8f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.7f, -0.0f);
    glVertex2f(0.7f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.6f, -0.0f);
    glVertex2f(0.6f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, -0.0f);
    glVertex2f(0.5f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.4f, -0.0f);
    glVertex2f(0.4f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.3f, -0.0f);
    glVertex2f(0.3f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.2f, -0.0f);
    glVertex2f(0.2f, 0.03f);
    glEnd();

    glLineWidth(30);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.0f);
    glVertex2f(0.1f, 0.03f);
    glEnd();

}
void road2()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.6f, -0.6f);
    glVertex2f(-0.6f, -1.0f);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.3f, -0.6f);
    glEnd();

    //par 1
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.6f, -0.6f);
    glVertex2f(-0.6f, -1.0f);
    glVertex2f(-0.62f, -1.0f);
    glVertex2f(-0.62f, -0.6f);
    glEnd();

    //par 2
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.3f, -0.6f);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.28f, -1.0f);
    glVertex2f(-0.28f, -0.6f);
    glEnd();

    //dan
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.3f, -0.7f);
    glVertex2f(-0.28f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.3f, -0.85f);
    glVertex2f(-0.28f, -0.85f);
    glEnd();

    //bam
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.6f, -0.7f);
    glVertex2f(-0.62f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.6f, -0.85f);
    glVertex2f(-0.62f, -0.85f);
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
void skyNight()
{
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); //sky
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
    glVertex2f(-1.0f,0.6f);
    glVertex2f(-0.5f,0.6f);
    glVertex2f(-1.0f,0.9f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,120,0);
    glVertex2f(-0.8f,0.6f);
    glVertex2f(-0.25f,0.6f);
    glVertex2f(-0.5f,0.9f);
    glEnd();
}

void river()
{

    //mati
    glBegin(GL_QUADS);
    glColor3ub(135,62,35);
    glVertex2f(0.15f,0.03f);
    glVertex2f(1.0f,0.03f);
    glVertex2f(1.0f,0.15f);
    glVertex2f(0.15f,0.15f);
    glEnd();

    //river
    glBegin(GL_POLYGON);
    glColor3ub(186,234,255);
    //glVertex2f(-0.65f, -0.32f);
    glVertex2f(0.15f, 0.15f);
    glVertex2f(0.5f, 0.3f);
    glVertex2f(-0.05f, 0.6f);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(1.0f, 0.15f);
    glEnd();

   //parar uper ar ta  road
    glBegin(GL_QUADS);
    glColor3ub(203,255,186);
    glVertex2f(0.09f,0.271f);
    glVertex2f(-0.1f,0.6f);
    glVertex2f(-0.05f,0.6f);
    glVertex2f(0.15f,0.3f);
    glEnd();

   //parar nicher ta  road
    glBegin(GL_QUADS);
    glColor3ub(203,255,186);
    glVertex2f(0.08f,0.03f);
    glVertex2f(0.08f,0.3f);
    glVertex2f(0.15f,0.3f);
    glVertex2f(0.15f,0.03f);
    glEnd();


}


void hospital()
{
    //-------rasta
    glBegin(GL_QUADS);
    glColor3ub(28,127,6);
    glVertex2f(-0.9f,0.42f);
    glVertex2f(-0.9f,0.027f);
    glVertex2f(-0.45f,0.027f);
    glVertex2f(-0.45f,0.42f);
    glEnd();

    //---------------
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.95f,0.2f);
    glVertex2f(-0.95f,0.7f);
    glVertex2f(-0.4f,0.7f);
    glVertex2f(-0.4f,0.2f);
    glEnd();

    //bam
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.92f,0.22f);
    glVertex2f(-0.92f,0.68f);
    glVertex2f(-0.8f,0.68f);
    glVertex2f(-0.8f,0.22f);
    glEnd();

    //dan
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.43f,0.22f);
    glVertex2f(-0.43f,0.68f);
    glVertex2f(-0.55f,0.68f);
    glVertex2f(-0.55f,0.22f);
    glEnd();

    //majh

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.78f,0.35f);
    glVertex2f(-0.78f,0.69f);
    glVertex2f(-0.57f,0.69f);
    glVertex2f(-0.57f,0.35f);
    glEnd();

    //upor
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.79f,0.7f);
    glVertex2f(-0.79f,0.8f);
    glVertex2f(-0.56f,0.8f);
    glVertex2f(-0.56f,0.7f);
    glEnd();

    //bam line 1
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.88f, 0.22f);
    glVertex2f(-0.88f, 0.68f);
    glEnd();

     //bam line 2
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.84f, 0.22f);
    glVertex2f(-0.84f, 0.68f);
    glEnd();

    //bam h line 1
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.92f, 0.296f);
    glVertex2f(-0.8f, 0.296f);
    glEnd();

    //bam h line 2
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.92f, 0.372f);
    glVertex2f(-0.8f, 0.372f);
    glEnd();

    //bam h line 3
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.92f, 0.448f);
    glVertex2f(-0.8f, 0.448f);
    glEnd();

    //bam h line 4
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.92f, 0.524f);
    glVertex2f(-0.8f, 0.524f);
    glEnd();

    //bam h line 5
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.92f, 0.6f);
    glVertex2f(-0.8f, 0.6f);
    glEnd();


     //dan line 1
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.51f, 0.22f);
    glVertex2f(-0.51f, 0.68f);
    glEnd();

     //dan line 2
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.47f, 0.22f);
    glVertex2f(-0.47f, 0.68f);
    glEnd();


    //dan h line 1
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.43f, 0.296f);
    glVertex2f(-0.55f, 0.296f);
    glEnd();

    //dan h line 2
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.43f, 0.372f);
    glVertex2f(-0.55f, 0.372f);
    glEnd();

    //dan h line 3
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.43f, 0.448f);
    glVertex2f(-0.55f, 0.448f);
    glEnd();

    //dan h line 4
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.43f, 0.524f);
    glVertex2f(-0.55f, 0.524f);
    glEnd();

    //dan h line 5
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.43f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glEnd();

    //majh line 2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.64f, 0.35f);
    glVertex2f(-0.64f, 0.69f);
    glEnd();

    //majh line 1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.71f, 0.35f);
    glVertex2f(-0.71f, 0.69f);
    glEnd();

    //majh h line 1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.78f, 0.463f);
    glVertex2f(-0.57f, 0.463f);
    glEnd();

     //majh h line 2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.78f, 0.576f);
    glVertex2f(-0.57f, 0.576f);
    glEnd();


    //door
    glLineWidth(50);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.68f, 0.3f);
    glVertex2f(-0.68f, 0.2f);
    glEnd();

    //plus sign
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.68f, 0.78f);
    glVertex2f(-0.68f, 0.72f);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.70f, 0.75f);
    glVertex2f(-0.66f, 0.75f);
    glEnd();



}
void field()
{
    glBegin(GL_QUADS);
    glColor3ub(49,238,88);
    glVertex2f(-1.0f, -1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, -1.0f);
	glEnd();

}

void fieldNight()
{
    glBegin(GL_QUADS);
    glColor3ub(13,67,13);
    glVertex2f(-1.0f, -1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, -1.0f);
	glEnd();

}
void ambulance()
{
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.9f, -0.3f);
	glVertex2f(-0.9f, -0.55f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.65f, -0.3f);
	glEnd();


    //door uporer part
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.65f, -0.32f);
    glVertex2f(-0.65f, -0.4f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.55f, -0.32f);
    glEnd();



    //syren
    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.57f, -0.32f);
    glVertex2f(-0.57f, -0.29f);
    glEnd();


   //nicher part door
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    //glVertex2f(-0.65f, -0.32f);
    glVertex2f(-0.65f, -0.4f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.42f, -0.45f);
    glVertex2f(-0.42f, -0.55f);
    glVertex2f(-0.65f, -0.55f);
    glEnd();


    //red line

    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.9f, -0.5f);
    glVertex2f(-0.42f, -0.5f);
    glEnd();

    //plus sign

    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.77f, -0.33f);
    glVertex2f(-0.77f, -0.43f);
    glEnd();

    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.8f, -0.38f);
    glVertex2f(-0.74, -0.38f);
    glEnd();

      //glass
    glBegin(GL_QUADS);
    glColor3ub(174, 225, 230);
    glVertex2f(-0.63f, -0.34f);
    glVertex2f(-0.63f, -0.44f);
    glVertex2f(-0.5f, -0.44f);
    glVertex2f(-0.56f, -0.34f);
    glEnd();
// samnay chaka
glPushMatrix();
     circle(a,-0.55,0.04,0.0,0.0,0.0);
    circle(a,-0.55,0.03,1.0,1.0,1.0);
    circle(a,-0.55,0.02,1.0,0.0,0.0);
glPopMatrix();
    // pisosn chaka
    glPushMatrix();
    circle(b,-0.55,0.04,0.0,0.0,0.0);
    circle(b,-0.55,0.03,1.0,1.0,1.0);
    circle(b,-0.55,0.02,1.0,0.0,0.0);
glPopMatrix();


}


void ambulance2()
{
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.5f, -0.01f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.6f, -0.25f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

	//glass
	glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-0.51f, -0.04f);
	glVertex2f(-0.58f, -0.15f);
	//glVertex2f(-0.6f, -0.25f);
	glVertex2f(-0.51f, -0.15f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.5f, -0.01f);
	glVertex2f(-0.2f, -0.01f);
	glVertex2f(-0.2f, -0.25f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

	//plus sign
	glLineWidth(15);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.42f, -0.1f);
    glVertex2f(-0.34f, -0.1f);
    glEnd();

    glLineWidth(15);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.38f, -0.05f);
    glVertex2f(-0.38f, -0.15f);
    glEnd();

    //syran
    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.45f, -0.01f);
    glVertex2f(-0.45f, 0.02f);
    glEnd();

    //red line
    glLineWidth(15);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.6f, -0.19f);
    glVertex2f(-0.2f, -0.19f);
    glEnd();

	//black line
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.5f, -0.01f);
    glVertex2f(-0.5f, -0.25f);
    glEnd();
    glPushMatrix();
    circle(c,-0.25,0.04,0.0,0.0,0.0);
    circle(c,-0.25,0.03,1.0,1.0,1.0);
    circle(c,-0.25,0.02,1.0,0.0,0.0);
    glPopMatrix();
    //2nd chaka
    glPushMatrix();
    circle(d,-0.25,0.04,0.0,0.0,0.0);
    circle(d,-0.25,0.03,1.0,1.0,1.0);
    circle(d,-0.25,0.02,1.0,0.0,0.0);
    glPopMatrix();

}


void cara(int value) {

    if(n < - 1.8)
        n = 1.5f;

    n -= 0.02;


	glutPostRedisplay();
	glutTimerFunc(100, cara, 0);

}

void carb(int value) {

    if(m< - 1.8)
        m = 1.5f;

    m -= 0.02;


	glutPostRedisplay();
	glutTimerFunc(100, carb, 0);

}

void car()
{
    glBegin(GL_QUADS);
    glColor3ub(6,57,112);
    glVertex2f(0.3f, -0.1f);
	glVertex2f(0.25f, -0.20f);
	glVertex2f(0.57f, -0.20f);
	glVertex2f(0.58f, -0.1f);
	glEnd();


	glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.35f, -0.1f);
	glVertex2f(0.4f, -0.01f);
	glVertex2f(0.5f, -0.01f);
	glVertex2f(0.55f, -0.1f);
	glEnd();

	//glass
	glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.36f, -0.09f);
	glVertex2f(0.4f, -0.02f);
	glVertex2f(0.5f, -0.02f);
	glVertex2f(0.54f, -0.09f);
	glEnd();

	//line
	glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.45f, -0.02f);
    glVertex2f(0.45f, -0.09f);
    glEnd();

    glPushMatrix();
    circle(n,-0.20,0.04,0.0,0.0,0.0);
    circle(n,-0.20,0.03,1.0,0.0,0.0);
    circle(n,-0.20,0.02,0.0,0.0,0.0);
    glPopMatrix();
// samnar chaka
glPushMatrix();
    circle(m,-0.20,0.04,0.0,0.0,0.0);
    circle(m,-0.20,0.03,1.0,0.0,0.0);
    circle(m,-0.20,0.02,0.0,0.0,0.0);
    glPopMatrix();


}

void truck()
{
    glBegin(GL_QUADS);
    glColor3ub(58,58,191);
    glVertex2f(0.1f, -0.45f);
	glVertex2f(0.58f, -0.45f);
	glVertex2f(0.58f, -0.55f);
	glVertex2f(0.1f, -0.55f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(58,58,191);
    glVertex2f(0.3f, -0.35f);
	glVertex2f(0.3f, -0.55f);
	glVertex2f(0.55f, -0.55f);
	glVertex2f(0.46f, -0.35f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.31f, -0.37f);
	glVertex2f(0.31f, -0.48f);
	glVertex2f(0.5, -0.48f);
	glVertex2f(0.46f, -0.37f);
	glEnd();


	//blackline
	glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(58,58,191);
    glVertex2f(0.4f, -0.37f);
    glVertex2f(0.4f, -0.48f);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(192,212,54);
    glVertex2f(0.1f, -0.51f);
    glVertex2f(0.3f, -0.51f);
    glEnd();
glPushMatrix();
    circle(e,-0.55,0.04,0.0,0.0,0.0);
    circle(e,-0.55,0.03,0.7,0.8,0.9);
    circle(e,-0.55,0.02,0.0,0.0,0.0);
    glPopMatrix();
// samnar chaka
glPushMatrix();
    circle(f,-0.55,0.04,0.0,0.0,0.0);
    circle(f,-0.55,0.03,0.7,0.8,0.9);
    circle(f,-0.55,0.02,0.0,0.0,0.0);
    glPopMatrix();

}
void tent()
{
    //upor
    glBegin(GL_TRIANGLES);
    glColor3ub(220,214,184);
    glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(0.0f, 0.4f);
	glEnd();

	 //majh er rectangle
    glBegin(GL_QUADS);
    glColor3ub(220,214,184);
    glVertex2f(-0.3f, 0.4f);
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glEnd();

	//majh er door
	glBegin(GL_QUADS);
    glColor3ub(114,93,79);
    glVertex2f(-0.3f, 0.4f);
	//glVertex2f(-0.15f, 0.45f);
	glVertex2f(0.0f, 0.4f);
	glVertex2f(-0.03f, 0.2f);
	glVertex2f(-0.27f, 0.2f);
	glEnd();


	//chawni
	glBegin(GL_QUADS);
    glColor3ub(148,167,255);
    glVertex2f(-0.3f, 0.4f);
	glVertex2f(0.0f, 0.4f);
	glVertex2f(-0.05f, 0.33f);
	glVertex2f(-0.35f, 0.33f);
	glEnd();



	//khuti 1
	glLineWidth(5);
	glColor3ub(65,53,51);
	glBegin(GL_LINES);
	glVertex2f(-0.34f, 0.33f);
	glVertex2f(-0.34f, 0.18f);
	glEnd();

	//khuti 2
	glLineWidth(5);
	glColor3ub(65,53,51);
	glBegin(GL_LINES);
	glVertex2f(-0.06f, 0.33f);
	glVertex2f(-0.06f, 0.18f);
	glEnd();


	//----osustho manush 1-------
	//head
	circle(-0.21,0.275,0.015,1,1,0);

	//body
	glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.2f, 0.25f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(-0.12f, 0.3f);
	glVertex2f(-0.12f, 0.25f);
	glEnd();

	//leg
	glLineWidth(5);
	glColor3ub(255,255,0);
	glBegin(GL_LINES);
	glVertex2f(-0.12f, 0.275f);
	glVertex2f(-0.09f, 0.25f);
	glEnd();

	//hand
	glLineWidth(5);
	glColor3ub(255,255,0);
	glBegin(GL_LINES);
	glVertex2f(-0.19f, 0.275f);
	glVertex2f(-0.17f, 0.26f);
	glEnd();

	//bed
	glLineWidth(5);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.22f, 0.25f);
	glVertex2f(-0.08f, 0.25f);
	glEnd();

	//bed khuti 1

	glLineWidth(5);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.21f, 0.25f);
	glVertex2f(-0.21f, 0.2f);
	glEnd();

	//bed khuti 2

	glLineWidth(5);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.09f, 0.25f);
	glVertex2f(-0.09f, 0.2f);
	glEnd();


	//----osustho manush 2-------
	//head
	circle(-0.31,0.125,0.015,1,1,0);

	//body
	glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(-0.3f, 0.1f);
	glVertex2f(-0.3f, 0.15f);
	glVertex2f(-0.22f, 0.15f);
	glVertex2f(-0.22f, 0.1f);
	glEnd();

	//leg
	glLineWidth(5);
	glColor3ub(255,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.22f, 0.125f);
	glVertex2f(-0.2f, 0.1f);
	glEnd();

	//hand
	glLineWidth(5);
	glColor3ub(255,255,0);
	glBegin(GL_LINES);
	glVertex2f(-0.29f, 0.125f);
	glVertex2f(-0.27f, 0.11f);
	glEnd();

	//bed
	glLineWidth(5);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.32f, 0.1f);
	glVertex2f(-0.19f, 0.1f);
	glEnd();

	//bed khuti 1

	glLineWidth(5);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.31f, 0.1f);
	glVertex2f(-0.31f, 0.05f);
	glEnd();

	//bed khuti 2

	glLineWidth(5);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(-0.2f, 0.05f);
	glEnd();


	//----osustho manush 3-------
	//head
	circle(-0.11,0.125,0.015,1,1,0);

	//body
	glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.1f, 0.15f);
	glVertex2f(-0.02f, 0.15f);
	glVertex2f(-0.02f, 0.1f);
	glEnd();

	//leg
	glLineWidth(5);
	glColor3ub(255,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.02f, 0.125f);
	glVertex2f(-0.0f, 0.1f);
	glEnd();

	//hand
	glLineWidth(5);
	glColor3ub(255,255,0);
	glBegin(GL_LINES);
	glVertex2f(-0.09f, 0.125f);
	glVertex2f(-0.07f, 0.11f);
	glEnd();

	//bed
	glLineWidth(5);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.12f, 0.1f);
	glVertex2f(0.01f, 0.1f);
	glEnd();

	//bed khuti 1

	glLineWidth(5);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(-0.11f, 0.1f);
	glVertex2f(-0.11f, 0.05f);
	glEnd();

	//bed khuti 2

	glLineWidth(5);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.0f, 0.05f);
	glEnd();

}

void moveVehicle()
{

         glPushMatrix();
       glTranslatef(position,0.0f, 0.0f);
       ambulance();
      glPopMatrix();

    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    ambulance2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    truck();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    car();
    glPopMatrix();




    //acar();mbulance2();
    //truck();


    //glPopMatrix();

}
/*void chrismasTree()
{
    //1
    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.8f, -0.65f);
	glVertex2f(-0.85f, -0.7f);
	glVertex2f(-0.75f, -0.7f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.8f, -0.67f);
	glVertex2f(-0.85f, -0.72f);
	glVertex2f(-0.75f, -0.72f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.8f, -0.69f);
	glVertex2f(-0.85f, -0.74f);
	glVertex2f(-0.75f, -0.74f);
	glEnd();

	glLineWidth(20);
	glColor3ub(135,62,35);
	glBegin(GL_LINES);
	glVertex2f(-0.8f, -0.74f);
	glVertex2f(-0.8f, -0.8f);
	glEnd();

	//2
    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.6f, -0.65f);
	glVertex2f(-0.65f, -0.7f);
	glVertex2f(-0.55f, -0.7f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.6f, -0.67f);
	glVertex2f(-0.65f, -0.72f);
	glVertex2f(-0.55f, -0.72f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.6f, -0.69f);
	glVertex2f(-0.65f, -0.74f);
	glVertex2f(-0.55f, -0.74f);
	glEnd();

	glLineWidth(20);
	glColor3ub(135,62,35);
	glBegin(GL_LINES);
	glVertex2f(-0.6f, -0.74f);
	glVertex2f(-0.6f, -0.8f);
	glEnd();

	//3
    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.4f, -0.65f);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.35f, -0.7f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.4f, -0.67f);
	glVertex2f(-0.45f, -0.72f);
	glVertex2f(-0.35f, -0.72f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.4f, -0.69f);
	glVertex2f(-0.45f, -0.74f);
	glVertex2f(-0.35f, -0.74f);
	glEnd();

	glLineWidth(20);
	glColor3ub(135,62,35);
	glBegin(GL_LINES);
	glVertex2f(-0.4f, -0.74f);
	glVertex2f(-0.4f, -0.8f);
	glEnd();

	//4
    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.2f, -0.65f);
	glVertex2f(-0.25f, -0.7f);
	glVertex2f(-0.15f, -0.7f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.2f, -0.67f);
	glVertex2f(-0.25f, -0.72f);
	glVertex2f(-0.15f, -0.72f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.2f, -0.69f);
	glVertex2f(-0.25f, -0.74f);
	glVertex2f(-0.15f, -0.74f);
	glEnd();

	glLineWidth(20);
	glColor3ub(135,62,35);
	glBegin(GL_LINES);
	glVertex2f(-0.2f, -0.74f);
	glVertex2f(-0.2f, -0.8f);
	glEnd();

	//5
    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(-0.0f, -0.65f);
	glVertex2f(-0.05f, -0.7f);
	glVertex2f(0.05f, -0.7f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(0.0f, -0.67f);
	glVertex2f(-0.05f, -0.72f);
	glVertex2f(0.05f, -0.72f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(0.0f, -0.69f);
	glVertex2f(-0.05f, -0.74f);
	glVertex2f(0.05f, -0.74f);
	glEnd();

	glLineWidth(20);
	glColor3ub(135,62,35);
	glBegin(GL_LINES);
	glVertex2f(-0.0f, -0.74f);
	glVertex2f(-0.0f, -0.8f);
	glEnd();

	//6
    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(0.2f, -0.65f);
	glVertex2f(0.25f, -0.7f);
	glVertex2f(0.15f, -0.7f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(0.2f, -0.67f);
	glVertex2f(0.25f, -0.72f);
	glVertex2f(0.15f, -0.72f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(4,80,38);
    glVertex2f(0.2f, -0.69f);
	glVertex2f(0.25f, -0.74f);
	glVertex2f(0.15f, -0.74f);
	glEnd();

	glLineWidth(20);
	glColor3ub(135,62,35);
	glBegin(GL_LINES);
	glVertex2f(0.2f, -0.74f);
	glVertex2f(0.2f, -0.8f);
	glEnd();


}
*/
void ship()
{
     glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.75f, 0.5f);
    glVertex2f(0.85f, 0.5f);
    glVertex2f(0.85f, 0.45f);
    glVertex2f(0.75f, 0.45f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,120,0);
    glVertex2f(0.85f,0.5f);
    glVertex2f(0.85f,0.45f);
    glVertex2f(0.9f,0.55f);
    glEnd();

    glBegin(GL_TRIANGLES);//hills
    glColor3ub(0,120,0);
    glVertex2f(0.75f,0.5f);
    glVertex2f(0.75f,0.45f);
    glVertex2f(0.7f,0.55f);
    glEnd();

    //2nd noka

    glBegin(GL_QUADS);
    glColor3ub(0, 1, 0);
    glVertex2f(0.85f, 0.45f);
    glVertex2f(0.95f, 0.45f);
    glVertex2f(0.95f, 0.4f);
    glVertex2f(0.85f, 0.4f);
    glEnd();
   glBegin(GL_TRIANGLES);//hills
    glColor3ub(0,120,0);
    glVertex2f(0.95f,0.45f);
    glVertex2f(0.95f,0.4f);
    glVertex2f(1.0f,0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,120,0);
    glVertex2f(0.85f,0.45f);
    glVertex2f(0.85f,0.4f);
    glVertex2f(0.8f,0.5f);
    glEnd();


//3nd noka

    glBegin(GL_QUADS);
    glColor3ub(1, 0, 0);
    glVertex2f(0.25f, 0.5f);
    glVertex2f(0.45f, 0.5f);
    glVertex2f(0.45f, 0.45f);
    glVertex2f(0.25f, 0.45f);
    glEnd();
   glBegin(GL_TRIANGLES);
    glColor3ub(0,120,0);
    glVertex2f(0.45f,0.5f);
    glVertex2f(0.45f,0.45f);
    glVertex2f(0.5f,0.52f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,120,0);
    glVertex2f(0.25f,0.5f);
    glVertex2f(0.25f,0.45f);
    glVertex2f(0.2f,0.52f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(0.25f, 0.5f);
    glVertex2f(0.45f, 0.5f);
    glVertex2f(0.45f, 0.47f);
    glVertex2f(0.25f, 0.47f);
    glEnd();
}
void moveShip()
{
if (moveShipStatus==0)
    {
     ship();
    }

    else if (moveShipStatus==1)
    {
        glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    ship();
    glPopMatrix();
    }


}
void plan()
{
     glBegin(GL_POLYGON);

glColor3f(0, 255, 255);

glVertex2f(0.7f, 0.8f);
glVertex2f(0.75f, 0.85f);
glVertex2f(0.9f, 0.85f);
glVertex2f(0.95f,0.8f);
glVertex2f(0.9f, 0.77f);
glVertex2f(0.75f, 0.77f);
//glVertex2f(-0.7f,0.3f);

 glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255,0, 0);
    glVertex2f(0.9f, 0.85f);
    glVertex2f(0.91f, 0.93f);
    glVertex2f(0.94f, 0.93f);
    glVertex2f(0.95f, 0.8f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(0,255, 0);
    glVertex2f(0.8f, 0.8f);
    glVertex2f(0.86f, 0.8f);
    glVertex2f(0.92f, 0.7f);
    glVertex2f(0.88f, 0.7f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(0,0, 0);
    glVertex2f(0.71f, 0.8f);
    glVertex2f(0.76f, 0.8f);
    glVertex2f(0.76f, 0.84f);
    glVertex2f(0.71f, 0.8f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.82f, 0.82);
    glVertex2f(0.84f, 0.82);
    glEnd();

glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.85f, 0.82);
    glVertex2f(0.87f, 0.82);
    glEnd();

glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.79f, 0.82);
    glVertex2f(0.81f, 0.82);
    glEnd();



}

void movePlan()
{
    if (movePlanStatus==0)
    {
        plan();
    }
    else if (movePlanStatus==1)
    {
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    plan();
    glPopMatrix();

    }

}
/*void human()
{
    //head
    //circle(-0.8,-0.05,0.025,1,0,0);

    //body

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.825f, -0.05f);
    glVertex2f(-0.825f, -0.15f);
    glVertex2f(-0.775f, -0.15f);
    glVertex2f(-0.775f, -0.05f);
    glEnd();


    //leg 1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.81f, -0.15);
    glVertex2f(-0.81f, -0.20);
    glEnd();

    //leg 2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.79f, -0.15);
    glVertex2f(-0.79f, -0.20);
    glEnd();


    //hand
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.79f, -0.09);
    glVertex2f(-0.748f, -0.12);
    glEnd();



    //oxygen cylinder

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.74f, -0.2f);
    glVertex2f(-0.74f, -0.1f);
    glVertex2f(-0.725f, -0.09f);
    glVertex2f(-0.71f, -0.1f);
    glVertex2f(-0.71f, -0.2f);
    glEnd();

    //trolly
    //nich
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.75f, -0.20);
    glVertex2f(-0.7f, -0.20);
    glEnd();

    //upor
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.748f, -0.09);
    glVertex2f(-0.748f, -0.20);
    glEnd();


    //-----------------------2------------

    //head
    //circle(-0.0,-0.05,0.025,1,0,0);

    //body

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.025f, -0.05f);
    glVertex2f(-0.025f, -0.15f);
    glVertex2f(0.025f, -0.15f);
    glVertex2f(0.025f, -0.05f);
    glEnd();


    //leg 1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, -0.15);
    glVertex2f(-0.01f, -0.20);
    glEnd();

    //leg 2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.01f, -0.15);
    glVertex2f(0.01f, -0.20);
    glEnd();

    //hand
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.01f, -0.09);
    glVertex2f(0.052f, -0.12);
    glEnd();

    //oxygen cylinder

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.06f, -0.2f);
    glVertex2f(0.06f, -0.1f);
    glVertex2f(0.075f, -0.09f);
    glVertex2f(0.09f, -0.1f);
    glVertex2f(0.09f, -0.2f);
    glEnd();

    //trolly
    //nich
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.05f, -0.20);
    glVertex2f(0.1f, -0.20);
    glEnd();

     //upor
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.052f, -0.09);
    glVertex2f(0.052f, -0.20);
    glEnd();



}

void humanReturn()
{
    //head
    //circle(-0.8,-0.05,0.025,1,0,0);

    //body

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.825f, -0.05f);
    glVertex2f(-0.825f, -0.15f);
    glVertex2f(-0.775f, -0.15f);
    glVertex2f(-0.775f, -0.05f);
    glEnd();


    //leg 1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.81f, -0.15);
    glVertex2f(-0.81f, -0.20);
    glEnd();

    //leg 2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.79f, -0.15);
    glVertex2f(-0.79f, -0.20);
    glEnd();


    //hand
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.79f, -0.09);
    glVertex2f(-0.852f, -0.12);
    glEnd();



    //oxygen cylinder

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.86f, -0.2f);
    glVertex2f(-0.86f, -0.1f);
    glVertex2f(-0.875f, -0.09f);
    glVertex2f(-0.89f, -0.1f);
    glVertex2f(-0.89f, -0.2f);
    glEnd();

    //trolly
    //nich
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.85f, -0.20);
    glVertex2f(-0.9f, -0.20);
    glEnd();

    //upor
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.852f, -0.09);
    glVertex2f(-0.852f, -0.20);
    glEnd();


    //-----------------------2------------

    //head
    //circle(-0.0,-0.05,0.025,1,0,0);

    //body

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.025f, -0.05f);
    glVertex2f(-0.025f, -0.15f);
    glVertex2f(0.025f, -0.15f);
    glVertex2f(0.025f, -0.05f);
    glEnd();


    //leg 1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, -0.15);
    glVertex2f(-0.01f, -0.20);
    glEnd();

    //leg 2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.01f, -0.15);
    glVertex2f(0.01f, -0.20);
    glEnd();

    //hand
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.01f, -0.09);
    glVertex2f(-0.052f, -0.12);
    glEnd();

    //oxygen cylinder

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.06f, -0.2f);
    glVertex2f(-0.06f, -0.1f);
    glVertex2f(-0.075f, -0.09f);
    glVertex2f(-0.09f, -0.1f);
    glVertex2f(-0.09f, -0.2f);
    glEnd();

    //trolly
    //nich
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.05f, -0.20);
    glVertex2f(-0.1f, -0.20);
    glEnd();

     //upor
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.052f, -0.09);
    glVertex2f(-0.052f, -0.20);
    glEnd();

}
*/
void humanHospital()
{
    //human 1---
    //body
        circle(-0.81f,0.16f,0.015,1.0,0.0,0.0);

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.825f, 0.1f);
    glVertex2f(-0.825f, 0.15f);
    glVertex2f(-0.8f, 0.15f);
    glVertex2f(-0.8f, 0.1f);
    glEnd();


    //leg 1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.8225f, 0.1);
    glVertex2f(-0.8225f, 0.08);
    glEnd();

    //leg 2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.8025f, 0.1);
    glVertex2f(-0.8025f, 0.08);
    glEnd();


    //hand1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.8f, 0.14);
    glVertex2f(-0.8f,0.12);
    glEnd();

    //hand2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.825f, 0.14);
    glVertex2f(-0.825f,0.12);
    glEnd();

    //human 2---
    //body
    circle(-0.71f,0.16f,0.015,1.0,0.0,0.0);

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.725f, 0.1f);
    glVertex2f(-0.725f, 0.15f);
    glVertex2f(-0.7f, 0.15f);
    glVertex2f(-0.7f, 0.1f);
    glEnd();


    //leg 1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.7225f, 0.1);
    glVertex2f(-0.7225f, 0.08);
    glEnd();

    //leg 2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.7025f, 0.1);
    glVertex2f(-0.7025f, 0.08);
    glEnd();


    //hand1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.7f, 0.14);
    glVertex2f(-0.7f,0.12);
    glEnd();

    //hand2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.725f, 0.14);
    glVertex2f(-0.725f,0.12);
    glEnd();

    //human 3---
    //body
        circle(-0.61f,0.16f,0.015,1.0,0.0,0.0);

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.625f, 0.1f);
    glVertex2f(-0.625f, 0.15f);
    glVertex2f(-0.6f, 0.15f);
    glVertex2f(-0.6f, 0.1f);
    glEnd();


    //leg 1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.6225f, 0.1);
    glVertex2f(-0.6225f, 0.08);
    glEnd();

    //leg 2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.6025f, 0.1);
    glVertex2f(-0.6025f, 0.08);
    glEnd();


    //hand1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.6f, 0.14);
    glVertex2f(-0.6f,0.12);
    glEnd();

    //hand2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.625f, 0.14);
    glVertex2f(-0.625f,0.12);
    glEnd();

    //human 4---
    //body
        circle(-0.51f,0.16f,0.015,1.0,0.0,0.0);

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.525f, 0.1f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.5f, 0.15f);
    glVertex2f(-0.5f, 0.1f);
    glEnd();


    //leg 1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.5225f, 0.1);
    glVertex2f(-0.5225f, 0.08);
    glEnd();

    //leg 2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.5025f, 0.1);
    glVertex2f(-0.5025f, 0.08);
    glEnd();


    //hand1
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.5f, 0.14);
    glVertex2f(-0.5f,0.12);
    glEnd();

    //hand2
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.525f, 0.14);
    glVertex2f(-0.525f,0.12);
    glEnd();
}

void humanWatching()
{
    //head
    circle(-0.94f,-0.69f,0.015,1.0,0.0,0.0);

    ////human 1

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.95f, -0.7f);
    glVertex2f(-0.95f, -0.8f);
    glVertex2f(-0.925f, -0.8f);
    glVertex2f(-0.925f, -0.7f);
    glEnd();

    //leg1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.93f, -0.8f);
    glVertex2f(-0.93f, -0.825f);
    glEnd();
    //leg2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.945f, -0.8f);
    glVertex2f(-0.945f, -0.825f);
    glEnd();

    //hand
     glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.938f, -0.725f);
    glVertex2f(-0.938f, -0.75f);
    glEnd();

    ////----------------human 2
//head
    circle(-0.84f,-0.79f,0.015,1.0,0.0,0.0);
//body
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.85f, -0.8f);
    glVertex2f(-0.85f, -0.9f);
    glVertex2f(-0.825f, -0.9f);
    glVertex2f(-0.825f, -0.8f);
    glEnd();

    //leg1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.83f, -0.9f);
    glVertex2f(-0.83f, -0.925f);
    glEnd();
    //leg2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.845f, -0.9f);
    glVertex2f(-0.845f, -0.925f);
    glEnd();

    //hand
     glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.838f, -0.825f);
    glVertex2f(-0.838f, -0.85f);
    glEnd();

    ////----------------human 3
//head
    circle(-0.74f,-0.69f,0.015,1.0,0.0,0.0);
//body
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.75f, -0.7f);
    glVertex2f(-0.75f, -0.8f);
    glVertex2f(-0.725f, -0.8f);
    glVertex2f(-0.725f, -0.7f);
    glEnd();

    //leg1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.73f, -0.8f);
    glVertex2f(-0.73f, -0.825f);
    glEnd();
    //leg2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.745f, -0.8f);
    glVertex2f(-0.745f, -0.825f);
    glEnd();

    //hand
     glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.738f, -0.725f);
    glVertex2f(-0.738f, -0.75f);
    glEnd();



}
void humanJanaja()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.14f, -0.8f);
    glVertex2f(-0.15f, -0.85f);
    glVertex2f(-0.05f, -0.85f);
    glVertex2f(-0.06f, -0.8f);
    glEnd();

     ////----------------human 1 Imam
//head
    circle(-0.11f,-0.69f,0.015,1.0,0.0,0.0);
//body
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.1f, -0.78f);
    glVertex2f(-0.125f, -0.78f);
    glVertex2f(-0.125f, -0.7f);
    glEnd();

    //leg1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.12f, -0.78f);
    glVertex2f(-0.12f, -0.805f);
    glEnd();
    //leg2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.105f, -0.78f);
    glVertex2f(-0.105f, -0.805f);
    glEnd();

    //hand1
     glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.1f, -0.72f);
    glVertex2f(-0.11f, -0.74f);
    glEnd();

    //hand2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.125f, -0.72f);
    glVertex2f(-0.11f, -0.74f);
    glEnd();

    ////----------------human 2
    circle(-0.21f,-0.61f,0.015,1.0,0.0,0.0);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.2f, -0.62f);
    glVertex2f(-0.2f, -0.7f);
    glVertex2f(-0.225f, -0.7f);
    glVertex2f(-0.225f, -0.62f);
    glEnd();

    //leg1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.22f, -0.7f);
    glVertex2f(-0.22f, -0.725f);
    glEnd();
    //leg2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.205f, -0.7f);
    glVertex2f(-0.205f, -0.725f);
    glEnd();

    //hand1
     glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.2f, -0.64f);
    glVertex2f(-0.21f, -0.66f);
    glEnd();

    //hand2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.225f, -0.64f);
    glVertex2f(-0.21f, -0.66f);
    glEnd();

     ////----------------human 3
    circle(0.018f,-0.61f,0.015,1.0,0.0,0.0);

      glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.0f, -0.62f);
    glVertex2f(-0.0f, -0.7f);
    glVertex2f(0.025f, -0.7f);
    glVertex2f(0.025f, -0.62f);
    glEnd();

    //leg1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.005f, -0.7f);
    glVertex2f(0.005f, -0.725f);
    glEnd();
    //leg2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02f, -0.7f);
    glVertex2f(0.02f, -0.725f);
    glEnd();

    //hand1
     glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.025f, -0.64f);
    glVertex2f(0.0125f, -0.66f);
    glEnd();

    //hand2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.0f, -0.64f);
    glVertex2f(0.0125f, -0.66f);
    glEnd();





}
void lamp()
{
    //---------1------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.14f,0.05f);
    glVertex2f(0.14f,0.15f);
    glEnd();
    circle(0.14,0.17,0.02,01.0,01.0,01.0);
    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.13f,0.05f);
    glVertex2f(0.15f,0.05f);
    glEnd();

    //---------2------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.14f,0.22f);
    glVertex2f(0.14f,0.32f);
    glEnd();
    circle(0.14,0.32,0.02,01.0,01.0,01.0);

    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.13f,0.22f);
    glVertex2f(0.15f,0.22f);
    glEnd();

    //---------3------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.1f,0.35f);
    glVertex2f(0.1f,0.45f);
    glEnd();
    circle(0.1,0.45,0.02,01.0,01.0,01.0);

    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.09f,0.35f);
    glVertex2f(0.11f,0.35f);
    glEnd();

    //---------4------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.03f,0.45f);
    glVertex2f(0.03f,0.55f);
    glEnd();
    circle(0.03,0.55,0.02,1.0,1.0,01.0);

    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.04f,0.45f);
    glVertex2f(0.02f,0.45f);
    glEnd();

    //---------5------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.02f,0.52f);
    glVertex2f(-0.02f,0.62f);
    glEnd();
    circle(-0.02,0.62,0.02,1.0,1.0,01.0);

    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.01f,0.52f);
    glVertex2f(-0.03f,0.52f);
    glEnd();




}

void lampNight()
{
    //---------1------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.14f,0.05f);
    glVertex2f(0.14f,0.15f);
    glEnd();
    circle(0.14,0.17,0.02,01.0,01.0,0.0);
    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.13f,0.05f);
    glVertex2f(0.15f,0.05f);
    glEnd();

    //---------2------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.14f,0.22f);
    glVertex2f(0.14f,0.32f);
    glEnd();
    circle(0.14,0.32,0.02,01.0,01.0,0.0);

    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.13f,0.22f);
    glVertex2f(0.15f,0.22f);
    glEnd();

    //---------3------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.1f,0.35f);
    glVertex2f(0.1f,0.45f);
    glEnd();
    circle(0.1,0.45,0.02,01.0,01.0,0.0);

    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.09f,0.35f);
    glVertex2f(0.11f,0.35f);
    glEnd();

    //---------4------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.03f,0.45f);
    glVertex2f(0.03f,0.55f);
    glEnd();
    circle(0.03,0.55,0.02,1.0,1.0,0.0);

    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.04f,0.45f);
    glVertex2f(0.02f,0.45f);
    glEnd();

    //---------5------
    //piller
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.02f,0.52f);
    glVertex2f(-0.02f,0.62f);
    glEnd();
    circle(-0.02,0.62,0.02,1.0,1.0,0.0);

    //base
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.01f,0.52f);
    glVertex2f(-0.03f,0.52f);
    glEnd();




}

void tree()
{

    //------------0---
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 255);
    glVertex2f(0.2f,0.1f);
    glVertex2f(0.2f,0.2f);
    glEnd();

    circle(0.17,0.21,0.025,0.0,1.0,0.0);
    circle(0.19,0.27,0.041,0.0,1.0,0.0);
    circle(0.21,0.21,0.025,0.0,1.0,0.0);

    //---------1------
    //Gacher kando
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 255);
    glVertex2f(0.29f,0.1f);
    glVertex2f(0.29f,0.2f);
    glEnd();
    circle(0.27,0.21,0.03,0.0,1.0,0.0);
    circle(0.29,0.27,0.05,0.0,1.0,0.0);
    circle(0.31,0.21,0.03,0.0,1.0,0.0);
    //---------2------
    //Gacher kando
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 255);
    glVertex2f(0.4f,0.1f);
    glVertex2f(0.4f,0.2f);
    glEnd();
    circle(0.38,0.21,0.03,0.0,1.0,0.0);
    circle(0.4,0.27,0.05,0.0,1.0,0.0);
    circle(0.43,0.21,0.03,0.0,1.0,0.0);
    //---------3------
    //Gacher kando
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 255);
    glVertex2f(0.7f,0.1f);
    glVertex2f(0.7f,0.2f);
    glEnd();
    circle(0.68,0.21,0.03,0.0,1.0,0.0);
    circle(0.7,0.27,0.05,0.0,1.0,0.0);
    circle(0.72,0.21,0.03,0.0,1.0,0.0);
    //---------4------
    //Gacher kando
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 255);
    glVertex2f(0.81f,0.1f);
    glVertex2f(0.81f,0.2f);
    glEnd();
    circle(0.79,0.21,0.03,0.0,1.0,0.0);
    circle(0.81,0.27,0.05,0.0,1.0,0.0);
    circle(0.83,0.21,0.03,0.0,1.0,0.0);

    //-----------5-------
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 255);
    glVertex2f(0.93f,0.1f);
    glVertex2f(0.93f,0.2f);
    glEnd();
    circle(0.91,0.21,0.03,0.0,1.0,0.0);
    circle(0.93,0.27,0.05,0.0,1.0,0.0);
    circle(0.95,0.21,0.03,0.0,1.0,0.0);


}
void bird(){


glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.17f,0.817f);// 1st rd

glVertex2f(0.205f,0.797f);
glVertex2f(0.185f,0.788f);
glVertex2f(0.18f,0.78f);
glVertex2f(0.17f,0.794f);
glVertex2f(0.16f,0.7914f);
glVertex2f(0.166f,0.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.917f);// 2nd up rd

glVertex2f(0.305f,0.897f);
glVertex2f(0.285f,0.888f);
glVertex2f(0.28f,0.88f);
glVertex2f(0.27f,0.894f);
glVertex2f(0.26f,0.8914f);
glVertex2f(0.266f,0.9f);
glEnd();


 glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.717f);// 2nd down rd

glVertex2f(0.305f,0.697f);
glVertex2f(0.285f,0.688f);
glVertex2f(0.28f,0.68f);
glVertex2f(0.27f,0.694f);
glVertex2f(0.26f,0.6914f);
glVertex2f(0.266f,0.7f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.37f,0.917f);// 3rd up

glVertex2f(0.405f,0.897f);
glVertex2f(0.385f,0.888f);
glVertex2f(0.38f,0.88f);
glVertex2f(0.37f,0.894f);
glVertex2f(0.36f,0.8914f);
glVertex2f(0.366f,0.9f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.37f,0.717f);// 3rd down

glVertex2f(0.405f,0.697f);
glVertex2f(0.385f,0.688f);
glVertex2f(0.38f,0.68f);
glVertex2f(0.37f,0.694f);
glVertex2f(0.36f,0.6914f);
glVertex2f(0.366f,0.7f);
glEnd();



}

void moveBird()
{
    if(moveBirdStatus==0)
    {
        bird();
    }
    else if(moveBirdStatus==1)
    {
    glPushMatrix();
    glTranslatef(position5,0.0f, 0.0f);
    bird();
    glPopMatrix();
    }


}
int angle=0.5;
void windMill()
{
    //body
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.39f,0.6f);
    glVertex2f(-0.31f,0.6f);
    glVertex2f(-0.35f,0.8f);
    glEnd();

    glPushMatrix();
    glRotatef(angle,0.0,0.0,1.0);



    //pakha1
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.35f,0.8f);
    glVertex2f(-0.35f,0.88f);
    glEnd();

    //pakha2
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.35f,0.8f);
    glVertex2f(-0.4f,0.8f);
    glEnd();

     //pakha4
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.35f,0.8f);
    glVertex2f(-0.35f,0.72f);
    glEnd();

    //pakha4
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.35f,0.8f);
    glVertex2f(-0.3f,0.8f);
    glEnd();

    glPopMatrix();
    glFlush();
    glutSwapBuffers();
    angle=angle+1;

}

void windMill2()
{
    //body
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.24f,0.6f);
    glVertex2f(-0.15f,0.6f);
    glVertex2f(-0.2f,0.8f);
    glEnd();

    //pakha1
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.2f,0.8f);
    glVertex2f(-0.2f,0.88f);
    glEnd();

    //pakha2
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.2f,0.8f);
    glVertex2f(-0.25f,0.8f);
    glEnd();

     //pakha4
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.2f,0.8f);
    glVertex2f(-0.2f,0.72f);
    glEnd();

    //pakha4
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.2f,0.8f);
    glVertex2f(-0.15f,0.8f);
    glEnd();

}
void kobor()
{
    glBegin(GL_QUADS);  // kobor kas
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.4f,-0.66f); //up
    glVertex2f(1.0f,-0.66f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(0.1f,-1.0f); //down
    glEnd();

 // glBegin(GL_LINE_LOOP);// 1st boundary
 // glVertex2f(0.4f,-0.66f);
  /* glColor3ub(244,164,96);
   glVertex3f(0.1,-1.0,0);
   glVertex3f(0.1,-0.9,0);
   glVertex3f(0.2,-0.8,0);
   glVertex3f(0.2,-0.08,0);
   glVertex3f(0.1,-1.0,0);
   glEnd();

   /*glBegin(GL_LINE_LOOP);// 2nd boundary
glColor3ub(244,164,96);

glVertex3f(0.3,-0.8,0);
glVertex3f(0.3,-0.7,0);
glVertex3f(0.4,-0.58,0);
glVertex3f(1.0,-0.58,0);
glVertex3f(1.0,-0.65,0);
glVertex3f(0.4,-0.65,0);
glVertex3f(0.3,-0.8,0);
//glVertex3f(0.1,-0.9,0);
glEnd();
*/

    glBegin(GL_QUADS);   //1st kobor
    glColor3ub(139,69,19);
    glVertex2f(0.3f,-0.94f);
    glVertex2f(0.3f,-1.0f);
    glVertex2f(0.4f,-1.0f);
    glVertex2f(0.4f,-0.94f);
    glEnd();

    glBegin(GL_QUADS);   //1st row 1st colum kobor
    glColor3ub(160,82,45);
    glVertex2f(0.5f,-0.7f);
    glVertex2f(0.5f,-0.76f);
    glVertex2f(0.6f,-0.76f);
    glVertex2f(0.6f,-0.7f);
    glEnd();

    glBegin(GL_QUADS);   //1st row 2nd colum kobor
    glColor3ub(139,69,19);
    glVertex2f(0.5f,-0.82f);
    glVertex2f(0.5f,-0.88f);
    glVertex2f(0.6f,-0.88f);
    glVertex2f(0.6f,-0.82f);
    glEnd();

      glBegin(GL_QUADS);   //1st row 3rd colum kobor
    glColor3ub(139,69,19);
    glVertex2f(0.5f,-0.94f);
    glVertex2f(0.5f,-1.0f);
    glVertex2f(0.6f,-1.0f);
    glVertex2f(0.6f,-0.94f);
    glEnd();

     glBegin(GL_QUADS);   //2nd row 1st colum kobor
    glColor3ub(160,82,45);
    glVertex2f(0.7f,-0.7f);
    glVertex2f(0.7f,-0.76f);
    glVertex2f(0.8f,-0.76f);
    glVertex2f(0.8f,-0.7f);
    glEnd();

    glBegin(GL_QUADS);   //2nd row 2nd colum kobor
   glColor3ub(139,69,19);
    glVertex2f(0.7f,-0.82f);
    glVertex2f(0.7f,-0.88f);
    glVertex2f(0.8f,-0.88f);
    glVertex2f(0.8f,-0.82f);
    glEnd();

     glBegin(GL_QUADS);   //2nd row 3rd colum kobor
    glColor3ub(160,82,45);
    glVertex2f(0.7f,-0.94f);
    glVertex2f(0.7f,-1.0f);
    glVertex2f(0.8f,-1.0f);
    glVertex2f(0.8f,-0.94f);
    glEnd();

     glBegin(GL_QUADS);   //3rd row 1st colum kobor
    glColor3ub(139,69,19);
    glVertex2f(0.88f,-0.7f);
    glVertex2f(0.88f,-0.76f);
    glVertex2f(0.97f,-0.76f);
    glVertex2f(0.97f,-0.7f);
    glEnd();

    glBegin(GL_QUADS);   //3rd row 2nd colum kobor
   glColor3ub(160,82,45);
    glVertex2f(0.88f,-0.82f);
    glVertex2f(0.88f,-0.88f);
    glVertex2f(0.97f,-0.88f);
    glVertex2f(0.97f,-0.82f);
    glEnd();

     glBegin(GL_QUADS);   //3rd row 3rd colum kobor
   glColor3ub(160,82,45);
    glVertex2f(0.88f,-0.94f);
    glVertex2f(0.88f,-1.0f);
    glVertex2f(0.97f,-1.0f);
    glVertex2f(0.97f,-0.94f);
    glEnd();

}
void humanCoffin()  // manus morar kat nia jay
{

glPushMatrix();                                 //pasonar ar manus ar pa
    glTranslatef(_move,0.0f,0.0f);
    glRotatef(_angle,0.0f,0.0f,-0.6f);          //update5
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10); //leg
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.81f, -0.5);
    glVertex2f(-0.81f, -0.55);
    glEnd();

    glPopMatrix();

    glPushMatrix();    //pasonar ar manus ar pa
    glTranslatef(_move,0.0f,0.0f);
    glRotatef(_angle,0.0f,0.02f,0.6f);

    glLineWidth(10);  /// leg
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.79f, -0.5);
    glVertex2f(-0.79f, -0.55);
    glEnd();

     glPopMatrix();

     glPushMatrix();            //pasonar ar manus ar body
    glTranslatef(_move,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.775f, -0.425f);
    glVertex2f(-0.775f, -0.52f);
    glVertex2f(-0.825f,-0.52f);
    glVertex2f(-0.825f, -0.425f);
    glEnd();

    glPopMatrix();

    glPushMatrix();         //pasonar ar manus ar hat
    glTranslatef(_move,0.0f,0.0f);

    glLineWidth(10);   //hand
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.8f, -0.45);
    glVertex2f(-0.75f, -0.48);
    glEnd();

    glPopMatrix();


    glPushMatrix();
        //glTranslatef(_move,0.0f,0.0f);

circle(p,-0.4,0.025,1,0,0);                 //pasonar manus ar matha
        glPopMatrix();                  //update6
//..............human 2......................................................................................
glPushMatrix();                             //samnar ar manus ar pa
    glTranslatef(_move,0.0f,0.0f);          // update5
    glRotatef(_angle,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10);        //leg
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.59f, -0.5);
    glVertex2f(-0.59f, -0.55);
    glEnd();

    glPopMatrix();

    glPushMatrix();  //samnar ar manus ar pa
    glTranslatef(_move,0.0f,0.0f);
    glRotatef(_angle,0.0f,0.02f,0.6f);

    glLineWidth(10);    //leg 2
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.61f, -0.5);
    glVertex2f(-0.61f, -0.55);
    glEnd();

     glPopMatrix();

     glPushMatrix();  //samnar ar manus ar body
    glTranslatef(_move,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.575f, -0.425f);
    glVertex2f(-0.575f, -0.52f);
    glVertex2f(-0.625f,-0.52f);
    glVertex2f(-0.625f, -0.425f);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move,0.0f,0.0f);

    glLineWidth(5);  //samnar ar manus ar hat
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.6f, -0.45);
    glVertex2f(-0.55f, -0.48);
    glEnd();

    glPopMatrix();


    glPushMatrix();  //samnar ar manus ar matha
        //glTranslatef(_move,0.0f,0.0f);

circle(phead,-0.4,0.025,1,0,0);   //update8
        glPopMatrix();

        glPushMatrix();
    glTranslatef(_move,0.0f,0.0f);

    //death body

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.645f, -0.37f);
    glVertex2f(-0.755f, -0.37f);
    glVertex2f(-0.765f,-0.42f);
    glVertex2f(-0.635f, -0.42f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move,0.0f,0.0f);
glLineWidth(10);    //leg 2
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.636f, -0.42);
    glVertex2f(-0.62f, -0.42);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move,0.0f,0.0f);
glLineWidth(10);    //leg 2
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.765f, -0.42);
    glVertex2f(-0.78f, -0.42);
    glEnd();
    glPopMatrix();


}

void yhuman()
{

    glPushMatrix();
    glTranslatef(1.2,v,0.0f);  // dethbody 2nd path pasonr manus pa //update7
    glRotatef(_angle,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10); //leg
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.81f, -0.5);
    glVertex2f(-0.81f, -0.55);
    glEnd();

    glPopMatrix();

    glPushMatrix();  // dethbody 2nd path pasonr manus pa //update7
    glTranslatef(1.2,v,0.0f);
    glRotatef(_angle,0.0f,0.02f,0.6f);

    glLineWidth(10);  /// leg
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.79f, -0.5);
    glVertex2f(-0.79f, -0.55);
    glEnd();

     glPopMatrix();

     glPushMatrix();  // dethbody 2nd path pasonr manus body //update7
    glTranslatef(1.2,v,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.775f, -0.425f);
    glVertex2f(-0.775f, -0.52f);
    glVertex2f(-0.825f,-0.52f);
    glVertex2f(-0.825f, -0.425f);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.2,v,0.0f);  // dethbody 2nd path pasonr manus hat //update7

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.8f, -0.45);
    glVertex2f(-0.75f, -0.48);
    glEnd();

    glPopMatrix();


    glPushMatrix();  // dethbody 2nd path pasonr manus matha //update12
        //glTranslatef(_move,0.0f,0.0f);

circle(0.40,u,0.025,1,0,0);
        glPopMatrix();
//..............human 2.........................................
glPushMatrix();
    glTranslatef(1.2,v,0.0f);  // dethbody 2nd path samnar manus pa //update7
    glRotatef(_angle,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10);        //leg
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.59f, -0.5);
    glVertex2f(-0.59f, -0.55);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.2,v,0.0f);  // dethbody 2nd path samnar manus pa //update7
    glRotatef(_angle,0.0f,0.02f,0.6f);

    glLineWidth(10);    //leg 2
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.61f, -0.5);
    glVertex2f(-0.61f, -0.55);
    glEnd();

     glPopMatrix();

     glPushMatrix();  // dethbody 2nd path samnsonr manus body //update7
    glTranslatef(1.2,v,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.575f, -0.425f);
    glVertex2f(-0.575f, -0.52f);
    glVertex2f(-0.625f,-0.52f);
    glVertex2f(-0.625f, -0.425f);
    glEnd();

    glPopMatrix();

    glPushMatrix();  // dethbody 2nd path sasonr manus hat //update7
    glTranslatef(1.2,v,0.0f);

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.6f, -0.45);
    glVertex2f(-0.55f, -0.48);
    glEnd();

    glPopMatrix();


    glPushMatrix();  // dethbody 2nd path pasonr manus matha //update12
        //glTranslatef(_move,0.0f,0.0f);

circle(0.60,u,0.025,1,0,0);
        glPopMatrix();


        // dead body
        glPushMatrix();
    glTranslatef(1.2,v,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.645f, -0.37f);
    glVertex2f(-0.755f, -0.37f);
    glVertex2f(-0.765f,-0.42f);
    glVertex2f(-0.635f, -0.42f);
    glEnd();
    glPopMatrix();


   glPushMatrix();
    glTranslatef(1.2,v,0.0f);
glLineWidth(10);    //leg 2
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.636f, -0.42);
    glVertex2f(-0.62f, -0.42);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.2,v,0.0f);
glLineWidth(10);    //leg 2
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.765f, -0.42);
    glVertex2f(-0.78f, -0.42);
    glEnd();
    glPopMatrix();

}

void las()                    // dethbody 3rd path pasonr manus pa //
{
    glPushMatrix();
    glTranslatef(1.2,0.6,0.0f);
   // glRotatef(_angle,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10); //leg
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.81f, -0.5);
    glVertex2f(-0.81f, -0.55);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.2,0.6,0.0f);
    //glRotatef(_angle,0.0f,0.02f,0.6f);

    glLineWidth(10);  /// leg
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.79f, -0.5);
    glVertex2f(-0.79f, -0.55);
    glEnd();

     glPopMatrix();

     glPushMatrix();
    glTranslatef(1.2,0.6,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.775f, -0.425f);
    glVertex2f(-0.775f, -0.5f);
    glVertex2f(-0.825f,-0.5f);
    glVertex2f(-0.825f, -0.425f);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.2,0.6,0.0f);

    glLineWidth(10);   //hand
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.8f, -0.45);
    glVertex2f(-0.75f, -0.48);
    glEnd();

    glPopMatrix();


    glPushMatrix();
        //glTranslatef(_move,0.0f,0.0f);

circle(0.40,u,0.025,1,0,0);
        glPopMatrix();
//..............human 2.....................
glPushMatrix();
    glTranslatef(1.2,0.6,0.0f);
    //glRotatef(_angle,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10);        //leg
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.59f, -0.5);
    glVertex2f(-0.59f, -0.55);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.2,0.6,0.0f);
   // glRotatef(_angle,0.0f,0.02f,0.6f);

    glLineWidth(10);    //leg 2
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.61f, -0.5);
    glVertex2f(-0.61f, -0.55);
    glEnd();

     glPopMatrix();

     glPushMatrix();
    glTranslatef(1.2,0.6,0.0f);

    glBegin(GL_QUADS);  //body
    glColor3ub(255, 255, 0);
    glVertex2f(-0.575f, -0.425f);
    glVertex2f(-0.575f, -0.5f);
    glVertex2f(-0.625f,-0.5f);
    glVertex2f(-0.625f, -0.425f);
    glEnd();

    glPopMatrix();

    glPushMatrix(); // hat
    glTranslatef(1.2,0.6,0.0f);

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.6f, -0.45);
    glVertex2f(-0.55f, -0.48);
    glEnd();

    glPopMatrix();


    glPushMatrix();
        //glTranslatef(_move,0.0f,0.0f); matha samnar jon

circle(0.60,u,0.025,1,0,0);
        glPopMatrix();
//'''''''''''''''''''deth body ...............................................

        glPushMatrix();
    glTranslatef(1.2,z,0.0f);  // las pani tay jay updateee

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.645f, -0.37f);
    glVertex2f(-0.755f, -0.37f);
    glVertex2f(-0.765f,-0.42f);
    glVertex2f(-0.635f, -0.42f);
    glEnd();
    glPopMatrix();


   glPushMatrix();
    glTranslatef(1.2,0.6,0.0f);
glLineWidth(10);    //leg 2
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.636f, -0.42);
    glVertex2f(-0.62f, -0.42);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.2,0.6,0.0f);
glLineWidth(10);    //leg 2
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.765f, -0.42);
    glVertex2f(-0.78f, -0.42);
    glEnd();
    glPopMatrix();


}







void oxihumanreturn()
{




    glPushMatrix();             //oxegen purno koray pasonar manus pa
    glTranslatef(ve,0.0f,0.0f);     //update30
    glRotatef(le,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.81f, -0.13);
    glVertex2f(0.81f, -0.18);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(ve,0.0f,0.0f);
    glRotatef(le,0.0f,0.02f,0.6f);

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.79f, -0.15);
    glVertex2f(0.79f, -0.20);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(ve,0.0f,0.0f);  //pasonar body

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(0.825f, -0.05f);
    glVertex2f(0.829f, -0.15f);
    glVertex2f(0.779f, -0.15f);
    glVertex2f(0.775f, -0.05f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
        //glTranslatef(_move,0.0f,0.0f);  pasonar paha

        circle(par,-0.03,0.025,1,0,0); // pasonar matha update32

        glPopMatrix();

        glPushMatrix();     //pasor hat
        glTranslatef(ve,0.0f,0.0f);
        glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.79f, -0.09);
    glVertex2f(0.748f, -0.12);
    glEnd();
    glPopMatrix();

    glPushMatrix();//cylinder
            glTranslatef(ve,0.0f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(0.70f, -0.2f);
    glVertex2f(0.70f, -0.1f);
    glVertex2f(0.715f, -0.09f);
    glVertex2f(0.73f, -0.1f);
    glVertex2f(0.73f, -0.2f);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //nicher handel
                glTranslatef(ve,0.0f,0.0f);

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.69f, -0.20);
    glVertex2f(0.74f, -0.20);
    glEnd();
    glPopMatrix();

    glPushMatrix();// upor handel
                glTranslatef(ve,0.0f,0.0f);
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.742f, -0.09);
    glVertex2f(0.742f, -0.20);
    glEnd();
    glPopMatrix();

//-------------------------------------2------------------
glPushMatrix();
    glTranslatef(movee,0.0f,0.0f);      // samnar manus trans,pac   && update31
    glRotatef(angl,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, -0.15);
    glVertex2f(-0.01f, -0.20);
    glEnd();
    glPopMatrix();

    glPushMatrix();      // samnar manus trans,pac   && update31
    glTranslatef(movee,0.0f,0.0f);
    glRotatef(angl,0.0f,0.02f,0.6f);

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.01f, -0.15);
    glVertex2f(0.01f, -0.20);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslatef(movee,0.0f,0.0f);      // samnar manus trans,body   && update31

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.025f, -0.05f);
    glVertex2f(-0.025f, -0.15f);
    glVertex2f(0.025f, -0.15f);
    glVertex2f(0.025f, -0.05f);
    glEnd();

    glPopMatrix();

    glPushMatrix();       // samnar manus matha   && update33
        //glTranslatef(_move,0.0f,0.0f);

circle(mb,-0.015,0.025,1,0,0);     //update33
        glPopMatrix();

        glPushMatrix();//handas
        glTranslatef(movee,0.0f,0.0f);
        glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.01f, -0.09);
    glVertex2f(-0.052f, -0.12);
    glEnd();
    glPopMatrix();

    glPushMatrix();//cylinder
            glTranslatef(movee,0.0f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.06f, -0.2f);
    glVertex2f(-0.06f, -0.1f);
    glVertex2f(-0.075f, -0.09f);
    glVertex2f(-0.09f, -0.1f);
    glVertex2f(-0.09f, -0.2f);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //nicher handel
                glTranslatef(movee,0.0f,0.0f);

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
   glVertex2f(-0.05f, -0.20);
    glVertex2f(-0.1f, -0.20);
    glEnd();
    glPopMatrix();

    glPushMatrix();// upor handel
                glTranslatef(movee,0.0f,0.0f);
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.052f, -0.09);
    glVertex2f(-0.052f, -0.20);

    glEnd();
    glPopMatrix();





}

void upo2(){

glPushMatrix();
    glTranslatef(-1.2,0.0f,0.0f);    // update39
    //glRotatef(le,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.81f, -0.15);
    glVertex2f(0.81f, -0.20);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.2,0.0f,0.0f);
   // glRotatef(le,0.0f,0.02f,0.6f);

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.79f, -0.15);
    glVertex2f(0.79f, -0.20);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslatef(-1.2,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(0.825f, -0.05f);
    glVertex2f(0.825f, -0.15f);
    glVertex2f(0.775f, -0.15f);
    glVertex2f(0.775f, -0.05f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
        //glTranslatef(_move,0.0f,0.0f);

        circle(-0.40,-0.03,0.025,1,0,0);         // pasonar matha update38

        glPopMatrix();

        glPushMatrix();
        glTranslatef(-1.2,0.0f,0.0f);
        glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.79f, -0.09);
    glVertex2f(0.748f, -0.12);
    glEnd();
    glPopMatrix();

    glPushMatrix();//cylinder
            glTranslatef(-1.2,0.0f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(0.70f, -0.2f);
    glVertex2f(0.70f, -0.1f);
    glVertex2f(0.715f, -0.09f);
    glVertex2f(0.73f, -0.1f);
    glVertex2f(0.73f, -0.2f);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //nicher handel
                glTranslatef(-1.2,0.0f,0.0f);

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.69f, -0.20);
    glVertex2f(0.74f, -0.20);
    glEnd();
    glPopMatrix();

    glPushMatrix();// upor handel
                glTranslatef(-1.2,0.0f,0.0f);
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.742f, -0.09);
    glVertex2f(0.742f, -0.20);
    glEnd();
    glPopMatrix();


//-------------------------------------2------------------
glPushMatrix();
    glTranslatef(-0.8f,up,0.0f);          //update36
    glRotatef(anglee,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, -0.15);
    glVertex2f(-0.01f, -0.20);
    glEnd();
    glPopMatrix();

    glPushMatrix();         //update36
    glTranslatef(-0.8f,up,0.0f);
    glRotatef(anglee,0.0f,0.02f,0.6f);

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.01f, -0.15);
    glVertex2f(0.01f, -0.20);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslatef(-0.8f,up,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.025f, -0.05f);
    glVertex2f(-0.025f, -0.15f);
    glVertex2f(0.025f, -0.15f);
    glVertex2f(0.025f, -0.05f);
    glEnd();

    glPopMatrix();

    glPushMatrix();
        //glTranslatef(_move,0.0f,0.0f);

circle(-0.80,upph,0.025,1,0,0);   //mbm=update37 upph=update35 mathe upor dikay nao
        glPopMatrix();

        glPushMatrix();//handas
        glTranslatef(-0.8f,up,0.0f);
        glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.01f, -0.09);
    glVertex2f(-0.052f, -0.12);
    glEnd();
    glPopMatrix();

    glPushMatrix();//cylinder
            glTranslatef(-0.8f,up,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.06f, -0.2f);
    glVertex2f(-0.06f, -0.1f);
    glVertex2f(-0.075f, -0.09f);
    glVertex2f(-0.09f, -0.1f);
    glVertex2f(-0.09f, -0.2f);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //nicher handel
                glTranslatef(-0.8f,up,0.0f);

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
   glVertex2f(-0.05f, -0.20);
    glVertex2f(-0.1f, -0.20);
    glEnd();
    glPopMatrix();

    glPushMatrix();// upor handel
                glTranslatef(-0.8f,up,0.0f);
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.052f, -0.09);
    glVertex2f(-0.052f, -0.20);

    glEnd();
    glPopMatrix();




}



void humancil()
{




    glPushMatrix();
    glTranslatef(up_move,0.0f,0.0f);
    glRotatef(up_angle,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.81f, -0.15);
    glVertex2f(-0.81f, -0.20);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(up_move,0.0f,0.0f);
    glRotatef(up_angle,0.0f,0.02f,0.6f);

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.79f, -0.15);
    glVertex2f(-0.79f, -0.20);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslatef(up_move,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.825f, -0.085f);
    glVertex2f(-0.825f, -0.17f);
    glVertex2f(-0.775f, -0.17f);
    glVertex2f(-0.775f, -0.085f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
        //glTranslatef(_move,0.0f,0.0f);

        circle(opo,-0.05,0.025,1,0,0);

        glPopMatrix();

        glPushMatrix(); //hand
            glTranslatef(up_move,0.0f,0.0f);
        glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.79f, -0.09);
    glVertex2f(-0.748f, -0.12);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //hand
    glTranslatef(up_move,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.74f, -0.2f);
    glVertex2f(-0.74f, -0.1f);
    glVertex2f(-0.725f, -0.09f);
    glVertex2f(-0.71f, -0.1f);
    glVertex2f(-0.71f, -0.2f);
    glEnd();
    glPopMatrix();

glPushMatrix(); //nicher stand
            glTranslatef(up_move,0.0f,0.0f);
        glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.75f, -0.20);
    glVertex2f(-0.7f, -0.20);

    glEnd();
    glPopMatrix();
glPushMatrix(); //upor stand
            glTranslatef(up_move,0.0f,0.0f);
        glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-0.748f, -0.09);
    glVertex2f(-0.748f, -0.20);

    glEnd();
    glPopMatrix();

//------------------------------------------2-------------
glPushMatrix();
    glTranslatef(up_move,0.0f,0.0f);
    glRotatef(up_angle,0.0f,0.0f,-0.6f);
    //glTranslatef(0.0f,0.0f,0.0f);
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-0.01f, -0.15);
    glVertex2f(-0.01f, -0.20);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(up_move,0.0f,0.0f);
    glRotatef(up_angle,0.0f,0.02f,0.6f);

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(0.01f, -0.15);
    glVertex2f(0.01f, -0.20);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslatef(up_move,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.025f, -0.05f);
    glVertex2f(-0.025f, -0.15f);
    glVertex2f(0.025f, -0.15f);
    glVertex2f(0.025f, -0.05f);
    glEnd();

    glPopMatrix();

    glPushMatrix();
        //glTranslatef(_move,0.0f,0.0f);

        circle(ver,-0.02,0.025,1,0,0);

        glPopMatrix();

        glPushMatrix(); //hand
            glTranslatef(up_move,0.0f,0.0f);
        glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.01f, -0.09);
    glVertex2f(0.052f, -0.12);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //hand
    glTranslatef(up_move,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.06f, -0.2f);
    glVertex2f(0.06f, -0.1f);
    glVertex2f(0.075f, -0.09f);
    glVertex2f(0.09f, -0.1f);
    glVertex2f(0.09f, -0.2f);
    glEnd();

    glPopMatrix();

glPushMatrix(); //nicher stand
            glTranslatef(up_move,0.0f,0.0f);
        glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.05f, -0.20);
    glVertex2f(0.1f, -0.20);

    glEnd();
    glPopMatrix();
glPushMatrix(); //upor stand
            glTranslatef(up_move,0.0f,0.0f);
        glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.052f, -0.09);
    glVertex2f(0.052f, -0.20);

    glEnd();
    glPopMatrix();


}

void huclinder()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    field();
    sky();
    sun();
    hills();
    cloud();
     moveBird();
//plan();
    movePlan();


    hospital();

    // river();

    //moon();
    //hills();
    road();
    road2();

    humanWatching();
    humanJanaja();

    //human();
    tent();

    humanHospital();
    river();
    kobor();


    //ship();
   // if(moveShipStatus==1)
  //  {
        moveShip();

    //}


     lamp();
     tree();

//plan();

    /*if(moveVehicleStatus==0)
    {
      ambulance();

     ambulance2();
     car();
     truck();
    }*/


if (moveVehicleStatus==1)
    {
         moveVehicle();
    }



humancil();
//oxihumanreturn();

    glFlush();

}
void cofineee()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    field();
    sky();
    sun();
    hills();
    cloud();
     moveBird();
//plan();
    movePlan();


    hospital();

    // river();

    //moon();
    //hills();
    road();
    road2();

    humanWatching();
    humanJanaja();

    //human();
    tent();

    humanHospital();
    river();
    kobor();


    //ship();
   // if(moveShipStatus==1)
  //  {
        moveShip();

    //}


     lamp();
     tree();

//plan();

    /*if(moveVehicleStatus==0)
    {
      ambulance();

     ambulance2();
     car();
     truck();
    }*/


if (moveVehicleStatus==1)
    {
         moveVehicle();
    }

    humanCoffin();
  //  h2();
      glFlush();

}
void r()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
   field();
    sky();
    sun();
    hills();
    cloud();
     moveBird();
//plan();
    movePlan();


    hospital();

    // river();

    //moon();
    //hills();
    road();
    road2();

    humanWatching();
    humanJanaja();

    //human();
    tent();

    humanHospital();
    river();
    kobor();


    //ship();
   // if(moveShipStatus==1)
  //  {
        moveShip();

    //}


     lamp();
     tree();

//plan();

    /*if(moveVehicleStatus==0)
    {
      ambulance();

     ambulance2();
     car();
     truck();
    }*/


if (moveVehicleStatus==1)
    {
         moveVehicle();
    }

    yhuman();
  //  h2();
      glFlush();

}
void uu()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    field();
    sky();
    sun();
    hills();
    cloud();
     moveBird();
//plan();
    movePlan();


    hospital();

    // river();

    //moon();
    //hills();
    road();
    road2();

    humanWatching();
    humanJanaja();

    //human();
    tent();

    humanHospital();
    river();
    kobor();


    //ship();
   // if(moveShipStatus==1)
  //  {
        moveShip();

    //}


     lamp();
     tree();

//plan();

    /*if(moveVehicleStatus==0)
    {
      ambulance();

     ambulance2();
     car();
     truck();
    }*/


if (moveVehicleStatus==1)
    {
         moveVehicle();
    }

  las();
      glFlush();

}

void oxdesplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    field();
    sky();
    sun();
    hills();
    cloud();
     moveBird();
//plan();
    movePlan();


    hospital();

    // river();

    //moon();
    //hills();
    road();
    road2();

    humanWatching();
    humanJanaja();

    //human();
    tent();

    humanHospital();
    river();
    kobor();


    //ship();
   // if(moveShipStatus==1)
  //  {
        moveShip();

    //}


     lamp();
     tree();

//plan();

    /*if(moveVehicleStatus==0)
    {
      ambulance();

     ambulance2();
     car();
     truck();
    }*/


if (moveVehicleStatus==1)
    {
         moveVehicle();
    }

oxihumanreturn();
 // las();
      glFlush();
}

void oxupdesplay()
{
     glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    field();
    sky();
    sun();
    hills();
    cloud();
     moveBird();
//plan();
    movePlan();


    hospital();

    // river();

    //moon();
    //hills();
    road();
    road2();

    humanWatching();
    humanJanaja();

    //human();
    tent();

    humanHospital();
    river();
    kobor();


    //ship();
   // if(moveShipStatus==1)
  //  {
        moveShip();

    //}


     lamp();
     tree();

//plan();

    /*if(moveVehicleStatus==0)
    {
      ambulance();

     ambulance2();
     car();
     truck();
    }*/


if (moveVehicleStatus==1)
    {
         moveVehicle();
    }

upo2();
 // las();
      glFlush();
}


void displayDay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    field();
    sky();
    sun();
    hills();
    cloud();
     moveBird();
//plan();
    movePlan();


    hospital();

    // river();

    //moon();
    //hills();
    road();
    road2();

    humanWatching();
    humanJanaja();

    //human();
    tent();

    humanHospital();
    river();
    kobor();


    //ship();
   // if(moveShipStatus==1)
  //  {
        moveShip();

    //}


     lamp();
     tree();

//plan();

    /*if(moveVehicleStatus==0)
    {
      ambulance();

     ambulance2();
     car();
     truck();
    }*/


if (moveVehicleStatus==1)
    {
         moveVehicle();
    }



//windMill();
//windMill2();
    glFlush();

}

void displayNight()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    fieldNight();
    skyNight();
    moon();
    hills();
    //moveBird();
    movePlan();
   // cloud();
    //sun();

    hospital();


    // river();

    //moon();
    //hills();
    road();
    road2();

    humanWatching();
    humanJanaja();

    //human();
    tent();

    humanHospital();
    river();
    kobor();
    moveShip();
    lampNight();
    tree();




if (moveVehicleStatus==1)
    {
         moveVehicle();
    }



//windMill();
//windMill2();
    glFlush();
}
void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case '1':
    moveVehicleStatus=1;
    break;
case '2':
    moveVehicleStatus=0;
    break;
case '3':
    moveShipStatus=1;
    break;
case '4':
    movePlanStatus=1;
    break;
case '5':
    moveBirdStatus=1;
    break;
case '6':
    moveVehicleStatus=0;
    break;

case '7':
    moveShipStatus=0;
    break;
case '8':
    movePlanStatus=0;
    break;
case '9':
    moveBirdStatus=0;
    break;
case'd':
    glutDisplayFunc(displayDay);
    glutPostRedisplay();
    break;
case'n':
    glutDisplayFunc(displayNight);
    glutPostRedisplay();
    break;
case 'h':
        run = true;
        //ha = true;


    //glutDisplayFunc(human);
    glutDisplayFunc(cofineee);
        glutPostRedisplay();

        break;

    case 'j':
        ru = true;
       // run = true;
//glutDisplayFunc(h2);
glutDisplayFunc(r);
        glutPostRedisplay();

        break;

        case 't':
        rue = true;
       // run = true;
//glutDisplayFunc(h2);
glutDisplayFunc(uu);
        glutPostRedisplay();
        break;

        case 'y':
        ha = true;
        //run = true;
//glutDisplayFunc(h2);
glutDisplayFunc(oxdesplay);
        glutPostRedisplay();
        break;

        case 'u':
        haa=true;
//glutDisplayFunc(h2);
glutDisplayFunc(oxupdesplay);
        glutPostRedisplay();
        break;

        case 'q':
        me = true;
       // run = true;
        //run = true;
//glutDisplayFunc(h2);
glutDisplayFunc(huclinder);
        glutPostRedisplay();
        break;


//huclinder
        default:
        break;


	}

}
void mouse(int button,int state,int x,int y)
{
	switch(button)
	{
		case GLUT_LEFT_BUTTON:
			if(state==GLUT_DOWN)
            {
              glutIdleFunc(NULL);
            }

		break;

		break;
		/*case GLUT_RIGHT_BUTTON:
			if(state==GLUT_DOWN)
            {
                setSpin(0.0,0.0,1.0);
                glutIdleFunc(spinDisplayReverse);
            }

		break;

		default:
		break;*/
	}
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1920,1080);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Covid-19 Hospital Scenerio");
    glutDisplayFunc(displayDay);
    init();
    glutKeyboardFunc(handleKeypress);
     glutMouseFunc(mouse);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
    glutTimerFunc(100, update5, 0);
    glutTimerFunc(100, cara, 0);
    glutTimerFunc(100, carb, 0);
    glutTimerFunc(100, ambulancea, 0);
    glutTimerFunc(100, ambulanceb, 0);
   glutTimerFunc(100, ambulance2a, 0);
   glutTimerFunc(100, ambulance2b, 0);
   glutTimerFunc(100, truckb, 0);
   glutTimerFunc(100, trucka, 0);
   glutTimerFunc(100, update6, 0);
    glutTimerFunc(100, update10, 0);
    glutTimerFunc(100, update8, 0);
    glutTimerFunc(100, update7, 0);
    glutTimerFunc(100, update12, 0);
    glutTimerFunc(100, updateee, 0);
   // glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update30, 0);
    glutTimerFunc(100, update31, 0);
    glutTimerFunc(100, update32, 0);
    glutTimerFunc(100, update33, 0);

    glutTimerFunc(100, update40, 0);
    glutTimerFunc(100, update41, 0);
    glutTimerFunc(100, update42, 0);
   // glutTimerFunc(100, update34, 0);
    glutTimerFunc(100, update35, 0);
    glutTimerFunc(100, update36, 0);


    glutMainLoop();
    return 0;
}
