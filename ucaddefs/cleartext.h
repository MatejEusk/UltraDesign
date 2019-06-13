/* There are the clear text definitions for UltraCAD */

#ifndef DEFCLR
#define DEFCLR(varnam,type,text) extern struct mesdef varnam /* Dummy extern */
#define DEFMOD(varnam,text)	extern char *varnam
#endif

DEFMOD(LINE_MODE,"Line");
DEFCLR(LINE_MESS_PT1,		INF,"Set Start Point of Line");
DEFCLR(LINE_MESS_PT2,		INF,"Set End Point of Line");
DEFCLR(LINE_MESS_THRU,		INF,"Set Draw Through Point");
DEFCLR(LINE_MESS_FIRST,		ERR,"Start a line first");
DEFCLR(LINE_MESS_COPY,		INF,"Copyright � 1989 WURBsoft Inc");

DEFMOD(ELLIP_MODE,"Ellipse");
DEFCLR(ELLIP_MESS_CENT,		INF,"Set Center of Ellipse");
DEFCLR(ELLIP_MESS_RAD,		INF,"Set Radii of Ellipse");
DEFCLR(ELLIP_MESS_STP,		INF,"Set Ellipse Arc Starting Ang");
DEFCLR(ELLIP_MESS_ENP,		INF,"Set Ellipse Arc Ending Angle");
DEFCLR(ELLIP_MESS_ROT,		INF,"Set Ellipse Rotation");
DEFCLR(ELLIP_MESS_FINISH,	WAR,"Set the Center and/or Radius");
DEFCLR(ELLIP_MESS_REND,		INF,"Select Option or Render");
DEFCLR(ELLIP_MESS_NOTSET,	ERR,"Both Center and Radius must be set");

DEFMOD(DIM_MODE,"Dimensioning");
DEFCLR(DIM_MESS_WTOP,		INF,"Set First Witness Point");
DEFCLR(DIM_MESS_DIML,		INF,"Set First Witness Line");
DEFCLR(DIM_MESS_WBOT,		INF,"Set Second Witness Point");
DEFCLR(DIM_MESS_PBOX,		INF,"Position Box");
DEFCLR(DIM_MESS_FINISH,		WAR,"Set Witness and/or Dim Lines");
DEFCLR(DIM_MESS_REND,		INF,"Select Option or Render");
DEFCLR(DIM_MESS_NOTSET,		ERR,"Witness and Dimensions Must be Set");

DEFMOD(TEXT_MODE,"Text");
DEFCLR(TEXT_MESS_HAND,		INF,"Place Text Handle");
DEFCLR(TEXT_MESS_ROT,		INF,"Set Text Box Rotation");
DEFCLR(TEXT_MESS_SET,		WAR,"The Handle Point Must Be Set");
DEFCLR(TEXT_MESS_NOTSET,	ERR,"Handle Point Not Set");
DEFCLR(TEXT_MESS_REND,		INF,"Select Option or Render");
DEFCLR(TEXT_MESS_REQ,		INF,"Enter Text in Box and Press [Return]");

DEFMOD(HATCH_MODE,"Hatch");
DEFCLR(HATCH_MESS_POLY,		INF,"Select Hatching/Filling Boundaries");
DEFCLR(HATCH_MESS_NOPOLY,	ERR,"You Must Select Boundaries");
DEFCLR(HATCH_MESS_REND,		INF,"Select Option or Render");

DEFMOD(ZOOM_MODE,"Zoom In");
DEFCLR(ZOOM_MESS_FP,		INF,"Set Left Upper Corner of Zoom Box");
DEFCLR(ZOOM_MESS_SP,		INF,"Set Size of Zoom Box");
DEFCLR(ZOOM_MESS_ABORT,		WAR,"Zoom Aborted");
DEFCLR(ZOOM_MESS_EXIT,		ERR,"Finish Zooming First");

