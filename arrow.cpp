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

    //
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-50, 20);
    glVertex2d(0, 20);
    glVertex2d(0, 100);
    glVertex2d(-50, 100);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-40, 30);
    glVertex2d(-10, 30);
    glVertex2d(-10, 90);
    glVertex2d(-40, 90);
    glEnd();
    //

    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(-80, 70);
    glVertex2d(-25, 140);
    glVertex2d(30, 70);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-55, 80);
    glVertex2d(-25, 120);
    glVertex2d(5, 80);
    glEnd();
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Arrow");

    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}