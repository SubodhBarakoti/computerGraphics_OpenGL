#include <GL/glut.h>

//Function which basically displays what we want to in window
void displayThis(){

glClear(GL_COLOR_BUFFER_BIT);      // Clear the screen (Works like a duster)
    glPointSize(5.0);
    glBegin(GL_LINES);           //Start Creating a line 
    glColor3f(1.0, 0.0, 0.0);   //Set color
    glVertex2f(0, 0);          //First Point
    glVertex2f(0, 0.8);       //Last Point
    glEnd();
glFlush();                  //Render all the output to the screen

}

//Main function
int main(int argc, char**argv){

    glutInit(&argc, argv);          //initalize the toolkit
    glutCreateWindow("Graphics");  //Create Window from the above properties and give it a name
    glutDisplayFunc(displayThis); //call displayThis() function to render sth. on screen
    glutMainLoop();              //Run the perpetual loop so that window won't disappear in an instant
    }
