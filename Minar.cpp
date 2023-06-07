#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>


int x, y, p, xc, yc, r;
void init(void) {

    //initialize for taking matrix mode
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //size of graph
    gluOrtho2D(-100.0, 100.0, 0.0, 200.0);

}

void display(void) {
    //clear all previous pixel
    glClear(GL_COLOR_BUFFER_BIT);
    //clear background color
    glClearColor(0.0, 0.0, 0.0, 0.0);
    //rgb color-->white 
    glColor3f(1.0, 1.0, 1.0);

    r = 35;
    x = 0;
    y = r;
    p = 1 - r;

    while ((x < y)) {
        if (p < 0) {
            x = x + 1;
            y = y;
            p = p + (2 * x) + 1;
        }
        else {
            x = x + 1;
            y = y - 1;
            p = p + (2 * x) + 1 - (2 * y);
        }

        xc = 0;
        yc = 100;

        glColor3f(0.70, 0.0, 0.0);
        glBegin(GL_POLYGON);
        glVertex2d(xc + x, yc + y);
        glVertex2d(xc - x, yc + y);
        glVertex2d(xc + x, yc - y);
        glVertex2d(xc - x, yc - y);

        glVertex2d(xc + y, yc + x);
        glVertex2d(xc - y, yc + x);
        glVertex2d(xc + y, yc - x);
        glVertex2d(xc - y, yc - x);
    }
    glEnd();

    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-25, 50);
    glVertex2d(-25, 150);
    glVertex2d(-30, 150);
    glVertex2d(-30, 50);
    glEnd();

    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-5, 50);
    glVertex2d(-5, 150);
    glVertex2d(0, 150);
    glVertex2d(0, 50);
    glEnd();

    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(20, 50);
    glVertex2d(20, 150);
    glVertex2d(25, 150);
    glVertex2d(25, 50);
    glEnd();
    //
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-40, 50);
    glVertex2d(-40, 150);
    glVertex2d(-65, 150);
    glVertex2d(-65, 50);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-45, 50);
    glVertex2d(-45, 145);
    glVertex2d(-60, 145);
    glVertex2d(-60, 50);
    glEnd();
    //
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-70, 50);
    glVertex2d(-70, 120);
    glVertex2d(-95, 120);
    glVertex2d(-95, 50);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-75, 50);
    glVertex2d(-75, 115);
    glVertex2d(-90, 115);
    glVertex2d(-90, 50);
    glEnd();
    //
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(40, 50);
    glVertex2d(40, 150);
    glVertex2d(65, 150);
    glVertex2d(65, 50);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(45, 50);
    glVertex2d(45, 145);
    glVertex2d(60, 145);
    glVertex2d(60, 50);
    glEnd();
    //
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(70, 50);
    glVertex2d(70, 120);
    glVertex2d(95, 120);
    glVertex2d(95, 50);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(75, 50);
    glVertex2d(75, 115);
    glVertex2d(90, 115);
    glVertex2d(90, 50);
    glEnd();
    //

    //
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-30, 150);
    glVertex2d(-55, 180);
    glVertex2d(-50, 180);
    glVertex2d(-25, 150);
    glEnd();

    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-5, 150);
    glVertex2d(-30, 180);
    glVertex2d(-25, 180);
    glVertex2d(0, 150);
    glEnd();

    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(20, 150);
    glVertex2d(-5, 180);
    glVertex2d(0, 180);
    glVertex2d(25, 150);
    glEnd();
    //
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-50, 170);
    glVertex2d(-65, 180);
    glVertex2d(0, 180);
    glVertex2d(5, 170);
    glEnd();
    //
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-100, 40);
    glVertex2d(-100, 60);
    glVertex2d(100, 60);
    glVertex2d(100, 40);
    glEnd();

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Sahid Minar");

    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}