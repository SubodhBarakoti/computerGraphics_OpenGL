#include <GL/glut.h>
#include <iostream>
using namespace std;

void init(){
    glClearColor(0.769,0.656,0.5,1.0);
}
void displayThis(){
glClear(GL_COLOR_BUFFER_BIT);
glFlush();
}

int main(int argc, char**argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowSize(500, 500);
    glutInitWindowPosition(500,500);

    glutCreateWindow("Graphics");
    glutDisplayFunc(displayThis);
    init();
    glutMainLoop();
    }
