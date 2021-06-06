/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h




void display1()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);






//STAND_BLACK
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.4f,-0.8f);
    glVertex2f(-0.35f,-0.8f);
    glVertex2f(-0.35f,0.8f);
    glVertex2f(-0.4f,0.8f);
    glEnd();



//FLANG_COLOR_VIOLET
    glBegin(GL_QUADS);
    glColor3ub(148,0,211);
    glVertex2f(-0.35f,0.8f);
    glVertex2f(-0.35f,0.7f);
    glVertex2f(0.5f,0.7f);
    glVertex2f(0.5f,0.8f);
    glEnd();



//FLANG_COLOR_INDIGO
    glBegin(GL_QUADS);
    glColor3ub(75,0,130);
    glVertex2f(-0.35f,0.7f);
    glVertex2f(-0.35f,0.6f);
    glVertex2f(0.5f,0.6f);
    glVertex2f(0.5f,0.7f);
    glEnd();



//FLANG_COLOR_BLUE
    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2f(-0.35f,0.6f);
    glVertex2f(-0.35f,0.5f);
    glVertex2f(0.5f,0.5f);
    glVertex2f(0.5f,0.6f);
    glEnd();



//FLANG_COLOR_GREEN
    glBegin(GL_QUADS);
    glColor3ub(0,255,0);
    glVertex2f(-0.35f,0.5f);
    glVertex2f(-0.35f,0.4f);
    glVertex2f(0.5f,0.4f);
    glVertex2f(0.5f,0.5f);
    glEnd();




//FLANG_COLOR_YELLOW
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(-0.35f,0.4f);
    glVertex2f(-0.35f,0.3f);
    glVertex2f(0.5f,0.3f);
    glVertex2f(0.5f,0.4f);
    glEnd();




//FLANG_COLOR_ORANGE
    glBegin(GL_QUADS);
    glColor3ub(255,127,0);
    glVertex2f(-0.35f,0.3f);
    glVertex2f(-0.35f,0.2f);
    glVertex2f(0.5f,0.2f);
    glVertex2f(0.5f,0.3f);
    glEnd();




//FLANG_COLOR_RED
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(-0.35f,0.2f);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(0.5f,0.1f);
    glVertex2f(0.5f,0.2f);
    glEnd();



    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Rainbow Flag");
    glutInitWindowSize(620, 420);
    glutDisplayFunc(display1);
    glutMainLoop();
    return 0;
}
