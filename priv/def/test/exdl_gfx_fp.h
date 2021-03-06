/*
 *  Copyright (c) 2012 David Koch
 *
 *  See the file "license.terms" for information on usage and redistribution
 *  of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 *     $Id: exdl_gfx_fp.h,v 1.5 2005/06/29 14:45:38 dgud Exp $
 */

/* File included in "exdl_wrapper.c" */

#ifdef COMPILE_GFX

/* SDL_framerate */
{ SDL_initFramerate_ENUM,                           "SDL_initFramerate",                           egfx_initFramerate },
{ SDL_setFramerate_ENUM,                            "SDL_setFramerate",                            egfx_setFramerate },
{ SDL_getFramerate_ENUM,                            "SDL_getFramerate",                            egfx_getFramerate },
{ SDL_framerateDelay_ENUM,                          "SDL_framerateDelay",                          egfx_framerateDelay },
/* SDL_gfxBlitFunc */
{ SDL_gfxBlitRGBA_ENUM,                             "SDL_gfxBlitRGBA",                             egfx_gfxBlitRGBA },
{ SDL_gfxSetAlpha_ENUM,                             "SDL_gfxSetAlpha",                             egfx_gfxSetAlpha },
/* SDL_gfxPrimitives */
{ pixelColor_ENUM,                                  "pixelColor",                                  egfx_color },
{ pixelRGBA_ENUM,                                   "pixelRGBA",                                   egfx_rGBA },
{ hlineColor_ENUM,                                  "hlineColor",                                  egfx_color },
{ hlineRGBA_ENUM,                                   "hlineRGBA",                                   egfx_rGBA },
{ vlineColor_ENUM,                                  "vlineColor",                                  egfx_color },
{ vlineRGBA_ENUM,                                   "vlineRGBA",                                   egfx_rGBA },
{ rectangleColor_ENUM,                              "rectangleColor",                              egfx_color },
{ rectangleRGBA_ENUM,                               "rectangleRGBA",                               egfx_rGBA },
{ boxColor_ENUM,                                    "boxColor",                                    egfx_color },
{ boxRGBA_ENUM,                                     "boxRGBA",                                     egfx_rGBA },
{ lineColor_ENUM,                                   "lineColor",                                   egfx_color },
{ lineRGBA_ENUM,                                    "lineRGBA",                                    egfx_rGBA },
{ aalineColor_ENUM,                                 "aalineColor",                                 egfx_color },
{ aalineRGBA_ENUM,                                  "aalineRGBA",                                  egfx_rGBA },
{ circleColor_ENUM,                                 "circleColor",                                 egfx_color },
{ circleRGBA_ENUM,                                  "circleRGBA",                                  egfx_rGBA },
{ arcColor_ENUM,                                    "arcColor",                                    egfx_color },
{ arcRGBA_ENUM,                                     "arcRGBA",                                     egfx_rGBA },
{ aacircleColor_ENUM,                               "aacircleColor",                               egfx_color },
{ aacircleRGBA_ENUM,                                "aacircleRGBA",                                egfx_rGBA },
{ filledCircleColor_ENUM,                           "filledCircleColor",                           egfx_circleColor },
{ filledCircleRGBA_ENUM,                            "filledCircleRGBA",                            egfx_circleRGBA },
{ ellipseColor_ENUM,                                "ellipseColor",                                egfx_color },
{ ellipseRGBA_ENUM,                                 "ellipseRGBA",                                 egfx_rGBA },
{ aaellipseColor_ENUM,                              "aaellipseColor",                              egfx_color },
{ aaellipseRGBA_ENUM,                               "aaellipseRGBA",                               egfx_rGBA },
{ filledEllipseColor_ENUM,                          "filledEllipseColor",                          egfx_ellipseColor },
{ filledEllipseRGBA_ENUM,                           "filledEllipseRGBA",                           egfx_ellipseRGBA },
{ pieColor_ENUM,                                    "pieColor",                                    egfx_color },
{ pieRGBA_ENUM,                                     "pieRGBA",                                     egfx_rGBA },
{ filledPieColor_ENUM,                              "filledPieColor",                              egfx_pieColor },
{ filledPieRGBA_ENUM,                               "filledPieRGBA",                               egfx_pieRGBA },
{ trigonColor_ENUM,                                 "trigonColor",                                 egfx_color },
{ trigonRGBA_ENUM,                                  "trigonRGBA",                                  egfx_rGBA },
{ aatrigonColor_ENUM,                               "aatrigonColor",                               egfx_color },
{ aatrigonRGBA_ENUM,                                "aatrigonRGBA",                                egfx_rGBA },
{ filledTrigonColor_ENUM,                           "filledTrigonColor",                           egfx_trigonColor },
{ filledTrigonRGBA_ENUM,                            "filledTrigonRGBA",                            egfx_trigonRGBA },
{ polygonColor_ENUM,                                "polygonColor",                                egfx_color },
{ polygonRGBA_ENUM,                                 "polygonRGBA",                                 egfx_rGBA },
{ aapolygonColor_ENUM,                              "aapolygonColor",                              egfx_color },
{ aapolygonRGBA_ENUM,                               "aapolygonRGBA",                               egfx_rGBA },
{ filledPolygonColor_ENUM,                          "filledPolygonColor",                          egfx_polygonColor },
{ filledPolygonRGBA_ENUM,                           "filledPolygonRGBA",                           egfx_polygonRGBA },
{ texturedPolygon_ENUM,                             "texturedPolygon",                             egfx_polygon },
{ filledPolygonColorMT_ENUM,                        "filledPolygonColorMT",                        egfx_polygonColorMT },
{ filledPolygonRGBAMT_ENUM,                         "filledPolygonRGBAMT",                         egfx_polygonRGBAMT },
{ texturedPolygonMT_ENUM,                           "texturedPolygonMT",                           egfx_polygonMT },
{ bezierColor_ENUM,                                 "bezierColor",                                 egfx_color },
{ bezierRGBA_ENUM,                                  "bezierRGBA",                                  egfx_rGBA },
{ characterColor_ENUM,                              "characterColor",                              egfx_color },
{ characterRGBA_ENUM,                               "characterRGBA",                               egfx_rGBA },
{ stringColor_ENUM,                                 "stringColor",                                 egfx_color },
{ stringRGBA_ENUM,                                  "stringRGBA",                                  egfx_rGBA },
{ gfxPrimitivesSetFont_ENUM,                        "gfxPrimitivesSetFont",                        egfx_primitivesSetFont },
/* SDL_imageFilter */
{ SDL_imageFilterMMXdetect_ENUM,                    "SDL_imageFilterMMXdetect",                    egfx_imageFilterMMXdetect },
{ SDL_imageFilterMMXoff_ENUM,                       "SDL_imageFilterMMXoff",                       egfx_imageFilterMMXoff },
{ SDL_imageFilterMMXon_ENUM,                        "SDL_imageFilterMMXon",                        egfx_imageFilterMMXon },
{ SDL_imageFilterAdd_ENUM,                          "SDL_imageFilterAdd",                          egfx_imageFilterAdd },
{ SDL_imageFilterMean_ENUM,                         "SDL_imageFilterMean",                         egfx_imageFilterMean },
{ SDL_imageFilterSub_ENUM,                          "SDL_imageFilterSub",                          egfx_imageFilterSub },
{ SDL_imageFilterAbsDiff_ENUM,                      "SDL_imageFilterAbsDiff",                      egfx_imageFilterAbsDiff },
{ SDL_imageFilterMult_ENUM,                         "SDL_imageFilterMult",                         egfx_imageFilterMult },
{ SDL_imageFilterMultNor_ENUM,                      "SDL_imageFilterMultNor",                      egfx_imageFilterMultNor },
{ SDL_imageFilterMultDivby2_ENUM,                   "SDL_imageFilterMultDivby2",                   egfx_imageFilterMultDivby2 },
{ SDL_imageFilterMultDivby4_ENUM,                   "SDL_imageFilterMultDivby4",                   egfx_imageFilterMultDivby4 },
{ SDL_imageFilterBitAnd_ENUM,                       "SDL_imageFilterBitAnd",                       egfx_imageFilterBitAnd },
{ SDL_imageFilterBitOr_ENUM,                        "SDL_imageFilterBitOr",                        egfx_imageFilterBitOr },
{ SDL_imageFilterDiv_ENUM,                          "SDL_imageFilterDiv",                          egfx_imageFilterDiv },
{ SDL_imageFilterBitNegation_ENUM,                  "SDL_imageFilterBitNegation",                  egfx_imageFilterBitNegation },
{ SDL_imageFilterAddByte_ENUM,                      "SDL_imageFilterAddByte",                      egfx_imageFilterAddByte },
{ SDL_imageFilterAddUint_ENUM,                      "SDL_imageFilterAddUint",                      egfx_imageFilterAddUint },
{ SDL_imageFilterAddByteToHalf_ENUM,                "SDL_imageFilterAddByteToHalf",                egfx_imageFilterAddByteToHalf },
{ SDL_imageFilterSubByte_ENUM,                      "SDL_imageFilterSubByte",                      egfx_imageFilterSubByte },
{ SDL_imageFilterSubUint_ENUM,                      "SDL_imageFilterSubUint",                      egfx_imageFilterSubUint },
{ SDL_imageFilterShiftRight_ENUM,                   "SDL_imageFilterShiftRight",                   egfx_imageFilterShiftRight },
{ SDL_imageFilterShiftRightUint_ENUM,               "SDL_imageFilterShiftRightUint",               egfx_imageFilterShiftRightUint },
{ SDL_imageFilterMultByByte_ENUM,                   "SDL_imageFilterMultByByte",                   egfx_imageFilterMultByByte },
{ SDL_imageFilterShiftRightAndMultByByte_ENUM,      "SDL_imageFilterShiftRightAndMultByByte",      egfx_imageFilterShiftRightAndMultByByte },
{ SDL_imageFilterShiftLeftByte_ENUM,                "SDL_imageFilterShiftLeftByte",                egfx_imageFilterShiftLeftByte },
{ SDL_imageFilterShiftLeftUint_ENUM,                "SDL_imageFilterShiftLeftUint",                egfx_imageFilterShiftLeftUint },
{ SDL_imageFilterShiftLeft_ENUM,                    "SDL_imageFilterShiftLeft",                    egfx_imageFilterShiftLeft },
{ SDL_imageFilterBinarizeUsingThreshold_ENUM,       "SDL_imageFilterBinarizeUsingThreshold",       egfx_imageFilterBinarizeUsingThreshold },
{ SDL_imageFilterClipToRange_ENUM,                  "SDL_imageFilterClipToRange",                  egfx_imageFilterClipToRange },
{ SDL_imageFilterNormalizeLinear_ENUM,              "SDL_imageFilterNormalizeLinear",              egfx_imageFilterNormalizeLinear },
{ SDL_imageFilterConvolveKernel3x3Divide_ENUM,      "SDL_imageFilterConvolveKernel3x3Divide",      egfx_imageFilterConvolveKernel3x3Divide },
{ SDL_imageFilterConvolveKernel5x5Divide_ENUM,      "SDL_imageFilterConvolveKernel5x5Divide",      egfx_imageFilterConvolveKernel5x5Divide },
{ SDL_imageFilterConvolveKernel7x7Divide_ENUM,      "SDL_imageFilterConvolveKernel7x7Divide",      egfx_imageFilterConvolveKernel7x7Divide },
{ SDL_imageFilterConvolveKernel9x9Divide_ENUM,      "SDL_imageFilterConvolveKernel9x9Divide",      egfx_imageFilterConvolveKernel9x9Divide },
{ SDL_imageFilterConvolveKernel3x3ShiftRight_ENUM,  "SDL_imageFilterConvolveKernel3x3ShiftRight",  egfx_imageFilterConvolveKernel3x3ShiftRight },
{ SDL_imageFilterConvolveKernel5x5ShiftRight_ENUM,  "SDL_imageFilterConvolveKernel5x5ShiftRight",  egfx_imageFilterConvolveKernel5x5ShiftRight },
{ SDL_imageFilterConvolveKernel7x7ShiftRight_ENUM,  "SDL_imageFilterConvolveKernel7x7ShiftRight",  egfx_imageFilterConvolveKernel7x7ShiftRight },
{ SDL_imageFilterConvolveKernel9x9ShiftRight_ENUM,  "SDL_imageFilterConvolveKernel9x9ShiftRight",  egfx_imageFilterConvolveKernel9x9ShiftRight },
{ SDL_imageFilterSobelX_ENUM,                       "SDL_imageFilterSobelX",                       egfx_imageFilterSobelX },
{ SDL_imageFilterSobelXShiftRight_ENUM,             "SDL_imageFilterSobelXShiftRight",             egfx_imageFilterSobelXShiftRight },
{ SDL_imageFilterAlignStack_ENUM,                   "SDL_imageFilterAlignStack",                   egfx_imageFilterAlignStack },
{ SDL_imageFilterRestoreStack_ENUM,                 "SDL_imageFilterRestoreStack",                 egfx_imageFilterRestoreStack },
/* SDL_rotozoom */
{ rotozoomSurface_ENUM,                             "rotozoomSurface",                             egfx_surface },
{ rotozoomSurfaceXY_ENUM,                           "rotozoomSurfaceXY",                           egfx_surfaceXY },
{ rotozoomSurfaceSize_ENUM,                         "rotozoomSurfaceSize",                         egfx_surfaceSize },
{ rotozoomSurfaceSizeXY_ENUM,                       "rotozoomSurfaceSizeXY",                       egfx_surfaceSizeXY },
{ zoomSurface_ENUM,                                 "zoomSurface",                                 egfx_surface },
{ zoomSurfaceSize_ENUM,                             "zoomSurfaceSize",                             egfx_surfaceSize },
{ shrinkSurface_ENUM,                               "shrinkSurface",                               egfx_surface },
{ rotateSurface90Degrees_ENUM,                      "rotateSurface90Degrees",                      egfx_surface90Degrees },

#endif // COMPILE_GFX
