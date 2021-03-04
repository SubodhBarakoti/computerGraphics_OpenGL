#include <GL/glut.h> 

//Function which basically displays what we want to in the window
void displayThis(){

glClear(GL_COLOR_BUFFER_BIT); // Clear the screen (Works like a duster)
    glPointSize(5.0);
    glBegin(GL_POINTS);
  
    //For this program, the (0,0) of the window is basically in center
    //And Farthest window edges are 1 on all sides
    glColor3f(1.0, 0.0, 0.0);  //Set Color
    glVertex2f(0, 0);         //Coordinates
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0, 0.8);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.8, 0);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.8, 0.8);

    glEnd();
glFlush(); //Render all the output to the screen

}

//Main function
int main(int argc, char**argv){

    glutInit(&argc, argv);         //initalize the toolkit
    glutCreateWindow("Graphics"); //Create Window from the above properties and give it a name
    glutDisplayFunc(displayThis);//call displayThis() function to render sth. on screen
    glutMainLoop();             //Run the perpetual loop so that window won't disappear in an instant
    }
