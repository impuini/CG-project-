#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<GL/glut.h>
#define SCENE 10

enum { MODES, EXIT };

int width = 650, height = 650;

char *message[] = {" "," "," "," "," "," "," "," "," "};
float delta = 0;

void *font =GLUT_BITMAP_HELVETICA_12;
void *fonts[] =
{
GLUT_BITMAP_9_BY_15,
GLUT_BITMAP_TIMES_ROMAN_10,
GLUT_BITMAP_TIMES_ROMAN_24,             // Text Styles
GLUT_BITMAP_HELVETICA_12,
GLUT_BITMAP_HELVETICA_10,
GLUT_BITMAP_HELVETICA_18,
};


// TO DISPLAY THE TEXT INFORMATION

void output(int x, int y, char *string,int j)      
{
int len, i;

glRasterPos2f(x, y);
len = (int) strlen(string);
for (i = 0; i < len; i++)
glutBitmapCharacter(fonts[j], string[i]);
}

// TO DISPLAY LAYER NAMES
void text_message()
{
glColor3f(0.75,0.75,0.75);
output(60,55, "PHYSICAL LAYER",3);
output(60,95, "DATA LINK LAYER",3);
output(60,135, "NETWORK LAYER",3);
output(60,175, "TRANSPORT LAYER",3);
output(60,215, "SESSION LAYER",3);
output(55,255, "PRESENTATION LAYER",3);
output(60,295, "APPLICATION LAYER",3);
glColor3f(0.75,0.75,0.75);
output(550,55, "PHYSICAL LAYER",3);
output(550,95, "DATA LINK LAYER",3);
output(550,135, "NETWORK LAYER",3);
output(550,175, "TRANSPORT LAYER",3);
output(550,215, "SESSION LAYER",3);
output(550,255, "PRESENTATION LAYER",3);
output(550,295, "APPLICATION LAYER",3);
output(90,440, "SOURCE",3);
output(568,440, "DESTINATION",3);
glColor3f(1,0,0);
glutSwapBuffers();
}

void fill()
{
int i1,j1;

   for (i1=170;i1<=530;i1++)
{
for(j1=50;j1<=60;j1++)
{
glColor3ub(0,200,100);
glBegin(GL_POINTS);
glVertex2i(i1,j1);
glEnd();
glFlush();
}
}
}



