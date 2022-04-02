#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

float p=0;
void init(void)
{
    glClearColor(0.5,0.5,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,800.0,0.0,800.0);

}
void circle(GLfloat rx,GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0; i<=100; i++)
    {
        float angle = 2.0f*3.1416f*i/100;
        float x = rx*cosf(angle);
        float y = ry*sinf(angle);
        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void plane()
{
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(p, 640);
    glVertex2f(p+200, 640);
    glVertex2f(p+200, 670);
    glVertex2f(p, 670);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(p, 670);
    glVertex2f(p+40, 670);
    glVertex2f(p+10, 710);
    glVertex2f(p, 710);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(p+80, 670);
    glVertex2f(p+120, 670);
    glVertex2f(p+100, 690);
    glVertex2f(p+60, 690);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(p+80, 650);
    glVertex2f(p+120, 650);
    glVertex2f(p+100, 620);
    glVertex2f(p+60, 620);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(p + 200, 640);
    glVertex2f(p+ 220, 640);
    glVertex2f(p + 200, 670);
    glEnd();

    if(p<=800)
    {
        p = p+0.08;
    }
    else
        p = 0;

}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glutPostRedisplay();
    glColor3f(0.0,0.5,0.9);///sky
    glVertex2f(0,450);
    glVertex2f(800,450);
    glVertex2f(800,800);
    glVertex2f(0,800);
    glEnd();

    plane();

    glColor3f(1.0f, 0.0f, 0.0f);///rainbow1
    circle(110,130,600,450);

    glColor3f(0.6f, 0.6f, 0.0f);///rainbow2
    circle(100,120,600,450);

    glColor3f(1.0f, 0.8f, 0.0f);///rainbow3
    circle(90,110,600,450);

    glColor3f(0.0f, 0.5f, 0.9f);///rainbow4
    circle(80,100,600,450);

    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.0);///grass
    glVertex2f(500,0);
    glVertex2f(800,0);
    glVertex2f(800,450);
    glVertex2f(500,450);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.f);///hill 1
    glVertex2f(0,450);
    glVertex2f(200,450);
    glVertex2f(100,600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.f);///hill 2
    glVertex2f(200,450);
    glVertex2f(400,450);
    glVertex2f(300,600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.f);///hill 3
    glVertex2f(400,450);
    glVertex2f(600,450);
    glVertex2f(500,600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);///hill 4
    glVertex2f(600,450);
    glVertex2f(800,450);
    glVertex2f(700,600);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.2,0.0);///tree1
    glVertex2f(150,0);
    glVertex2f(170,0);
    glVertex2f(170,240);
    glVertex2f(150,240);
    glEnd();

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves1
    circle(50,80,140,300);

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves2
    circle(50,80,180,300);

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves3
    circle(50,80,140,400);

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves4
    circle(50,80,180,400);

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves5
    circle(40,90,160,500);


    glBegin(GL_POLYGON);
    glColor3f(0.4,0.2,0.0);///tree2
    glVertex2f(70,0);
    glVertex2f(90,0);
    glVertex2f(90,240);
    glVertex2f(70,240);
    glEnd();

    glColor3f(0.0f, 0.3f, 0.0f);///tree leaves1
    circle(50,80,60,300);

    glColor3f(0.0f, 0.3f, 0.0f);///tree leaves2
    circle(50,80,100,300);

    glColor3f(0.0f, 0.3f, 0.0f);///tree leaves3
    circle(50,80,50,400);

    glColor3f(0.0f, 0.3f, 0.0f);///tree leaves4
    circle(50,80,100,400);

    glColor3f(0.0f, 0.3f, 0.0f);///tree leaves5
    circle(40,90,80,500);



    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.4f, 0.0f);///road
    glVertex2f(270,0);
    glVertex2f(370,0);
    glVertex2f(500,450);
    glVertex2f(410,450);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.0f);///wall 1
    glVertex2f(450,0);
    glVertex2f(800,0);
    glVertex2f(800,150);
    glVertex2f(450,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.0f);///wall 2
    glVertex2f(500,250);
    glVertex2f(800,250);
    glVertex2f(800,350);
    glVertex2f(500,350);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.2f, 0.0f);///wall 3
    glVertex2f(450,150);
    glVertex2f(500,150);
    glVertex2f(500,350);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.5f, 0.5f);///House
    glVertex2f(600,150);
    glVertex2f(800,150);
    glVertex2f(800,350);
    glVertex2f(600,350);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.5f);///triangle
    glVertex2f(600,350);
    glVertex2f(800,350);
    glVertex2f(700,500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.5,0.5);///window1
    glVertex2f(630,270);
    glVertex2f(670,270);
    glVertex2f(670,330);
    glVertex2f(630,330);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0,0.5,0.5);///window2
    glVertex2f(630,230);
    glVertex2f(670,230);
    glVertex2f(670,170);
    glVertex2f(630,170);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0,0.5,0.5);///window3
    glVertex2f(730,230);
    glVertex2f(770,230);
    glVertex2f(770,170);
    glVertex2f(730,170);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.5,0.5);///window4
    glVertex2f(730,270);
    glVertex2f(770,270);
    glVertex2f(770,330);
    glVertex2f(730,330);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.4,0.2,0.0);///tree3
    glVertex2f(500,150);
    glVertex2f(520,150);
    glVertex2f(520,240);
    glVertex2f(500,240);
    glEnd();

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves1
    circle(70,80,490,300);

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves2
    circle(70,80,530,300);

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves3
    circle(60,80,490,400);

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves4
    circle(60,80,530,400);

    glColor3f(0.0f, 0.4f, 0.0f);///tree leaves5
    circle(40,90,510,500);

    glFlush();
    glutSwapBuffers();
}

int main( int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1500,1500);
    glutCreateWindow("Home");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}


