#pragma once

#include "resource.h"
#include "GL/freeglut.h"

class opengl_window
{
public:
	opengl_window();
	int init_opengl_window(int screen_width, int screen_height);
};