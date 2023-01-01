#include <iostream>
#include<stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>


float moveC = 0.0f;
float moveS = 0.0f;
float moveB1 = 0.0f;
float moveB2 = 0.0f;
float speed = 0.02f;



void DrawAllNightComponents()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity();
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);


    ///sky///
    glBegin(GL_POLYGON);

    glVertex2f(38.0f,3.0f);
    glColor3ub(	0, 0, 0);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,3.0f);
    glEnd();

    ///moon///
    glPushMatrix();
glTranslatef(moveS, 0.0f, 0.0f);
    glColor3d(255, 255, 255);
    glTranslatef(30.0, 7.0, 0);
    glutSolidSphere(1.0, 250, 250);
    glPopMatrix();

    ///cloud 1///
    glPushMatrix();

    glTranslatef(moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();


///cloud 2///

    glPushMatrix();

    glTranslatef(moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPopMatrix();


    ///see portion
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 128);

    glVertex2f(38.0f,-19.0f);  /// right-down
    glVertex2f(38.0f,-10.0f); /// right-top
    glVertex2f(-12.0f,-7.0f); /// left-top
    glVertex2f(-12.0f,-19.0f);  /// left-down
    glEnd();


    ///Ground portion
    glBegin(GL_POLYGON);
    glColor3ub(25,128,0);

    glVertex2f(1.0f, -8.0f); /// angle
    glVertex2f(38.0f,-12.0f);  /// right-down
    glVertex2f(38.0f,3.0f); /// right-top
    glVertex2f(-12.0f,3.0f); /// left-top
    glVertex2f(-12.0f,-11.0f);  /// left-down
    glEnd();


//road
    glBegin(GL_POLYGON);
    glColor3ub(72,72,76);

    glVertex2f(6.0f,-8.6f);
    glVertex2f(6.0f,3.0f);
    glVertex2f(5.2f,3.0f);
    glVertex2f(2.0f,-8.2f);
    glEnd();

    // road divider

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(4.2f,-8.5f);
    glVertex2f(5.6f,3.0f);
    glVertex2f(5.5f,3.0f);
    glVertex2f(4.0f,-8.4f);
    glEnd();


///house on right side

    glBegin(GL_POLYGON);
    glColor3ub(47,170,79);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);
    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door right
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

    //right part
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.7,-3);
    glVertex2f(24.7, -.8);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

// 2nd part
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24.8,-1.4);
    glVertex2f(24.8,-3);

    glEnd();


///hill-1
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(-12,3);
    glVertex2f(-7.5,7);
    glVertex2f(-2,3);

    glEnd();