DEFCLR(BOX_MESS_FP,		INF,"Set Position of Clipping Box");
DEFCLR(BOX_MESS_SP,		INF,"Set Size of Clipping Box");
DEFCLR(BOX_MESS_PICK,		ACT,"Clipping Objects - Please Wait");
DEFCLR(BOX_MESS_ABORT,		WAR,"Box Clip Aborted");
DEFCLR(BOX_MESS_EXIT,		ERR,"Finish Box Clipping First");

DEFMOD(BOXIN_MODE,"Box In");
DEFMOD(BOXOUT_MODE,"Box Out");
DEFMOD(BOXALL_MODE,"Box All");

DEFMOD(SCALE_MODE,"Scale");
DEFCLR(SCALE_MESS_P1,		INF,"Set Steady Point");
DEFCLR(SCALE_MESS_P1ERR,	WAR,"Handle and Source must be different");
DEFCLR(SCALE_MESS_P2,		INF,"Set Source Point");
DEFCLR(SCALE_MESS_P3,		INF,"Set Target Point");
DEFCLR(SCALE_MESS_SCALE,	ACT,"Scaling Objects - Please Wait");
DEFCLR(SCALE_MESS_ABORT,	WAR,"Scaling Aborted");
DEFCLR(SCALE_MESS_EXIT,		ERR,"Finish Scaling First");

DEFMOD(CLONE_MODE,"Clone");
DEFCLR(CLONE_MESS_P1,		INF,"Set Handle Point");
DEFCLR(CLONE_MESS_P2,		INF,"Place Items, Right Mouse to Stop");
DEFCLR(CLONE_MESS_CLONE,	ACT,"Copying Items - Please Wait");
DEFCLR(CLONE_MESS_ABORT,	WAR,"Clone Mode Aborted");
DEFCLR(CLONE_MESS_EXIT,		ERR,"Finish Cloning - Right Mouse to Stop");

DEFMOD(DRAG_MODE,"Drag");
DEFCLR(DRAG_MESS_P1,		INF,"Set Handle Point");
DEFCLR(DRAG_MESS_P2,		INF,"Set Target Handle Point");
DEFCLR(DRAG_MESS_MOVE,		ACT,"Moving Items - Please Wait");
DEFCLR(DRAG_MESS_ABORT,		WAR,"Drag Aborted");
DEFCLR(DRAG_MESS_EXIT,		ERR,"Finish Dragging First");

DEFMOD(RAZOR_MODE,"Razor");
DEFCLR(RAZOR_MESS_P1,		INF,"Start Razor Line");
DEFCLR(RAZOR_MESS_P2,		INF,"Finish Razor Line");
DEFCLR(RAZOR_MESS_WAIT,		ACT,"Razoring Items - Please Wait");
DEFCLR(RAZOR_MESS_ABORT,	WAR,"Razor Aborted");
DEFCLR(RAZOR_MESS_EXIT,		ERR,"Finish Razoring First");

DEFMOD(SEARCH_MODE,"Search");
DEFCLR(SEARCH_MESS_FIND,	INF,"Select Item to Locate");
DEFCLR(SEARCH_MESS_WAIT,	ACT,"Searching For Item - Please Wait");
DEFCLR(SEARCH_MESS_ABORT,	WAR,"Search Aborted");
DEFCLR(SEARCH_MESS_EXIT,	ERR,"Finish Searching First");

DEFMOD(LIBRARY_MODE,"Library");
DEFCLR(LIBRARY_MESS_PUT,	INF,"Set Insertion Handle Point");
DEFCLR(LIBRARY_MESS_ABORT,	WAR,"Library Insert Aborted");
DEFCLR(LIBRARY_MESS_EXIT,	ERR,"Finish Library Insertion First");
DEFCLR(LIBRARY_MESS_SELLIB,	ERR,"Please Select A Library To Use First");
DEFCLR(LIBRARY_MESS_SELITEM,	ERR,"Please Select An Library Item First");