//TO DISPLAY OSI REFERENCE MODEL LAYERS
void osilayers()
{
/* 7 OSI Layers-Source */
glColor3f(.5,0.5,0.25);//Physical Layer cream color
glLineWidth(2.0);
glBegin(GL_POLYGON);
glVertex2f(50.0,50.0);
glVertex2f(160.0,50.0);
glVertex2f(160.0,70.0);
glVertex2f(50.0,70.0);
glEnd();
   
glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(50,70);
glVertex2f(160,70);
glVertex2f(165,75);
glVertex2f(55,75);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(160,50);
glVertex2f(165,55);
glVertex2f(165,75);
glVertex2f(160,70);
glEnd();

glColor3f(.5,0.5,0.25);//DL Layer
glBegin(GL_POLYGON);
glVertex2f(50,90);
glVertex2f(160,90);
glVertex2f(160,110);
glVertex2f(50,110);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(50,110);
glVertex2f(160,110);
glVertex2f(165,115);
glVertex2f(55,115);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(160,90);
glVertex2f(165,95);
glVertex2f(165,115);
glVertex2f(160,110);
glEnd();

glColor3f(.5,0.5,0.25);//Network
glBegin(GL_POLYGON);
glVertex2f(50,130.0);
glVertex2f(160.0,130.0);
glVertex2f(160.0,150.0);
glVertex2f(50.0,150.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(50,150);
glVertex2f(160,150);
glVertex2f(165,155);
glVertex2f(55,155);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(160,130);
glVertex2f(165,135);
glVertex2f(165,155);
glVertex2f(160,150);
glEnd();

glColor3f(.5,0.5,0.25);//TL
glBegin(GL_POLYGON);
glVertex2f(50.0,170.0);
glVertex2f(160.0,170.0);
glVertex2f(160.0,190.0);
glVertex2f(50.0,190.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(50,190);
glVertex2f(160,190);
glVertex2f(165,195);
glVertex2f(55,195);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(160,170);
glVertex2f(165,175);
glVertex2f(165,195);
glVertex2f(160,190);
glEnd();

glColor3f(.5,0.5,0.25); //SL
glBegin(GL_POLYGON);
glVertex2f(50.0,210.0);
glVertex2f(160.0,210.0);
glVertex2f(160.0,230.0);
glVertex2f(50.0,230.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(50,230);
glVertex2f(160,230);
glVertex2f(165,235);
glVertex2f(55,235);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(160,210);
glVertex2f(165,215);
glVertex2f(165,235);
glVertex2f(160,230);
glEnd();

glColor3f(.5,0.5,0.25);//Presentation
glBegin(GL_POLYGON);
glVertex2f(50.0,250.0);
glVertex2f(160.0,250.0);
glVertex2f(160.0,270.0);
glVertex2f(50.0,270.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(50,270);
glVertex2f(160,270);
glVertex2f(165,275);
glVertex2f(55,275);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(160,250);
glVertex2f(165,255);
glVertex2f(165,275);
glVertex2f(160,270);
glEnd();

glColor3f(.5,0.5,0.25);//application
glBegin(GL_POLYGON);
glVertex2f(50.0,290.0);
glVertex2f(160.0,290.0);
glVertex2f(160.0,310.0);
glVertex2f(50.0,310.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(50,310);
glVertex2f(160,310);
glVertex2f(165,315);
glVertex2f(55,315);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(160,290);
glVertex2f(165,295);
glVertex2f(165,315);
glVertex2f(160,310);
glEnd();
 
/*Source Computer */

glColor3f(0.75,0.85,0.65);//keyboa
glBegin(GL_QUADS);
glVertex2f(55.0,340.0);
glVertex2f(145.0,340.0);
glVertex2f(150.0,350.0);
glVertex2f(60.0,350.0);
glEnd();

glColor3f(0.75,0.85,0.65);//cabinet
glBegin(GL_LINE_LOOP);
glVertex2f(60.0,355.0);
glVertex2f(150.0,355.0);
glVertex2f(150.0,370.0);
glVertex2f(60.0,370.0);
glEnd();

glColor3f(0.75,0.85,0.65);
glBegin(GL_LINE_LOOP);
glVertex2f(75.0,380.0);
glVertex2f(135,380.0);
glVertex2f(135.0,430.0);
glVertex2f(75.0,430.0);
glEnd();

glColor3f(0.7,0.8,0.6);
glBegin(GL_QUADS);
glVertex2f(80.0,385.0);
glVertex2f(130.0,385.0);
glVertex2f(130.0,425.0);
glVertex2f(80.0,425.0);
glEnd();

   glColor3f(0.75,0.85,0.65);
glBegin(GL_LINES);
glVertex2f(90.0,370.0);
glVertex2f(90.0,380.0);
glVertex2f(120.0,370.0);
glVertex2f(120.0,380.0);
glEnd();

 /* DESTINATION HOST */

glColor3f(.5,0.5,0.25);//Physical Layer
glLineWidth(2.0);
glBegin(GL_POLYGON);
glVertex2f(540.0,50.0);
glVertex2f(650.0,50.0);
glVertex2f(650.0,70.0);
glVertex2f(540.0,70.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(540.0,70.0);
glVertex2f(650.0,70.0);
glVertex2f(655.0,75.0);
glVertex2f(545.0,75.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(650.0,50.0);
glVertex2f(655.0,55.0);
glVertex2f(655.0,75.0);
glVertex2f(650.0,70.0);
glEnd();

glColor3f(.5,0.5,0.25);//DL Layer
glBegin(GL_POLYGON);
glVertex2f(540,90);
glVertex2f(650,90);
glVertex2f(650,110);
glVertex2f(540,110);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(540.0,110.0);
glVertex2f(650.0,110.0);
glVertex2f(655.0,115.0);
glVertex2f(545.0,115.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(650.0,90.0);
glVertex2f(655.0,95.0);
glVertex2f(655.0,115.0);
glVertex2f(650.0,110.0);
glEnd();

glColor3f(.5,0.5,0.25);//Network
glBegin(GL_POLYGON);
glVertex2f(540,130.0);
glVertex2f(650.0,130.0);
glVertex2f(650.0,150.0);
glVertex2f(540.0,150.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(540.0,150.0);
glVertex2f(650.0,150.0);
glVertex2f(655.0,155.0);
glVertex2f(545.0,155.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(650.0,130.0);
glVertex2f(655.0,135.0);
glVertex2f(655.0,155.0);
glVertex2f(650.0,150.0);
glEnd();

glColor3f(.5,0.5,0.25);//TL
glBegin(GL_POLYGON);
glVertex2f(540.0,170.0);
glVertex2f(650.0,170.0);
glVertex2f(650.0,190.0);
glVertex2f(540.0,190.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(540.0,190.0);
glVertex2f(650.0,190.0);
glVertex2f(655.0,195.0);
glVertex2f(545.0,195.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(650.0,170.0);
glVertex2f(655.0,175.0);
glVertex2f(655.0,195.0);
glVertex2f(650.0,190.0);
glEnd();

glColor3f(.5,0.5,0.25); //SL
glBegin(GL_POLYGON);
glVertex2f(540.0,210.0);
glVertex2f(650.0,210.0);
glVertex2f(650.0,230.0);
glVertex2f(540.0,230.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(540.0,230.0);
glVertex2f(650.0,230.0);
glVertex2f(655.0,235.0);
glVertex2f(545.0,235.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(650.0,210.0);
glVertex2f(655.0,215.0);
glVertex2f(655.0,235.0);
glVertex2f(650.0,230.0);
glEnd();

glColor3f(.5,0.5,0.25);//Presentation
glBegin(GL_POLYGON);
glVertex2f(540.0,250.0);
glVertex2f(650.0,250.0);
glVertex2f(650.0,270.0);
glVertex2f(540.0,270.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(540.0,270.0);
glVertex2f(650.0,270.0);
glVertex2f(655.0,275.0);
glVertex2f(545.0,275.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(650.0,250.0);
glVertex2f(655.0,255.0);
glVertex2f(655.0,275.0);
glVertex2f(650.0,270.0);
glEnd();

glColor3f(.5,0.5,0.25);//APPLICATION
glBegin(GL_POLYGON);
glVertex2f(540.0,290.0);
glVertex2f(650.0,290.0);
glVertex2f(650.0,310.0);
glVertex2f(540.0,310.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(540.0,310.0);
glVertex2f(650.0,310.0);
glVertex2f(655.0,315.0);
glVertex2f(545.0,315.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(650.0,290.0);
glVertex2f(655.0,295.0);
glVertex2f(655.0,315.0);
glVertex2f(650.0,310.0);
glEnd();

/*Destination Computer */

glColor3f(0.75,0.85,0.65);//keyboard
glBegin(GL_QUADS);
glVertex2f(545.0,340.0);
glVertex2f(635.0,340.0);
glVertex2f(640.0,350.0);
glVertex2f(550.0,350.0);
glEnd();

glColor3f(0.75,0.85,0.65);//cabinet
glBegin(GL_LINE_LOOP);
glVertex2f(550.0,355.0);
glVertex2f(640.0,355.0);
glVertex2f(640.0,370.0);
glVertex2f(550.0,370.0);
glEnd();

glColor3f(0.75,0.85,0.65);//cpu
glBegin(GL_LINE_LOOP);
glVertex2f(565.0,380.0);
glVertex2f(625,380.0);
glVertex2f(625.0,430.0);
glVertex2f(565.0,430.0);
glEnd();

glColor3f(0.7,0.8,0.6);//monitor
glBegin(GL_QUADS);
glVertex2f(570.0,385.0);
glVertex2f(620.0,385.0);
glVertex2f(620.0,425.0);
glVertex2f(570.0,425.0);
glEnd();

   glColor3f(0.75,0.85,0.65);
glBegin(GL_LINES);
glVertex2f(580.0,370.0);
glVertex2f(580.0,380.0);
glVertex2f(610.0,370.0);
glVertex2f(610.0,380.0);
glEnd();

//BORDER

glColor3f(0.75,0.85,0.65);
glBegin(GL_LINE_LOOP);
glVertex2f(40.0,40.0);
glVertex2f(170.0,40.0);
glVertex2f(170.0,320.0);
glVertex2f(40.0,320.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(170.0,40.0);
glVertex2f(175.0,45.0);
glVertex2f(175.0,325.0);
glVertex2f(170.0,320.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(40.0,320.0);
glVertex2f(170.0,320.0);
glVertex2f(175.0,325.0);
glVertex2f(45.0,325.0);
glEnd();

glColor3f(0.75,0.85,0.65);
glBegin(GL_LINE_LOOP);
glVertex2f(530.0,40.0);
glVertex2f(660.0,40.0);
glVertex2f(660.0,320.0);
glVertex2f(530.0,320.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(660.0,40.0);
glVertex2f(665.0,45.0);
glVertex2f(665.0,325.0);
glVertex2f(660.0,320.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
glVertex2f(530.0,320.0);
glVertex2f(660.0,320.0);
glVertex2f(665.0,325.0);
glVertex2f(535.0,325.0);
glEnd();
}

void phy_medium()
{
// PHYSICAL MEDIUM
float x1=170.0,y1=50.0,x2=530.0,y2=50.0,x3=530.0,y3=60.0,x4=170.0,y4=60.0;
glColor3f(0.75,0.85,0.65);
glBegin(GL_LINE_LOOP);
glVertex2f(x1,y1);
glVertex2f(x2,y2);
glVertex2f(x3,y3);
glVertex2f(x4,y4);
glEnd();
   glFlush();
}

void phy_medium1()
{
// PHYSICAL MEDIUM
float x1=170.0,y1=50.0,x2=530.0,y2=50.0,x3=530.0,y3=70.0,x4=170.0,y4=70.0;
glColor3f(0.75,0.85,0.65);
glBegin(GL_LINE_LOOP);
glVertex2f(x1,y1);
glVertex2f(x2,y2);
glVertex2f(x3,y3);
glVertex2f(x4,y4);
glEnd();
   glFlush();
}

// FUNCTIONS. FOR DELAY

void delay(void)
{
int i,j,k;
for(i=0;i<5000;i++)
{
for(j=0;j<10000;j++);
for(k=0;k<15000;k++);
}
}

void delay1(void)
{
int i;
for(i=0;i<10000;i++);
}

// FIRST SCREEN - FRONT PAGE
void front_page()
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glColor3f(0,0.25,0.75);
//output(250,650,"COLLEGE OF ENGINEERING",2);
glColor3f(1,0.75,0);
//output(180,600,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING",5);
glColor3f(1,0,0);
output(180,650,"A  MINI  PROJECT  ON OSI TRANSMISSION MODE ",2);
glColor3f(1,1,1);
output(50,600,"There are n numbers of users who use computer network and are located over the world.",2);
output(50,570,"So to ensure, national and worldwide data communication, systems must be developed which",2);
output(50,540,"are compatible to communicate with each other. ",2);
output(50,510,"ISO has developed this. ISO stands for International organization of Standardization.",2);
output(50,480,"This is called a model for Open System Interconnection (OSI) and is commonly known as",2 );
output(50,450,"OSI model.",2);
output(50,420,"The ISO-OSI model is a seven layer architecture and the layers are as follows:",2);
output(50,390,"1.Physical layer   2.Data link layer      3.Network layer         4.Transport layer",2);
output(50,360,"5. Session layer  6.Presentation layer  7.Application layer",2);
glColor3f(1,0,0);
output(50,310,"Transmission Modes in Computer Networks",2);
glColor3f(1,1,1);
output(50,290,"There are 3 types of transmission mode:",2);
glColor3f(1,0,0.4);
output(190,250,"Transmission Mode",2);
glColor3f(1,1,1);
glBegin(GL_LINES);
glVertex2i(250,220);
glVertex2i(250,250);
glEnd();
glBegin(GL_LINES);
glVertex2i(80,240);
glVertex2i(420,240);
glEnd();
glBegin(GL_LINES);
glVertex2i(80,220);
glVertex2i(80,240);
glEnd();
glBegin(GL_LINES);
glVertex2i(420,220);
glVertex2i(420,240);
glEnd();
output(60,180,"Simplex",2);
output(210,180,"Half Duplex",2);
output(370,180,"Full Duplex",2);
output(475,60,"*********************",2);
output(475,130,"********************",2);
glColor3f(0,1,0);
output(500,100,"Enter to Continue....",2);
glFlush();
glCallList(SCENE);
glPopMatrix();
glutSwapBuffers();
}

// NECESSARY FUNCTIONS FOR DATA TRANSMISSION AND DATA ERROR

void selectedcolorLeft(int i)
{
if(i==1)
{
glColor3f(0.50,0.25,0.5);//Application Layer
glBegin(GL_POLYGON);
glVertex2f(50.0,290.0);
glVertex2f(160.0,290.0);
glVertex2f(160.0,310.0);
glVertex2f(50.0,310.0);
glEnd();
glColor3f(0.75,0.75,0.75);
output(60,295, "APPLICATION LAYER",3);
}
if(i==2)
{
glColor3f(0.50,0.25,0.5);//Presentation Layer
glBegin(GL_POLYGON);
glVertex2f(50.0,250.0);
glVertex2f(160.0,250.0);
glVertex2f(160.0,270.0);
glVertex2f(50.0,270.0);
glEnd();
glColor3f(0.75,0.75,0.75);
output(55,255, "PRESENTATION LAYER",3);
}
if(i==3)
{
glColor3f(0.50,0.25,0.5);//SL
glBegin(GL_POLYGON);
glVertex2f(50.0,210.0);
glVertex2f(160.0,210.0);
glVertex2f(160.0,230.0);
glVertex2f(50.0,230.0);
glEnd();
glColor3f(0.75,0.75,0.75);
output(60,215, "SESSION LAYER",3);
}
if(i==4)
{
glColor3f(0.50,0.25,0.5);//TL
glBegin(GL_POLYGON);
glVertex2f(50.0,170.0);
glVertex2f(160.0,170.0);
glVertex2f(160.0,190.0);
glVertex2f(50.0,190.0);
glEnd();
glColor3f(0.75,0.75,0.75);
output(60,175, "TRANSPORT LAYER",3);
}
if(i==5)
{
glColor3f(0.50,0.25,0.5);//Network
glBegin(GL_POLYGON);
glVertex2f(50,130.0);
glVertex2f(160.0,130.0);
glVertex2f(160.0,150.0);
glVertex2f(50.0,150.0);
glEnd();
glColor3f(0.75,0.75,0.75);
output(60,135, "NETWORK LAYER",3);
}
if(i==6)
{
glColor3f(0.50,0.25,0.5);//DL Layer
glBegin(GL_POLYGON);
glVertex2f(50,90);
glVertex2f(160,90);
glVertex2f(160,110);
glVertex2f(50,110);
glEnd();
glColor3f(0.75,0.75,0.75);
output(60,95, "DATA LINK LAYER",3);
}
if(i==7)
{
glColor3f(0.50,0.25,0.5);
glBegin(GL_POLYGON);
glVertex2f(50.0,50.0);
glVertex2f(160.0,50.0);
glVertex2f(160.0,70.0);
glVertex2f(50.0,70.0);
glEnd();

glColor3f(0.75,0.75,0.75);
output(60,55, "PHYSICAL LAYER",3);
}
}

void selectedcolorRight (int i)
{
if(i==7)
{
glColor3f(0.50,0.25,0.5);//Application Layer
glBegin(GL_POLYGON);
glVertex2f(540.0,50.0);
glVertex2f(650.0,50.0);
glVertex2f(650.0,70.0);
glVertex2f(540.0,70.0);
glEnd();

glColor3f(0.75,0.75,0.75);
output(550,55, "PHYSICAL LAYER",3);
}
if(i==6)
{
glColor3f(0.50,0.25,0.5);//Presentation Layer
glBegin(GL_POLYGON);
glVertex2f(540,90);
glVertex2f(650,90);
glVertex2f(650,110);
glVertex2f(540,110);
glEnd();

glColor3f(0.75,0.75,0.75);
output(550,95, "DATA LINK LAYER",3);
glFlush();
}
if(i==5)
{
glColor3f(0.50,0.25,0.5);//SL
glBegin(GL_POLYGON);
glVertex2f(540,130.0);
glVertex2f(650.0,130.0);
glVertex2f(650.0,150.0);
glVertex2f(540.0,150.0);
glEnd();

glColor3f(0.75,0.75,0.75);
output(550,135, "NETWORK LAYER",3);
}
if(i==4)
{
glColor3f(0.50,0.25,0.5);//TL
glBegin(GL_POLYGON);
glVertex2f(540.0,170.0);
glVertex2f(650.0,170.0);
glVertex2f(650.0,190.0);
glVertex2f(540.0,190.0);
glEnd();

glColor3f(0.75,0.75,0.75);
output(550,175, "TRANSPORT LAYER",3);
}
if(i==3)
{
glColor3f(0.50,0.25,0.5);//Network
glBegin(GL_POLYGON);
glVertex2f(540.0,210.0);
glVertex2f(650.0,210.0);
glVertex2f(650.0,230.0);
glVertex2f(540.0,230.0);
glEnd();

glColor3f(0.75,0.75,0.75);
output(550,215, "SESSION LAYER",3);
}
if(i==2)
{
glColor3f(0.50,0.25,0.5);//DL Layer
glBegin(GL_POLYGON);
glVertex2f(540.0,250.0);
glVertex2f(650.0,250.0);
glVertex2f(650.0,270.0);
glVertex2f(540.0,270.0);
glEnd();

glColor3f(0.75,0.75,0.75);
output(550,255, "PRESENTATION LAYER",3);
}
if(i==1)
{
glColor3f(0.50,0.25,0.5);
glBegin(GL_POLYGON);
glVertex2f(540.0,290.0);
glVertex2f(650.0,290.0);
glVertex2f(650.0,310.0);
glVertex2f(540.0,310.0);
glEnd();

glColor3f(0.75,0.75,0.75);
output(550,295, "APPLICATION LAYER",3);
}
delay1();
delay1();
delay1();
delay1();
delay1();
glFlush();
}

void Packet_Sending()
{
int i,j,x=0;

glColor3f(0,0.75,0);
output(100,625,"ILLUSTRATION OF DATA TRANSMISSION ACROSS THE LAYERS",2);
glColor3f(0.50,0.25,0.5);
output(250,575, "PACKET SENDING",3);
glBegin(GL_LINE_LOOP);
glVertex2f(150,550);
glVertex2f(550,550);
glVertex2f(550,565);
glVertex2f(150,565);
glEnd();
output(100,400,"ABC",4);
for(i=150;i<550;i++)
{
for(j=550;j<=565;j++)
{
glBegin(GL_POINTS);
glVertex2f(i,j);
glEnd();
}
if (i==200)
x=1;
else if (i==250)
x=2;
else if (i==300)
x=3;
else if (i==350)
x=4;
else if (i==400)
x=5;
else if (i==450)
x=6;
else if (i==500)
x=7;
selectedcolorLeft(x);
delay1();
delay1();
delay1();
delay1();
delay1();
glFlush();
}
}

void Mode_Sending1()
{
int i,j,x=0;

// glColor3f(0,0.75,0);
// output(100,625,"ILLUSTRATION OF DATA TRANSMISSION ACROSS THE LAYERS",2);
// glColor3f(0.50,0.25,0.5);
// output(250,575, "PACKET SENDING",3);
glBegin(GL_LINE_LOOP);
glVertex2f(150,550);
glVertex2f(550,550);
glVertex2f(550,565);
glVertex2f(150,565);
glEnd();
//output(582,400,"ABC",4);

delay1();
delay1();
delay1();
delay1();
delay1();
delay1();
delay1();
delay1();

for(i=150;i<550;i++)
{
for(j=550;j<=565;j++)
{
glBegin(GL_POINTS);
glVertex2f(i,j);
glEnd();
}
if (i==200)
x=7;
else if (i==250)
x=6;
else if (i==300)
x=5;
else if (i==350)
x=4;
else if (i==400)
x=3;
else if (i==450)
x=2;
else if (i==500)
x=1;
selectedcolorLeft(x);
delay1();
delay1();
delay1();
delay1();
delay1();
glFlush();
}
glColor3f(0.50,0.25,0.5);
output(100,400,"XYZ",4);
}

void Mode_Sending()
{
int i,j,x=0;

// glColor3f(0,0.75,0);
// output(100,625,"ILLUSTRATION OF DATA TRANSMISSION ACROSS THE LAYERS",2);
// glColor3f(0.50,0.25,0.5);
// output(250,575, "PACKET SENDING",3);
glBegin(GL_LINE_LOOP);
glVertex2f(150,550);
glVertex2f(550,550);
glVertex2f(550,565);
glVertex2f(150,565);
glEnd();

glColor3f(0.50,0.25,0.5);

output(100,400,"ABC",4);
for(i=150;i<550;i++)
{
for(j=550;j<=565;j++)
{
glBegin(GL_POINTS);
glVertex2f(i,j);
glEnd();
}
if (i==200)
x=1;
else if (i==250)
x=2;
else if (i==300)
x=3;
else if (i==350)
x=4;
else if (i==400)
x=5;
else if (i==450)
x=6;
else if (i==500)
x=7;
selectedcolorLeft(x);
delay1();
delay1();
delay1();
delay1();
delay1();
glFlush();
}
}




void Mode_Full()
{
int i,j,x=0;
// glColor3f(0,0.75,0);
//output(100,625,"ILLUSTRATION OF DATA TRANSMISSION ACROSS THE LAYERS",2);
glColor3f(0.75,0.75,0.75);
/*output(250,520, "PACKET RECEIVING",3);
glBegin(GL_LINE_LOOP);
glVertex2f(150,500);
glVertex2f(550,500);
glVertex2f(550,515);
glVertex2f(150,515);
glEnd();*/
glColor3f(1,0,0);
output(100,400,"ABC",4);
glColor3f(0,1,0);
output(584,400,"XYZ",4);
for(i=150;i<550;i++)
{
for(j=500;j<=515;j++)
{
glBegin(GL_POINTS);
//glVertex2f(i,j);
glEnd();
}
if (i==150)
x=1;
else if (i==250)
x=2;
else if (i==300)
x=3;
else if (i==350)
x=4;
else if (i==400)
x=5;
else if (i==450)
x=6;
else if (i==500)
x=7;
selectedcolorRight(x);  
selectedcolorLeft(x);  
}
}

void Mode_Receiving()
{
int i,j,x=0;
// glColor3f(0,0.75,0);
//output(100,625,"ILLUSTRATION OF DATA TRANSMISSION ACROSS THE LAYERS",2);
glColor3f(0.75,0.75,0.75);
/*output(250,520, "PACKET RECEIVING",3);
glBegin(GL_LINE_LOOP);
glVertex2f(150,500);
glVertex2f(550,500);
glVertex2f(550,515);
glVertex2f(150,515);
glEnd();*/
for(i=150;i<550;i++)
{
for(j=500;j<=515;j++)
{
glBegin(GL_POINTS);
//glVertex2f(i,j);
glEnd();
}
if (i==150)
x=7;
else if (i==250)
x=6;
else if (i==300)
x=5;
else if (i==350)
x=4;
else if (i==400)
x=3;
else if (i==450)
x=2;
else if (i==500)
x=1;
selectedcolorRight(x);  
}
}
void Mode_Receiving1()
{
int i,j,x=0;
// glColor3f(0,0.75,0);
//output(100,625,"ILLUSTRATION OF DATA TRANSMISSION ACROSS THE LAYERS",2);
glColor3f(0.75,0.75,0.75);
/*output(250,520, "PACKET RECEIVING",3);
glBegin(GL_LINE_LOOP);
glVertex2f(150,500);
glVertex2f(550,500);
glVertex2f(550,515);
glVertex2f(150,515);
glEnd();*/
glColor3f(0.50,0.25,0.5);
output(584,400,"XYZ",4);
output(584,410,"ABC",4);
for(i=150;i<550;i++)
{
for(j=500;j<=515;j++)
{
glBegin(GL_POINTS);
//glVertex2f(i,j);
glEnd();
}
if (i==150)
x=1;
else if (i==250)
x=2;
else if (i==300)
x=3;
else if (i==350)
x=4;
else if (i==400)
x=5;
else if (i==450)
x=6;
else if (i==500)
x=7;
selectedcolorRight(x);  
}
}




//-   TRANSMISSION MODES

/* Full Duplex */
void fillfulldup()
{
   int i,j;
int i1,j1;
Mode_Full();
   for (i=530,i1=170;i>=170;i--,i1++)
       for(j=50,j1=60;j<60;j++,j1++)
       {
glBegin(GL_POINTS);
           glColor3f(0,1,0);
       glVertex2i(i,j);
           glColor3f(1,0,0);
glVertex2i(i1,j1);
       glEnd();
           glFlush();
       }
}

void fill2()
{
   int i,j;
for (i=530;i>=170;i--)
       for(j=50;j<=60;j++)
       {
           glColor3ub(0,0,0);
        glBegin(GL_POINTS);
       glVertex2i(i,j);
       glEnd();
       }
}
void fillhalfdup()
{
   int i1,j1,i,j;
fill();
Mode_Receiving();
delay1();
delay1();
glColor3f(1,0,0);
output(584,400,"ABC",4);
fill2();
delay1();
delay1();
delay1();
delay1();
delay1();
delay1();
delay1();
delay1();
osilayers();
text_message();
Mode_Receiving1();

output(250,575, "PACKET SENDING",3);
glBegin(GL_LINE_LOOP);
glVertex2f(150,550);
glVertex2f(550,550);
glVertex2f(550,565);
glVertex2f(150,565);
glEnd();
for(i=150;i<550;i++)
{
for(j=550;j<=565;j++)
{
glColor3f(1,0,0);
glBegin(GL_POINTS);
glVertex2f(i,j);
glEnd();
}
}
for(i=150;i<550;i++)
{
for(j=550;j<=565;j++)
{
glBegin(GL_POINTS);
glVertex2f(i,j);
glEnd();
}
}

glColor3f(0.75,0.85,0.65);
glBegin(GL_LINE_LOOP);
glVertex2f(170,50);
glVertex2f(530,50);
glVertex2f(530,60);
glVertex2f(170,60);
glEnd();
   for (i1=530;i1>=170;i1--)
       for(j1=50;j1<=60;j1++)
       {
           glColor3ub(0,200,100);
        glBegin(GL_POINTS);
       glVertex2i(i1,j1);
       glEnd();
           glFlush();
       }
Mode_Sending1();
}

void halfduplex()
{
Mode_Sending();
phy_medium();
fillhalfdup();
}


void modes(int funcval)
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
   osilayers();
text_message();
   glColor3f(.75,.65,.35);
   output(220,650,"MODES OF TRANSMISSION",2);
delay();

if (funcval == 1){
glColor3f(.65,.15,.85);
Mode_Sending();
glColor3f(0,0,1);
output(250,500,"SIMPLEX MODE",2);
glColor3f(1,0,1);
output(182,475,"In this mode the transmission takes place in single side,the transmited",2);
output(152,455,"data can only be recieced and is possible to respond back.",2);
phy_medium();
fill();
Mode_Receiving();
delay1();
delay1();
glColor3f(0.50,0.25,0.5);
output(584,400,"ABC",4);
}
else if (funcval == 2 )
{
	glColor3f(0,0,1);
output(250,500,"HALF DUPLEX MODE",2);
glColor3f(0,1,0);
output(182,475,"In this mode the transmission takes place in both the sides,",2);
output(152,455,"but with a pause after each transmission.",2);
halfduplex();

}
else if (funcval == 3 )
{
	glColor3f(0,0,1);
output(250,550,"FULL DUPLEX MODE",2);
glColor3f(1,1,0);
output(182,475,"In this mode the transmission takes place in both the sides simultaneouly.",2);
phy_medium1();
fillfulldup();
}
glFlush();
glCallList(SCENE);
glPopMatrix();
glutSwapBuffers();
}

void callmodes()
{

     modes(1);

 delay();
 delay();
     delay();
 delay();

     modes(2);

 delay();
 delay();
     delay();
 delay();

     modes(3);
     
 delay();
 delay();
     delay();
 delay();
}



void myinit()
{
glColor3f(1.0,0.0,0.0);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,700.0,0.0,700.0);
}

void display()
{
glClearColor(0.0,0.0,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);

front_page();
glFlush();
glutSwapBuffers();
}

void key (unsigned char key, int x, int y)
{
switch(key) {

	case 13: glutDisplayFunc(callmodes);
		break;
   case 'q':  
   case 'Q':
          exit(0);
 }
 glutPostRedisplay();
}
int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(1000,700);
glutInitWindowPosition(0,0);
glutCreateWindow("OSI Transmission Mode");
glutKeyboardFunc(key);
myinit();
glutDisplayFunc(display);
glutMainLoop();
}
