#include "ucad.h"

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_1u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FEF, 	0xFFF1, 
	0x7FDF, 	0xFFF1, 
	0x7FBF, 	0xFFF1, 
	0x7F7F, 	0xFFF1, 
	0x7EFF, 	0xFFF1, 
	0x7C00, 	0xF1, 
	0x7EFF, 	0xFFF1, 
	0x7F7F, 	0xFFF1, 
	0x7FBF, 	0xFFF1, 
	0x7FDF, 	0xFFF1, 
	0x7FEF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 

};

struct Image line_1u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_1u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_1s_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FEF, 	0xFFF7, 
	0x7FDF, 	0xFFF7, 
	0x7FBF, 	0xFFF7, 
	0x7F7F, 	0xFFF7, 
	0x7EFF, 	0xFFF7, 
	0x7C00, 	0xF7, 
	0x7EFF, 	0xFFF7, 
	0x7F7F, 	0xFFF7, 
	0x7FBF, 	0xFFF7, 
	0x7FDF, 	0xFFF7, 
	0x7FEF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x0, 	0x7, 

};

struct Image line_1s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_1s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_2u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xDFF1, 
	0x7FFF, 	0xEFF1, 
	0x7FFF, 	0xF7F1, 
	0x7FFF, 	0xFBF1, 
	0x7FFF, 	0xFDF1, 
	0x7C00, 	0xF1, 
	0x7FFF, 	0xFDF1, 
	0x7FFF, 	0xFBF1, 
	0x7FFF, 	0xF7F1, 
	0x7FFF, 	0xEFF1, 
	0x7FFF, 	0xDFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 

};

struct Image line_2u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_2u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_2s_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xDFF7, 
	0x7FFF, 	0xEFF7, 
	0x7FFF, 	0xF7F7, 
	0x7FFF, 	0xFBF7, 
	0x7FFF, 	0xFDF7, 
	0x7C00, 	0xF7, 
	0x7FFF, 	0xFDF7, 
	0x7FFF, 	0xFBF7, 
	0x7FFF, 	0xF7F7, 
	0x7FFF, 	0xEFF7, 
	0x7FFF, 	0xDFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x0, 	0x7, 

};

struct Image line_2s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_2s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_3u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7800, 	0xF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7BFF, 	0xFEF1, 
	0x7800, 	0xF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 

};

struct Image line_3u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_3u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_3s_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7800, 	0xF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7BFF, 	0xFEF7, 
	0x7800, 	0xF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x0, 	0x7, 

};

struct Image line_3s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_3s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_4u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 

};

struct Image line_4u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_4u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_4s_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x0, 	0x7, 

};

struct Image line_4s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_4s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_5u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7800, 	0xF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 

};

struct Image line_5u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_5u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_5s_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7800, 	0xF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x0, 	0x7, 

};

struct Image line_5s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_5s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_6u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xF071, 
	0x7FFF, 	0xFE71, 
	0x7FFF, 	0xFD71, 
	0x7FFF, 	0xFB71, 
	0x7FFF, 	0xF771, 
	0x7FFF, 	0xEFF1, 
	0x7FFF, 	0xDFF1, 
	0x7FFF, 	0xBFF1, 
	0x7FFF, 	0x7FF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFB, 	0xFFF1, 
	0x7FF7, 	0xFFF1, 
	0x7FEF, 	0xFFF1, 
	0x7FDF, 	0xFFF1, 
	0x7FBF, 	0xFFF1, 
	0x7F7F, 	0xFFF1, 
	0x7EFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x1, 	0x7, 
	0x1, 	0x7, 
	0x7, 	0xC007, 
	0x1, 	0x7, 
	0x1, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x200, 	0x7, 
	0x200, 	0x7, 
	0xF80, 	0x7, 
	0x200, 	0x7, 
	0x200, 	0x7, 
	0x0, 	0x7, 

};

struct Image line_6u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_6u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_6s_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x1, 	0x1, 
	0x1, 	0x1, 
	0x7, 	0xC001, 
	0x1, 	0x1, 
	0x1, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x100, 	0x1, 
	0x140, 	0x1, 
	0x7C0, 	0x1, 
	0x100, 	0x1, 
	0x100, 	0x1, 
	0x0, 	0x3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xF077, 
	0x7FFF, 	0xFE77, 
	0x7FFF, 	0xFD77, 
	0x7FFF, 	0xFB77, 
	0x7FFF, 	0xF777, 
	0x7FFF, 	0xEFF7, 
	0x7FFF, 	0xDFF7, 
	0x7FFF, 	0xBFF7, 
	0x7FFF, 	0x7FF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFB, 	0xFFF7, 
	0x7FF7, 	0xFFF7, 
	0x7FEF, 	0xFFF7, 
	0x7FDF, 	0xFFF7, 
	0x7FBF, 	0xFFF7, 
	0x7F7F, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x0, 	0x7, 

};

struct Image line_6s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_6s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

