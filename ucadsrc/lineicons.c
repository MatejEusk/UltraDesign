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
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xF7F1, 
	0x7FFF, 	0xEFF1, 
	0x7FFF, 	0xDFF1, 
	0x7FFF, 	0xBFF1, 
	0x7FFF, 	0x7FF1, 
	0x7FFE, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFB, 	0xFFF1, 
	0x7FF7, 	0xFFF1, 
	0x7FEF, 	0xFFF1, 
	0x7FDF, 	0xFFF1, 
	0x7FBF, 	0xFFF1, 
	0x7F7F, 	0xFFF1, 
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

	0xC000, 	0x3, 
	0x8000, 	0x3, 
	0x0, 	0x3, 
	0x7FFF, 	0xFFF3, 
	0x7FFF, 	0xFFF3, 
	0x7FFF, 	0xFFF3, 
	0x7FFF, 	0xBFF3, 
	0x7FFF, 	0x7FF3, 
	0x7FFE, 	0xFFF3, 
	0x7FFD, 	0xFFF3, 
	0x7FFB, 	0xFEF3, 
	0x7FF7, 	0xFDF3, 
	0x7FEF, 	0xFBF3, 
	0x7FDF, 	0xF7F3, 
	0x7FBF, 	0xEFF3, 
	0x7F7F, 	0xDFF3, 
	0x7EFF, 	0xBFF3, 
	0x7DFF, 	0x7FF3, 
	0x7BFE, 	0xFFF3, 
	0x7FFD, 	0xFFF3, 
	0x7FFB, 	0xFFF3, 
	0x7FF7, 	0xFFF3, 
	0x7FEF, 	0xFFF3, 
	0x7FFF, 	0xFFF3, 
	0x7FFF, 	0xFFF3, 
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
	0x0, 	0x807, 
	0x0, 	0x1007, 
	0x0, 	0x2007, 
	0x0, 	0x4007, 
	0x0, 	0x8007, 
	0x1, 	0x7, 
	0x2, 	0x7, 
	0x4, 	0x7, 
	0x8, 	0x7, 
	0x10, 	0x7, 
	0x20, 	0x7, 
	0x40, 	0x7, 
	0x80, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 

};

struct Image line_6s_image = {
	0,0,		/* LeftEdge, TopEdge */
	30,27,2,		/* Width, Height, Depth */
	&line_6s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_7u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7DFF, 	0x7FF1, 
	0x7DFF, 	0xBFF1, 
	0x7DFF, 	0xDFF1, 
	0x7DFF, 	0xE7F1, 
	0x7DFF, 	0xFBF1, 
	0x7DFF, 	0xFDF1, 
	0x7DFF, 	0xFEF1, 
	0x7DFF, 	0x7F71, 
	0x7DFE, 	0xBEF1, 
	0x7EFE, 	0xB9F1, 
	0x7F7D, 	0xD7F1, 
	0x7F7B, 	0xEFF1, 
	0x7FB7, 	0xFFF1, 
	0x7FD7, 	0xFFF1, 
	0x7FEF, 	0xFFF1, 
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
	0x3FF, 	0x7, 
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

struct Image line_7u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_7u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_7s_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x3FF, 	0x1, 
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
	0x7DFF, 	0x7FF7, 
	0x7DFF, 	0xBFF7, 
	0x7DFF, 	0xDFF7, 
	0x7DFF, 	0xE7F7, 
	0x7DFF, 	0xFBF7, 
	0x7DFF, 	0xFDF7, 
	0x7DFF, 	0xFEF7, 
	0x7DFF, 	0x7F77, 
	0x7DFE, 	0xBEF7, 
	0x7EFE, 	0xB9F7, 
	0x7F7D, 	0xD7F7, 
	0x7F7B, 	0xEFF7, 
	0x7FB7, 	0xFFF7, 
	0x7FD7, 	0xFFF7, 
	0x7FEF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x0, 	0x7, 

};

struct Image line_7s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_7s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_8u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7EFF, 	0xFFF1, 
	0x7F7F, 	0xFFF1, 
	0x7FBF, 	0xFFF1, 
	0x7FDF, 	0xFFF1, 
	0x7FEF, 	0xFFF1, 
	0x7FF7, 	0xFFF1, 
	0x7FFB, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
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
	0x0, 	0x207, 
	0x0, 	0x407, 
	0x0, 	0x807, 
	0x0, 	0x1007, 
	0x0, 	0x2007, 
	0x0, 	0x4007, 
	0x0, 	0x8007, 
	0x1, 	0x7, 
	0x2, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 

};

