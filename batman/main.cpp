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

#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//black border color

    glVertex2f(0.0f, 0.6f); //border left side
	glVertex2f(-0.55f, 0.6f);
	glVertex2f(-0.55f, 0.55f);
	glVertex2f(-0.6f, 0.55f);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.65f, 0.45f);
	glVertex2f(-0.7f, 0.45f);
	glVertex2f(-0.7f, 0.4f);
	glVertex2f(-0.75f, 0.4f);
	glVertex2f(-0.75f, 0.35f);
	glVertex2f(-0.8f, 0.35f);
	glVertex2f(-0.8f, 0.3f);
	glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.85f, 0.25f);
	glVertex2f(-0.9f, 0.25f);
	glVertex2f(-0.9f, 0.2f);
	glVertex2f(-0.95f, 0.2f);
	glVertex2f(-0.95f, -0.2f);
	glVertex2f(-0.9f, -0.2f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.85f, -0.25f);
	glVertex2f(-0.85f, -0.3f);
	glVertex2f(-0.8f, -0.3f);
	glVertex2f(-0.8f, -0.35f);
	glVertex2f(-0.75f, -0.35f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.7f, -0.4f);
	glVertex2f(-0.7f, -0.45f);
	glVertex2f(-0.65f, -0.45f);
	glVertex2f(-0.65f, -0.5f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.6f, -0.55f);
	glVertex2f(-0.55f, -0.55f);
	glVertex2f(-0.55f, -0.6f);

	glVertex2f(0.55f, -0.6f); //border right side
	glVertex2f(0.55f, -0.55f);
	glVertex2f(0.6f, -0.55f);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.65f, -0.5f);
	glVertex2f(0.65f, -0.45f);
	glVertex2f(0.7f, -0.45f);
	glVertex2f(0.7f, -0.4f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.75f, -0.35f);
	glVertex2f(0.8f, -0.35f);
	glVertex2f(0.8f, -0.3f);
	glVertex2f(0.85f, -0.3f);
	glVertex2f(0.85f, -0.25f);
	glVertex2f(0.9f, -0.25f);
    glVertex2f(0.9f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.2f);
	glVertex2f(0.9f, 0.2f);
	glVertex2f(0.9f, 0.25f);
	glVertex2f(0.85f, 0.25f);
	glVertex2f(0.85f, 0.3f);
	glVertex2f(0.8f, 0.3f);
	glVertex2f(0.8f, 0.35f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.75f, 0.4f);
	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.7f, 0.45f);
	glVertex2f(0.65f, 0.45f);
	glVertex2f(0.65f, 0.5f);
    glVertex2f(0.6f, 0.5f);
	glVertex2f(0.6f, 0.55f);
	glVertex2f(0.55f, 0.55f);
    glVertex2f(0.55f, 0.6f);
    glVertex2f(0.0f, 0.6f);

	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f); //yellow

    glVertex2f(0.0f, 0.55f); //left
	glVertex2f(-0.55f, 0.55f);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.45f);
	glVertex2f(-0.65f, 0.45f);
	glVertex2f(-0.65f, 0.4f);
	glVertex2f(-0.7f, 0.4f);
	glVertex2f(-0.7f, 0.35f);
	glVertex2f(-0.75f, 0.35f);
	glVertex2f(-0.75f, 0.3f);
	glVertex2f(-0.8f, 0.3f);
	glVertex2f(-0.8f, 0.25f);
	glVertex2f(-0.85f, 0.25f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-0.9f, 0.2f);
	glVertex2f(-0.9f, -0.2f);
	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.85f, -0.25f);
	glVertex2f(-0.8f, -0.25f);
	glVertex2f(-0.8f, -0.3f);
	glVertex2f(-0.75f, -0.3f);
	glVertex2f(-0.75f, -0.35f);
	glVertex2f(-0.7f, -0.35f);
	glVertex2f(-0.7f, -0.4f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.45f);
	glVertex2f(-0.6f, -0.45f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.55f, -0.5f);
	glVertex2f(-0.55f, -0.55f);
	glVertex2f(-0.5f, -0.55f);

	glVertex2f(0.55f, -0.55f); //right
	glVertex2f(0.55f, -0.5f);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.6f, -0.45f);
	glVertex2f(0.65f, -0.45f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(0.7f, -0.4f);
	glVertex2f(0.7f, -0.35f);
	glVertex2f(0.75f, -0.35f);
	glVertex2f(0.75f, -0.3f);
	glVertex2f(0.8f, -0.3f);
	glVertex2f(0.8f, -0.25f);
	glVertex2f(0.85f, -0.25f);
	glVertex2f(0.85f, -0.2f);
    glVertex2f(0.9f, -0.2f);
	glVertex2f(0.9f, 0.2f);
	glVertex2f(0.85f, 0.2f);
	glVertex2f(0.85f, 0.25f);
	glVertex2f(0.8f, 0.25f);
	glVertex2f(0.8f, 0.3f);
	glVertex2f(0.75f, 0.3f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.7f, 0.35f);
	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.65f, 0.4f);
	glVertex2f(0.65f, 0.45f);
	glVertex2f(0.6f, 0.45f);
    glVertex2f(0.6f, 0.5f);
	glVertex2f(0.55f, 0.5f);
	glVertex2f(0.55f, 0.55f);
    glVertex2f(0.0f, 0.55f);

	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);


	glVertex2f(-0.4f, 0.45f); // left wing
	glVertex2f(-0.55f, 0.45f);
	glVertex2f(-0.55f, 0.4f);
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.6f, 0.35f);
	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.65f, 0.3f);
	glVertex2f(-0.7f, 0.3f);
	glVertex2f(-0.7f, 0.25f);
	glVertex2f(-0.75f, 0.25f);
	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.8f, 0.2f);
	glVertex2f(-0.8f, 0.15f);
	glVertex2f(-0.85f, 0.15f);
	glVertex2f(-0.85f, -0.15f);
	glVertex2f(-0.8f, -0.15f);
	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.75f, -0.2f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.7f, -0.25f);
	glVertex2f(-0.7f, -0.3f);
	glVertex2f(-0.65f, -0.3f);
	glVertex2f(-0.65f, -0.35f);
	glVertex2f(-0.6f, -0.35f);
	glVertex2f(-0.6f, -0.4f);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.55f, -0.45f);
	glVertex2f(-0.4f, -0.45f);
	glVertex2f(-0.4f, -0.5f);


	glVertex2f(0.4f, -0.5f); //right wing
	glVertex2f(0.4f, -0.45f);
	glVertex2f(0.55f, -0.45f);
	glVertex2f(0.55f, -0.4f);
    glVertex2f(0.6f, -0.4f);
	glVertex2f(0.6f, -0.35f);
	glVertex2f(0.65f, -0.35f);
    glVertex2f(0.65f, -0.3f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.7f, -0.25f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.75f, -0.2f);
	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.8f, -0.15f);
	glVertex2f(0.85f, -0.15f);
	glVertex2f(0.85f, 0.15f);
	glVertex2f(0.8f, 0.15f);
	glVertex2f(0.8f, 0.2f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.75f, 0.25f);
	glVertex2f(0.7f, 0.25f);
    glVertex2f(0.7f, 0.3f);
	glVertex2f(0.65f, 0.3f);
	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.6f, 0.35f);
	glVertex2f(0.6f, 0.4f);
	glVertex2f(0.55f, 0.4f);
	glVertex2f(0.55f, 0.45f);
	glVertex2f(0.4f, 0.45f);


	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.4f, 0.45f);
	glVertex2f(-0.4f, 0.15f);
	glVertex2f(-0.2f, 0.15f);
    glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.45f);


    glEnd();


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.45f, 0.4f);
	glVertex2f(-0.45f, 0.2f);
	glVertex2f(-0.4f, 0.2f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.15f, 0.5f);//left ear
	glVertex2f(-0.15f, 0.45f);
	glVertex2f(-0.1f, 0.45f);
	glVertex2f(-0.1f, 0.5f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.1f, 0.5f);//right ear
	glVertex2f(0.1f, 0.45f);
	glVertex2f(0.15f, 0.45f);
	glVertex2f(0.15f, 0.5f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.15f, 0.45f);
	glVertex2f(0.15f, 0.2f);
	glVertex2f(0.4f, 0.2f);
	glVertex2f(0.4f, 0.45f);


    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.2f, 0.2f);
    glVertex2f(0.2f, 0.15f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.4f, 0.2f);

    glEnd();


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.4f, 0.4f);
	glVertex2f(0.4f, 0.2f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.45f, 0.4f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.03f, -0.45f);
	glVertex2f(0.03f, -0.5f);
	glVertex2f(0.3f, -0.5f);
	glVertex2f(0.3f, -0.45f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.1f, -0.45f);
	glVertex2f(0.3f, -0.45f);
	glVertex2f(0.3f, -0.4f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.1f, -0.35f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.25f, -0.4f);
	glVertex2f(0.25f, -0.35f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.15f, -0.3f);
	glVertex2f(0.15f, -0.35f);
	glVertex2f(0.2f, -0.35f);
	glVertex2f(0.2f, -0.3f);

    glEnd();

   glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.3f, -0.45f);
	glVertex2f(-0.3f, -0.5f);
	glVertex2f(-0.03f, -0.5f);
	glVertex2f(-0.03f, -0.45f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.3f, -0.4f);
	glVertex2f(-0.3f, -0.45f);
	glVertex2f(-0.1f, -0.45f);
	glVertex2f(-0.1f, -0.4f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.25f, -0.35f);
	glVertex2f(-0.25f, -0.4f);
	glVertex2f(-0.1f, -0.4f);
	glVertex2f(-0.1f, -0.35f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.2f, -0.3f);
	glVertex2f(-0.2f, -0.35f);
	glVertex2f(-0.15f, -0.35f);
	glVertex2f(-0.15f, -0.3f);

    glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Bat Man");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
