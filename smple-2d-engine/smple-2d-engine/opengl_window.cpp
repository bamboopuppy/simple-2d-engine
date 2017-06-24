#include "stdafx.h"
#include "smple-2d-engine.h"


	opengl_window::opengl_window()
	{

	}

	int opengl_window::init_opengl_window(int screen_width, int screen_height) {
		int argc = 1;
		char ** argv = { NULL };
		glutInit(&argc, argv);

		glutInitDisplayMode(GLUT_RGBA | GLUT_ALPHA | GLUT_DOUBLE | GLUT_DEPTH | GLUT_STENCIL);
//		global_screen_width = screen_width;
//		global_screen_height = screen_height;
		glutInitWindowSize(screen_width, screen_height);
		glutCreateWindow("JanuaryJam2017");
		/* Extension wrangler initialising */
/*		GLenum glew_status = glewInit();
		if (glew_status != GLEW_OK)
		{
			fprintf(stderr, "Error: %s\n", glewGetErrorString(glew_status));
			return EXIT_FAILURE;
		}
		if (!GLEW_VERSION_2_0) {
			fprintf(stderr, "Error: your graphic card does not support OpenGL 2.0\n");
			return 1;
		}
		glewExperimental = true;
*/
//		if (init_resources())
//		{
			/* We can display it if everything goes OK */
		/*
			glutDisplayFunc(refresh_display);
			glutIdleFunc(idle);
			glutKeyboardFunc(keypress_down);
			glutKeyboardUpFunc(keypress_up);
			glutMouseFunc(mouse_click);
			glutMotionFunc(mouse_move);
			glutReshapeFunc(window_resize);
			glEnable(GL_BLEND); glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
			glEnable(GL_CULL_FACE);
			glEnable(GL_DEPTH_TEST);
			glDepthFunc(GL_LESS);
		}
		*/
		return 0;
	}
