#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
int angle=10;
int fanStatus;
void shape(void)
{
glColor3ub	(128,0,128);
glBegin(GL_LINE_LOOP);
glVertex3f(0,0,0.0);
glVertex3f(-0.2,.15,0.0);
glVertex3f(-0.26,.15,0.0);
glVertex3f(-0.29,.25,0.0);
glVertex3f(-0.2,.25,0.0);
glVertex3f(-0.27,.37,0.0);
glVertex3f(-0.34,.37,0.0);
glVertex3f(-0.37,.45,0.0);
glVertex3f(-0.22,.45,0.0);
glVertex3f(-0.5,.85,0.0);
glVertex3f(0.5,.85,0.0);
glVertex3f(0.22,.45,0.0);
glVertex3f(0.37,.45,0.0);
glVertex3f(0.34,.37,0.0);
glVertex3f(0.27,.37,0.0);
glVertex3f(0.2,.25,0.0);
glVertex3f(0.29,.25,0.0);
glVertex3f(0.36,.15,0.0);
glVertex3f(0.2,.15,0.0);
glEnd();
}
void f2()
{
shape();
glRotatef(90,0.0,0.0,1.0);
shape();
glRotatef(180,0.0,0.0,1.0);
shape();
glRotatef(270,0.0,0.0,1.0);
shape();

}

void display(void)
{
glClearColor(0.0,0.0,0.0,0.1);
glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();
gluLookAt(0.0,0.0,5.0,0.0,0.0,0.0,0.0,1.0,0.0);
f2();

if (fanStatus==1)
{
f2();
glPushMatrix();
glScalef(0.5,0.5,0.5);
glTranslatef(1,1,1);
f2();
glPopMatrix();

}
else if(fanStatus==2)
{
f2();
glPushMatrix();
glScalef(0.5,0.5,0.5);
glTranslatef(1,-1,1);
f2();
glPopMatrix();

}
else if(fanStatus==3)
{
f2();
glPushMatrix();
glScalef(0.5,0.5,0.5);
glTranslatef(-1,-1,1);
f2();
glPopMatrix();

}

else if(fanStatus==4)
{
f2();
glPushMatrix();
glScalef(0.5,0.5,0.5);
glTranslatef(-1,+1,1);
f2();
glPopMatrix();


}
else if(fanStatus==5)
{
f2();
glPushMatrix();
glRotatef(angle,0.0,0.0,1.0);
f2();
glPopMatrix();

}
else if(fanStatus==6)
{
f2();

}

glFlush();
glutSwapBuffers();
angle+=1;

}

void reshape(int w,int h)
{
glViewport(0,0,(GLsizei)w,(GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(30,1,1.0,100.0);
glMatrixMode(GL_MODELVIEW);
}
void keyboard(unsigned char key, int x, int y)
{
if(key=='1')
{
fanStatus=1;
}
if(key=='2')
{
fanStatus=2;
}
if(key=='3')
{
fanStatus=3;
}
if(key=='4')
{
fanStatus=4;
}
}
void mouse(int button,int state,int x,int y)
{
switch(button)
{
case GLUT_LEFT_BUTTON:
if(state==GLUT_DOWN)
{
fanStatus=5;
glutPostRedisplay();
}
break;
break;
case GLUT_RIGHT_BUTTON:
if(state==GLUT_DOWN)
{
fanStatus=6;
glutPostRedisplay();
}
break;
default:
break;
}
}
int main (int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowPosition(0,0);
glutInitWindowSize(640,480);
glutCreateWindow("Fan is Rotating ");
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMouseFunc(mouse);
glutKeyboardFunc(keyboard);
glutIdleFunc(display);
glutMainLoop();
return 0;
}
