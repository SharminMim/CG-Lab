#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

float x = 0, y = 50, p, xc, yc;
int r;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    //initialize for taking matrix mode
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //size of graph
    gluOrtho2D(-250, 250, -250, 250);

}

void display(void) {
    //clear all previous pixel
    glClear(GL_COLOR_BUFFER_BIT);

    glEnd();

    glColor3f(0.0, 1.0, 0.0);

    //draw circle points
    glBegin(GL_POINTS);
    p = 1 - r;
    xc = 0, yc = 30;
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
        glVertex3f(xc + x, yc + y, 0.0);
        glVertex3f(xc - x, yc - y, 0.0);
        glVertex3f(xc - x, yc + y, 0.0);
        glVertex3f(xc + x, yc - y, 0.0);

        glVertex3f(xc + y, yc + x, 0.0);
        glVertex3f(xc - y, yc + x, 0.0);
        glVertex3f(xc + y, yc - x, 0.0);
        glVertex3f(xc - y, yc - x, 0.0);
    }
    glEnd();
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("circle");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}