#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <Math.h>
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
    glColor3ub(255,0,0);
    glVertex2f(-0.2f, 0.25f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(-0.12f, 0.3f);
	glVertex2f(-0.12f, 0.25f);
	glEnd();

	//leg
	glLineWidth(5);
	glColor3ub(255,0,0);
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

void kobor()
{
    glBegin(GL_QUADS);  // kobor kas
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.4f,-0.66f); //up
    glVertex2f(1.0f,-0.66f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(0.1f,-1.0f); //down
    glEnd();

   glBegin(GL_LINE_LOOP);// 1st boundary
glColor3ub(244,164,96);
glVertex3f(0.1,-1.0,0);
glVertex3f(0.1,-0.9,0);
glVertex3f(0.2,-0.8,0);
glVertex3f(0.2,-0.88,0);
glVertex3f(0.1,-1.0,0);
glEnd();

   glBegin(GL_LINE_LOOP);// 2nd boundary
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
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    field();
    sky();
    tent();
    kobor();
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


    glutMainLoop();
    return 0;
}