DEFMOD(DISPATCH_MODE,"Menus");
DEFCLR(DISPATCH_UNDERCONST,	ERR,"Item Not Yet Implemented");
DEFCLR(DISPATCH_NOVIEW,		ERR,"Key Does Not Hold a Stored View");
DEFCLR(DISPATCH_ILLEGAL,	ERR,"That Key Is Not a Command");

DEFMOD(PERMORG_MODE,"Perm Org");
DEFCLR(PERMORG_MESS_FIND,	INF,"Set New Permanent Origin");
DEFCLR(PERMORG_MESS_WAIT,	ACT,"Setting Origin - Please Wait");
DEFCLR(PERMORG_MESS_ABORT,	WAR,"Permanent Origin Set Aborted");
DEFCLR(PERMORG_MESS_EXIT,	ERR,"Finish Setting Origin First");

DEFMOD(CENTER_MODE,"Center Set");
DEFCLR(CENTER_MESS_FIND,	INF,"Set New Center Point");
DEFCLR(CENTER_MESS_ABORT,	WAR,"Set New Center Aborted");
DEFCLR(CENTER_MESS_EXIT,	ERR,"Finish Set New Center First");

DEFMOD(TEMPORG_MODE,"Temp Org");
DEFCLR(TEMPORG_MESS_FIND,	INF,"Set New Temporary Origin");
DEFCLR(TEMPORG_MESS_ABORT,	WAR,"Temporary Origin Set Aborted");
DEFCLR(TEMPORG_MESS_EXIT,	ERR,"Finish Setting Origin First");

DEFMOD(GETPOINT_MODE,"Store Point");
DEFCLR(GETPOINT_MESS_FIND,	INF,"Set Point to Store");
DEFCLR(GETPOINT_MESS_ABORT,	WAR,"Set Point Aborted");
DEFCLR(GETPOINT_MESS_EXIT,	ERR,"Finish Setting Point First");

DEFMOD(SEEK_MODE,"Seek");
DEFCLR(SEEK_MESS_FIND,		INF,"Select Item to Seek");
DEFCLR(SEEK_MESS_WAIT,		ACT,"Searching For Item");
DEFCLR(SEEK_MESS_ABORT,		WAR,"Seek Aborted");
DEFCLR(SEEK_MESS_EXIT,		ERR,"Finish Seeking First");

DEFMOD(LINHOOK_MODE,"Line Hook");
DEFCLR(LINHOOK_MESS_FIND,	INF,"Select Line to Hook");
DEFCLR(LINHOOK_MESS_WAIT,	ACT,"Searching For Line");
DEFCLR(LINHOOK_MESS_PLACE,	INF,"Place New Point");
DEFCLR(LINHOOK_MESS_ABORT,	WAR,"Hook Aborted");
DEFCLR(LINHOOK_MESS_EXIT,	ERR,"Finish Hooking First");

DEFMOD(XFLIP_MODE,"Horiz");
DEFMOD(YFLIP_MODE,"Vert");
DEFCLR(FLIP_MESS_CENT,		INF,"Set Center Flip Axis");
DEFCLR(FLIP_MESS_WAIT,		ACT,"Flipping Items - Please Wait");
DEFCLR(FLIP_MESS_EXIT,		ERR,"Finish Flipping First");
DEFCLR(FLIP_MESS_ABORT,		WAR,"Flipping Aborted");

DEFMOD(ROTATE_MODE,"Rotate");
DEFCLR(ROTATE_MESS_P1,		INF,"Set Steady Point");
DEFCLR(ROTATE_MESS_P2,		INF,"Set Starting Angle");
DEFCLR(ROTATE_MESS_P3,		INF,"Set Ending Angle");
DEFCLR(ROTATE_MESS_ROTATE,	ACT,"Rotating Objects - Please Wait");
DEFCLR(ROTATE_MESS_ABORT,	WAR,"Rotation Aborted");
DEFCLR(ROTATE_MESS_EXIT,	ERR,"Finish Rotating First");

