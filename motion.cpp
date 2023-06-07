// #include <GL/gl.h>
// #include <GL/glut.h>
// double x = 0;
// void display(void)
// {
//     glutPostRedisplay();
//     glClear(GL_COLOR_BUFFER_BIT);

//     glBegin(GL_POLYGON);
//     glColor3f(1.0, 0.25, 1.0);

//     glVertex2d(x, 180);
//     glVertex2d(x + 25, 180);
//     glVertex2d(x + 25, 220);
//     glVertex2d(x, 220);
//     glEnd();
//     if (x < 400) {
//         x = x + .1;
//     }
//     else {
//         x = 0;
//     }



//     glFlush();
// }
// void init(void)
// {

//     glClearColor(0.0, 0.0, 0.0, 0.0);

//     glMatrixMode(GL_PROJECTION);
//     glLoadIdentity();
//     gluOrtho2D(0, 400, 0, 400);
// }

// int main(int argc, char** argv)
// {
//     glutInit(&argc, argv);
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//     glutInitWindowSize(400, 400);
//     glutInitWindowPosition(100, 100);
//     glutCreateWindow("201-15-13673");
//     init();
//     glutDisplayFunc(display);
//     glutMainLoop();
//     return 0;
// }

