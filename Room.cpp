#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.25, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.5, 0.95, 0.0);
    glVertex3f(0.25, 0.75, 0.0);
    glVertex3f(0.75, 0.75, 0.0);
    glEnd();


    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.25, 0.15, 0.0);
    glVertex3f(0.75, 0.15, 0.0);
    glVertex3f(0.75, 0.75, 0.0);
    glVertex3f(0.25, 0.75, 0.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.40, 0.50, 0.0);
    glVertex3f(0.60, 0.50, 0.0);
    glVertex3f(0.60, 0.15, 0.0);
    glVertex3f(0.40, 0.15, 0.0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.27, 0.65, 0.0);
    glVertex3f(0.38, 0.65, 0.0);
    glVertex3f(0.38, 0.50, 0.0);
    glVertex3f(0.27, 0.50, 0.0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.62, 0.65, 0.0);
    glVertex3f(0.73, 0.65, 0.0);
    glVertex3f(0.73, 0.50, 0.0);
    glVertex3f(0.62, 0.50, 0.0);
    glEnd();






    glFlush();
}
void init(void)
{

    glClearColor(0.0, 0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("201-15-13673");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
