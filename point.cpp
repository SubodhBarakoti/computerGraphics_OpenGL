#include <GL/glut.h>

void init()
{
  glClearColor( 1.0, 1.0, 1.0, 0.0 );	//Setting background Color
  glColor3f( 0.0, 0.0, 0.0 );	       //Setting Drawing Color
  glPointSize( 5.0 );			          //A size of dot
  glMatrixMode( GL_PROJECTION );	 //subsequent calls affect projection matrices
  glLoadIdentity();			          //replace current matrix with identity matrix
  gluOrtho2D( 0.0, 100.0, 0.0, 100.0 ); //Left to Right & Bottom to Top
}

void display()
{
  glClear( GL_COLOR_BUFFER_BIT );//clear screen
  glBegin( GL_POINTS );			    //draw points
    glVertex2i( 90, 70 );		   //draw a point
  glEnd();
  glFlush();				          //send all output to screen
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);	                       //initialize toolkit
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB );//set display mode: single bufferring, RGBA model
  glutInitWindowSize(400, 400);		             //set window size on screen
  glutInitWindowPosition( 500, 200 ); 	      //set window position on screen
  glutCreateWindow("DDA Algorithm");		     //open screen window
  init();
  glutDisplayFunc (display);		           //points to display function
  glutMainLoop();			                    //go into perpetual loop
  return 0;
}


