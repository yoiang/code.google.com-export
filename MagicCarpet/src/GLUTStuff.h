#ifndef __GL_STUFF_H__
#define __GL_STUFF_H__

#include <GL\Glut.h>
#include <gl\glaux.h>

extern
int iWinHeight,	// window height
	iWinWidth ;	// window width

extern
bool	bLighting,			// toggle lighting
		bPerspective,		// toggle perspective and orthographic mode 
		bFilling,			// toggle filling
		bFullscreen,
		bFog ;

extern
GLfloat fCameraLocation[3], 
		fCameraAngle[3] ;

extern
bool	bLeftMouseDown,		// toggle left mouse button down
		bRightMouseDown ;	// toggle right mouse button down

#define CLEARED -9876
extern
int		iLastMouseX,	// last X position of mouse
		iLastMouseY ;	// last Y position of mouse

void InitMouse () ;
void InitCamera() ;
void SetCameraView() ;
void ToggleFullscreen(bool bSetFullscreen) ;
void ToggleFog(bool bSetFog) ;
void ToggleLighting(bool bSetLighting) ;
void ToggleFilling(bool bSetFilling) ;
void TogglePerspective(bool bSetPerspective) ;
void InitDisplay(bool bSetFilling, bool bSetPerspective, bool bSetLighting) ; // initialize variables and display modes
void InitGLUTWindow(int argc, char **argv, char *szWindowName, int iSetWinWidth, int iSetWinHeight) ;

#endif
