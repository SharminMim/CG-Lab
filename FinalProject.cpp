#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include <math.h>

///==================================================///
///         Author:1.Sharmin Sultana Mim             ///
///         Id: 201-15-13639                         ///
///         Author:2.Farzana Alam Juthi              ///
///         Id: 201-15-14021                         ///
///         Author:3.Subrina Ferdous Khan            ///
///         Id: 201-15-13751                         ///
///         BSc In CSE                               ///
///         Daffodil International University        ///
///==================================================///



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
    //clear background color
    glClearColor(0.0, 0.0, 0.0, 0.0);
    //initialize for taking matrix mode
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //size of graph
    gluOrtho2D(0.0, 2200.0, 0.0, 2000.0);
}

float bx = 10;
void cloud() {
    glPushMatrix();
    glTranslatef(bx, -10, 0);
    //1st
    glColor3f(1.0, 1.0, 1.0);
    circle(120, 110, 1060, 1850);
    circle(115, 110, 905, 1800);
    circle(120, 110, 1060, 1700);
    //2nd
    glColor3f(1.0, 1.0, 1.0);
    circle(120, 80, 1860, 1850);
    circle(100, 90, 1705, 1800);
    circle(100, 60, 1860, 1750);
    //3rd
    glColor3f(1.0, 1.0, 1.0);
    circle(80, 70, 590, 1550);
    circle(75, 70, 490, 1500);
    circle(75, 70, 560, 1450);
    //4th
    glColor3f(1.0, 1.0, 1.0);
    circle(80, 50, 1590, 1530);
    circle(75, 50, 1490, 1500);
    circle(80, 60, 1560, 1470);


    glPopMatrix();
    bx += .8;
    if (bx > 0) {
        bx = -2200;
    }
    glutPostRedisplay();

}


