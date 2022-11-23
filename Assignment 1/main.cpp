#include <windows.h>
#include <GL/glut.h>

void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


//Flag
glBegin(GL_QUADS);
glColor3ub(153,0,153);
glVertex2f(.5,.25);
glVertex2f(.5,.33);
glVertex2f(-.25,.33);
glVertex2f(-.25,.25);

glColor3ub(0,51,204);
glVertex2f(.5,.33);
glVertex2f(.5,.41);
glVertex2f(-.25,.41);
glVertex2f(-.25,.33);

glColor3ub(0,153,51);
glVertex2f(.5,.41);
glVertex2f(.5,.5);
glVertex2f(-.25,.5);
glVertex2f(-.25,.41);

glColor3ub(255,204,0);
glVertex2f(.5,.5);
glVertex2f(.5,.58);
glVertex2f(-.25,.58);
glVertex2f(-.25,.5);

glColor3ub(255,102,0);
glVertex2f(.5,.58);
glVertex2f(.5,.66);
glVertex2f(-.25,.66);
glVertex2f(-.25,.58);

glColor3ub(255,0,0);
glVertex2f(.5,.66);
glVertex2f(.5,.75);
glVertex2f(-.25,.75);
glVertex2f(-.25,.66);

//stand
glColor3ub(128,128,128);
glVertex2f(-.25,.8);
glVertex2f(-.28,.8);
glVertex2f(-.28,-.58);
glVertex2f(-.25,-.58);
glEnd();

//triangle
glBegin(GL_TRIANGLES);
glColor3ub(128,128,128);
glVertex2f(-.28,.8);
glVertex2f(-.25,.8);
glVertex2f(-.265,.85);
glEnd();

//Polygon
glBegin(GL_POLYGON);
glColor3ub(153,102,51);
glVertex2f(-.35,-.58);
glVertex2f(-.4,-.65);
glVertex2f(-.4,-.7);
glVertex2f(-.13,-.7);
glVertex2f(-.13,-.65);
glVertex2f(-.18,-.58);
glVertex2f(-.25,-.58);
glVertex2f(-.28,-.58);
glEnd();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Md. Rayhan-ul-fardous");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
