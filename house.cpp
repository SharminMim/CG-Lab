#include <GL/gl.h>
#include <GL/glut.h>

void init(void) {

    //initialize for taking matrix mode
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //size of graph
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);

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

    //House
    glColor3f(0.0, 1.0, 0.0);
    glVertex2d(100, 0);
    glVertex2d(300, 0);
    glVertex2d(300, 200);
    glVertex2d(100, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2d(100, 200);
    glVertex2d(300, 200);
    glVertex2d(200, 300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2d(170, 0);
    glVertex2d(230, 0);
    glVertex2d(230, 120);
    glVertex2d(170, 120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, .0, 1.0);
    glVertex2d(120, 80);
    glVertex2d(160, 80);
    glVertex2d(160, 120);
    glVertex2d(120, 120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, .0, 1.0);
    glVertex2d(250, 80);
    glVertex2d(290, 80);
    glVertex2d(290, 120);
    glVertex2d(250, 120);
    glEnd();

    glFlush();
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("house");

    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}