DEFMOD(LOAD_MODE,"Load");
DEFCLR(LOAD_MESS_LOAD,		ACT,"Loading File");
DEFCLR(LOAD_MESS_GOTIT,		WAR,"File Loaded Sucessfully");
DEFCLR(LOAD_MESS_ERROR,		ERR,"File Load Error");

DEFMOD(MERGE_MODE,"Merge");
DEFCLR(MERGE_MESS_MERGE,	ACT,"Merge File");
DEFCLR(MERGE_MESS_GOTIT,	WAR,"File Merged Sucessfully");
DEFCLR(MERGE_MESS_ERROR,	ERR,"File Merge Error");

DEFMOD(SAVE_MODE,"Save");
DEFCLR(SAVE_MESS_SAVE,		ACT,"Saving File");
DEFCLR(SAVE_MESS_GOTIT,		WAR,"File Saved Sucessfully");
DEFCLR(SAVE_MESS_ERROR,		ERR,"File Save Error");

DEFMOD(UNHOOK_MODE,"Line Unhook");
DEFCLR(UNHOOK_MESS_FIND,	INF,"Select Common Line Endpoint");
DEFCLR(UNHOOK_MESS_WAIT,	ACT,"Searching For Common Endpoint");
DEFCLR(UNHOOK_MESS_ABORT,	WAR,"Unhook Aborted");
DEFCLR(UNHOOK_MESS_EXIT,	ERR,"Finish Unhooking First");

DEFMOD(UNHEND_MODE,"Move Endpoint");
DEFCLR(UNHEND_MESS_FIND,	INF,"Select Line Endpoint");
DEFCLR(UNHEND_MESS_WAIT,	ACT,"Searching For Endpoint");
DEFCLR(UNHEND_MESS_PLACE,	INF,"Set New Endpoint");
DEFCLR(UNHEND_MESS_ABORT,	WAR,"Move Endpoint Aborted");
DEFCLR(UNHEND_MESS_EXIT,	ERR,"Finish Moving Point");

DEFMOD(INTER_MODE,"Seek Intersect");
DEFCLR(INTER_MESS_FIND,		INF,"Select First Line");
DEFCLR(INTER_MESS_FINDI,	INF,"Select Intersecting Line");
DEFCLR(INTER_MESS_WAIT,		ACT,"Searching For Intersection");
DEFCLR(INTER_MESS_BAD,		ERR,"Cannot Find Line");
DEFCLR(INTER_MESS_SAME,		ERR,"Select a Different Line");
DEFCLR(INTER_MESS_ABORT,	WAR,"Seek Aborted");
DEFCLR(INTER_MESS_NONE,		ERR,"Lines Don't Intersect");
DEFCLR(INTER_MESS_EXIT,		ERR,"Finish Seeking First");

DEFMOD(FILET_MODE,"Filet Lines");
DEFCLR(FILET_MESS_FIND,		INF,"Select First Line");
DEFCLR(FILET_MESS_FINDI,	INF,"Select Second Line");
DEFCLR(FILET_MESS_WAIT,		ACT,"Calculating Filet");
DEFCLR(FILET_MESS_BAD,		ERR,"Cannot Find Line");
DEFCLR(FILET_MESS_SAME,		ERR,"Select a Different Line");
DEFCLR(FILET_MESS_ABORT,	WAR,"Filet Aborted");
DEFCLR(FILET_MESS_NONE,		ERR,"Cannot Filet Lines");
DEFCLR(FILET_MESS_EXIT,		ERR,"Finish Filet First");

DEFMOD(EDIT_MODE,"Edit Item");
DEFCLR(EDIT_MESS_FIND,		INF,"Select Item to Edit");
DEFCLR(EDIT_MESS_WAIT,		ACT,"Searching For Item - Please Wait");
DEFCLR(EDIT_MESS_ABORT,		WAR,"Search Aborted");
DEFCLR(EDIT_MESS_EXIT,		ERR,"Finish Searching First");
