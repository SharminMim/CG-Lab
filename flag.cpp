#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>


float x = 0, y = 16, p, xc, yc;
int r;
void init(void) {

    //initialize for taking matrix mode
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //size of graph
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0);

}

void display(void) {
    //clear all previous pixel
    glClear(GL_COLOR_BUFFER_BIT);
    //clear background color
    glClearColor(0.0, 0.0, 0.0, 0.0);
    //rgb color-->white 
    glColor3f(1.0, 1.0, 1.0);
    //adjust the point size
    glPointSize(5.0);

    //draw outline
    glBegin(GL_POLYGON);

    //Flag
    glColor3f(0.5, 0.5, 1.0);
    glVertex2d(-10, 0);
    glVertex2d(-15, 0);
    glVertex2d(-15, 90);
    glVertex2d(-10, 90);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2d(-10, 40);
    glVertex2d(70, 40);
    glVertex2d(70, 80);
    glVertex2d(-10, 80);
    glEnd();


    //glBegin(GL_POINTS);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    p = 1 - r;
    xc = 30, yc = 60;
    while ((x <= y)) {
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
        glVertex2d(xc + x, yc + y);
        glVertex2d(xc - x, yc - y);
        glVertex2d(xc - x, yc + y);
        glVertex2d(xc + x, yc - y);

        glVertex2d(xc + y, yc + x);
        glVertex2d(xc - y, yc + x);
        glVertex2d(xc + y, yc - x);
        glVertex2d(xc - y, yc - x);
    }
    glEnd();
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("flag");

    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}