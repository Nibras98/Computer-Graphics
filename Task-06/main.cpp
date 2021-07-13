#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<vector>
#include<math.h>
#define pi 3.14
using namespace std;



int pntX1, pntY1, choice = 0, edges;
vector<int> pntX;
vector<int> pntY;
int transX, transY;



double round(double d)
{
return floor(d + 0.5);
}
void drawPolygon()
{
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(pntX[i], pntY[i]);
}
glEnd();
}



void drawPolygonTrans(int tx, int ty)
{
glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(pntX[i] + tx, pntY[i] + ty);
}
glEnd();
}



void myInit(void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);



}



void Scale(int a1, int b1)
{
glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 1.0);
for (int i = 0; i < edges; i++)
{
glVertex2i((pntX[i]*a1), (pntY[i]*b1));
}
glEnd();
}



void rot(int x)
{
glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(((pntX[i]*cos(x))-(pntY[i]*sin(x))), ((pntX[i]*sin(x))+(pntY[i]*cos(x))));
}
glEnd();
}
double s1, s2;
double rad;



void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0, 0.0, 0.0);



if (choice == 1)
{
drawPolygon();
drawPolygonTrans(transX, transY);
}



else if(choice==2)
{
drawPolygon();
Scale(s1, s2);
}
else if(choice==3)
{



drawPolygon();
rot(rad);
}
glFlush();
}




int main(int argc, char** argv)
{
cout << "Enter your choice:" << endl;
cout << "1. Translation" << endl;
cout << "2. Scaling" << endl;
cout << "3. Rotation" << endl;
cout << "4. Exit" << endl;



cin >> choice;



if (choice == 4) {
return 0;
}



cout << "\n\nFor Polygon:\n" << endl;



cout << "Enter no of edges: "; cin >> edges;



for (int i = 0; i < edges; i++)
{
cout << "Enter co-ordinates for vertex " << i + 1 << " : "; cin >> pntX1 >> pntY1;
pntX.push_back(pntX1);
pntY.push_back(pntY1);
}



if (choice == 1)
{
cout << "Enter the translation factor for X and Y: ";
cin >> transX >> transY;
}
else if(choice==2)
{
cout << "Enter the scaling factor for X and Y: ";
cin >> s1 >> s2;



}
else if(choice==3)
{



cout<<"enter the rotation degree: ";
double deg;
cin>>deg;
rad=deg*(pi/180);
}
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutInitWindowPosition(100, 150);
glutCreateWindow("Basic Transformations");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
return 0;
}
