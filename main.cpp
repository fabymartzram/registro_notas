#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display ()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(2);
	glLineWidth(2);

    
	glBegin(GL_POINTS);
	glColor3f(0.4,0.4,0.4);//cincunferencia
	for(double ang =0; ang<360; ang+=0.1)
	{
		double angulo = ang * M_PI /180;
		glVertex2f(cos(angulo)*10.2 , sin(angulo)*10.2);
	}
	
	glEnd(); 
	glShadeModel(GL_FLAT);	
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	//poligono del centro
	glVertex2f(-4, -2.6);
	glVertex2f(-4, 1.8);
	glVertex2f(0, 4.2);
	glVertex2f(3.6, 1.7);
	glVertex2f(3.6, -2.8);
	glVertex2f(-0.4, -4.9);

    glEnd();
   	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	//segundo poligono
	glVertex2f(-0.4, -4.9);
	glVertex2f(3.6, -2.8);	
    glVertex2f(6.8, -4.3);
    glVertex2f(5.9, -7.4);
	glVertex2f(1.7, -9.6); //f3
	glVertex2f(-1.2, -8.1);
	
	
    glEnd();
    
    glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	//TERCER poligono
	glVertex2f(7,3);
    glVertex2f(6.9, 6.2);
    glVertex2f(3, 8.8);
    glVertex2f(-0.2, 7.4);
    glVertex2f(0, 4.2);
    glVertex2f(3.6, 1.7);
    glEnd();
    
    glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	//4 poligono
	glVertex2f(-4, -2.6);
	glVertex2f(-4, 1.8);	
	glVertex2f(-6.4, 4.3);
    glVertex2f(-9.2,2.2);//modifique
	glVertex2f(-9.35, -2.6);
	glVertex2f(-6.7, -4.4);
    glEnd();
    
    glBegin(GL_POLYGON);
	glColor3f(0,0,0);
 	glVertex2f(-4, -2.6);
	glVertex2f(-0.4, -4.9);
	glVertex2f(-1.2, -8.1);
	glVertex2f(-5.2, -7.8);
	glVertex2f(-6.7, -4.4);
    glEnd();
    
    glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(7,3.1);
    glVertex2f(9.3, -1);
    glVertex2f(6.8, -4.3);
    glVertex2f(3.6, -2.8);
    glVertex2f(3.6, 1.7);
    glEnd(); 
    
    glBegin(GL_POLYGON);
	glColor3f(0,0,0);
    glVertex2f(-4, 1.8);
    glVertex2f(0, 4.2);
    glVertex2f(-0.2, 7.4);
    glVertex2f(-4.6, 7.8);
    glVertex2f(-6.4, 4.3);        
    glEnd(); 
    
    
    
	glBegin(GL_LINE_STRIP);	
	glColor3f(0.4,0.4,0.4);
	   //poligonos
	glVertex2f(-4, -2.6);
	glVertex2f(-4, 1.8);
	glVertex2f(0, 4.2);
	glVertex2f(3.6, 1.7);
	glVertex2f(3.6, -2.8);
	glVertex2f(-0.4, -4.9); //fin de primer dibujo
	glVertex2f(-4, -2.6);
	glVertex2f(-6.7, -4.4);
	glVertex2f(-5.2, -7.8);///
	glVertex2f(-5.6, -8.6);
	glVertex2f(-5.2, -7.8);
	glVertex2f(-1.2, -8.1);// f2
	glVertex2f(-0.4, -4.9);
	glVertex2f(-1.2, -8.1);
	glVertex2f(1.7, -9.6); //
	glVertex2f(1.7, -10.1);
	glVertex2f(1.7, -9.6); //f3
	glVertex2f(5.9, -7.4);
	glVertex2f(6.8, -7.7);
	glVertex2f(5.9, -7.4);//f4
	glVertex2f(6.8, -4.3);//
	glVertex2f(3.6, -2.8);//
	glVertex2f(6.8, -4.3);
	glVertex2f(9.3, -1);
	glVertex2f(10.17, -1.5);
	glVertex2f(9.3, -1);
	glVertex2f(7,3.1);
	glVertex2f(3.6, 1.7);//esquina del poligono negro
	glVertex2f(7,3.1);
	glVertex2f(6.9, 6.2);
	glVertex2f(7.8, 6.9);
	glVertex2f(6.9, 6.2);
	glVertex2f(3, 8.8);
	glVertex2f(3.1, 9.8);
	glVertex2f(3, 8.8);
	glVertex2f(-0.2, 7.4);
	glVertex2f(0, 4.2);
	glVertex2f(-0.2, 7.4);
	glVertex2f(-4.6, 7.8);
	glVertex2f(-5.1, 9);
	glVertex2f(-4.6, 7.8);
	glVertex2f(-6.4, 4.3);
	glVertex2f(-4, 1.8);
    glVertex2f(-6.4, 4.3);
	glVertex2f(-9.2,2.2);
	glVertex2f(-9.8, 3);
	glVertex2f(-9.2,2.2);
	glVertex2f(-9.35, -2.6);
	glVertex2f(-9.8, -2.8);
	glVertex2f(-9.35, -2.6);
	glVertex2f(-6.7, -4.4);
	glEnd(); 
    glFlush();
}

void init()
{
	glClearColor( 0.7, 0.7, 0.7, 1.0 );
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-15.0, 15.0, -15.0, 15.0, -1.0, 1.0);
}

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500,500);
    glutInitWindowPosition (100,100);
    glutCreateWindow ("cancha");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
