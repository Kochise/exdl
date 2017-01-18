/*
 *  Copyright (c) 2012 David Koch
 *
 *  See the file "license.terms" for information on usage and redistribution
 *  of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 *     $Id: exdl_video.c,v 1.5 2005/06/29 14:45:38 dgud Exp $
 */

#include "exdl.h"

EXDL_API(evdo_videoInit)
{
  /* int SDL_VideoInit(const char* driver_name, Uint32 flags) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(char*,  driver_name)
    STACK_FMT_DATA(Uint32, flags)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_VideoInit
    ( STACK_GET_DATA(driver_name)
    , STACK_GET_DATA(flags)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_videoQuit)
{
  /* void SDL_VideoQuit(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  SDL_VideoQuit
  (
  );
}

EXDL_API(evdo_videoDriverName)
{
  /* char* SDL_VideoDriverName(char* namebuf, int maxlen) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(char*, namebuf)
    STACK_FMT_DATA(int,   maxlen)
  STACK_FMT_END()

  CATCH_RESULT(char*)

    SDL_VideoDriverName
    ( STACK_GET_DATA(namebuf)
    , STACK_GET_DATA(maxlen)
    );

  THROW_STRING()
}

EXDL_API(evdo_getVideoSurface)
{
  /* SDL_Surface* SDL_GetVideoSurface(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(SDL_Surface*)

    SDL_GetVideoSurface
    (
    );

  THROW_POINTER()
}

EXDL_API(evdo_getVideoInfo)
{
  /* const SDL_VideoInfo* SDL_GetVideoInfo(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(const SDL_VideoInfo*)

    SDL_GetVideoInfo
    (
    );

  THROW_POINTER()
}

EXDL_API(evdo_videoModeOK)
{
  /* int SDL_VideoModeOK(int width, int height, int bpp, Uint32 flags) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(int,    width)
    STACK_FMT_DATA(int,    height)
    STACK_FMT_DATA(int,    bpp)
    STACK_FMT_DATA(Uint32, flags)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_VideoModeOK
    ( STACK_GET_DATA(width)
    , STACK_GET_DATA(height)
    , STACK_GET_DATA(bpp)
    , STACK_GET_DATA(flags)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_listModes)
{
  /* SDL_Rect** SDL_ListModes(SDL_PixelFormat* format, Uint32 flags) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_PixelFormat*, format)
    STACK_FMT_DATA(Uint32,           flags)
  STACK_FMT_END()

  CATCH_RESULT(SDL_Rect**)

    SDL_ListModes
    ( STACK_GET_DATA(format)
    , STACK_GET_DATA(flags)
    );

  THROW_POINTER()
}

EXDL_API(evdo_setVideoMode)
{
  /* SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, Uint32 flags) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(int,    width)
    STACK_FMT_DATA(int,    height)
    STACK_FMT_DATA(int,    bpp)
    STACK_FMT_DATA(Uint32, flags)
  STACK_FMT_END()

  CATCH_RESULT(SDL_Surface*)

    SDL_SetVideoMode
    ( STACK_GET_DATA(width)
    , STACK_GET_DATA(height)
    , STACK_GET_DATA(bpp)
    , STACK_GET_DATA(flags)
    );

  THROW_POINTER()
}

EXDL_API(evdo_updateRects)
{
  /* void SDL_UpdateRects(SDL_Surface* screen, int numrects, SDL_Rect* rects) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, screen)
    STACK_FMT_DATA(int,          numrects)
    STACK_FMT_DATA(SDL_Rect,     rects[])
  STACK_FMT_END()

    SDL_UpdateRects
    ( STACK_GET_DATA(screen)
    , STACK_GET_DATA(numrects)
    , STACK_GET_ADDR(rects)
    );
}

EXDL_API(evdo_updateRect)
{
  /* void SDL_UpdateRect(SDL_Surface* screen, Sint32 x, Sint32 y, Uint32 w, Uint32 h) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, screen)
    STACK_FMT_DATA(Sint32,       x)
    STACK_FMT_DATA(Sint32,       y)
    STACK_FMT_DATA(Uint32,       w)
    STACK_FMT_DATA(Uint32,       h)
  STACK_FMT_END()

    SDL_UpdateRect
    ( STACK_GET_DATA(screen)
    , STACK_GET_DATA(x)
    , STACK_GET_DATA(y)
    , STACK_GET_DATA(w)
    , STACK_GET_DATA(h)
    );
}

EXDL_API(evdo_flip)
{
  /* int SDL_Flip(SDL_Surface* screen) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Surface, screen[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_Flip
    ( STACK_GET_ADDR(screen)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_setGamma)
{
  /* int SDL_SetGamma(float red, float green, float blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(float, red)
    STACK_FMT_DATA(float, green)
    STACK_FMT_DATA(float, blue)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_SetGamma
    ( STACK_GET_DATA(red)
    , STACK_GET_DATA(green)
    , STACK_GET_DATA(blue)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_setGammaRamp)
{
  /* int SDL_SetGammaRamp(const Uint16* red, const Uint16* green, const Uint16* blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(Uint16*, red)
    STACK_FMT_LPTR(Uint16*, green)
    STACK_FMT_DATA(Uint16,  blue[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_SetGammaRamp
    ( STACK_GET_DATA(red)
    , STACK_GET_DATA(green)
    , STACK_GET_ADDR(blue)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_getGammaRamp)
{
  /* int SDL_GetGammaRamp(Uint16* red, Uint16* green, Uint16* blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(Uint16*, red)
    STACK_FMT_LPTR(Uint16*, green)
    STACK_FMT_LPTR(Uint16*, blue)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_GetGammaRamp
    ( STACK_GET_DATA(red)
    , STACK_GET_DATA(green)
    , STACK_GET_DATA(blue)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_setColors)
{
  /* int SDL_SetColors(SDL_Surface* surface, SDL_Color* colors, int firstcolor, int ncolors) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, surface)
    STACK_FMT_LPTR(SDL_Color*,   colors)
    STACK_FMT_DATA(int,          firstcolor)
    STACK_FMT_DATA(int,          ncolors)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_SetColors
    ( STACK_GET_DATA(surface)
    , STACK_GET_DATA(colors)
    , STACK_GET_DATA(firstcolor)
    , STACK_GET_DATA(ncolors)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_setPalette)
{
  /* int SDL_SetPalette(SDL_Surface* surface, int flags, SDL_Color* colors, int firstcolor, int ncolors) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, surface)
    STACK_FMT_DATA(int,          flags)
    STACK_FMT_LPTR(SDL_Color*,   colors)
    STACK_FMT_DATA(int,          firstcolor)
    STACK_FMT_DATA(int,          ncolors)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_SetPalette
    ( STACK_GET_DATA(surface)
    , STACK_GET_DATA(flags)
    , STACK_GET_DATA(colors)
    , STACK_GET_DATA(firstcolor)
    , STACK_GET_DATA(ncolors)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_mapRGB)
{
  /* Uint32 SDL_MapRGB(const SDL_PixelFormat* const format, const Uint8 r, const Uint8 g, const Uint8 b) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_PixelFormat*, format)
    STACK_FMT_DATA(Uint8,            r)
    STACK_FMT_DATA(Uint8,            g)
    STACK_FMT_DATA(Uint8,            b)
  STACK_FMT_END()

  CATCH_RESULT(Uint32)

    SDL_MapRGB
    ( STACK_GET_DATA(format)
    , STACK_GET_DATA(r)
    , STACK_GET_DATA(g)
    , STACK_GET_DATA(b)
    );

  THROW_RESULT(Uint32)
}

EXDL_API(evdo_mapRGBA)
{
  /* Uint32 SDL_MapRGBA(const SDL_PixelFormat* const format, const Uint8 r, const Uint8 g, const Uint8 b, const Uint8 a) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_PixelFormat*, format)
    STACK_FMT_DATA(Uint8,            r)
    STACK_FMT_DATA(Uint8,            g)
    STACK_FMT_DATA(Uint8,            b)
    STACK_FMT_DATA(Uint8,            a)
  STACK_FMT_END()

  CATCH_RESULT(Uint32)

    SDL_MapRGBA
    ( STACK_GET_DATA(format)
    , STACK_GET_DATA(r)
    , STACK_GET_DATA(g)
    , STACK_GET_DATA(b)
    , STACK_GET_DATA(a)
    );

  THROW_RESULT(Uint32)
}

EXDL_API(evdo_getRGB)
{
  /* void SDL_GetRGB(Uint32 pixel, SDL_PixelFormat* fmt, Uint8* r, Uint8* g, Uint8* b) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(Uint32, pixel)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(SDL_PixelFormat, fmt)
    FRAME_FMT_DATA(Uint8,           r)
    FRAME_FMT_DATA(Uint8,           g)
    FRAME_FMT_DATA(Uint8,           b)
  FRAME_FMT_END()

    SDL_GetRGB
    ( STACK_GET_DATA(pixel)
    , FRAME_GET_ADDR(fmt)
    , FRAME_GET_ADDR(r)
    , FRAME_GET_ADDR(g)
    , FRAME_GET_ADDR(b)
    );

  THROW_FRAME()
}

EXDL_API(evdo_getRGBA)
{
  /* void SDL_GetRGBA(Uint32 pixel, SDL_PixelFormat* fmt, Uint8* r, Uint8* g, Uint8* b, Uint8* a) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(Uint32, pixel)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(SDL_PixelFormat, fmt)
    FRAME_FMT_DATA(Uint8,           r)
    FRAME_FMT_DATA(Uint8,           g)
    FRAME_FMT_DATA(Uint8,           b)
    FRAME_FMT_DATA(Uint8,           a)
  FRAME_FMT_END()

    SDL_GetRGBA
    ( STACK_GET_DATA(pixel)
    , FRAME_GET_ADDR(fmt)
    , FRAME_GET_ADDR(r)
    , FRAME_GET_ADDR(g)
    , FRAME_GET_ADDR(b)
    , FRAME_GET_ADDR(a)
    );

  THROW_FRAME()
}

EXDL_API(evdo_createRGBSurface)
{
  /* SDL_Surface* SDL_CreateRGBSurface(Uint32 flags, int width, int height, int depth, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(Uint32, flags)
    STACK_FMT_DATA(int,    width)
    STACK_FMT_DATA(int,    height)
    STACK_FMT_DATA(int,    depth)
    STACK_FMT_DATA(Uint32, Rmask)
    STACK_FMT_DATA(Uint32, Gmask)
    STACK_FMT_DATA(Uint32, Bmask)
    STACK_FMT_DATA(Uint32, Amask)
  STACK_FMT_END()

  CATCH_RESULT(SDL_Surface*)

    SDL_CreateRGBSurface
    ( STACK_GET_DATA(flags)
    , STACK_GET_DATA(width)
    , STACK_GET_DATA(height)
    , STACK_GET_DATA(depth)
    , STACK_GET_DATA(Rmask)
    , STACK_GET_DATA(Gmask)
    , STACK_GET_DATA(Bmask)
    , STACK_GET_DATA(Amask)
    );

  THROW_POINTER()
}

EXDL_API(evdo_createRGBSurfaceFrom)
{
  /* SDL_Surface* SDL_CreateRGBSurfaceFrom(void* pixels, int width, int height, int depth, int pitch, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(void*,  pixels)
    STACK_FMT_DATA(int,    width)
    STACK_FMT_DATA(int,    height)
    STACK_FMT_DATA(int,    depth)
    STACK_FMT_DATA(int,    pitch)
    STACK_FMT_DATA(Uint32, Rmask)
    STACK_FMT_DATA(Uint32, Gmask)
    STACK_FMT_DATA(Uint32, Bmask)
    STACK_FMT_DATA(Uint32, Amask)
  STACK_FMT_END()

  CATCH_RESULT(SDL_Surface*)

    SDL_CreateRGBSurfaceFrom
    ( STACK_GET_DATA(pixels)
    , STACK_GET_DATA(width)
    , STACK_GET_DATA(height)
    , STACK_GET_DATA(depth)
    , STACK_GET_DATA(pitch)
    , STACK_GET_DATA(Rmask)
    , STACK_GET_DATA(Gmask)
    , STACK_GET_DATA(Bmask)
    , STACK_GET_DATA(Amask)
    );

  THROW_POINTER()
}

EXDL_API(evdo_freeSurface)
{
  /* void SDL_FreeSurface(SDL_Surface* surface) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Surface, surface[])
  STACK_FMT_END()

    SDL_FreeSurface
    ( STACK_GET_ADDR(surface)
    );
}

EXDL_API(evdo_lockSurface)
{
  /* int SDL_LockSurface(SDL_Surface* surface) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Surface, surface[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_LockSurface
    ( STACK_GET_ADDR(surface)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_unlockSurface)
{
  /* void SDL_UnlockSurface(SDL_Surface* surface) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Surface, surface[])
  STACK_FMT_END()

    SDL_UnlockSurface
    ( STACK_GET_ADDR(surface)
    );
}

EXDL_API(evdo_loadBMP_RW)
{
  /* SDL_Surface* SDL_LoadBMP_RW(SDL_RWops* src, int freesrc) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_RWops*, src)
    STACK_FMT_DATA(int,        freesrc)
  STACK_FMT_END()

  CATCH_RESULT(SDL_Surface*)

    SDL_LoadBMP_RW
    ( STACK_GET_DATA(src)
    , STACK_GET_DATA(freesrc)
    );

  THROW_POINTER()
}

EXDL_API(evdo_saveBMP_RW)
{
  /* int SDL_SaveBMP_RW(SDL_Surface* surface, SDL_RWops* dst, int freedst) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, surface)
    STACK_FMT_LPTR(SDL_RWops*,   dst)
    STACK_FMT_DATA(int,          freedst)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_SaveBMP_RW
    ( STACK_GET_DATA(surface)
    , STACK_GET_DATA(dst)
    , STACK_GET_DATA(freedst)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_setColorKey)
{
  /* int SDL_SetColorKey(SDL_Surface* surface, Uint32 flag, Uint32 key) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, surface)
    STACK_FMT_DATA(Uint32,       flag)
    STACK_FMT_DATA(Uint32,       key)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_SetColorKey
    ( STACK_GET_DATA(surface)
    , STACK_GET_DATA(flag)
    , STACK_GET_DATA(key)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_setAlpha)
{
  /* int SDL_SetAlpha(SDL_Surface* surface, Uint32 flag, Uint8 alpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, surface)
    STACK_FMT_DATA(Uint32,       flag)
    STACK_FMT_DATA(Uint8,        alpha)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_SetAlpha
    ( STACK_GET_DATA(surface)
    , STACK_GET_DATA(flag)
    , STACK_GET_DATA(alpha)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_setClipRect)
{
  /* SDL_bool SDL_SetClipRect(SDL_Surface* surface, const SDL_Rect* rect) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*,    surface)
    STACK_FMT_DATA(SDL_Rect,        rect[])
  STACK_FMT_END()

  CATCH_RESULT(SDL_bool)

    SDL_SetClipRect
    ( STACK_GET_DATA(surface)
    , STACK_GET_ADDR(rect)
    );

  THROW_RESULT(SDL_bool)
}

EXDL_API(evdo_getClipRect)
{
  /* void SDL_GetClipRect(SDL_Surface* surface, SDL_Rect* rect) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(SDL_Surface, surface)
    FRAME_FMT_DATA(SDL_Rect,    rect)
  FRAME_FMT_END()

    SDL_GetClipRect
    ( FRAME_GET_ADDR(surface)
    , FRAME_GET_ADDR(rect)
    );
}

EXDL_API(evdo_convertSurface)
{
  /* SDL_Surface* SDL_ConvertSurface(SDL_Surface* src, SDL_PixelFormat* fmt, Uint32 flags) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*,     src)
    STACK_FMT_LPTR(SDL_PixelFormat*, fmt)
    STACK_FMT_DATA(Uint32,           flags)
  STACK_FMT_END()

  CATCH_RESULT(SDL_Surface*)

    SDL_ConvertSurface
    ( STACK_GET_DATA(src)
    , STACK_GET_DATA(fmt)
    , STACK_GET_DATA(flags)
    );

  THROW_POINTER()
}

EXDL_API(evdo_upperBlit)
{
  /* int SDL_UpperBlit(SDL_Surface* src, SDL_Rect* srcrect, SDL_Surface* dst, SDL_Rect* dstrect) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, src)
    STACK_FMT_LPTR(SDL_Rect*,    srcrect)
    STACK_FMT_LPTR(SDL_Surface*, dst)
    STACK_FMT_DATA(SDL_Rect,     dstrect[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_UpperBlit
    ( STACK_GET_DATA(src)
    , STACK_GET_DATA(srcrect)
    , STACK_GET_DATA(dst)
    , STACK_GET_ADDR(dstrect)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_lowerBlit)
{
  /* int SDL_LowerBlit(SDL_Surface* src, SDL_Rect* srcrect, SDL_Surface* dst, SDL_Rect* dstrect) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, src)
    STACK_FMT_LPTR(SDL_Rect*,    srcrect)
    STACK_FMT_LPTR(SDL_Surface*, dst)
    STACK_FMT_DATA(SDL_Rect,     dstrect[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_LowerBlit
    ( STACK_GET_DATA(src)
    , STACK_GET_DATA(srcrect)
    , STACK_GET_DATA(dst)
    , STACK_GET_ADDR(dstrect)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_fillRect)
{
  /* int SDL_FillRect(SDL_Surface* dst, SDL_Rect* dstrect, Uint32 color) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, dst)
    STACK_FMT_LPTR(SDL_Rect*,    dstrect)
    STACK_FMT_DATA(Uint32,       color)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_FillRect
    ( STACK_GET_DATA(dst)
    , STACK_GET_DATA(dstrect)
    , STACK_GET_DATA(color)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_displayFormat)
{
  /* SDL_Surface* SDL_DisplayFormat(SDL_Surface* surface) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Surface, surface[])
  STACK_FMT_END()

  CATCH_RESULT(SDL_Surface*)

    SDL_DisplayFormat
    ( STACK_GET_ADDR(surface)
    );

  THROW_POINTER()
}

EXDL_API(evdo_displayFormatAlpha)
{
  /* SDL_Surface* SDL_DisplayFormatAlpha(SDL_Surface* surface) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Surface, surface[])
  STACK_FMT_END()

  CATCH_RESULT(SDL_Surface*)

    SDL_DisplayFormatAlpha
    ( STACK_GET_ADDR(surface)
    );

  THROW_POINTER()
}

EXDL_API(evdo_createYUVOverlay)
{
  /* SDL_Overlay* SDL_CreateYUVOverlay(int width, int height, Uint32 format, SDL_Surface* display) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(int,          width)
    STACK_FMT_DATA(int,          height)
    STACK_FMT_DATA(Uint32,       format)
    STACK_FMT_DATA(SDL_Surface,  display[])
  STACK_FMT_END()

  CATCH_RESULT(SDL_Overlay*)

    SDL_CreateYUVOverlay
    ( STACK_GET_DATA(width)
    , STACK_GET_DATA(height)
    , STACK_GET_DATA(format)
    , STACK_GET_ADDR(display)
    );

  THROW_POINTER()
}

EXDL_API(evdo_lockYUVOverlay)
{
  /* int SDL_LockYUVOverlay(SDL_Overlay* overlay) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Overlay, overlay[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_LockYUVOverlay
    ( STACK_GET_ADDR(overlay)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_unlockYUVOverlay)
{
  /* void SDL_UnlockYUVOverlay(SDL_Overlay* overlay) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Overlay, overlay[])
  STACK_FMT_END()

    SDL_UnlockYUVOverlay
    ( STACK_GET_ADDR(overlay)
    );
}

EXDL_API(evdo_displayYUVOverlay)
{
  /* int SDL_DisplayYUVOverlay(SDL_Overlay* overlay, SDL_Rect* dstrect) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Overlay*, overlay)
    STACK_FMT_DATA(SDL_Rect,     dstrect[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_DisplayYUVOverlay
    ( STACK_GET_DATA(overlay)
    , STACK_GET_ADDR(dstrect)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_freeYUVOverlay)
{
  /* void SDL_FreeYUVOverlay(SDL_Overlay* overlay) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Overlay, overlay[])
  STACK_FMT_END()

    SDL_FreeYUVOverlay
    ( STACK_GET_ADDR(overlay)
    );
}

EXDL_API(evdo_gl_LoadLibrary)
{
  /* int SDL_GL_LoadLibrary(const char* path) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(char, path[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_GL_LoadLibrary
    ( STACK_GET_ADDR(path)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_gl_GetProcAddress)
{
  /* void* SDL_GL_GetProcAddress(const char* proc) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(char, proc[])
  STACK_FMT_END()

  CATCH_RESULT(void*)

    SDL_GL_GetProcAddress
    ( STACK_GET_ADDR(proc)
    );

  THROW_POINTER()
}

EXDL_API(evdo_gl_SetAttribute)
{
  /* int SDL_GL_SetAttribute(SDL_GLattr attr, int value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_GLattr, attr)
    STACK_FMT_DATA(int,        value)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_GL_SetAttribute
    ( STACK_GET_DATA(attr)
    , STACK_GET_DATA(value)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_gl_GetAttribute)
{
  /* int SDL_GL_GetAttribute(SDL_GLattr attr, int* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_GLattr, attr)
    STACK_FMT_LPTR(int*,       value)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(int, exdl)
  FRAME_FMT_END()

  FRAME_SET_DATA(exdl) =

    SDL_GL_GetAttribute
    ( STACK_GET_DATA(attr)
    , STACK_GET_DATA(value)
    );

  THROW_FRAME()
}

EXDL_API(evdo_gl_SwapBuffers)
{
  /* void SDL_GL_SwapBuffers(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  SDL_GL_SwapBuffers
  (
  );
}

EXDL_API(evdo_gl_UpdateRects)
{
  /* void SDL_GL_UpdateRects(int numrects, SDL_Rect* rects) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(int,       numrects)
    STACK_FMT_DATA(SDL_Rect,  rects[])
  STACK_FMT_END()

    SDL_GL_UpdateRects
    ( STACK_GET_DATA(numrects)
    , STACK_GET_ADDR(rects)
    );
}

EXDL_API(evdo_gl_Lock)
{
  /* void SDL_GL_Lock(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  SDL_GL_Lock
  (
  );
}

EXDL_API(evdo_gl_Unlock)
{
  /* void SDL_GL_Unlock(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  SDL_GL_Unlock
  (
  );
}

EXDL_API(evdo_wm_SetCaption)
{
  /* void SDL_WM_SetCaption(const char* title, const char* icon) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(char*, title)
    STACK_FMT_DATA(char,  icon[])
  STACK_FMT_END()

    SDL_WM_SetCaption
    ( STACK_GET_DATA(title)
    , STACK_GET_ADDR(icon)
    );
}

EXDL_API(evdo_wm_GetCaption)
{
  /* void SDL_WM_GetCaption(char** title, char** icon) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(char,  title)
    FRAME_FMT_DATA(char,  icon)
  FRAME_FMT_END()

    SDL_WM_GetCaption
    ( FRAME_GET_ADDR(title)
    , FRAME_GET_ADDR(icon)
    );
}

EXDL_API(evdo_wm_SetIcon)
{
  /* void SDL_WM_SetIcon(SDL_Surface* icon, Uint8* mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, icon)
    STACK_FMT_DATA(Uint8,        mask[])
  STACK_FMT_END()

    SDL_WM_SetIcon
    ( STACK_GET_DATA(icon)
    , STACK_GET_ADDR(mask)
    );
}

EXDL_API(evdo_wm_IconifyWindow)
{
  /* int SDL_WM_IconifyWindow(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(int)

    SDL_WM_IconifyWindow
    (
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_wm_ToggleFullScreen)
{
  /* int SDL_WM_ToggleFullScreen(SDL_Surface* surface) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_Surface, surface[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_WM_ToggleFullScreen
    ( STACK_GET_ADDR(surface)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_wm_GrabInput)
{
  /* SDL_GrabMode SDL_WM_GrabInput(SDL_GrabMode mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(SDL_GrabMode, mode)
  STACK_FMT_END()

  CATCH_RESULT(SDL_GrabMode)

    SDL_WM_GrabInput
    ( STACK_GET_DATA(mode)
    );

  THROW_RESULT(SDL_GrabMode)
}

EXDL_API(evdo_softStretch)
{
  /* int SDL_SoftStretch(SDL_Surface* src, SDL_Rect* srcrect, SDL_Surface* dst, SDL_Rect* dstrect) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_Surface*, src)
    STACK_FMT_LPTR(SDL_Rect*,    srcrect)
    STACK_FMT_LPTR(SDL_Surface*, dst)
    STACK_FMT_DATA(SDL_Rect,     dstrect[])
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_SoftStretch
    ( STACK_GET_DATA(src)
    , STACK_GET_DATA(srcrect)
    , STACK_GET_DATA(dst)
    , STACK_GET_ADDR(dstrect)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_getWMInfo)
{
  /* int SDL_GetWMInfo(SDL_SysWMinfo* info) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(SDL_SysWMinfo*, info)
  STACK_FMT_END()

  CATCH_RESULT(int)

    SDL_GetWMInfo
    ( STACK_GET_DATA(info)
    );

  THROW_RESULT(int)
}

EXDL_API(evdo_wm_IsMaximized)
{
  /* int SDL_WM_IsMaximized(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(int)

    SDL_WM_IsMaximized
    (
    );

  THROW_RESULT(int)
}

