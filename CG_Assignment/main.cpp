#include<windows.h>
#include<GL/glut.h>

GLfloat position = 0.0f;
GLfloat speed = 0.1f;
float translate_x = 0.0;
float translate_y = 0.0;
float translate_z = -30.0;
int xx;
void setXX(int i)
{
    xx=i;
}

void update(int value) {

    if(position <-50.0)
        {
             position = 50.0f;
        }
    else if(position > 50)
    {
        position = - 50.0f ;
    }

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void road()
{glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(-50, -50);
glVertex2i(-50,-5);
glVertex2i(50,-5);
glVertex2i(50,-50);
glEnd();
glFlush();

}
void line()
{
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(-50,-17.5);
    glVertex2i(-30,-17.5);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(-20,-17.5);
    glVertex2i(-00,-17.5);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(10,-17.5);
    glVertex2i(30,-17.5);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(40,-17.5);
    glVertex2i(60,-17.5);
    glEnd();
}
void boat()
{
    glBegin(GL_QUADS);
       glColor3ub(255,255,0);
    glVertex2f(-10,-5);
    glVertex2f(-10,5);
    glVertex2f(10,15);
    glVertex2f(20,-20);
    glEnd();

     glBegin(GL_TRIANGLES);
       glColor3ub(255,255,0);
    glVertex2f(-10,-5);
    glVertex2f(-10,5);
    glVertex2f(-30,8);
    glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(255,255,0);
      glVertex2f(10,-5);
    glVertex2f(10,5);
    glVertex2f(40,8);
    glEnd();

  glBegin(GL_QUADS);
       glColor3ub(255,255,0);
    glVertex2f(-10,5);
    glVertex2f(-10,15);
    glVertex2f(15,15);
    glVertex2f(15,5);
    glEnd();
     glFlush();


}

void moveBoat()
{
    if (xx==1)
        {
            glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    boat();

glPopMatrix();
        }
        else
        {
            boat();
        }

}

void init()
{
glClearColor(1,1,1,0);
glShadeModel(GL_SMOOTH);
glClearDepth(1.0f);
glEnable(GL_DEPTH_TEST);
}
void myDisplay()
{

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

glLoadIdentity();



glTranslatef(translate_x, translate_y, translate_z);

line();
road();

moveBoat();





glFlush();


glFlush();
glutSwapBuffers();

}






void reset()
{

translate_x = 0.0;
translate_y = 0.0;
translate_z = -30.0;
}



void reshape(int w,int h)
{
glViewport(0,0, (GLsizei)w,(GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(100.0f, (GLfloat)w/(GLfloat)h, 1.0f, 100.0f);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}



void mouse(int button,int state,int x,int y)
{
	switch(button)
	{
		case GLUT_LEFT_BUTTON:
			if(state==GLUT_DOWN)
            {
                setXX(0);
              glutIdleFunc(moveBoat);
            }

		break;

		break;
		case GLUT_RIGHT_BUTTON:
			if(state==GLUT_DOWN)
            {
               setXX(1);
                //setSpin(0.0,0.0,1.0);
                glutIdleFunc(moveBoat);
            }

		break;

		default:
		break;
	}
}



void keyboard(unsigned char key, int x, int y)
{

if(key=='1')
{
translate_z++;
glutPostRedisplay();
}
else if(key=='2')
{
translate_z--;
glutPostRedisplay();
}

else if(key=='3')
{
reset();

glutPostRedisplay();
}

}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(1024, 768);
glutInitWindowPosition(0, 0);
glutCreateWindow("Boat is Moving");
glutDisplayFunc(myDisplay);
glutReshapeFunc(reshape);
glutMouseFunc(mouse);
glutKeyboardFunc(keyboard);
glutTimerFunc(100, update, 0);
init();
glutMainLoop();
}
