/*
 *  Copyright (c) 2012 David Koch
 *
 *  See the file "license.terms" for information on usage and redistribution
 *  of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 *     $Id: exdl_rtf.c,v 1.5 2005/06/29 14:45:38 dgud Exp $
 */

#include "exdl.h"

#ifdef COMPILE_RTF

EXDL_API(ertf_linked_Version)
{
  /* const SDL_version* RTF_Linked_Version(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(const SDL_version*)

    RTF_Linked_Version
    (
    );

  THROW_POINTER()
}

EXDL_API(ertf_createContext)
{
  /* RTF_Context* RTF_CreateContext(RTF_FontEngine* fontEngine) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(RTF_FontEngine, fontEngine[])
  STACK_FMT_END()

  CATCH_RESULT(RTF_Context*)

    RTF_CreateContext
    ( STACK_GET_ADDR(fontEngine)
    );

  THROW_POINTER()
}

EXDL_API(ertf_load)
{
  /* int RTF_Load(RTF_Context* ctx, const char* file) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(RTF_Context*, ctx)
    STACK_FMT_DATA(char,         file[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    RTF_Load
    ( STACK_GET_DATA(ctx)
    , STACK_GET_ADDR(file)
    );

  THROW_RESULT(int)
}

EXDL_API(ertf_load_RW)
{
  /* int RTF_Load_RW(RTF_Context* ctx, SDL_RWops* src, int freesrc) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(RTF_Context*, ctx)
    STACK_FMT_LPTR(SDL_RWops*,   src)
    STACK_FMT_DATA(int,          freesrc)
  STACK_FMT_END()

  CATCH_RESULT(int)

    RTF_Load_RW
    ( STACK_GET_DATA(ctx)
    , STACK_GET_DATA(src)
    , STACK_GET_DATA(freesrc)
    );

  THROW_RESULT(int)
}

EXDL_API(ertf_getTitle)
{
  /* const char* RTF_GetTitle(RTF_Context* ctx) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(RTF_Context*, ctx)
  STACK_FMT_END()

  CATCH_RESULT(const char*)

    RTF_GetTitle
    ( STACK_GET_DATA(ctx)
    );

  THROW_STRING()
}

EXDL_API(ertf_getSubject)
{
  /* const char* RTF_GetSubject(RTF_Context* ctx) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(RTF_Context*, ctx)
  STACK_FMT_END()

  CATCH_RESULT(const char*)

    RTF_GetSubject
    ( STACK_GET_DATA(ctx)
    );

  THROW_STRING()
}

EXDL_API(ertf_getAuthor)
{
  /* const char* RTF_GetAuthor(RTF_Context* ctx) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(RTF_Context*, ctx)
  STACK_FMT_END()

  CATCH_RESULT(const char*)

    RTF_GetAuthor
    ( STACK_GET_DATA(ctx)
    );

  THROW_STRING()
}

EXDL_API(ertf_getHeight)
{
  /* int RTF_GetHeight(RTF_Context* ctx, int width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(RTF_Context*, ctx)
    STACK_FMT_DATA(int,          width)
  STACK_FMT_END()

  CATCH_RESULT(int)

    RTF_GetHeight
    ( STACK_GET_DATA(ctx)
    , STACK_GET_DATA(width)
    );

  THROW_RESULT(int)
}

EXDL_API(ertf_render)
{
  /* void RTF_Render(RTF_Context* ctx, SDL_Surface* surface, SDL_Rect* rect, int yOffset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(RTF_Context*, ctx)
    STACK_FMT_LPTR(SDL_Surface*, surface)
    STACK_FMT_LPTR(SDL_Rect*,    rect)
    STACK_FMT_DATA(int,          yOffset)
  STACK_FMT_END()

    RTF_Render
    ( STACK_GET_DATA(ctx)
    , STACK_GET_DATA(surface)
    , STACK_GET_DATA(rect)
    , STACK_GET_DATA(yOffset)
    );
}

EXDL_API(ertf_freeContext)
{
  /* void RTF_FreeContext(RTF_Context* ctx) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(RTF_Context, ctx[])
  STACK_FMT_END()

    RTF_FreeContext
    ( STACK_GET_ADDR(ctx)
    );
}

#endif // COMPILE_RTF