///Hill 2
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-1,3);
    glVertex2f(-0.5,6);
    glVertex2f(4.5,6);
    glVertex2f(5,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-0.5,6);
    glVertex2f(0,7);
    glVertex2f(4,7);
    glVertex2f(4.5,6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(0,7);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(4,7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(2,8.3);
    glEnd();

///hill 3
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(7,3);
    glVertex2f(8,5);
    glVertex2f(13,5);
    glVertex2f(14,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(8,5);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(13,5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(10.5,6.5);
    glEnd();

///hill 4
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(14,3);
    glVertex2f(20,7);
    glVertex2f(29,3);
    glEnd();

///hill 5
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(29,3);
    glVertex2f(29.5,4);
    glVertex2f(30.5,4);
    glVertex2f(31,3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(29.5,4);
    glVertex2f(30,4.5);
    glVertex2f(30.5,4);
    glEnd();

///hill 6
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(31,3);
    glVertex2f(32.5,4.5);
    glVertex2f(35,3);
    glEnd();



///hill 7

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33,3);
    glVertex2f(33.5,4.5);
    glVertex2f(37.5,4.5);
    glVertex2f(38,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33.5,4.5);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(37.5,4.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(35.5,5.5);
    glEnd();


///tree structure///
//left upper side

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();


    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

// left side tree
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();



    /// right side tree body
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(31.5,-1);
    glVertex2f(31.5,-6.5);
    glVertex2f(31,-7);
    glVertex2f(32.5,-6.5);
    glVertex2f(32.5,-1);
    glEnd();


    ///right side head

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(30.5, -1.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(31.4, -0.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(32.5, -.4, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(33.5, -1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

/// new

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(5.3,-4+.5*i);
        glVertex2f(6.4,-2+.5*i);
        glVertex2f(7.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(6.5,-4);
    glVertex2f(6.5,-5);
    glVertex2f(6.3,-5);
    glVertex2f(6.3,-4);
    glEnd();



///5th  left side

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(2.3,-4+.5*i);
        glVertex2f(0.4,-2+.5*i);
        glVertex2f(-1.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(0.5,-4);
    glVertex2f(0.5,-5);
    glVertex2f(0.3,-5);
    glVertex2f(0.3,-4);
    glEnd();


///6th  left side

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(4,-2+.5*i);
        glVertex2f(2.75,-0+.5*i);
        glVertex2f(1.5,-2+.5*i);
        glEnd();


    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(3,-2);
    glVertex2f(3,-4);
    glVertex2f(2.75,-4);
    glVertex2f(2.75,-2);

    glEnd();

// tree end

///boat-1 speed left to right
    glPushMatrix();
    glTranslatef(moveB1, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(1.0f, -14.0f);
    glVertex2f(1.50f, -13.0f);
    glVertex2f(-2.0f, -13.0f);
    glVertex2f(-3.0f, -14.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-3.0f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-3.0f, -14.5f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-4.5f, -13.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(3.5f, -13.7f);
    glVertex2f(2.0f, -14.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(1.5f, -13.0f);
    glVertex2f(1.0f, -14.0f);

    glEnd();

    glPopMatrix();



    ///boat-2 motion right to left
    glPushMatrix();
    glTranslatef(moveB2, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(21.0f, -16.5f);
    glVertex2f(17.50f, -16.5f);
    glVertex2f(18.0f, -17.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(17.0f, -18.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,99,71);
    glVertex2f(20.5f, -16.5f);
    glVertex2f(21.0f, -14.5f);
    glVertex2f(18.5f, -14.5f);
    glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(19.8f, -14.5f);
    glVertex2f(19.8f, -14.0f);
    glVertex2f(19.7f, -14.0f);
    glVertex2f(19.7f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -18.0f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(15.5f, -17.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(23.5f, -17.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(18.0f, -17.5f);
    glVertex2f(17.5f, -16.5f);
    glEnd();

    glPopMatrix();

    //end
    glPopMatrix();
    glutSwapBuffers();
}


void DrawAllComponents()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity();
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);


    ///sky///
    glBegin(GL_POLYGON);

    glVertex2f(38.0f,3.0f);
    glColor3ub(115,160,228);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,3.0f);
    glEnd();

    ///sun///
    glPushMatrix();
glTranslatef(moveS, 0.0f, 0.0f);
    glColor3d(255,0,0);
    glTranslatef(30.0, 7.0, 0);
    glutSolidSphere(1.0, 250, 250);
    glPopMatrix();

    ///cloud 1///
    glPushMatrix();

    glTranslatef(moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();


///cloud 2///

    glPushMatrix();

    glTranslatef(moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPopMatrix();




    ///see portion
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(65,105,225);

    glVertex2f(38.0f,-19.0f);  /// right-down
    glVertex2f(38.0f,-10.0f); /// right-top
    glVertex2f(-12.0f,-7.0f); /// left-top
    glVertex2f(-12.0f,-19.0f);  /// left-down
    glEnd();


    ///Ground portion
    glBegin(GL_POLYGON);
    glColor3ub(25,128,0);

    glVertex2f(1.0f, -8.0f); /// angle
    glVertex2f(38.0f,-12.0f);  /// right-down
    glVertex2f(38.0f,3.0f); /// right-top
    glVertex2f(-12.0f,3.0f); /// left-top
    glVertex2f(-12.0f,-11.0f);  /// left-down
    glEnd();


//road
    glBegin(GL_POLYGON);
    glColor3ub(72,72,76);

    glVertex2f(6.0f,-8.6f);
    glVertex2f(6.0f,3.0f);
    glVertex2f(5.2f,3.0f);
    glVertex2f(2.0f,-8.2f);
    glEnd();

    // road divider

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(4.2f,-8.5f);
    glVertex2f(5.6f,3.0f);
    glVertex2f(5.5f,3.0f);
    glVertex2f(4.0f,-8.4f);
    glEnd();


///house on right side

    glBegin(GL_POLYGON);
    glColor3ub(47,170,79);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);
    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door right
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

    //right part
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.7,-3);
    glVertex2f(24.7, -.8);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

// 2nd part
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24.8,-1.4);
    glVertex2f(24.8,-3);

    glEnd();



///hill-1
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(-12,3);
    glVertex2f(-7.5,7);
    glVertex2f(-2,3);

    glEnd();


///Hill 2
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-1,3);
    glVertex2f(-0.5,6);
    glVertex2f(4.5,6);
    glVertex2f(5,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-0.5,6);
    glVertex2f(0,7);
    glVertex2f(4,7);
    glVertex2f(4.5,6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(0,7);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(4,7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(2,8.3);
    glEnd();

///hill 3
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(7,3);
    glVertex2f(8,5);
    glVertex2f(13,5);
    glVertex2f(14,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(8,5);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(13,5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(10.5,6.5);
    glEnd();

///hill 4
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(14,3);
    glVertex2f(20,7);
    glVertex2f(29,3);
    glEnd();

///hill 5
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(29,3);
    glVertex2f(29.5,4);
    glVertex2f(30.5,4);
    glVertex2f(31,3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(29.5,4);
    glVertex2f(30,4.5);
    glVertex2f(30.5,4);
    glEnd();

///hill 6
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(31,3);
    glVertex2f(32.5,4.5);
    glVertex2f(35,3);
    glEnd();



///hill 7

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33,3);
    glVertex2f(33.5,4.5);
    glVertex2f(37.5,4.5);
    glVertex2f(38,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(33.5,4.5);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(37.5,4.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(35.5,5.5);
    glEnd();


///tree structure///
//left upper side

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();


    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

// left side tree
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();



    /// right side tree body
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(31.5,-1);
    glVertex2f(31.5,-6.5);
    glVertex2f(31,-7);
    glVertex2f(32.5,-6.5);
    glVertex2f(32.5,-1);
    glEnd();


    ///right side head

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(30.5, -1.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(31.4, -0.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(32.5, -.4, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(33.5, -1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

/// new

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(5.3,-4+.5*i);
        glVertex2f(6.4,-2+.5*i);
        glVertex2f(7.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(6.5,-4);
    glVertex2f(6.5,-5);
    glVertex2f(6.3,-5);
    glVertex2f(6.3,-4);
    glEnd();

///5th  left side

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(2.3,-4+.5*i);
        glVertex2f(0.4,-2+.5*i);
        glVertex2f(-1.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(0.5,-4);
    glVertex2f(0.5,-5);
    glVertex2f(0.3,-5);
    glVertex2f(0.3,-4);
    glEnd();


///6th  left side

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(4,-2+.5*i);
        glVertex2f(2.75,-0+.5*i);
        glVertex2f(1.5,-2+.5*i);
        glEnd();


    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(3,-2);
    glVertex2f(3,-4);
    glVertex2f(2.75,-4);
    glVertex2f(2.75,-2);

    glEnd();

// tree end

///boat-1 speed left to right
    glPushMatrix();
    glTranslatef(moveB1, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(1.0f, -14.0f);
    glVertex2f(1.50f, -13.0f);
    glVertex2f(-2.0f, -13.0f);
    glVertex2f(-3.0f, -14.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-3.0f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-3.0f, -14.5f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-4.5f, -13.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(3.5f, -13.7f);
    glVertex2f(2.0f, -14.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(1.5f, -13.0f);
    glVertex2f(1.0f, -14.0f);

    glEnd();

    glPopMatrix();



    ///boat-2 motion right to left
    glPushMatrix();
    glTranslatef(moveB2, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(21.0f, -16.5f);
    glVertex2f(17.50f, -16.5f);
    glVertex2f(18.0f, -17.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(17.0f, -18.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,99,71);
    glVertex2f(20.5f, -16.5f);
    glVertex2f(21.0f, -14.5f);
    glVertex2f(18.5f, -14.5f);
    glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(19.8f, -14.5f);
    glVertex2f(19.8f, -14.0f);
    glVertex2f(19.7f, -14.0f);
    glVertex2f(19.7f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -18.0f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(15.5f, -17.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(23.5f, -17.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(18.0f, -17.5f);
    glVertex2f(17.5f, -16.5f);
    glEnd();

    glPopMatrix();


    //end
    glPopMatrix();
    glutSwapBuffers();
}

void front_page()
{
    char text[120];

        sprintf(text, "UNIVERSITY OF INFORMATION TECHNOLOGY & SCIENCE",5.00,8.00);
    glColor3f(0, 1, 0);
    glRasterPos2f( -35 , 55 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text, "Final Project Presentation",5.00,8.00);
    glColor3f(1, 1, 0);
    glRasterPos2f( -20 , 45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

        sprintf(text, "NAME-Tanvir Ahammed",5.00,8.00);
    glColor3f(0.0616, 0.375, 0.880);
    glRasterPos2f( -20 , 35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "ID-1914551067",5.00,8.00);
    glColor3f(0.0616, 0.375, 0.880);
    glRasterPos2f( -20 , 30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "DEPARTMENT OF CSE",5.00,8.00);
    glColor3f(0.0616, 0.375, 0.880);
    glRasterPos2f( -20 , 25 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "SUBMITTED TO-",5.00,8.00);
    glColor3f(0.880, 0.233, 0.0176);
    glRasterPos2f( -20 , 17 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "SALIM SHADMAN ANKUR",5.00,8.00);
    glColor3f(0.880, 0.233, 0.0176);
    glRasterPos2f( -10 , 12 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "PRESS 'd' FOR DAY MODE",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "PRESS 'n' FOR NIGHT MODE",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , -5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text, "PRESS 'f' FOR FRONT WINDOW",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , -10 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

     sprintf(text, "PRESS 's' FOR STOPPPING THE MOVEMENT OF THE BOAT",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , -15 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text, "PRESS 'r' FOR ENABLEING THE MOVEMENT OF THE BOAT",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , -20 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }


}



void display()
{
   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(1,1,1,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-70,70,-50,50);
    //glMatrixMode( GL_MODELVIEW );
    //glLoadIdentity();
    glPushMatrix();
    front_page();
    glEnd();
    glPopMatrix();
     glFlush();
    glutSwapBuffers();



}




void display_night(void)
{
    DrawAllNightComponents();
    glFlush ();
}



void display_day(void)
{
    DrawAllComponents();
    glFlush ();
}


void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 's'://stops
        speed = 0.0f;
        break;
    case 'r'://runs
        speed = 0.02f;
        break;
    case  'd':
            glutDestroyWindow(1);
            glutInitWindowSize(1300, 700);

            glutCreateWindow(" Village Scenery");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display_day);
            break;

        case 'n':
            glutDestroyWindow(1);
            glutInitWindowSize(1300, 700);

            glutCreateWindow(" Village Scenery");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display_night);
            break;

        case 'f':
            glutDestroyWindow(1);
            glutInitWindowSize(1300, 700);

            glutCreateWindow("Village Scenery-night");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);
            break;


        glutPostRedisplay();
    }
}


void updateC(int value)
{

    if(moveC > +36)
    {
        moveC = -38;
    }
    moveC += 0.15;

    glutTimerFunc(20, updateC, 0);
    glutPostRedisplay();
}


void updateS(int value)
{

    if(moveS > +10)
    {
        moveS = -48;
    }
    moveS += 0.05;

    glutTimerFunc(20, updateS, 0);
    glutPostRedisplay();
}


void updateB1(int value)
{

    moveB1 += speed;
    if(moveB1 > 38)
    {
        moveB1 = -38;
    }

//   moveB1 += 0.17;

    glutTimerFunc(20, updateB1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}



void updateB2(int value)
{


    if(moveB2 < -36)
    {
        moveB2 = +38;
    }
    //Notify GLUT that the display has changed

    moveB2 -= 0.13;

    glutTimerFunc(20, updateB2, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}




void handleMouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON)
    {
        speed += 0.5f;
    }


    else if (button == GLUT_RIGHT_BUTTON)
    {
        speed -= 0.05f;
    }
    glutPostRedisplay();
}


void init()
{

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(1300, 700);
    //glutInitWindowPosition(100,100);
    glutCreateWindow(" Village Scenery ");
    init();

    glutTimerFunc(20, updateC, 1);    // cloud speed
    glutTimerFunc(20, updateB1, 0); //Boat 1
    glutTimerFunc(20, updateB2, 0);//Boat 2
    glutTimerFunc(20, updateS, 0); //sun

    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutDisplayFunc(display);

    glutDisplayFunc(display_night);

    glutMainLoop();
    return 0;
}
