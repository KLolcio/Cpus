/** @author grafi
  * Opis klasy ------
  * -----------------
  * -----------------
  */

#ifndef PRINTSURF_H
#define PRINTSURF_H
#include "Heders.h"

class Renderer: public QGLWidget
{
    Q_OBJECT

public:
    Renderer( QWidget *parent = 0 );

    // Czyszczenie pamieci ( do implementacji ! )
    ~Renderer();

protected:
    void initializeGL(); //Inicjacja OpenGL
    void paintGL( ); //

    //Metody do implementacji !! (usunac potem komentarz)
    /// void resizeGL(int width, int height)=0;
    /// void mousePressEvent(QMouseEvent *event)=0;
    /// void mouseMoveEvent(QMouseEvent *event)=0;

private:
    //metody statyczny (usunac potem komentarz)

private:
    // Pola klasy (usunac potem komentarz)


};

#endif // PRINTSURF_H