void bus() {
    glPushMatrix();
    glTranslatef(bx, -10, 0);
    //bus-->starts
   //main box-->
    glColor3f(0.5, 1.0, 0.8);
    glBegin(GL_POLYGON);
    // glVertex2d(200, 700);
     //glVertex2d(200, 800);
    glVertex2d(250, 700);
    glVertex2d(250, 900);
    glVertex2d(600, 900);
    glVertex2d(650, 800);
    glVertex2d(650, 700);
    glEnd();

    //inner-windowbox-->
    glColor3f(0.70, 0.70, 0.70);
    glBegin(GL_POLYGON);
    glVertex2d(320, 780);
    glVertex2d(550, 780);
    glVertex2d(550, 850);
    glVertex2d(320, 850);
    glEnd();

    //bus-door-->
    glColor3f(1.0, 1.0, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(570, 730);
    glVertex2d(595, 730);
    glVertex2d(595, 800);
    glVertex2d(570, 800);
    glEnd();

    //bus-wheel1-->
    glColor3f(0.0, 0.0, 0.0);
    circle(30, 30, 320, 700);

    //bus-wheel-02--> 
    glColor3f(0.0, 0.0, 0.0);
    circle(30, 30, 500, 700);

    //bus-02-->starts
    //main box-->
    glColor3f(0.5, 1.0, 0.9);
    glBegin(GL_POLYGON);
    glVertex2d(700, 700);
    glVertex2d(700, 900);
    glVertex2d(1000, 900);
    glVertex2d(1050, 800);
    glVertex2d(1050, 700);
    glEnd();

    //inner-windowbox-->
    glColor3f(1.0, 1.1, 4.1);
    glBegin(GL_POLYGON);
    glVertex2d(750, 780);
    glVertex2d(950, 780);
    glVertex2d(950, 850);
    glVertex2d(750, 850);
    glEnd();

    //bus-door-->
    glColor3f(1.0, 1.0, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(980, 730);
    glVertex2d(1005, 730);
    glVertex2d(1005, 800);
    glVertex2d(980, 800);
    glEnd();

    //bus-wheel1-->
    glColor3f(0.0, 0.0, 0.0);
    circle(30, 30, 790, 700);
    //bus-wheel-02--> 
    glColor3f(0.0, 0.0, 0.0);
    circle(30, 30, 930, 700);

    glPopMatrix();
    bx += .2;
    if (bx > 0) {
        bx = -2200;
    }
    glutPostRedisplay();
}

void tree() {
    //trees-->starts
    //tree-1
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(100, 800);
    glVertex2d(150, 800);
    glVertex2d(150, 1000);
    glVertex2d(100, 1000);
    glEnd();
    //tree-leaf1
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(70, 1000);
    glVertex2d(190, 1000);
    glVertex2d(130, 1300);
    glEnd();
    //tree leaf-2
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(70, 1090);
    glVertex2d(190, 1090);
    glVertex2d(130, 1300);
    glEnd();

    //tree-2
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(25, 800);
    glVertex2d(60, 800);
    glVertex2d(60, 900);
    glVertex2d(25, 900);
    glEnd();
    //tree-leaf1
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(5, 900);
    glVertex2d(80, 900);
    glVertex2d(44, 1100);
    glEnd();
    //tree leaf-2
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(5, 950);
    glVertex2d(80, 950);
    glVertex2d(44, 1100);
    glEnd();

    //tree-3
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(1850, 800);
    glVertex2d(1900, 800);
    glVertex2d(1900, 1000);
    glVertex2d(1850, 1000);
    glEnd();
    //tree-leaf1
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(1800, 1000);
    glVertex2d(1950, 1000);
    glVertex2d(1875, 1300);
    glEnd();
    //tree-leaf2
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(1800, 1090);
    glVertex2d(1950, 1090);
    glVertex2d(1875, 1300);
    glEnd();

    //tree-4
    glColor3f(0.4, 0.0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(2030, 800);
    glVertex2d(2060, 800);
    glVertex2d(2060, 900);
    glVertex2d(2030, 900);
    glEnd();
    //tree-leaf1
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(2000, 900);
    glVertex2d(2098, 900);
    glVertex2d(2048.5, 1200);
    glEnd();
    //tree-leaf2
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(2000, 980);
    glVertex2d(2098.5, 980);
    glVertex2d(2048.5, 1200);
    glEnd();

    //tree-5
    glColor3f(0.4, 0.0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(2150, 800);
    glVertex2d(2150, 1100);
    glVertex2d(2170, 1100);
    glVertex2d(2170, 800);
    glEnd();
    //tree-leaf1
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(2010, 1100);
    glVertex2d(2160, 1200);
    glVertex2d(2300, 1100);
    glEnd();
    //tree-leaf2
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(2010, 1150);
    glVertex2d(2160, 1250);
    glVertex2d(2300, 1150);
    glEnd();
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(2030, 1200);
    glVertex2d(2180, 1300);
    glVertex2d(2300, 1200);
    glEnd();

    //tree right-6
    glColor3f(0.4, 0.0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(1900, 350);
    glVertex2d(1900, 420);
    glVertex2d(1980, 420);
    glVertex2d(1980, 350);

    glEnd();
    //tree-leaf1
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(1980, 520);
    glVertex2d(2090, 400);
    glVertex2d(1980, 280);

    glEnd();
    //tree-leaf2
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(2020, 520);
    glVertex2d(2190, 400);
    glVertex2d(2020, 280);
    glEnd();

    //tree right-7
    glColor3f(0.4, 0.0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(1900, 100);
    glVertex2d(1900, 160);
    glVertex2d(1980, 160);
    glVertex2d(1980, 100);
    glEnd();
    //tree-leaf1
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(1980, 280);
    glVertex2d(2090, 155);
    glVertex2d(1980, 0);
    glEnd();
    //tree-leaf2
    glColor3f(0, 0.55, 0);
    glBegin(GL_POLYGON);
    glVertex2d(2020, 280);
    glVertex2d(2190, 155);
    glVertex2d(2020, 0);
    glEnd();
    //tree-->ends

}

void field() {
    //field box
    // glColor3f(1.0, 0.8, 0.5);
    glColor3ub(255, 190, 140);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 800);
    glVertex2d(2200, 800);
    glVertex2d(2200, 0);
    glEnd();

    //left road--> starts
    //left-road border
    glColor3f(0.0, 0.3, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 605);
    glVertex2d(55, 605);
    glVertex2d(55, 0);
    glEnd();
    //left-side
    glColor3f(0.0, 0.6, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 600);
    glVertex2d(50, 600);
    glVertex2d(50, 0);
    glEnd();
    //left road--> ends

    //right road--> starts
    //right-road border
    glColor3f(0.0, 0.3, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(1895, 0);
    glVertex2d(1895, 605);
    glVertex2d(2200, 605);
    glVertex2d(2200, 0);
    glEnd();
    //right-side
    glColor3f(0.5, 0.6, 0.2);
    glBegin(GL_POLYGON);
    glVertex2d(1900, 0);
    glVertex2d(1900, 600);
    glVertex2d(2200, 600);
    glVertex2d(2200, 0);
    glEnd();
    //left road--> ends

    //field-->starts
    //field-->border
    glColor3f(0.0, 0.3, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(198, 0);
    glVertex2d(198, 605);
    glVertex2d(1807, 605);
    glVertex2d(1807, 0);
    glEnd();
    //field
    glColor3f(0.0, 0.6, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(200, 0);
    glVertex2d(200, 600);
    glVertex2d(1800, 600);
    glVertex2d(1800, 0);
    glEnd();

    //cricket field border white
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d(700, 160);
    glVertex2d(1200, 160);
    glVertex2d(1200, 300);
    glVertex2d(700, 300);
    glEnd();

    //cricket field green
    glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(705, 170);
    glVertex2d(1195, 170);
    glVertex2d(1195, 290);
    glVertex2d(705, 290);
    glEnd();

    //2nd left border
    glColor3f(1.0f, 1.1f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d(740, 160);
    glVertex2d(745, 160);
    glVertex2d(745, 300);
    glVertex2d(740, 300);
    glEnd();

    //cricket field green
    glColor3f(0.0f, 0.3f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(705, 170);
    glVertex2d(1195, 170);
    glVertex2d(1195, 290);
    glVertex2d(705, 290);
    glEnd();

    //2nd left border
    glColor3f(1.0f, 1.1f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d(740, 160);
    glVertex2d(745, 160);
    glVertex2d(745, 300);
    glVertex2d(740, 300);
    glEnd();
    //2nd right border
    glColor3f(1.0f, 1.1f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1160, 160);
    glVertex2d(1165, 160);
    glVertex2d(1165, 300);
    glVertex2d(1160, 300);
    glEnd();

    //field-->ends
}
void building() {
    //AB1-->starts
    //left-first box
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(200, 800);
    glVertex2d(200, 1300);
    glVertex2d(500, 1300);
    glVertex2d(500, 800);
    glEnd();
    //left-second box
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(230, 800);
    glVertex2d(230, 1250);
    glVertex2d(450, 1250);
    glVertex2d(450, 800);
    glEnd();

    //window-->starts
    //left-box window-1
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(290, 800);
    glVertex2d(290, 950);
    glVertex2d(420, 950);
    glVertex2d(420, 800);
    glEnd();
    //left-box window-2
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(290, 980);
    glVertex2d(290, 1040);
    glVertex2d(420, 1040);
    glVertex2d(420, 980);
    glEnd();
    //left-box window-3
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(290, 1070);
    glVertex2d(290, 1130);
    glVertex2d(420, 1130);
    glVertex2d(420, 1070);
    glEnd();
    //left-box window-4
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(290, 1160);
    glVertex2d(290, 1220);
    glVertex2d(420, 1220);
    glVertex2d(420, 1160);
    glEnd();
    //window-->ends

    //middle-first box
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(500, 800);
    glVertex2d(500, 1300);
    glVertex2d(600, 1210);
    glVertex2d(600, 800);
    glEnd();
    //middle-second box
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(510, 800);
    glVertex2d(510, 1220);
    glVertex2d(590, 1160);
    glVertex2d(590, 800);
    glEnd();

    //right-first box
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(600, 800);
    glVertex2d(600, 1210);
    glVertex2d(900, 1210);
    glVertex2d(900, 800);
    glEnd();
    //right-middle box-1
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(610, 800);
    glVertex2d(610, 880);
    glVertex2d(880, 880);
    glVertex2d(880, 800);
    glEnd();
    //right-middle box-2
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(610, 900);
    glVertex2d(610, 980);
    glVertex2d(880, 980);
    glVertex2d(880, 900);
    glEnd();
    //right-middle box-3
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(610, 1000);
    glVertex2d(610, 1080);
    glVertex2d(880, 1080);
    glVertex2d(880, 1000);
    glEnd();
    //right-middle box-4
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(610, 1100);
    glVertex2d(610, 1180);
    glVertex2d(880, 1180);
    glVertex2d(880, 1100);
    glEnd();

    //right-last box
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(900, 800);
    glVertex2d(900, 1210);
    glVertex2d(1000, 1110);
    glVertex2d(1000, 800);
    glEnd();
    //right-last box-white
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(900, 800);
    glVertex2d(900, 920);
    glVertex2d(1200, 920);
    glVertex2d(1200, 800);
    glEnd();

    //right-last 2 box-white cover
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(900, 800);
    glVertex2d(900, 990);
    glVertex2d(1200, 990);
    glVertex2d(1200, 800);
    glEnd();
    //right-last 2 box-white side
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(1200, 800);
    glVertex2d(1200, 990);
    glVertex2d(1240, 950);
    glVertex2d(1240, 800);
    glEnd();
    //right-last box-1
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(900, 800);
    glVertex2d(900, 880);
    glVertex2d(1200, 880);
    glVertex2d(1200, 800);
    glEnd();
    //right-last box-2
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(900, 890);
    glVertex2d(900, 970);
    glVertex2d(1200, 970);
    glVertex2d(1200, 890);
    glEnd();

    //right-last middle box-white cover
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(900, 990);
    glVertex2d(900, 1060);
    glVertex2d(1100, 1060);
    glVertex2d(1100, 990);
    glEnd();
    //right-last middle box-white side
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(1100, 990);
    glVertex2d(1100, 1060);
    glVertex2d(1130, 1030);
    glVertex2d(1130, 990);
    glEnd();
    //right-last middle box
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(900, 990);
    glVertex2d(900, 1050);
    glVertex2d(1100, 1050);
    glVertex2d(1100, 990);
    glEnd();
    //AB1-->ends
}
void man() {
    //head man1 left 
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(15, 20, 505, 500);
    //man1 neck
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(500, 470);
    glVertex2d(510, 470);
    glVertex2d(510, 500);
    glVertex2d(500, 500);
    glEnd();

    //man1 body
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d(490, 390);
    glVertex2d(530, 390);
    glVertex2d(530, 470);
    glVertex2d(490, 470);
    glEnd();

    //man1 leg left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(490, 390);
    glVertex2d(500, 390);
    glVertex2d(500, 340);
    glVertex2d(490, 340);
    glEnd();

    //man1 leg right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(520, 390);
    glVertex2d(530, 390);
    glVertex2d(530, 320);
    glVertex2d(520, 320);
    glEnd();

    //man1 shoe left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(480, 330);
    glVertex2d(500, 330);
    glVertex2d(500, 340);
    glVertex2d(480, 340);
    glEnd();

    //man1 shoe right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(510, 330);
    glVertex2d(530, 330);
    glVertex2d(530, 320);
    glVertex2d(510, 320);
    glEnd();

    //man1 hand left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(470, 390);
    glVertex2d(480, 400);
    glVertex2d(490, 460);
    glVertex2d(490, 470);
    glEnd();

    //man1 hand right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(510, 390);
    glVertex2d(520, 400);
    glVertex2d(530, 460);
    glVertex2d(530, 470);
    glEnd();

    //head man2 right down
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(15, 20, 1400, 300);
    //man2 neck right down
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1395, 270);
    glVertex2d(1405, 270);
    glVertex2d(1405, 300);
    glVertex2d(1395, 300);
    glEnd();

    //man2 body right down
    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1380, 200);
    glVertex2d(1420, 200);
    glVertex2d(1420, 280);
    glVertex2d(1380, 280);
    glEnd();

    //man2 leg left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1380, 160);
    glVertex2d(1390, 160);
    glVertex2d(1390, 200);
    glVertex2d(1380, 200);
    glEnd();

    //man2 leg right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1410, 160);
    glVertex2d(1420, 160);
    glVertex2d(1420, 200);
    glVertex2d(1410, 200);
    glEnd();

    //man2 shoe left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1380, 150);
    glVertex2d(1400, 150);
    glVertex2d(1380, 170);
    glEnd();

    //man2 shoe right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1410, 150);
    glVertex2d(1430, 150);
    glVertex2d(1410, 170);
    glEnd();

    //man2 hand left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1660, 440);
    glVertex2d(1670, 420);
    glVertex2d(1680, 480);
    glVertex2d(1680, 460);
    glEnd();

    //man2 hand right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1400, 240);
    glVertex2d(1440, 220);
    glVertex2d(1440, 240);
    glVertex2d(1400, 260);
    glEnd();

    //head man3 right up
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(15, 20, 1500, 305);
    //man3 neck friend
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1495, 270);
    glVertex2d(1505, 270);
    glVertex2d(1505, 300);
    glVertex2d(1495, 300);
    glEnd();

    //man3 body friend
    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1480, 200);
    glVertex2d(1520, 200);
    glVertex2d(1520, 280);
    glVertex2d(1480, 280);
    glEnd();

    //man3 leg left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1480, 160);
    glVertex2d(1490, 160);
    glVertex2d(1490, 200);
    glVertex2d(1480, 200);
    glEnd();

    //man3 leg right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1510, 160);
    glVertex2d(1520, 160);
    glVertex2d(1520, 200);
    glVertex2d(1510, 200);
    glEnd();

    //man2 shoe left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1480, 150);
    glVertex2d(1500, 150);
    glVertex2d(1480, 170);
    glEnd();

    //man2 shoe right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1510, 150);
    glVertex2d(1530, 150);
    glVertex2d(1510, 170);
    glEnd();


    //head man4 right up
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(15, 20, 1700, 505);
    //man4 neck right up
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1695, 470);
    glVertex2d(1705, 470);
    glVertex2d(1705, 500);
    glVertex2d(1695, 500);
    glEnd();

    //man4 body right up
    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1680, 400);
    glVertex2d(1720, 400);
    glVertex2d(1720, 480);
    glVertex2d(1680, 480);
    glEnd();

    //man4 leg left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1680, 340);
    glVertex2d(1690, 340);
    glVertex2d(1690, 400);
    glVertex2d(1680, 400);
    glEnd();

    //man4 leg right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1710, 380);
    glVertex2d(1720, 380);
    glVertex2d(1720, 400);
    glVertex2d(1710, 400);
    glEnd();

    //man4 shoe left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1690, 340);
    glVertex2d(1700, 340);
    glVertex2d(1690, 360);
    glEnd();

    //man4 shoe right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1710, 360);
    glVertex2d(1730, 360);
    glVertex2d(1710, 400);
    glEnd();

    //man4 hand left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1660, 440);
    glVertex2d(1670, 420);
    glVertex2d(1680, 480);
    glVertex2d(1680, 460);
    glEnd();

    //man4 hand right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1710, 460);
    glVertex2d(1740, 460);
    glVertex2d(1750, 470);
    glVertex2d(1710, 480);
    glEnd();

    //head man5 
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(15, 20, 400, 305);

    //man1 neck right down
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(395, 270);
    glVertex2d(405, 270);
    glVertex2d(405, 300);
    glVertex2d(395, 300);
    glEnd();

    //man1 body right down
    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(380, 200);
    glVertex2d(420, 200);
    glVertex2d(420, 280);
    glVertex2d(380, 280);
    glEnd();

    //man1 leg left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(380, 160);
    glVertex2d(390, 160);
    glVertex2d(390, 200);
    glVertex2d(380, 200);
    glEnd();

    //man1 leg right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(410, 160);
    glVertex2d(420, 160);
    glVertex2d(420, 200);
    glVertex2d(410, 200);
    glEnd();

    // road man
   //head man1 
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(15, 20, 1900, 305);
    //man1 neck right down
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1895, 270);
    glVertex2d(1905, 270);
    glVertex2d(1905, 300);
    glVertex2d(1895, 300);
    glEnd();

    //man1 body right down
    glColor3f(0.5f, 0.5f, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d(1880, 200);
    glVertex2d(1920, 200);
    glVertex2d(1920, 280);
    glVertex2d(1880, 280);
    glEnd();

    //man1 leg left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1880, 160);
    glVertex2d(1890, 160);
    glVertex2d(1890, 200);
    glVertex2d(1880, 200);
    glEnd();

    //man1 leg right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1910, 160);
    glVertex2d(1920, 160);
    glVertex2d(1920, 200);
    glVertex2d(1910, 200);
    glEnd();

    //head man2
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(15, 20, 1990, 305);

    //man2 neck right down
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1995, 270);
    glVertex2d(2005, 270);
    glVertex2d(1995, 300);
    glVertex2d(2005, 300);
    glEnd();

    //man2 body right down
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1980, 200);
    glVertex2d(2020, 200);
    glVertex2d(2020, 280);
    glVertex2d(1980, 280);
    glEnd();

    //man2 leg left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1980, 160);
    glVertex2d(1990, 160);
    glVertex2d(1990, 200);
    glVertex2d(1980, 200);
    glEnd();

    //man2 leg right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(2010, 160);
    glVertex2d(2020, 160);
    glVertex2d(2020, 200);
    glVertex2d(2010, 200);
    glEnd();

    //head man3 left 
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(15, 20, 1970, 508);

    //man3 body
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1940, 390);
    glVertex2d(1980, 390);
    glVertex2d(1980, 485);
    glVertex2d(1940, 485);
    glEnd();

    //man3 leg left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1940, 390);
    glVertex2d(1950, 390);
    glVertex2d(1950, 340);
    glVertex2d(1940, 340);
    glEnd();

    //man3 leg right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(1970, 390);
    glVertex2d(1980, 390);
    glVertex2d(1980, 340);
    glVertex2d(1970, 340);
    glEnd();


    //head man5 right 
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(15, 20, 100, 305);
    //man1 neck right down
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(95, 270);
    glVertex2d(105, 270);
    glVertex2d(105, 300);
    glVertex2d(95, 300);
    glEnd();

    //man1 body right down
    glColor3f(0.5f, 0.5f, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d(80, 200);
    glVertex2d(120, 200);
    glVertex2d(120, 280);
    glVertex2d(80, 280);
    glEnd();

    //man1 leg left
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(80, 160);
    glVertex2d(90, 160);
    glVertex2d(90, 200);
    glVertex2d(80, 200);
    glEnd();

    //man1 leg right
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(110, 160);
    glVertex2d(120, 160);
    glVertex2d(120, 200);
    glVertex2d(110, 200);
    glEnd();
}

void wall() {
    //wall-->starts
        //left wall-->border
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(195, 795);
    glVertex2d(195, 905);
    glVertex2d(805, 905);
    glVertex2d(805, 795);
    glEnd();
    //left wall
    glColor3f(0.3, 0.2, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(200, 800);
    glVertex2d(200, 900);
    glVertex2d(800, 900);
    glVertex2d(800, 800);
    glEnd();

    //middle wall-->border
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(1095, 795);
    glVertex2d(1095, 905);
    glVertex2d(1405, 905);
    glVertex2d(1405, 795);
    glEnd();
    //middle wall
    glColor3f(0.3, 0.2, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(1100, 800);
    glVertex2d(1100, 900);
    glVertex2d(1400, 900);
    glVertex2d(1400, 800);
    glEnd();

    //right wall-->border
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(1695, 795);
    glVertex2d(1695, 905);
    glVertex2d(2200, 905);
    glVertex2d(2200, 795);
    glEnd();
    //right wall
    glColor3f(0.3, 0.2, 0.1);
    glBegin(GL_POLYGON);
    glVertex2d(1700, 800);
    glVertex2d(1700, 900);
    glVertex2d(2200, 900);
    glVertex2d(2200, 800);
    glEnd();
    //wall-->ends
}

void mosque() {
    //masque-->starts
        //masque-->base line
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(1395, 795);
    glVertex2d(1395, 835);
    glVertex2d(1705, 835);
    glVertex2d(1705, 795);
    glEnd();
    //masque-->base
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(1400, 800);
    glVertex2d(1400, 830);
    glVertex2d(1700, 830);
    glVertex2d(1700, 800);
    glEnd();
    //masque-->body
    glColor3f(0.65, 0.65, 0.65);
    glBegin(GL_POLYGON);
    glVertex2d(1400, 835);
    glVertex2d(1300, 1200);
    glVertex2d(1800, 1200);
    glVertex2d(1700, 835);
    glEnd();
    //masque-->up line
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(1400, 1080);
    glVertex2d(1400, 1120);
    glVertex2d(1700, 1120);
    glVertex2d(1700, 1080);
    glEnd();
    //masque-->door cover square
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(1450, 835);
    glVertex2d(1450, 1000);
    glVertex2d(1650, 1000);
    glVertex2d(1650, 835);
    glEnd();
    //masque-->door cover triangle
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(1450, 1000);
    glVertex2d(1550, 1060);
    glVertex2d(1650, 1000);
    glEnd();
    //masque-->door square
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(1480, 835);
    glVertex2d(1480, 950);
    glVertex2d(1620, 950);
    glVertex2d(1620, 835);
    glEnd();
    //masque-->door triangle
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(1480, 950);
    glVertex2d(1550, 1000);
    glVertex2d(1620, 950);
    glEnd();
    //masque-->top border
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(1275, 1195);
    glVertex2d(1275, 1265);
    glVertex2d(1825, 1265);
    glVertex2d(1825, 1195);
    glEnd();
    //masque-->top
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2d(1290, 1210);
    glVertex2d(1290, 1250);
    glVertex2d(1810, 1250);
    glVertex2d(1810, 1210);
    glEnd();
    //masque-->ends

}

void display(void) {
    //clear all previous pixel
    glClear(GL_COLOR_BUFFER_BIT);

    //sky box
    glBegin(GL_POLYGON);
    glColor3ub(0, 210, 255);
    glVertex2d(0, 800);
    glVertex2d(0, 2000);
    glVertex2d(2200, 2000);
    glVertex2d(2200, 800);
    glEnd();

    //sun
    glColor3f(1, 0.6, 0);
    circle(60, 80, 1000, 1500);
    cloud();
    field();
    building();
    wall();
    mosque();
    man();
    tree();
    bus();

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("School Scenario by Team-10(55-A)");
    glutInitWindowSize(3000, 3000);
    glutInitWindowPosition(200, 200);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}