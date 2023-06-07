#include <GL/gl.h>
#include <GL/glut.h>

void display(void) {
    //clear all previous pixel
    glClear(GL_COLOR_BUFFER_BIT);
    //clear background color
    glClearColor(0.0, 0.0, 0.0, 0.0);
    //rgb color-->white 
    glColor3f(1.0, 1.0, 1.0);

    //begin quadrilateral form(4)
    glBegin(GL_QUADS);

    //Trapizoid
    glVertex2f(0.05f, 0.05f);
    glVertex2f(0.35f, 0.05f);
    glVertex2f(0.40f, 0.35f);
    glVertex2f(0.00f, 0.35f);
    glEnd();

    //Pentagon
    glBegin(GL_TRIANGLES);
    glVertex2f(0.5f, 0.05f);
    glVertex2f(0.75f, 0.05f);
    glVertex2f(0.5f, 0.35f);

    glVertex2f(0.5f, 0.35f);
    glVertex2f(0.75f, 0.05f);
    glVertex2f(0.75f, 0.35f);

    glVertex2f(0.5f, 0.35f);
    glVertex2f(0.75f, 0.35f);
    glVertex2f(0.63f, 0.50f);
    glEnd();

    //Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(0.30f, 0.65f);
    glVertex2f(0.60f, 0.65f);
    glVertex2f(0.45f, 0.85f);
    glEnd();
    glFlush();
}

void init(void) {

    //initialize for taking matrix mode
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //size of graph
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("basic");

    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}