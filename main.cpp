#include <GL/glut.h>

//Initalization
void init(){
    glClearColor(0.769,0.656,0.5,1.0);  //Set Background Color other than default
}

//Function which basically displays what we want to in window
void displayThis(){
glClear(GL_COLOR_BUFFER_BIT); // Clear the screen (Works like a duster)
    
    /*My Art will be here ;p */
    
glFlush(); //Render all the output to the screen
}

//Main function
int main(int argc, char**argv){
    
    glutInit(&argc, argv);  //initalize the toolkit
    glutInitDisplayMode(GLUT_RGB); //Initalize the display mode to RGBA model

    glutInitWindowSize(500, 500);  //Initalize window size
    glutInitWindowPosition(500,500); //Initalize window position

    glutCreateWindow("Graphics"); //Create Window from the above properties and give it a name
    init(); //Call initalization function
    glutDisplayFunc(displayThis); //call displayThis() function to render sth. on screen   
    glutMainLoop(); //Run the perpetual loop so that window won't disappear in an instant
    }
