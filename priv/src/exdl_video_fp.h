/*
 *  Copyright (c) 2001 Dan Gudmundsson
 *
 *  See the file "license.terms" for information on usage and redistribution
 *  of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 *     $Id: exdl_video_fp.h,v 1.2 2004/10/25 09:17:43 dgud Exp $
 */

/* File included in "exdl_wrapper.c" */

{ SDL_VideoInit_ENUM,             "SDL_VideoInit",             evdo_videoInit },
{ SDL_VideoQuit_ENUM,             "SDL_VideoQuit",             evdo_videoQuit },
{ SDL_VideoDriverName_ENUM,       "SDL_VideoDriverName",       evdo_videoDriverName },
{ SDL_GetVideoSurface_ENUM,       "SDL_GetVideoSurface",       evdo_getVideoSurface },
{ SDL_GetVideoInfo_ENUM,          "SDL_GetVideoInfo",          evdo_getVideoInfo },
{ SDL_VideoModeOK_ENUM,           "SDL_VideoModeOK",           evdo_videoModeOK },
{ SDL_ListModes_ENUM,             "SDL_ListModes",             evdo_listModes },
{ SDL_SetVideoMode_ENUM,          "SDL_SetVideoMode",          evdo_setVideoMode },
{ SDL_UpdateRects_ENUM,           "SDL_UpdateRects",           evdo_updateRects },
{ SDL_UpdateRect_ENUM,            "SDL_UpdateRect",            evdo_updateRect },
{ SDL_Flip_ENUM,                  "SDL_Flip",                  evdo_flip },
{ SDL_SetGamma_ENUM,              "SDL_SetGamma",              evdo_setGamma },
{ SDL_SetGammaRamp_ENUM,          "SDL_SetGammaRamp",          evdo_setGammaRamp },
{ SDL_GetGammaRamp_ENUM,          "SDL_GetGammaRamp",          evdo_getGammaRamp },
{ SDL_SetColors_ENUM,             "SDL_SetColors",             evdo_setColors },
{ SDL_SetPalette_ENUM,            "SDL_SetPalette",            evdo_setPalette },
{ SDL_MapRGB_ENUM,                "SDL_MapRGB",                evdo_mapRGB },
{ SDL_MapRGBA_ENUM,               "SDL_MapRGBA",               evdo_mapRGBA },
{ SDL_GetRGB_ENUM,                "SDL_GetRGB",                evdo_getRGB },
{ SDL_GetRGBA_ENUM,               "SDL_GetRGBA",               evdo_getRGBA },
{ SDL_CreateRGBSurface_ENUM,      "SDL_CreateRGBSurface",      evdo_createRGBSurface },
{ SDL_CreateRGBSurfaceFrom_ENUM,  "SDL_CreateRGBSurfaceFrom",  evdo_createRGBSurfaceFrom },
{ SDL_FreeSurface_ENUM,           "SDL_FreeSurface",           evdo_freeSurface },
{ SDL_LockSurface_ENUM,           "SDL_LockSurface",           evdo_lockSurface },
{ SDL_UnlockSurface_ENUM,         "SDL_UnlockSurface",         evdo_unlockSurface },
{ SDL_LoadBMP_RW_ENUM,            "SDL_LoadBMP_RW",            evdo_loadBMP_RW },
{ SDL_LoadBMP_ENUM,               "SDL_LoadBMP",               evdo_loadBMP },
{ SDL_SaveBMP_RW_ENUM,            "SDL_SaveBMP_RW",            evdo_saveBMP_RW },
{ SDL_SaveBMP_ENUM,               "SDL_SaveBMP",               evdo_saveBMP },
{ SDL_SetColorKey_ENUM,           "SDL_SetColorKey",           evdo_setColorKey },
{ SDL_SetAlpha_ENUM,              "SDL_SetAlpha",              evdo_setAlpha },
{ SDL_SetClipRect_ENUM,           "SDL_SetClipRect",           evdo_setClipRect },
{ SDL_GetClipRect_ENUM,           "SDL_GetClipRect",           evdo_getClipRect },
{ SDL_ConvertSurface_ENUM,        "SDL_ConvertSurface",        evdo_convertSurface },
{ SDL_UpperBlit_ENUM,             "SDL_UpperBlit",             evdo_upperBlit },
{ SDL_LowerBlit_ENUM,             "SDL_LowerBlit",             evdo_lowerBlit },
{ SDL_FillRect_ENUM,              "SDL_FillRect",              evdo_fillRect },
{ SDL_DisplayFormat_ENUM,         "SDL_DisplayFormat",         evdo_displayFormat },
{ SDL_DisplayFormatAlpha_ENUM,    "SDL_DisplayFormatAlpha",    evdo_displayFormatAlpha },
{ SDL_CreateYUVOverlay_ENUM,      "SDL_CreateYUVOverlay",      evdo_createYUVOverlay },
{ SDL_LockYUVOverlay_ENUM,        "SDL_LockYUVOverlay",        evdo_lockYUVOverlay },
{ SDL_UnlockYUVOverlay_ENUM,      "SDL_UnlockYUVOverlay",      evdo_unlockYUVOverlay },
{ SDL_DisplayYUVOverlay_ENUM,     "SDL_DisplayYUVOverlay",     evdo_displayYUVOverlay },
{ SDL_FreeYUVOverlay_ENUM,        "SDL_FreeYUVOverlay",        evdo_freeYUVOverlay },
{ SDL_GL_LoadLibrary_ENUM,        "SDL_GL_LoadLibrary",        evdo_gl_LoadLibrary },
{ SDL_GL_GetProcAddress_ENUM,     "SDL_GL_GetProcAddress",     evdo_gl_GetProcAddress },
{ SDL_GL_SetAttribute_ENUM,       "SDL_GL_SetAttribute",       evdo_gl_SetAttribute },
{ SDL_GL_GetAttribute_ENUM,       "SDL_GL_GetAttribute",       evdo_gl_GetAttribute },
{ SDL_GL_SwapBuffers_ENUM,        "SDL_GL_SwapBuffers",        evdo_gl_SwapBuffers },
{ SDL_GL_UpdateRects_ENUM,        "SDL_GL_UpdateRects",        evdo_gl_UpdateRects },
{ SDL_GL_Lock_ENUM,               "SDL_GL_Lock",               evdo_gl_Lock },
{ SDL_GL_Unlock_ENUM,             "SDL_GL_Unlock",             evdo_gl_Unlock },
{ SDL_WM_SetCaption_ENUM,         "SDL_WM_SetCaption",         evdo_wm_SetCaption },
{ SDL_WM_GetCaption_ENUM,         "SDL_WM_GetCaption",         evdo_wm_GetCaption },
{ SDL_WM_SetIcon_ENUM,            "SDL_WM_SetIcon",            evdo_wm_SetIcon },
{ SDL_WM_IconifyWindow_ENUM,      "SDL_WM_IconifyWindow",      evdo_wm_IconifyWindow },
{ SDL_WM_ToggleFullScreen_ENUM,   "SDL_WM_ToggleFullScreen",   evdo_wm_ToggleFullScreen },
{ SDL_WM_GrabInput_ENUM,          "SDL_WM_GrabInput",          evdo_wm_GrabInput },
{ SDL_SoftStretch_ENUM,           "SDL_SoftStretch",           evdo_softStretch },
/* Internal */
{ SDL_GetWMInfo_ENUM,             "SDL_GetWMInfo",             evdo_getWMInfo },
{ SDL_WM_IsMaximized_ENUM,        "SDL_WM_IsMaximized",        evdo_wm_IsMaximized },
/* EXDL SPECial functions in exdl_spec.c */
{ EXDL_getSurface_ENUM,           "EXDL_getSurface",           esdl_getSurface },
{ EXDL_getPalette_ENUM,           "EXDL_getPalette",           esdl_getPalette },
{ EXDL_getPixelFormat_ENUM,       "EXDL_getPixelFormat",       esdl_getPixelFormat },
{ EXDL_getPixels_ENUM,            "EXDL_getPixels",            esdl_getPixels },

