#include "include/Renderer.h"

Renderer::Renderer(QWidget *parent){
    // do implementacji
}

void Renderer::initializeGL(){
    // do implementacji

    glEnable(GL_DEPTH_TEST);
        glEnable(GL_CULL_FACE);
        glShadeModel(GL_SMOOTH);
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
        glEnable(GL_MULTISAMPLE);
        static GLfloat lightPosition[4] = { 0.5, 5.0, 7.0, 1.0 };
        glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);

}


void Renderer::paintGL(){
    // Rysowanie, do implementacji
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glLoadIdentity();
        glTranslatef(0.0, 0.0, -10.0);

}

Renderer::~Renderer(){
    // do implemenatcji

}
