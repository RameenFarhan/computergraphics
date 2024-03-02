#include <iostream>
using namespace std;
#include <stdlib.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<windows.h>
#include<MMSystem.h>


int main2()
{
    PlaySound(TEXT("2.wav") , NULL, SND_SYNC);
}



void initRendering() {
glEnable(GL_DEPTH_TEST);



}



void handleResize(int w, int h) {
glViewport(0, 0, w, h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}
float _angle = 0.0;
float _cameraAngle = 0.0;
float _translate=-7.0;
float __translate =-7.0;
float _ang_tri = 0.0;
float _cd1=-8.0;
float __cd1=-6.0;
float _pl1 =-8.0;



void bridge(){
glBegin(GL_QUADS); //piller 1

    glColor3ub(50.0f, 66.0f, 55.0f);
    glVertex2f(2.0,-1.5);
    glVertex2f(2.0,-3.0);
    glVertex2f(2.5,-3.0);
    glVertex2f(2.5,-1.5);



	glEnd();  // end


	glBegin(GL_POLYGON);
	glColor3ub(0.0f, 0.0f, 0.0f);
    glVertex2f(2.0,-2.7);
    glVertex2f(1.8,-2.7);
    glVertex2f(1.8,-3.1);
    glVertex2f(2.7,-3.1);
    glVertex2f(2.7,-2.7);
    glVertex2f(2.5,-2.7);

     glEnd();  // end




	 glBegin(GL_QUADS); //piller 2

    glColor3ub(50.0f, 66.0f, 55.0f);
    glVertex2f(-2.0,-1.5);
    glVertex2f(-2.0,-3.0);
    glVertex2f(-2.5,-3.0);
    glVertex2f(-2.5,-1.5);



	glEnd();  // end


	glBegin(GL_POLYGON);
	glColor3ub(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.0,-2.7);
    glVertex2f(-1.8,-2.7);
    glVertex2f(-1.8,-3.1);
    glVertex2f(-2.7,-3.1);
    glVertex2f(-2.7,-2.7);
    glVertex2f(-2.5,-2.7);

     glEnd();  // end





	 glBegin(GL_QUADS); //piller 3

    glColor3ub(50.0f, 66.0f, 55.0f);
    glVertex2f(-4.0,-1.5);
    glVertex2f(-4.0,-3.0);
    glVertex2f(-4.5,-3.0);
    glVertex2f(-4.5,-1.5);



	glEnd();  // end


	glBegin(GL_POLYGON);
    glColor3ub(00.0f, 0.0f, 0.0f);
    glVertex2f(-4.5,-2.7);
    glVertex2f(-4.7,-2.7);
    glVertex2f(-4.7,-3.1);
    glVertex2f(-3.8,-3.1);
    glVertex2f(-3.8,-2.7);
    glVertex2f(-4.0,-2.7);

     glEnd();  // end




	 glBegin(GL_QUADS); //piller 4

    glColor3ub(50.0f, 66.0f, 55.0f);
    glVertex2f(4.0,-1.5);
    glVertex2f(4.0,-3.0);
    glVertex2f(4.5,-3.0);
    glVertex2f(4.5,-1.5);



	glEnd();  // end


	glBegin(GL_POLYGON);
	glColor3ub(0.0f, 0.0f, 0.0f);
    glVertex2f(4.5,-2.7);
    glVertex2f(4.7,-2.7);
    glVertex2f(4.7,-3.1);
    glVertex2f(3.8,-3.1);
    glVertex2f(3.8,-2.7);
    glVertex2f(4.0,-2.7);

     glEnd();  // end


	//bridge upper road side line
		glBegin(GL_QUADS);
	glColor3ub(50.0f, 66.0f, 55.0f);
	glVertex2f(10.0f,-1.3f);
	glVertex2f(10.0f,-1.350f);
	glVertex2f(-10.0f,-1.350f);
	glVertex2f(-10.0f,-1.3f);

    glEnd();  // end



		//bridge lower road side line
		glBegin(GL_QUADS);
	glColor3ub(50.0f, 66.0f, 55.0f);
	glVertex2f(10.0f,-1.5f);
	glVertex2f(10.0f,-1.550f);
	glVertex2f(-10.0f,-1.550f);
	glVertex2f(-10.0f,-1.5f);

    glEnd();  // end


    //bridge middle part
	glBegin(GL_LINES);
	glColor3ub(50.0f, 66.0f, 55.0f);
	glVertex2f(-10.0f,-1.3f);
	glVertex2f(-9.0f,-1.5f);
    glVertex2f(-8.0f,-1.5f);
    glVertex2f(-7.0f,-1.3f);
    glVertex2f(-6.0f,-1.3f);
	glVertex2f(-5.0f,-1.5f);
	glVertex2f(-4.0f,-1.5f);
	glVertex2f(-3.0f,-1.3f);
    glVertex2f(-2.0f,-1.3f);
	glVertex2f(-1.0f,-1.5f);
	glVertex2f(0.0f,-1.5f);
	glVertex2f(1.0f,-1.3f);
    glVertex2f(2.0f,-1.3f);
	glVertex2f(3.0f,-1.5f);
	glVertex2f(4.0f,-1.5f);
	glVertex2f(5.0f,-1.3f);
    glVertex2f(6.0f,-1.3f);
	glVertex2f(7.0f,-1.5f);
	glVertex2f(8.0f,-1.5f);
	glVertex2f(9.0f,-1.3f);
	glVertex2f(10.0f,-1.3f);


    glEnd();  // end


	}

	void train(){


	//train

        //train part 1
	   // train door glass

	   glPushMatrix();
 glTranslatef(_cd1,0.0,0.0);
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(2.8f, -1.2f);
        glVertex2f(2.725f, -1.2f);
        glVertex2f(2.725f, -1.0f);
        glVertex2f(2.8f, -1.0f);
    glEnd();


     // train door glass
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(2.825f, -1.2f);
        glVertex2f(2.885f, -1.2f);
        glVertex2f(2.885f, -1.0f);
        glVertex2f(2.825f, -1.0f);
    glEnd();


      // train door
   glBegin(GL_QUADS);
        glColor3ub(35.0f, 148.0f, 35.0f);
        glVertex2f(2.9f, -1.375f);
        glVertex2f(2.7f, -1.375f);
        glVertex2f(2.7f, -0.90f);
        glVertex2f(2.9f, -0.90f);
    glEnd();



    //train window

      glBegin(GL_QUADS);
        glColor3ub(245,230, 66);
        glVertex2f(2.650f, -1.2f);
        glVertex2f(2.3f, -1.2f);
        glVertex2f(2.3f, -1.0f);
        glVertex2f(2.650f, -1.0f);
    glEnd();








       // train door glass 2
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(2.1f, -1.2f);
        glVertex2f(2.025f, -1.2f);
        glVertex2f(2.025f, -1.0f);
        glVertex2f(2.1f, -1.0f);
    glEnd();


     // train door glass 2
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(2.125f, -1.2f);
        glVertex2f(2.185f, -1.2f);
        glVertex2f(2.185f, -1.0f);
        glVertex2f(2.125f, -1.0f);
    glEnd();
    glFlush();  // Render now

      // train door 2
   glBegin(GL_QUADS);
        glColor3ub(35.0f, 148.0f, 35.0f);
        glVertex2f(2.2f, -1.375f);
        glVertex2f(2.0f, -1.375f);
        glVertex2f(2.0f, -0.90f);
        glVertex2f(2.2f, -0.90f);
    glEnd();




    //train window 2

      glBegin(GL_QUADS);
        glColor3ub(245, 230, 66);
        glVertex2f(1.950f, -1.2f);
        glVertex2f(1.6f, -1.2f);
        glVertex2f(1.6f, -1.0f);
        glVertex2f(1.950f, -1.0f);
    glEnd();






     // train door glass 3
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(1.4f, -1.2f);
        glVertex2f(1.325f, -1.2f);
        glVertex2f(1.325f, -1.0f);
        glVertex2f(1.4f, -1.0f);
    glEnd();


     // train door glass 3
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(1.425f, -1.2f);
        glVertex2f(1.485f, -1.2f);
        glVertex2f(1.485f, -1.0f);
        glVertex2f(1.425f, -1.0f);
    glEnd();


      // train door 3
   glBegin(GL_QUADS);
        glColor3ub(35.0f, 148.0f, 35.0f);
        glVertex2f(1.5f, -1.375f);
        glVertex2f(1.3f, -1.375f);
        glVertex2f(1.3f, -0.90f);
        glVertex2f(1.5f, -0.90f);
    glEnd();




    //train window 3

      glBegin(GL_QUADS);
        glColor3ub(245, 230, 66);
        glVertex2f(1.250f, -1.2f);
        glVertex2f(0.9f, -1.2f);
        glVertex2f(0.9f, -1.0f);
        glVertex2f(1.250f, -1.0f);
    glEnd();



   // train main boby
   glBegin(GL_QUADS);
        glColor3ub(179.0f, 186.0f, 196.0f);
        glVertex2f(0.8f, -1.475f);
        glVertex2f(3.0f, -1.475f);
        glVertex2f(3.0f, -0.75f);
        glVertex2f(0.8f, -0.75f);
    glEnd();


//train part 2
	   // train door glass
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(0.550f, -1.2f);
        glVertex2f(0.475f, -1.2f);
        glVertex2f(0.475f, -1.0f);
        glVertex2f(0.550f, -1.0f);
    glEnd();


     // train door glass
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(0.575f, -1.2f);
        glVertex2f(0.635f, -1.2f);
        glVertex2f(0.635f, -1.0f);
        glVertex2f(0.575f, -1.0f);
    glEnd();


      // train door
   glBegin(GL_QUADS);
        glColor3ub(35.0f, 148.0f, 35.0f);
        glVertex2f(0.650f, -1.375f);
        glVertex2f(0.450f, -1.375f);
        glVertex2f(0.450f, -0.90f);
        glVertex2f(0.650f, -0.90f);
    glEnd();




    //train window

      glBegin(GL_QUADS);
        glColor3ub(245, 230, 66);
        glVertex2f(0.4f, -1.2f);
        glVertex2f(0.050f, -1.2f);
        glVertex2f(0.050f, -1.0f);
        glVertex2f(0.4f, -1.0f);
    glEnd();








       // train door glass 2
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(-0.150f, -1.2f);
        glVertex2f(-0.075f, -1.2f);
        glVertex2f(-0.075f, -1.0f);
        glVertex2f(-0.150f, -1.0f);
    glEnd();


     // train door glass 2
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(-0.175f, -1.2f);
        glVertex2f(-0.235f, -1.2f);
        glVertex2f(-0.235f, -1.0f);
        glVertex2f(-0.175f, -1.0f);
    glEnd();


      // train door 2
   glBegin(GL_QUADS);
        glColor3ub(35.0f, 148.0f, 35.0f);
        glVertex2f(-0.050f, -1.375f);
        glVertex2f(-0.250f, -1.375f);
        glVertex2f(-0.250f, -0.90f);
        glVertex2f(-0.050f, -0.90f);
    glEnd();





    //train window 2

      glBegin(GL_QUADS);
        glColor3ub(245, 230, 66);
        glVertex2f(-0.3f, -1.2f);
        glVertex2f(-0.650f, -1.2f);
        glVertex2f(-0.650f, -1.0f);
        glVertex2f(-0.3f, -1.0f);
    glEnd();






     //train door glass 3
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(-0.850f, -1.2f);
        glVertex2f(-0.775f, -1.2f);
        glVertex2f(-0.775f, -1.0f);
        glVertex2f(-0.850f, -1.0f);
    glEnd();


     //train door glass 3
   glBegin(GL_QUADS);
        glColor3ub(117.0f, 18.0f, 18.0f);
        glVertex2f(-0.875f, -1.2f);
        glVertex2f(-0.935f, -1.2f);
        glVertex2f(-0.935f, -1.0f);
        glVertex2f(-0.875f, -1.0f);
    glEnd();


      // train door 3
   glBegin(GL_QUADS);
        glColor3ub(35.0f, 148.0f, 35.0f);
        glVertex2f(-0.750f, -1.375f);
        glVertex2f(-0.950f, -1.375f);
        glVertex2f(-0.950f, -0.90f);
        glVertex2f(-0.750f, -0.90f);
    glEnd();




    //train window 3

      glBegin(GL_QUADS);
        glColor3ub(245, 230, 66);
        glVertex2f(-1.0f, -1.2f);
        glVertex2f(-1.4f, -1.2f);
        glVertex2f(-1.4f, -1.0f);
        glVertex2f(-1.0f, -1.0f);
    glEnd();




   // train main boby 2
   glBegin(GL_QUADS);
        glColor3ub(179.0f, 186.0f, 196.0f);
        glVertex2f(-1.650f, -1.475f);
        glVertex2f(0.750f, -1.475f);
        glVertex2f(0.750f, -0.75f);
        glVertex2f(-1.650f, -0.75f);
    glEnd();
    glPopMatrix();



}


void road(){
glPushMatrix();



 //road up-down line
glBegin(GL_QUADS);
glColor3ub(0,0, 0);
glVertex2f(-6.0f, -2.0f);
glVertex2f(6.0f, -2.0f);
glVertex2f(6.0, -2.1f);
glVertex2f(-6.0f, -2.1f);
glEnd();



 glBegin(GL_QUADS);
glColor3b(0, 0, 0);
glVertex2f(-6.0f, -2.7f);
glColor3b(0, 0, 0);
glVertex2f(6.0f, -2.7f);
glColor3ub(184, 134, 11);
glVertex2f(6.0, -2.9f);
glColor3ub(184, 134, 11);
glVertex2f(-6.0f, -2.9f);
glEnd();




//road middle lien
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-6.0f, -2.4f);
glVertex2f(-5.5f, -2.4f);
glVertex2f(-5.5f, -2.3f);
glVertex2f(-6.0f, -2.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-5.0f, -2.4f);
glVertex2f(-4.5f, -2.4f);
glVertex2f(-4.5f, -2.3f);
glVertex2f(-5.0f, -2.3f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-4.0f, -2.4f);
glVertex2f(-3.5f, -2.4f);
glVertex2f(-3.5f, -2.3f);
glVertex2f(-4.0f, -2.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-3.0f, -2.4f);
glVertex2f(-2.5f, -2.4f);
glVertex2f(-2.5f, -2.3f);
glVertex2f(-3.0f, -2.3f);
glEnd();





 glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-2.8f, -2.4f);