struct Image line_8u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_8u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_8s_imageData[] = {

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
	0x0, 	0x201, 
	0x0, 	0x401, 
	0x0, 	0x801, 
	0x0, 	0x1001, 
	0x0, 	0x2001, 
	0x0, 	0x4001, 
	0x0, 	0x8001, 
	0x1, 	0x1, 
	0x2, 	0x1, 
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
	0x7EFF, 	0xFFF7, 
	0x7F7F, 	0xFFF7, 
	0x7FBF, 	0xFFF7, 
	0x7FDF, 	0xFFF7, 
	0x7FEF, 	0xFFF7, 
	0x7FF7, 	0xFFF7, 
	0x7FFB, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
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

struct Image line_8s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_8s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_9u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x8000, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0xEFF1, 
	0x7FFF, 	0xDFF1, 
	0x7FFF, 	0xBFF1, 
	0x7FFF, 	0x7FF1, 
	0x7FFE, 	0xFFF1, 
	0x7FFD, 	0xFFF1, 
	0x7FFB, 	0xFFF1, 
	0x7FF7, 	0xFFF1, 
	0x7FEF, 	0xFFF1, 
	0x7FDF, 	0xFFF1, 
	0x7FBF, 	0xFFF1, 
	0x7F7F, 	0xFFF1, 
	0x7EFF, 	0xFFF1, 
	0x7DFF, 	0xFFF1, 
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
	0x0, 	0x107, 
	0x0, 	0x207, 
	0x0, 	0x407, 
	0x0, 	0x807, 
	0x0, 	0x1007, 
	0x0, 	0x2007, 
	0x0, 	0x4007, 
	0x0, 	0x8007, 
	0x1, 	0x7, 
	0x2, 	0x7, 
	0x4, 	0x7, 
	0x8, 	0x7, 
	0x10, 	0x7, 
	0x20, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 
	0x0, 	0x7, 

};

struct Image line_9u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_9u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_9s_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x3, 
	0x8000, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x103, 
	0x0, 	0x203, 
	0x0, 	0x403, 
	0x0, 	0x803, 
	0x0, 	0x1003, 
	0x0, 	0x2003, 
	0x0, 	0x4003, 
	0x0, 	0x8003, 
	0x1, 	0x3, 
	0x2, 	0x3, 
	0x4, 	0x3, 
	0x8, 	0x3, 
	0x10, 	0x3, 
	0x20, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x3, 
	0x0, 	0x7, 

/*------ plane # 1: --------*/

	0xFFFF, 	0xFFFF, 
	0xFFFF, 	0xFFFF, 
	0x0, 	0x7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xEFF7, 
	0x7FFF, 	0xDFF7, 
	0x7FFF, 	0xBFF7, 
	0x7FFF, 	0x7FF7, 
	0x7FFE, 	0xFFF7, 
	0x7FFD, 	0xFFF7, 
	0x7FFB, 	0xFFF7, 
	0x7FF7, 	0xFFF7, 
	0x7FEF, 	0xFFF7, 
	0x7FDF, 	0xFFF7, 
	0x7FBF, 	0xFFF7, 
	0x7F7F, 	0xFFF7, 
	0x7EFF, 	0xFFF7, 
	0x7DFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x7FFF, 	0xFFF7, 
	0x0, 	0x7, 

};

struct Image line_9s_image = {
	0,0,		/* LeftEdge, TopEdge */
	30,27,2,		/* Width, Height, Depth */
	&line_9s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_10u_imageData[] = {

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

struct Image line_10u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_10u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_10s_imageData[] = {

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

struct Image line_10s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_10s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_11u_imageData[] = {

/*------ plane # 0: --------*/

	0xC000, 	0x1, 
	0x0, 	0x1, 
	0x0, 	0x1, 
	0x7FFF, 	0xFFF1, 
	0x7FFF, 	0x1FF1, 
	0x7FF8, 	0x7FF1, 
	0x7FFB, 	0xFFF1, 
	0x79F3, 	0xFFF1, 
	0x7C77, 	0xC0F1, 
	0x7F00, 	0x1F71, 
	0x7FF3, 	0xFF71, 
	0x7FF9, 	0xFE71, 
	0x7FFC, 	0xFCF1, 
	0x7FF8, 	0x1F1, 
	0x7FC3, 	0x3FF1, 
	0x7F9F, 	0x9FF1, 
	0x7F3F, 	0xCFF1, 
	0x7F7F, 	0xEFF1, 
	0x7F7F, 	0xE7F1, 
	0x7F7F, 	0xF7F1, 
	0x7FBF, 	0xF7F1, 
	0x7F9F, 	0xF7F1, 
	0x7FCF, 	0xEFF1, 
	0x7FE3, 	0xEFF1, 
	0x7FF8, 	0xFF1, 
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

struct Image line_11u_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_11u_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

/*----- bitmap : w = 32, h = 27 ------ */
UWORD line_11s_imageData[] = {

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
	0x7FFF, 	0x1FF7, 
	0x7FF8, 	0x7FF7, 
	0x7FFB, 	0xFFF7, 
	0x79F3, 	0xFFF7, 
	0x7C77, 	0xC0F7, 
	0x7F00, 	0x1F77, 
	0x7FF3, 	0xFF77, 
	0x7FF9, 	0xFE77, 
	0x7FFC, 	0xFCF7, 
	0x7FF8, 	0x1F7, 
	0x7FC3, 	0x3FF7, 
	0x7F9F, 	0x9FF7, 
	0x7F3F, 	0xCFF7, 
	0x7F7F, 	0xEFF7, 
	0x7F7F, 	0xE7F7, 
	0x7F7F, 	0xF7F7, 
	0x7FBF, 	0xF7F7, 
	0x7F9F, 	0xF7F7, 
	0x7FCF, 	0xEFF7, 
	0x7FE3, 	0xEFF7, 
	0x7FF8, 	0xFF7, 
	0x7FFF, 	0xFFF7, 
	0x0, 	0x7, 

};

struct Image line_11s_image = {
	0,0,		/* LeftEdge, TopEdge */
	31,27,2,		/* Width, Height, Depth */
	&line_11s_imageData[0],	/* Image Data */
	3,0,		/* PlanePick, PlaneOnOff */
	NULL		/* NextImage */
};

