/*
 *  Copyright (c) 2012 David Koch
 *
 *  See the file "license.terms" for information on usage and redistribution
 *  of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 *     $Id: exdl_mouse.h,v 1.5 2005/06/29 14:45:38 dgud Exp $
 */

  #ifdef __cplusplus
  extern "C" {
  #endif /* __cplusplus */

  enum
  { SDL_GetMouseState_ENUM = EXDL_MOUSE_H
  , SDL_GetRelativeMouseState_ENUM
  , SDL_WarpMouse_ENUM
  , SDL_CreateCursor_ENUM
  , SDL_SetCursor_ENUM
  , SDL_GetCursor_ENUM
  , SDL_FreeCursor_ENUM
  , SDL_ShowCursor_ENUM
  , _ENUM_EXDL_MOUSE
  };


EXDL_API(emou_getMouseState);
EXDL_API(emou_getRelativeMouseState);
EXDL_API(emou_warpMouse);
EXDL_API(emou_createCursor);
EXDL_API(emou_setCursor);
EXDL_API(emou_getCursor);
EXDL_API(emou_freeCursor);
EXDL_API(emou_showCursor);


  #ifdef __cplusplus
  }
  #endif /* __cplusplus */