glVertex2f(-2.1f, -2.4f);
glVertex2f(-2.1f, -2.3f);
glVertex2f(-2.8f, -2.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-1.6f, -2.4f);
glVertex2f(-0.9f, -2.4f);
glVertex2f(-0.9f, -2.3f);
glVertex2f(-1.6f, -2.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.4f, -2.4f);
glVertex2f(0.2f, -2.4f);
glVertex2f(0.2f, -2.3f);
glVertex2f(-0.4f, -2.3f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(0.7f, -2.4f);
glVertex2f(1.2f, -2.4f);
glVertex2f(1.2f, -2.3f);
glVertex2f(0.7f, -2.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(1.7f, -2.4f);
glVertex2f(2.2f, -2.4f);
glVertex2f(2.2f, -2.3f);
glVertex2f(1.7f, -2.3f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(2.7f, -2.4f);
glVertex2f(3.3f, -2.4f);
glVertex2f(3.3f, -2.3f);
glVertex2f(2.7f, -2.3f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(3.9f, -2.4f);
glVertex2f(4.4f, -2.4f);
glVertex2f(4.4f, -2.3f);
glVertex2f(3.9f, -2.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(4.9f, -2.4f);
glVertex2f(5.4f, -2.4f);
glVertex2f(5.4f, -2.3f);
glVertex2f(4.9f, -2.3f);
glEnd();




//main road
glBegin(GL_QUADS);
glColor3ub(105, 105, 105);
glVertex2f(-6.0f, -2.9f);
glVertex2f(6.0f, -2.9f);
glVertex2f(6.0, -2.0f);
glVertex2f(-6.0f, -2.0f);
glEnd();



glPopMatrix();
}



void plane(){
glPushMatrix();
glTranslatef( -_pl1,0.9,0.0);
//window
glBegin(GL_QUADS);
glColor3ub(0,0, 0);
glVertex2f(0.9f, 1.5f);
glVertex2f(1.0f, 1.5f);
glVertex2f(1.0f, 1.6f);
glVertex2f(0.9f, 1.6f);



 glEnd();



 glBegin(GL_QUADS);
glColor3ub(0,0, 0);
glVertex2f(1.1f, 1.5f);
glVertex2f(1.2f, 1.5f);
glVertex2f(1.2f, 1.6f);
glVertex2f(1.1f, 1.6f);



 glEnd();
glBegin(GL_QUADS);
glColor3ub(0,0, 0);
glVertex2f(1.3f, 1.5f);
glVertex2f(1.4f, 1.5f);
glVertex2f(1.4, 1.6f);
glVertex2f(1.3f, 1.6f);



 glEnd();
//body



glPushMatrix();
glTranslatef(0.8, 1.5, 0.0);
glColor3ub(255, 250, 250);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();





glPushMatrix();
glTranslatef(0.8, 1.6, 0.0);



glColor3ub(255, 250, 250);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();





glPushMatrix();
glTranslatef(0.7, 1.5, 0.0);



glColor3ub(255, 250, 250);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



glBegin(GL_QUADS);
glColor3ub(255,255, 255);
glVertex2f(0.8f, 1.4f);
glVertex2f(1.6f, 1.4f);
glVertex2f(1.6, 1.7f);
glVertex2f(0.8f, 1.7f);



 glEnd();
glBegin(GL_QUADS);
glColor3ub(255,255, 255);
glVertex2f(1.6f, 1.4f);
glVertex2f(1.7, 2.0f);
glVertex2f(1.5f, 1.8f);
glVertex2f(1.4f,1.4f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub(255,255, 255);
glVertex2f(1.2f, 1.4f);
glVertex2f(1.4f, 1.3f);
glVertex2f(1.6, 1.3f);
glVertex2f(1.5f, 1.4f);



 glEnd();
glPopMatrix();



}



void sultan(){



//door
glBegin(GL_QUADS);
glColor3ub(255, 255,255);
glVertex2f(4.0f,-1.6f);
glVertex2f(4.3f,-1.6f);
glVertex2f(4.3f, -1.3f);
glVertex2f(4.0f,-1.3f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub(255, 255,255);
glVertex2f(4.0f,-1.9f);
glVertex2f(4.3f,-1.9f);
glVertex2f(4.3f, -1.6f);
glVertex2f(4.0f,-1.6);
glEnd();



 /*brdr
glBegin(GL_QUADS);
glColor3ub(255, 218, 185);
glVertex2f(3.9f,-2.0f);
glVertex2f(4.4f,-2.0f);
glVertex2f(4.4f, -1.3f);
glVertex2f(3.9f,-1.3f);
glEnd();
*/




//window



 glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(4.4f,-1.8f);
glVertex2f(4.9f,-1.8f);
glVertex2f(4.9f, -1.3f);
glVertex2f(4.4f,-1.3f);
glEnd();



 //up design



 //L to r
glBegin(GL_QUADS);
glColor3ub(255, 255,255);
glVertex2f(3.9f,-1.1f);
glVertex2f(4.0f,-1.1f);
glVertex2f(4.1f, -0.9f);
glVertex2f(4.0f,-0.9f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub(255, 255,255);
glVertex2f(4.1f,-1.1f);
glVertex2f(4.2f,-1.1f);
glVertex2f(4.3f, -0.9f);
glVertex2f(4.2f,-0.9f);
glEnd();




glBegin(GL_QUADS);
glColor3ub(255, 255,255);
glVertex2f(4.3f,-1.1f);
glVertex2f(4.4f,-1.1f);
glVertex2f(4.5f, -0.9f);
glVertex2f(4.4f,-0.9f);
glEnd();



 //r TO L
glBegin(GL_QUADS);
glColor3ub(255, 255,255);
glVertex2f(5.0f,-1.1f);
glVertex2f(4.9f, -1.1f);
glVertex2f(4.8f, -0.9f);
glVertex2f(4.9f, -0.9f);



 glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255,255);
glVertex2f(4.8f,-1.1f);
glVertex2f(4.7f, -1.1f);
glVertex2f(4.6f, -0.9f);
glVertex2f(4.7f, -0.9f);



 glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255,255);
glVertex2f(4.6f,-1.1f);
glVertex2f(4.5f, -1.1f);
glVertex2f(4.4f, -0.9f);
glVertex2f(4.5f, -0.9f);



 glEnd();



 //main design
glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
glVertex2f(3.8f,-1.1f);
glVertex2f(5.1f,-1.1f);
glVertex2f(5.0f, -0.9f);
glVertex2f(3.9f,-0.9f);
glEnd();



 glPushMatrix();
glTranslatef(4.0,-1.1 , 0.0);



glColor3ub(255,0, 0);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(4.2,-1.1 , 0.0);



glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



 glPushMatrix();
glTranslatef(4.4,-1.1 , 0.0);



glColor3ub(255, 0,0);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



 glPushMatrix();
glTranslatef(4.5,-1.1 , 0.0);



glColor3ub(255, 0, 0);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();




glPushMatrix();
glTranslatef(4.7,-1.1 , 0.0);



glColor3ub(255, 255,255);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



 glPushMatrix();
glTranslatef(4.9,-1.1 , 0.0);



glColor3ub(255, 0, 0);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



 //down white borer
glBegin(GL_QUADS);
glColor3ub(255, 218, 185);
glVertex2f(3.9f,-2.0f);
glVertex2f(5.0f,-2.0f);
glVertex2f(5.0f, -1.9f);
glVertex2f(3.9f,-1.9f);
glEnd();
//main sultan
glBegin(GL_QUADS);
glColor3ub(240, 230, 140);
glVertex2f(3.9f,-2.0f);
glVertex2f(5.0f,-2.0f);
glVertex2f(5.0f, -0.8f);
glVertex2f(3.9f,-0.8f);
glEnd();








}

void car()
{
//car
glPushMatrix();
glTranslatef(__translate,-1.8,1.0);
//inside wheel
glPushMatrix();
glTranslatef(0.4,-0.3,0.0);
glRotatef(_angle,.0, 0.0, -1.0);
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(-0.4,-0.3,0.0);
glRotatef(_angle, 0.0, 0.0, -1.0);
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
//wheel
glPushMatrix();
glTranslatef(0.4,-0.3,0.0);
glRotatef(_angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glColor3ub(222, 213, 213);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(-0.4,-0.3,0.0);
glRotatef(_angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glColor3ub(222, 213, 213);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(0.4,-0.3,0.0);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(-0.4,-0.3,0.0);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );



}



glEnd();
glPopMatrix();
//black window r8



 glBegin(GL_POLYGON);
glColor3ub(0, 0,0);
glVertex2f(0.0,0.0f);
glVertex2f(0.1f,0.0f);
glVertex2f(0.1f,0.1f);
glVertex2f(0.0f,0.1f);
glEnd();



 glBegin(GL_TRIANGLES);
glColor3ub(0, 0,0);
glVertex2f(0.1f,0.0f);
glVertex2f(0.2f,0.0);
glVertex2f(0.1f,0.1f);



 glEnd();
//black window lf
glBegin(GL_POLYGON);
glColor3ub(0, 0,0);
glVertex2f(-0.2,0.0f);
glVertex2f(-0.1f,0.0f);
glVertex2f(-0.1f,0.1f);
glVertex2f(-0.2f,0.1f);
glEnd();



 glBegin(GL_TRIANGLES);
glColor3ub(0, 0,0);
glVertex2f(-0.1f,0.0f);
glVertex2f(-0.3,0.0f);
glVertex2f(-0.2f,0.1f);
glEnd();
//carbody



 glBegin(GL_POLYGON);
glColor3ub(245, 69, 66);
glVertex2f(0.1f,-0.3f);
glVertex2f(0.6f,-0.3f);
glVertex2f(0.6f,0.0f);
glVertex2f(0.1f,0.0f);



 glVertex2f(0.3f,0.0f);
glVertex2f(0.1f,0.2f);
glVertex2f(-0.2f,0.2f);
glVertex2f(-0.5f,0.0f);



 glVertex2f(-0.7f,0.0f);
glVertex2f(-0.7f,-0.3f);
glVertex2f(0.1f,-0.3f);
glEnd();
glPopMatrix();



}

void car2()
{
//car
glPushMatrix();
glTranslatef(__cd1,-1.8,1.0);
//inside wheel
glPushMatrix();
glTranslatef(0.4,-0.3,0.0);
glRotatef(_angle,.0, 0.0, -1.0);
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(-0.4,-0.3,0.0);
glRotatef(_angle, 0.0, 0.0, -1.0);
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.05;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
//wheel
glPushMatrix();
glTranslatef(0.4,-0.3,0.0);
glRotatef(_angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glColor3ub(222, 213, 213);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(-0.4,-0.3,0.0);
glRotatef(_angle, 0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glColor3ub(222, 213, 213);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(0.4,-0.3,0.0);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(-0.4,-0.3,0.0);
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );



}



glEnd();
glPopMatrix();
//black window r8



 glBegin(GL_POLYGON);
glColor3ub(0, 0,0);
glVertex2f(0.0,0.0f);
glVertex2f(0.1f,0.0f);
glVertex2f(0.1f,0.1f);
glVertex2f(0.0f,0.1f);
glEnd();



 glBegin(GL_TRIANGLES);
glColor3ub(0, 0,0);
glVertex2f(0.1f,0.0f);
glVertex2f(0.2f,0.0);
glVertex2f(0.1f,0.1f);



 glEnd();
//black window lf
glBegin(GL_POLYGON);
glColor3ub(0, 0,0);
glVertex2f(-0.2,0.0f);
glVertex2f(-0.1f,0.0f);
glVertex2f(-0.1f,0.1f);
glVertex2f(-0.2f,0.1f);
glEnd();



 glBegin(GL_TRIANGLES);
glColor3ub(0, 0,0);
glVertex2f(-0.1f,0.0f);
glVertex2f(-0.3,0.0f);
glVertex2f(-0.2f,0.1f);
glEnd();
//carbody



 glBegin(GL_POLYGON);
glColor3ub(52, 235, 207);
glVertex2f(0.1f,-0.3f);
glVertex2f(0.6f,-0.3f);
glVertex2f(0.6f,0.0f);
glVertex2f(0.1f,0.0f);



 glVertex2f(0.3f,0.0f);
glVertex2f(0.1f,0.2f);
glVertex2f(-0.2f,0.2f);
glVertex2f(-0.5f,0.0f);



 glVertex2f(-0.7f,0.0f);
glVertex2f(-0.7f,-0.3f);
glVertex2f(0.1f,-0.3f);
glEnd();
glPopMatrix();



}



void building1()
{



 //building 1



 //windows right
glBegin(GL_TRIANGLES);
glColor3ub( 255, 255, 255);
glVertex2f(2.8f,-2.0f);
glVertex2f(3.2f,-2.0f);
glVertex2f(3.2f,-1.7f);
glEnd();



 glBegin(GL_TRIANGLES);
glColor3ub( 255, 255, 255);
glVertex2f(2.8f,-1.6f);
glVertex2f(3.2f,-1.6f);
glVertex2f(3.2f,-1.3f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub( 255, 255, 255);
glVertex2f(2.8f,-1.2f);
glVertex2f(3.2f,-1.2f);
glVertex2f(3.2f,-0.9f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub( 255, 255, 255);
glVertex2f(2.8f,-0.8f);
glVertex2f(3.2f,-0.8f);
glVertex2f(3.2f,-0.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub( 255, 255, 255);
glVertex2f(2.8f,-0.4f);
glVertex2f(3.2f,-0.4f);
glVertex2f(3.2f,-0.1f);
glEnd();
//windows left



 glBegin(GL_TRIANGLES);
glColor3ub( 30, 144, 255);
glVertex2f(2.8f,-2.0f);
glVertex2f(3.2f,-1.7f);
glVertex2f(2.8f,-1.7f);
glEnd();



 glBegin(GL_TRIANGLES);
glColor3ub( 30, 144, 255);
glVertex2f(2.8f,-1.6f);
glVertex2f(3.2f,-1.3f);
glVertex2f(2.8,-1.3f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub( 30, 144, 255);
glVertex2f(2.8f,-1.2f);
glVertex2f(3.2f,-0.9f);
glVertex2f(2.8f,-0.9f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub( 30, 144, 255);
glVertex2f(2.8f,-0.8f);
glVertex2f(3.2f,-0.5f);
glVertex2f(2.8f,-0.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub( 30, 144, 255);
glVertex2f(2.8f,-0.4f);
glVertex2f(3.2f,-0.1f);
glVertex2f(2.8f,-0.1f);
glEnd();
//main building
glBegin(GL_QUADS);
glColor3ub( 46, 139, 87);
glVertex2f(2.7f,-2.0f);
glVertex2f(3.3f,-2.0f);
glVertex2f(3.3f, 0.3f);
glVertex2f(2.7f,0.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub( 46, 139, 87);
glVertex2f(3.3f,-2.0f);
glVertex2f(3.8f,-2.0f);
glVertex2f(3.8f, 0.0f);
glVertex2f(3.3f,0.0f);
glEnd();




}




void building2(){
//building 2
glBegin(GL_QUADS);
glColor3ub( 255, 140, 0);
glVertex2f(2.2f,-2.0f);
glVertex2f(2.5f,-2.0f);
glVertex2f(2.5f, 1.0f);
glVertex2f(2.2f,1.0f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub( 25, 25, 112);
glVertex2f(2.5f,-2.0f);
glVertex2f(2.9f,-2.0f);
glVertex2f(2.9f, 1.0f);
glVertex2f(2.5f,1.0f);
glEnd();
//uperide
glBegin(GL_QUADS);
glColor3ub( 255, 140, 0);
glVertex2f(2.3f,1.0f);
glVertex2f(2.5f,1.0f);
glVertex2f(2.5f,1.1f);
glVertex2f(2.3f,1.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub( 255, 140, 0);
glVertex2f(2.4f,1.1f);
glVertex2f(2.5f,1.1f);
glVertex2f(2.5f,1.2f);
glVertex2f(2.4f,1.2f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub( 25, 25, 112);
glVertex2f(2.5f,1.0f);
glVertex2f(2.8f,1.0f);
glVertex2f(2.8f, 1.1f);
glVertex2f(2.5f,1.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub( 25, 25, 112);
glVertex2f(2.5f,1.1f);
glVertex2f(2.7f,1.1f);
glVertex2f(2.7f, 1.2f);
glVertex2f(2.5f,1.2f);
glEnd();



}



void building3(){
//building 3




//uperside




glBegin(GL_LINES);
glColor3ub( 255, 255, 255);
glVertex2f(1.0f,-1.9f);
glVertex2f(2.0f,-1.9f);



 glVertex2f(1.0f,-1.7f);
glVertex2f(2.0f,-1.7f);



 glEnd();




//majerdeyal



 glBegin(GL_LINES);
glColor3ub( 255, 255, 255);
glVertex2f(1.0f,-1.5f);
glVertex2f(2.0f,-1.5f);
glVertex2f(1.0f,-1.3f);
glVertex2f(2.0f,-1.3f);
glVertex2f(2.0f, -1.1f);
glVertex2f(1.0f,-1.1f);
glVertex2f(2.0f, -0.9f);
glVertex2f(1.0f, -0.9f);
glVertex2f(1.0f,-0.7f);
glVertex2f(2.0f,-0.7f);
glVertex2f(2.0f, -0.5f);
glVertex2f(1.0f,-0.5f);
glVertex2f(1.0f,-0.3f);
glVertex2f(2.0f,-0.3f);
glVertex2f(2.0f, -0.1f);
glVertex2f(1.0f,-0.1f);



 glVertex2f(1.0f,0.1f);
glVertex2f(2.0f,0.1f);



 glVertex2f(1.0f,0.3f);
glVertex2f(2.0f,0.3f);
glVertex2f(1.0f,0.5f);
glVertex2f(2.0f,0.5f);
glVertex2f(1.0f,0.7f);
glVertex2f(2.0f,0.7f);
glVertex2f(1.0f,0.9f);
glVertex2f(2.0f,0.9f);
glVertex2f(2.0f, 1.1f);
glVertex2f(1.0f,1.1f);
glVertex2f(2.0f, 1.3f);
glVertex2f(1.0f,1.3f);
glVertex2f(2.0f, 1.5f);
glVertex2f(1.0f,1.5f);
glVertex2f(2.0f, 1.7f);
glVertex2f(1.0f,1.7f);
glVertex2f(1.0f,1.9f);
glVertex2f(2.0f, 1.9f);
glEnd();



 //main



glBegin(GL_QUADS);
glColor3ub( 25, 25, 112);
glVertex2f(1.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f, 1.9f);
glVertex2f(1.0f,1.9f);
glEnd();
glBegin(GL_QUADS);
glColor3ub( 25, 25, 112);
glVertex2f(1.3f,1.9f);
glVertex2f(1.8f, 1.9f);
glVertex2f(1.8f, 2.0f);
glVertex2f(1.3f, 2.0f);
glEnd();




}

void sun(){
//sun
glPushMatrix();
glTranslatef(-2.0,2.0, 0.0);



glColor3ub(232, 219, 32);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.4;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();

}




void cloud_1_2()
{
//cloud
glPushMatrix();
glTranslatef(_translate, 0.0, 0.0);



//cloud 1
glPushMatrix();
glTranslatef(-2.3, 1.6, 0.0);
glBegin(GL_QUADS);
glColor3ub( 173, 216, 230);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.9f, 0.0f);
glVertex2f(0.9f, 0.4f);
glVertex2f(0.0f, 0.4f);
glEnd();



glPopMatrix();
glPushMatrix();
glTranslatef(-2.0, 2.0, 0.0);



glColor3ub(255, 250, 250);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



glPushMatrix();
glTranslatef(-1.6, 2.0, 0.0);



glColor3ub(255, 250, 250);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



//cloud 2
glPushMatrix();
glTranslatef(-1.3, 1.2, 0.0);
glBegin(GL_QUADS);
glColor3ub( 173, 216, 230);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.9f, 0.0f);
glVertex2f(0.9f, 0.4f);
glVertex2f(0.0f, 0.4f);
glEnd();



glPopMatrix();
glPushMatrix();
glTranslatef(-1.0, 1.6, 0.0);



glColor3ub(255, 250, 250);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



glPushMatrix();
glTranslatef(-0.6, 1.6, 0.0);



glColor3ub(255, 250, 250);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



glPopMatrix();






}



void cloud3(){



//cloud 3
glPushMatrix();
glTranslatef(_cd1, 0.0, 0.0);
glPushMatrix();
glTranslatef(1.4, 1.6, 0.0);
glBegin(GL_QUADS);
glColor3ub( 173, 216, 230);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.9f, 0.0f);
glVertex2f(0.9f, 0.4f);
glVertex2f(0.0f, 0.4f);
glEnd();



glPopMatrix();
glPushMatrix();
glTranslatef(2.0, 2.0, 0.0);



glColor3ub(255, 250, 250);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



glPushMatrix();
glTranslatef(1.6, 2.0, 0.0);
glColor3ub(255, 250, 250);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



glPopMatrix();}











void masjid(){
//Mosjid



 //main gate
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.1f,-2.0f);
glVertex2f(0.5f,-2.0f);
glVertex2f(0.5f, -1.5f);
glVertex2f(0.1f,-1.5f);
glEnd();




glBegin(GL_QUADS);
glColor3ub(218, 165, 32);
glVertex2f(0.0f,-2.0f);
glVertex2f(0.6f,-2.0f);
glVertex2f(0.6f, -1.4f);
glVertex2f(0.0f,-1.4f);
glEnd();
//minar gate



 glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.6f,-2.0f);
glVertex2f(-0.4f,-2.0f);
glVertex2f(-0.4f, -1.5f);
glVertex2f(-0.6f,-1.5f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(218, 165, 32);
glVertex2f(-0.7f,-2.0f);
glVertex2f(-0.3f,-2.0f);
glVertex2f(-0.3f, -1.4f);
glVertex2f(-0.7f,-1.4f);
glEnd();
//main structure
glBegin(GL_QUADS);
glColor3ub(135, 206, 250);
glVertex2f(-0.8f,-2.0f);
glVertex2f(0.9f,-2.0f);
glVertex2f(0.9f, -1.3f);
glVertex2f(-0.8f,-1.3f);
glEnd();





 //gumbuj
glBegin(GL_QUADS);
glColor3ub(218, 165, 32);
glVertex2f(-0.2f,-1.3f);
glVertex2f(0.8f,-1.3f);
glVertex2f(0.8f, -0.9f);
glVertex2f(-0.2f,-0.9f);
glEnd();
glPushMatrix();
glTranslatef(0.3, -0.9, 0.0);



glColor3ub(218, 165, 32);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();




//minar
glBegin(GL_QUADS);



 glColor3ub(255,255,255);
glVertex2f(-0.6f,-1.3f);
glVertex2f(-0.4f,-1.3f);
glVertex2f(-0.4f, -0.3f);
glVertex2f(-0.6f,-0.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(218, 165, 32);
glVertex2f(-0.6f,-0.3f);
glVertex2f(-0.4f,-0.3f);
glVertex2f(-0.4f, 0.0f);
glVertex2f(-0.6f,0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(135, 206, 250);
glVertex2f(-0.7f,-1.3f);
glVertex2f(-0.3f,-1.3f);
glVertex2f(-0.3f, -0.3f);
glVertex2f(-0.7f,-0.3f);
glEnd();
glPushMatrix();
glTranslatef(-0.5, 0.0, 0.0);



glColor3ub(218, 165, 32);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
//MOON



 glPushMatrix();
glTranslatef(-0.4, 0.2, 0.0);



glColor3ub( 173, 216, 230);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(-0.6, 0.2, 0.0);



glColor3ub( 173, 216, 230);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



 glPushMatrix();
glTranslatef(-0.5, 0.2, 0.0);
glRotated(_angle,0.0,1.0,0.0);
glColor3ub(240, 248, 255);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
}




void masjid2(){
//Mosjid



 //main gate
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.1f,-2.0f);
glVertex2f(0.5f,-2.0f);
glVertex2f(0.5f, -1.5f);
glVertex2f(0.1f,-1.5f);
glEnd();




glBegin(GL_QUADS);
glColor3ub(218, 165, 32);
glVertex2f(0.0f,-2.0f);
glVertex2f(0.6f,-2.0f);
glVertex2f(0.6f, -1.4f);
glVertex2f(0.0f,-1.4f);
glEnd();
//minar gate



 glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.6f,-2.0f);
glVertex2f(-0.4f,-2.0f);
glVertex2f(-0.4f, -1.5f);
glVertex2f(-0.6f,-1.5f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(218, 165, 32);
glVertex2f(-0.7f,-2.0f);
glVertex2f(-0.3f,-2.0f);
glVertex2f(-0.3f, -1.4f);
glVertex2f(-0.7f,-1.4f);
glEnd();
//main structure
glBegin(GL_QUADS);
glColor3ub(135, 206, 250);
glVertex2f(-0.8f,-2.0f);
glVertex2f(0.9f,-2.0f);
glVertex2f(0.9f, -1.3f);
glVertex2f(-0.8f,-1.3f);
glEnd();





 //gumbuj
glBegin(GL_QUADS);
glColor3ub(218, 165, 32);
glVertex2f(-0.2f,-1.3f);
glVertex2f(0.8f,-1.3f);
glVertex2f(0.8f, -0.9f);
glVertex2f(-0.2f,-0.9f);
glEnd();
glPushMatrix();
glTranslatef(0.3, -0.9, 0.0);



glColor3ub(218, 165, 32);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();




//minar
glBegin(GL_QUADS);



 glColor3ub(255,255,255);
glVertex2f(-0.6f,-1.3f);
glVertex2f(-0.4f,-1.3f);
glVertex2f(-0.4f, -0.3f);
glVertex2f(-0.6f,-0.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(218, 165, 32);
glVertex2f(-0.6f,-0.3f);
glVertex2f(-0.4f,-0.3f);
glVertex2f(-0.4f, 0.0f);
glVertex2f(-0.6f,0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(135, 206, 250);
glVertex2f(-0.7f,-1.3f);
glVertex2f(-0.3f,-1.3f);
glVertex2f(-0.3f, -0.3f);
glVertex2f(-0.7f,-0.3f);
glEnd();
glPushMatrix();
glTranslatef(-0.5, 0.0, 0.0);



glColor3ub(218, 165, 32);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
//MOON



 glPushMatrix();
glTranslatef(-0.4, 0.2, 0.0);



glColor3ub( 173, 216, 230);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(-0.6, 0.2, 0.0);



glColor3ub( 173, 216, 230);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



 glPushMatrix();
glTranslatef(-0.5, 0.2, 0.0);
glRotated(_angle,0.0,1.0,0.0);
glColor3ub(240, 248, 255);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
}



void moon()
{
glPushMatrix();
glTranslatef(-1.7, 2.0, 0.0);
glColor3ub(10,10, 10);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();




glPushMatrix();
glTranslatef(-2.0, 1.9, 0.0);
glColor3ub(255,255, 255);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.4;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



}



void plant(){
//plant





 glPushMatrix();
glTranslatef(-1.6, -1.2, 0.0);
glColor3ub(0, 128, 0);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



glPushMatrix();
glTranslatef(-1.4, -1.1, 0.0);
glColor3ub(0, 128, 0);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



glPushMatrix();
glTranslatef(-1.3, -0.9, 0.0);
glColor3ub(0, 128, 0);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();





 glPushMatrix();
glTranslatef(-0.9, -1.0, 0.0);
glColor3ub(0, 128, 0);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/100;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();



 glBegin(GL_QUADS);
glColor3ub(160, 82, 45);
glVertex2f(-1.1f,-2.0f);
glVertex2f(-1.0f,-2.0f);
glVertex2f(-1.0f, -1.2f);
glVertex2f(-1.1f,-1.2f);
glEnd();



 glBegin(GL_QUADS);
glColor3ub(160, 82, 45);
glVertex2f(-1.1f,-1.5f);
glVertex2f(-1.0f,-1.5f);
glVertex2f(-1.4f, -1.2f);
glVertex2f(-1.3f,-1.2f);
glEnd();






}

void building4(){

    //building4

        //windows

         glBegin(GL_QUADS);
        glColor3ub(235, 222, 40);
        glVertex2f(-5.3f,-1.8f);
        glVertex2f(-4.2f,-1.8f);
        glVertex2f(-4.2f, -1.0f);
        glVertex2f(-5.3f,-1.0f);
    glEnd();

             glBegin(GL_QUADS);
        glColor3ub(235, 222, 40);
        glVertex2f(-5.3f,-0.8f);
        glVertex2f(-4.2f,-0.8f);
        glVertex2f(-4.2f, 0.0f);
        glVertex2f(-5.3f,0.0f);
    glEnd();

                 glBegin(GL_QUADS);
        glColor3ub(235, 222, 40);
        glVertex2f(-5.3f,0.2f);
        glVertex2f(-4.2f,0.2f);
        glVertex2f(-4.2f, 0.9f);
        glVertex2f(-5.3f,0.9f);
    glEnd();

    //right window

             glBegin(GL_QUADS);
        glColor3ub(235, 222, 40);
        glVertex2f(-4.0f,-1.8f);
        glVertex2f(-2.8f,-1.8f);
        glVertex2f(-2.8f, -1.0f);
        glVertex2f(-4.0f,-1.0f);
    glEnd();

                 glBegin(GL_QUADS);
        glColor3ub(235, 222, 40);
        glVertex2f(-4.0f,-0.8f);
        glVertex2f(-2.8f,-0.8f);
        glVertex2f(-2.8f, 0.0f);
        glVertex2f(-4.0f,0.0f);
    glEnd();

                  glBegin(GL_QUADS);
        glColor3ub(235, 222, 40);
        glVertex2f(-4.0f,0.2f);
        glVertex2f(-2.8f,0.2f);
        glVertex2f(-2.8f, 0.9f);
        glVertex2f(-4.0f,0.9f);
    glEnd();

    //building sruct
         glBegin(GL_QUADS);
        glColor3ub(52, 78, 99);
        glVertex2f(-5.5f,-2.0f);
        glVertex2f(-2.5f,-2.0f);
        glVertex2f(-2.5f, 1.0f);
        glVertex2f(-5.5f,1.0f);
    glEnd();




    glBegin(GL_QUADS);
        glColor3ub(53,97,130);
        glVertex2f(-5.4f,1.0f);
        glVertex2f(-4.0f,1.0f);
        glVertex2f(-4.0f, 1.2f);
        glVertex2f(-5.4f,1.2f);
    glEnd();

    //windows

         glBegin(GL_QUADS);
        glColor3ub(0, 0, 0);
        glVertex2f(-5.3f,-1.8f);
        glVertex2f(-4.0f,-1.8f);
        glVertex2f(-4.0f, -1.0f);
        glVertex2f(-5.3f,-1.0f);
    glEnd();
    }

    void jhupri(){
    glLineWidth(3);
    glBegin(GL_LINES);
	glColor3ub(135.0f, 57.0f, 51.0f);

    glVertex2f(-2.350f,-1.150f);
    glVertex2f(-1.450f,-1.375f);
    glVertex2f(-2.375f,-1.175f);
    glVertex2f(-1.475f,-1.4f);
    glVertex2f(-2.4f,-1.2f);
    glVertex2f(-1.5f,-1.425f);
    glVertex2f(-2.425f,-1.225f);
    glVertex2f(-1.525f,-1.450f);
    glVertex2f(-2.450f,-1.250f);
    glVertex2f(-1.550f,-1.475f);
    glVertex2f(-2.475f,-1.275f);
    glVertex2f(-1.575f,-1.5f);
    glVertex2f(-2.5f,-1.3f);
    glVertex2f(-1.6f,-1.525f);

    glEnd();  // end
	glFlush();  // Render now

    glBegin(GL_LINES);
	glColor3ub(87.0f, 60.0f, 71.0f);
    glVertex2f(-2.350f,-1.3f);
    glVertex2f(-2.350f,-2.0);
    glVertex2f(-1.450f,-1.375f);
    glVertex2f(-1.450f,-2.0f);
    glVertex2f(-2.5f,-1.3f);
    glVertex2f(-2.5f,-2.0f);
    glVertex2f(-1.6f,-1.525f);
    glVertex2f(-1.6f,-2.0f);

     glEnd();  // end
	glFlush();  // Render now

	 glBegin(GL_QUADS);
	 glColor3ub(120.0f, 34.0f, 34.0f);
	 glVertex2f(-1.450f,-1.7f);
	 glVertex2f(-1.450f,-2.0f);
     glVertex2f(-1.6f,-2.0f);
	 glVertex2f(-1.6f,-1.7f);

	  glEnd();  // end
	glFlush();  // Render now */


	glBegin(GL_QUADS);
	 glColor3ub(120.0f, 34.0f, 34.0f);
	 glVertex2f(-2.350f,-1.7f);
	 glVertex2f(-2.350f,-2.0f);
     glVertex2f(-1.6f,-2.0f);
	 glVertex2f(-1.6f,-1.7f);

	  glEnd();  // end
	glFlush();  // Render now */


}

void dayMode() {
glClearColor(0.678f, 0.847f, 0.902f,0.0f);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glRotatef(-_cameraAngle, 0.0, 0.0, 0.0);
glTranslatef(0.0, 0.0, -7.0);
glPushMatrix();
glTranslatef(1.0, 1.0, 0.0);
glRotatef(_ang_tri ,0.0, 0.0, 0.0);
glPopMatrix();


bridge();
train();
car();
car2();
plane();
road();
sun();
sultan();
building1();
building2();
building3();
building4();
cloud_1_2();
cloud3();
masjid();
jhupri();
plant();
glFinish();
glutSwapBuffers();
}



void nightMode()
{
glClearColor(0.f, 0.0f, 0.0f,0.0f);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glRotatef(-_cameraAngle, 0.0, 0.0, 0.0);
glTranslatef(0.0, 0.0, -7.0);
glPushMatrix();
glTranslatef(1.0, 1.0, 0.0);
glRotatef(_ang_tri ,0.0, 0.0, 0.0);
glPopMatrix();

bridge();
train();
car();
car2();
moon();
road();
sultan();
building1();
building2();
building3();
building4();

jhupri();
masjid2();
plant();
glFlush();
glutSwapBuffers();



}









void keyboard(unsigned char key, int x, int y)
{
switch(key)
{
    case 'e':
exit(1);
break;



 case 'd':
glutDisplayFunc(dayMode);
glutPostRedisplay();
break;

 case 'n':
glutDisplayFunc( nightMode);
glutPostRedisplay();
break;


 default:
break;


}



}







void trans(int value){



_translate += 0.02f;
if (_translate > 7) {
_translate =- 7;
}
__translate += 0.03f;
if (__translate >7) {
__translate =- 7;
}



glutPostRedisplay();
glutTimerFunc(30, trans, 0);



}




void cloud1(int value){




_cd1 += 0.04f;
if (_cd1 > 8) {
_cd1 =- 8;
}
__cd1 += 0.04f;
if (__cd1 > 8) {
__cd1 =-8;
}



glutPostRedisplay();
glutTimerFunc(30, cloud1, 0);



}



void plane1(int value){



_pl1 += 0.05f;
if (_pl1 >8) {
_pl1 = -8;
}




glutPostRedisplay();
glutTimerFunc(30, plane1, 0);



}

void update(int value) {
_angle += 2.0f;
if (_angle > 360) {
_angle -= 360;
}
_ang_tri += 2.0f;
if (_ang_tri > 360) {
_ang_tri -= 360;
}


glutPostRedisplay();
glutTimerFunc(25, update, 0);



}







int main(int argc, char** argv) {
    cout << "Press e : For Stop exit" << endl << endl;

    cout << "Press n : For Night " << endl << endl;
    cout << "Press d : For Day" << endl << endl;

//Initialize GLUT
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(1200, 600);
//glutInitWindowPosition(0,0);
glutCreateWindow("project");
initRendering();
glMatrixMode(GL_PROJECTION);
glutDisplayFunc(dayMode);
glutReshapeFunc(handleResize);
glutKeyboardFunc(keyboard);
sndPlaySound("2.wav", SND_ASYNC);
//glutFullScreen();
glutTimerFunc(25, update, 0);
glutTimerFunc(30, trans, 0);
glutTimerFunc(30, cloud1, 0);
glutTimerFunc(30, plane1, 0);
glutPostRedisplay();





glutMainLoop();
return 0;
}


