#include <GL/glut.h> 

//Function which basically displays what we want to in window
void displayThis(){

glClear(GL_COLOR_BUFFER_BIT);      // Clear the screen (Works like a duster)
    glBegin(GL_QUADS);            // Creates A Qaurdilateral
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
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
