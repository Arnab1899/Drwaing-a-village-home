#include <Windows.h>
#include <GL/glut.h>

void init()
{
    //backgraound color and size
    glClearColor(1.0, 0.8, 0.8, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 900, 0.0, 600);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //up most left polygon
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(200, 500);
    glVertex2i(600, 500);
    glVertex2i(700, 350);
    glVertex2i(300, 350);

    glEnd();

    //upper right triangle
    glColor3f(0.6, 0.0, 0.9);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 500);
    glVertex2i(100, 350);
    glVertex2i(300, 350);

    glEnd();

    //single door polygon
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glVertex2i(300, 150);
    glVertex2i(100, 100);

    glEnd();

    //first door
    glColor3f(1.0, 0.0, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(150, 250);
    glVertex2i(250, 250);
    glVertex2i(250, 100);
    glVertex2i(150, 100);

    glEnd();

    //first door lower part
    glColor3f(0.4, 0.9, 0.6);
    glBegin(GL_POLYGON);
    glVertex2i(150, 105);
    glVertex2i(250, 105);
    glVertex2i(250, 100);
    glVertex2i(150, 100);

    glEnd();

    //first door first stairs
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(140, 60);
    glVertex2i(240, 60);
    glVertex2i(250, 100);
    glVertex2i(150, 100);

    glEnd();

    //window polygon
    glColor3f(0.6, 0.0, 0.9);
    glBegin(GL_POLYGON);
    glVertex2i(300, 350);
    glVertex2i(700, 350);
    glVertex2i(700, 150);
    glVertex2i(300, 100);
    glEnd();

    //first window
    glColor3f(1.0, 0.0, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(330, 320);
    glVertex2i(420, 320);
    glVertex2i(420, 230);
    glVertex2i(330, 230);
    glEnd();

    //safety rod
    glColor3f(0.4, 0.9, 0.6);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2i(330, 320);
    glVertex2i(330, 230);

    glVertex2i(340, 320);
    glVertex2i(340, 230);

    glVertex2i(350, 320);
    glVertex2i(350, 230);

    glVertex2i(360, 320);
    glVertex2i(360, 230);

    glVertex2i(370, 320);
    glVertex2i(370, 230);

    glVertex2i(380, 320);
    glVertex2i(380, 230);

    glVertex2i(390, 320);
    glVertex2i(390, 230);

    glVertex2i(400, 320);
    glVertex2i(400, 230);

    glVertex2i(410, 320);
    glVertex2i(410, 230);


    glVertex2i(420, 320);
    glVertex2i(420, 230);

    glVertex2i(330, 252);
    glVertex2i(420, 252);
    glVertex2i(330, 294);
    glVertex2i(420, 294);

    glEnd();

    //second window
    glColor3f(1.0, 0.0, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(580, 320);
    glVertex2i(670, 320);
    glVertex2i(670, 230);
    glVertex2i(580, 230);

    glEnd();

    //safety road
    glColor3f(0.4, 0.9, 0.6);
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2i(580, 320);
    glVertex2i(580, 230);

    glVertex2i(590, 320);
    glVertex2i(590, 230);

    glVertex2i(600, 320);
    glVertex2i(600, 230);

    glVertex2i(610, 320);
    glVertex2i(610, 230);

    glVertex2i(620, 320);
    glVertex2i(620, 230);

    glVertex2i(630, 320);
    glVertex2i(630, 230);

    glVertex2i(640, 320);
    glVertex2i(640, 230);

    glVertex2i(650, 320);
    glVertex2i(650, 230);

    glVertex2i(560, 320);
    glVertex2i(560, 230);

    glVertex2i(570, 320);
    glVertex2i(570, 230);

    glVertex2i(580, 252);
    glVertex2i(670, 252);
    glVertex2i(580, 294);
    glVertex2i(580, 294);

    glEnd();

    //second Door
    glColor3f(1.0, 0.0, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(450, 250);
    glVertex2i(550, 250);
    glVertex2i(550, 100);
    glVertex2i(450, 100);

    glEnd();

    //second door-ist part
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(450, 250);
    glVertex2i(430, 270);
    glVertex2i(430, 100);
    glVertex2i(450, 100);

    glEnd();

    //second door-second part
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(450, 105);
    glVertex2i(550, 105);
    glVertex2i(550, 100);
    glVertex2i(450, 100);

    glEnd();

    //second door-lower part
    glColor3f(0.4, 0.9, 0.6);
    glBegin(GL_POLYGON);
    glVertex2i(450, 105);
    glVertex2i(550, 105);
    glVertex2i(550, 100);
    glVertex2i(450, 100);

    glEnd();

    //second door stairs
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(450, 50);
    glVertex2i(550, 50);
    glVertex2i(555, 100);
    glVertex2i(445, 100);

    glEnd();

glFlush();

}

int main(int arg,char **args)
{
    glutInit(&arg, args);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1000, 600);

    glutCreateWindow("Simple 2D House");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;

}

