#include <GL/glut.h>
#include <iostream>
#include <math.h>


void init()
{
  glClearColor( 1.0, 1.0, 1.0, 0.0 );	//Setting background Color
  glColor3f( 0.0, 0.0, 0.0 );	       //Setting Drawing Color
  glPointSize( 2.0 );			      //A size of dot
  glMatrixMode( GL_PROJECTION );	 //subsequent calls affect projection matrices
  glLoadIdentity();			        //replace current matrix with identity matrix
  gluOrtho2D( -100.0, 100.0, -100.0, 100.0 ); //Left to Right & Bottom to Top
}

void display()
{
  glClear( GL_COLOR_BUFFER_BIT );	 //clear screen
  glBegin( GL_POINTS );			    //draw points
    float x1;float y1; float x2;float y2;
//Ask for values and store
std::cout<<"Enter the values of endpoints:"<<std::endl<<"x1: ";
std::cin>>x1;
std::cout<<"y1: ";
std::cin>>y1;
std::cout<<"x2: ";
std::cin>>x2;
std::cout<<"y2: ";
std::cin>>y2;

//dx and dy
float dx = x2-x1;
float dy = y2-y1;

//slope
float m = dy/dx;

//Next point
float xi, yi;
xi = x1;
yi = y1;

//DDA Algorithm
do {
if (dx<0){  //Line moving from right to left
    if(fabsf(m)<1) //slope is less than 1
    {
        xi = xi - 1;
        if(m<0) //-ve slope
        {
            yi = yi + m;
        }
        else //+ve slope
        {
            yi = yi - m;
        }
        glVertex2i( xi, yi );
    }
    else //slope is greater or equal to 1
    {
       xi = xi-(1/m);
       if(m<0) //-ve slope
       {
            yi = yi+1;
        }
        else //+ve slope
        {
            yi = yi-1;
        }
        glVertex2i( xi, yi );
    }
}
else //Line moving from left to right
{
    if(fabsf(m)<1) //m is less than 1
    {
        xi = xi+1;
        if(m<0) //-ve slope
        {
            yi = yi-m;
        }
        else //+ve slope
        {
            yi = yi+m;
        }
        glVertex2i( xi, yi );
    }
    else //m is greater or equal to 1
    {
       xi = xi+(1/m);
       if(m<0) //-ve slope
       {
            yi = yi-1;
        }
        else //+ve slope
        {
            yi = yi+1;
        }
        glVertex2i( xi, yi);
    }
}
} while(xi != x2);
  glEnd();
  glFlush();				     //send all output to screen
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);	                      //initialize toolkit
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB ); //set display mode: single bufferring, RGBA model
  glutInitWindowSize(400, 400);		            //set window size on screen
  glutInitWindowPosition( 500, 200 ); 	       //set window position on screen
  glutCreateWindow("DDA Algorithm");		  //open screen window
  init();
  glutDisplayFunc (display);		        //points to display function
  glutMainLoop();			               //go into perpetual loop
  return 0;
}


