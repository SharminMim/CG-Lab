#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy) {
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++) {
        float angel = i * 3.1416 / 180;
        float x = rx * cos(angel);
        float y = ry * sin(angel);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}
void init(void) {
    glClearColor(0.0, 0.9, 0.9, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 500, 0, 500);

}

float bx = 10;
double x = 1;
void cloud() {
    glPushMatrix();
    // glTranslatef(bx, 0, 0);
    //1st
    glColor3ub(255, 255, 255);
    circle(x, 30, 460, 460);

    //2nd
    glColor3f(0, 0, 0);
    circle(20, 30, 390, 420);
    circle(15, 20, 405, 420);
    circle(15, 20, 375, 420);

    glPopMatrix();
    // bx += .05;
    // if (bx > 0) {
    //     bx = -500;
    // }        glutPostRedisplay();


}
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glutPostRedisplay();

    //sun
    glColor3f(1, 0, 0);
    circle(25, 30, 175, 450);
    cloud();
    if (x < 500) {
        x += .1;
    }
    else {
        x = 0;
    }
    glFlush();
}
int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("hello");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}