/*
 *  Copyright (c) 2005 Dan Gudmundsson
 *
 *  See the file "license.terms" for information on usage and redistribution
 *  of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 *     $Id: exdl_glext.c,v 1.9 2006/05/15 14:45:44 dgud Exp $
 */

#include "exdl.h"

#ifdef COMPILE_GLEXT

/* GL_VERSION_1_2 */

EXDL_API(egl_blendColor)
{
  /* void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, red)
    STACK_FMT_DATA(GLfloat, green)
    STACK_FMT_DATA(GLfloat, blue)
    STACK_FMT_DATA(GLfloat, alpha)
  STACK_FMT_END()

    exdl_glBlendColor
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
   ,  STACK_GET_DATA(alpha)
    );
}

EXDL_API(egl_blendEquation)
{
  /* void glBlendEquation(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glBlendEquation
    ( STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_drawRangeElements)
{
  /* void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLuint,  start)
    STACK_FMT_DATA(GLuint,  end)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid,  indices[])
  STACK_FMT_END()

    exdl_glDrawRangeElements
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(end)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(indices)
    );
}

EXDL_API(egl_texImage3D)
{
  /* void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid,  pixels[])
  STACK_FMT_END()

    exdl_glTexImage3D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(pixels)
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_texSubImage3D)
{
  /* void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid,  pixels[])
  STACK_FMT_END()

    exdl_glTexSubImage3D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(pixels)
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_copyTexSubImage3D)
{
  /* void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glCopyTexSubImage3D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

/* GL_VERSION_1_2_DEPRECATED */

EXDL_API(egl_colorTable)
{
  /* void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid* table) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid,  table[])
  STACK_FMT_END()

    exdl_glColorTable
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(table)
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_colorTableParameterfv)
{
  /* void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glColorTableParameterfv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_colorTableParameteriv)
{
  /* void glColorTableParameteriv(GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glColorTableParameteriv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_copyColorTable)
{
  /* void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glCopyColorTable
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
    );
}

EXDL_API(egl_getColorTable)
{
  /* void glGetColorTable(GLenum target, GLenum format, GLenum type, GLvoid* table) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, format)
    STACK_FMT_DATA(GLenum, type)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, table[])
  FRAME_FMT_SIZE(256)

    exdl_glGetColorTable
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  FRAME_GET_ADDR(table)
    );

  THROW_FRAME()
}

EXDL_API(egl_getColorTableParameterfv)
{
  /* void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params[4])
  FRAME_FMT_END()

    exdl_glGetColorTableParameterfv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getColorTableParameteriv)
{
  /* void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[4])
  FRAME_FMT_END()

    exdl_glGetColorTableParameteriv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_colorSubTable)
{
  /* void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, start)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid,  data[])
  STACK_FMT_END()

    exdl_glColorSubTable
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(data)
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_copyColorSubTable)
{
  /* void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, start)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glCopyColorSubTable
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
    );
}

EXDL_API(egl_convolutionFilter1D)
{
  /* void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid* image) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid,  image[])
  STACK_FMT_END()

    exdl_glConvolutionFilter1D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(image)
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_convolutionFilter2D)
{
  /* void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* image) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid,  image[])
  STACK_FMT_END()

    exdl_glConvolutionFilter2D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(image)
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_convolutionParameterf)
{
  /* void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params)
  STACK_FMT_END()

    exdl_glConvolutionParameterf
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_convolutionParameterfv)
{
  /* void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glConvolutionParameterfv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_convolutionParameteri)
{
  /* void glConvolutionParameteri(GLenum target, GLenum pname, GLint params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params)
  STACK_FMT_END()

    exdl_glConvolutionParameteri
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_convolutionParameteriv)
{
  /* void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glConvolutionParameteriv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_copyConvolutionFilter1D)
{
  /* void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glCopyConvolutionFilter1D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
    );
}

EXDL_API(egl_copyConvolutionFilter2D)
{
  /* void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glCopyConvolutionFilter2D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_getConvolutionFilter)
{
  /* void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, GLvoid* image) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, image)
  FRAME_FMT_END()

    exdl_glGetConvolutionFilter
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  FRAME_GET_ADDR(image)
    );
  
    exdl_free_binaries(sd);

  THROW_FRAME()
}

EXDL_API(egl_getConvolutionParameterfv)
{
  /* void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params[4])
  FRAME_FMT_END()

    exdl_glGetConvolutionParameterfv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getConvolutionParameteriv)
{
  /* void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[4])
  FRAME_FMT_END()

    exdl_glGetConvolutionParameteriv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getSeparableFilter)
{
  /* void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, GLvoid* row, GLvoid* column, GLvoid* span) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, row)
    FRAME_FMT_DATA(GLvoid, column)
    FRAME_FMT_DATA(GLvoid, span)
  FRAME_FMT_END()

    exdl_glGetSeparableFilter
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  FRAME_GET_ADDR(row)
   ,  FRAME_GET_ADDR(column)
   ,  FRAME_GET_ADDR(span)
    );
  
    exdl_free_binaries(sd);

  THROW_FRAME()
}

EXDL_API(egl_separableFilter2D)
{
  /* void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* row, const GLvoid* column) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, row)
    STACK_FMT_DATA(GLvoid*, column)
  STACK_FMT_END()

    exdl_glSeparableFilter2D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(row)
  : (GLvoid*) sd->bin[0].base
   ,  (sd->next_bin == 1)
  ? STACK_GET_DATA(column)
  : (GLvoid*) sd->bin[1].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_getHistogram)
{
  /* void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLboolean, reset)
    STACK_FMT_DATA(GLenum,    format)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLvoid*,   values)
  STACK_FMT_END()

    exdl_glGetHistogram
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(reset)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(values)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_getHistogramParameterfv)
{
  /* void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params[1])
  FRAME_FMT_END()
   
    exdl_glGetHistogramParameterfv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getHistogramParameteriv)
{
  /* void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()
   
    exdl_glGetHistogramParameteriv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getMinmax)
{
  /* void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLboolean, reset)
    STACK_FMT_DATA(GLenum,    format)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLvoid*,   values)
  STACK_FMT_END()

    exdl_glGetMinmax
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(reset)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(values)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_getMinmaxParameterfv)
{
  /* void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params[1])
  FRAME_FMT_END()

    exdl_glGetMinmaxParameterfv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getMinmaxParameteriv)
{
  /* void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()
   
    exdl_glGetMinmaxParameteriv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_histogram)
{
  /* void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLsizei,   width)
    STACK_FMT_DATA(GLenum,    internalformat)
    STACK_FMT_DATA(GLboolean, sink)
  STACK_FMT_END()

    exdl_glHistogram
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(sink)
    );
}

EXDL_API(egl_minmax)
{
  /* void glMinmax(GLenum target, GLenum internalformat, GLboolean sink) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLenum,    internalformat)
    STACK_FMT_DATA(GLboolean, sink)
  STACK_FMT_END()

    exdl_glMinmax
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(sink)
    );
}

EXDL_API(egl_resetHistogram)
{
  /* void glResetHistogram(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glResetHistogram
    ( STACK_GET_DATA(target)
    );
}

EXDL_API(egl_resetMinmax)
{
  /* void glResetMinmax(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glResetMinmax
    ( STACK_GET_DATA(target)
    );
}

/* GL_VERSION_1_3 */

EXDL_API(egl_activeTexture)
{
  /* void glActiveTexture(GLenum texture) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texture)
  STACK_FMT_END()

    exdl_glActiveTexture
    ( STACK_GET_DATA(texture)
    );
}

EXDL_API(egl_sampleCoverage)
{
  /* void glSampleCoverage(GLfloat value, GLboolean invert) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat,   value)
    STACK_FMT_DATA(GLboolean, invert)
  STACK_FMT_END()

    exdl_glSampleCoverage
    ( STACK_GET_DATA(value)
   ,  STACK_GET_DATA(invert)
    );
}

EXDL_API(egl_compressedTexImage3D)
{
  /* void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexImage3D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_compressedTexImage2D)
{
  /* void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexImage2D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_compressedTexImage1D)
{
  /* void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexImage1D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_compressedTexSubImage3D)
{
  /* void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexSubImage3D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_compressedTexSubImage2D)
{
  /* void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexSubImage2D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_compressedTexSubImage1D)
{
  /* void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexSubImage1D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_getCompressedTexImage)
{
  /* void glGetCompressedTexImage(GLenum target, GLint level, GLvoid* img) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLvoid*, img)
  STACK_FMT_END()

    exdl_glGetCompressedTexImage
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(img)
  : (GLvoid*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

/* GL_VERSION_1_3_DEPRECATED */

EXDL_API(egl_clientActiveTexture)
{
  /* void glClientActiveTexture(GLenum texture) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texture)
  STACK_FMT_END()

    exdl_glClientActiveTexture
    ( STACK_GET_DATA(texture)
    );
}

EXDL_API(egl_multiTexCoord1d)
{
  /* void glMultiTexCoord1d(GLenum target, GLdouble s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, s)
  STACK_FMT_END()

    exdl_glMultiTexCoord1d
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
    );
}

EXDL_API(egl_multiTexCoord1dv)
{
  /* void glMultiTexCoord1dv(GLenum target, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, v[1])
  STACK_FMT_END()

    exdl_glMultiTexCoord1dv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord1f)
{
  /* void glMultiTexCoord1f(GLenum target, GLfloat s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, s)
  STACK_FMT_END()

    exdl_glMultiTexCoord1f
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
    );
}

EXDL_API(egl_multiTexCoord1fv)
{
  /* void glMultiTexCoord1fv(GLenum target, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, v[1])
  STACK_FMT_END()

    exdl_glMultiTexCoord1fv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord1i)
{
  /* void glMultiTexCoord1i(GLenum target, GLint s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  s)
  STACK_FMT_END()

    exdl_glMultiTexCoord1i
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
    );
}

EXDL_API(egl_multiTexCoord1iv)
{
  /* void glMultiTexCoord1iv(GLenum target, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  v[1])
  STACK_FMT_END()

    exdl_glMultiTexCoord1iv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord1s)
{
  /* void glMultiTexCoord1s(GLenum target, GLshort s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, s)
  STACK_FMT_END()

    exdl_glMultiTexCoord1s
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
    );
}

EXDL_API(egl_multiTexCoord1sv)
{
  /* void glMultiTexCoord1sv(GLenum target, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, v[1])
  STACK_FMT_END()

    exdl_glMultiTexCoord1sv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord2d)
{
  /* void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, s)
    STACK_FMT_DATA(GLdouble, t)
  STACK_FMT_END()

    exdl_glMultiTexCoord2d
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_multiTexCoord2dv)
{
  /* void glMultiTexCoord2dv(GLenum target, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, v[2])
  STACK_FMT_END()

    exdl_glMultiTexCoord2dv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord2f)
{
  /* void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
  STACK_FMT_END()

    exdl_glMultiTexCoord2f
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_multiTexCoord2fv)
{
  /* void glMultiTexCoord2fv(GLenum target, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, v[2])
  STACK_FMT_END()

    exdl_glMultiTexCoord2fv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord2i)
{
  /* void glMultiTexCoord2i(GLenum target, GLint s, GLint t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  s)
    STACK_FMT_DATA(GLint,  t)
  STACK_FMT_END()

    exdl_glMultiTexCoord2i
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_multiTexCoord2iv)
{
  /* void glMultiTexCoord2iv(GLenum target, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord2iv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord2s)
{
  /* void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, s)
    STACK_FMT_DATA(GLshort, t)
  STACK_FMT_END()

    exdl_glMultiTexCoord2s
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_multiTexCoord2sv)
{
  /* void glMultiTexCoord2sv(GLenum target, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, v[2])
  STACK_FMT_END()

    exdl_glMultiTexCoord2sv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord3d)
{
  /* void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, s)
    STACK_FMT_DATA(GLdouble, t)
    STACK_FMT_DATA(GLdouble, r)
  STACK_FMT_END()

    exdl_glMultiTexCoord3d
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_multiTexCoord3dv)
{
  /* void glMultiTexCoord3dv(GLenum target, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, v[3])
  STACK_FMT_END()

    exdl_glMultiTexCoord3dv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord3f)
{
  /* void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, r)
  STACK_FMT_END()

    exdl_glMultiTexCoord3f
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_multiTexCoord3fv)
{
  /* void glMultiTexCoord3fv(GLenum target, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, v[3])
  STACK_FMT_END()

    exdl_glMultiTexCoord3fv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord3i)
{
  /* void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  s)
    STACK_FMT_DATA(GLint,  t)
    STACK_FMT_DATA(GLint,  r)
  STACK_FMT_END()

    exdl_glMultiTexCoord3i
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_multiTexCoord3iv)
{
  /* void glMultiTexCoord3iv(GLenum target, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  v[3])
  STACK_FMT_END()

    exdl_glMultiTexCoord3iv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord3s)
{
  /* void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, s)
    STACK_FMT_DATA(GLshort, t)
    STACK_FMT_DATA(GLshort, r)
  STACK_FMT_END()

    exdl_glMultiTexCoord3s
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_multiTexCoord3sv)
{
  /* void glMultiTexCoord3sv(GLenum target, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, v[3])
  STACK_FMT_END()

    exdl_glMultiTexCoord3sv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord4d)
{
  /* void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, s)
    STACK_FMT_DATA(GLdouble, t)
    STACK_FMT_DATA(GLdouble, r)
    STACK_FMT_DATA(GLdouble, q)
  STACK_FMT_END()

    exdl_glMultiTexCoord4d
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_multiTexCoord4dv)
{
  /* void glMultiTexCoord4dv(GLenum target, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, v[4])
  STACK_FMT_END()

    exdl_glMultiTexCoord4dv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord4f)
{
  /* void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, q)
  STACK_FMT_END()

    exdl_glMultiTexCoord4f
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_multiTexCoord4fv)
{
  /* void glMultiTexCoord4fv(GLenum target, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, v[4])
  STACK_FMT_END()

    exdl_glMultiTexCoord4fv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord4i)
{
  /* void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  s)
    STACK_FMT_DATA(GLint,  t)
    STACK_FMT_DATA(GLint,  r)
    STACK_FMT_DATA(GLint,  q)
  STACK_FMT_END()

    exdl_glMultiTexCoord4i
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_multiTexCoord4iv)
{
  /* void glMultiTexCoord4iv(GLenum target, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  v[4])
  STACK_FMT_END()

    exdl_glMultiTexCoord4iv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord4s)
{
  /* void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, s)
    STACK_FMT_DATA(GLshort, t)
    STACK_FMT_DATA(GLshort, r)
    STACK_FMT_DATA(GLshort, q)
  STACK_FMT_END()

    exdl_glMultiTexCoord4s
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_multiTexCoord4sv)
{
  /* void glMultiTexCoord4sv(GLenum target, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, v[4])
  STACK_FMT_END()

    exdl_glMultiTexCoord4sv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_loadTransposeMatrixf)
{
  /* void glLoadTransposeMatrixf(const GLfloat* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, m[16])
  STACK_FMT_END()

    exdl_glLoadTransposeMatrixf
    ( STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_loadTransposeMatrixd)
{
  /* void glLoadTransposeMatrixd(const GLdouble* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, m[16])
  STACK_FMT_END()

    exdl_glLoadTransposeMatrixd
    ( STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_multTransposeMatrixf)
{
  /* void glMultTransposeMatrixf(const GLfloat* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, m[16])
  STACK_FMT_END()

    exdl_glMultTransposeMatrixf
    ( STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_multTransposeMatrixd)
{
  /* void glMultTransposeMatrixd(const GLdouble* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, m[16])
  STACK_FMT_END()

    exdl_glMultTransposeMatrixd
    ( STACK_GET_ADDR(m)
    );
}

/* GL_VERSION_1_4 */

EXDL_API(egl_blendFuncSeparate)
{
  /* void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, sfactorRGB)
    STACK_FMT_DATA(GLenum, dfactorRGB)
    STACK_FMT_DATA(GLenum, sfactorAlpha)
    STACK_FMT_DATA(GLenum, dfactorAlpha)
  STACK_FMT_END()

    exdl_glBlendFuncSeparate
    ( STACK_GET_DATA(sfactorRGB)
   ,  STACK_GET_DATA(dfactorRGB)
   ,  STACK_GET_DATA(sfactorAlpha)
   ,  STACK_GET_DATA(dfactorAlpha)
    );
}

EXDL_API(egl_multiDrawArrays)
{
  /* void glMultiDrawArrays(GLenum mode, const GLint* first, const GLsizei* count, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLint*,   first)
    STACK_FMT_DATA(GLsizei*, count)
    STACK_FMT_DATA(GLsizei,  primcount)
  STACK_FMT_END()

    exdl_glMultiDrawArrays
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(primcount)
    );
}

EXDL_API(egl_multiDrawElements)
{
  /* void glMultiDrawElements(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLsizei*, count)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLvoid**, indices)
    STACK_FMT_DATA(GLsizei,  primcount)
  STACK_FMT_END()

    exdl_glMultiDrawElements
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(indices)
  : (GLvoid**) sd->bin[0].base
   ,  STACK_GET_DATA(primcount)
    );
}

EXDL_API(egl_pointParameterf)
{
  /* void glPointParameterf(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glPointParameterf
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pointParameterfv)
{
  /* void glPointParameterfv(GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glPointParameterfv
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_pointParameteri)
{
  /* void glPointParameteri(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glPointParameteri
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pointParameteriv)
{
  /* void glPointParameteriv(GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glPointParameteriv
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_VERSION_1_4_DEPRECATED */

EXDL_API(egl_fogCoordf)
{
  /* void glFogCoordf(GLfloat coord) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, coord)
  STACK_FMT_END()

    exdl_glFogCoordf
    ( STACK_GET_DATA(coord)
    );
}

EXDL_API(egl_fogCoordfv)
{
  /* void glFogCoordfv(const GLfloat* coord) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, coord[1])
  STACK_FMT_END()

    exdl_glFogCoordfv
    ( STACK_GET_ADDR(coord)
    );
}

EXDL_API(egl_fogCoordd)
{
  /* void glFogCoordd(GLdouble coord) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, coord)
  STACK_FMT_END()

    exdl_glFogCoordd
    ( STACK_GET_DATA(coord)
    );
}

EXDL_API(egl_fogCoorddv)
{
  /* void glFogCoorddv(const GLdouble* coord) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, coord[])
  STACK_FMT_END()

    exdl_glFogCoorddv
    ( STACK_GET_ADDR(coord)
    );
}

EXDL_API(egl_fogCoordPointer)
{
  /* void glFogCoordPointer(GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid,  pointer[])
  STACK_FMT_END()

    exdl_glFogCoordPointer
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_ADDR(pointer)
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_secondaryColor3b)
{
  /* void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbyte, red)
    STACK_FMT_DATA(GLbyte, green)
    STACK_FMT_DATA(GLbyte, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3b
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3bv)
{
  /* void glSecondaryColor3bv(const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbyte, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3bv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3d)
{
  /* void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, red)
    STACK_FMT_DATA(GLdouble, green)
    STACK_FMT_DATA(GLdouble, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3d
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3dv)
{
  /* void glSecondaryColor3dv(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[3])
  STACK_FMT_END()

    exdl_glSecondaryColor3dv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3f)
{
  /* void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, red)
    STACK_FMT_DATA(GLfloat, green)
    STACK_FMT_DATA(GLfloat, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3f
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3fv)
{
  /* void glSecondaryColor3fv(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[3])
  STACK_FMT_END()

    exdl_glSecondaryColor3fv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3i)
{
  /* void glSecondaryColor3i(GLint red, GLint green, GLint blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, red)
    STACK_FMT_DATA(GLint, green)
    STACK_FMT_DATA(GLint, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3i
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3iv)
{
  /* void glSecondaryColor3iv(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[3])
  STACK_FMT_END()

    exdl_glSecondaryColor3iv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3s)
{
  /* void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, red)
    STACK_FMT_DATA(GLshort, green)
    STACK_FMT_DATA(GLshort, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3s
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3sv)
{
  /* void glSecondaryColor3sv(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[3])
  STACK_FMT_END()

    exdl_glSecondaryColor3sv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3ub)
{
  /* void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte, red)
    STACK_FMT_DATA(GLubyte, green)
    STACK_FMT_DATA(GLubyte, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3ub
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3ubv)
{
  /* void glSecondaryColor3ubv(const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte, v[3])
  STACK_FMT_END()

    exdl_glSecondaryColor3ubv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3ui)
{
  /* void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, red)
    STACK_FMT_DATA(GLuint, green)
    STACK_FMT_DATA(GLuint, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3ui
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3uiv)
{
  /* void glSecondaryColor3uiv(const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, v[3])
  STACK_FMT_END()

    exdl_glSecondaryColor3uiv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3us)
{
  /* void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLushort, red)
    STACK_FMT_DATA(GLushort, green)
    STACK_FMT_DATA(GLushort, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3us
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3usv)
{
  /* void glSecondaryColor3usv(const GLushort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLushort, v[3])
  STACK_FMT_END()

    exdl_glSecondaryColor3usv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColorPointer)
{
  /* void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glSecondaryColorPointer
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_windowPos2d)
{
  /* void glWindowPos2d(GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glWindowPos2d
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2dv)
{
  /* void glWindowPos2dv(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[2])
  STACK_FMT_END()

    exdl_glWindowPos2dv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos2f)
{
  /* void glWindowPos2f(GLfloat x, GLfloat y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
  STACK_FMT_END()

    exdl_glWindowPos2f
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2fv)
{
  /* void glWindowPos2fv(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[2])
  STACK_FMT_END()

    exdl_glWindowPos2fv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos2i)
{
  /* void glWindowPos2i(GLint x, GLint y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, x)
    STACK_FMT_DATA(GLint, y)
  STACK_FMT_END()

    exdl_glWindowPos2i
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2iv)
{
  /* void glWindowPos2iv(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[2])
  STACK_FMT_END()

    exdl_glWindowPos2iv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos2s)
{
  /* void glWindowPos2s(GLshort x, GLshort y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
  STACK_FMT_END()

    exdl_glWindowPos2s
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2sv)
{
  /* void glWindowPos2sv(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[2])
  STACK_FMT_END()

    exdl_glWindowPos2sv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3d)
{
  /* void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glWindowPos3d
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3dv)
{
  /* void glWindowPos3dv(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[3])
  STACK_FMT_END()

    exdl_glWindowPos3dv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3f)
{
  /* void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glWindowPos3f
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3fv)
{
  /* void glWindowPos3fv(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[3])
  STACK_FMT_END()

    exdl_glWindowPos3fv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3i)
{
  /* void glWindowPos3i(GLint x, GLint y, GLint z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, x)
    STACK_FMT_DATA(GLint, y)
    STACK_FMT_DATA(GLint, z)
  STACK_FMT_END()

    exdl_glWindowPos3i
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3iv)
{
  /* void glWindowPos3iv(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[3])
  STACK_FMT_END()

    exdl_glWindowPos3iv
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3s)
{
  /* void glWindowPos3s(GLshort x, GLshort y, GLshort z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
  STACK_FMT_END()

    exdl_glWindowPos3s
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3sv)
{
  /* void glWindowPos3sv(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[3])
  STACK_FMT_END()

    exdl_glWindowPos3sv
    ( STACK_GET_ADDR(v)
    );
}

/* GL_VERSION_1_5 */

EXDL_API(egl_genQueries)
{
  /* void glGenQueries(GLsizei n, GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, ids[])
  FRAME_FMT_SIZE(sizeof(GLuint) * STACK_GET_DATA(n))
  
    exdl_glGenQueries
    ( STACK_GET_DATA(n)
   ,  FRAME_GET_ADDR(ids)
    );

  THROW_FRAME()
}

EXDL_API(egl_deleteQueries)
{
  /* void glDeleteQueries(GLsizei n, const GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  ids[])
  STACK_FMT_END()

    exdl_glDeleteQueries
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(ids)
    );
}

EXDL_API(egl_isQuery)
{
  /* GLboolean glIsQuery(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsQuery
    ( STACK_GET_DATA(id)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_beginQuery)
{
  /* void glBeginQuery(GLenum target, GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glBeginQuery
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(id)
    );
}

EXDL_API(egl_endQuery)
{
  /* void glEndQuery(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glEndQuery
    ( STACK_GET_DATA(target)
    );
}

EXDL_API(egl_getQueryiv)
{
  /* void glGetQueryiv(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()

    exdl_glGetQueryiv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getQueryObjectiv)
{
  /* void glGetQueryObjectiv(GLuint id, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()

    exdl_glGetQueryObjectiv
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getQueryObjectuiv)
{
  /* void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()
   
    exdl_glGetQueryObjectuiv
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_bindBuffer)
{
  /* void glBindBuffer(GLenum target, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glBindBuffer
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_deleteBuffers)
{
  /* void glDeleteBuffers(GLsizei n, const GLuint* buffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  buffers[])
  STACK_FMT_END()

    exdl_glDeleteBuffers
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(buffers)
    );
}

EXDL_API(egl_genBuffers)
{
  /* void glGenBuffers(GLsizei n, GLuint* buffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
/*  STACK_FMT_DATA(GLuint,  buffers[]) */
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, buffers[])
  FRAME_FMT_SIZE(sizeof(GLuint) * STACK_GET_DATA(n))

    exdl_glGenBuffers
    ( STACK_GET_DATA(n)
   ,  FRAME_GET_ADDR(buffers)
    );

  THROW_FRAME()
}

EXDL_API(egl_isBuffer)
{
  /* GLboolean glIsBuffer(GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsBuffer
    ( STACK_GET_DATA(buffer)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_bufferData)
{
  /* void glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     target)
    STACK_FMT_DATA(GLsizeiptr, size)
    STACK_FMT_DATA(GLenum,     usage)
    STACK_FMT_DATA(GLvoid*,    data)
  STACK_FMT_END()

    exdl_glBufferData
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
   ,  STACK_GET_DATA(usage)
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_bufferSubData)
{
  /* void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     target)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, size)
    STACK_FMT_DATA(GLvoid*,    data)
  STACK_FMT_END()

    exdl_glBufferSubData
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_getBufferSubData)
{
  /* void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     target)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, size)
    STACK_FMT_DATA(GLvoid*,    data)
  STACK_FMT_END()

    exdl_glGetBufferSubData
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_mapBuffer)
{
  /* GLvoid* glMapBuffer(GLenum target, GLenum access) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, access)
  STACK_FMT_END()

  CATCH_RESULT(GLvoid*)

    exdl_glMapBuffer
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(access)
    );

  THROW_POINTER()
}

EXDL_API(egl_unmapBuffer)
{
  /* GLboolean glUnmapBuffer(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glUnmapBuffer
    ( STACK_GET_DATA(target)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_getBufferParameteriv)
{
  /* void glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()

    exdl_glGetBufferParameteriv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getBufferPointerv)
{
  /* void glGetBufferPointerv(GLenum target, GLenum pname, GLvoid** params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid*, params)
  FRAME_FMT_END()
  
    exdl_glGetBufferPointerv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

/* GL_VERSION_2_0 */

EXDL_API(egl_blendEquationSeparate)
{
  /* void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, modeRGB)
    STACK_FMT_DATA(GLenum, modeAlpha)
  STACK_FMT_END()

    exdl_glBlendEquationSeparate
    ( STACK_GET_DATA(modeRGB)
   ,  STACK_GET_DATA(modeAlpha)
    );
}

EXDL_API(egl_drawBuffers)
{
  /* void glDrawBuffers(GLsizei n, const GLenum* bufs) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLenum,  bufs[])
  STACK_FMT_END()

    exdl_glDrawBuffers
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(bufs)
    );
}

EXDL_API(egl_stencilOpSeparate)
{
  /* void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, sfail)
    STACK_FMT_DATA(GLenum, dpfail)
    STACK_FMT_DATA(GLenum, dppass)
  STACK_FMT_END()

    exdl_glStencilOpSeparate
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(sfail)
   ,  STACK_GET_DATA(dpfail)
   ,  STACK_GET_DATA(dppass)
    );
}

EXDL_API(egl_stencilFuncSeparate)
{
  /* void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, func)
    STACK_FMT_DATA(GLint,  ref)
    STACK_FMT_DATA(GLuint, mask)
  STACK_FMT_END()

    exdl_glStencilFuncSeparate
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(func)
   ,  STACK_GET_DATA(ref)
   ,  STACK_GET_DATA(mask)
    );
}

EXDL_API(egl_stencilMaskSeparate)
{
  /* void glStencilMaskSeparate(GLenum face, GLuint mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLuint, mask)
  STACK_FMT_END()

    exdl_glStencilMaskSeparate
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(mask)
    );
}

EXDL_API(egl_attachShader)
{
  /* void glAttachShader(GLuint program, GLuint shader) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLuint, shader)
  STACK_FMT_END()

    exdl_glAttachShader
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(shader)
    );
}

EXDL_API(egl_bindAttribLocation)
{
  /* void glBindAttribLocation(GLuint program, GLuint index, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLchar, name[])
  STACK_FMT_END()

    exdl_glBindAttribLocation
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(index)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(name)
  : (GLchar*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_compileShader)
{
  /* void glCompileShader(GLuint shader) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, shader)
  STACK_FMT_END()

    exdl_glCompileShader
    ( STACK_GET_DATA(shader)
    );
}

EXDL_API(egl_createProgram)
{
  /* GLuint glCreateProgram(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(GLuint)

    exdl_glCreateProgram
    (
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_createShader)
{
  /* GLuint glCreateShader(GLenum type) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glCreateShader
    ( STACK_GET_DATA(type)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_deleteProgram)
{
  /* void glDeleteProgram(GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

    exdl_glDeleteProgram
    ( STACK_GET_DATA(program)
    );
}

EXDL_API(egl_deleteShader)
{
  /* void glDeleteShader(GLuint shader) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, shader)
  STACK_FMT_END()

    exdl_glDeleteShader
    ( STACK_GET_DATA(shader)
    );
}

EXDL_API(egl_detachShader)
{
  /* void glDetachShader(GLuint program, GLuint shader) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLuint, shader)
  STACK_FMT_END()

    exdl_glDetachShader
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(shader)
    );
}

EXDL_API(egl_disableVertexAttribArray)
{
  /* void glDisableVertexAttribArray(GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glDisableVertexAttribArray
    ( STACK_GET_DATA(index)
    );
}

EXDL_API(egl_enableVertexAttribArray)
{
  /* void glEnableVertexAttribArray(GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glEnableVertexAttribArray
    ( STACK_GET_DATA(index)
    );
}

EXDL_API(egl_getActiveAttrib)
{
  /* void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLint,   size)
    FRAME_FMT_DATA(GLenum,  type)
    FRAME_FMT_DATA(GLchar,  name[])
  FRAME_FMT_SIZE(sizeof(GLchar) * STACK_GET_DATA(bufSize))
  
    exdl_glGetActiveAttrib
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(size)
   ,  FRAME_GET_ADDR(type)
   ,  FRAME_GET_ADDR(name)
    );

  THROW_FRAME()
}

EXDL_API(egl_getActiveUniform)
{
  /* void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLint,   size)
    FRAME_FMT_DATA(GLenum,  type)
    FRAME_FMT_DATA(GLchar,  name[])
  FRAME_FMT_SIZE(sizeof(GLchar) * STACK_GET_DATA(bufSize))
  
    exdl_glGetActiveUniform
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(size)
   ,  FRAME_GET_ADDR(type)
   ,  FRAME_GET_ADDR(name)
    );

  THROW_FRAME()
}

EXDL_API(egl_getAttachedShaders)
{
  /* void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei* count, GLuint* obj) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLsizei, maxCount)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, count)
    FRAME_FMT_DATA(GLuint,  obj[])
  FRAME_FMT_SIZE(sizeof(GLuint) * STACK_GET_DATA(maxCount))
  
    exdl_glGetAttachedShaders
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(maxCount)
   ,  FRAME_GET_ADDR(count)
   ,  FRAME_GET_ADDR(obj)
    );

  THROW_FRAME()
}

EXDL_API(egl_getAttribLocation)
{
  /* GLint glGetAttribLocation(GLuint program, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLchar, name[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetAttribLocation
    ( STACK_GET_DATA(program)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLint)

  exdl_free_binaries(sd);
}

EXDL_API(egl_getProgramiv)
{
  /* void glGetProgramiv(GLuint program, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()

    exdl_glGetProgramiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getProgramInfoLog)
{
  /* void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLchar,  infoLog[])
  FRAME_FMT_SIZE(sizeof(GLchar) * STACK_GET_DATA(bufSize))
    
    exdl_glGetProgramInfoLog
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(infoLog)
    );

  THROW_FRAME()
}

EXDL_API(egl_getShaderiv)
{
  /* void glGetShaderiv(GLuint shader, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, shader)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()

    exdl_glGetShaderiv
    ( STACK_GET_DATA(shader)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getShaderInfoLog)
{
  /* void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  shader)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLchar,  infoLog[])
  FRAME_FMT_SIZE(sizeof(GLchar) * STACK_GET_DATA(bufSize))
    
    exdl_glGetShaderInfoLog
    ( STACK_GET_DATA(shader)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(infoLog)
    );

  THROW_FRAME()
}

EXDL_API(egl_getShaderSource)
{
  /* void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  shader)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLchar,  source[])
  FRAME_FMT_SIZE(sizeof(GLchar) * STACK_GET_DATA(bufSize))
    
    exdl_glGetShaderSource
    ( STACK_GET_DATA(shader)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(source)
    );

  THROW_FRAME()
}

EXDL_API(egl_getUniformLocation)
{
  /* GLint glGetUniformLocation(GLuint program, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLchar, name[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetUniformLocation
    ( STACK_GET_DATA(program)
   ,  (sd->next_bin == 0)
    ? STACK_GET_ADDR(name)
    : (GLchar*) sd->bin[0].base
    );
  
  THROW_RESULT(GLint)

  exdl_free_binaries(sd);
}

EXDL_API(egl_getUniformfv)
{
  /* void glGetUniformfv(GLuint program, GLint location, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetUniformfv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(params)
  : (GLfloat*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_getUniformiv)
{
  /* void glGetUniformiv(GLuint program, GLint location, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetUniformiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(params)
  : (GLint*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_getVertexAttribdv)
{
  /* void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, params[4])
  FRAME_FMT_END()

    exdl_glGetVertexAttribdv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getVertexAttribfv)
{
  /* void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params[4])
  FRAME_FMT_END()

    exdl_glGetVertexAttribfv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getVertexAttribiv)
{
  /* void glGetVertexAttribiv(GLuint index, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[4])
  FRAME_FMT_END()

    exdl_glGetVertexAttribiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getVertexAttribPointerv)
{
  /* void glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid** pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid*, pointer)
  FRAME_FMT_END()

    exdl_glGetVertexAttribPointerv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(pointer)
    );

  THROW_FRAME()
}

EXDL_API(egl_isProgram)
{
  /* GLboolean glIsProgram(GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsProgram
    ( STACK_GET_DATA(program)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_isShader)
{
  /* GLboolean glIsShader(GLuint shader) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, shader)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsShader
    ( STACK_GET_DATA(shader)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_linkProgram)
{
  /* void glLinkProgram(GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

    exdl_glLinkProgram
    ( STACK_GET_DATA(program)
    );
}

EXDL_API(egl_shaderSource)
{
  /* void glShaderSource(GLuint shader, GLsizei count, const GLchar** string, const GLint* length) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  shader)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLchar*, string[])
  STACK_FMT_END()
  
  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, length)
  FRAME_FMT_END()

    exdl_glShaderSource
    ( STACK_GET_DATA(shader)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(string)
   ,  FRAME_GET_ADDR(length)
    );
  
  exdl_free_binaries(sd);
}

EXDL_API(egl_useProgram)
{
  /* void glUseProgram(GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

    exdl_glUseProgram
    ( STACK_GET_DATA(program)
    );
}

EXDL_API(egl_uniform1f)
{
  /* void glUniform1f(GLint location, GLfloat v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
  STACK_FMT_END()

    exdl_glUniform1f
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_uniform2f)
{
  /* void glUniform2f(GLint location, GLfloat v0, GLfloat v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
  STACK_FMT_END()

    exdl_glUniform2f
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_uniform3f)
{
  /* void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
    STACK_FMT_DATA(GLfloat, v2)
  STACK_FMT_END()

    exdl_glUniform3f
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_uniform4f)
{
  /* void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
    STACK_FMT_DATA(GLfloat, v2)
    STACK_FMT_DATA(GLfloat, v3)
  STACK_FMT_END()

    exdl_glUniform4f
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_uniform1i)
{
  /* void glUniform1i(GLint location, GLint v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, location)
    STACK_FMT_DATA(GLint, v0)
  STACK_FMT_END()

    exdl_glUniform1i
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_uniform2i)
{
  /* void glUniform2i(GLint location, GLint v0, GLint v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, location)
    STACK_FMT_DATA(GLint, v0)
    STACK_FMT_DATA(GLint, v1)
  STACK_FMT_END()

    exdl_glUniform2i
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_uniform3i)
{
  /* void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, location)
    STACK_FMT_DATA(GLint, v0)
    STACK_FMT_DATA(GLint, v1)
    STACK_FMT_DATA(GLint, v2)
  STACK_FMT_END()

    exdl_glUniform3i
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_uniform4i)
{
  /* void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, location)
    STACK_FMT_DATA(GLint, v0)
    STACK_FMT_DATA(GLint, v1)
    STACK_FMT_DATA(GLint, v2)
    STACK_FMT_DATA(GLint, v3)
  STACK_FMT_END()

    exdl_glUniform4i
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_uniform1fv)
{
  /* void glUniform1fv(GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[1])
  STACK_FMT_END()

    exdl_glUniform1fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform2fv)
{
  /* void glUniform2fv(GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[2])
  STACK_FMT_END()

    exdl_glUniform2fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(value)
  : (GLfloat*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_uniform3fv)
{
  /* void glUniform3fv(GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[3])
  STACK_FMT_END()

    exdl_glUniform3fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
    ? STACK_GET_ADDR(value)
    : (GLfloat*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_uniform4fv)
{
  /* void glUniform4fv(GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[4])
  STACK_FMT_END()

    exdl_glUniform4fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
    ? STACK_GET_ADDR(value)
    : (GLfloat*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_uniform1iv)
{
  /* void glUniform1iv(GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[1])
  STACK_FMT_END()

    exdl_glUniform1iv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform2iv)
{
  /* void glUniform2iv(GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[2])
  STACK_FMT_END()

    exdl_glUniform2iv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(value)
  : (GLint*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_uniform3iv)
{
  /* void glUniform3iv(GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[3])
  STACK_FMT_END()

    exdl_glUniform3iv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(value)
  : (GLint*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_uniform4iv)
{
  /* void glUniform4iv(GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[4])
  STACK_FMT_END()

    exdl_glUniform4iv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(value)
  : (GLint*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_uniformMatrix2fv)
{
  /* void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[2])
  STACK_FMT_END()

    exdl_glUniformMatrix2fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(value)
  : (GLfloat*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_uniformMatrix3fv)
{
  /* void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[3])
  STACK_FMT_END()

    exdl_glUniformMatrix3fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(value)
  : (GLfloat*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_uniformMatrix4fv)
{
  /* void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[4])
  STACK_FMT_END()

    exdl_glUniformMatrix4fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  (sd->next_bin == 0)
  ? STACK_GET_ADDR(value)
  : (GLfloat*) sd->bin[0].base
    );

    exdl_free_binaries(sd);
}

EXDL_API(egl_validateProgram)
{
  /* void glValidateProgram(GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

    exdl_glValidateProgram
    ( STACK_GET_DATA(program)
    );
}

EXDL_API(egl_vertexAttrib1d)
{
  /* void glVertexAttrib1d(GLuint index, GLdouble x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1d
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1dv)
{
  /* void glVertexAttrib1dv(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLdouble, v[1])
  STACK_FMT_END()

    exdl_glVertexAttrib1dv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib1f)
{
  /* void glVertexAttrib1f(GLuint index, GLfloat x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1f
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1fv)
{
  /* void glVertexAttrib1fv(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[1])
  STACK_FMT_END()

    exdl_glVertexAttrib1fv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib1s)
{
  /* void glVertexAttrib1s(GLuint index, GLshort x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1s
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1sv)
{
  /* void glVertexAttrib1sv(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[1])
  STACK_FMT_END()

    exdl_glVertexAttrib1sv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2d)
{
  /* void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2d
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2dv)
{
  /* void glVertexAttrib2dv(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[2])
  STACK_FMT_END()

    exdl_glVertexAttrib2dv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2f)
{
  /* void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2f
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2fv)
{
  /* void glVertexAttrib2fv(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[2])
  STACK_FMT_END()

    exdl_glVertexAttrib2fv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2s)
{
  /* void glVertexAttrib2s(GLuint index, GLshort x, GLshort y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2s
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2sv)
{
  /* void glVertexAttrib2sv(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[2])
  STACK_FMT_END()

    exdl_glVertexAttrib2sv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3d)
{
  /* void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3d
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3dv)
{
  /* void glVertexAttrib3dv(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[3])
  STACK_FMT_END()

    exdl_glVertexAttrib3dv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3f)
{
  /* void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3f
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3fv)
{
  /* void glVertexAttrib3fv(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[3])
  STACK_FMT_END()

    exdl_glVertexAttrib3fv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3s)
{
  /* void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3s
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3sv)
{
  /* void glVertexAttrib3sv(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[3])
  STACK_FMT_END()

    exdl_glVertexAttrib3sv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4Nbv)
{
  /* void glVertexAttrib4Nbv(GLuint index, const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLbyte, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4Nbv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4Niv)
{
  /* void glVertexAttrib4Niv(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4Niv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4Nsv)
{
  /* void glVertexAttrib4Nsv(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4Nsv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4Nub)
{
  /* void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, x)
    STACK_FMT_DATA(GLubyte, y)
    STACK_FMT_DATA(GLubyte, z)
    STACK_FMT_DATA(GLubyte, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4Nub
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4Nubv)
{
  /* void glVertexAttrib4Nubv(GLuint index, const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4Nubv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4Nuiv)
{
  /* void glVertexAttrib4Nuiv(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4Nuiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4Nusv)
{
  /* void glVertexAttrib4Nusv(GLuint index, const GLushort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLushort, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4Nusv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4bv)
{
  /* void glVertexAttrib4bv(GLuint index, const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLbyte, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4bv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4d)
{
  /* void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4d
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4dv)
{
  /* void glVertexAttrib4dv(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4dv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4f)
{
  /* void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4f
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4fv)
{
  /* void glVertexAttrib4fv(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4fv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4iv)
{
  /* void glVertexAttrib4iv(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4iv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4s)
{
  /* void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
    STACK_FMT_DATA(GLshort, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4s
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4sv)
{
  /* void glVertexAttrib4sv(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4sv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4ubv)
{
  /* void glVertexAttrib4ubv(GLuint index, const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4ubv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4uiv)
{
  /* void glVertexAttrib4uiv(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4uiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4usv)
{
  /* void glVertexAttrib4usv(GLuint index, const GLushort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLushort, v[4])
  STACK_FMT_END()

    exdl_glVertexAttrib4usv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribPointer)
{
  /* void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLint,     size)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLboolean, normalized)
    STACK_FMT_DATA(GLsizei,   stride)
    STACK_FMT_DATA(GLvoid*,   pointer)
  STACK_FMT_END()

    exdl_glVertexAttribPointer
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

/* GL_VERSION_2_1 */

EXDL_API(egl_uniformMatrix2x3fv)
{
  /* void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glUniformMatrix2x3fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix3x2fv)
{
  /* void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glUniformMatrix3x2fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix2x4fv)
{
  /* void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glUniformMatrix2x4fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix4x2fv)
{
  /* void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glUniformMatrix4x2fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix3x4fv)
{
  /* void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glUniformMatrix3x4fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix4x3fv)
{
  /* void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glUniformMatrix4x3fv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

/* GL_VERSION_3_0 */

EXDL_API(egl_colorMaski)
{
  /* void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLboolean, r)
    STACK_FMT_DATA(GLboolean, g)
    STACK_FMT_DATA(GLboolean, b)
    STACK_FMT_DATA(GLboolean, a)
  STACK_FMT_END()

    exdl_glColorMaski
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
    );
}

EXDL_API(egl_getBooleani_v)
{
  /* void glGetBooleani_v(GLenum target, GLuint index, GLboolean* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLboolean, data[])
  STACK_FMT_END()

    exdl_glGetBooleani_v
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getIntegeri_v)
{
  /* void glGetIntegeri_v(GLenum target, GLuint index, GLint* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  data[])
  STACK_FMT_END()

    exdl_glGetIntegeri_v
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_enablei)
{
  /* void glEnablei(GLenum target, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glEnablei
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
    );
}

EXDL_API(egl_disablei)
{
  /* void glDisablei(GLenum target, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glDisablei
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
    );
}

EXDL_API(egl_isEnabledi)
{
  /* GLboolean glIsEnabledi(GLenum target, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsEnabledi
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_beginTransformFeedback)
{
  /* void glBeginTransformFeedback(GLenum primitiveMode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, primitiveMode)
  STACK_FMT_END()

    exdl_glBeginTransformFeedback
    ( STACK_GET_DATA(primitiveMode)
    );
}

EXDL_API(egl_endTransformFeedback)
{
  /* void glEndTransformFeedback(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glEndTransformFeedback
  (
  );
}

EXDL_API(egl_bindBufferRange)
{
  /* void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     target)
    STACK_FMT_DATA(GLuint,     index)
    STACK_FMT_DATA(GLuint,     buffer)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, size)
  STACK_FMT_END()

    exdl_glBindBufferRange
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
    );
}

EXDL_API(egl_bindBufferBase)
{
  /* void glBindBufferBase(GLenum target, GLuint index, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glBindBufferBase
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_transformFeedbackVaryings)
{
  /* void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar** varyings, GLenum bufferMode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_LPTR(GLchar**, varyings)
    STACK_FMT_DATA(GLenum,   bufferMode)
  STACK_FMT_END()

    exdl_glTransformFeedbackVaryings
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(varyings)
   ,  STACK_GET_DATA(bufferMode)
    );
}

EXDL_API(egl_getTransformFeedbackVarying)
{
  /* void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLsizei, size)
    FRAME_FMT_DATA(GLenum,  type)
    FRAME_FMT_DATA(GLchar,  name)
  FRAME_FMT_END()

    exdl_glGetTransformFeedbackVarying
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(size)
   ,  FRAME_GET_ADDR(type)
   ,  FRAME_GET_ADDR(name)
    );

  THROW_FRAME()
}

EXDL_API(egl_clampColor)
{
  /* void glClampColor(GLenum target, GLenum clamp) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, clamp)
  STACK_FMT_END()

    exdl_glClampColor
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(clamp)
    );
}

EXDL_API(egl_beginConditionalRender)
{
  /* void glBeginConditionalRender(GLuint id, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glBeginConditionalRender
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_endConditionalRender)
{
  /* void glEndConditionalRender(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glEndConditionalRender
  (
  );
}

EXDL_API(egl_vertexAttribIPointer)
{
  /* void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glVertexAttribIPointer
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getVertexAttribIiv)
{
  /* void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint))

    exdl_glGetVertexAttribIiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getVertexAttribIuiv)
{
  /* void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLuint))

    exdl_glGetVertexAttribIuiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_vertexAttribI1i)
{
  /* void glVertexAttribI1i(GLuint index, GLint x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
  STACK_FMT_END()

    exdl_glVertexAttribI1i
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttribI2i)
{
  /* void glVertexAttribI2i(GLuint index, GLint x, GLint y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
  STACK_FMT_END()

    exdl_glVertexAttribI2i
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttribI3i)
{
  /* void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
    STACK_FMT_DATA(GLint,  z)
  STACK_FMT_END()

    exdl_glVertexAttribI3i
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttribI4i)
{
  /* void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
    STACK_FMT_DATA(GLint,  z)
    STACK_FMT_DATA(GLint,  w)
  STACK_FMT_END()

    exdl_glVertexAttribI4i
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttribI1ui)
{
  /* void glVertexAttribI1ui(GLuint index, GLuint x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
  STACK_FMT_END()

    exdl_glVertexAttribI1ui
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttribI2ui)
{
  /* void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
    STACK_FMT_DATA(GLuint, y)
  STACK_FMT_END()

    exdl_glVertexAttribI2ui
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttribI3ui)
{
  /* void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
    STACK_FMT_DATA(GLuint, y)
    STACK_FMT_DATA(GLuint, z)
  STACK_FMT_END()

    exdl_glVertexAttribI3ui
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttribI4ui)
{
  /* void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
    STACK_FMT_DATA(GLuint, y)
    STACK_FMT_DATA(GLuint, z)
    STACK_FMT_DATA(GLuint, w)
  STACK_FMT_END()

    exdl_glVertexAttribI4ui
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttribI1iv)
{
  /* void glVertexAttribI1iv(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribI1iv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI2iv)
{
  /* void glVertexAttribI2iv(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribI2iv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI3iv)
{
  /* void glVertexAttribI3iv(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribI3iv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4iv)
{
  /* void glVertexAttribI4iv(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4iv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI1uiv)
{
  /* void glVertexAttribI1uiv(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI1uiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI2uiv)
{
  /* void glVertexAttribI2uiv(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI2uiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI3uiv)
{
  /* void glVertexAttribI3uiv(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI3uiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4uiv)
{
  /* void glVertexAttribI4uiv(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4uiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4bv)
{
  /* void glVertexAttribI4bv(GLuint index, const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLbyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4bv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4sv)
{
  /* void glVertexAttribI4sv(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4sv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4ubv)
{
  /* void glVertexAttribI4ubv(GLuint index, const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4ubv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4usv)
{
  /* void glVertexAttribI4usv(GLuint index, const GLushort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLushort, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4usv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_getUniformuiv)
{
  /* void glGetUniformuiv(GLuint program, GLint location, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(location) * sizeof(GLuint))

    exdl_glGetUniformuiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_bindFragDataLocation)
{
  /* void glBindFragDataLocation(GLuint program, GLuint color, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLuint, color)
    STACK_FMT_DATA(GLchar, name[])
  STACK_FMT_END()

    exdl_glBindFragDataLocation
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(color)
   ,  STACK_GET_ADDR(name)
    );
}

EXDL_API(egl_getFragDataLocation)
{
  /* GLint glGetFragDataLocation(GLuint program, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLchar, name[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetFragDataLocation
    ( STACK_GET_DATA(program)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_uniform1ui)
{
  /* void glUniform1ui(GLint location, GLuint v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
  STACK_FMT_END()

    exdl_glUniform1ui
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_uniform2ui)
{
  /* void glUniform2ui(GLint location, GLuint v0, GLuint v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
  STACK_FMT_END()

    exdl_glUniform2ui
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_uniform3ui)
{
  /* void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
    STACK_FMT_DATA(GLuint, v2)
  STACK_FMT_END()

    exdl_glUniform3ui
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_uniform4ui)
{
  /* void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
    STACK_FMT_DATA(GLuint, v2)
    STACK_FMT_DATA(GLuint, v3)
  STACK_FMT_END()

    exdl_glUniform4ui
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_uniform1uiv)
{
  /* void glUniform1uiv(GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glUniform1uiv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform2uiv)
{
  /* void glUniform2uiv(GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glUniform2uiv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform3uiv)
{
  /* void glUniform3uiv(GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glUniform3uiv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform4uiv)
{
  /* void glUniform4uiv(GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glUniform4uiv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_texParameterIiv)
{
  /* void glTexParameterIiv(GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glTexParameterIiv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_texParameterIuiv)
{
  /* void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glTexParameterIuiv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getTexParameterIiv)
{
  /* void glGetTexParameterIiv(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint))

    exdl_glGetTexParameterIiv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getTexParameterIuiv)
{
  /* void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLuint))

    exdl_glGetTexParameterIuiv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_clearBufferiv)
{
  /* void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, buffer)
    STACK_FMT_DATA(GLint,  drawbuffer)
    STACK_FMT_DATA(GLint,  value[])
  STACK_FMT_END()

    exdl_glClearBufferiv
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(drawbuffer)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_clearBufferuiv)
{
  /* void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, buffer)
    STACK_FMT_DATA(GLint,  drawbuffer)
    STACK_FMT_DATA(GLuint, value[])
  STACK_FMT_END()

    exdl_glClearBufferuiv
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(drawbuffer)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_clearBufferfv)
{
  /* void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  buffer)
    STACK_FMT_DATA(GLint,   drawbuffer)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glClearBufferfv
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(drawbuffer)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_clearBufferfi)
{
  /* void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  buffer)
    STACK_FMT_DATA(GLint,   drawbuffer)
    STACK_FMT_DATA(GLfloat, depth)
    STACK_FMT_DATA(GLint,   stencil)
  STACK_FMT_END()

    exdl_glClearBufferfi
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(drawbuffer)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(stencil)
    );
}

EXDL_API(egl_getStringi)
{
  /* const GLubyte* glGetStringi(GLenum name, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, name)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  CATCH_RESULT(const GLubyte*)

    exdl_glGetStringi
    ( STACK_GET_DATA(name)
   ,  STACK_GET_DATA(index)
    );

  THROW_POINTER()
}

/* GL_VERSION_3_1 */

EXDL_API(egl_drawArraysInstanced)
{
  /* void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLint,   first)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLsizei, primcount)
  STACK_FMT_END()

    exdl_glDrawArraysInstanced
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(primcount)
    );
}

EXDL_API(egl_drawElementsInstanced)
{
  /* void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_LPTR(GLvoid*, indices)
    STACK_FMT_DATA(GLsizei, primcount)
  STACK_FMT_END()

    exdl_glDrawElementsInstanced
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(indices)
   ,  STACK_GET_DATA(primcount)
    );
}

EXDL_API(egl_texBuffer)
{
  /* void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, internalformat)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glTexBuffer
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_primitiveRestartIndex)
{
  /* void glPrimitiveRestartIndex(GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glPrimitiveRestartIndex
    ( STACK_GET_DATA(index)
    );
}

/* GL_VERSION_3_2 */

EXDL_API(egl_getInteger64i_v)
{
  /* void glGetInteger64i_v(GLenum target, GLuint index, GLint64* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint64, data[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(index) * sizeof(GLint64))

    exdl_glGetInteger64i_v
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(data)
    );

  THROW_FRAME()
}

EXDL_API(egl_getBufferParameteri64v)
{
  /* void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint64, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint64))

    exdl_glGetBufferParameteri64v
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_programParameteri)
{
  /* void glProgramParameteri(GLuint program, GLenum pname, GLint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint, value)
  STACK_FMT_END()

    exdl_glProgramParameteri
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_framebufferTexture)
{
  /* void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint, level)
  STACK_FMT_END()

    exdl_glFramebufferTexture
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_framebufferTextureFace)
{
  /* void glFramebufferTextureFace(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint, level)
    STACK_FMT_DATA(GLenum, face)
  STACK_FMT_END()

    exdl_glFramebufferTextureFace
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(face)
    );
}

/* GL_ARB_multitexture */

EXDL_API(egl_activeTextureARB)
{
  /* void glActiveTextureARB(GLenum texture) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texture)
  STACK_FMT_END()

    exdl_glActiveTextureARB
    ( STACK_GET_DATA(texture)
    );
}

EXDL_API(egl_clientActiveTextureARB)
{
  /* void glClientActiveTextureARB(GLenum texture) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texture)
  STACK_FMT_END()

    exdl_glClientActiveTextureARB
    ( STACK_GET_DATA(texture)
    );
}

EXDL_API(egl_multiTexCoord1dARB)
{
  /* void glMultiTexCoord1dARB(GLenum target, GLdouble s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, s)
  STACK_FMT_END()

    exdl_glMultiTexCoord1dARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
    );
}

EXDL_API(egl_multiTexCoord1dvARB)
{
  /* void glMultiTexCoord1dvARB(GLenum target, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord1dvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord1fARB)
{
  /* void glMultiTexCoord1fARB(GLenum target, GLfloat s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, s)
  STACK_FMT_END()

    exdl_glMultiTexCoord1fARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
    );
}

EXDL_API(egl_multiTexCoord1fvARB)
{
  /* void glMultiTexCoord1fvARB(GLenum target, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord1fvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord1iARB)
{
  /* void glMultiTexCoord1iARB(GLenum target, GLint s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  s)
  STACK_FMT_END()

    exdl_glMultiTexCoord1iARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
    );
}

EXDL_API(egl_multiTexCoord1ivARB)
{
  /* void glMultiTexCoord1ivARB(GLenum target, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord1ivARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord1sARB)
{
  /* void glMultiTexCoord1sARB(GLenum target, GLshort s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, s)
  STACK_FMT_END()

    exdl_glMultiTexCoord1sARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
    );
}

EXDL_API(egl_multiTexCoord1svARB)
{
  /* void glMultiTexCoord1svARB(GLenum target, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord1svARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord2dARB)
{
  /* void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, s)
    STACK_FMT_DATA(GLdouble, t)
  STACK_FMT_END()

    exdl_glMultiTexCoord2dARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_multiTexCoord2dvARB)
{
  /* void glMultiTexCoord2dvARB(GLenum target, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord2dvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord2fARB)
{
  /* void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
  STACK_FMT_END()

    exdl_glMultiTexCoord2fARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_multiTexCoord2fvARB)
{
  /* void glMultiTexCoord2fvARB(GLenum target, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord2fvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord2iARB)
{
  /* void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  s)
    STACK_FMT_DATA(GLint,  t)
  STACK_FMT_END()

    exdl_glMultiTexCoord2iARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_multiTexCoord2ivARB)
{
  /* void glMultiTexCoord2ivARB(GLenum target, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord2ivARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord2sARB)
{
  /* void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, s)
    STACK_FMT_DATA(GLshort, t)
  STACK_FMT_END()

    exdl_glMultiTexCoord2sARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_multiTexCoord2svARB)
{
  /* void glMultiTexCoord2svARB(GLenum target, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord2svARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord3dARB)
{
  /* void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, s)
    STACK_FMT_DATA(GLdouble, t)
    STACK_FMT_DATA(GLdouble, r)
  STACK_FMT_END()

    exdl_glMultiTexCoord3dARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_multiTexCoord3dvARB)
{
  /* void glMultiTexCoord3dvARB(GLenum target, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord3dvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord3fARB)
{
  /* void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, r)
  STACK_FMT_END()

    exdl_glMultiTexCoord3fARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_multiTexCoord3fvARB)
{
  /* void glMultiTexCoord3fvARB(GLenum target, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord3fvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord3iARB)
{
  /* void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  s)
    STACK_FMT_DATA(GLint,  t)
    STACK_FMT_DATA(GLint,  r)
  STACK_FMT_END()

    exdl_glMultiTexCoord3iARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_multiTexCoord3ivARB)
{
  /* void glMultiTexCoord3ivARB(GLenum target, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord3ivARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord3sARB)
{
  /* void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, s)
    STACK_FMT_DATA(GLshort, t)
    STACK_FMT_DATA(GLshort, r)
  STACK_FMT_END()

    exdl_glMultiTexCoord3sARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_multiTexCoord3svARB)
{
  /* void glMultiTexCoord3svARB(GLenum target, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord3svARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord4dARB)
{
  /* void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, s)
    STACK_FMT_DATA(GLdouble, t)
    STACK_FMT_DATA(GLdouble, r)
    STACK_FMT_DATA(GLdouble, q)
  STACK_FMT_END()

    exdl_glMultiTexCoord4dARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_multiTexCoord4dvARB)
{
  /* void glMultiTexCoord4dvARB(GLenum target, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord4dvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord4fARB)
{
  /* void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, q)
  STACK_FMT_END()

    exdl_glMultiTexCoord4fARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_multiTexCoord4fvARB)
{
  /* void glMultiTexCoord4fvARB(GLenum target, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord4fvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord4iARB)
{
  /* void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  s)
    STACK_FMT_DATA(GLint,  t)
    STACK_FMT_DATA(GLint,  r)
    STACK_FMT_DATA(GLint,  q)
  STACK_FMT_END()

    exdl_glMultiTexCoord4iARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_multiTexCoord4ivARB)
{
  /* void glMultiTexCoord4ivARB(GLenum target, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord4ivARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord4sARB)
{
  /* void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, s)
    STACK_FMT_DATA(GLshort, t)
    STACK_FMT_DATA(GLshort, r)
    STACK_FMT_DATA(GLshort, q)
  STACK_FMT_END()

    exdl_glMultiTexCoord4sARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_multiTexCoord4svARB)
{
  /* void glMultiTexCoord4svARB(GLenum target, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord4svARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

/* GL_ARB_transpose_matrix */

EXDL_API(egl_loadTransposeMatrixfARB)
{
  /* void glLoadTransposeMatrixfARB(const GLfloat* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, m[])
  STACK_FMT_END()

    exdl_glLoadTransposeMatrixfARB
    ( STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_loadTransposeMatrixdARB)
{
  /* void glLoadTransposeMatrixdARB(const GLdouble* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, m[])
  STACK_FMT_END()

    exdl_glLoadTransposeMatrixdARB
    ( STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_multTransposeMatrixfARB)
{
  /* void glMultTransposeMatrixfARB(const GLfloat* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, m[])
  STACK_FMT_END()

    exdl_glMultTransposeMatrixfARB
    ( STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_multTransposeMatrixdARB)
{
  /* void glMultTransposeMatrixdARB(const GLdouble* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, m[])
  STACK_FMT_END()

    exdl_glMultTransposeMatrixdARB
    ( STACK_GET_ADDR(m)
    );
}

/* GL_ARB_multisample */

EXDL_API(egl_sampleCoverageARB)
{
  /* void glSampleCoverageARB(GLclampf value, GLboolean invert) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLclampf,  value)
    STACK_FMT_DATA(GLboolean, invert)
  STACK_FMT_END()

    exdl_glSampleCoverageARB
    ( STACK_GET_DATA(value)
   ,  STACK_GET_DATA(invert)
    );
}

/* GL_ARB_texture_env_add */

/* GL_ARB_texture_cube_map */

/* GL_ARB_texture_compression */

EXDL_API(egl_compressedTexImage3DARB)
{
  /* void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexImage3DARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTexImage2DARB)
{
  /* void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexImage2DARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTexImage1DARB)
{
  /* void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexImage1DARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTexSubImage3DARB)
{
  /* void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexSubImage3DARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTexSubImage2DARB)
{
  /* void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexSubImage2DARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTexSubImage1DARB)
{
  /* void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glCompressedTexSubImage1DARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getCompressedTexImageARB)
{
  /* void glGetCompressedTexImageARB(GLenum target, GLint level, GLvoid* img) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLvoid*, img)
  STACK_FMT_END()

    exdl_glGetCompressedTexImageARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(img)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_ARB_texture_border_clamp */

/* GL_ARB_point_parameters */

EXDL_API(egl_pointParameterfARB)
{
  /* void glPointParameterfARB(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glPointParameterfARB
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pointParameterfvARB)
{
  /* void glPointParameterfvARB(GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glPointParameterfvARB
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_ARB_vertex_blend */

EXDL_API(egl_weightbvARB)
{
  /* void glWeightbvARB(GLint size, const GLbyte* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  size)
    STACK_FMT_DATA(GLbyte, weights[])
  STACK_FMT_END()

    exdl_glWeightbvARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(weights)
    );
}

EXDL_API(egl_weightsvARB)
{
  /* void glWeightsvARB(GLint size, const GLshort* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLshort, weights[])
  STACK_FMT_END()

    exdl_glWeightsvARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(weights)
    );
}

EXDL_API(egl_weightivARB)
{
  /* void glWeightivARB(GLint size, const GLint* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, size)
    STACK_FMT_DATA(GLint, weights[])
  STACK_FMT_END()

    exdl_glWeightivARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(weights)
    );
}

EXDL_API(egl_weightfvARB)
{
  /* void glWeightfvARB(GLint size, const GLfloat* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLfloat, weights[])
  STACK_FMT_END()

    exdl_glWeightfvARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(weights)
    );
}

EXDL_API(egl_weightdvARB)
{
  /* void glWeightdvARB(GLint size, const GLdouble* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLdouble, weights[])
  STACK_FMT_END()

    exdl_glWeightdvARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(weights)
    );
}

EXDL_API(egl_weightubvARB)
{
  /* void glWeightubvARB(GLint size, const GLubyte* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLubyte, weights[])
  STACK_FMT_END()

    exdl_glWeightubvARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(weights)
    );
}

EXDL_API(egl_weightusvARB)
{
  /* void glWeightusvARB(GLint size, const GLushort* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLushort, weights[])
  STACK_FMT_END()

    exdl_glWeightusvARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(weights)
    );
}

EXDL_API(egl_weightuivARB)
{
  /* void glWeightuivARB(GLint size, const GLuint* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  size)
    STACK_FMT_DATA(GLuint, weights[])
  STACK_FMT_END()

    exdl_glWeightuivARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(weights)
    );
}

EXDL_API(egl_weightPointerARB)
{
  /* void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glWeightPointerARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_vertexBlendARB)
{
  /* void glVertexBlendARB(GLint count) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, count)
  STACK_FMT_END()

    exdl_glVertexBlendARB
    ( STACK_GET_DATA(count)
    );
}

/* GL_ARB_matrix_palette */

EXDL_API(egl_currentPaletteMatrixARB)
{
  /* void glCurrentPaletteMatrixARB(GLint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, index)
  STACK_FMT_END()

    exdl_glCurrentPaletteMatrixARB
    ( STACK_GET_DATA(index)
    );
}

EXDL_API(egl_matrixIndexubvARB)
{
  /* void glMatrixIndexubvARB(GLint size, const GLubyte* indices) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLubyte, indices[])
  STACK_FMT_END()

    exdl_glMatrixIndexubvARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(indices)
    );
}

EXDL_API(egl_matrixIndexusvARB)
{
  /* void glMatrixIndexusvARB(GLint size, const GLushort* indices) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLushort, indices[])
  STACK_FMT_END()

    exdl_glMatrixIndexusvARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(indices)
    );
}

EXDL_API(egl_matrixIndexuivARB)
{
  /* void glMatrixIndexuivARB(GLint size, const GLuint* indices) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  size)
    STACK_FMT_DATA(GLuint, indices[])
  STACK_FMT_END()

    exdl_glMatrixIndexuivARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(indices)
    );
}

EXDL_API(egl_matrixIndexPointerARB)
{
  /* void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glMatrixIndexPointerARB
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

/* GL_ARB_texture_env_combine */

/* GL_ARB_texture_env_crossbar */

/* GL_ARB_texture_env_dot3 */

/* GL_ARB_texture_mirrored_repeat */

/* GL_ARB_depth_texture */

/* GL_ARB_shadow */

/* GL_ARB_shadow_ambient */

/* GL_ARB_window_pos */

EXDL_API(egl_windowPos2dARB)
{
  /* void glWindowPos2dARB(GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glWindowPos2dARB
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2dvARB)
{
  /* void glWindowPos2dvARB(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glWindowPos2dvARB
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos2fARB)
{
  /* void glWindowPos2fARB(GLfloat x, GLfloat y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
  STACK_FMT_END()

    exdl_glWindowPos2fARB
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2fvARB)
{
  /* void glWindowPos2fvARB(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glWindowPos2fvARB
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos2iARB)
{
  /* void glWindowPos2iARB(GLint x, GLint y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, x)
    STACK_FMT_DATA(GLint, y)
  STACK_FMT_END()

    exdl_glWindowPos2iARB
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2ivARB)
{
  /* void glWindowPos2ivARB(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[])
  STACK_FMT_END()

    exdl_glWindowPos2ivARB
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos2sARB)
{
  /* void glWindowPos2sARB(GLshort x, GLshort y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
  STACK_FMT_END()

    exdl_glWindowPos2sARB
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2svARB)
{
  /* void glWindowPos2svARB(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glWindowPos2svARB
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3dARB)
{
  /* void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glWindowPos3dARB
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3dvARB)
{
  /* void glWindowPos3dvARB(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glWindowPos3dvARB
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3fARB)
{
  /* void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glWindowPos3fARB
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3fvARB)
{
  /* void glWindowPos3fvARB(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glWindowPos3fvARB
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3iARB)
{
  /* void glWindowPos3iARB(GLint x, GLint y, GLint z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, x)
    STACK_FMT_DATA(GLint, y)
    STACK_FMT_DATA(GLint, z)
  STACK_FMT_END()

    exdl_glWindowPos3iARB
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3ivARB)
{
  /* void glWindowPos3ivARB(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[])
  STACK_FMT_END()

    exdl_glWindowPos3ivARB
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3sARB)
{
  /* void glWindowPos3sARB(GLshort x, GLshort y, GLshort z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
  STACK_FMT_END()

    exdl_glWindowPos3sARB
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3svARB)
{
  /* void glWindowPos3svARB(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glWindowPos3svARB
    ( STACK_GET_ADDR(v)
    );
}

/* GL_ARB_vertex_program */

EXDL_API(egl_vertexAttrib1dARB)
{
  /* void glVertexAttrib1dARB(GLuint index, GLdouble x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1dARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1dvARB)
{
  /* void glVertexAttrib1dvARB(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib1dvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib1fARB)
{
  /* void glVertexAttrib1fARB(GLuint index, GLfloat x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1fARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1fvARB)
{
  /* void glVertexAttrib1fvARB(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib1fvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib1sARB)
{
  /* void glVertexAttrib1sARB(GLuint index, GLshort x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1sARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1svARB)
{
  /* void glVertexAttrib1svARB(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib1svARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2dARB)
{
  /* void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2dARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2dvARB)
{
  /* void glVertexAttrib2dvARB(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib2dvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2fARB)
{
  /* void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2fARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2fvARB)
{
  /* void glVertexAttrib2fvARB(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib2fvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2sARB)
{
  /* void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2sARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2svARB)
{
  /* void glVertexAttrib2svARB(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib2svARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3dARB)
{
  /* void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3dARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3dvARB)
{
  /* void glVertexAttrib3dvARB(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib3dvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3fARB)
{
  /* void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3fARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3fvARB)
{
  /* void glVertexAttrib3fvARB(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib3fvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3sARB)
{
  /* void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3sARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3svARB)
{
  /* void glVertexAttrib3svARB(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib3svARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4NbvARB)
{
  /* void glVertexAttrib4NbvARB(GLuint index, const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLbyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4NbvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4NivARB)
{
  /* void glVertexAttrib4NivARB(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4NivARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4NsvARB)
{
  /* void glVertexAttrib4NsvARB(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4NsvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4NubARB)
{
  /* void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, x)
    STACK_FMT_DATA(GLubyte, y)
    STACK_FMT_DATA(GLubyte, z)
    STACK_FMT_DATA(GLubyte, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4NubARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4NubvARB)
{
  /* void glVertexAttrib4NubvARB(GLuint index, const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4NubvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4NuivARB)
{
  /* void glVertexAttrib4NuivARB(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4NuivARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4NusvARB)
{
  /* void glVertexAttrib4NusvARB(GLuint index, const GLushort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLushort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4NusvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4bvARB)
{
  /* void glVertexAttrib4bvARB(GLuint index, const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLbyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4bvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4dARB)
{
  /* void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4dARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4dvARB)
{
  /* void glVertexAttrib4dvARB(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4dvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4fARB)
{
  /* void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4fARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4fvARB)
{
  /* void glVertexAttrib4fvARB(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4fvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4ivARB)
{
  /* void glVertexAttrib4ivARB(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4ivARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4sARB)
{
  /* void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
    STACK_FMT_DATA(GLshort, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4sARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4svARB)
{
  /* void glVertexAttrib4svARB(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4svARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4ubvARB)
{
  /* void glVertexAttrib4ubvARB(GLuint index, const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4ubvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4uivARB)
{
  /* void glVertexAttrib4uivARB(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4uivARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4usvARB)
{
  /* void glVertexAttrib4usvARB(GLuint index, const GLushort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLushort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4usvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribPointerARB)
{
  /* void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLint,     size)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLboolean, normalized)
    STACK_FMT_DATA(GLsizei,   stride)
    STACK_FMT_DATA(GLvoid*,   pointer)
  STACK_FMT_END()

    exdl_glVertexAttribPointerARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_enableVertexAttribArrayARB)
{
  /* void glEnableVertexAttribArrayARB(GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glEnableVertexAttribArrayARB
    ( STACK_GET_DATA(index)
    );
}

EXDL_API(egl_disableVertexAttribArrayARB)
{
  /* void glDisableVertexAttribArrayARB(GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glDisableVertexAttribArrayARB
    ( STACK_GET_DATA(index)
    );
}

EXDL_API(egl_programStringARB)
{
  /* void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid* string) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, len)
    STACK_FMT_DATA(GLvoid*, string)
  STACK_FMT_END()

    exdl_glProgramStringARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(len)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(string)
  : (GLvoid*) sd->bin[0].base
    );
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_bindProgramARB)
{
  /* void glBindProgramARB(GLenum target, GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

    exdl_glBindProgramARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(program)
    );
}

EXDL_API(egl_deleteProgramsARB)
{
  /* void glDeleteProgramsARB(GLsizei n, const GLuint* programs) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  programs[])
  STACK_FMT_END()

    exdl_glDeleteProgramsARB
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(programs)
    );
}

EXDL_API(egl_genProgramsARB)
{
  /* void glGenProgramsARB(GLsizei n, GLuint* programs) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, programs[])
  FRAME_FMT_SIZE(sizeof(GLuint) * STACK_GET_DATA(n))

    exdl_glGenProgramsARB
    ( STACK_GET_DATA(n)
   ,  FRAME_GET_ADDR(programs)
    );

  THROW_FRAME()
}

EXDL_API(egl_programEnvParameter4dARB)
{
  /* void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glProgramEnvParameter4dARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programEnvParameter4dvARB)
{
  /* void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, params[4])
  STACK_FMT_END()

    exdl_glProgramEnvParameter4dvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programEnvParameter4fARB)
{
  /* void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glProgramEnvParameter4fARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programEnvParameter4fvARB)
{
  /* void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, params[4])
  STACK_FMT_END()

    exdl_glProgramEnvParameter4fvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programLocalParameter4dARB)
{
  /* void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glProgramLocalParameter4dARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programLocalParameter4dvARB)
{
  /* void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, params[4])
  STACK_FMT_END()

    exdl_glProgramLocalParameter4dvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programLocalParameter4fARB)
{
  /* void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glProgramLocalParameter4fARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programLocalParameter4fvARB)
{
  /* void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, params[4])
  STACK_FMT_END()

    exdl_glProgramLocalParameter4fvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getProgramEnvParameterdvARB)
{
  /* void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, params[4])
  FRAME_FMT_END()

    exdl_glGetProgramEnvParameterdvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getProgramEnvParameterfvARB)
{
  /* void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params[4])
  FRAME_FMT_END()

    exdl_glGetProgramEnvParameterfvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getProgramLocalParameterdvARB)
{
  /* void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, params[4])
  FRAME_FMT_END()

    exdl_glGetProgramLocalParameterdvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getProgramLocalParameterfvARB)
{
  /* void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params[4])
  FRAME_FMT_END()

    exdl_glGetProgramLocalParameterfvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getProgramivARB)
{
  /* void glGetProgramivARB(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params)
  FRAME_FMT_END()

    exdl_glGetProgramivARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getProgramStringARB)
{
  /* void glGetProgramStringARB(GLenum target, GLenum pname, GLvoid* string) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, string)
  FRAME_FMT_END()

    exdl_glGetProgramStringARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(string)
    );

  THROW_FRAME()
  
    exdl_free_binaries(sd);
}

EXDL_API(egl_getVertexAttribdvARB)
{
  /* void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLdouble, params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribdvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVertexAttribfvARB)
{
  /* void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribfvARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVertexAttribivARB)
{
  /* void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribivARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVertexAttribPointervARB)
{
  /* void glGetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid** pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLvoid**, pointer)
  STACK_FMT_END()

    exdl_glGetVertexAttribPointervARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_isProgramARB)
{
  /* GLboolean glIsProgramARB(GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsProgramARB
    ( STACK_GET_DATA(program)
    );

  THROW_RESULT(GLboolean)
}

/* GL_ARB_fragment_program */

/* GL_ARB_vertex_buffer_object */

EXDL_API(egl_bindBufferARB)
{
  /* void glBindBufferARB(GLenum target, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glBindBufferARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_deleteBuffersARB)
{
  /* void glDeleteBuffersARB(GLsizei n, const GLuint* buffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  buffers[])
  STACK_FMT_END()

    exdl_glDeleteBuffersARB
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(buffers)
    );
}

EXDL_API(egl_genBuffersARB)
{
  /* void glGenBuffersARB(GLsizei n, GLuint* buffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  buffers[])
  STACK_FMT_END()

    exdl_glGenBuffersARB
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(buffers)
    );
}

EXDL_API(egl_isBufferARB)
{
  /* GLboolean glIsBufferARB(GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsBufferARB
    ( STACK_GET_DATA(buffer)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_bufferDataARB)
{
  /* void glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid* data, GLenum usage) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,        target)
    STACK_FMT_DATA(GLsizeiptrARB, size)
    STACK_FMT_DATA(GLvoid*,       data)
    STACK_FMT_DATA(GLenum,        usage)
  STACK_FMT_END()

    exdl_glBufferDataARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
   ,  STACK_GET_DATA(usage)
    );
}

EXDL_API(egl_bufferSubDataARB)
{
  /* void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,        target)
    STACK_FMT_DATA(GLintptrARB,   offset)
    STACK_FMT_DATA(GLsizeiptrARB, size)
    STACK_FMT_DATA(GLvoid*,       data)
  STACK_FMT_END()

    exdl_glBufferSubDataARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getBufferSubDataARB)
{
  /* void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,        target)
    STACK_FMT_DATA(GLintptrARB,   offset)
    STACK_FMT_DATA(GLsizeiptrARB, size)
    STACK_FMT_DATA(GLvoid*,       data)
  STACK_FMT_END()

    exdl_glGetBufferSubDataARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_mapBufferARB)
{
  /* GLvoid* glMapBufferARB(GLenum target, GLenum access) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, access)
  STACK_FMT_END()

  CATCH_RESULT(GLvoid*)

    exdl_glMapBufferARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(access)
    );

  THROW_POINTER()
}

EXDL_API(egl_unmapBufferARB)
{
  /* GLboolean glUnmapBufferARB(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glUnmapBufferARB
    ( STACK_GET_DATA(target)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_getBufferParameterivARB)
{
  /* void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetBufferParameterivARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getBufferPointervARB)
{
  /* void glGetBufferPointervARB(GLenum target, GLenum pname, GLvoid** params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLvoid**, params)
  STACK_FMT_END()

    exdl_glGetBufferPointervARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(params)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_ARB_occlusion_query */

EXDL_API(egl_genQueriesARB)
{
  /* void glGenQueriesARB(GLsizei n, GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  ids[])
  STACK_FMT_END()

    exdl_glGenQueriesARB
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(ids)
    );
}

EXDL_API(egl_deleteQueriesARB)
{
  /* void glDeleteQueriesARB(GLsizei n, const GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  ids[])
  STACK_FMT_END()

    exdl_glDeleteQueriesARB
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(ids)
    );
}

EXDL_API(egl_isQueryARB)
{
  /* GLboolean glIsQueryARB(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsQueryARB
    ( STACK_GET_DATA(id)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_beginQueryARB)
{
  /* void glBeginQueryARB(GLenum target, GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glBeginQueryARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(id)
    );
}

EXDL_API(egl_endQueryARB)
{
  /* void glEndQueryARB(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glEndQueryARB
    ( STACK_GET_DATA(target)
    );
}

EXDL_API(egl_getQueryivARB)
{
  /* void glGetQueryivARB(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetQueryivARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getQueryObjectivARB)
{
  /* void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetQueryObjectivARB
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getQueryObjectuivARB)
{
  /* void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetQueryObjectuivARB
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_ARB_shader_objects */

EXDL_API(egl_deleteObjectARB)
{
  /* void glDeleteObjectARB(GLhandleARB obj) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, obj)
  STACK_FMT_END()

    exdl_glDeleteObjectARB
    ( STACK_GET_DATA(obj)
    );
}

EXDL_API(egl_getHandleARB)
{
  /* GLhandleARB glGetHandleARB(GLenum pname) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  CATCH_RESULT(GLhandleARB)

    exdl_glGetHandleARB
    ( STACK_GET_DATA(pname)
    );

  THROW_RESULT(GLhandleARB)
}

EXDL_API(egl_detachObjectARB)
{
  /* void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, containerObj)
    STACK_FMT_DATA(GLhandleARB, attachedObj)
  STACK_FMT_END()

    exdl_glDetachObjectARB
    ( STACK_GET_DATA(containerObj)
   ,  STACK_GET_DATA(attachedObj)
    );
}

EXDL_API(egl_createShaderObjectARB)
{
  /* GLhandleARB glCreateShaderObjectARB(GLenum shaderType) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, shaderType)
  STACK_FMT_END()

  CATCH_RESULT(GLhandleARB)

    exdl_glCreateShaderObjectARB
    ( STACK_GET_DATA(shaderType)
    );

  THROW_RESULT(GLhandleARB)
}

EXDL_API(egl_shaderSourceARB)
{
  /* void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB** string, const GLint* length) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, shaderObj)
    STACK_FMT_DATA(GLsizei,     count)
    STACK_FMT_DATA(GLcharARB**, string)
    STACK_FMT_DATA(GLint, length[])
  STACK_FMT_END()

    exdl_glShaderSourceARB
    ( STACK_GET_DATA(shaderObj)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(string)
   ,  STACK_GET_ADDR(length)
    );
}

EXDL_API(egl_compileShaderARB)
{
  /* void glCompileShaderARB(GLhandleARB shaderObj) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, shaderObj)
  STACK_FMT_END()

    exdl_glCompileShaderARB
    ( STACK_GET_DATA(shaderObj)
    );
}

EXDL_API(egl_createProgramObjectARB)
{
  /* GLhandleARB glCreateProgramObjectARB(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(GLhandleARB)

    exdl_glCreateProgramObjectARB
    (
    );

  THROW_RESULT(GLhandleARB)
}

EXDL_API(egl_attachObjectARB)
{
  /* void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, containerObj)
    STACK_FMT_DATA(GLhandleARB, obj)
  STACK_FMT_END()

    exdl_glAttachObjectARB
    ( STACK_GET_DATA(containerObj)
   ,  STACK_GET_DATA(obj)
    );
}

EXDL_API(egl_linkProgramARB)
{
  /* void glLinkProgramARB(GLhandleARB programObj) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
  STACK_FMT_END()

    exdl_glLinkProgramARB
    ( STACK_GET_DATA(programObj)
    );
}

EXDL_API(egl_useProgramObjectARB)
{
  /* void glUseProgramObjectARB(GLhandleARB programObj) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
  STACK_FMT_END()

    exdl_glUseProgramObjectARB
    ( STACK_GET_DATA(programObj)
    );
}

EXDL_API(egl_validateProgramARB)
{
  /* void glValidateProgramARB(GLhandleARB programObj) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
  STACK_FMT_END()

    exdl_glValidateProgramARB
    ( STACK_GET_DATA(programObj)
    );
}

EXDL_API(egl_uniform1fARB)
{
  /* void glUniform1fARB(GLint location, GLfloat v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
  STACK_FMT_END()

    exdl_glUniform1fARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_uniform2fARB)
{
  /* void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
  STACK_FMT_END()

    exdl_glUniform2fARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_uniform3fARB)
{
  /* void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
    STACK_FMT_DATA(GLfloat, v2)
  STACK_FMT_END()

    exdl_glUniform3fARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_uniform4fARB)
{
  /* void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
    STACK_FMT_DATA(GLfloat, v2)
    STACK_FMT_DATA(GLfloat, v3)
  STACK_FMT_END()

    exdl_glUniform4fARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_uniform1iARB)
{
  /* void glUniform1iARB(GLint location, GLint v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, location)
    STACK_FMT_DATA(GLint, v0)
  STACK_FMT_END()

    exdl_glUniform1iARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_uniform2iARB)
{
  /* void glUniform2iARB(GLint location, GLint v0, GLint v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, location)
    STACK_FMT_DATA(GLint, v0)
    STACK_FMT_DATA(GLint, v1)
  STACK_FMT_END()

    exdl_glUniform2iARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_uniform3iARB)
{
  /* void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, location)
    STACK_FMT_DATA(GLint, v0)
    STACK_FMT_DATA(GLint, v1)
    STACK_FMT_DATA(GLint, v2)
  STACK_FMT_END()

    exdl_glUniform3iARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_uniform4iARB)
{
  /* void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, location)
    STACK_FMT_DATA(GLint, v0)
    STACK_FMT_DATA(GLint, v1)
    STACK_FMT_DATA(GLint, v2)
    STACK_FMT_DATA(GLint, v3)
  STACK_FMT_END()

    exdl_glUniform4iARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_uniform1fvARB)
{
  /* void glUniform1fvARB(GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glUniform1fvARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform2fvARB)
{
  /* void glUniform2fvARB(GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glUniform2fvARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform3fvARB)
{
  /* void glUniform3fvARB(GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glUniform3fvARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform4fvARB)
{
  /* void glUniform4fvARB(GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glUniform4fvARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform1ivARB)
{
  /* void glUniform1ivARB(GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[])
  STACK_FMT_END()

    exdl_glUniform1ivARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform2ivARB)
{
  /* void glUniform2ivARB(GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[])
  STACK_FMT_END()

    exdl_glUniform2ivARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform3ivARB)
{
  /* void glUniform3ivARB(GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[])
  STACK_FMT_END()

    exdl_glUniform3ivARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform4ivARB)
{
  /* void glUniform4ivARB(GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[])
  STACK_FMT_END()

    exdl_glUniform4ivARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix2fvARB)
{
  /* void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glUniformMatrix2fvARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix3fvARB)
{
  /* void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glUniformMatrix3fvARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix4fvARB)
{
  /* void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glUniformMatrix4fvARB
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_getObjectParameterfvARB)
{
  /* void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, obj)
    STACK_FMT_DATA(GLenum,      pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params[1])
  FRAME_FMT_END()

    exdl_glGetObjectParameterfvARB
    ( STACK_GET_DATA(obj)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getObjectParameterivARB)
{
  /* void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, obj)
    STACK_FMT_DATA(GLenum,      pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()

    exdl_glGetObjectParameterivARB
    ( STACK_GET_DATA(obj)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getInfoLogARB)
{
  /* void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB* infoLog) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, obj)
    STACK_FMT_DATA(GLsizei,     maxLength)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei,   length)
    FRAME_FMT_DATA(GLcharARB, infoLog[])
  FRAME_FMT_SIZE(sizeof(GLcharARB) * STACK_GET_DATA(maxLength))

    exdl_glGetInfoLogARB
    ( STACK_GET_DATA(obj)
   ,  STACK_GET_DATA(maxLength)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(infoLog)
    );

  THROW_FRAME()
}

EXDL_API(egl_getAttachedObjectsARB)
{
  /* void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei* count, GLhandleARB* obj) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, containerObj)
    STACK_FMT_DATA(GLsizei,     maxCount)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei,   count)
    FRAME_FMT_DATA(GLcharARB, obj[])
  FRAME_FMT_SIZE(sizeof(GLcharARB) * STACK_GET_DATA(maxCount))

    exdl_glGetAttachedObjectsARB
    ( STACK_GET_DATA(containerObj)
   ,  STACK_GET_DATA(maxCount)
   ,  FRAME_GET_ADDR(count)
   ,  FRAME_GET_ADDR(obj)
    );

  THROW_FRAME()
}

EXDL_API(egl_getUniformLocationARB)
{
  /* GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
    STACK_FMT_DATA(GLcharARB,   name[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetUniformLocationARB
    ( STACK_GET_DATA(programObj)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_getActiveUniformARB)
{
  /* void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLcharARB* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLsizei,     maxLength)
    STACK_FMT_DATA(GLsizei*,    length)
    STACK_FMT_DATA(GLint*,      size)
    STACK_FMT_DATA(GLenum,      type)
    STACK_FMT_DATA(GLcharARB*,  name)
  STACK_FMT_END()

    exdl_glGetActiveUniformARB
    ( STACK_GET_DATA(programObj)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(maxLength)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(name)
    );
}

EXDL_API(egl_getUniformfvARB)
{
  /* void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLfloat,     params[])
  STACK_FMT_END()

    exdl_glGetUniformfvARB
    ( STACK_GET_DATA(programObj)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getUniformivARB)
{
  /* void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLint,       params[])
  STACK_FMT_END()

    exdl_glGetUniformivARB
    ( STACK_GET_DATA(programObj)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getShaderSourceARB)
{
  /* void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB* source) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, obj)
    STACK_FMT_DATA(GLsizei,     maxLength)
    STACK_FMT_DATA(GLsizei*,    length)
    STACK_FMT_DATA(GLcharARB*,  source)
  STACK_FMT_END()

    exdl_glGetShaderSourceARB
    ( STACK_GET_DATA(obj)
   ,  STACK_GET_DATA(maxLength)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_ADDR(source)
    );
}

/* GL_ARB_vertex_shader */

EXDL_API(egl_bindAttribLocationARB)
{
  /* void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLcharARB,   name[])
  STACK_FMT_END()

    exdl_glBindAttribLocationARB
    ( STACK_GET_DATA(programObj)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(name)
    );
}

EXDL_API(egl_getActiveAttribARB)
{
  /* void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLcharARB* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLsizei,     maxLength)
    STACK_FMT_DATA(GLsizei*,    length)
    STACK_FMT_DATA(GLint*,      size)
    STACK_FMT_DATA(GLenum*,     type)
    STACK_FMT_DATA(GLcharARB*,  name)
  STACK_FMT_END()

    exdl_glGetActiveAttribARB
    ( STACK_GET_DATA(programObj)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(maxLength)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(name)
    );
}

EXDL_API(egl_getAttribLocationARB)
{
  /* GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhandleARB, programObj)
    STACK_FMT_DATA(GLcharARB,   name[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetAttribLocationARB
    ( STACK_GET_DATA(programObj)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLint)
}

/* GL_ARB_fragment_shader */

/* GL_ARB_shading_language_100 */

/* GL_ARB_texture_non_power_of_two */

/* GL_ARB_point_sprite */

/* GL_ARB_fragment_program_shadow */

/* GL_ARB_draw_buffers */

EXDL_API(egl_drawBuffersARB)
{
  /* void glDrawBuffersARB(GLsizei n, const GLenum* bufs) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLenum,  bufs[])
  STACK_FMT_END()

    exdl_glDrawBuffersARB
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(bufs)
    );
}

/* GL_ARB_texture_rectangle */

/* GL_ARB_color_buffer_float */

EXDL_API(egl_clampColorARB)
{
  /* void glClampColorARB(GLenum target, GLenum clamp) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, clamp)
  STACK_FMT_END()

    exdl_glClampColorARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(clamp)
    );
}

/* GL_ARB_half_float_pixel */

/* GL_ARB_texture_float */

/* GL_ARB_pixel_buffer_object */

/* GL_ARB_depth_buffer_float */

/* GL_ARB_draw_instanced */

EXDL_API(egl_drawArraysInstancedARB)
{
  /* void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLint,   first)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLsizei, primcount)
  STACK_FMT_END()

    exdl_glDrawArraysInstancedARB
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(primcount)
    );
}

EXDL_API(egl_drawElementsInstancedARB)
{
  /* void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, indices)
    STACK_FMT_DATA(GLsizei, primcount)
  STACK_FMT_END()

    exdl_glDrawElementsInstancedARB
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(indices)
  : (GLvoid*) sd->bin[0].base
   ,  STACK_GET_DATA(primcount)
    );
}

/* GL_ARB_framebuffer_object */

EXDL_API(egl_isRenderbuffer)
{
  /* GLboolean glIsRenderbuffer(GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsRenderbuffer
    ( STACK_GET_DATA(renderbuffer)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_bindRenderbuffer)
{
  /* void glBindRenderbuffer(GLenum target, GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()

    exdl_glBindRenderbuffer
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(renderbuffer)
    );
}

EXDL_API(egl_deleteRenderbuffers)
{
  /* void glDeleteRenderbuffers(GLsizei n, const GLuint* renderbuffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  renderbuffers[])
  STACK_FMT_END()

    exdl_glDeleteRenderbuffers
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(renderbuffers)
    );
}

EXDL_API(egl_genRenderbuffers)
{
  /* void glGenRenderbuffers(GLsizei n, GLuint* renderbuffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  renderbuffers[])
  STACK_FMT_END()

    exdl_glGenRenderbuffers
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(renderbuffers)
    );
}

EXDL_API(egl_renderbufferStorage)
{
  /* void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glRenderbufferStorage
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_getRenderbufferParameteriv)
{
  /* void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetRenderbufferParameteriv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_isFramebuffer)
{
  /* GLboolean glIsFramebuffer(GLuint framebuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsFramebuffer
    ( STACK_GET_DATA(framebuffer)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_bindFramebuffer)
{
  /* void glBindFramebuffer(GLenum target, GLuint framebuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, framebuffer)
  STACK_FMT_END()

    exdl_glBindFramebuffer
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(framebuffer)
    );
}

EXDL_API(egl_deleteFramebuffers)
{
  /* void glDeleteFramebuffers(GLsizei n, const GLuint* framebuffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  framebuffers[])
  STACK_FMT_END()

    exdl_glDeleteFramebuffers
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(framebuffers)
    );
}

EXDL_API(egl_genFramebuffers)
{
  /* void glGenFramebuffers(GLsizei n, GLuint* framebuffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  framebuffers[])
  STACK_FMT_END()

    exdl_glGenFramebuffers
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(framebuffers)
    );
}

EXDL_API(egl_checkFramebufferStatus)
{
  /* GLenum glCheckFramebufferStatus(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

  CATCH_RESULT(GLenum)

    exdl_glCheckFramebufferStatus
    ( STACK_GET_DATA(target)
    );

  THROW_RESULT(GLenum)
}

EXDL_API(egl_framebufferTexture1D)
{
  /* void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, textarget)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
  STACK_FMT_END()

    exdl_glFramebufferTexture1D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(textarget)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_framebufferTexture2D)
{
  /* void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, textarget)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
  STACK_FMT_END()

    exdl_glFramebufferTexture2D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(textarget)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_framebufferTexture3D)
{
  /* void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, textarget)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLint,  zoffset)
  STACK_FMT_END()

    exdl_glFramebufferTexture3D
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(textarget)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(zoffset)
    );
}

EXDL_API(egl_framebufferRenderbuffer)
{
  /* void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, renderbuffertarget)
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()

    exdl_glFramebufferRenderbuffer
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(renderbuffertarget)
   ,  STACK_GET_DATA(renderbuffer)
    );
}

EXDL_API(egl_getFramebufferAttachmentParameteriv)
{
  /* void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetFramebufferAttachmentParameteriv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_generateMipmap)
{
  /* void glGenerateMipmap(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glGenerateMipmap
    ( STACK_GET_DATA(target)
    );
}

EXDL_API(egl_blitFramebuffer)
{
  /* void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,      srcX0)
    STACK_FMT_DATA(GLint,      srcY0)
    STACK_FMT_DATA(GLint,      srcX1)
    STACK_FMT_DATA(GLint,      srcY1)
    STACK_FMT_DATA(GLint,      dstX0)
    STACK_FMT_DATA(GLint,      dstY0)
    STACK_FMT_DATA(GLint,      dstX1)
    STACK_FMT_DATA(GLint,      dstY1)
    STACK_FMT_DATA(GLbitfield, mask)
    STACK_FMT_DATA(GLenum,     filter)
  STACK_FMT_END()

    exdl_glBlitFramebuffer
    ( STACK_GET_DATA(srcX0)
   ,  STACK_GET_DATA(srcY0)
   ,  STACK_GET_DATA(srcX1)
   ,  STACK_GET_DATA(srcY1)
   ,  STACK_GET_DATA(dstX0)
   ,  STACK_GET_DATA(dstY0)
   ,  STACK_GET_DATA(dstX1)
   ,  STACK_GET_DATA(dstY1)
   ,  STACK_GET_DATA(mask)
   ,  STACK_GET_DATA(filter)
    );
}

EXDL_API(egl_renderbufferStorageMultisample)
{
  /* void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, samples)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glRenderbufferStorageMultisample
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(samples)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_framebufferTextureLayer)
{
  /* void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLint,  layer)
  STACK_FMT_END()

    exdl_glFramebufferTextureLayer
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(layer)
    );
}

/* GL_ARB_framebuffer_sRGB */

/* GL_ARB_geometry_shader4 */

EXDL_API(egl_programParameteriARB)
{
  /* void glProgramParameteriARB(GLuint program, GLenum pname, GLint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  value)
  STACK_FMT_END()

    exdl_glProgramParameteriARB
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_framebufferTextureARB)
{
  /* void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
  STACK_FMT_END()

    exdl_glFramebufferTextureARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_framebufferTextureLayerARB)
{
  /* void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLint,  layer)
  STACK_FMT_END()

    exdl_glFramebufferTextureLayerARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(layer)
    );
}

EXDL_API(egl_framebufferTextureFaceARB)
{
  /* void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLenum, face)
  STACK_FMT_END()

    exdl_glFramebufferTextureFaceARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(face)
    );
}

/* GL_ARB_half_float_vertex */

/* GL_ARB_instanced_arrays */

EXDL_API(egl_vertexAttribDivisorARB)
{
  /* void glVertexAttribDivisorARB(GLuint index, GLuint divisor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, divisor)
  STACK_FMT_END()

    exdl_glVertexAttribDivisorARB
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(divisor)
    );
}

/* GL_ARB_map_buffer_range */

EXDL_API(egl_mapBufferRange)
{
  /* GLvoid* glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     target)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, length)
    STACK_FMT_DATA(GLbitfield, access)
  STACK_FMT_END()

  CATCH_RESULT(GLvoid*)

    exdl_glMapBufferRange
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_DATA(access)
    );

  THROW_POINTER()
}

EXDL_API(egl_flushMappedBufferRange)
{
  /* void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     target)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, length)
  STACK_FMT_END()

    exdl_glFlushMappedBufferRange
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(length)
    );
}

/* GL_ARB_texture_buffer_object */

EXDL_API(egl_texBufferARB)
{
  /* void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, internalformat)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glTexBufferARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(buffer)
    );
}

/* GL_ARB_texture_compression_rgtc */

/* GL_ARB_texture_rg */

/* GL_ARB_vertex_array_object */

EXDL_API(egl_bindVertexArray)
{
  /* void glBindVertexArray(GLuint array) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, array)
  STACK_FMT_END()

    exdl_glBindVertexArray
    ( STACK_GET_DATA(array)
    );
}

EXDL_API(egl_deleteVertexArrays)
{
  /* void glDeleteVertexArrays(GLsizei n, const GLuint* arrays) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  arrays[])
  STACK_FMT_END()

    exdl_glDeleteVertexArrays
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(arrays)
    );
}

EXDL_API(egl_genVertexArrays)
{
  /* void glGenVertexArrays(GLsizei n, GLuint* arrays) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  arrays[])
  STACK_FMT_END()

    exdl_glGenVertexArrays
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(arrays)
    );
}

EXDL_API(egl_isVertexArray)
{
  /* GLboolean glIsVertexArray(GLuint array) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, array)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsVertexArray
    ( STACK_GET_DATA(array)
    );

  THROW_RESULT(GLboolean)
}

/* GL_ARB_uniform_buffer_object */

EXDL_API(egl_getUniformIndices)
{
  /* void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar** uniformNames, GLuint* uniformIndices) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLsizei,        uniformCount)
    STACK_FMT_DATA(const GLchar**, uniformNames)
    STACK_FMT_DATA(GLuint*,        uniformIndices)
  STACK_FMT_END()

    exdl_glGetUniformIndices
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(uniformCount)
   ,  STACK_GET_DATA(uniformNames)
   ,  STACK_GET_DATA(uniformIndices)
    );
}

EXDL_API(egl_getActiveUniformsiv)
{
  /* void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,        program)
    STACK_FMT_DATA(GLsizei,       uniformCount)
    STACK_FMT_DATA(const GLuint*, uniformIndices)
    STACK_FMT_DATA(GLenum,        pname)
    STACK_FMT_DATA(GLint*,        params)
  STACK_FMT_END()

    exdl_glGetActiveUniformsiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(uniformCount)
   ,  STACK_GET_DATA(uniformIndices)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_getActiveUniformName)
{
  /* void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLuint,   uniformIndex)
    STACK_FMT_DATA(GLsizei,  bufSize)
    STACK_FMT_DATA(GLsizei*, length)
    STACK_FMT_DATA(GLchar*,  uniformName)
  STACK_FMT_END()

    exdl_glGetActiveUniformName
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(uniformIndex)
   ,  STACK_GET_DATA(bufSize)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_DATA(uniformName)
    );
}

EXDL_API(egl_getUniformBlockIndex)
{
  /* GLuint glGetUniformBlockIndex(GLuint program, const GLchar* uniformBlockName) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,        program)
    STACK_FMT_DATA(const GLchar*, uniformBlockName)
  STACK_FMT_END()

    exdl_glGetUniformBlockIndex
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(uniformBlockName)
    );
}

EXDL_API(egl_getActiveUniformBlockiv)
{
  /* void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLuint, uniformBlockIndex)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint*, params)
  STACK_FMT_END()

    exdl_glGetActiveUniformBlockiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(uniformBlockIndex)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_getActiveUniformBlockName)
{
  /* void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLuint,   uniformBlockIndex)
    STACK_FMT_DATA(GLsizei,  bufSize)
    STACK_FMT_DATA(GLsizei*, length)
    STACK_FMT_DATA(GLchar*,  uniformBlockName)
  STACK_FMT_END()

    exdl_glGetActiveUniformBlockName
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(uniformBlockIndex)
   ,  STACK_GET_DATA(bufSize)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_DATA(uniformBlockName)
    );
}

EXDL_API(egl_uniformBlockBinding)
{
  /* void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLuint, uniformBlockIndex)
    STACK_FMT_DATA(GLuint, uniformBlockBinding)
  STACK_FMT_END()

    exdl_glUniformBlockBinding
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(uniformBlockIndex)
   ,  STACK_GET_DATA(uniformBlockBinding)
    );
}

/* GL_ARB_compatibility */

/* GL_ARB_copy_buffer */

EXDL_API(egl_copyBufferSubData)
{
  /* void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     readTarget)
    STACK_FMT_DATA(GLenum,     writeTarget)
    STACK_FMT_DATA(GLintptr,   readOffset)
    STACK_FMT_DATA(GLintptr,   writeOffset)
    STACK_FMT_DATA(GLsizeiptr, size)
  STACK_FMT_END()

    exdl_glCopyBufferSubData
    ( STACK_GET_DATA(readTarget)
   ,  STACK_GET_DATA(writeTarget)
   ,  STACK_GET_DATA(readOffset)
   ,  STACK_GET_DATA(writeOffset)
   ,  STACK_GET_DATA(size)
    );
}

/* GL_ARB_shader_texture_lod */

/* GL_ARB_depth_clamp */

/* GL_ARB_draw_elements_base_vertex */

EXDL_API(egl_drawElementsBaseVertex)
{
  /* void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLvoid*, indices)
    STACK_FMT_DATA(GLint, basevertex)
  STACK_FMT_END()

    exdl_glDrawElementsBaseVertex
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(indices)
   ,  STACK_GET_DATA(basevertex)
    );
}

EXDL_API(egl_drawRangeElementsBaseVertex)
{
  /* void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
    STACK_FMT_DATA(GLuint, start)
    STACK_FMT_DATA(GLuint, end)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLvoid*, indices)
    STACK_FMT_DATA(GLint, basevertex)
  STACK_FMT_END()

    exdl_glDrawRangeElementsBaseVertex
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(end)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(indices)
   ,  STACK_GET_DATA(basevertex)
    );
}

EXDL_API(egl_drawElementsInstancedBaseVertex)
{
  /* void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount, GLint basevertex) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLvoid*, indices)
    STACK_FMT_DATA(GLsizei, primcount)
    STACK_FMT_DATA(GLint, basevertex)
  STACK_FMT_END()

    exdl_glDrawElementsInstancedBaseVertex
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(indices)
   ,  STACK_GET_DATA(primcount)
   ,  STACK_GET_DATA(basevertex)
    );
}

EXDL_API(egl_multiDrawElementsBaseVertex)
{
  /* void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount, const GLint* basevertex) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
    STACK_FMT_DATA(GLsizei*, count)
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLvoid**, indices)
    STACK_FMT_DATA(GLsizei, primcount)
    STACK_FMT_DATA(GLint, basevertex[])
  STACK_FMT_END()

    exdl_glMultiDrawElementsBaseVertex
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(indices)
   ,  STACK_GET_DATA(primcount)
   ,  STACK_GET_ADDR(basevertex)
    );
}

/* GL_ARB_fragment_coord_conventions */

/* GL_ARB_provoking_vertex */

EXDL_API(egl_provokingVertex)
{
  /* void glProvokingVertex(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glProvokingVertex
    ( STACK_GET_DATA(mode)
    );
}

/* GL_ARB_seamless_cube_map */

/* GL_ARB_sync */

EXDL_API(egl_fenceSync)
{
  /* GLsync glFenceSync(GLenum condition, GLbitfield flags) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, condition)
    STACK_FMT_DATA(GLbitfield, flags)
  STACK_FMT_END()

  CATCH_RESULT(GLsync)

    exdl_glFenceSync
    ( STACK_GET_DATA(condition)
   ,  STACK_GET_DATA(flags)
    );

  THROW_RESULT(GLsync)
}

EXDL_API(egl_isSync)
{
  /* GLboolean glIsSync(GLsync sync) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsync, sync)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsSync
    ( STACK_GET_DATA(sync)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_deleteSync)
{
  /* void glDeleteSync(GLsync sync) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsync, sync)
  STACK_FMT_END()

    exdl_glDeleteSync
    ( STACK_GET_DATA(sync)
    );
}

EXDL_API(egl_clientWaitSync)
{
  /* GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsync, sync)
    STACK_FMT_DATA(GLbitfield, flags)
    STACK_FMT_DATA(GLuint64, timeout)
  STACK_FMT_END()

  CATCH_RESULT(GLenum)

    exdl_glClientWaitSync
    ( STACK_GET_DATA(sync)
   ,  STACK_GET_DATA(flags)
   ,  STACK_GET_DATA(timeout)
    );

  THROW_RESULT(GLenum)
}

EXDL_API(egl_waitSync)
{
  /* void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsync, sync)
    STACK_FMT_DATA(GLbitfield, flags)
    STACK_FMT_DATA(GLuint64, timeout)
  STACK_FMT_END()

    exdl_glWaitSync
    ( STACK_GET_DATA(sync)
   ,  STACK_GET_DATA(flags)
   ,  STACK_GET_DATA(timeout)
    );
}

EXDL_API(egl_getInteger64v)
{
  /* void glGetInteger64v(GLenum pname, GLint64* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint64, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint64))

    exdl_glGetInteger64v
    ( STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getSynciv)
{
  /* void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsync, sync)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length[1])
    FRAME_FMT_DATA(GLint, values[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(bufSize) * sizeof(GLint))

    exdl_glGetSynciv
    ( STACK_GET_DATA(sync)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(values)
    );

  THROW_FRAME()
}

/* GL_ARB_texture_multisample */

EXDL_API(egl_texImage2DMultisample)
{
  /* void glTexImage2DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLsizei, samples)
    STACK_FMT_DATA(GLint, internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLboolean, fixedsamplelocations)
  STACK_FMT_END()

    exdl_glTexImage2DMultisample
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(samples)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(fixedsamplelocations)
    );
}

EXDL_API(egl_texImage3DMultisample)
{
  /* void glTexImage3DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLsizei, samples)
    STACK_FMT_DATA(GLint, internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLboolean, fixedsamplelocations)
  STACK_FMT_END()

    exdl_glTexImage3DMultisample
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(samples)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(fixedsamplelocations)
    );
}

EXDL_API(egl_getMultisamplefv)
{
  /* void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat* val) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, val[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(index) * sizeof(GLfloat))

    exdl_glGetMultisamplefv
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(val)
    );

  THROW_FRAME()
}

EXDL_API(egl_sampleMaski)
{
  /* void glSampleMaski(GLuint index, GLbitfield mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     index)
    STACK_FMT_DATA(GLbitfield, mask)
  STACK_FMT_END()

    exdl_glSampleMaski
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(mask)
    );
}

/* GL_ARB_vertex_array_bgra */

/* GL_ARB_draw_buffers_blend */

EXDL_API(egl_blendEquationiARB)
{
  /* void glBlendEquationiARB(GLuint buf, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buf)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glBlendEquationiARB
    ( STACK_GET_DATA(buf)
   ,  STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_blendEquationSeparateiARB)
{
  /* void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buf)
    STACK_FMT_DATA(GLenum, modeRGB)
    STACK_FMT_DATA(GLenum, modeAlpha)
  STACK_FMT_END()

    exdl_glBlendEquationSeparateiARB
    ( STACK_GET_DATA(buf)
   ,  STACK_GET_DATA(modeRGB)
   ,  STACK_GET_DATA(modeAlpha)
    );
}

EXDL_API(egl_blendFunciARB)
{
  /* void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buf)
    STACK_FMT_DATA(GLenum, src)
    STACK_FMT_DATA(GLenum, dst)
  STACK_FMT_END()

    exdl_glBlendFunciARB
    ( STACK_GET_DATA(buf)
   ,  STACK_GET_DATA(src)
   ,  STACK_GET_DATA(dst)
    );
}

EXDL_API(egl_blendFuncSeparateiARB)
{
  /* void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buf)
    STACK_FMT_DATA(GLenum, srcRGB)
    STACK_FMT_DATA(GLenum, dstRGB)
    STACK_FMT_DATA(GLenum, srcAlpha)
    STACK_FMT_DATA(GLenum, dstAlpha)
  STACK_FMT_END()

    exdl_glBlendFuncSeparateiARB
    ( STACK_GET_DATA(buf)
   ,  STACK_GET_DATA(srcRGB)
   ,  STACK_GET_DATA(dstRGB)
   ,  STACK_GET_DATA(srcAlpha)
   ,  STACK_GET_DATA(dstAlpha)
    );
}

/* GL_ARB_sample_shading */

EXDL_API(egl_minSampleShadingARB)
{
  /* void glMinSampleShadingARB(GLclampf value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLclampf, value)
  STACK_FMT_END()

    exdl_glMinSampleShadingARB
    ( STACK_GET_DATA(value)
    );
}

/* GL_ARB_texture_cube_map_array */

/* GL_ARB_texture_gather */

/* GL_ARB_texture_query_lod */


/* GL_ARB_shading_language_include */

EXDL_API(egl_namedStringARB)
{
  /* void glNamedStringARB(GLenum type, GLint namelen, const GLchar* name, GLint stringlen, const GLchar* string) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLint,   namelen)
    STACK_FMT_LPTR(GLchar*, name)
    STACK_FMT_DATA(GLint,   stringlen)
    STACK_FMT_DATA(GLchar,  string[])
  STACK_FMT_END()

    exdl_glNamedStringARB
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(namelen)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(stringlen)
   ,  STACK_GET_ADDR(string)
    );
}

EXDL_API(egl_deleteNamedStringARB)
{
  /* void glDeleteNamedStringARB(GLint namelen, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   namelen)
    STACK_FMT_DATA(GLchar,  name[])
  STACK_FMT_END()

    exdl_glDeleteNamedStringARB
    ( STACK_GET_DATA(namelen)
   ,  STACK_GET_ADDR(name)
    );
}

EXDL_API(egl_compileShaderIncludeARB)
{
  /* void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar** path, const GLint* length) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       shader)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_LPTR(GLchar**,     path)
    STACK_FMT_DATA(GLint,        length[])
  STACK_FMT_END()

    exdl_glCompileShaderIncludeARB
    ( STACK_GET_DATA(shader)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(path)
   ,  STACK_GET_ADDR(length)
    );
}

EXDL_API(egl_isNamedStringARB)
{
  /* GLboolean glIsNamedStringARB(GLint namelen, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   namelen)
    STACK_FMT_DATA(GLchar,  name[])
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsNamedStringARB
    ( STACK_GET_DATA(namelen)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_getNamedStringARB)
{
  /* void glGetNamedStringARB(GLint namelen, const GLchar* name, GLsizei bufSize, GLint* stringlen, GLchar* string) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   namelen)
    STACK_FMT_LPTR(GLchar*, name)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint,  stringlen)
    FRAME_FMT_DATA(GLchar, string)
  FRAME_FMT_END()

    exdl_glGetNamedStringARB
    ( STACK_GET_DATA(namelen)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(stringlen)
   ,  FRAME_GET_ADDR(string)
    );

  THROW_FRAME()
}

EXDL_API(egl_getNamedStringivARB)
{
  /* void glGetNamedStringivARB(GLint namelen, const GLchar* name, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   namelen)
    STACK_FMT_LPTR(GLchar*, name)
    STACK_FMT_DATA(GLenum,  pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint,  params)
  FRAME_FMT_END()

    exdl_glGetNamedStringivARB
    ( STACK_GET_DATA(namelen)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

/* GL_ARB_texture_compression_bptc */

/* GL_ARB_blend_func_extended */

EXDL_API(egl_bindFragDataLocationIndexed)
{
  /* void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLuint,  colorNumber)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLchar,  name[])
  STACK_FMT_END()

    exdl_glBindFragDataLocationIndexed
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(colorNumber)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(name)
    );
}

EXDL_API(egl_getFragDataIndex)
{
  /* GLint glGetFragDataIndex(GLuint program, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLchar,  name[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetFragDataIndex
    ( STACK_GET_DATA(program)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLint)
}

/* GL_ARB_explicit_attrib_location */

/* GL_ARB_occlusion_query2 */

/* GL_ARB_sampler_objects */

EXDL_API(egl_genSamplers)
{
  /* void glGenSamplers(GLsizei count, GLuint* samplers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, count)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, samplers)
  FRAME_FMT_END()

    exdl_glGenSamplers
    ( STACK_GET_DATA(count)
   ,  FRAME_GET_ADDR(samplers)
    );

  THROW_FRAME()
}

EXDL_API(egl_deleteSamplers)
{
  /* void glDeleteSamplers(GLsizei count, const GLuint* samplers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  samplers[])
  STACK_FMT_END()

    exdl_glDeleteSamplers
    ( STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(samplers)
    );
}

EXDL_API(egl_isSampler)
{
  /* GLboolean glIsSampler(GLuint sampler) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, sampler)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsSampler
    ( STACK_GET_DATA(sampler)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_bindSampler)
{
  /* void glBindSampler(GLuint unit, GLuint sampler) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, unit)
    STACK_FMT_DATA(GLuint, sampler)
  STACK_FMT_END()

    exdl_glBindSampler
    ( STACK_GET_DATA(unit)
   ,  STACK_GET_DATA(sampler)
    );
}

EXDL_API(egl_samplerParameteri)
{
  /* void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, sampler)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glSamplerParameteri
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_samplerParameteriv)
{
  /* void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint* param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, sampler)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param[])
  STACK_FMT_END()

    exdl_glSamplerParameteriv
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(param)
    );
}

EXDL_API(egl_samplerParameterf)
{
  /* void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  sampler)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glSamplerParameterf
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_samplerParameterfv)
{
  /* void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat* param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   sampler)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLfloat,  param[])
  STACK_FMT_END()

    exdl_glSamplerParameterfv
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(param)
    );
}

EXDL_API(egl_samplerParameterIiv)
{
  /* void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint* param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, sampler)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param[])
  STACK_FMT_END()

    exdl_glSamplerParameterIiv
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(param)
    );
}

EXDL_API(egl_samplerParameterIuiv)
{
  /* void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint* param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  sampler)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLuint,  param[])
  STACK_FMT_END()

    exdl_glSamplerParameterIuiv
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(param)
    );
}

EXDL_API(egl_getSamplerParameteriv)
{
  /* void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, sampler)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint))

    exdl_glGetSamplerParameteriv
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getSamplerParameterIiv)
{
  /* void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, sampler)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint))

    exdl_glGetSamplerParameterIiv
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getSamplerParameterfv)
{
  /* void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   sampler)
    STACK_FMT_DATA(GLenum,   pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLfloat))

    exdl_glGetSamplerParameterfv
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getSamplerParameterIuiv)
{
  /* void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  sampler)
    STACK_FMT_DATA(GLenum,  pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLuint))

    exdl_glGetSamplerParameterIuiv
    ( STACK_GET_DATA(sampler)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

/* GL_ARB_texture_rgb10_a2ui */

/* GL_ARB_texture_swizzle */

/* GL_ARB_timer_query */

EXDL_API(egl_queryCounter)
{
  /* void glQueryCounter(GLuint id, GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glQueryCounter
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(target)
    );
}

EXDL_API(egl_getQueryObjecti64v)
{
  /* void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   id)
    STACK_FMT_DATA(GLenum,   pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint64, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint64))

    exdl_glGetQueryObjecti64v
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getQueryObjectui64v)
{
  /* void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    id)
    STACK_FMT_DATA(GLenum,    pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint64, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLuint64))

    exdl_glGetQueryObjectui64v
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

/* GL_ARB_vertex_type_2_10_10_10_rev */

EXDL_API(egl_vertexP2ui)
{
  /* void glVertexP2ui(GLenum type, GLuint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, value)
  STACK_FMT_END()

    exdl_glVertexP2ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_vertexP2uiv)
{
  /* void glVertexP2uiv(GLenum type, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glVertexP2uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_vertexP3ui)
{
  /* void glVertexP3ui(GLenum type, GLuint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, value)
  STACK_FMT_END()

    exdl_glVertexP3ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_vertexP3uiv)
{
  /* void glVertexP3uiv(GLenum type, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glVertexP3uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_vertexP4ui)
{
  /* void glVertexP4ui(GLenum type, GLuint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, value)
  STACK_FMT_END()

    exdl_glVertexP4ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_vertexP4uiv)
{
  /* void glVertexP4uiv(GLenum type, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glVertexP4uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_texCoordP1ui)
{
  /* void glTexCoordP1ui(GLenum type, GLuint coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, coords)
  STACK_FMT_END()

    exdl_glTexCoordP1ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(coords)
    );
}

EXDL_API(egl_texCoordP1uiv)
{
  /* void glTexCoordP1uiv(GLenum type, const GLuint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  coords[])
  STACK_FMT_END()

    exdl_glTexCoordP1uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_texCoordP2ui)
{
  /* void glTexCoordP2ui(GLenum type, GLuint coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, coords)
  STACK_FMT_END()

    exdl_glTexCoordP2ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(coords)
    );
}

EXDL_API(egl_texCoordP2uiv)
{
  /* void glTexCoordP2uiv(GLenum type, const GLuint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  coords[])
  STACK_FMT_END()

    exdl_glTexCoordP2uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_texCoordP3ui)
{
  /* void glTexCoordP3ui(GLenum type, GLuint coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, coords)
  STACK_FMT_END()

    exdl_glTexCoordP3ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(coords)
    );
}

EXDL_API(egl_texCoordP3uiv)
{
  /* void glTexCoordP3uiv(GLenum type, const GLuint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  coords[])
  STACK_FMT_END()

    exdl_glTexCoordP3uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_texCoordP4ui)
{
  /* void glTexCoordP4ui(GLenum type, GLuint coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, coords)
  STACK_FMT_END()

    exdl_glTexCoordP4ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(coords)
    );
}

EXDL_API(egl_texCoordP4uiv)
{
  /* void glTexCoordP4uiv(GLenum type, const GLuint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  coords[])
  STACK_FMT_END()

    exdl_glTexCoordP4uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_multiTexCoordP1ui)
{
  /* void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texture)
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, coords)
  STACK_FMT_END()

    exdl_glMultiTexCoordP1ui
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(coords)
    );
}

EXDL_API(egl_multiTexCoordP1uiv)
{
  /* void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texture)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  coords[])
  STACK_FMT_END()

    exdl_glMultiTexCoordP1uiv
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_multiTexCoordP2ui)
{
  /* void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texture)
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, coords)
  STACK_FMT_END()

    exdl_glMultiTexCoordP2ui
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(coords)
    );
}

EXDL_API(egl_multiTexCoordP2uiv)
{
  /* void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texture)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  coords[])
  STACK_FMT_END()

    exdl_glMultiTexCoordP2uiv
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_multiTexCoordP3ui)
{
  /* void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texture)
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, coords)
  STACK_FMT_END()

    exdl_glMultiTexCoordP3ui
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(coords)
    );
}

EXDL_API(egl_multiTexCoordP3uiv)
{
  /* void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texture)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  coords[])
  STACK_FMT_END()

    exdl_glMultiTexCoordP3uiv
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_multiTexCoordP4ui)
{
  /* void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texture)
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, coords)
  STACK_FMT_END()

    exdl_glMultiTexCoordP4ui
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(coords)
    );
}

EXDL_API(egl_multiTexCoordP4uiv)
{
  /* void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texture)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  coords[])
  STACK_FMT_END()

    exdl_glMultiTexCoordP4uiv
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_normalP3ui)
{
  /* void glNormalP3ui(GLenum type, GLuint coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, coords)
  STACK_FMT_END()

    exdl_glNormalP3ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(coords)
    );
}

EXDL_API(egl_normalP3uiv)
{
  /* void glNormalP3uiv(GLenum type, const GLuint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  coords[])
  STACK_FMT_END()

    exdl_glNormalP3uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_colorP3ui)
{
  /* void glColorP3ui(GLenum type, GLuint color) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, color)
  STACK_FMT_END()

    exdl_glColorP3ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(color)
    );
}

EXDL_API(egl_colorP3uiv)
{
  /* void glColorP3uiv(GLenum type, const GLuint* color) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  color[])
  STACK_FMT_END()

    exdl_glColorP3uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(color)
    );
}

EXDL_API(egl_colorP4ui)
{
  /* void glColorP4ui(GLenum type, GLuint color) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, color)
  STACK_FMT_END()

    exdl_glColorP4ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(color)
    );
}

EXDL_API(egl_colorP4uiv)
{
  /* void glColorP4uiv(GLenum type, const GLuint* color) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  color[])
  STACK_FMT_END()

    exdl_glColorP4uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(color)
    );
}

EXDL_API(egl_secondaryColorP3ui)
{
  /* void glSecondaryColorP3ui(GLenum type, GLuint color) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, color)
  STACK_FMT_END()

    exdl_glSecondaryColorP3ui
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(color)
    );
}

EXDL_API(egl_secondaryColorP3uiv)
{
  /* void glSecondaryColorP3uiv(GLenum type, const GLuint* color) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  color[])
  STACK_FMT_END()

    exdl_glSecondaryColorP3uiv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(color)
    );
}

EXDL_API(egl_vertexAttribP1ui)
{
  /* void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLboolean, normalized)
    STACK_FMT_DATA(GLuint,    value)
  STACK_FMT_END()

    exdl_glVertexAttribP1ui
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_vertexAttribP1uiv)
{
  /* void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,        index)
    STACK_FMT_DATA(GLenum,        type)
    STACK_FMT_DATA(GLboolean,     normalized)
    STACK_FMT_DATA(GLuint,        value[])
  STACK_FMT_END()

    exdl_glVertexAttribP1uiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_vertexAttribP2ui)
{
  /* void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLboolean, normalized)
    STACK_FMT_DATA(GLuint,    value)
  STACK_FMT_END()

    exdl_glVertexAttribP2ui
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_vertexAttribP2uiv)
{
  /* void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,        index)
    STACK_FMT_DATA(GLenum,        type)
    STACK_FMT_DATA(GLboolean,     normalized)
    STACK_FMT_DATA(GLuint,        value[])
  STACK_FMT_END()

    exdl_glVertexAttribP2uiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_vertexAttribP3ui)
{
  /* void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLboolean, normalized)
    STACK_FMT_DATA(GLuint,    value)
  STACK_FMT_END()

    exdl_glVertexAttribP3ui
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_vertexAttribP3uiv)
{
  /* void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,        index)
    STACK_FMT_DATA(GLenum,        type)
    STACK_FMT_DATA(GLboolean,     normalized)
    STACK_FMT_DATA(GLuint,        value[])
  STACK_FMT_END()

    exdl_glVertexAttribP3uiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_vertexAttribP4ui)
{
  /* void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLboolean, normalized)
    STACK_FMT_DATA(GLuint,    value)
  STACK_FMT_END()

    exdl_glVertexAttribP4ui
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_vertexAttribP4uiv)
{
  /* void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,        index)
    STACK_FMT_DATA(GLenum,        type)
    STACK_FMT_DATA(GLboolean,     normalized)
    STACK_FMT_DATA(GLuint,        value[])
  STACK_FMT_END()

    exdl_glVertexAttribP4uiv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_ADDR(value)
    );
}

/* GL_ARB_draw_indirect */

EXDL_API(egl_drawArraysIndirect)
{
  /* void glDrawArraysIndirect(GLenum mode, const GLvoid* indirect) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLvoid,  indirect[])
  STACK_FMT_END()

    exdl_glDrawArraysIndirect
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_ADDR(indirect)
    );
}

EXDL_API(egl_drawElementsIndirect)
{
  /* void glDrawElementsIndirect(GLenum mode, GLenum type, const GLvoid* indirect) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid,  indirect[])
  STACK_FMT_END()

    exdl_glDrawElementsIndirect
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(indirect)
    );
}

/* GL_ARB_gpu_shader5 */

/* GL_ARB_gpu_shader_fp64 */

EXDL_API(egl_uniform1d)
{
  /* void glUniform1d(GLint location, GLdouble x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, x)
  STACK_FMT_END()

    exdl_glUniform1d
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_uniform2d)
{
  /* void glUniform2d(GLint location, GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glUniform2d
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_uniform3d)
{
  /* void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glUniform3d
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_uniform4d)
{
  /* void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glUniform4d
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_uniform1dv)
{
  /* void glUniform1dv(GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniform1dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform2dv)
{
  /* void glUniform2dv(GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniform2dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform3dv)
{
  /* void glUniform3dv(GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniform3dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform4dv)
{
  /* void glUniform4dv(GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniform4dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix2dv)
{
  /* void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniformMatrix2dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix3dv)
{
  /* void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniformMatrix3dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix4dv)
{
  /* void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniformMatrix4dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix2x3dv)
{
  /* void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniformMatrix2x3dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix2x4dv)
{
  /* void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniformMatrix2x4dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix3x2dv)
{
  /* void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniformMatrix3x2dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix3x4dv)
{
  /* void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniformMatrix3x4dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix4x2dv)
{
  /* void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniformMatrix4x2dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniformMatrix4x3dv)
{
  /* void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glUniformMatrix4x3dv
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_getUniformdv)
{
  /* void glGetUniformdv(GLuint program, GLint location, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(location) * sizeof(GLdouble))

    exdl_glGetUniformdv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

/* GL_ARB_shader_subroutine */

EXDL_API(egl_getSubroutineUniformLocation)
{
  /* GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  shadertype)
    STACK_FMT_DATA(GLchar,  name[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetSubroutineUniformLocation
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(shadertype)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_getSubroutineIndex)
{
  /* GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  shadertype)
    STACK_FMT_DATA(GLchar,  name[])
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glGetSubroutineIndex
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(shadertype)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_getActiveSubroutineUniformiv)
{
  /* void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, shadertype)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, values[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint))

    exdl_glGetActiveSubroutineUniformiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(shadertype)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(values)
    );

  THROW_FRAME()
}

EXDL_API(egl_getActiveSubroutineUniformName)
{
  /* void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLenum,   shadertype)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  bufsize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLchar,  name)
  FRAME_FMT_END()

    exdl_glGetActiveSubroutineUniformName
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(shadertype)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(bufsize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(name)
    );

  THROW_FRAME()
}

EXDL_API(egl_getActiveSubroutineName)
{
  /* void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLenum,   shadertype)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  bufsize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLchar,  name)
  FRAME_FMT_END()

    exdl_glGetActiveSubroutineName
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(shadertype)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(bufsize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(name)
    );

  THROW_FRAME()
}

EXDL_API(egl_uniformSubroutinesuiv)
{
  /* void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint* indices) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  shadertype)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  indices[])
  STACK_FMT_END()

    exdl_glUniformSubroutinesuiv
    ( STACK_GET_DATA(shadertype)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(indices)
    );
}

EXDL_API(egl_getUniformSubroutineuiv)
{
  /* void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  shadertype)
    STACK_FMT_DATA(GLint,   location)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(location) * sizeof(GLuint))

    exdl_glGetUniformSubroutineuiv
    ( STACK_GET_DATA(shadertype)
   ,  STACK_GET_DATA(location)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getProgramStageiv)
{
  /* void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, shadertype)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, values[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint))

    exdl_glGetProgramStageiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(shadertype)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(values)
    );

  THROW_FRAME()
}

/* GL_ARB_tessellation_shader */

EXDL_API(egl_patchParameteri)
{
  /* void glPatchParameteri(GLenum pname, GLint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  value)
  STACK_FMT_END()

    exdl_glPatchParameteri
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_patchParameterfv)
{
  /* void glPatchParameterfv(GLenum pname, const GLfloat* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLfloat,  values[])
  STACK_FMT_END()

    exdl_glPatchParameterfv
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(values)
    );
}

/* GL_ARB_texture_buffer_object_rgb32 */

/* GL_ARB_transform_feedback2 */

EXDL_API(egl_bindTransformFeedback)
{
  /* void glBindTransformFeedback(GLenum target, GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glBindTransformFeedback
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(id)
    );
}

EXDL_API(egl_deleteTransformFeedbacks)
{
  /* void glDeleteTransformFeedbacks(GLsizei n, const GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  ids[])
  STACK_FMT_END()

    exdl_glDeleteTransformFeedbacks
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(ids)
    );
}

EXDL_API(egl_genTransformFeedbacks)
{
  /* void glGenTransformFeedbacks(GLsizei n, GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, ids)
  FRAME_FMT_END()

    exdl_glGenTransformFeedbacks
    ( STACK_GET_DATA(n)
   ,  FRAME_GET_ADDR(ids)
    );

  THROW_FRAME()
}

EXDL_API(egl_isTransformFeedback)
{
  /* GLboolean glIsTransformFeedback(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsTransformFeedback
    ( STACK_GET_DATA(id)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_pauseTransformFeedback)
{
  /* void glPauseTransformFeedback(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glPauseTransformFeedback
  (
  );
}

EXDL_API(egl_resumeTransformFeedback)
{
  /* void glResumeTransformFeedback(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glResumeTransformFeedback
  (
  );
}

EXDL_API(egl_drawTransformFeedback)
{
  /* void glDrawTransformFeedback(GLenum mode, GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glDrawTransformFeedback
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(id)
    );
}

/* GL_ARB_transform_feedback3 */

EXDL_API(egl_drawTransformFeedbackStream)
{
  /* void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLuint, stream)
  STACK_FMT_END()

    exdl_glDrawTransformFeedbackStream
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(id)
   ,  STACK_GET_DATA(stream)
    );
}

EXDL_API(egl_beginQueryIndexed)
{
  /* void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glBeginQueryIndexed
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(id)
    );
}

EXDL_API(egl_endQueryIndexed)
{
  /* void glEndQueryIndexed(GLenum target, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glEndQueryIndexed
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
    );
}

EXDL_API(egl_getQueryIndexediv)
{
  /* void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint))

    exdl_glGetQueryIndexediv
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

/* GL_ARB_ES2_compatibility */

EXDL_API(egl_releaseShaderCompiler)
{
  /* void glReleaseShaderCompiler(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glReleaseShaderCompiler
  (
  );
}

EXDL_API(egl_shaderBinary)
{
  /* void glShaderBinary(GLsizei count, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_LPTR(GLuint*, shaders)
    STACK_FMT_DATA(GLenum,  binaryformat)
    STACK_FMT_LPTR(GLvoid*, binary)
    STACK_FMT_DATA(GLsizei, length)
  STACK_FMT_END()

    exdl_glShaderBinary
    ( STACK_GET_DATA(count)
   ,  STACK_GET_DATA(shaders)
   ,  STACK_GET_DATA(binaryformat)
   ,  STACK_GET_DATA(binary)
   ,  STACK_GET_DATA(length)
    );
}

EXDL_API(egl_getShaderPrecisionFormat)
{
  /* void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, shadertype)
    STACK_FMT_DATA(GLenum, precisiontype)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, range)
    FRAME_FMT_DATA(GLint, precision)
  FRAME_FMT_END()

    exdl_glGetShaderPrecisionFormat
    ( STACK_GET_DATA(shadertype)
   ,  STACK_GET_DATA(precisiontype)
   ,  FRAME_GET_ADDR(range)
   ,  FRAME_GET_ADDR(precision)
    );

  THROW_FRAME()
}

EXDL_API(egl_depthRangef)
{
  /* void glDepthRangef(GLclampf n, GLclampf f) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLclampf, n)
    STACK_FMT_DATA(GLclampf, f)
  STACK_FMT_END()

    exdl_glDepthRangef
    ( STACK_GET_DATA(n)
   ,  STACK_GET_DATA(f)
    );
}

EXDL_API(egl_clearDepthf)
{
  /* void glClearDepthf(GLclampf d) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLclampf, d)
  STACK_FMT_END()

    exdl_glClearDepthf
    ( STACK_GET_DATA(d)
    );
}

/* GL_ARB_get_program_binary */

EXDL_API(egl_getProgramBinary)
{
  /* void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, GLvoid* binary) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLsizei,  bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLenum,  binaryFormat)
    FRAME_FMT_DATA(GLvoid,  binary)
  FRAME_FMT_END()

    exdl_glGetProgramBinary
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(binaryFormat)
   ,  FRAME_GET_ADDR(binary)
    );

  THROW_FRAME()
}

EXDL_API(egl_programBinary)
{
  /* void glProgramBinary(GLuint program, GLenum binaryFormat, const GLvoid* binary, GLsizei length) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  binaryFormat)
    STACK_FMT_LPTR(GLvoid*, binary)
    STACK_FMT_DATA(GLsizei, length)
  STACK_FMT_END()

    exdl_glProgramBinary
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(binaryFormat)
   ,  STACK_GET_DATA(binary)
   ,  STACK_GET_DATA(length)
    );
}

EXDL_API(egl_programParameteri)
{
  /* void glProgramParameteri(GLuint program, GLenum pname, GLint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  value)
  STACK_FMT_END()

    exdl_glProgramParameteri
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(value)
    );
}

/* GL_ARB_separate_shader_objects */

EXDL_API(egl_useProgramStages)
{
  /* void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     pipeline)
    STACK_FMT_DATA(GLbitfield, stages)
    STACK_FMT_DATA(GLuint,     program)
  STACK_FMT_END()

    exdl_glUseProgramStages
    ( STACK_GET_DATA(pipeline)
   ,  STACK_GET_DATA(stages)
   ,  STACK_GET_DATA(program)
    );
}

EXDL_API(egl_activeShaderProgram)
{
  /* void glActiveShaderProgram(GLuint pipeline, GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, pipeline)
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

    exdl_glActiveShaderProgram
    ( STACK_GET_DATA(pipeline)
   ,  STACK_GET_DATA(program)
    );
}

EXDL_API(egl_createShaderProgramv)
{
  /* GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar** strings) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLchar,   strings[])
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glCreateShaderProgramv
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(strings)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_bindProgramPipeline)
{
  /* void glBindProgramPipeline(GLuint pipeline) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, pipeline)
  STACK_FMT_END()

    exdl_glBindProgramPipeline
    ( STACK_GET_DATA(pipeline)
    );
}

EXDL_API(egl_deleteProgramPipelines)
{
  /* void glDeleteProgramPipelines(GLsizei n, const GLuint* pipelines) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  pipelines[])
  STACK_FMT_END()

    exdl_glDeleteProgramPipelines
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(pipelines)
    );
}

EXDL_API(egl_genProgramPipelines)
{
  /* void glGenProgramPipelines(GLsizei n, GLuint* pipelines) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, pipelines)
  FRAME_FMT_END()

    exdl_glGenProgramPipelines
    ( STACK_GET_DATA(n)
   ,  FRAME_GET_ADDR(pipelines)
    );

  THROW_FRAME()
}

EXDL_API(egl_isProgramPipeline)
{
  /* GLboolean glIsProgramPipeline(GLuint pipeline) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, pipeline)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsProgramPipeline
    ( STACK_GET_DATA(pipeline)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_getProgramPipelineiv)
{
  /* void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, pipeline)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLint))

    exdl_glGetProgramPipelineiv
    ( STACK_GET_DATA(pipeline)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_programUniform1i)
{
  /* void glProgramUniform1i(GLuint program, GLint location, GLint v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLint,  v0)
  STACK_FMT_END()

    exdl_glProgramUniform1i
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_programUniform1iv)
{
  /* void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       program)
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLint,        value[])
  STACK_FMT_END()

    exdl_glProgramUniform1iv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform1f)
{
  /* void glProgramUniform1f(GLuint program, GLint location, GLfloat v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
  STACK_FMT_END()

    exdl_glProgramUniform1f
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_programUniform1fv)
{
  /* void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLfloat,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform1fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform1d)
{
  /* void glProgramUniform1d(GLuint program, GLint location, GLdouble v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, v0)
  STACK_FMT_END()

    exdl_glProgramUniform1d
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_programUniform1dv)
{
  /* void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform1dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform1ui)
{
  /* void glProgramUniform1ui(GLuint program, GLint location, GLuint v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
  STACK_FMT_END()

    exdl_glProgramUniform1ui
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_programUniform1uiv)
{
  /* void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform1uiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2i)
{
  /* void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLint,  v0)
    STACK_FMT_DATA(GLint,  v1)
  STACK_FMT_END()

    exdl_glProgramUniform2i
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_programUniform2iv)
{
  /* void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       program)
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLint,        value[])
  STACK_FMT_END()

    exdl_glProgramUniform2iv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2f)
{
  /* void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
  STACK_FMT_END()

    exdl_glProgramUniform2f
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_programUniform2fv)
{
  /* void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLfloat,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform2fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2d)
{
  /* void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, v0)
    STACK_FMT_DATA(GLdouble, v1)
  STACK_FMT_END()

    exdl_glProgramUniform2d
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_programUniform2dv)
{
  /* void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform2dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2ui)
{
  /* void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
  STACK_FMT_END()

    exdl_glProgramUniform2ui
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_programUniform2uiv)
{
  /* void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform2uiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3i)
{
  /* void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLint,  v0)
    STACK_FMT_DATA(GLint,  v1)
    STACK_FMT_DATA(GLint,  v2)
  STACK_FMT_END()

    exdl_glProgramUniform3i
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_programUniform3iv)
{
  /* void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       program)
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLint,        value[])
  STACK_FMT_END()

    exdl_glProgramUniform3iv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3f)
{
  /* void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
    STACK_FMT_DATA(GLfloat, v2)
  STACK_FMT_END()

    exdl_glProgramUniform3f
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_programUniform3fv)
{
  /* void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLfloat,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform3fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3d)
{
  /* void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, v0)
    STACK_FMT_DATA(GLdouble, v1)
    STACK_FMT_DATA(GLdouble, v2)
  STACK_FMT_END()

    exdl_glProgramUniform3d
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_programUniform3dv)
{
  /* void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform3dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3ui)
{
  /* void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
    STACK_FMT_DATA(GLuint, v2)
  STACK_FMT_END()

    exdl_glProgramUniform3ui
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_programUniform3uiv)
{
  /* void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform3uiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4i)
{
  /* void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLint,  v0)
    STACK_FMT_DATA(GLint,  v1)
    STACK_FMT_DATA(GLint,  v2)
    STACK_FMT_DATA(GLint,  v3)
  STACK_FMT_END()

    exdl_glProgramUniform4i
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_programUniform4iv)
{
  /* void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       program)
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLint,        value[])
  STACK_FMT_END()

    exdl_glProgramUniform4iv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4f)
{
  /* void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
    STACK_FMT_DATA(GLfloat, v2)
    STACK_FMT_DATA(GLfloat, v3)
  STACK_FMT_END()

    exdl_glProgramUniform4f
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_programUniform4fv)
{
  /* void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLfloat,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform4fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4d)
{
  /* void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, v0)
    STACK_FMT_DATA(GLdouble, v1)
    STACK_FMT_DATA(GLdouble, v2)
    STACK_FMT_DATA(GLdouble, v3)
  STACK_FMT_END()

    exdl_glProgramUniform4d
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_programUniform4dv)
{
  /* void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform4dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4ui)
{
  /* void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
    STACK_FMT_DATA(GLuint, v2)
    STACK_FMT_DATA(GLuint, v3)
  STACK_FMT_END()

    exdl_glProgramUniform4ui
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_programUniform4uiv)
{
  /* void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform4uiv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2fv)
{
  /* void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLint,          location)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(GLboolean,      transpose)
    STACK_FMT_DATA(GLfloat,        value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3fv)
{
  /* void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLint,          location)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(GLboolean,      transpose)
    STACK_FMT_DATA(GLfloat,        value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4fv)
{
  /* void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLint,          location)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(GLboolean,      transpose)
    STACK_FMT_DATA(GLfloat,        value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2dv)
{
  /* void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3dv)
{
  /* void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4dv)
{
  /* void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2x3fv)
{
  /* void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLint,          location)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(GLboolean,      transpose)
    STACK_FMT_DATA(GLfloat,        value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2x3fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3x2fv)
{
  /* void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLint,          location)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(GLboolean,      transpose)
    STACK_FMT_DATA(GLfloat,        value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3x2fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2x4fv)
{
  /* void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLint,          location)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(GLboolean,      transpose)
    STACK_FMT_DATA(GLfloat,        value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2x4fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4x2fv)
{
  /* void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLint,          location)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(GLboolean,      transpose)
    STACK_FMT_DATA(GLfloat,        value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4x2fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3x4fv)
{
  /* void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLint,          location)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(GLboolean,      transpose)
    STACK_FMT_DATA(GLfloat,        value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3x4fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4x3fv)
{
  /* void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLint,          location)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(GLboolean,      transpose)
    STACK_FMT_DATA(GLfloat,        value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4x3fv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2x3dv)
{
  /* void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2x3dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3x2dv)
{
  /* void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3x2dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2x4dv)
{
  /* void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2x4dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4x2dv)
{
  /* void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4x2dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3x4dv)
{
  /* void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3x4dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4x3dv)
{
  /* void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4x3dv
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_validateProgramPipeline)
{
  /* void glValidateProgramPipeline(GLuint pipeline) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, pipeline)
  STACK_FMT_END()

    exdl_glValidateProgramPipeline
    ( STACK_GET_DATA(pipeline)
    );
}

EXDL_API(egl_getProgramPipelineInfoLog)
{
  /* void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   pipeline)
    STACK_FMT_DATA(GLsizei,  bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLchar,  infoLog)
  FRAME_FMT_END()

    exdl_glGetProgramPipelineInfoLog
    ( STACK_GET_DATA(pipeline)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(infoLog)
    );

  THROW_FRAME()
}

/* GL_ARB_vertex_attrib_64bit */

EXDL_API(egl_vertexAttribL1d)
{
  /* void glVertexAttribL1d(GLuint index, GLdouble x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
  STACK_FMT_END()

    exdl_glVertexAttribL1d
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttribL2d)
{
  /* void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glVertexAttribL2d
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttribL3d)
{
  /* void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glVertexAttribL3d
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttribL4d)
{
  /* void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glVertexAttribL4d
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttribL1dv)
{
  /* void glVertexAttribL1dv(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLdouble,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL1dv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL2dv)
{
  /* void glVertexAttribL2dv(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLdouble,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL2dv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL3dv)
{
  /* void glVertexAttribL3dv(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLdouble,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL3dv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL4dv)
{
  /* void glVertexAttribL4dv(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLdouble,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL4dv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribLPointer)
{
  /* void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid,  pointer[])
  STACK_FMT_END()

    exdl_glVertexAttribLPointer
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_ADDR(pointer)
    );
}

EXDL_API(egl_getVertexAttribLdv)
{
  /* void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLenum,    pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, params[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(pname) * sizeof(GLdouble))

    exdl_glGetVertexAttribLdv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

/* GL_ARB_viewport_array */

EXDL_API(egl_viewportArrayv)
{
  /* void glViewportArrayv(GLuint first, GLsizei count, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   first)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLfloat,  v[])
  STACK_FMT_END()

    exdl_glViewportArrayv
    ( STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_viewportIndexedf)
{
  /* void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, w)
    STACK_FMT_DATA(GLfloat, h)
  STACK_FMT_END()

    exdl_glViewportIndexedf
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(w)
   ,  STACK_GET_DATA(h)
    );
}

EXDL_API(egl_viewportIndexedfv)
{
  /* void glViewportIndexedfv(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLfloat,  v[])
  STACK_FMT_END()

    exdl_glViewportIndexedfv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_scissorArrayv)
{
  /* void glScissorArrayv(GLuint first, GLsizei count, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       first)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLint,        v[])
  STACK_FMT_END()

    exdl_glScissorArrayv
    ( STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_scissorIndexed)
{
  /* void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLint,   left)
    STACK_FMT_DATA(GLint,   bottom)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glScissorIndexed
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(left)
   ,  STACK_GET_DATA(bottom)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_scissorIndexedv)
{
  /* void glScissorIndexedv(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glScissorIndexedv
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_depthRangeArrayv)
{
  /* void glDepthRangeArrayv(GLuint first, GLsizei count, const GLclampd* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    first)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLclampd,  v[])
  STACK_FMT_END()

    exdl_glDepthRangeArrayv
    ( STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_depthRangeIndexed)
{
  /* void glDepthRangeIndexed(GLuint index, GLclampd n, GLclampd f) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLclampd, n)
    STACK_FMT_DATA(GLclampd, f)
  STACK_FMT_END()

    exdl_glDepthRangeIndexed
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_DATA(f)
    );
}

EXDL_API(egl_getFloati_v)
{
  /* void glGetFloati_v(GLenum target, GLuint index, GLfloat* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, data[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(index) * sizeof(GLfloat))

    exdl_glGetFloati_v
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(data)
    );

  THROW_FRAME()
}

EXDL_API(egl_getDoublei_v)
{
  /* void glGetDoublei_v(GLenum target, GLuint index, GLdouble* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLuint,    index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, data[1])
  FRAME_FMT_SIZE(STACK_GET_DATA(index) * sizeof(GLdouble))

    exdl_glGetDoublei_v
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(data)
    );

  THROW_FRAME()
}

/* GL_ARB_cl_event */

EXDL_API(egl_createSyncFromCLeventARB)
{
  /* GLsync glCreateSyncFromCLeventARB(struct _cl_context* context, struct _cl_event* event, GLbitfield flags) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(struct _cl_context*, context)
    STACK_FMT_LPTR(struct _cl_event*,   event)
    STACK_FMT_DATA(GLbitfield,          flags)
  STACK_FMT_END()

  CATCH_RESULT(GLsync)

    exdl_glCreateSyncFromCLeventARB
    ( STACK_GET_DATA(context)
   ,  STACK_GET_DATA(event)
   ,  STACK_GET_DATA(flags)
    );

  THROW_RESULT(GLsync)
}

/* GL_ARB_debug_output */

EXDL_API(egl_debugMessageControlARB)
{
  /* void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    source)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLenum,    severity)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_LPTR(GLuint*,   ids)
    STACK_FMT_DATA(GLboolean, enabled)
  STACK_FMT_END()

    exdl_glDebugMessageControlARB
    ( STACK_GET_DATA(source)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(severity)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(ids)
   ,  STACK_GET_DATA(enabled)
    );
}

EXDL_API(egl_debugMessageInsertARB)
{
  /* void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* buf) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  source)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  severity)
    STACK_FMT_DATA(GLsizei, length)
    STACK_FMT_DATA(GLchar,  buf[])
  STACK_FMT_END()

    exdl_glDebugMessageInsertARB
    ( STACK_GET_DATA(source)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(id)
   ,  STACK_GET_DATA(severity)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_ADDR(buf)
    );
}

EXDL_API(egl_debugMessageCallbackARB)
{
  /* void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const GLvoid* userParam) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLDEBUGPROCARB, callback)
    STACK_FMT_DATA(GLvoid,         userParam[])
  STACK_FMT_END()

    exdl_glDebugMessageCallbackARB
    ( STACK_GET_DATA(callback)
   ,  STACK_GET_ADDR(userParam)
    );
}

EXDL_API(egl_getDebugMessageLogARB)
{
  /* GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufsize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   count)
    STACK_FMT_DATA(GLsizei,  bufsize)
    STACK_FMT_LPTR(GLenum*,  sources)
    STACK_FMT_LPTR(GLenum*,  types)
    STACK_FMT_LPTR(GLuint*,  ids)
    STACK_FMT_LPTR(GLenum*,  severities)
    STACK_FMT_LPTR(GLsizei*, lengths)
    STACK_FMT_LPTR(GLchar*,  messageLog)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, exdl)
  FRAME_FMT_END()

  FRAME_SET_DATA(exdl) =

    exdl_glGetDebugMessageLogARB
    ( STACK_GET_DATA(count)
   ,  STACK_GET_DATA(bufsize)
   ,  STACK_GET_DATA(sources)
   ,  STACK_GET_DATA(types)
   ,  STACK_GET_DATA(ids)
   ,  STACK_GET_DATA(severities)
   ,  STACK_GET_DATA(lengths)
   ,  STACK_GET_DATA(messageLog)
    );

  THROW_FRAME()
}

/* GL_ARB_robustness */

EXDL_API(egl_getGraphicsResetStatusARB)
{
  /* GLenum glGetGraphicsResetStatusARB(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(GLenum)

    exdl_glGetGraphicsResetStatusARB
    (
    );

  THROW_RESULT(GLenum)
}

EXDL_API(egl_getnMapdvARB)
{
  /* void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLenum,    query)
    STACK_FMT_DATA(GLsizei,   bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, v)
  FRAME_FMT_END()

    exdl_glGetnMapdvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(query)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(v)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnMapfvARB)
{
  /* void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLenum,   query)
    STACK_FMT_DATA(GLsizei,  bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, v)
  FRAME_FMT_END()

    exdl_glGetnMapfvARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(query)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(v)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnMapivARB)
{
  /* void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  query)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint,  v)
  FRAME_FMT_END()

    exdl_glGetnMapivARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(query)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(v)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnPixelMapfvARB)
{
  /* void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   map)
    STACK_FMT_DATA(GLsizei,  bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, values)
  FRAME_FMT_END()

    exdl_glGetnPixelMapfvARB
    ( STACK_GET_DATA(map)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(values)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnPixelMapuivARB)
{
  /* void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  map)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, values)
  FRAME_FMT_END()

    exdl_glGetnPixelMapuivARB
    ( STACK_GET_DATA(map)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(values)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnPixelMapusvARB)
{
  /* void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    map)
    STACK_FMT_DATA(GLsizei,   bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLushort, values)
  FRAME_FMT_END()

    exdl_glGetnPixelMapusvARB
    ( STACK_GET_DATA(map)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(values)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnPolygonStippleARB)
{
  /* void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte* pattern) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLubyte, pattern)
  FRAME_FMT_END()

    exdl_glGetnPolygonStippleARB
    ( STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(pattern)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnColorTableARB)
{
  /* void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid* table) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, table)
  FRAME_FMT_END()

    exdl_glGetnColorTableARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(table)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnConvolutionFilterARB)
{
  /* void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid* image) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, image)
  FRAME_FMT_END()

    exdl_glGetnConvolutionFilterARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(image)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnSeparableFilterARB)
{
  /* void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid* row, GLsizei columnBufSize, GLvoid* column, GLvoid* span) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, rowBufSize)
    STACK_FMT_LPTR(GLvoid*, row)
    STACK_FMT_DATA(GLsizei, columnBufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, column)
    FRAME_FMT_DATA(GLvoid, span)
  FRAME_FMT_END()

    exdl_glGetnSeparableFilterARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(rowBufSize)
   ,  STACK_GET_DATA(row)
   ,  STACK_GET_DATA(columnBufSize)
   ,  FRAME_GET_ADDR(column)
   ,  FRAME_GET_ADDR(span)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnHistogramARB)
{
  /* void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLboolean, reset)
    STACK_FMT_DATA(GLenum,    format)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLsizei,   bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid,   values)
  FRAME_FMT_END()

    exdl_glGetnHistogramARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(reset)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(values)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnMinmaxARB)
{
  /* void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLboolean, reset)
    STACK_FMT_DATA(GLenum,    format)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLsizei,   bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid,   values)
  FRAME_FMT_END()

    exdl_glGetnMinmaxARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(reset)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(values)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnTexImageARB)
{
  /* void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid* img) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, img)
  FRAME_FMT_END()

    exdl_glGetnTexImageARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(img)
    );

  THROW_FRAME()
}

EXDL_API(egl_readnPixelsARB)
{
  /* void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, bufSize)
    STACK_FMT_DATA(GLvoid,  data[])
  STACK_FMT_END()

    exdl_glReadnPixelsARB
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(bufSize)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getnCompressedTexImageARB)
{
  /* void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, GLvoid* img) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   lod)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, img)
  FRAME_FMT_END()

    exdl_glGetnCompressedTexImageARB
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(lod)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(img)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnUniformfvARB)
{
  /* void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLsizei,  bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params)
  FRAME_FMT_END()

    exdl_glGetnUniformfvARB
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnUniformivARB)
{
  /* void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint,  params)
  FRAME_FMT_END()

    exdl_glGetnUniformivARB
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnUniformuivARB)
{
  /* void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, params)
  FRAME_FMT_END()

    exdl_glGetnUniformuivARB
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getnUniformdvARB)
{
  /* void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, params)
  FRAME_FMT_END()

    exdl_glGetnUniformdvARB
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(e_gl_ARB_shader_stencil_export)
{
  /* /* GL_ARB_shader_stencil_export */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(/*)

    exdl_GL_ARB_shader_stencil_export
    (
    );

  THROW_POINTER()
}

/* GL_EXT_abgr */

/* GL_EXT_blend_color */

EXDL_API(egl_blendColorEXT)
{
  /* void glBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLclampf, red)
    STACK_FMT_DATA(GLclampf, green)
    STACK_FMT_DATA(GLclampf, blue)
    STACK_FMT_DATA(GLclampf, alpha)
  STACK_FMT_END()

    exdl_glBlendColorEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
   ,  STACK_GET_DATA(alpha)
    );
}

/* GL_EXT_polygon_offset */

EXDL_API(egl_polygonOffsetEXT)
{
  /* void glPolygonOffsetEXT(GLfloat factor, GLfloat bias) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, factor)
    STACK_FMT_DATA(GLfloat, bias)
  STACK_FMT_END()

    exdl_glPolygonOffsetEXT
    ( STACK_GET_DATA(factor)
   ,  STACK_GET_DATA(bias)
    );
}

/* GL_EXT_texture */

/* GL_EXT_texture3D */

EXDL_API(egl_texImage3DEXT)
{
  /* void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTexImage3DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_texSubImage3DEXT)
{
  /* void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTexSubImage3DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_SGIS_texture_filter4 */

EXDL_API(egl_getTexFilterFuncSGIS)
{
  /* void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  filter)
    STACK_FMT_DATA(GLfloat, weights[])
  STACK_FMT_END()

    exdl_glGetTexFilterFuncSGIS
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(filter)
   ,  STACK_GET_ADDR(weights)
    );
}

EXDL_API(egl_texFilterFuncSGIS)
{
  /* void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat* weights) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  filter)
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLfloat, weights[])
  STACK_FMT_END()

    exdl_glTexFilterFuncSGIS
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(filter)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(weights)
    );
}

/* GL_EXT_subtexture */

EXDL_API(egl_texSubImage1DEXT)
{
  /* void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTexSubImage1DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_texSubImage2DEXT)
{
  /* void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTexSubImage2DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_EXT_copy_texture */

EXDL_API(egl_copyTexImage1DEXT)
{
  /* void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLint,   border)
  STACK_FMT_END()

    exdl_glCopyTexImage1DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(border)
    );
}

EXDL_API(egl_copyTexImage2DEXT)
{
  /* void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLint,   border)
  STACK_FMT_END()

    exdl_glCopyTexImage2DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(border)
    );
}

EXDL_API(egl_copyTexSubImage1DEXT)
{
  /* void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glCopyTexSubImage1DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
    );
}

EXDL_API(egl_copyTexSubImage2DEXT)
{
  /* void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glCopyTexSubImage2DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_copyTexSubImage3DEXT)
{
  /* void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glCopyTexSubImage3DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

/* GL_EXT_histogram */

EXDL_API(egl_getHistogramEXT)
{
  /* void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLboolean, reset)
    STACK_FMT_DATA(GLenum,    format)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLvoid*,   values)
  STACK_FMT_END()

    exdl_glGetHistogramEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(reset)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(values)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getHistogramParameterfvEXT)
{
  /* void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetHistogramParameterfvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getHistogramParameterivEXT)
{
  /* void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetHistogramParameterivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMinmaxEXT)
{
  /* void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLboolean, reset)
    STACK_FMT_DATA(GLenum,    format)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLvoid*,   values)
  STACK_FMT_END()

    exdl_glGetMinmaxEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(reset)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(values)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getMinmaxParameterfvEXT)
{
  /* void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetMinmaxParameterfvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMinmaxParameterivEXT)
{
  /* void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetMinmaxParameterivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_histogramEXT)
{
  /* void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLsizei,   width)
    STACK_FMT_DATA(GLenum,    internalformat)
    STACK_FMT_DATA(GLboolean, sink)
  STACK_FMT_END()

    exdl_glHistogramEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(sink)
    );
}

EXDL_API(egl_minmaxEXT)
{
  /* void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLenum,    internalformat)
    STACK_FMT_DATA(GLboolean, sink)
  STACK_FMT_END()

    exdl_glMinmaxEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(sink)
    );
}

EXDL_API(egl_resetHistogramEXT)
{
  /* void glResetHistogramEXT(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glResetHistogramEXT
    ( STACK_GET_DATA(target)
    );
}

EXDL_API(egl_resetMinmaxEXT)
{
  /* void glResetMinmaxEXT(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glResetMinmaxEXT
    ( STACK_GET_DATA(target)
    );
}

/* GL_EXT_convolution */

EXDL_API(egl_convolutionFilter1DEXT)
{
  /* void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid* image) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, image)
  STACK_FMT_END()

    exdl_glConvolutionFilter1DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(image)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_convolutionFilter2DEXT)
{
  /* void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* image) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, image)
  STACK_FMT_END()

    exdl_glConvolutionFilter2DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(image)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_convolutionParameterfEXT)
{
  /* void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params)
  STACK_FMT_END()

    exdl_glConvolutionParameterfEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_convolutionParameterfvEXT)
{
  /* void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glConvolutionParameterfvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_convolutionParameteriEXT)
{
  /* void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params)
  STACK_FMT_END()

    exdl_glConvolutionParameteriEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_convolutionParameterivEXT)
{
  /* void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glConvolutionParameterivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_copyConvolutionFilter1DEXT)
{
  /* void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glCopyConvolutionFilter1DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
    );
}

EXDL_API(egl_copyConvolutionFilter2DEXT)
{
  /* void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glCopyConvolutionFilter2DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_getConvolutionFilterEXT)
{
  /* void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, GLvoid* image) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, image)
  STACK_FMT_END()

    exdl_glGetConvolutionFilterEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(image)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getConvolutionParameterfvEXT)
{
  /* void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetConvolutionParameterfvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getConvolutionParameterivEXT)
{
  /* void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetConvolutionParameterivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getSeparableFilterEXT)
{
  /* void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, GLvoid* row, GLvoid* column, GLvoid* span) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, row)
    STACK_FMT_DATA(GLvoid*, column)
    STACK_FMT_DATA(GLvoid*, span)
  STACK_FMT_END()

    exdl_glGetSeparableFilterEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(row)
  : (GLvoid*) sd->bin[0].base
   ,  (sd->next_bin == 1)
  ? STACK_GET_DATA(column)
  : (GLvoid*) sd->bin[1].base
   ,  (sd->next_bin == 2)
  ? STACK_GET_DATA(span)
  : (GLvoid*) sd->bin[2].base
    );
}

EXDL_API(egl_separableFilter2DEXT)
{
  /* void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* row, const GLvoid* column) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, row)
    STACK_FMT_DATA(GLvoid*, column)
  STACK_FMT_END()

    exdl_glSeparableFilter2DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(row)
  : (GLvoid*) sd->bin[0].base
   ,  (sd->next_bin == 1)
  ? STACK_GET_DATA(column)
  : (GLvoid*) sd->bin[1].base
    );
}

/* GL_EXT_color_matrix */
/* GL_SGI_color_matrix */
/* GL_SGI_color_table */

EXDL_API(egl_colorTableSGI)
{
  /* void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid* table) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, table)
  STACK_FMT_END()

    exdl_glColorTableSGI
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(table)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_colorTableParameterfvSGI)
{
  /* void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glColorTableParameterfvSGI
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_colorTableParameterivSGI)
{
  /* void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glColorTableParameterivSGI
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_copyColorTableSGI)
{
  /* void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glCopyColorTableSGI
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
    );
}

EXDL_API(egl_getColorTableSGI)
{
  /* void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, GLvoid* table) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, table)
  STACK_FMT_END()

    exdl_glGetColorTableSGI
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(table)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getColorTableParameterfvSGI)
{
  /* void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetColorTableParameterfvSGI
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getColorTableParameterivSGI)
{
  /* void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetColorTableParameterivSGI
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_SGIX_pixel_texture */

EXDL_API(egl_pixelTexGenSGIX)
{
  /* void glPixelTexGenSGIX(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glPixelTexGenSGIX
    ( STACK_GET_DATA(mode)
    );
}

/* GL_SGIS_pixel_texture */

EXDL_API(egl_pixelTexGenParameteriSGIS)
{
  /* void glPixelTexGenParameteriSGIS(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glPixelTexGenParameteriSGIS
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pixelTexGenParameterivSGIS)
{
  /* void glPixelTexGenParameterivSGIS(GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glPixelTexGenParameterivSGIS
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_pixelTexGenParameterfSGIS)
{
  /* void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glPixelTexGenParameterfSGIS
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pixelTexGenParameterfvSGIS)
{
  /* void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glPixelTexGenParameterfvSGIS
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getPixelTexGenParameterivSGIS)
{
  /* void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetPixelTexGenParameterivSGIS
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getPixelTexGenParameterfvSGIS)
{
  /* void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetPixelTexGenParameterfvSGIS
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_SGIS_texture4D */

EXDL_API(egl_texImage4DSGIS)
{
  /* void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLsizei, size4d)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTexImage4DSGIS
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(size4d)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_texSubImage4DSGIS)
{
  /* void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLint,   woffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLsizei, size4d)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTexSubImage4DSGIS
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(woffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(size4d)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_SGI_texture_color_table */
/* GL_EXT_cmyka */
/* GL_EXT_texture_object */

EXDL_API(egl_areTexturesResidentEXT)
{
  /* GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint* textures, GLboolean* residences) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei,    n)
    STACK_FMT_DATA(GLuint*,    textures)
    STACK_FMT_DATA(GLboolean*, residences)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glAreTexturesResidentEXT
    ( STACK_GET_DATA(n)
   ,  STACK_GET_DATA(textures)
   ,  STACK_GET_DATA(residences)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_bindTextureEXT)
{
  /* void glBindTextureEXT(GLenum target, GLuint texture) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, texture)
  STACK_FMT_END()

    exdl_glBindTextureEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(texture)
    );
}

EXDL_API(egl_deleteTexturesEXT)
{
  /* void glDeleteTexturesEXT(GLsizei n, const GLuint* textures) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  textures[])
  STACK_FMT_END()

    exdl_glDeleteTexturesEXT
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(textures)
    );
}

EXDL_API(egl_genTexturesEXT)
{
  /* void glGenTexturesEXT(GLsizei n, GLuint* textures) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  textures[])
  STACK_FMT_END()

    exdl_glGenTexturesEXT
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(textures)
    );
}

EXDL_API(egl_isTextureEXT)
{
  /* GLboolean glIsTextureEXT(GLuint texture) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsTextureEXT
    ( STACK_GET_DATA(texture)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_prioritizeTexturesEXT)
{
  /* void glPrioritizeTexturesEXT(GLsizei n, const GLuint* textures, const GLclampf* priorities) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei,   n)
    STACK_FMT_DATA(GLuint*,   textures)
    STACK_FMT_DATA(GLclampf*, priorities)
  STACK_FMT_END()

    exdl_glPrioritizeTexturesEXT
    ( STACK_GET_DATA(n)
   ,  STACK_GET_DATA(textures)
   ,  STACK_GET_DATA(priorities)
    );
}

/* GL_SGIS_detail_texture */

EXDL_API(egl_detailTexFuncSGIS)
{
  /* void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLfloat, points[])
  STACK_FMT_END()

    exdl_glDetailTexFuncSGIS
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(points)
    );
}

EXDL_API(egl_getDetailTexFuncSGIS)
{
  /* void glGetDetailTexFuncSGIS(GLenum target, GLfloat* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, points[])
  STACK_FMT_END()

    exdl_glGetDetailTexFuncSGIS
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(points)
    );
}

/* GL_SGIS_sharpen_texture */

EXDL_API(egl_sharpenTexFuncSGIS)
{
  /* void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLfloat, points[])
  STACK_FMT_END()

    exdl_glSharpenTexFuncSGIS
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(points)
    );
}

EXDL_API(egl_getSharpenTexFuncSGIS)
{
  /* void glGetSharpenTexFuncSGIS(GLenum target, GLfloat* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, points[])
  STACK_FMT_END()

    exdl_glGetSharpenTexFuncSGIS
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(points)
    );
}

/* GL_EXT_packed_pixels */
/* GL_SGIS_texture_lod */
/* GL_SGIS_multisample */

EXDL_API(egl_sampleMaskSGIS)
{
  /* void glSampleMaskSGIS(GLclampf value, GLboolean invert) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLclampf,  value)
    STACK_FMT_DATA(GLboolean, invert)
  STACK_FMT_END()

    exdl_glSampleMaskSGIS
    ( STACK_GET_DATA(value)
   ,  STACK_GET_DATA(invert)
    );
}

EXDL_API(egl_samplePatternSGIS)
{
  /* void glSamplePatternSGIS(GLenum pattern) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pattern)
  STACK_FMT_END()

    exdl_glSamplePatternSGIS
    ( STACK_GET_DATA(pattern)
    );
}

/* GL_EXT_rescale_normal */
/* GL_EXT_vertex_array */

EXDL_API(egl_arrayElementEXT)
{
  /* void glArrayElementEXT(GLint i) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, i)
  STACK_FMT_END()

    exdl_glArrayElementEXT
    ( STACK_GET_DATA(i)
    );
}

EXDL_API(egl_colorPointerEXT)
{
  /* void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glColorPointerEXT
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_drawArraysEXT)
{
  /* void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLint,   first)
    STACK_FMT_DATA(GLsizei, count)
  STACK_FMT_END()

    exdl_glDrawArraysEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
    );
}

EXDL_API(egl_edgeFlagPointerEXT)
{
  /* void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei,   stride)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, pointer[])
  STACK_FMT_END()

    exdl_glEdgeFlagPointerEXT
    ( STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(pointer)
    );
}

EXDL_API(egl_getPointervEXT)
{
  /* void glGetPointervEXT(GLenum pname, GLvoid** params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLvoid**, params)
  STACK_FMT_END()

    exdl_glGetPointervEXT
    ( STACK_GET_DATA(pname)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(params)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_indexPointerEXT)
{
  /* void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glIndexPointerEXT
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_normalPointerEXT)
{
  /* void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glNormalPointerEXT
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_texCoordPointerEXT)
{
  /* void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glTexCoordPointerEXT
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_vertexPointerEXT)
{
  /* void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glVertexPointerEXT
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(count)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_EXT_misc_attribute */
/* GL_SGIS_generate_mipmap */
/* GL_SGIX_clipmap */
/* GL_SGIX_shadow */
/* GL_SGIS_texture_edge_clamp */
/* GL_SGIS_texture_border_clamp */
/* GL_EXT_blend_minmax */

EXDL_API(egl_blendEquationEXT)
{
  /* void glBlendEquationEXT(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glBlendEquationEXT
    ( STACK_GET_DATA(mode)
    );
}

/* GL_EXT_blend_subtract */
/* GL_EXT_blend_logic_op */
/* GL_SGIX_interlace */
/* GL_SGIX_pixel_tiles */
/* GL_SGIX_texture_select */
/* GL_SGIX_sprite */

EXDL_API(egl_spriteParameterfSGIX)
{
  /* void glSpriteParameterfSGIX(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glSpriteParameterfSGIX
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_spriteParameterfvSGIX)
{
  /* void glSpriteParameterfvSGIX(GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glSpriteParameterfvSGIX
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_spriteParameteriSGIX)
{
  /* void glSpriteParameteriSGIX(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glSpriteParameteriSGIX
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_spriteParameterivSGIX)
{
  /* void glSpriteParameterivSGIX(GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glSpriteParameterivSGIX
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_SGIX_texture_multi_buffer */
/* GL_EXT_point_parameters */

EXDL_API(egl_pointParameterfEXT)
{
  /* void glPointParameterfEXT(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glPointParameterfEXT
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pointParameterfvEXT)
{
  /* void glPointParameterfvEXT(GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glPointParameterfvEXT
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_SGIS_point_parameters */

EXDL_API(egl_pointParameterfSGIS)
{
  /* void glPointParameterfSGIS(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glPointParameterfSGIS
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pointParameterfvSGIS)
{
  /* void glPointParameterfvSGIS(GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glPointParameterfvSGIS
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_SGIX_instruments */

EXDL_API(egl_getInstrumentsSGIX)
{
  /* GLint glGetInstrumentsSGIX(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  CATCH_RESULT(GLint)

    exdl_glGetInstrumentsSGIX
    (
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_instrumentsBufferSGIX)
{
  /* void glInstrumentsBufferSGIX(GLsizei size, GLint* buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, size)
    STACK_FMT_DATA(GLint,   buffer[])
  STACK_FMT_END()

    exdl_glInstrumentsBufferSGIX
    ( STACK_GET_DATA(size)
   ,  STACK_GET_ADDR(buffer)
    );
}

EXDL_API(egl_pollInstrumentsSGIX)
{
  /* GLint glPollInstrumentsSGIX(GLint* marker_p) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, marker_p[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glPollInstrumentsSGIX
    ( STACK_GET_ADDR(marker_p)
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_readInstrumentsSGIX)
{
  /* void glReadInstrumentsSGIX(GLint marker) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, marker)
  STACK_FMT_END()

    exdl_glReadInstrumentsSGIX
    ( STACK_GET_DATA(marker)
    );
}

EXDL_API(egl_startInstrumentsSGIX)
{
  /* void glStartInstrumentsSGIX(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glStartInstrumentsSGIX
    (
    );
}

EXDL_API(egl_stopInstrumentsSGIX)
{
  /* void glStopInstrumentsSGIX(GLint marker) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, marker)
  STACK_FMT_END()

    exdl_glStopInstrumentsSGIX
    ( STACK_GET_DATA(marker)
    );
}

/* GL_SGIX_texture_scale_bias */
/* GL_SGIX_framezoom */

EXDL_API(egl_frameZoomSGIX)
{
  /* void glFrameZoomSGIX(GLint factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, factor)
  STACK_FMT_END()

    exdl_glFrameZoomSGIX
    ( STACK_GET_DATA(factor)
    );
}

/* GL_SGIX_tag_sample_buffer */

EXDL_API(egl_tagSampleBufferSGIX)
{
  /* void glTagSampleBufferSGIX(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glTagSampleBufferSGIX
    (
    );
}

/* GL_SGIX_polynomial_ffd */

EXDL_API(egl_deformationMap3dSGIX)
{
  /* void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLdouble, u1)
    STACK_FMT_DATA(GLdouble, u2)
    STACK_FMT_DATA(GLint,    ustride)
    STACK_FMT_DATA(GLint,    uorder)
    STACK_FMT_DATA(GLdouble, v1)
    STACK_FMT_DATA(GLdouble, v2)
    STACK_FMT_DATA(GLint,    vstride)
    STACK_FMT_DATA(GLint,    vorder)
    STACK_FMT_DATA(GLdouble, w1)
    STACK_FMT_DATA(GLdouble, w2)
    STACK_FMT_DATA(GLint,    wstride)
    STACK_FMT_DATA(GLint,    worder)
    STACK_FMT_DATA(GLdouble, points[])
  STACK_FMT_END()

    exdl_glDeformationMap3dSGIX
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(u1)
   ,  STACK_GET_DATA(u2)
   ,  STACK_GET_DATA(ustride)
   ,  STACK_GET_DATA(uorder)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(vstride)
   ,  STACK_GET_DATA(vorder)
   ,  STACK_GET_DATA(w1)
   ,  STACK_GET_DATA(w2)
   ,  STACK_GET_DATA(wstride)
   ,  STACK_GET_DATA(worder)
   ,  STACK_GET_ADDR(points)
    );
}

EXDL_API(egl_deformationMap3fSGIX)
{
  /* void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLfloat, u1)
    STACK_FMT_DATA(GLfloat, u2)
    STACK_FMT_DATA(GLint,   ustride)
    STACK_FMT_DATA(GLint,   uorder)
    STACK_FMT_DATA(GLfloat, v1)
    STACK_FMT_DATA(GLfloat, v2)
    STACK_FMT_DATA(GLint,   vstride)
    STACK_FMT_DATA(GLint,   vorder)
    STACK_FMT_DATA(GLfloat, w1)
    STACK_FMT_DATA(GLfloat, w2)
    STACK_FMT_DATA(GLint,   wstride)
    STACK_FMT_DATA(GLint,   worder)
    STACK_FMT_DATA(GLfloat, points[])
  STACK_FMT_END()

    exdl_glDeformationMap3fSGIX
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(u1)
   ,  STACK_GET_DATA(u2)
   ,  STACK_GET_DATA(ustride)
   ,  STACK_GET_DATA(uorder)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(vstride)
   ,  STACK_GET_DATA(vorder)
   ,  STACK_GET_DATA(w1)
   ,  STACK_GET_DATA(w2)
   ,  STACK_GET_DATA(wstride)
   ,  STACK_GET_DATA(worder)
   ,  STACK_GET_ADDR(points)
    );
}

EXDL_API(egl_deformSGIX)
{
  /* void glDeformSGIX(GLbitfield mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbitfield, mask)
  STACK_FMT_END()

    exdl_glDeformSGIX
    ( STACK_GET_DATA(mask)
    );
}

EXDL_API(egl_loadIdentityDeformationMapSGIX)
{
  /* void glLoadIdentityDeformationMapSGIX(GLbitfield mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbitfield, mask)
  STACK_FMT_END()

    exdl_glLoadIdentityDeformationMapSGIX
    ( STACK_GET_DATA(mask)
    );
}

/* GL_SGIX_reference_plane */

EXDL_API(egl_referencePlaneSGIX)
{
  /* void glReferencePlaneSGIX(const GLdouble* equation) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, equation[])
  STACK_FMT_END()

    exdl_glReferencePlaneSGIX
    ( STACK_GET_ADDR(equation)
    );
}

/* GL_SGIX_flush_raster */

EXDL_API(egl_flushRasterSGIX)
{
  /* void glFlushRasterSGIX(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glFlushRasterSGIX
    (
    );
}

/* GL_SGIX_depth_texture */
/* GL_SGIS_fog_function */

EXDL_API(egl_fogFuncSGIS)
{
  /* void glFogFuncSGIS(GLsizei n, const GLfloat* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLfloat, points[])
  STACK_FMT_END()

    exdl_glFogFuncSGIS
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(points)
    );
}

EXDL_API(egl_getFogFuncSGIS)
{
  /* void glGetFogFuncSGIS(GLfloat* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, points[])
  STACK_FMT_END()

    exdl_glGetFogFuncSGIS
    ( STACK_GET_ADDR(points)
    );
}

/* GL_SGIX_fog_offset */
/* GL_HP_image_transform */

EXDL_API(egl_imageTransformParameteriHP)
{
  /* void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glImageTransformParameteriHP
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_imageTransformParameterfHP)
{
  /* void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glImageTransformParameterfHP
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_imageTransformParameterivHP)
{
  /* void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glImageTransformParameterivHP
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_imageTransformParameterfvHP)
{
  /* void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glImageTransformParameterfvHP
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getImageTransformParameterivHP)
{
  /* void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetImageTransformParameterivHP
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getImageTransformParameterfvHP)
{
  /* void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetImageTransformParameterfvHP
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_HP_convolution_border_modes */
/* GL_SGIX_texture_add_env */
/* GL_EXT_color_subtable */

EXDL_API(egl_colorSubTableEXT)
{
  /* void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, start)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glColorSubTableEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_copyColorSubTableEXT)
{
  /* void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, start)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glCopyColorSubTableEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
    );
}

/* GL_PGI_vertex_hints */
/* GL_PGI_misc_hints */

EXDL_API(egl_hintPGI)
{
  /* void glHintPGI(GLenum target, GLint mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  mode)
  STACK_FMT_END()

    exdl_glHintPGI
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(mode)
    );
}

/* GL_EXT_paletted_texture */

EXDL_API(egl_colorTableEXT)
{
  /* void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid* table) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalFormat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, table)
  STACK_FMT_END()

    exdl_glColorTableEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalFormat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(table)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getColorTableEXT)
{
  /* void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, data)
  STACK_FMT_END()

    exdl_glGetColorTableEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getColorTableParameterivEXT)
{
  /* void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetColorTableParameterivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getColorTableParameterfvEXT)
{
  /* void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetColorTableParameterfvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_EXT_clip_volume_hint */
/* GL_SGIX_list_priority */

EXDL_API(egl_getListParameterfvSGIX)
{
  /* void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  list)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetListParameterfvSGIX
    ( STACK_GET_DATA(list)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getListParameterivSGIX)
{
  /* void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, list)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetListParameterivSGIX
    ( STACK_GET_DATA(list)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_listParameterfSGIX)
{
  /* void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  list)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glListParameterfSGIX
    ( STACK_GET_DATA(list)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_listParameterfvSGIX)
{
  /* void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  list)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glListParameterfvSGIX
    ( STACK_GET_DATA(list)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_listParameteriSGIX)
{
  /* void glListParameteriSGIX(GLuint list, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, list)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glListParameteriSGIX
    ( STACK_GET_DATA(list)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_listParameterivSGIX)
{
  /* void glListParameterivSGIX(GLuint list, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, list)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glListParameterivSGIX
    ( STACK_GET_DATA(list)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_SGIX_ir_instrument1 */
/* GL_SGIX_calligraphic_fragment */
/* GL_SGIX_texture_lod_bias */
/* GL_SGIX_shadow_ambient */
/* GL_EXT_index_texture */
/* GL_EXT_index_material */

EXDL_API(egl_indexMaterialEXT)
{
  /* void glIndexMaterialEXT(GLenum face, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glIndexMaterialEXT
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(mode)
    );
}

/* GL_EXT_index_func */

EXDL_API(egl_indexFuncEXT)
{
  /* void glIndexFuncEXT(GLenum func, GLclampf ref) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   func)
    STACK_FMT_DATA(GLclampf, ref)
  STACK_FMT_END()

    exdl_glIndexFuncEXT
    ( STACK_GET_DATA(func)
   ,  STACK_GET_DATA(ref)
    );
}

/* GL_EXT_index_array_formats */
/* GL_EXT_compiled_vertex_array */

EXDL_API(egl_lockArraysEXT)
{
  /* void glLockArraysEXT(GLint first, GLsizei count) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   first)
    STACK_FMT_DATA(GLsizei, count)
  STACK_FMT_END()

    exdl_glLockArraysEXT
    ( STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
    );
}

EXDL_API(egl_unlockArraysEXT)
{
  /* void glUnlockArraysEXT(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glUnlockArraysEXT
    (
    );
}

/* GL_EXT_cull_vertex */

EXDL_API(egl_cullParameterdvEXT)
{
  /* void glCullParameterdvEXT(GLenum pname, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLdouble, params[])
  STACK_FMT_END()

    exdl_glCullParameterdvEXT
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_cullParameterfvEXT)
{
  /* void glCullParameterfvEXT(GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glCullParameterfvEXT
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_SGIX_ycrcb */
/* GL_SGIX_fragment_lighting */

EXDL_API(egl_fragmentColorMaterialSGIX)
{
  /* void glFragmentColorMaterialSGIX(GLenum face, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glFragmentColorMaterialSGIX
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_fragmentLightfSGIX)
{
  /* void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  light)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glFragmentLightfSGIX
    ( STACK_GET_DATA(light)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_fragmentLightfvSGIX)
{
  /* void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  light)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glFragmentLightfvSGIX
    ( STACK_GET_DATA(light)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_fragmentLightiSGIX)
{
  /* void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, light)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glFragmentLightiSGIX
    ( STACK_GET_DATA(light)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_fragmentLightivSGIX)
{
  /* void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, light)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glFragmentLightivSGIX
    ( STACK_GET_DATA(light)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_fragmentLightModelfSGIX)
{
  /* void glFragmentLightModelfSGIX(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glFragmentLightModelfSGIX
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_fragmentLightModelfvSGIX)
{
  /* void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glFragmentLightModelfvSGIX
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_fragmentLightModeliSGIX)
{
  /* void glFragmentLightModeliSGIX(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glFragmentLightModeliSGIX
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_fragmentLightModelivSGIX)
{
  /* void glFragmentLightModelivSGIX(GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glFragmentLightModelivSGIX
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_fragmentMaterialfSGIX)
{
  /* void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  face)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glFragmentMaterialfSGIX
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_fragmentMaterialfvSGIX)
{
  /* void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  face)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glFragmentMaterialfvSGIX
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_fragmentMaterialiSGIX)
{
  /* void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glFragmentMaterialiSGIX
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_fragmentMaterialivSGIX)
{
  /* void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glFragmentMaterialivSGIX
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getFragmentLightfvSGIX)
{
  /* void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  light)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetFragmentLightfvSGIX
    ( STACK_GET_DATA(light)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getFragmentLightivSGIX)
{
  /* void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, light)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetFragmentLightivSGIX
    ( STACK_GET_DATA(light)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getFragmentMaterialfvSGIX)
{
  /* void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  face)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetFragmentMaterialfvSGIX
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getFragmentMaterialivSGIX)
{
  /* void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetFragmentMaterialivSGIX
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_lightEnviSGIX)
{
  /* void glLightEnviSGIX(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glLightEnviSGIX
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

/* GL_IBM_rasterpos_clip */
/* GL_HP_texture_lighting */
/* GL_EXT_draw_range_elements */

EXDL_API(egl_drawRangeElementsEXT)
{
  /* void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLuint,  start)
    STACK_FMT_DATA(GLuint,  end)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, indices)
  STACK_FMT_END()

    exdl_glDrawRangeElementsEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(end)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(indices)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_WIN_phong_shading */
/* GL_WIN_specular_fog */
/* GL_EXT_light_texture */

EXDL_API(egl_applyTextureEXT)
{
  /* void glApplyTextureEXT(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glApplyTextureEXT
    ( STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_textureLightEXT)
{
  /* void glTextureLightEXT(GLenum pname) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

    exdl_glTextureLightEXT
    ( STACK_GET_DATA(pname)
    );
}

EXDL_API(egl_textureMaterialEXT)
{
  /* void glTextureMaterialEXT(GLenum face, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glTextureMaterialEXT
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(mode)
    );
}

/* GL_SGIX_blend_alpha_minmax */
/* GL_EXT_bgra */
/* GL_SGIX_async */

EXDL_API(egl_asyncMarkerSGIX)
{
  /* void glAsyncMarkerSGIX(GLuint marker) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, marker)
  STACK_FMT_END()

    exdl_glAsyncMarkerSGIX
    ( STACK_GET_DATA(marker)
    );
}

EXDL_API(egl_finishAsyncSGIX)
{
  /* GLint glFinishAsyncSGIX(GLuint* markerp) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, markerp[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glFinishAsyncSGIX
    ( STACK_GET_ADDR(markerp)
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_pollAsyncSGIX)
{
  /* GLint glPollAsyncSGIX(GLuint* markerp) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, markerp[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glPollAsyncSGIX
    ( STACK_GET_ADDR(markerp)
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_genAsyncMarkersSGIX)
{
  /* GLuint glGenAsyncMarkersSGIX(GLsizei range) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, range)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glGenAsyncMarkersSGIX
    ( STACK_GET_DATA(range)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_deleteAsyncMarkersSGIX)
{
  /* void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  marker)
    STACK_FMT_DATA(GLsizei, range)
  STACK_FMT_END()

    exdl_glDeleteAsyncMarkersSGIX
    ( STACK_GET_DATA(marker)
   ,  STACK_GET_DATA(range)
    );
}

EXDL_API(egl_isAsyncMarkerSGIX)
{
  /* GLboolean glIsAsyncMarkerSGIX(GLuint marker) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, marker)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsAsyncMarkerSGIX
    ( STACK_GET_DATA(marker)
    );

  THROW_RESULT(GLboolean)
}

/* GL_SGIX_async_pixel */
/* GL_SGIX_async_histogram */
/* GL_INTEL_parallel_arrays */

EXDL_API(egl_vertexPointervINTEL)
{
  /* void glVertexPointervINTEL(GLint size, GLenum type, const GLvoid** pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLvoid**, pointer)
  STACK_FMT_END()

    exdl_glVertexPointervINTEL
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
    );
}

EXDL_API(egl_normalPointervINTEL)
{
  /* void glNormalPointervINTEL(GLenum type, const GLvoid** pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLvoid**, pointer)
  STACK_FMT_END()

    exdl_glNormalPointervINTEL
    ( STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
    );
}

EXDL_API(egl_colorPointervINTEL)
{
  /* void glColorPointervINTEL(GLint size, GLenum type, const GLvoid** pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLvoid**, pointer)
  STACK_FMT_END()

    exdl_glColorPointervINTEL
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
    );
}

EXDL_API(egl_texCoordPointervINTEL)
{
  /* void glTexCoordPointervINTEL(GLint size, GLenum type, const GLvoid** pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLvoid**, pointer)
  STACK_FMT_END()

    exdl_glTexCoordPointervINTEL
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
    );
}

/* GL_HP_occlusion_test */
/* GL_EXT_pixel_transform */

EXDL_API(egl_pixelTransformParameteriEXT)
{
  /* void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glPixelTransformParameteriEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pixelTransformParameterfEXT)
{
  /* void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glPixelTransformParameterfEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pixelTransformParameterivEXT)
{
  /* void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glPixelTransformParameterivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_pixelTransformParameterfvEXT)
{
  /* void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glPixelTransformParameterfvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_EXT_pixel_transform_color_table */
/* GL_EXT_shared_texture_palette */
/* GL_EXT_separate_specular_color */
/* GL_EXT_secondary_color */

EXDL_API(egl_secondaryColor3bEXT)
{
  /* void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbyte, red)
    STACK_FMT_DATA(GLbyte, green)
    STACK_FMT_DATA(GLbyte, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3bEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3bvEXT)
{
  /* void glSecondaryColor3bvEXT(const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbyte, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3bvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3dEXT)
{
  /* void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, red)
    STACK_FMT_DATA(GLdouble, green)
    STACK_FMT_DATA(GLdouble, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3dEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3dvEXT)
{
  /* void glSecondaryColor3dvEXT(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3dvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3fEXT)
{
  /* void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, red)
    STACK_FMT_DATA(GLfloat, green)
    STACK_FMT_DATA(GLfloat, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3fEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3fvEXT)
{
  /* void glSecondaryColor3fvEXT(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3fvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3iEXT)
{
  /* void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, red)
    STACK_FMT_DATA(GLint, green)
    STACK_FMT_DATA(GLint, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3iEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3ivEXT)
{
  /* void glSecondaryColor3ivEXT(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3ivEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3sEXT)
{
  /* void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, red)
    STACK_FMT_DATA(GLshort, green)
    STACK_FMT_DATA(GLshort, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3sEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3svEXT)
{
  /* void glSecondaryColor3svEXT(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3svEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3ubEXT)
{
  /* void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte, red)
    STACK_FMT_DATA(GLubyte, green)
    STACK_FMT_DATA(GLubyte, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3ubEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3ubvEXT)
{
  /* void glSecondaryColor3ubvEXT(const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3ubvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3uiEXT)
{
  /* void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, red)
    STACK_FMT_DATA(GLuint, green)
    STACK_FMT_DATA(GLuint, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3uiEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3uivEXT)
{
  /* void glSecondaryColor3uivEXT(const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3uivEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColor3usEXT)
{
  /* void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLushort, red)
    STACK_FMT_DATA(GLushort, green)
    STACK_FMT_DATA(GLushort, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3usEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3usvEXT)
{
  /* void glSecondaryColor3usvEXT(const GLushort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLushort, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3usvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_secondaryColorPointerEXT)
{
  /* void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glSecondaryColorPointerEXT
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_EXT_texture_perturb_normal */

EXDL_API(egl_textureNormalEXT)
{
  /* void glTextureNormalEXT(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glTextureNormalEXT
    ( STACK_GET_DATA(mode)
    );
}

/* GL_EXT_multi_draw_arrays */

EXDL_API(egl_multiDrawArraysEXT)
{
  /* void glMultiDrawArraysEXT(GLenum mode, const GLint* first, const GLsizei* count, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_LPTR(GLint*,   first)
    STACK_FMT_LPTR(GLsizei*, count)
    STACK_FMT_DATA(GLsizei,  primcount)
  STACK_FMT_END()

    exdl_glMultiDrawArraysEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(primcount)
    );
}

EXDL_API(egl_multiDrawElementsEXT)
{
  /* void glMultiDrawElementsEXT(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLsizei*, count)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLvoid**, indices)
    STACK_FMT_DATA(GLsizei,  primcount)
  STACK_FMT_END()

    exdl_glMultiDrawElementsEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(indices)
  : (GLvoid**) sd->bin[0].base
   ,  STACK_GET_DATA(primcount)
    );
}

/* GL_EXT_fog_coord */

EXDL_API(egl_fogCoordfEXT)
{
  /* void glFogCoordfEXT(GLfloat coord) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, coord)
  STACK_FMT_END()

    exdl_glFogCoordfEXT
    ( STACK_GET_DATA(coord)
    );
}

EXDL_API(egl_fogCoordfvEXT)
{
  /* void glFogCoordfvEXT(const GLfloat* coord) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, coord[])
  STACK_FMT_END()

    exdl_glFogCoordfvEXT
    ( STACK_GET_ADDR(coord)
    );
}

EXDL_API(egl_fogCoorddEXT)
{
  /* void glFogCoorddEXT(GLdouble coord) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, coord)
  STACK_FMT_END()

    exdl_glFogCoorddEXT
    ( STACK_GET_DATA(coord)
    );
}

EXDL_API(egl_fogCoorddvEXT)
{
  /* void glFogCoorddvEXT(const GLdouble* coord) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, coord[])
  STACK_FMT_END()

    exdl_glFogCoorddvEXT
    ( STACK_GET_ADDR(coord)
    );
}

EXDL_API(egl_fogCoordPointerEXT)
{
  /* void glFogCoordPointerEXT(GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid, pointer[])
  STACK_FMT_END()

    exdl_glFogCoordPointerEXT
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_REND_screen_coordinates */
/* GL_EXT_coordinate_frame */

EXDL_API(egl_tangent3bEXT)
{
  /* void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbyte, tx)
    STACK_FMT_DATA(GLbyte, ty)
    STACK_FMT_DATA(GLbyte, tz)
  STACK_FMT_END()

    exdl_glTangent3bEXT
    ( STACK_GET_DATA(tx)
   ,  STACK_GET_DATA(ty)
   ,  STACK_GET_DATA(tz)
    );
}

EXDL_API(egl_tangent3bvEXT)
{
  /* void glTangent3bvEXT(const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbyte, v[])
  STACK_FMT_END()

    exdl_glTangent3bvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_tangent3dEXT)
{
  /* void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, tx)
    STACK_FMT_DATA(GLdouble, ty)
    STACK_FMT_DATA(GLdouble, tz)
  STACK_FMT_END()

    exdl_glTangent3dEXT
    ( STACK_GET_DATA(tx)
   ,  STACK_GET_DATA(ty)
   ,  STACK_GET_DATA(tz)
    );
}

EXDL_API(egl_tangent3dvEXT)
{
  /* void glTangent3dvEXT(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glTangent3dvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_tangent3fEXT)
{
  /* void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, tx)
    STACK_FMT_DATA(GLfloat, ty)
    STACK_FMT_DATA(GLfloat, tz)
  STACK_FMT_END()

    exdl_glTangent3fEXT
    ( STACK_GET_DATA(tx)
   ,  STACK_GET_DATA(ty)
   ,  STACK_GET_DATA(tz)
    );
}

EXDL_API(egl_tangent3fvEXT)
{
  /* void glTangent3fvEXT(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glTangent3fvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_tangent3iEXT)
{
  /* void glTangent3iEXT(GLint tx, GLint ty, GLint tz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, tx)
    STACK_FMT_DATA(GLint, ty)
    STACK_FMT_DATA(GLint, tz)
  STACK_FMT_END()

    exdl_glTangent3iEXT
    ( STACK_GET_DATA(tx)
   ,  STACK_GET_DATA(ty)
   ,  STACK_GET_DATA(tz)
    );
}

EXDL_API(egl_tangent3ivEXT)
{
  /* void glTangent3ivEXT(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[])
  STACK_FMT_END()

    exdl_glTangent3ivEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_tangent3sEXT)
{
  /* void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, tx)
    STACK_FMT_DATA(GLshort, ty)
    STACK_FMT_DATA(GLshort, tz)
  STACK_FMT_END()

    exdl_glTangent3sEXT
    ( STACK_GET_DATA(tx)
   ,  STACK_GET_DATA(ty)
   ,  STACK_GET_DATA(tz)
    );
}

EXDL_API(egl_tangent3svEXT)
{
  /* void glTangent3svEXT(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glTangent3svEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_binormal3bEXT)
{
  /* void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbyte, bx)
    STACK_FMT_DATA(GLbyte, by)
    STACK_FMT_DATA(GLbyte, bz)
  STACK_FMT_END()

    exdl_glBinormal3bEXT
    ( STACK_GET_DATA(bx)
   ,  STACK_GET_DATA(by)
   ,  STACK_GET_DATA(bz)
    );
}

EXDL_API(egl_binormal3bvEXT)
{
  /* void glBinormal3bvEXT(const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbyte, v[])
  STACK_FMT_END()

    exdl_glBinormal3bvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_binormal3dEXT)
{
  /* void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, bx)
    STACK_FMT_DATA(GLdouble, by)
    STACK_FMT_DATA(GLdouble, bz)
  STACK_FMT_END()

    exdl_glBinormal3dEXT
    ( STACK_GET_DATA(bx)
   ,  STACK_GET_DATA(by)
   ,  STACK_GET_DATA(bz)
    );
}

EXDL_API(egl_binormal3dvEXT)
{
  /* void glBinormal3dvEXT(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glBinormal3dvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_binormal3fEXT)
{
  /* void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, bx)
    STACK_FMT_DATA(GLfloat, by)
    STACK_FMT_DATA(GLfloat, bz)
  STACK_FMT_END()

    exdl_glBinormal3fEXT
    ( STACK_GET_DATA(bx)
   ,  STACK_GET_DATA(by)
   ,  STACK_GET_DATA(bz)
    );
}

EXDL_API(egl_binormal3fvEXT)
{
  /* void glBinormal3fvEXT(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glBinormal3fvEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_binormal3iEXT)
{
  /* void glBinormal3iEXT(GLint bx, GLint by, GLint bz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, bx)
    STACK_FMT_DATA(GLint, by)
    STACK_FMT_DATA(GLint, bz)
  STACK_FMT_END()

    exdl_glBinormal3iEXT
    ( STACK_GET_DATA(bx)
   ,  STACK_GET_DATA(by)
   ,  STACK_GET_DATA(bz)
    );
}

EXDL_API(egl_binormal3ivEXT)
{
  /* void glBinormal3ivEXT(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[])
  STACK_FMT_END()

    exdl_glBinormal3ivEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_binormal3sEXT)
{
  /* void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, bx)
    STACK_FMT_DATA(GLshort, by)
    STACK_FMT_DATA(GLshort, bz)
  STACK_FMT_END()

    exdl_glBinormal3sEXT
    ( STACK_GET_DATA(bx)
   ,  STACK_GET_DATA(by)
   ,  STACK_GET_DATA(bz)
    );
}

EXDL_API(egl_binormal3svEXT)
{
  /* void glBinormal3svEXT(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glBinormal3svEXT
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_tangentPointerEXT)
{
  /* void glTangentPointerEXT(GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glTangentPointerEXT
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_binormalPointerEXT)
{
  /* void glBinormalPointerEXT(GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glBinormalPointerEXT
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_EXT_texture_env_combine */
/* GL_APPLE_specular_vector */
/* GL_APPLE_transform_hint */
/* GL_SGIX_fog_scale */
/* GL_SUNX_constant_data */

EXDL_API(egl_finishTextureSUNX)
{
  /* void glFinishTextureSUNX(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glFinishTextureSUNX
    (
    );
}

/* GL_SUN_global_alpha */

EXDL_API(egl_globalAlphaFactorbSUN)
{
  /* void glGlobalAlphaFactorbSUN(GLbyte factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbyte, factor)
  STACK_FMT_END()

    exdl_glGlobalAlphaFactorbSUN
    ( STACK_GET_DATA(factor)
    );
}

EXDL_API(egl_globalAlphaFactorsSUN)
{
  /* void glGlobalAlphaFactorsSUN(GLshort factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, factor)
  STACK_FMT_END()

    exdl_glGlobalAlphaFactorsSUN
    ( STACK_GET_DATA(factor)
    );
}

EXDL_API(egl_globalAlphaFactoriSUN)
{
  /* void glGlobalAlphaFactoriSUN(GLint factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, factor)
  STACK_FMT_END()

    exdl_glGlobalAlphaFactoriSUN
    ( STACK_GET_DATA(factor)
    );
}

EXDL_API(egl_globalAlphaFactorfSUN)
{
  /* void glGlobalAlphaFactorfSUN(GLfloat factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, factor)
  STACK_FMT_END()

    exdl_glGlobalAlphaFactorfSUN
    ( STACK_GET_DATA(factor)
    );
}

EXDL_API(egl_globalAlphaFactordSUN)
{
  /* void glGlobalAlphaFactordSUN(GLdouble factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, factor)
  STACK_FMT_END()

    exdl_glGlobalAlphaFactordSUN
    ( STACK_GET_DATA(factor)
    );
}

EXDL_API(egl_globalAlphaFactorubSUN)
{
  /* void glGlobalAlphaFactorubSUN(GLubyte factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte, factor)
  STACK_FMT_END()

    exdl_glGlobalAlphaFactorubSUN
    ( STACK_GET_DATA(factor)
    );
}

EXDL_API(egl_globalAlphaFactorusSUN)
{
  /* void glGlobalAlphaFactorusSUN(GLushort factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLushort, factor)
  STACK_FMT_END()

    exdl_glGlobalAlphaFactorusSUN
    ( STACK_GET_DATA(factor)
    );
}

EXDL_API(egl_globalAlphaFactoruiSUN)
{
  /* void glGlobalAlphaFactoruiSUN(GLuint factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, factor)
  STACK_FMT_END()

    exdl_glGlobalAlphaFactoruiSUN
    ( STACK_GET_DATA(factor)
    );
}

/* GL_SUN_triangle_list */

EXDL_API(egl_replacementCodeuiSUN)
{
  /* void glReplacementCodeuiSUN(GLuint code) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, code)
  STACK_FMT_END()

    exdl_glReplacementCodeuiSUN
    ( STACK_GET_DATA(code)
    );
}

EXDL_API(egl_replacementCodeusSUN)
{
  /* void glReplacementCodeusSUN(GLushort code) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLushort, code)
  STACK_FMT_END()

    exdl_glReplacementCodeusSUN
    ( STACK_GET_DATA(code)
    );
}

EXDL_API(egl_replacementCodeubSUN)
{
  /* void glReplacementCodeubSUN(GLubyte code) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte, code)
  STACK_FMT_END()

    exdl_glReplacementCodeubSUN
    ( STACK_GET_DATA(code)
    );
}

EXDL_API(egl_replacementCodeuivSUN)
{
  /* void glReplacementCodeuivSUN(const GLuint* code) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, code[])
  STACK_FMT_END()

    exdl_glReplacementCodeuivSUN
    ( STACK_GET_ADDR(code)
    );
}

EXDL_API(egl_replacementCodeusvSUN)
{
  /* void glReplacementCodeusvSUN(const GLushort* code) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLushort, code[])
  STACK_FMT_END()

    exdl_glReplacementCodeusvSUN
    ( STACK_GET_ADDR(code)
    );
}

EXDL_API(egl_replacementCodeubvSUN)
{
  /* void glReplacementCodeubvSUN(const GLubyte* code) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte, code[])
  STACK_FMT_END()

    exdl_glReplacementCodeubvSUN
    ( STACK_GET_ADDR(code)
    );
}

EXDL_API(egl_replacementCodePointerSUN)
{
  /* void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const GLvoid** pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLsizei,  stride)
    STACK_FMT_DATA(GLvoid**, pointer)
  STACK_FMT_END()

    exdl_glReplacementCodePointerSUN
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
    );
}

/* GL_SUN_vertex */

EXDL_API(egl_color4ubVertex2fSUN)
{
  /* void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte, r)
    STACK_FMT_DATA(GLubyte, g)
    STACK_FMT_DATA(GLubyte, b)
    STACK_FMT_DATA(GLubyte, a)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
  STACK_FMT_END()

    exdl_glColor4ubVertex2fSUN
    ( STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_color4ubVertex2fvSUN)
{
  /* void glColor4ubVertex2fvSUN(const GLubyte* c, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte*, c)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glColor4ubVertex2fvSUN
    ( STACK_GET_DATA(c)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_color4ubVertex3fSUN)
{
  /* void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte, r)
    STACK_FMT_DATA(GLubyte, g)
    STACK_FMT_DATA(GLubyte, b)
    STACK_FMT_DATA(GLubyte, a)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glColor4ubVertex3fSUN
    ( STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_color4ubVertex3fvSUN)
{
  /* void glColor4ubVertex3fvSUN(const GLubyte* c, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLubyte*, c)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glColor4ubVertex3fvSUN
    ( STACK_GET_DATA(c)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_color3fVertex3fSUN)
{
  /* void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, g)
    STACK_FMT_DATA(GLfloat, b)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glColor3fVertex3fSUN
    ( STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_color3fVertex3fvSUN)
{
  /* void glColor3fVertex3fvSUN(const GLfloat* c, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, c)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glColor3fVertex3fvSUN
    ( STACK_GET_DATA(c)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_normal3fVertex3fSUN)
{
  /* void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glNormal3fVertex3fSUN
    ( STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_normal3fVertex3fvSUN)
{
  /* void glNormal3fVertex3fvSUN(const GLfloat* n, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, n)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glNormal3fVertex3fvSUN
    ( STACK_GET_DATA(n)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_color4fNormal3fVertex3fSUN)
{
  /* void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, g)
    STACK_FMT_DATA(GLfloat, b)
    STACK_FMT_DATA(GLfloat, a)
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glColor4fNormal3fVertex3fSUN
    ( STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_color4fNormal3fVertex3fvSUN)
{
  /* void glColor4fNormal3fVertex3fvSUN(const GLfloat* c, const GLfloat* n, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, c)
    STACK_FMT_DATA(GLfloat*, n)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glColor4fNormal3fVertex3fvSUN
    ( STACK_GET_DATA(c)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_texCoord2fVertex3fSUN)
{
  /* void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glTexCoord2fVertex3fSUN
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_texCoord2fVertex3fvSUN)
{
  /* void glTexCoord2fVertex3fvSUN(const GLfloat* tc, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glTexCoord2fVertex3fvSUN
    ( STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_texCoord4fVertex4fSUN)
{
  /* void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, p)
    STACK_FMT_DATA(GLfloat, q)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glTexCoord4fVertex4fSUN
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(p)
   ,  STACK_GET_DATA(q)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_texCoord4fVertex4fvSUN)
{
  /* void glTexCoord4fVertex4fvSUN(const GLfloat* tc, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glTexCoord4fVertex4fvSUN
    ( STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_texCoord2fColor4ubVertex3fSUN)
{
  /* void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLubyte, r)
    STACK_FMT_DATA(GLubyte, g)
    STACK_FMT_DATA(GLubyte, b)
    STACK_FMT_DATA(GLubyte, a)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glTexCoord2fColor4ubVertex3fSUN
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_texCoord2fColor4ubVertex3fvSUN)
{
  /* void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat* tc, const GLubyte* c, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLubyte*, c)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glTexCoord2fColor4ubVertex3fvSUN
    ( STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(c)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_texCoord2fColor3fVertex3fSUN)
{
  /* void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, g)
    STACK_FMT_DATA(GLfloat, b)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glTexCoord2fColor3fVertex3fSUN
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_texCoord2fColor3fVertex3fvSUN)
{
  /* void glTexCoord2fColor3fVertex3fvSUN(const GLfloat* tc, const GLfloat* c, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLfloat*, c)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glTexCoord2fColor3fVertex3fvSUN
    ( STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(c)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_texCoord2fNormal3fVertex3fSUN)
{
  /* void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glTexCoord2fNormal3fVertex3fSUN
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_texCoord2fNormal3fVertex3fvSUN)
{
  /* void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat* tc, const GLfloat* n, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLfloat*, n)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glTexCoord2fNormal3fVertex3fvSUN
    ( STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_texCoord2fColor4fNormal3fVertex3fSUN)
{
  /* void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, g)
    STACK_FMT_DATA(GLfloat, b)
    STACK_FMT_DATA(GLfloat, a)
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glTexCoord2fColor4fNormal3fVertex3fSUN
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_texCoord2fColor4fNormal3fVertex3fvSUN)
{
  /* void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat* tc, const GLfloat* c, const GLfloat* n, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLfloat*, c)
    STACK_FMT_DATA(GLfloat*, n)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glTexCoord2fColor4fNormal3fVertex3fvSUN
    ( STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(c)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_texCoord4fColor4fNormal3fVertex4fSUN)
{
  /* void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, p)
    STACK_FMT_DATA(GLfloat, q)
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, g)
    STACK_FMT_DATA(GLfloat, b)
    STACK_FMT_DATA(GLfloat, a)
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glTexCoord4fColor4fNormal3fVertex4fSUN
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(p)
   ,  STACK_GET_DATA(q)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_texCoord4fColor4fNormal3fVertex4fvSUN)
{
  /* void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat* tc, const GLfloat* c, const GLfloat* n, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLfloat*, c)
    STACK_FMT_DATA(GLfloat*, n)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glTexCoord4fColor4fNormal3fVertex4fvSUN
    ( STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(c)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_replacementCodeuiVertex3fSUN)
{
  /* void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  rc)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glReplacementCodeuiVertex3fSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_replacementCodeuiVertex3fvSUN)
{
  /* void glReplacementCodeuiVertex3fvSUN(const GLuint* rc, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint*,  rc)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glReplacementCodeuiVertex3fvSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_replacementCodeuiColor4ubVertex3fSUN)
{
  /* void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  rc)
    STACK_FMT_DATA(GLubyte, r)
    STACK_FMT_DATA(GLubyte, g)
    STACK_FMT_DATA(GLubyte, b)
    STACK_FMT_DATA(GLubyte, a)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glReplacementCodeuiColor4ubVertex3fSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_replacementCodeuiColor4ubVertex3fvSUN)
{
  /* void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint* rc, const GLubyte* c, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint*,  rc)
    STACK_FMT_DATA(GLubyte*, c)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glReplacementCodeuiColor4ubVertex3fvSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(c)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_replacementCodeuiColor3fVertex3fSUN)
{
  /* void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  rc)
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, g)
    STACK_FMT_DATA(GLfloat, b)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glReplacementCodeuiColor3fVertex3fSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_replacementCodeuiColor3fVertex3fvSUN)
{
  /* void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint* rc, const GLfloat* c, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint*,  rc)
    STACK_FMT_DATA(GLfloat*, c)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glReplacementCodeuiColor3fVertex3fvSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(c)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_replacementCodeuiNormal3fVertex3fSUN)
{
  /* void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  rc)
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glReplacementCodeuiNormal3fVertex3fSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_replacementCodeuiNormal3fVertex3fvSUN)
{
  /* void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint* rc, const GLfloat* n, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint*,  rc)
    STACK_FMT_DATA(GLfloat*, n)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glReplacementCodeuiNormal3fVertex3fvSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_replacementCodeuiColor4fNormal3fVertex3fSUN)
{
  /* void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  rc)
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, g)
    STACK_FMT_DATA(GLfloat, b)
    STACK_FMT_DATA(GLfloat, a)
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glReplacementCodeuiColor4fNormal3fVertex3fSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_replacementCodeuiColor4fNormal3fVertex3fvSUN)
{
  /* void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint* rc, const GLfloat* c, const GLfloat* n, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint*,  rc)
    STACK_FMT_DATA(GLfloat*, c)
    STACK_FMT_DATA(GLfloat*, n)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glReplacementCodeuiColor4fNormal3fVertex3fvSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(c)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_replacementCodeuiTexCoord2fVertex3fSUN)
{
  /* void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  rc)
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glReplacementCodeuiTexCoord2fVertex3fSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_replacementCodeuiTexCoord2fVertex3fvSUN)
{
  /* void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint* rc, const GLfloat* tc, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint*,  rc)
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glReplacementCodeuiTexCoord2fVertex3fvSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_replacementCodeuiTexCoord2fNormal3fVertex3fSUN)
{
  /* void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  rc)
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_replacementCodeuiTexCoord2fNormal3fVertex3fvSUN)
{
  /* void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint* rc, const GLfloat* tc, const GLfloat* n, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint*,  rc)
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLfloat*, n)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_replacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN)
{
  /* void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  rc)
    STACK_FMT_DATA(GLfloat, s)
    STACK_FMT_DATA(GLfloat, t)
    STACK_FMT_DATA(GLfloat, r)
    STACK_FMT_DATA(GLfloat, g)
    STACK_FMT_DATA(GLfloat, b)
    STACK_FMT_DATA(GLfloat, a)
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_replacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN)
{
  /* void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint* rc, const GLfloat* tc, const GLfloat* c, const GLfloat* n, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint*,  rc)
    STACK_FMT_DATA(GLfloat*, tc)
    STACK_FMT_DATA(GLfloat*, c)
    STACK_FMT_DATA(GLfloat*, n)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN
    ( STACK_GET_DATA(rc)
   ,  STACK_GET_DATA(tc)
   ,  STACK_GET_DATA(c)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_DATA(v)
    );
}

/* GL_EXT_blend_func_separate */

EXDL_API(egl_blendFuncSeparateEXT)
{
  /* void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, sfactorRGB)
    STACK_FMT_DATA(GLenum, dfactorRGB)
    STACK_FMT_DATA(GLenum, sfactorAlpha)
    STACK_FMT_DATA(GLenum, dfactorAlpha)
  STACK_FMT_END()

    exdl_glBlendFuncSeparateEXT
    ( STACK_GET_DATA(sfactorRGB)
   ,  STACK_GET_DATA(dfactorRGB)
   ,  STACK_GET_DATA(sfactorAlpha)
   ,  STACK_GET_DATA(dfactorAlpha)
    );
}

/* GL_INGR_blend_func_separate */

EXDL_API(egl_blendFuncSeparateINGR)
{
  /* void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, sfactorRGB)
    STACK_FMT_DATA(GLenum, dfactorRGB)
    STACK_FMT_DATA(GLenum, sfactorAlpha)
    STACK_FMT_DATA(GLenum, dfactorAlpha)
  STACK_FMT_END()

    exdl_glBlendFuncSeparateINGR
    ( STACK_GET_DATA(sfactorRGB)
   ,  STACK_GET_DATA(dfactorRGB)
   ,  STACK_GET_DATA(sfactorAlpha)
   ,  STACK_GET_DATA(dfactorAlpha)
    );
}

/* GL_INGR_color_clamp */
/* GL_INGR_interlace_read */
/* GL_EXT_stencil_wrap */
/* GL_EXT_422_pixels */
/* GL_NV_texgen_reflection */
/* GL_SUN_convolution_border_modes */
/* GL_EXT_texture_env_add */
/* GL_EXT_texture_lod_bias */
/* GL_EXT_texture_filter_anisotropic */
/* GL_EXT_vertex_weighting */

EXDL_API(egl_vertexWeightfEXT)
{
  /* void glVertexWeightfEXT(GLfloat weight) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, weight)
  STACK_FMT_END()

    exdl_glVertexWeightfEXT
    ( STACK_GET_DATA(weight)
    );
}

EXDL_API(egl_vertexWeightfvEXT)
{
  /* void glVertexWeightfvEXT(const GLfloat* weight) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, weight[])
  STACK_FMT_END()

    exdl_glVertexWeightfvEXT
    ( STACK_GET_ADDR(weight)
    );
}

EXDL_API(egl_vertexWeightPointerEXT)
{
  /* void glVertexWeightPointerEXT(GLsizei size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glVertexWeightPointerEXT
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_NV_light_max_exponent */
/* GL_NV_vertex_array_range */

EXDL_API(egl_flushVertexArrayRangeNV)
{
  /* void glFlushVertexArrayRangeNV(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glFlushVertexArrayRangeNV
    (
    );
}

EXDL_API(egl_vertexArrayRangeNV)
{
  /* void glVertexArrayRangeNV(GLsizei length, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, length)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glVertexArrayRangeNV
    ( STACK_GET_DATA(length)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_NV_register_combiners */

EXDL_API(egl_combinerParameterfvNV)
{
  /* void glCombinerParameterfvNV(GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glCombinerParameterfvNV
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_combinerParameterfNV)
{
  /* void glCombinerParameterfNV(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glCombinerParameterfNV
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_combinerParameterivNV)
{
  /* void glCombinerParameterivNV(GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glCombinerParameterivNV
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_combinerParameteriNV)
{
  /* void glCombinerParameteriNV(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glCombinerParameteriNV
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_combinerInputNV)
{
  /* void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stage)
    STACK_FMT_DATA(GLenum, portion)
    STACK_FMT_DATA(GLenum, variable)
    STACK_FMT_DATA(GLenum, input)
    STACK_FMT_DATA(GLenum, mapping)
    STACK_FMT_DATA(GLenum, componentUsage)
  STACK_FMT_END()

    exdl_glCombinerInputNV
    ( STACK_GET_DATA(stage)
   ,  STACK_GET_DATA(portion)
   ,  STACK_GET_DATA(variable)
   ,  STACK_GET_DATA(input)
   ,  STACK_GET_DATA(mapping)
   ,  STACK_GET_DATA(componentUsage)
    );
}

EXDL_API(egl_combinerOutputNV)
{
  /* void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    stage)
    STACK_FMT_DATA(GLenum,    portion)
    STACK_FMT_DATA(GLenum,    abOutput)
    STACK_FMT_DATA(GLenum,    cdOutput)
    STACK_FMT_DATA(GLenum,    sumOutput)
    STACK_FMT_DATA(GLenum,    scale)
    STACK_FMT_DATA(GLenum,    bias)
    STACK_FMT_DATA(GLboolean, abDotProduct)
    STACK_FMT_DATA(GLboolean, cdDotProduct)
    STACK_FMT_DATA(GLboolean, muxSum)
  STACK_FMT_END()

    exdl_glCombinerOutputNV
    ( STACK_GET_DATA(stage)
   ,  STACK_GET_DATA(portion)
   ,  STACK_GET_DATA(abOutput)
   ,  STACK_GET_DATA(cdOutput)
   ,  STACK_GET_DATA(sumOutput)
   ,  STACK_GET_DATA(scale)
   ,  STACK_GET_DATA(bias)
   ,  STACK_GET_DATA(abDotProduct)
   ,  STACK_GET_DATA(cdDotProduct)
   ,  STACK_GET_DATA(muxSum)
    );
}

EXDL_API(egl_finalCombinerInputNV)
{
  /* void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, variable)
    STACK_FMT_DATA(GLenum, input)
    STACK_FMT_DATA(GLenum, mapping)
    STACK_FMT_DATA(GLenum, componentUsage)
  STACK_FMT_END()

    exdl_glFinalCombinerInputNV
    ( STACK_GET_DATA(variable)
   ,  STACK_GET_DATA(input)
   ,  STACK_GET_DATA(mapping)
   ,  STACK_GET_DATA(componentUsage)
    );
}

EXDL_API(egl_getCombinerInputParameterfvNV)
{
  /* void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stage)
    STACK_FMT_DATA(GLenum,  portion)
    STACK_FMT_DATA(GLenum,  variable)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetCombinerInputParameterfvNV
    ( STACK_GET_DATA(stage)
   ,  STACK_GET_DATA(portion)
   ,  STACK_GET_DATA(variable)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getCombinerInputParameterivNV)
{
  /* void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stage)
    STACK_FMT_DATA(GLenum, portion)
    STACK_FMT_DATA(GLenum, variable)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetCombinerInputParameterivNV
    ( STACK_GET_DATA(stage)
   ,  STACK_GET_DATA(portion)
   ,  STACK_GET_DATA(variable)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getCombinerOutputParameterfvNV)
{
  /* void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stage)
    STACK_FMT_DATA(GLenum,  portion)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetCombinerOutputParameterfvNV
    ( STACK_GET_DATA(stage)
   ,  STACK_GET_DATA(portion)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getCombinerOutputParameterivNV)
{
  /* void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stage)
    STACK_FMT_DATA(GLenum, portion)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetCombinerOutputParameterivNV
    ( STACK_GET_DATA(stage)
   ,  STACK_GET_DATA(portion)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getFinalCombinerInputParameterfvNV)
{
  /* void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  variable)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetFinalCombinerInputParameterfvNV
    ( STACK_GET_DATA(variable)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getFinalCombinerInputParameterivNV)
{
  /* void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, variable)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetFinalCombinerInputParameterivNV
    ( STACK_GET_DATA(variable)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_NV_fog_distance */
/* GL_NV_texgen_emboss */
/* GL_NV_blend_square */
/* GL_NV_texture_env_combine4 */
/* GL_MESA_resize_buffers */

EXDL_API(egl_resizeBuffersMESA)
{
  /* void glResizeBuffersMESA(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glResizeBuffersMESA
    (
    );
}

/* GL_MESA_window_pos */

EXDL_API(egl_windowPos2dMESA)
{
  /* void glWindowPos2dMESA(GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glWindowPos2dMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2dvMESA)
{
  /* void glWindowPos2dvMESA(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glWindowPos2dvMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos2fMESA)
{
  /* void glWindowPos2fMESA(GLfloat x, GLfloat y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
  STACK_FMT_END()

    exdl_glWindowPos2fMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2fvMESA)
{
  /* void glWindowPos2fvMESA(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glWindowPos2fvMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos2iMESA)
{
  /* void glWindowPos2iMESA(GLint x, GLint y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, x)
    STACK_FMT_DATA(GLint, y)
  STACK_FMT_END()

    exdl_glWindowPos2iMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2ivMESA)
{
  /* void glWindowPos2ivMESA(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[])
  STACK_FMT_END()

    exdl_glWindowPos2ivMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos2sMESA)
{
  /* void glWindowPos2sMESA(GLshort x, GLshort y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
  STACK_FMT_END()

    exdl_glWindowPos2sMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_windowPos2svMESA)
{
  /* void glWindowPos2svMESA(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glWindowPos2svMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3dMESA)
{
  /* void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glWindowPos3dMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3dvMESA)
{
  /* void glWindowPos3dvMESA(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glWindowPos3dvMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3fMESA)
{
  /* void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glWindowPos3fMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3fvMESA)
{
  /* void glWindowPos3fvMESA(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glWindowPos3fvMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3iMESA)
{
  /* void glWindowPos3iMESA(GLint x, GLint y, GLint z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, x)
    STACK_FMT_DATA(GLint, y)
    STACK_FMT_DATA(GLint, z)
  STACK_FMT_END()

    exdl_glWindowPos3iMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3ivMESA)
{
  /* void glWindowPos3ivMESA(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[])
  STACK_FMT_END()

    exdl_glWindowPos3ivMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos3sMESA)
{
  /* void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
  STACK_FMT_END()

    exdl_glWindowPos3sMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_windowPos3svMESA)
{
  /* void glWindowPos3svMESA(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glWindowPos3svMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos4dMESA)
{
  /* void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glWindowPos4dMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_windowPos4dvMESA)
{
  /* void glWindowPos4dvMESA(const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glWindowPos4dvMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos4fMESA)
{
  /* void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glWindowPos4fMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_windowPos4fvMESA)
{
  /* void glWindowPos4fvMESA(const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glWindowPos4fvMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos4iMESA)
{
  /* void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, x)
    STACK_FMT_DATA(GLint, y)
    STACK_FMT_DATA(GLint, z)
    STACK_FMT_DATA(GLint, w)
  STACK_FMT_END()

    exdl_glWindowPos4iMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_windowPos4ivMESA)
{
  /* void glWindowPos4ivMESA(const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, v[])
  STACK_FMT_END()

    exdl_glWindowPos4ivMESA
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_windowPos4sMESA)
{
  /* void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
    STACK_FMT_DATA(GLshort, w)
  STACK_FMT_END()

    exdl_glWindowPos4sMESA
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_windowPos4svMESA)
{
  /* void glWindowPos4svMESA(const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glWindowPos4svMESA
    ( STACK_GET_ADDR(v)
    );
}

/* GL_IBM_cull_vertex */
/* GL_IBM_multimode_draw_arrays */

EXDL_API(egl_multiModeDrawArraysIBM)
{
  /* void glMultiModeDrawArraysIBM(const GLenum* mode, const GLint* first, const GLsizei* count, GLsizei primcount, GLint modestride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum*,  mode)
    STACK_FMT_DATA(GLint*,   first)
    STACK_FMT_DATA(GLsizei*, count)
    STACK_FMT_DATA(GLsizei,  primcount)
    STACK_FMT_DATA(GLint,    modestride)
  STACK_FMT_END()

    exdl_glMultiModeDrawArraysIBM
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(primcount)
   ,  STACK_GET_DATA(modestride)
    );
}

EXDL_API(egl_multiModeDrawElementsIBM)
{
  /* void glMultiModeDrawElementsIBM(const GLenum* mode, const GLsizei* count, GLenum type, const GLvoid* const* indices, GLsizei primcount, GLint modestride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum*,  mode)
    STACK_FMT_DATA(GLsizei*, count)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLvoid*,  indices)
    STACK_FMT_DATA(GLsizei,  primcount)
    STACK_FMT_DATA(GLint,    modestride)
  STACK_FMT_END()

    exdl_glMultiModeDrawElementsIBM
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(indices)
  : (GLvoid*) sd->bin[0].base
   ,  STACK_GET_DATA(primcount)
   ,  STACK_GET_DATA(modestride)
    );
}

/* GL_IBM_vertex_array_lists */

EXDL_API(egl_colorPointerListIBM)
{
  /* void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLint,    stride)
    STACK_FMT_DATA(GLvoid**, pointer)
    STACK_FMT_DATA(GLint,    ptrstride)
  STACK_FMT_END()

    exdl_glColorPointerListIBM
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
   ,  STACK_GET_DATA(ptrstride)
    );
}

EXDL_API(egl_secondaryColorPointerListIBM)
{
  /* void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLint,    stride)
    STACK_FMT_DATA(GLvoid**, pointer)
    STACK_FMT_DATA(GLint,    ptrstride)
  STACK_FMT_END()

    exdl_glSecondaryColorPointerListIBM
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
   ,  STACK_GET_DATA(ptrstride)
    );
}

EXDL_API(egl_edgeFlagPointerListIBM)
{
  /* void glEdgeFlagPointerListIBM(GLint stride, const GLboolean** pointer, GLint ptrstride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       stride)
    STACK_FMT_DATA(GLboolean**, pointer)
    STACK_FMT_DATA(GLint,       ptrstride)
  STACK_FMT_END()

    exdl_glEdgeFlagPointerListIBM
    ( STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(pointer)
   ,  STACK_GET_DATA(ptrstride)
    );
}

EXDL_API(egl_fogCoordPointerListIBM)
{
  /* void glFogCoordPointerListIBM(GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLint,    stride)
    STACK_FMT_DATA(GLvoid**, pointer)
    STACK_FMT_DATA(GLint,    ptrstride)
  STACK_FMT_END()

    exdl_glFogCoordPointerListIBM
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
   ,  STACK_GET_DATA(ptrstride)
    );
}

EXDL_API(egl_indexPointerListIBM)
{
  /* void glIndexPointerListIBM(GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLint,    stride)
    STACK_FMT_DATA(GLvoid**, pointer)
    STACK_FMT_DATA(GLint,    ptrstride)
  STACK_FMT_END()

    exdl_glIndexPointerListIBM
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
   ,  STACK_GET_DATA(ptrstride)
    );
}

EXDL_API(egl_normalPointerListIBM)
{
  /* void glNormalPointerListIBM(GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLint,    stride)
    STACK_FMT_DATA(GLvoid**, pointer)
    STACK_FMT_DATA(GLint,    ptrstride)
  STACK_FMT_END()

    exdl_glNormalPointerListIBM
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
   ,  STACK_GET_DATA(ptrstride)
    );
}

EXDL_API(egl_texCoordPointerListIBM)
{
  /* void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLint,    stride)
    STACK_FMT_DATA(GLvoid**, pointer)
    STACK_FMT_DATA(GLint,    ptrstride)
  STACK_FMT_END()

    exdl_glTexCoordPointerListIBM
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
   ,  STACK_GET_DATA(ptrstride)
    );
}

EXDL_API(egl_vertexPointerListIBM)
{
  /* void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLint,    stride)
    STACK_FMT_DATA(GLvoid**, pointer)
    STACK_FMT_DATA(GLint,    ptrstride)
  STACK_FMT_END()

    exdl_glVertexPointerListIBM
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
   ,  STACK_GET_DATA(ptrstride)
    );
}

/* GL_SGIX_subsample */
/* GL_SGIX_ycrcba */
/* GL_SGIX_ycrcb_subsample */
/* GL_SGIX_depth_pass_instrument */
/* GL_3DFX_texture_compression_FXT1 */
/* GL_3DFX_multisample */
/* GL_3DFX_tbuffer */

EXDL_API(egl_tbufferMask3DFX)
{
  /* void glTbufferMask3DFX(GLuint mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, mask)
  STACK_FMT_END()

    exdl_glTbufferMask3DFX
    ( STACK_GET_DATA(mask)
    );
}

/* GL_EXT_multisample */

EXDL_API(egl_sampleMaskEXT)
{
  /* void glSampleMaskEXT(GLclampf value, GLboolean invert) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLclampf,  value)
    STACK_FMT_DATA(GLboolean, invert)
  STACK_FMT_END()

    exdl_glSampleMaskEXT
    ( STACK_GET_DATA(value)
   ,  STACK_GET_DATA(invert)
    );
}

EXDL_API(egl_samplePatternEXT)
{
  /* void glSamplePatternEXT(GLenum pattern) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pattern)
  STACK_FMT_END()

    exdl_glSamplePatternEXT
    ( STACK_GET_DATA(pattern)
    );
}

/* GL_SGIX_vertex_preclip */
/* GL_SGIX_convolution_accuracy */
/* GL_SGIX_resample */
/* GL_SGIS_point_line_texgen */
/* GL_SGIS_texture_color_mask */

EXDL_API(egl_textureColorMaskSGIS)
{
  /* void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLboolean, red)
    STACK_FMT_DATA(GLboolean, green)
    STACK_FMT_DATA(GLboolean, blue)
    STACK_FMT_DATA(GLboolean, alpha)
  STACK_FMT_END()

    exdl_glTextureColorMaskSGIS
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
   ,  STACK_GET_DATA(alpha)
    );
}

/* GL_SGIX_igloo_interface */

EXDL_API(egl_iglooInterfaceSGIX)
{
  /* void glIglooInterfaceSGIX(GLenum pname, const GLvoid* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLvoid*, params)
  STACK_FMT_END()

    exdl_glIglooInterfaceSGIX
    ( STACK_GET_DATA(pname)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(params)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_EXT_texture_env_dot3 */
/* GL_ATI_texture_mirror_once */
/* GL_NV_fence */

EXDL_API(egl_deleteFencesNV)
{
  /* void glDeleteFencesNV(GLsizei n, const GLuint* fences) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  fences[])
  STACK_FMT_END()

    exdl_glDeleteFencesNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(fences)
    );
}

EXDL_API(egl_genFencesNV)
{
  /* void glGenFencesNV(GLsizei n, GLuint* fences) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  fences[])
  STACK_FMT_END()

    exdl_glGenFencesNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(fences)
    );
}

EXDL_API(egl_isFenceNV)
{
  /* GLboolean glIsFenceNV(GLuint fence) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, fence)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsFenceNV
    ( STACK_GET_DATA(fence)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_testFenceNV)
{
  /* GLboolean glTestFenceNV(GLuint fence) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, fence)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glTestFenceNV
    ( STACK_GET_DATA(fence)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_getFenceivNV)
{
  /* void glGetFenceivNV(GLuint fence, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, fence)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetFenceivNV
    ( STACK_GET_DATA(fence)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_finishFenceNV)
{
  /* void glFinishFenceNV(GLuint fence) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, fence)
  STACK_FMT_END()

    exdl_glFinishFenceNV
    ( STACK_GET_DATA(fence)
    );
}

EXDL_API(egl_setFenceNV)
{
  /* void glSetFenceNV(GLuint fence, GLenum condition) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, fence)
    STACK_FMT_DATA(GLenum, condition)
  STACK_FMT_END()

    exdl_glSetFenceNV
    ( STACK_GET_DATA(fence)
   ,  STACK_GET_DATA(condition)
    );
}

/* GL_NV_evaluators */

EXDL_API(egl_mapControlPointsNV)
{
  /* void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLsizei,   ustride)
    STACK_FMT_DATA(GLsizei,   vstride)
    STACK_FMT_DATA(GLint,     uorder)
    STACK_FMT_DATA(GLint,     vorder)
    STACK_FMT_DATA(GLboolean, packed)
    STACK_FMT_DATA(GLvoid*,   points)
  STACK_FMT_END()

    exdl_glMapControlPointsNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(ustride)
   ,  STACK_GET_DATA(vstride)
   ,  STACK_GET_DATA(uorder)
   ,  STACK_GET_DATA(vorder)
   ,  STACK_GET_DATA(packed)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(points)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_mapParameterivNV)
{
  /* void glMapParameterivNV(GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glMapParameterivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_mapParameterfvNV)
{
  /* void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glMapParameterfvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMapControlPointsNV)
{
  /* void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLsizei,   ustride)
    STACK_FMT_DATA(GLsizei,   vstride)
    STACK_FMT_DATA(GLboolean, packed)
    STACK_FMT_DATA(GLvoid*,   points)
  STACK_FMT_END()

    exdl_glGetMapControlPointsNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(ustride)
   ,  STACK_GET_DATA(vstride)
   ,  STACK_GET_DATA(packed)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(points)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getMapParameterivNV)
{
  /* void glGetMapParameterivNV(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetMapParameterivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMapParameterfvNV)
{
  /* void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetMapParameterfvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMapAttribParameterivNV)
{
  /* void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetMapAttribParameterivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMapAttribParameterfvNV)
{
  /* void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetMapAttribParameterfvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_evalMapsNV)
{
  /* void glEvalMapsNV(GLenum target, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glEvalMapsNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(mode)
    );
}

/* GL_NV_packed_depth_stencil */
/* GL_NV_register_combiners2 */

EXDL_API(egl_combinerStageParameterfvNV)
{
  /* void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stage)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glCombinerStageParameterfvNV
    ( STACK_GET_DATA(stage)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getCombinerStageParameterfvNV)
{
  /* void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stage)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetCombinerStageParameterfvNV
    ( STACK_GET_DATA(stage)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_NV_texture_compression_vtc */
/* GL_NV_texture_rectangle */
/* GL_NV_texture_shader */
/* GL_NV_texture_shader2 */
/* GL_NV_vertex_array_range2 */
/* GL_NV_vertex_program */

EXDL_API(egl_areProgramsResidentNV)
{
  /* GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint* programs, GLboolean* residences) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei,    n)
    STACK_FMT_DATA(GLuint*,    programs)
    STACK_FMT_DATA(GLboolean*, residences)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glAreProgramsResidentNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_DATA(programs)
   ,  STACK_GET_DATA(residences)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_bindProgramNV)
{
  /* void glBindProgramNV(GLenum target, GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glBindProgramNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(id)
    );
}

EXDL_API(egl_deleteProgramsNV)
{
  /* void glDeleteProgramsNV(GLsizei n, const GLuint* programs) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  programs[])
  STACK_FMT_END()

    exdl_glDeleteProgramsNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(programs)
    );
}

EXDL_API(egl_executeProgramNV)
{
  /* void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glExecuteProgramNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(id)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_genProgramsNV)
{
  /* void glGenProgramsNV(GLsizei n, GLuint* programs) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  programs[])
  STACK_FMT_END()

    exdl_glGenProgramsNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(programs)
    );
}

EXDL_API(egl_getProgramParameterdvNV)
{
  /* void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLdouble, params[])
  STACK_FMT_END()

    exdl_glGetProgramParameterdvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getProgramParameterfvNV)
{
  /* void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetProgramParameterfvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getProgramivNV)
{
  /* void glGetProgramivNV(GLuint id, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetProgramivNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getProgramStringNV)
{
  /* void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte* program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLubyte, program[])
  STACK_FMT_END()

    exdl_glGetProgramStringNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(program)
    );
}

EXDL_API(egl_getTrackMatrixivNV)
{
  /* void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, address)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetTrackMatrixivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(address)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVertexAttribdvNV)
{
  /* void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLdouble, params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribdvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVertexAttribfvNV)
{
  /* void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribfvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVertexAttribivNV)
{
  /* void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribivNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVertexAttribPointervNV)
{
  /* void glGetVertexAttribPointervNV(GLuint index, GLenum pname, GLvoid** pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLvoid**, pointer)
  STACK_FMT_END()

    exdl_glGetVertexAttribPointervNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid**) sd->bin[0].base
    );
}

EXDL_API(egl_isProgramNV)
{
  /* GLboolean glIsProgramNV(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsProgramNV
    ( STACK_GET_DATA(id)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_loadProgramNV)
{
  /* void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte* program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLsizei, len)
    STACK_FMT_DATA(GLubyte, program[])
  STACK_FMT_END()

    exdl_glLoadProgramNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(id)
   ,  STACK_GET_DATA(len)
   ,  STACK_GET_ADDR(program)
    );
}

EXDL_API(egl_programParameter4dNV)
{
  /* void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glProgramParameter4dNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programParameter4dvNV)
{
  /* void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glProgramParameter4dvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_programParameter4fNV)
{
  /* void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glProgramParameter4fNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programParameter4fvNV)
{
  /* void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glProgramParameter4fvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_programParameters4dvNV)
{
  /* void glProgramParameters4dvNV(GLenum target, GLuint index, GLuint count, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLuint,   count)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glProgramParameters4dvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_programParameters4fvNV)
{
  /* void glProgramParameters4fvNV(GLenum target, GLuint index, GLuint count, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLuint,  count)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glProgramParameters4fvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_requestResidentProgramsNV)
{
  /* void glRequestResidentProgramsNV(GLsizei n, const GLuint* programs) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  programs[])
  STACK_FMT_END()

    exdl_glRequestResidentProgramsNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(programs)
    );
}

EXDL_API(egl_trackMatrixNV)
{
  /* void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, address)
    STACK_FMT_DATA(GLenum, matrix)
    STACK_FMT_DATA(GLenum, transform)
  STACK_FMT_END()

    exdl_glTrackMatrixNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(address)
   ,  STACK_GET_DATA(matrix)
   ,  STACK_GET_DATA(transform)
    );
}

EXDL_API(egl_vertexAttribPointerNV)
{
  /* void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLint,   fsize)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glVertexAttribPointerNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(fsize)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_vertexAttrib1dNV)
{
  /* void glVertexAttrib1dNV(GLuint index, GLdouble x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1dNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1dvNV)
{
  /* void glVertexAttrib1dvNV(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib1dvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib1fNV)
{
  /* void glVertexAttrib1fNV(GLuint index, GLfloat x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1fNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1fvNV)
{
  /* void glVertexAttrib1fvNV(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib1fvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib1sNV)
{
  /* void glVertexAttrib1sNV(GLuint index, GLshort x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1sNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1svNV)
{
  /* void glVertexAttrib1svNV(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib1svNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2dNV)
{
  /* void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2dNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2dvNV)
{
  /* void glVertexAttrib2dvNV(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib2dvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2fNV)
{
  /* void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2fNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2fvNV)
{
  /* void glVertexAttrib2fvNV(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib2fvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2sNV)
{
  /* void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2sNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2svNV)
{
  /* void glVertexAttrib2svNV(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib2svNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3dNV)
{
  /* void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3dNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3dvNV)
{
  /* void glVertexAttrib3dvNV(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib3dvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3fNV)
{
  /* void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3fNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3fvNV)
{
  /* void glVertexAttrib3fvNV(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib3fvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3sNV)
{
  /* void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3sNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3svNV)
{
  /* void glVertexAttrib3svNV(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib3svNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4dNV)
{
  /* void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4dNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4dvNV)
{
  /* void glVertexAttrib4dvNV(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4dvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4fNV)
{
  /* void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4fNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4fvNV)
{
  /* void glVertexAttrib4fvNV(GLuint index, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4fvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4sNV)
{
  /* void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
    STACK_FMT_DATA(GLshort, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4sNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4svNV)
{
  /* void glVertexAttrib4svNV(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4svNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4ubNV)
{
  /* void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, x)
    STACK_FMT_DATA(GLubyte, y)
    STACK_FMT_DATA(GLubyte, z)
    STACK_FMT_DATA(GLubyte, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4ubNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4ubvNV)
{
  /* void glVertexAttrib4ubvNV(GLuint index, const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4ubvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs1dvNV)
{
  /* void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs1dvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs1fvNV)
{
  /* void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs1fvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs1svNV)
{
  /* void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs1svNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs2dvNV)
{
  /* void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs2dvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs2fvNV)
{
  /* void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs2fvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs2svNV)
{
  /* void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs2svNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs3dvNV)
{
  /* void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs3dvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs3fvNV)
{
  /* void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs3fvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs3svNV)
{
  /* void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs3svNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs4dvNV)
{
  /* void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  count)
    STACK_FMT_DATA(GLdouble, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs4dvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs4fvNV)
{
  /* void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs4fvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs4svNV)
{
  /* void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs4svNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs4ubvNV)
{
  /* void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLubyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs4ubvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(v)
    );
}

/* GL_SGIX_texture_coordinate_clamp */
/* GL_SGIX_scalebias_hint */
/* GL_OML_interlace */
/* GL_OML_subsample */
/* GL_OML_resample */
/* GL_NV_copy_depth_to_color */
/* GL_ATI_envmap_bumpmap */

EXDL_API(egl_texBumpParameterivATI)
{
  /* void glTexBumpParameterivATI(GLenum pname, const GLint* param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param[])
  STACK_FMT_END()

    exdl_glTexBumpParameterivATI
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(param)
    );
}

EXDL_API(egl_texBumpParameterfvATI)
{
  /* void glTexBumpParameterfvATI(GLenum pname, const GLfloat* param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param[])
  STACK_FMT_END()

    exdl_glTexBumpParameterfvATI
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(param)
    );
}

EXDL_API(egl_getTexBumpParameterivATI)
{
  /* void glGetTexBumpParameterivATI(GLenum pname, GLint* param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

    exdl_glGetTexBumpParameterivATI
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(param)
    );
}

EXDL_API(egl_getTexBumpParameterfvATI)
{
  /* void glGetTexBumpParameterfvATI(GLenum pname, GLfloat* param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param[])
  STACK_FMT_END()

    exdl_glGetTexBumpParameterfvATI
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(param)
    );
}

/* GL_ATI_fragment_shader */

EXDL_API(egl_genFragmentShadersATI)
{
  /* GLuint glGenFragmentShadersATI(GLuint range) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, range)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glGenFragmentShadersATI
    ( STACK_GET_DATA(range)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_bindFragmentShaderATI)
{
  /* void glBindFragmentShaderATI(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glBindFragmentShaderATI
    ( STACK_GET_DATA(id)
    );
}

EXDL_API(egl_deleteFragmentShaderATI)
{
  /* void glDeleteFragmentShaderATI(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glDeleteFragmentShaderATI
    ( STACK_GET_DATA(id)
    );
}

EXDL_API(egl_beginFragmentShaderATI)
{
  /* void glBeginFragmentShaderATI(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glBeginFragmentShaderATI
    (
    );
}

EXDL_API(egl_endFragmentShaderATI)
{
  /* void glEndFragmentShaderATI(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glEndFragmentShaderATI
    (
    );
}

EXDL_API(egl_passTexCoordATI)
{
  /* void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, dst)
    STACK_FMT_DATA(GLuint, coord)
    STACK_FMT_DATA(GLenum, swizzle)
  STACK_FMT_END()

    exdl_glPassTexCoordATI
    ( STACK_GET_DATA(dst)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(swizzle)
    );
}

EXDL_API(egl_sampleMapATI)
{
  /* void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, dst)
    STACK_FMT_DATA(GLuint, interp)
    STACK_FMT_DATA(GLenum, swizzle)
  STACK_FMT_END()

    exdl_glSampleMapATI
    ( STACK_GET_DATA(dst)
   ,  STACK_GET_DATA(interp)
   ,  STACK_GET_DATA(swizzle)
    );
}

EXDL_API(egl_colorFragmentOp1ATI)
{
  /* void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, op)
    STACK_FMT_DATA(GLuint, dst)
    STACK_FMT_DATA(GLuint, dstMask)
    STACK_FMT_DATA(GLuint, dstMod)
    STACK_FMT_DATA(GLuint, arg1)
    STACK_FMT_DATA(GLuint, arg1Rep)
    STACK_FMT_DATA(GLuint, arg1Mod)
  STACK_FMT_END()

    exdl_glColorFragmentOp1ATI
    ( STACK_GET_DATA(op)
   ,  STACK_GET_DATA(dst)
   ,  STACK_GET_DATA(dstMask)
   ,  STACK_GET_DATA(dstMod)
   ,  STACK_GET_DATA(arg1)
   ,  STACK_GET_DATA(arg1Rep)
   ,  STACK_GET_DATA(arg1Mod)
    );
}

EXDL_API(egl_colorFragmentOp2ATI)
{
  /* void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, op)
    STACK_FMT_DATA(GLuint, dst)
    STACK_FMT_DATA(GLuint, dstMask)
    STACK_FMT_DATA(GLuint, dstMod)
    STACK_FMT_DATA(GLuint, arg1)
    STACK_FMT_DATA(GLuint, arg1Rep)
    STACK_FMT_DATA(GLuint, arg1Mod)
    STACK_FMT_DATA(GLuint, arg2)
    STACK_FMT_DATA(GLuint, arg2Rep)
    STACK_FMT_DATA(GLuint, arg2Mod)
  STACK_FMT_END()

    exdl_glColorFragmentOp2ATI
    ( STACK_GET_DATA(op)
   ,  STACK_GET_DATA(dst)
   ,  STACK_GET_DATA(dstMask)
   ,  STACK_GET_DATA(dstMod)
   ,  STACK_GET_DATA(arg1)
   ,  STACK_GET_DATA(arg1Rep)
   ,  STACK_GET_DATA(arg1Mod)
   ,  STACK_GET_DATA(arg2)
   ,  STACK_GET_DATA(arg2Rep)
   ,  STACK_GET_DATA(arg2Mod)
    );
}

EXDL_API(egl_colorFragmentOp3ATI)
{
  /* void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, op)
    STACK_FMT_DATA(GLuint, dst)
    STACK_FMT_DATA(GLuint, dstMask)
    STACK_FMT_DATA(GLuint, dstMod)
    STACK_FMT_DATA(GLuint, arg1)
    STACK_FMT_DATA(GLuint, arg1Rep)
    STACK_FMT_DATA(GLuint, arg1Mod)
    STACK_FMT_DATA(GLuint, arg2)
    STACK_FMT_DATA(GLuint, arg2Rep)
    STACK_FMT_DATA(GLuint, arg2Mod)
    STACK_FMT_DATA(GLuint, arg3)
    STACK_FMT_DATA(GLuint, arg3Rep)
    STACK_FMT_DATA(GLuint, arg3Mod)
  STACK_FMT_END()

    exdl_glColorFragmentOp3ATI
    ( STACK_GET_DATA(op)
   ,  STACK_GET_DATA(dst)
   ,  STACK_GET_DATA(dstMask)
   ,  STACK_GET_DATA(dstMod)
   ,  STACK_GET_DATA(arg1)
   ,  STACK_GET_DATA(arg1Rep)
   ,  STACK_GET_DATA(arg1Mod)
   ,  STACK_GET_DATA(arg2)
   ,  STACK_GET_DATA(arg2Rep)
   ,  STACK_GET_DATA(arg2Mod)
   ,  STACK_GET_DATA(arg3)
   ,  STACK_GET_DATA(arg3Rep)
   ,  STACK_GET_DATA(arg3Mod)
    );
}

EXDL_API(egl_alphaFragmentOp1ATI)
{
  /* void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, op)
    STACK_FMT_DATA(GLuint, dst)
    STACK_FMT_DATA(GLuint, dstMod)
    STACK_FMT_DATA(GLuint, arg1)
    STACK_FMT_DATA(GLuint, arg1Rep)
    STACK_FMT_DATA(GLuint, arg1Mod)
  STACK_FMT_END()

    exdl_glAlphaFragmentOp1ATI
    ( STACK_GET_DATA(op)
   ,  STACK_GET_DATA(dst)
   ,  STACK_GET_DATA(dstMod)
   ,  STACK_GET_DATA(arg1)
   ,  STACK_GET_DATA(arg1Rep)
   ,  STACK_GET_DATA(arg1Mod)
    );
}

EXDL_API(egl_alphaFragmentOp2ATI)
{
  /* void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, op)
    STACK_FMT_DATA(GLuint, dst)
    STACK_FMT_DATA(GLuint, dstMod)
    STACK_FMT_DATA(GLuint, arg1)
    STACK_FMT_DATA(GLuint, arg1Rep)
    STACK_FMT_DATA(GLuint, arg1Mod)
    STACK_FMT_DATA(GLuint, arg2)
    STACK_FMT_DATA(GLuint, arg2Rep)
    STACK_FMT_DATA(GLuint, arg2Mod)
  STACK_FMT_END()

    exdl_glAlphaFragmentOp2ATI
    ( STACK_GET_DATA(op)
   ,  STACK_GET_DATA(dst)
   ,  STACK_GET_DATA(dstMod)
   ,  STACK_GET_DATA(arg1)
   ,  STACK_GET_DATA(arg1Rep)
   ,  STACK_GET_DATA(arg1Mod)
   ,  STACK_GET_DATA(arg2)
   ,  STACK_GET_DATA(arg2Rep)
   ,  STACK_GET_DATA(arg2Mod)
    );
}

EXDL_API(egl_alphaFragmentOp3ATI)
{
  /* void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, op)
    STACK_FMT_DATA(GLuint, dst)
    STACK_FMT_DATA(GLuint, dstMod)
    STACK_FMT_DATA(GLuint, arg1)
    STACK_FMT_DATA(GLuint, arg1Rep)
    STACK_FMT_DATA(GLuint, arg1Mod)
    STACK_FMT_DATA(GLuint, arg2)
    STACK_FMT_DATA(GLuint, arg2Rep)
    STACK_FMT_DATA(GLuint, arg2Mod)
    STACK_FMT_DATA(GLuint, arg3)
    STACK_FMT_DATA(GLuint, arg3Rep)
    STACK_FMT_DATA(GLuint, arg3Mod)
  STACK_FMT_END()

    exdl_glAlphaFragmentOp3ATI
    ( STACK_GET_DATA(op)
   ,  STACK_GET_DATA(dst)
   ,  STACK_GET_DATA(dstMod)
   ,  STACK_GET_DATA(arg1)
   ,  STACK_GET_DATA(arg1Rep)
   ,  STACK_GET_DATA(arg1Mod)
   ,  STACK_GET_DATA(arg2)
   ,  STACK_GET_DATA(arg2Rep)
   ,  STACK_GET_DATA(arg2Mod)
   ,  STACK_GET_DATA(arg3)
   ,  STACK_GET_DATA(arg3Rep)
   ,  STACK_GET_DATA(arg3Mod)
    );
}

EXDL_API(egl_setFragmentShaderConstantATI)
{
  /* void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  dst)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glSetFragmentShaderConstantATI
    ( STACK_GET_DATA(dst)
   ,  STACK_GET_ADDR(value)
    );
}

/* GL_ATI_pn_triangles */

EXDL_API(egl_pNTrianglesiATI)
{
  /* void glPNTrianglesiATI(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glPNTrianglesiATI
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pNTrianglesfATI)
{
  /* void glPNTrianglesfATI(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glPNTrianglesfATI
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

/* GL_ATI_vertex_array_object */

EXDL_API(egl_newObjectBufferATI)
{
  /* GLuint glNewObjectBufferATI(GLsizei size, const GLvoid* pointer, GLenum usage) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, size)
    STACK_FMT_DATA(GLvoid*, pointer)
    STACK_FMT_DATA(GLenum,  usage)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glNewObjectBufferATI
    ( STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
    ? STACK_GET_DATA(pointer)
    : (GLvoid*) sd->bin[0].base
   ,  STACK_GET_DATA(usage)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_isObjectBufferATI)
{
  /* GLboolean glIsObjectBufferATI(GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsObjectBufferATI
    ( STACK_GET_DATA(buffer)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_updateObjectBufferATI)
{
  /* void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const GLvoid* pointer, GLenum preserve) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  buffer)
    STACK_FMT_DATA(GLuint,  offset)
    STACK_FMT_DATA(GLsizei, size)
    STACK_FMT_DATA(GLvoid*, pointer)
    STACK_FMT_DATA(GLenum,  preserve)
  STACK_FMT_END()

    exdl_glUpdateObjectBufferATI
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
   ,  STACK_GET_DATA(preserve)
    );
}

EXDL_API(egl_getObjectBufferfvATI)
{
  /* void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  buffer)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetObjectBufferfvATI
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getObjectBufferivATI)
{
  /* void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetObjectBufferivATI
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_freeObjectBufferATI)
{
  /* void glFreeObjectBufferATI(GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glFreeObjectBufferATI
    ( STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_arrayObjectATI)
{
  /* void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  array)
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLuint,  buffer)
    STACK_FMT_DATA(GLuint,  offset)
  STACK_FMT_END()

    exdl_glArrayObjectATI
    ( STACK_GET_DATA(array)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
    );
}

EXDL_API(egl_getArrayObjectfvATI)
{
  /* void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  array)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetArrayObjectfvATI
    ( STACK_GET_DATA(array)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getArrayObjectivATI)
{
  /* void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, array)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetArrayObjectivATI
    ( STACK_GET_DATA(array)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_variantArrayObjectATI)
{
  /* void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLuint,  buffer)
    STACK_FMT_DATA(GLuint,  offset)
  STACK_FMT_END()

    exdl_glVariantArrayObjectATI
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
    );
}

EXDL_API(egl_getVariantArrayObjectfvATI)
{
  /* void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetVariantArrayObjectfvATI
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVariantArrayObjectivATI)
{
  /* void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetVariantArrayObjectivATI
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_EXT_vertex_shader */

EXDL_API(egl_beginVertexShaderEXT)
{
  /* void glBeginVertexShaderEXT(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glBeginVertexShaderEXT
    (
    );
}

EXDL_API(egl_endVertexShaderEXT)
{
  /* void glEndVertexShaderEXT(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glEndVertexShaderEXT
    (
    );
}

EXDL_API(egl_bindVertexShaderEXT)
{
  /* void glBindVertexShaderEXT(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glBindVertexShaderEXT
    ( STACK_GET_DATA(id)
    );
}

EXDL_API(egl_genVertexShadersEXT)
{
  /* GLuint glGenVertexShadersEXT(GLuint range) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, range)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glGenVertexShadersEXT
    ( STACK_GET_DATA(range)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_deleteVertexShaderEXT)
{
  /* void glDeleteVertexShaderEXT(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glDeleteVertexShaderEXT
    ( STACK_GET_DATA(id)
    );
}

EXDL_API(egl_shaderOp1EXT)
{
  /* void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, op)
    STACK_FMT_DATA(GLuint, res)
    STACK_FMT_DATA(GLuint, arg1)
  STACK_FMT_END()

    exdl_glShaderOp1EXT
    ( STACK_GET_DATA(op)
   ,  STACK_GET_DATA(res)
   ,  STACK_GET_DATA(arg1)
    );
}

EXDL_API(egl_shaderOp2EXT)
{
  /* void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, op)
    STACK_FMT_DATA(GLuint, res)
    STACK_FMT_DATA(GLuint, arg1)
    STACK_FMT_DATA(GLuint, arg2)
  STACK_FMT_END()

    exdl_glShaderOp2EXT
    ( STACK_GET_DATA(op)
   ,  STACK_GET_DATA(res)
   ,  STACK_GET_DATA(arg1)
   ,  STACK_GET_DATA(arg2)
    );
}

EXDL_API(egl_shaderOp3EXT)
{
  /* void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, op)
    STACK_FMT_DATA(GLuint, res)
    STACK_FMT_DATA(GLuint, arg1)
    STACK_FMT_DATA(GLuint, arg2)
    STACK_FMT_DATA(GLuint, arg3)
  STACK_FMT_END()

    exdl_glShaderOp3EXT
    ( STACK_GET_DATA(op)
   ,  STACK_GET_DATA(res)
   ,  STACK_GET_DATA(arg1)
   ,  STACK_GET_DATA(arg2)
   ,  STACK_GET_DATA(arg3)
    );
}

EXDL_API(egl_swizzleEXT)
{
  /* void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, res)
    STACK_FMT_DATA(GLuint, in)
    STACK_FMT_DATA(GLenum, outX)
    STACK_FMT_DATA(GLenum, outY)
    STACK_FMT_DATA(GLenum, outZ)
    STACK_FMT_DATA(GLenum, outW)
  STACK_FMT_END()

    exdl_glSwizzleEXT
    ( STACK_GET_DATA(res)
   ,  STACK_GET_DATA(in)
   ,  STACK_GET_DATA(outX)
   ,  STACK_GET_DATA(outY)
   ,  STACK_GET_DATA(outZ)
   ,  STACK_GET_DATA(outW)
    );
}

EXDL_API(egl_writeMaskEXT)
{
  /* void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, res)
    STACK_FMT_DATA(GLuint, in)
    STACK_FMT_DATA(GLenum, outX)
    STACK_FMT_DATA(GLenum, outY)
    STACK_FMT_DATA(GLenum, outZ)
    STACK_FMT_DATA(GLenum, outW)
  STACK_FMT_END()

    exdl_glWriteMaskEXT
    ( STACK_GET_DATA(res)
   ,  STACK_GET_DATA(in)
   ,  STACK_GET_DATA(outX)
   ,  STACK_GET_DATA(outY)
   ,  STACK_GET_DATA(outZ)
   ,  STACK_GET_DATA(outW)
    );
}

EXDL_API(egl_insertComponentEXT)
{
  /* void glInsertComponentEXT(GLuint res, GLuint src, GLuint num) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, res)
    STACK_FMT_DATA(GLuint, src)
    STACK_FMT_DATA(GLuint, num)
  STACK_FMT_END()

    exdl_glInsertComponentEXT
    ( STACK_GET_DATA(res)
   ,  STACK_GET_DATA(src)
   ,  STACK_GET_DATA(num)
    );
}

EXDL_API(egl_extractComponentEXT)
{
  /* void glExtractComponentEXT(GLuint res, GLuint src, GLuint num) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, res)
    STACK_FMT_DATA(GLuint, src)
    STACK_FMT_DATA(GLuint, num)
  STACK_FMT_END()

    exdl_glExtractComponentEXT
    ( STACK_GET_DATA(res)
   ,  STACK_GET_DATA(src)
   ,  STACK_GET_DATA(num)
    );
}

EXDL_API(egl_genSymbolsEXT)
{
  /* GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, datatype)
    STACK_FMT_DATA(GLenum, storagetype)
    STACK_FMT_DATA(GLenum, range)
    STACK_FMT_DATA(GLuint, components)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glGenSymbolsEXT
    ( STACK_GET_DATA(datatype)
   ,  STACK_GET_DATA(storagetype)
   ,  STACK_GET_DATA(range)
   ,  STACK_GET_DATA(components)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_setInvariantEXT)
{
  /* void glSetInvariantEXT(GLuint id, GLenum type, const GLvoid* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, addr)
  STACK_FMT_END()

    exdl_glSetInvariantEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(addr)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_setLocalConstantEXT)
{
  /* void glSetLocalConstantEXT(GLuint id, GLenum type, const GLvoid* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, addr)
  STACK_FMT_END()

    exdl_glSetLocalConstantEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(addr)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_variantbvEXT)
{
  /* void glVariantbvEXT(GLuint id, const GLbyte* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLbyte, addr[])
  STACK_FMT_END()

    exdl_glVariantbvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_ADDR(addr)
    );
}

EXDL_API(egl_variantsvEXT)
{
  /* void glVariantsvEXT(GLuint id, const GLshort* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLshort, addr[])
  STACK_FMT_END()

    exdl_glVariantsvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_ADDR(addr)
    );
}

EXDL_API(egl_variantivEXT)
{
  /* void glVariantivEXT(GLuint id, const GLint* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLint,  addr[])
  STACK_FMT_END()

    exdl_glVariantivEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_ADDR(addr)
    );
}

EXDL_API(egl_variantfvEXT)
{
  /* void glVariantfvEXT(GLuint id, const GLfloat* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLfloat, addr[])
  STACK_FMT_END()

    exdl_glVariantfvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_ADDR(addr)
    );
}

EXDL_API(egl_variantdvEXT)
{
  /* void glVariantdvEXT(GLuint id, const GLdouble* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   id)
    STACK_FMT_DATA(GLdouble, addr[])
  STACK_FMT_END()

    exdl_glVariantdvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_ADDR(addr)
    );
}

EXDL_API(egl_variantubvEXT)
{
  /* void glVariantubvEXT(GLuint id, const GLubyte* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLubyte, addr[])
  STACK_FMT_END()

    exdl_glVariantubvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_ADDR(addr)
    );
}

EXDL_API(egl_variantusvEXT)
{
  /* void glVariantusvEXT(GLuint id, const GLushort* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   id)
    STACK_FMT_DATA(GLushort, addr[])
  STACK_FMT_END()

    exdl_glVariantusvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_ADDR(addr)
    );
}

EXDL_API(egl_variantuivEXT)
{
  /* void glVariantuivEXT(GLuint id, const GLuint* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLuint, addr[])
  STACK_FMT_END()

    exdl_glVariantuivEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_ADDR(addr)
    );
}

EXDL_API(egl_variantPointerEXT)
{
  /* void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const GLvoid* addr) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLuint,  stride)
    STACK_FMT_DATA(GLvoid*, addr)
  STACK_FMT_END()

    exdl_glVariantPointerEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(addr)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_enableVariantClientStateEXT)
{
  /* void glEnableVariantClientStateEXT(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glEnableVariantClientStateEXT
    ( STACK_GET_DATA(id)
    );
}

EXDL_API(egl_disableVariantClientStateEXT)
{
  /* void glDisableVariantClientStateEXT(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glDisableVariantClientStateEXT
    ( STACK_GET_DATA(id)
    );
}

EXDL_API(egl_bindLightParameterEXT)
{
  /* GLuint glBindLightParameterEXT(GLenum light, GLenum value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, light)
    STACK_FMT_DATA(GLenum, value)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glBindLightParameterEXT
    ( STACK_GET_DATA(light)
   ,  STACK_GET_DATA(value)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_bindMaterialParameterEXT)
{
  /* GLuint glBindMaterialParameterEXT(GLenum face, GLenum value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, value)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glBindMaterialParameterEXT
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(value)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_bindTexGenParameterEXT)
{
  /* GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, unit)
    STACK_FMT_DATA(GLenum, coord)
    STACK_FMT_DATA(GLenum, value)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glBindTexGenParameterEXT
    ( STACK_GET_DATA(unit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(value)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_bindTextureUnitParameterEXT)
{
  /* GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, unit)
    STACK_FMT_DATA(GLenum, value)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glBindTextureUnitParameterEXT
    ( STACK_GET_DATA(unit)
   ,  STACK_GET_DATA(value)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_bindParameterEXT)
{
  /* GLuint glBindParameterEXT(GLenum value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, value)
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glBindParameterEXT
    ( STACK_GET_DATA(value)
    );

  THROW_RESULT(GLuint)
}

EXDL_API(egl_isVariantEnabledEXT)
{
  /* GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, cap)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsVariantEnabledEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(cap)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_getVariantBooleanvEXT)
{
  /* void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    id)
    STACK_FMT_DATA(GLenum,    value)
    STACK_FMT_DATA(GLboolean, data[])
  STACK_FMT_END()

    exdl_glGetVariantBooleanvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getVariantIntegervEXT)
{
  /* void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, value)
    STACK_FMT_DATA(GLint,  data[])
  STACK_FMT_END()

    exdl_glGetVariantIntegervEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getVariantFloatvEXT)
{
  /* void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  value)
    STACK_FMT_DATA(GLfloat, data[])
  STACK_FMT_END()

    exdl_glGetVariantFloatvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getVariantPointervEXT)
{
  /* void glGetVariantPointervEXT(GLuint id, GLenum value, GLvoid** data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   id)
    STACK_FMT_DATA(GLenum,   value)
    STACK_FMT_DATA(GLvoid**, data)
  STACK_FMT_END()

    exdl_glGetVariantPointervEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid**) sd->bin[0].base
    );
}

EXDL_API(egl_getInvariantBooleanvEXT)
{
  /* void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    id)
    STACK_FMT_DATA(GLenum,    value)
    STACK_FMT_DATA(GLboolean, data[])
  STACK_FMT_END()

    exdl_glGetInvariantBooleanvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getInvariantIntegervEXT)
{
  /* void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, value)
    STACK_FMT_DATA(GLint,  data[])
  STACK_FMT_END()

    exdl_glGetInvariantIntegervEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getInvariantFloatvEXT)
{
  /* void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  value)
    STACK_FMT_DATA(GLfloat, data[])
  STACK_FMT_END()

    exdl_glGetInvariantFloatvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getLocalConstantBooleanvEXT)
{
  /* void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    id)
    STACK_FMT_DATA(GLenum,    value)
    STACK_FMT_DATA(GLboolean, data[])
  STACK_FMT_END()

    exdl_glGetLocalConstantBooleanvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getLocalConstantIntegervEXT)
{
  /* void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, value)
    STACK_FMT_DATA(GLint,  data[])
  STACK_FMT_END()

    exdl_glGetLocalConstantIntegervEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  STACK_GET_DATA(data)
    );
}

EXDL_API(egl_getLocalConstantFloatvEXT)
{
  /* void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLenum,  value)
    STACK_FMT_DATA(GLfloat, data[])
  STACK_FMT_END()

    exdl_glGetLocalConstantFloatvEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(value)
   ,  STACK_GET_ADDR(data)
    );
}

/* GL_ATI_vertex_streams */

EXDL_API(egl_vertexStream1sATI)
{
  /* void glVertexStream1sATI(GLenum stream, GLshort x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, x)
  STACK_FMT_END()

    exdl_glVertexStream1sATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexStream1svATI)
{
  /* void glVertexStream1svATI(GLenum stream, const GLshort* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, coords[])
  STACK_FMT_END()

    exdl_glVertexStream1svATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream1iATI)
{
  /* void glVertexStream1iATI(GLenum stream, GLint x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  x)
  STACK_FMT_END()

    exdl_glVertexStream1iATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexStream1ivATI)
{
  /* void glVertexStream1ivATI(GLenum stream, const GLint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  coords[])
  STACK_FMT_END()

    exdl_glVertexStream1ivATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream1fATI)
{
  /* void glVertexStream1fATI(GLenum stream, GLfloat x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, x)
  STACK_FMT_END()

    exdl_glVertexStream1fATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexStream1fvATI)
{
  /* void glVertexStream1fvATI(GLenum stream, const GLfloat* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, coords[])
  STACK_FMT_END()

    exdl_glVertexStream1fvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream1dATI)
{
  /* void glVertexStream1dATI(GLenum stream, GLdouble x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, x)
  STACK_FMT_END()

    exdl_glVertexStream1dATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexStream1dvATI)
{
  /* void glVertexStream1dvATI(GLenum stream, const GLdouble* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, coords[])
  STACK_FMT_END()

    exdl_glVertexStream1dvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream2sATI)
{
  /* void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
  STACK_FMT_END()

    exdl_glVertexStream2sATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexStream2svATI)
{
  /* void glVertexStream2svATI(GLenum stream, const GLshort* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, coords[])
  STACK_FMT_END()

    exdl_glVertexStream2svATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream2iATI)
{
  /* void glVertexStream2iATI(GLenum stream, GLint x, GLint y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
  STACK_FMT_END()

    exdl_glVertexStream2iATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexStream2ivATI)
{
  /* void glVertexStream2ivATI(GLenum stream, const GLint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  coords[])
  STACK_FMT_END()

    exdl_glVertexStream2ivATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream2fATI)
{
  /* void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
  STACK_FMT_END()

    exdl_glVertexStream2fATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexStream2fvATI)
{
  /* void glVertexStream2fvATI(GLenum stream, const GLfloat* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, coords[])
  STACK_FMT_END()

    exdl_glVertexStream2fvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream2dATI)
{
  /* void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glVertexStream2dATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexStream2dvATI)
{
  /* void glVertexStream2dvATI(GLenum stream, const GLdouble* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, coords[])
  STACK_FMT_END()

    exdl_glVertexStream2dvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream3sATI)
{
  /* void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
  STACK_FMT_END()

    exdl_glVertexStream3sATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexStream3svATI)
{
  /* void glVertexStream3svATI(GLenum stream, const GLshort* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, coords[])
  STACK_FMT_END()

    exdl_glVertexStream3svATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream3iATI)
{
  /* void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
    STACK_FMT_DATA(GLint,  z)
  STACK_FMT_END()

    exdl_glVertexStream3iATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexStream3ivATI)
{
  /* void glVertexStream3ivATI(GLenum stream, const GLint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  coords[])
  STACK_FMT_END()

    exdl_glVertexStream3ivATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream3fATI)
{
  /* void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glVertexStream3fATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexStream3fvATI)
{
  /* void glVertexStream3fvATI(GLenum stream, const GLfloat* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, coords[])
  STACK_FMT_END()

    exdl_glVertexStream3fvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream3dATI)
{
  /* void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glVertexStream3dATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexStream3dvATI)
{
  /* void glVertexStream3dvATI(GLenum stream, const GLdouble* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, coords[])
  STACK_FMT_END()

    exdl_glVertexStream3dvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream4sATI)
{
  /* void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, x)
    STACK_FMT_DATA(GLshort, y)
    STACK_FMT_DATA(GLshort, z)
    STACK_FMT_DATA(GLshort, w)
  STACK_FMT_END()

    exdl_glVertexStream4sATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexStream4svATI)
{
  /* void glVertexStream4svATI(GLenum stream, const GLshort* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, coords[])
  STACK_FMT_END()

    exdl_glVertexStream4svATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream4iATI)
{
  /* void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
    STACK_FMT_DATA(GLint,  z)
    STACK_FMT_DATA(GLint,  w)
  STACK_FMT_END()

    exdl_glVertexStream4iATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexStream4ivATI)
{
  /* void glVertexStream4ivATI(GLenum stream, const GLint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  coords[])
  STACK_FMT_END()

    exdl_glVertexStream4ivATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream4fATI)
{
  /* void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glVertexStream4fATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexStream4fvATI)
{
  /* void glVertexStream4fvATI(GLenum stream, const GLfloat* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, coords[])
  STACK_FMT_END()

    exdl_glVertexStream4fvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_vertexStream4dATI)
{
  /* void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glVertexStream4dATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexStream4dvATI)
{
  /* void glVertexStream4dvATI(GLenum stream, const GLdouble* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, coords[])
  STACK_FMT_END()

    exdl_glVertexStream4dvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_normalStream3bATI)
{
  /* void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLbyte, nx)
    STACK_FMT_DATA(GLbyte, ny)
    STACK_FMT_DATA(GLbyte, nz)
  STACK_FMT_END()

    exdl_glNormalStream3bATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
    );
}

EXDL_API(egl_normalStream3bvATI)
{
  /* void glNormalStream3bvATI(GLenum stream, const GLbyte* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLbyte, coords[])
  STACK_FMT_END()

    exdl_glNormalStream3bvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_normalStream3sATI)
{
  /* void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, nx)
    STACK_FMT_DATA(GLshort, ny)
    STACK_FMT_DATA(GLshort, nz)
  STACK_FMT_END()

    exdl_glNormalStream3sATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
    );
}

EXDL_API(egl_normalStream3svATI)
{
  /* void glNormalStream3svATI(GLenum stream, const GLshort* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLshort, coords[])
  STACK_FMT_END()

    exdl_glNormalStream3svATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_normalStream3iATI)
{
  /* void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  nx)
    STACK_FMT_DATA(GLint,  ny)
    STACK_FMT_DATA(GLint,  nz)
  STACK_FMT_END()

    exdl_glNormalStream3iATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
    );
}

EXDL_API(egl_normalStream3ivATI)
{
  /* void glNormalStream3ivATI(GLenum stream, const GLint* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
    STACK_FMT_DATA(GLint,  coords[])
  STACK_FMT_END()

    exdl_glNormalStream3ivATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_normalStream3fATI)
{
  /* void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, nx)
    STACK_FMT_DATA(GLfloat, ny)
    STACK_FMT_DATA(GLfloat, nz)
  STACK_FMT_END()

    exdl_glNormalStream3fATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
    );
}

EXDL_API(egl_normalStream3fvATI)
{
  /* void glNormalStream3fvATI(GLenum stream, const GLfloat* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  stream)
    STACK_FMT_DATA(GLfloat, coords[])
  STACK_FMT_END()

    exdl_glNormalStream3fvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_normalStream3dATI)
{
  /* void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, nx)
    STACK_FMT_DATA(GLdouble, ny)
    STACK_FMT_DATA(GLdouble, nz)
  STACK_FMT_END()

    exdl_glNormalStream3dATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
    );
}

EXDL_API(egl_normalStream3dvATI)
{
  /* void glNormalStream3dvATI(GLenum stream, const GLdouble* coords) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   stream)
    STACK_FMT_DATA(GLdouble, coords[])
  STACK_FMT_END()

    exdl_glNormalStream3dvATI
    ( STACK_GET_DATA(stream)
   ,  STACK_GET_ADDR(coords)
    );
}

EXDL_API(egl_clientActiveVertexStreamATI)
{
  /* void glClientActiveVertexStreamATI(GLenum stream) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, stream)
  STACK_FMT_END()

    exdl_glClientActiveVertexStreamATI
    ( STACK_GET_DATA(stream)
    );
}

EXDL_API(egl_vertexBlendEnviATI)
{
  /* void glVertexBlendEnviATI(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glVertexBlendEnviATI
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_vertexBlendEnvfATI)
{
  /* void glVertexBlendEnvfATI(GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glVertexBlendEnvfATI
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

/* GL_ATI_element_array */

EXDL_API(egl_elementPointerATI)
{
  /* void glElementPointerATI(GLenum type, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glElementPointerATI
    ( STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_drawElementArrayATI)
{
  /* void glDrawElementArrayATI(GLenum mode, GLsizei count) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLsizei, count)
  STACK_FMT_END()

    exdl_glDrawElementArrayATI
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
    );
}

EXDL_API(egl_drawRangeElementArrayATI)
{
  /* void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLuint,  start)
    STACK_FMT_DATA(GLuint,  end)
    STACK_FMT_DATA(GLsizei, count)
  STACK_FMT_END()

    exdl_glDrawRangeElementArrayATI
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(end)
   ,  STACK_GET_DATA(count)
    );
}

/* GL_SUN_mesh_array */

EXDL_API(egl_drawMeshArraysSUN)
{
  /* void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLint,   first)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glDrawMeshArraysSUN
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(width)
    );
}

/* GL_SUN_slice_accum */
/* GL_NV_multisample_filter_hint */
/* GL_NV_depth_clamp */
/* GL_NV_occlusion_query */

EXDL_API(egl_genOcclusionQueriesNV)
{
  /* void glGenOcclusionQueriesNV(GLsizei n, GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  ids[])
  STACK_FMT_END()

    exdl_glGenOcclusionQueriesNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(ids)
    );
}

EXDL_API(egl_deleteOcclusionQueriesNV)
{
  /* void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  ids[])
  STACK_FMT_END()

    exdl_glDeleteOcclusionQueriesNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(ids)
    );
}

EXDL_API(egl_isOcclusionQueryNV)
{
  /* GLboolean glIsOcclusionQueryNV(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsOcclusionQueryNV
    ( STACK_GET_DATA(id)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_beginOcclusionQueryNV)
{
  /* void glBeginOcclusionQueryNV(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glBeginOcclusionQueryNV
    ( STACK_GET_DATA(id)
    );
}

EXDL_API(egl_endOcclusionQueryNV)
{
  /* void glEndOcclusionQueryNV(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glEndOcclusionQueryNV
    (
    );
}

EXDL_API(egl_getOcclusionQueryivNV)
{
  /* void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetOcclusionQueryivNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getOcclusionQueryuivNV)
{
  /* void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetOcclusionQueryuivNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_NV_point_sprite */

EXDL_API(egl_pointParameteriNV)
{
  /* void glPointParameteriNV(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glPointParameteriNV
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_pointParameterivNV)
{
  /* void glPointParameterivNV(GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glPointParameterivNV
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_NV_texture_shader3 */
/* GL_NV_vertex_program1_1 */
/* GL_EXT_shadow_funcs */
/* GL_EXT_stencil_two_side */

EXDL_API(egl_activeStencilFaceEXT)
{
  /* void glActiveStencilFaceEXT(GLenum face) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
  STACK_FMT_END()

    exdl_glActiveStencilFaceEXT
    ( STACK_GET_DATA(face)
    );
}

/* GL_ATI_text_fragment_shader */
/* GL_APPLE_client_storage */
/* GL_APPLE_element_array */

EXDL_API(egl_elementPointerAPPLE)
{
  /* void glElementPointerAPPLE(GLenum type, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glElementPointerAPPLE
    ( STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_drawElementArrayAPPLE)
{
  /* void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLint,   first)
    STACK_FMT_DATA(GLsizei, count)
  STACK_FMT_END()

    exdl_glDrawElementArrayAPPLE
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
    );
}

EXDL_API(egl_drawRangeElementArrayAPPLE)
{
  /* void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLuint,  start)
    STACK_FMT_DATA(GLuint,  end)
    STACK_FMT_DATA(GLint,   first)
    STACK_FMT_DATA(GLsizei, count)
  STACK_FMT_END()

    exdl_glDrawRangeElementArrayAPPLE
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(end)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
    );
}

EXDL_API(egl_multiDrawElementArrayAPPLE)
{
  /* void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint* first, const GLsizei* count, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLint*,   first)
    STACK_FMT_DATA(GLsizei*, count)
    STACK_FMT_DATA(GLsizei,  primcount)
  STACK_FMT_END()

    exdl_glMultiDrawElementArrayAPPLE
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(primcount)
    );
}

EXDL_API(egl_multiDrawRangeElementArrayAPPLE)
{
  /* void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint* first, const GLsizei* count, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLuint,   start)
    STACK_FMT_DATA(GLuint,   end)
    STACK_FMT_DATA(GLint*,   first)
    STACK_FMT_DATA(GLsizei*, count)
    STACK_FMT_DATA(GLsizei,  primcount)
  STACK_FMT_END()

    exdl_glMultiDrawRangeElementArrayAPPLE
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(end)
   ,  STACK_GET_DATA(first)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(primcount)
    );
}

/* GL_APPLE_fence */

EXDL_API(egl_genFencesAPPLE)
{
  /* void glGenFencesAPPLE(GLsizei n, GLuint* fences) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  fences[])
  STACK_FMT_END()

    exdl_glGenFencesAPPLE
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(fences)
    );
}

EXDL_API(egl_deleteFencesAPPLE)
{
  /* void glDeleteFencesAPPLE(GLsizei n, const GLuint* fences) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  fences[])
  STACK_FMT_END()

    exdl_glDeleteFencesAPPLE
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(fences)
    );
}

EXDL_API(egl_setFenceAPPLE)
{
  /* void glSetFenceAPPLE(GLuint fence) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, fence)
  STACK_FMT_END()

    exdl_glSetFenceAPPLE
    ( STACK_GET_DATA(fence)
    );
}

EXDL_API(egl_isFenceAPPLE)
{
  /* GLboolean glIsFenceAPPLE(GLuint fence) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, fence)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsFenceAPPLE
    ( STACK_GET_DATA(fence)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_testFenceAPPLE)
{
  /* GLboolean glTestFenceAPPLE(GLuint fence) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, fence)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glTestFenceAPPLE
    ( STACK_GET_DATA(fence)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_finishFenceAPPLE)
{
  /* void glFinishFenceAPPLE(GLuint fence) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, fence)
  STACK_FMT_END()

    exdl_glFinishFenceAPPLE
    ( STACK_GET_DATA(fence)
    );
}

EXDL_API(egl_testObjectAPPLE)
{
  /* GLboolean glTestObjectAPPLE(GLenum object, GLuint name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, object)
    STACK_FMT_DATA(GLuint, name)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glTestObjectAPPLE
    ( STACK_GET_DATA(object)
   ,  STACK_GET_DATA(name)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_finishObjectAPPLE)
{
  /* void glFinishObjectAPPLE(GLenum object, GLint name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, object)
    STACK_FMT_DATA(GLint,  name)
  STACK_FMT_END()

    exdl_glFinishObjectAPPLE
    ( STACK_GET_DATA(object)
   ,  STACK_GET_DATA(name)
    );
}

/* GL_APPLE_vertex_array_object */

EXDL_API(egl_bindVertexArrayAPPLE)
{
  /* void glBindVertexArrayAPPLE(GLuint array) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, array)
  STACK_FMT_END()

    exdl_glBindVertexArrayAPPLE
    ( STACK_GET_DATA(array)
    );
}

EXDL_API(egl_deleteVertexArraysAPPLE)
{
  /* void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint* arrays) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  arrays[])
  STACK_FMT_END()

    exdl_glDeleteVertexArraysAPPLE
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(arrays)
    );
}

EXDL_API(egl_genVertexArraysAPPLE)
{
  /* void glGenVertexArraysAPPLE(GLsizei n, GLuint* arrays) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  arrays[])
  STACK_FMT_END()

    exdl_glGenVertexArraysAPPLE
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(arrays)
    );
}

EXDL_API(egl_isVertexArrayAPPLE)
{
  /* GLboolean glIsVertexArrayAPPLE(GLuint array) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, array)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsVertexArrayAPPLE
    ( STACK_GET_DATA(array)
    );

  THROW_RESULT(GLboolean)
}

/* GL_APPLE_vertex_array_range */

EXDL_API(egl_vertexArrayRangeAPPLE)
{
  /* void glVertexArrayRangeAPPLE(GLsizei length, GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, length)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glVertexArrayRangeAPPLE
    ( STACK_GET_DATA(length)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_flushVertexArrayRangeAPPLE)
{
  /* void glFlushVertexArrayRangeAPPLE(GLsizei length, GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, length)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glFlushVertexArrayRangeAPPLE
    ( STACK_GET_DATA(length)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_vertexArrayParameteriAPPLE)
{
  /* void glVertexArrayParameteriAPPLE(GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glVertexArrayParameteriAPPLE
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

/* GL_APPLE_ycbcr_422 */
/* GL_S3_s3tc */
/* GL_ATI_draw_buffers */

EXDL_API(egl_drawBuffersATI)
{
  /* void glDrawBuffersATI(GLsizei n, const GLenum* bufs) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLenum,  bufs[])
  STACK_FMT_END()

    exdl_glDrawBuffersATI
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(bufs)
    );
}

/* GL_ATI_pixel_format_float */
/* GL_ATI_texture_env_combine3 */
/* GL_ATI_texture_float */
/* GL_NV_float_buffer */
/* GL_NV_fragment_program */

EXDL_API(egl_programNamedParameter4fNV)
{
  /* void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte* name, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLsizei, len)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
    STACK_FMT_DATA(GLubyte, name[])
  STACK_FMT_END()

    exdl_glProgramNamedParameter4fNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(len)
   ,  STACK_GET_ADDR(name)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programNamedParameter4dNV)
{
  /* void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte* name, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   id)
    STACK_FMT_DATA(GLsizei,  len)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
    STACK_FMT_DATA(GLubyte,  name[])
  STACK_FMT_END()

    exdl_glProgramNamedParameter4dNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(len)
   ,  STACK_GET_ADDR(name)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programNamedParameter4fvNV)
{
  /* void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte* name, const GLfloat* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   id)
    STACK_FMT_DATA(GLsizei,  len)
    STACK_FMT_DATA(GLubyte*, name)
    STACK_FMT_DATA(GLfloat*, v)
  STACK_FMT_END()

    exdl_glProgramNamedParameter4fvNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(len)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_programNamedParameter4dvNV)
{
  /* void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte* name, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    id)
    STACK_FMT_DATA(GLsizei,   len)
    STACK_FMT_DATA(GLubyte*,  name)
    STACK_FMT_DATA(GLdouble*, v)
  STACK_FMT_END()

    exdl_glProgramNamedParameter4dvNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(len)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(v)
    );
}

EXDL_API(egl_getProgramNamedParameterfvNV)
{
  /* void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte* name, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   id)
    STACK_FMT_DATA(GLsizei,  len)
    STACK_FMT_DATA(GLubyte*, name)
    STACK_FMT_DATA(GLfloat*, params)
  STACK_FMT_END()

    exdl_glGetProgramNamedParameterfvNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(len)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_getProgramNamedParameterdvNV)
{
  /* void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte* name, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    id)
    STACK_FMT_DATA(GLsizei,   len)
    STACK_FMT_DATA(GLubyte*,  name)
    STACK_FMT_DATA(GLdouble*, params)
  STACK_FMT_END()

    exdl_glGetProgramNamedParameterdvNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(len)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(params)
    );
}

/* GL_NV_half_float */

EXDL_API(egl_vertex2hNV)
{
  /* void glVertex2hNV(GLhalfNV x, GLhalfNV y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, x)
    STACK_FMT_DATA(GLhalfNV, y)
  STACK_FMT_END()

    exdl_glVertex2hNV
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertex2hvNV)
{
  /* void glVertex2hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertex2hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertex3hNV)
{
  /* void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, x)
    STACK_FMT_DATA(GLhalfNV, y)
    STACK_FMT_DATA(GLhalfNV, z)
  STACK_FMT_END()

    exdl_glVertex3hNV
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertex3hvNV)
{
  /* void glVertex3hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertex3hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertex4hNV)
{
  /* void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, x)
    STACK_FMT_DATA(GLhalfNV, y)
    STACK_FMT_DATA(GLhalfNV, z)
    STACK_FMT_DATA(GLhalfNV, w)
  STACK_FMT_END()

    exdl_glVertex4hNV
    ( STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertex4hvNV)
{
  /* void glVertex4hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertex4hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_normal3hNV)
{
  /* void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, nx)
    STACK_FMT_DATA(GLhalfNV, ny)
    STACK_FMT_DATA(GLhalfNV, nz)
  STACK_FMT_END()

    exdl_glNormal3hNV
    ( STACK_GET_DATA(nx)
   ,  STACK_GET_DATA(ny)
   ,  STACK_GET_DATA(nz)
    );
}

EXDL_API(egl_normal3hvNV)
{
  /* void glNormal3hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glNormal3hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_color3hNV)
{
  /* void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, red)
    STACK_FMT_DATA(GLhalfNV, green)
    STACK_FMT_DATA(GLhalfNV, blue)
  STACK_FMT_END()

    exdl_glColor3hNV
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_color3hvNV)
{
  /* void glColor3hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glColor3hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_color4hNV)
{
  /* void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, red)
    STACK_FMT_DATA(GLhalfNV, green)
    STACK_FMT_DATA(GLhalfNV, blue)
    STACK_FMT_DATA(GLhalfNV, alpha)
  STACK_FMT_END()

    exdl_glColor4hNV
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
   ,  STACK_GET_DATA(alpha)
    );
}

EXDL_API(egl_color4hvNV)
{
  /* void glColor4hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glColor4hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_texCoord1hNV)
{
  /* void glTexCoord1hNV(GLhalfNV s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, s)
  STACK_FMT_END()

    exdl_glTexCoord1hNV
    ( STACK_GET_DATA(s)
    );
}

EXDL_API(egl_texCoord1hvNV)
{
  /* void glTexCoord1hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glTexCoord1hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_texCoord2hNV)
{
  /* void glTexCoord2hNV(GLhalfNV s, GLhalfNV t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, s)
    STACK_FMT_DATA(GLhalfNV, t)
  STACK_FMT_END()

    exdl_glTexCoord2hNV
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_texCoord2hvNV)
{
  /* void glTexCoord2hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glTexCoord2hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_texCoord3hNV)
{
  /* void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, s)
    STACK_FMT_DATA(GLhalfNV, t)
    STACK_FMT_DATA(GLhalfNV, r)
  STACK_FMT_END()

    exdl_glTexCoord3hNV
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_texCoord3hvNV)
{
  /* void glTexCoord3hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glTexCoord3hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_texCoord4hNV)
{
  /* void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, s)
    STACK_FMT_DATA(GLhalfNV, t)
    STACK_FMT_DATA(GLhalfNV, r)
    STACK_FMT_DATA(GLhalfNV, q)
  STACK_FMT_END()

    exdl_glTexCoord4hNV
    ( STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_texCoord4hvNV)
{
  /* void glTexCoord4hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glTexCoord4hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord1hNV)
{
  /* void glMultiTexCoord1hNV(GLenum target, GLhalfNV s) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLhalfNV, s)
  STACK_FMT_END()

    exdl_glMultiTexCoord1hNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
    );
}

EXDL_API(egl_multiTexCoord1hvNV)
{
  /* void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord1hvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord2hNV)
{
  /* void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLhalfNV, s)
    STACK_FMT_DATA(GLhalfNV, t)
  STACK_FMT_END()

    exdl_glMultiTexCoord2hNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
    );
}

EXDL_API(egl_multiTexCoord2hvNV)
{
  /* void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord2hvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord3hNV)
{
  /* void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLhalfNV, s)
    STACK_FMT_DATA(GLhalfNV, t)
    STACK_FMT_DATA(GLhalfNV, r)
  STACK_FMT_END()

    exdl_glMultiTexCoord3hNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
    );
}

EXDL_API(egl_multiTexCoord3hvNV)
{
  /* void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord3hvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_multiTexCoord4hNV)
{
  /* void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLhalfNV, s)
    STACK_FMT_DATA(GLhalfNV, t)
    STACK_FMT_DATA(GLhalfNV, r)
    STACK_FMT_DATA(GLhalfNV, q)
  STACK_FMT_END()

    exdl_glMultiTexCoord4hNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(s)
   ,  STACK_GET_DATA(t)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(q)
    );
}

EXDL_API(egl_multiTexCoord4hvNV)
{
  /* void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glMultiTexCoord4hvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_fogCoordhNV)
{
  /* void glFogCoordhNV(GLhalfNV fog) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, fog)
  STACK_FMT_END()

    exdl_glFogCoordhNV
    ( STACK_GET_DATA(fog)
    );
}

EXDL_API(egl_fogCoordhvNV)
{
  /* void glFogCoordhvNV(const GLhalfNV* fog) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, fog[])
  STACK_FMT_END()

    exdl_glFogCoordhvNV
    ( STACK_GET_ADDR(fog)
    );
}

EXDL_API(egl_secondaryColor3hNV)
{
  /* void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, red)
    STACK_FMT_DATA(GLhalfNV, green)
    STACK_FMT_DATA(GLhalfNV, blue)
  STACK_FMT_END()

    exdl_glSecondaryColor3hNV
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
    );
}

EXDL_API(egl_secondaryColor3hvNV)
{
  /* void glSecondaryColor3hvNV(const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glSecondaryColor3hvNV
    ( STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexWeighthNV)
{
  /* void glVertexWeighthNV(GLhalfNV weight) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, weight)
  STACK_FMT_END()

    exdl_glVertexWeighthNV
    ( STACK_GET_DATA(weight)
    );
}

EXDL_API(egl_vertexWeighthvNV)
{
  /* void glVertexWeighthvNV(const GLhalfNV* weight) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLhalfNV, weight[])
  STACK_FMT_END()

    exdl_glVertexWeighthvNV
    ( STACK_GET_ADDR(weight)
    );
}

EXDL_API(egl_vertexAttrib1hNV)
{
  /* void glVertexAttrib1hNV(GLuint index, GLhalfNV x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLhalfNV, x)
  STACK_FMT_END()

    exdl_glVertexAttrib1hNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttrib1hvNV)
{
  /* void glVertexAttrib1hvNV(GLuint index, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib1hvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib2hNV)
{
  /* void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLhalfNV, x)
    STACK_FMT_DATA(GLhalfNV, y)
  STACK_FMT_END()

    exdl_glVertexAttrib2hNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttrib2hvNV)
{
  /* void glVertexAttrib2hvNV(GLuint index, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib2hvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib3hNV)
{
  /* void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLhalfNV, x)
    STACK_FMT_DATA(GLhalfNV, y)
    STACK_FMT_DATA(GLhalfNV, z)
  STACK_FMT_END()

    exdl_glVertexAttrib3hNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttrib3hvNV)
{
  /* void glVertexAttrib3hvNV(GLuint index, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib3hvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttrib4hNV)
{
  /* void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLhalfNV, x)
    STACK_FMT_DATA(GLhalfNV, y)
    STACK_FMT_DATA(GLhalfNV, z)
    STACK_FMT_DATA(GLhalfNV, w)
  STACK_FMT_END()

    exdl_glVertexAttrib4hNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttrib4hvNV)
{
  /* void glVertexAttrib4hvNV(GLuint index, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertexAttrib4hvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs1hvNV)
{
  /* void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  n)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs1hvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs2hvNV)
{
  /* void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  n)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs2hvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs3hvNV)
{
  /* void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  n)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs3hvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribs4hvNV)
{
  /* void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  n)
    STACK_FMT_DATA(GLhalfNV, v[])
  STACK_FMT_END()

    exdl_glVertexAttribs4hvNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(v)
    );
}

/* GL_NV_pixel_data_range */

EXDL_API(egl_pixelDataRangeNV)
{
  /* void glPixelDataRangeNV(GLenum target, GLsizei length, GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, length)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glPixelDataRangeNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(length)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_flushPixelDataRangeNV)
{
  /* void glFlushPixelDataRangeNV(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glFlushPixelDataRangeNV
    ( STACK_GET_DATA(target)
    );
}

/* GL_NV_primitive_restart */

EXDL_API(egl_primitiveRestartNV)
{
  /* void glPrimitiveRestartNV(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glPrimitiveRestartNV
    (
    );
}

EXDL_API(egl_primitiveRestartIndexNV)
{
  /* void glPrimitiveRestartIndexNV(GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glPrimitiveRestartIndexNV
    ( STACK_GET_DATA(index)
    );
}

/* GL_NV_texture_expand_normal */
/* GL_NV_vertex_program2 */
/* GL_ATI_map_object_buffer */

EXDL_API(egl_mapObjectBufferATI)
{
  /* GLvoid* glMapObjectBufferATI(GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

  CATCH_RESULT(GLvoid*)

    exdl_glMapObjectBufferATI
    ( STACK_GET_DATA(buffer)
    );

  THROW_POINTER()
}

EXDL_API(egl_unmapObjectBufferATI)
{
  /* void glUnmapObjectBufferATI(GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glUnmapObjectBufferATI
    ( STACK_GET_DATA(buffer)
    );
}

/* GL_ATI_separate_stencil */

EXDL_API(egl_stencilOpSeparateATI)
{
  /* void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, face)
    STACK_FMT_DATA(GLenum, sfail)
    STACK_FMT_DATA(GLenum, dpfail)
    STACK_FMT_DATA(GLenum, dppass)
  STACK_FMT_END()

    exdl_glStencilOpSeparateATI
    ( STACK_GET_DATA(face)
   ,  STACK_GET_DATA(sfail)
   ,  STACK_GET_DATA(dpfail)
   ,  STACK_GET_DATA(dppass)
    );
}

EXDL_API(egl_stencilFuncSeparateATI)
{
  /* void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, frontfunc)
    STACK_FMT_DATA(GLenum, backfunc)
    STACK_FMT_DATA(GLint,  ref)
    STACK_FMT_DATA(GLuint, mask)
  STACK_FMT_END()

    exdl_glStencilFuncSeparateATI
    ( STACK_GET_DATA(frontfunc)
   ,  STACK_GET_DATA(backfunc)
   ,  STACK_GET_DATA(ref)
   ,  STACK_GET_DATA(mask)
    );
}

/* GL_ATI_vertex_attrib_array_object */

EXDL_API(egl_vertexAttribArrayObjectATI)
{
  /* void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLint,     size)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLboolean, normalized)
    STACK_FMT_DATA(GLsizei,   stride)
    STACK_FMT_DATA(GLuint,    buffer)
    STACK_FMT_DATA(GLuint,    offset)
  STACK_FMT_END()

    exdl_glVertexAttribArrayObjectATI
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
    );
}

EXDL_API(egl_getVertexAttribArrayObjectfvATI)
{
  /* void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribArrayObjectfvATI
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVertexAttribArrayObjectivATI)
{
  /* void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribArrayObjectivATI
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_OES_read_format */
/* GL_EXT_depth_bounds_test */

EXDL_API(egl_depthBoundsEXT)
{
  /* void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLclampd, zmin)
    STACK_FMT_DATA(GLclampd, zmax)
  STACK_FMT_END()

    exdl_glDepthBoundsEXT
    ( STACK_GET_DATA(zmin)
   ,  STACK_GET_DATA(zmax)
    );
}

/* GL_EXT_texture_mirror_clamp */
/* GL_EXT_blend_equation_separate */

EXDL_API(egl_blendEquationSeparateEXT)
{
  /* void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, modeRGB)
    STACK_FMT_DATA(GLenum, modeAlpha)
  STACK_FMT_END()

    exdl_glBlendEquationSeparateEXT
    ( STACK_GET_DATA(modeRGB)
   ,  STACK_GET_DATA(modeAlpha)
    );
}

/* GL_MESA_pack_invert */
/* GL_MESA_ycbcr_texture */
/* GL_EXT_pixel_buffer_object */
/* GL_NV_fragment_program_option */
/* GL_NV_fragment_program2 */
/* GL_NV_vertex_program2_option */
/* GL_NV_vertex_program3 */
/* GL_EXT_framebuffer_object */

EXDL_API(egl_isRenderbufferEXT)
{
  /* GLboolean glIsRenderbufferEXT(GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsRenderbufferEXT
    ( STACK_GET_DATA(renderbuffer)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_bindRenderbufferEXT)
{
  /* void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()
   
    exdl_glBindRenderbufferEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(renderbuffer)
    );
}

EXDL_API(egl_deleteRenderbuffersEXT)
{
  /* void glDeleteRenderbuffersEXT(GLsizei n, const GLuint* renderbuffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  renderbuffers[])
  STACK_FMT_END()

    exdl_glDeleteRenderbuffersEXT
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(renderbuffers)
    );
}

EXDL_API(egl_genRenderbuffersEXT)
{
  /* void glGenRenderbuffersEXT(GLsizei n, GLuint* renderbuffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
  STACK_FMT_END()
  
  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, renderbuffers[])
  FRAME_FMT_SIZE(sizeof(GLuint) * STACK_GET_DATA(n))

    exdl_glGenRenderbuffersEXT
    ( STACK_GET_DATA(n)
   ,  FRAME_GET_ADDR(renderbuffers)
    );
    
  THROW_FRAME()
}

EXDL_API(egl_renderbufferStorageEXT)
{
  /* void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glRenderbufferStorageEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_getRenderbufferParameterivEXT)
{
  /* void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()

    exdl_glGetRenderbufferParameterivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_isFramebufferEXT)
{
  /* GLboolean glIsFramebufferEXT(GLuint framebuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)
    
    exdl_glIsFramebufferEXT
    ( STACK_GET_DATA(framebuffer)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_bindFramebufferEXT)
{
  /* void glBindFramebufferEXT(GLenum target, GLuint framebuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, framebuffer)
  STACK_FMT_END()
  
    exdl_glBindFramebufferEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(framebuffer)
    );
}

EXDL_API(egl_deleteFramebuffersEXT)
{
  /* void glDeleteFramebuffersEXT(GLsizei n, const GLuint* framebuffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  framebuffers[])
  STACK_FMT_END()

    exdl_glDeleteFramebuffersEXT
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(framebuffers)
    );
}

EXDL_API(egl_genFramebuffersEXT)
{
  /* void glGenFramebuffersEXT(GLsizei n, GLuint* framebuffers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
  STACK_FMT_END()
  
  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, framebuffers[])
  FRAME_FMT_SIZE(sizeof(GLuint) * STACK_GET_DATA(n))

    exdl_glGenFramebuffersEXT
    ( STACK_GET_DATA(n)
   ,  FRAME_GET_ADDR(framebuffers)
    );
    
  THROW_FRAME()
}

EXDL_API(egl_checkFramebufferStatusEXT)
{
  /* GLenum glCheckFramebufferStatusEXT(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

  CATCH_RESULT(GLenum)
    
    exdl_glCheckFramebufferStatusEXT
    ( STACK_GET_DATA(target)
    );

  THROW_RESULT(GLenum)
}

EXDL_API(egl_framebufferTexture1DEXT)
{
  /* void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, textarget)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
  STACK_FMT_END()

    exdl_glFramebufferTexture1DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(textarget)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_framebufferTexture2DEXT)
{
  /* void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, textarget)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
  STACK_FMT_END()

    exdl_glFramebufferTexture2DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(textarget)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_framebufferTexture3DEXT)
{
  /* void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, textarget)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLint,  zoffset)
  STACK_FMT_END()

    exdl_glFramebufferTexture3DEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(textarget)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(zoffset)
    );
}

EXDL_API(egl_framebufferRenderbufferEXT)
{
  /* void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, renderbuffertarget)
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()

    exdl_glFramebufferRenderbufferEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(renderbuffertarget)
   ,  STACK_GET_DATA(renderbuffer)
    );
}

EXDL_API(egl_getFramebufferAttachmentParameterivEXT)
{
  /* void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params[1])
  FRAME_FMT_END()

    exdl_glGetFramebufferAttachmentParameterivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_generateMipmapEXT)
{
  /* void glGenerateMipmapEXT(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glGenerateMipmapEXT
    ( STACK_GET_DATA(target)
    );
}

/* GL_GREMEDY_string_marker */

EXDL_API(egl_stringMarkerGREMEDY)
{
  /* void glStringMarkerGREMEDY(GLsizei len, const GLvoid* string) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, len)
    STACK_FMT_DATA(GLvoid*, string)
  STACK_FMT_END()

    exdl_glStringMarkerGREMEDY
    ( STACK_GET_DATA(len)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(string)
  : (GLvoid*) sd->bin[0].base
    );
}

/* GL_EXT_packed_depth_stencil */
/* GL_EXT_stencil_clear_tag */

EXDL_API(egl_stencilClearTagEXT)
{
  /* void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, stencilTagBits)
    STACK_FMT_DATA(GLuint,  stencilClearTag)
  STACK_FMT_END()

    exdl_glStencilClearTagEXT
    ( STACK_GET_DATA(stencilTagBits)
   ,  STACK_GET_DATA(stencilClearTag)
    );
}

/* GL_EXT_texture_sRGB */
/* GL_EXT_framebuffer_blit */

EXDL_API(egl_blitFramebufferEXT)
{
  /* void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,      srcX0)
    STACK_FMT_DATA(GLint,      srcY0)
    STACK_FMT_DATA(GLint,      srcX1)
    STACK_FMT_DATA(GLint,      srcY1)
    STACK_FMT_DATA(GLint,      dstX0)
    STACK_FMT_DATA(GLint,      dstY0)
    STACK_FMT_DATA(GLint,      dstX1)
    STACK_FMT_DATA(GLint,      dstY1)
    STACK_FMT_DATA(GLbitfield, mask)
    STACK_FMT_DATA(GLenum,     filter)
  STACK_FMT_END()

    exdl_glBlitFramebufferEXT
    ( STACK_GET_DATA(srcX0)
   ,  STACK_GET_DATA(srcY0)
   ,  STACK_GET_DATA(srcX1)
   ,  STACK_GET_DATA(srcY1)
   ,  STACK_GET_DATA(dstX0)
   ,  STACK_GET_DATA(dstY0)
   ,  STACK_GET_DATA(dstX1)
   ,  STACK_GET_DATA(dstY1)
   ,  STACK_GET_DATA(mask)
   ,  STACK_GET_DATA(filter)
    );
}

/* GL_EXT_framebuffer_multisample */

EXDL_API(egl_renderbufferStorageMultisampleEXT)
{
  /* void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, samples)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glRenderbufferStorageMultisampleEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(samples)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

/* GL_MESAX_texture_stack */
/* GL_EXT_timer_query */

EXDL_API(egl_getQueryObjecti64vEXT)
{
  /* void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     id)
    STACK_FMT_DATA(GLenum,     pname)
    STACK_FMT_DATA(GLint64EXT, params[])
  STACK_FMT_END()

    exdl_glGetQueryObjecti64vEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getQueryObjectui64vEXT)
{
  /* void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      id)
    STACK_FMT_DATA(GLenum,      pname)
    STACK_FMT_DATA(GLuint64EXT, params[])
  STACK_FMT_END()

    exdl_glGetQueryObjectui64vEXT
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_EXT_gpu_program_parameters */

EXDL_API(egl_programEnvParameters4fvEXT)
{
  /* void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glProgramEnvParameters4fvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programLocalParameters4fvEXT)
{
  /* void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glProgramLocalParameters4fvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_APPLE_flush_buffer_range */

EXDL_API(egl_bufferParameteriAPPLE)
{
  /* void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glBufferParameteriAPPLE
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_flushMappedBufferRangeAPPLE)
{
  /* void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     target)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, size)
  STACK_FMT_END()

    exdl_glFlushMappedBufferRangeAPPLE
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
    );
}

/* GL_NV_gpu_program4 */

EXDL_API(egl_programLocalParameterI4iNV)
{
  /* void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
    STACK_FMT_DATA(GLint,  z)
    STACK_FMT_DATA(GLint,  w)
  STACK_FMT_END()

    exdl_glProgramLocalParameterI4iNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programLocalParameterI4ivNV)
{
  /* void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glProgramLocalParameterI4ivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programLocalParametersI4ivNV)
{
  /* void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   params[])
  STACK_FMT_END()

    exdl_glProgramLocalParametersI4ivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programLocalParameterI4uiNV)
{
  /* void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
    STACK_FMT_DATA(GLuint, y)
    STACK_FMT_DATA(GLuint, z)
    STACK_FMT_DATA(GLuint, w)
  STACK_FMT_END()

    exdl_glProgramLocalParameterI4uiNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programLocalParameterI4uivNV)
{
  /* void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glProgramLocalParameterI4uivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programLocalParametersI4uivNV)
{
  /* void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  params[])
  STACK_FMT_END()

    exdl_glProgramLocalParametersI4uivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programEnvParameterI4iNV)
{
  /* void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
    STACK_FMT_DATA(GLint,  z)
    STACK_FMT_DATA(GLint,  w)
  STACK_FMT_END()

    exdl_glProgramEnvParameterI4iNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programEnvParameterI4ivNV)
{
  /* void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glProgramEnvParameterI4ivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programEnvParametersI4ivNV)
{
  /* void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   params[])
  STACK_FMT_END()

    exdl_glProgramEnvParametersI4ivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programEnvParameterI4uiNV)
{
  /* void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
    STACK_FMT_DATA(GLuint, y)
    STACK_FMT_DATA(GLuint, z)
    STACK_FMT_DATA(GLuint, w)
  STACK_FMT_END()

    exdl_glProgramEnvParameterI4uiNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programEnvParameterI4uivNV)
{
  /* void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glProgramEnvParameterI4uivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programEnvParametersI4uivNV)
{
  /* void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  params[])
  STACK_FMT_END()

    exdl_glProgramEnvParametersI4uivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getProgramLocalParameterIivNV)
{
  /* void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetProgramLocalParameterIivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getProgramLocalParameterIuivNV)
{
  /* void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetProgramLocalParameterIuivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getProgramEnvParameterIivNV)
{
  /* void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetProgramEnvParameterIivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getProgramEnvParameterIuivNV)
{
  /* void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetProgramEnvParameterIuivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_NV_geometry_program4 */

EXDL_API(egl_programVertexLimitNV)
{
  /* void glProgramVertexLimitNV(GLenum target, GLint limit) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  limit)
  STACK_FMT_END()

    exdl_glProgramVertexLimitNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(limit)
    );
}

EXDL_API(egl_framebufferTextureEXT)
{
  /* void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
  STACK_FMT_END()

    exdl_glFramebufferTextureEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_framebufferTextureLayerEXT)
{
  /* void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLint,  layer)
  STACK_FMT_END()

    exdl_glFramebufferTextureLayerEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(layer)
    );
}

EXDL_API(egl_framebufferTextureFaceEXT)
{
  /* void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLenum, face)
  STACK_FMT_END()

    exdl_glFramebufferTextureFaceEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(face)
    );
}

/* GL_EXT_geometry_shader4 */

EXDL_API(egl_programParameteriEXT)
{
  /* void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  value)
  STACK_FMT_END()

    exdl_glProgramParameteriEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(value)
    );
}

/* GL_NV_vertex_program4 */

EXDL_API(egl_vertexAttribI1iEXT)
{
  /* void glVertexAttribI1iEXT(GLuint index, GLint x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
  STACK_FMT_END()

    exdl_glVertexAttribI1iEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttribI2iEXT)
{
  /* void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
  STACK_FMT_END()

    exdl_glVertexAttribI2iEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttribI3iEXT)
{
  /* void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
    STACK_FMT_DATA(GLint,  z)
  STACK_FMT_END()

    exdl_glVertexAttribI3iEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttribI4iEXT)
{
  /* void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
    STACK_FMT_DATA(GLint,  z)
    STACK_FMT_DATA(GLint,  w)
  STACK_FMT_END()

    exdl_glVertexAttribI4iEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttribI1uiEXT)
{
  /* void glVertexAttribI1uiEXT(GLuint index, GLuint x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
  STACK_FMT_END()

    exdl_glVertexAttribI1uiEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttribI2uiEXT)
{
  /* void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
    STACK_FMT_DATA(GLuint, y)
  STACK_FMT_END()

    exdl_glVertexAttribI2uiEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttribI3uiEXT)
{
  /* void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
    STACK_FMT_DATA(GLuint, y)
    STACK_FMT_DATA(GLuint, z)
  STACK_FMT_END()

    exdl_glVertexAttribI3uiEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttribI4uiEXT)
{
  /* void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
    STACK_FMT_DATA(GLuint, y)
    STACK_FMT_DATA(GLuint, z)
    STACK_FMT_DATA(GLuint, w)
  STACK_FMT_END()

    exdl_glVertexAttribI4uiEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttribI1ivEXT)
{
  /* void glVertexAttribI1ivEXT(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribI1ivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI2ivEXT)
{
  /* void glVertexAttribI2ivEXT(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribI2ivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI3ivEXT)
{
  /* void glVertexAttribI3ivEXT(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribI3ivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4ivEXT)
{
  /* void glVertexAttribI4ivEXT(GLuint index, const GLint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4ivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI1uivEXT)
{
  /* void glVertexAttribI1uivEXT(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI1uivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI2uivEXT)
{
  /* void glVertexAttribI2uivEXT(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI2uivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI3uivEXT)
{
  /* void glVertexAttribI3uivEXT(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI3uivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4uivEXT)
{
  /* void glVertexAttribI4uivEXT(GLuint index, const GLuint* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4uivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4bvEXT)
{
  /* void glVertexAttribI4bvEXT(GLuint index, const GLbyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLbyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4bvEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4svEXT)
{
  /* void glVertexAttribI4svEXT(GLuint index, const GLshort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLshort, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4svEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4ubvEXT)
{
  /* void glVertexAttribI4ubvEXT(GLuint index, const GLubyte* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLubyte, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4ubvEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribI4usvEXT)
{
  /* void glVertexAttribI4usvEXT(GLuint index, const GLushort* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLushort, v[])
  STACK_FMT_END()

    exdl_glVertexAttribI4usvEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribIPointerEXT)
{
  /* void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glVertexAttribIPointerEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getVertexAttribIivEXT)
{
  /* void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribIivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getVertexAttribIuivEXT)
{
  /* void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetVertexAttribIuivEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_EXT_gpu_shader4 */

EXDL_API(egl_getUniformuivEXT)
{
  /* void glGetUniformuivEXT(GLuint program, GLint location, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetUniformuivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_bindFragDataLocationEXT)
{
  /* void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLuint, color)
    STACK_FMT_DATA(GLchar, name[])
  STACK_FMT_END()

    exdl_glBindFragDataLocationEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(color)
   ,  STACK_GET_ADDR(name)
    );
}

EXDL_API(egl_getFragDataLocationEXT)
{
  /* GLint glGetFragDataLocationEXT(GLuint program, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLchar, name[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetFragDataLocationEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_uniform1uiEXT)
{
  /* void glUniform1uiEXT(GLint location, GLuint v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
  STACK_FMT_END()

    exdl_glUniform1uiEXT
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_uniform2uiEXT)
{
  /* void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
  STACK_FMT_END()

    exdl_glUniform2uiEXT
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_uniform3uiEXT)
{
  /* void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
    STACK_FMT_DATA(GLuint, v2)
  STACK_FMT_END()

    exdl_glUniform3uiEXT
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_uniform4uiEXT)
{
  /* void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
    STACK_FMT_DATA(GLuint, v2)
    STACK_FMT_DATA(GLuint, v3)
  STACK_FMT_END()

    exdl_glUniform4uiEXT
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_uniform1uivEXT)
{
  /* void glUniform1uivEXT(GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glUniform1uivEXT
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform2uivEXT)
{
  /* void glUniform2uivEXT(GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glUniform2uivEXT
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform3uivEXT)
{
  /* void glUniform3uivEXT(GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glUniform3uivEXT
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform4uivEXT)
{
  /* void glUniform4uivEXT(GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glUniform4uivEXT
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

/* GL_EXT_draw_instanced */

EXDL_API(egl_drawArraysInstancedEXT)
{
  /* void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLint,   start)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLsizei, primcount)
  STACK_FMT_END()

    exdl_glDrawArraysInstancedEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(start)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(primcount)
    );
}

EXDL_API(egl_drawElementsInstancedEXT)
{
  /* void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, indices)
    STACK_FMT_DATA(GLsizei, primcount)
  STACK_FMT_END()

    exdl_glDrawElementsInstancedEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(indices)
  : (GLvoid*) sd->bin[0].base
   ,  STACK_GET_DATA(primcount)
    );
}

/* GL_EXT_packed_float */
/* GL_EXT_texture_array */
/* GL_EXT_texture_buffer_object */

EXDL_API(egl_texBufferEXT)
{
  /* void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, internalformat)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glTexBufferEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(buffer)
    );
}

/* GL_EXT_texture_compression_latc */
/* GL_EXT_texture_compression_rgtc */
/* GL_EXT_texture_shared_exponent */
/* GL_NV_depth_buffer_float */

EXDL_API(egl_depthRangedNV)
{
  /* void glDepthRangedNV(GLdouble zNear, GLdouble zFar) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, zNear)
    STACK_FMT_DATA(GLdouble, zFar)
  STACK_FMT_END()

    exdl_glDepthRangedNV
    ( STACK_GET_DATA(zNear)
   ,  STACK_GET_DATA(zFar)
    );
}

EXDL_API(egl_clearDepthdNV)
{
  /* void glClearDepthdNV(GLdouble depth) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, depth)
  STACK_FMT_END()

    exdl_glClearDepthdNV
    ( STACK_GET_DATA(depth)
    );
}

EXDL_API(egl_depthBoundsdNV)
{
  /* void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLdouble, zmin)
    STACK_FMT_DATA(GLdouble, zmax)
  STACK_FMT_END()

    exdl_glDepthBoundsdNV
    ( STACK_GET_DATA(zmin)
   ,  STACK_GET_DATA(zmax)
    );
}

/* GL_NV_fragment_program4 */
/* GL_NV_framebuffer_multisample_coverage */

EXDL_API(egl_renderbufferStorageMultisampleCoverageNV)
{
  /* void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, coverageSamples)
    STACK_FMT_DATA(GLsizei, colorSamples)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glRenderbufferStorageMultisampleCoverageNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(coverageSamples)
   ,  STACK_GET_DATA(colorSamples)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

/* GL_EXT_framebuffer_sRGB */
/* GL_NV_geometry_shader4 */
/* GL_NV_parameter_buffer_object */

EXDL_API(egl_programBufferParametersfvNV)
{
  /* void glProgramBufferParametersfvNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  buffer)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glProgramBufferParametersfvNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programBufferParametersIivNV)
{
  /* void glProgramBufferParametersIivNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  buffer)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   params[])
  STACK_FMT_END()

    exdl_glProgramBufferParametersIivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programBufferParametersIuivNV)
{
  /* void glProgramBufferParametersIuivNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  buffer)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  params[])
  STACK_FMT_END()

    exdl_glProgramBufferParametersIuivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_EXT_draw_buffers2 */

EXDL_API(egl_colorMaskIndexedEXT)
{
  /* void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLboolean, r)
    STACK_FMT_DATA(GLboolean, g)
    STACK_FMT_DATA(GLboolean, b)
    STACK_FMT_DATA(GLboolean, a)
  STACK_FMT_END()

    exdl_glColorMaskIndexedEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(r)
   ,  STACK_GET_DATA(g)
   ,  STACK_GET_DATA(b)
   ,  STACK_GET_DATA(a)
    );
}

EXDL_API(egl_getBooleanIndexedvEXT)
{
  /* void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    target)
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLboolean, data[])
  STACK_FMT_END()

    exdl_glGetBooleanIndexedvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getIntegerIndexedvEXT)
{
  /* void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  data[])
  STACK_FMT_END()

    exdl_glGetIntegerIndexedvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_enableIndexedEXT)
{
  /* void glEnableIndexedEXT(GLenum target, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glEnableIndexedEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
    );
}

EXDL_API(egl_disableIndexedEXT)
{
  /* void glDisableIndexedEXT(GLenum target, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glDisableIndexedEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
    );
}

EXDL_API(egl_isEnabledIndexedEXT)
{
  /* GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsEnabledIndexedEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
    );

  THROW_RESULT(GLboolean)
}

/* GL_NV_transform_feedback */

EXDL_API(egl_beginTransformFeedbackNV)
{
  /* void glBeginTransformFeedbackNV(GLenum primitiveMode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, primitiveMode)
  STACK_FMT_END()

    exdl_glBeginTransformFeedbackNV
    ( STACK_GET_DATA(primitiveMode)
    );
}

EXDL_API(egl_endTransformFeedbackNV)
{
  /* void glEndTransformFeedbackNV(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glEndTransformFeedbackNV
  (
  );
}

EXDL_API(egl_transformFeedbackAttribsNV)
{
  /* void glTransformFeedbackAttribsNV(GLuint count, const GLint* attribs, GLenum bufferMode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, count)
    STACK_FMT_DATA(GLenum, bufferMode)
    STACK_FMT_DATA(GLint,  attribs[])
  STACK_FMT_END()

    exdl_glTransformFeedbackAttribsNV
    ( STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(attribs)
   ,  STACK_GET_DATA(bufferMode)
    );
}

EXDL_API(egl_bindBufferRangeNV)
{
  /* void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     target)
    STACK_FMT_DATA(GLuint,     index)
    STACK_FMT_DATA(GLuint,     buffer)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, size)
  STACK_FMT_END()

    exdl_glBindBufferRangeNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
    );
}

EXDL_API(egl_bindBufferOffsetNV)
{
  /* void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLuint,   buffer)
    STACK_FMT_DATA(GLintptr, offset)
  STACK_FMT_END()

    exdl_glBindBufferOffsetNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
    );
}

EXDL_API(egl_bindBufferBaseNV)
{
  /* void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glBindBufferBaseNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_transformFeedbackVaryingsNV)
{
  /* void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLchar* locations, GLenum bufferMode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLenum,  bufferMode)
    STACK_FMT_DATA(GLchar,  locations[])
  STACK_FMT_END()

    exdl_glTransformFeedbackVaryingsNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(locations)
   ,  STACK_GET_DATA(bufferMode)
    );
}

EXDL_API(egl_activeVaryingNV)
{
  /* void glActiveVaryingNV(GLuint program, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLchar, name[])
  STACK_FMT_END()

    exdl_glActiveVaryingNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_ADDR(name)
    );
}

EXDL_API(egl_getVaryingLocationNV)
{
  /* GLint glGetVaryingLocationNV(GLuint program, const GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLchar, name[])
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetVaryingLocationNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_ADDR(name)
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_getActiveVaryingNV)
{
  /* void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  bufSize)
    STACK_FMT_DATA(GLsizei*, length)
    STACK_FMT_DATA(GLsizei*, size)
    STACK_FMT_DATA(GLenum*,  type)
    STACK_FMT_DATA(GLchar*,  name)
  STACK_FMT_END()

    exdl_glGetActiveVaryingNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(bufSize)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(name)
    );
}

EXDL_API(egl_getTransformFeedbackVaryingNV)
{
  /* void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint* location) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint*, location)
  STACK_FMT_END()

    exdl_glGetTransformFeedbackVaryingNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(location)
    );
}

/* GL_EXT_bindable_uniform */

EXDL_API(egl_uniformBufferEXT)
{
  /* void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glUniformBufferEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_getUniformBufferSizeEXT)
{
  /* GLint glGetUniformBufferSizeEXT(GLuint program, GLint location) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
  STACK_FMT_END()

  CATCH_RESULT(GLint)

    exdl_glGetUniformBufferSizeEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
    );

  THROW_RESULT(GLint)
}

EXDL_API(egl_getUniformOffsetEXT)
{
  /* GLintptr glGetUniformOffsetEXT(GLuint program, GLint location) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
  STACK_FMT_END()

  CATCH_RESULT(GLintptr)

    exdl_glGetUniformOffsetEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
    );

  THROW_POINTER();
}

/* GL_EXT_texture_integer */

EXDL_API(egl_texParameterIivEXT)
{
  /* void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glTexParameterIivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_texParameterIuivEXT)
{
  /* void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glTexParameterIuivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getTexParameterIivEXT)
{
  /* void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetTexParameterIivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getTexParameterIuivEXT)
{
  /* void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetTexParameterIuivEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_clearColorIiEXT)
{
  /* void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint, red)
    STACK_FMT_DATA(GLint, green)
    STACK_FMT_DATA(GLint, blue)
    STACK_FMT_DATA(GLint, alpha)
  STACK_FMT_END()

    exdl_glClearColorIiEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
   ,  STACK_GET_DATA(alpha)
    );
}

EXDL_API(egl_clearColorIuiEXT)
{
  /* void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, red)
    STACK_FMT_DATA(GLuint, green)
    STACK_FMT_DATA(GLuint, blue)
    STACK_FMT_DATA(GLuint, alpha)
  STACK_FMT_END()

    exdl_glClearColorIuiEXT
    ( STACK_GET_DATA(red)
   ,  STACK_GET_DATA(green)
   ,  STACK_GET_DATA(blue)
   ,  STACK_GET_DATA(alpha)
    );
}

/* GL_GREMEDY_frame_terminator */

EXDL_API(egl_frameTerminatorGREMEDY)
{
  /* void glFrameTerminatorGREMEDY(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glFrameTerminatorGREMEDY
    (
    );
}

/* GL_NV_conditional_render */

EXDL_API(egl_beginConditionalRenderNV)
{
  /* void glBeginConditionalRenderNV(GLuint id, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glBeginConditionalRenderNV
    ( STACK_GET_DATA(id)
   ,  STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_endConditionalRenderNV)
{
  /* void glEndConditionalRenderNV(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glEndConditionalRenderNV
    (
    );
}

/* GL_NV_present_video */

EXDL_API(egl_presentFrameKeyedNV)
{
  /* void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      video_slot)
    STACK_FMT_DATA(GLuint64EXT, minPresentTime)
    STACK_FMT_DATA(GLuint,      beginPresentTimeId)
    STACK_FMT_DATA(GLuint,      presentDurationId)
    STACK_FMT_DATA(GLenum,      type)
    STACK_FMT_DATA(GLenum,      target0)
    STACK_FMT_DATA(GLuint,      fill0)
    STACK_FMT_DATA(GLuint,      key0)
    STACK_FMT_DATA(GLenum,      target1)
    STACK_FMT_DATA(GLuint,      fill1)
    STACK_FMT_DATA(GLuint,      key1)
  STACK_FMT_END()

    exdl_glPresentFrameKeyedNV
    ( STACK_GET_DATA(video_slot)
   ,  STACK_GET_DATA(minPresentTime)
   ,  STACK_GET_DATA(beginPresentTimeId)
   ,  STACK_GET_DATA(presentDurationId)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(target0)
   ,  STACK_GET_DATA(fill0)
   ,  STACK_GET_DATA(key0)
   ,  STACK_GET_DATA(target1)
   ,  STACK_GET_DATA(fill1)
   ,  STACK_GET_DATA(key1)
    );
}

EXDL_API(egl_presentFrameDualFillNV)
{
  /* void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      video_slot)
    STACK_FMT_DATA(GLuint64EXT, minPresentTime)
    STACK_FMT_DATA(GLuint,      beginPresentTimeId)
    STACK_FMT_DATA(GLuint,      presentDurationId)
    STACK_FMT_DATA(GLenum,      type)
    STACK_FMT_DATA(GLenum,      target0)
    STACK_FMT_DATA(GLuint,      fill0)
    STACK_FMT_DATA(GLenum,      target1)
    STACK_FMT_DATA(GLuint,      fill1)
    STACK_FMT_DATA(GLenum,      target2)
    STACK_FMT_DATA(GLuint,      fill2)
    STACK_FMT_DATA(GLenum,      target3)
    STACK_FMT_DATA(GLuint,      fill3)
  STACK_FMT_END()

    exdl_glPresentFrameDualFillNV
    ( STACK_GET_DATA(video_slot)
   ,  STACK_GET_DATA(minPresentTime)
   ,  STACK_GET_DATA(beginPresentTimeId)
   ,  STACK_GET_DATA(presentDurationId)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(target0)
   ,  STACK_GET_DATA(fill0)
   ,  STACK_GET_DATA(target1)
   ,  STACK_GET_DATA(fill1)
   ,  STACK_GET_DATA(target2)
   ,  STACK_GET_DATA(fill2)
   ,  STACK_GET_DATA(target3)
   ,  STACK_GET_DATA(fill3)
    );
}

EXDL_API(egl_getVideoivNV)
{
  /* void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_slot)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint*, params)
  STACK_FMT_END()

    exdl_glGetVideoivNV
    ( STACK_GET_DATA(video_slot)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_getVideouivNV)
{
  /* void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  video_slot)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLuint*, params)
  STACK_FMT_END()

    exdl_glGetVideouivNV
    ( STACK_GET_DATA(video_slot)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_getVideoi64vNV)
{
  /* void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      video_slot)
    STACK_FMT_DATA(GLenum,      pname)
    STACK_FMT_DATA(GLint64EXT*, params)
  STACK_FMT_END()

    exdl_glGetVideoi64vNV
    ( STACK_GET_DATA(video_slot)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_getVideoui64vNV)
{
  /* void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       video_slot)
    STACK_FMT_DATA(GLenum,       pname)
    STACK_FMT_DATA(GLuint64EXT*, params)
  STACK_FMT_END()

    exdl_glGetVideoui64vNV
    ( STACK_GET_DATA(video_slot)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(params)
    );
}

EXDL_API(egl_videoParameterivNV)
{
  /* void glVideoParameterivNV(GLuint video_slot, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_slot)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint, params[])
  STACK_FMT_END()

    exdl_glVideoParameterivNV
    ( STACK_GET_DATA(video_slot)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_EXT_transform_feedback */

EXDL_API(egl_beginTransformFeedbackEXT)
{
  /* void glBeginTransformFeedbackEXT(GLenum primitiveMode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, primitiveMode)
  STACK_FMT_END()

    exdl_glBeginTransformFeedbackEXT
    ( STACK_GET_DATA(primitiveMode)
    );
}

EXDL_API(egl_endTransformFeedbackEXT)
{
  /* void glEndTransformFeedbackEXT(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

    exdl_glEndTransformFeedbackEXT
    (
    );
}

EXDL_API(egl_bindBufferRangeEXT)
{
  /* void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,     target)
    STACK_FMT_DATA(GLuint,     index)
    STACK_FMT_DATA(GLuint,     buffer)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, size)
  STACK_FMT_END()

    exdl_glBindBufferRangeEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
    );
}

EXDL_API(egl_bindBufferOffsetEXT)
{
  /* void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLuint,   buffer)
    STACK_FMT_DATA(GLintptr, offset)
  STACK_FMT_END()

    exdl_glBindBufferOffsetEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
    );
}

EXDL_API(egl_bindBufferBaseEXT)
{
  /* void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glBindBufferBaseEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_transformFeedbackVaryingsEXT)
{
  /* void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar** varyings, GLenum bufferMode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,         program)
    STACK_FMT_DATA(GLsizei,        count)
    STACK_FMT_DATA(const GLchar**, varyings)
    STACK_FMT_DATA(GLenum,         bufferMode)
  STACK_FMT_END()

    exdl_glTransformFeedbackVaryingsEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(varyings)
   ,  STACK_GET_DATA(bufferMode)
    );
}

EXDL_API(egl_getTransformFeedbackVaryingEXT)
{
  /* void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLsizei,  bufSize)
    STACK_FMT_DATA(GLsizei*, length)
    STACK_FMT_DATA(GLsizei*, size)
    STACK_FMT_DATA(GLenum*,  type)
    STACK_FMT_DATA(GLchar*,  name)
  STACK_FMT_END()

    exdl_glGetTransformFeedbackVaryingEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(bufSize)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(name)
    );
}

/* GL_EXT_direct_state_access */

EXDL_API(egl_clientAttribDefaultEXT)
{
  /* void glClientAttribDefaultEXT(GLbitfield mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbitfield, mask)
  STACK_FMT_END()

    exdl_glClientAttribDefaultEXT
    ( STACK_GET_DATA(mask)
    );
}

EXDL_API(egl_pushClientAttribDefaultEXT)
{
  /* void glPushClientAttribDefaultEXT(GLbitfield mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbitfield, mask)
  STACK_FMT_END()

    exdl_glPushClientAttribDefaultEXT
    ( STACK_GET_DATA(mask)
    );
}

EXDL_API(egl_matrixLoadfEXT)
{
  /* void glMatrixLoadfEXT(GLenum mode, const GLfloat* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLfloat, m[])
  STACK_FMT_END()

    exdl_glMatrixLoadfEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_matrixLoaddEXT)
{
  /* void glMatrixLoaddEXT(GLenum mode, const GLdouble* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLdouble, m[])
  STACK_FMT_END()

    exdl_glMatrixLoaddEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_matrixMultfEXT)
{
  /* void glMatrixMultfEXT(GLenum mode, const GLfloat* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLfloat, m[])
  STACK_FMT_END()

    exdl_glMatrixMultfEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_matrixMultdEXT)
{
  /* void glMatrixMultdEXT(GLenum mode, const GLdouble* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLdouble, m[])
  STACK_FMT_END()

    exdl_glMatrixMultdEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_matrixLoadIdentityEXT)
{
  /* void glMatrixLoadIdentityEXT(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glMatrixLoadIdentityEXT
    ( STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_matrixRotatefEXT)
{
  /* void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLfloat, angle)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glMatrixRotatefEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(angle)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_matrixRotatedEXT)
{
  /* void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLdouble, angle)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glMatrixRotatedEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(angle)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_matrixScalefEXT)
{
  /* void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glMatrixScalefEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_matrixScaledEXT)
{
  /* void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glMatrixScaledEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_matrixTranslatefEXT)
{
  /* void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
  STACK_FMT_END()

    exdl_glMatrixTranslatefEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_matrixTranslatedEXT)
{
  /* void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glMatrixTranslatedEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_matrixFrustumEXT)
{
  /* void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLdouble, left)
    STACK_FMT_DATA(GLdouble, right)
    STACK_FMT_DATA(GLdouble, bottom)
    STACK_FMT_DATA(GLdouble, top)
    STACK_FMT_DATA(GLdouble, zNear)
    STACK_FMT_DATA(GLdouble, zFar)
  STACK_FMT_END()

    exdl_glMatrixFrustumEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(left)
   ,  STACK_GET_DATA(right)
   ,  STACK_GET_DATA(bottom)
   ,  STACK_GET_DATA(top)
   ,  STACK_GET_DATA(zNear)
   ,  STACK_GET_DATA(zFar)
    );
}

EXDL_API(egl_matrixOrthoEXT)
{
  /* void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLdouble, left)
    STACK_FMT_DATA(GLdouble, right)
    STACK_FMT_DATA(GLdouble, bottom)
    STACK_FMT_DATA(GLdouble, top)
    STACK_FMT_DATA(GLdouble, zNear)
    STACK_FMT_DATA(GLdouble, zFar)
  STACK_FMT_END()

    exdl_glMatrixOrthoEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(left)
   ,  STACK_GET_DATA(right)
   ,  STACK_GET_DATA(bottom)
   ,  STACK_GET_DATA(top)
   ,  STACK_GET_DATA(zNear)
   ,  STACK_GET_DATA(zFar)
    );
}

EXDL_API(egl_matrixPopEXT)
{
  /* void glMatrixPopEXT(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glMatrixPopEXT
    ( STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_matrixPushEXT)
{
  /* void glMatrixPushEXT(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glMatrixPushEXT
    ( STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_matrixLoadTransposefEXT)
{
  /* void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLfloat, m[])
  STACK_FMT_END()

    exdl_glMatrixLoadTransposefEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_matrixLoadTransposedEXT)
{
  /* void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLdouble, m[])
  STACK_FMT_END()

    exdl_glMatrixLoadTransposedEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_matrixMultTransposefEXT)
{
  /* void glMatrixMultTransposefEXT(GLenum mode, const GLfloat* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  mode)
    STACK_FMT_DATA(GLfloat, m[])
  STACK_FMT_END()

    exdl_glMatrixMultTransposefEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_matrixMultTransposedEXT)
{
  /* void glMatrixMultTransposedEXT(GLenum mode, const GLdouble* m) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   mode)
    STACK_FMT_DATA(GLdouble, m[])
  STACK_FMT_END()

    exdl_glMatrixMultTransposedEXT
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_ADDR(m)
    );
}

EXDL_API(egl_textureParameterfEXT)
{
  /* void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glTextureParameterfEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_textureParameterfvEXT)
{
  /* void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glTextureParameterfvEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_textureParameteriEXT)
{
  /* void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glTextureParameteriEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_textureParameterivEXT)
{
  /* void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glTextureParameterivEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_textureImage1DEXT)
{
  /* void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTextureImage1DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_textureImage2DEXT)
{
  /* void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTextureImage2DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_textureSubImage1DEXT)
{
  /* void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTextureSubImage1DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_textureSubImage2DEXT)
{
  /* void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTextureSubImage2DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_copyTextureImage1DEXT)
{
  /* void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLint,   border)
  STACK_FMT_END()

    exdl_glCopyTextureImage1DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(border)
    );
}

EXDL_API(egl_copyTextureImage2DEXT)
{
  /* void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLint,   border)
  STACK_FMT_END()

    exdl_glCopyTextureImage2DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(border)
    );
}

EXDL_API(egl_copyTextureSubImage1DEXT)
{
  /* void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glCopyTextureSubImage1DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
    );
}

EXDL_API(egl_copyTextureSubImage2DEXT)
{
  /* void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glCopyTextureSubImage2DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_getTextureImageEXT)
{
  /* void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glGetTextureImageEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getTextureParameterfvEXT)
{
  /* void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetTextureParameterfvEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getTextureParameterivEXT)
{
  /* void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetTextureParameterivEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getTextureLevelParameterfvEXT)
{
  /* void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetTextureLevelParameterfvEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getTextureLevelParameterivEXT)
{
  /* void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetTextureLevelParameterivEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_textureImage3DEXT)
{
  /* void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTextureImage3DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_textureSubImage3DEXT)
{
  /* void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glTextureSubImage3DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_copyTextureSubImage3DEXT)
{
  /* void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glCopyTextureSubImage3DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_multiTexParameterfEXT)
{
  /* void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glMultiTexParameterfEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_multiTexParameterfvEXT)
{
  /* void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glMultiTexParameterfvEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_multiTexParameteriEXT)
{
  /* void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glMultiTexParameteriEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_multiTexParameterivEXT)
{
  /* void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glMultiTexParameterivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_multiTexImage1DEXT)
{
  /* void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glMultiTexImage1DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_multiTexImage2DEXT)
{
  /* void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glMultiTexImage2DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_multiTexSubImage1DEXT)
{
  /* void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glMultiTexSubImage1DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_multiTexSubImage2DEXT)
{
  /* void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glMultiTexSubImage2DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_copyMultiTexImage1DEXT)
{
  /* void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLint,   border)
  STACK_FMT_END()

    exdl_glCopyMultiTexImage1DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(border)
    );
}

EXDL_API(egl_copyMultiTexImage2DEXT)
{
  /* void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLint,   border)
  STACK_FMT_END()

    exdl_glCopyMultiTexImage2DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(border)
    );
}

EXDL_API(egl_copyMultiTexSubImage1DEXT)
{
  /* void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
  STACK_FMT_END()

    exdl_glCopyMultiTexSubImage1DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
    );
}

EXDL_API(egl_copyMultiTexSubImage2DEXT)
{
  /* void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glCopyMultiTexSubImage2DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_getMultiTexImageEXT)
{
  /* void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glGetMultiTexImageEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getMultiTexParameterfvEXT)
{
  /* void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetMultiTexParameterfvEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexParameterivEXT)
{
  /* void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetMultiTexParameterivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexLevelParameterfvEXT)
{
  /* void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetMultiTexLevelParameterfvEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexLevelParameterivEXT)
{
  /* void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetMultiTexLevelParameterivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_multiTexImage3DEXT)
{
  /* void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glMultiTexImage3DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_multiTexSubImage3DEXT)
{
  /* void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLvoid*, pixels)
  STACK_FMT_END()

    exdl_glMultiTexSubImage3DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(type)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pixels)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_copyMultiTexSubImage3DEXT)
{
  /* void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLint,   x)
    STACK_FMT_DATA(GLint,   y)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glCopyMultiTexSubImage3DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_bindMultiTextureEXT)
{
  /* void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, texture)
  STACK_FMT_END()

    exdl_glBindMultiTextureEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(texture)
    );
}

EXDL_API(egl_enableClientStateIndexedEXT)
{
  /* void glEnableClientStateIndexedEXT(GLenum array, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, array)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glEnableClientStateIndexedEXT
    ( STACK_GET_DATA(array)
   ,  STACK_GET_DATA(index)
    );
}

EXDL_API(egl_disableClientStateIndexedEXT)
{
  /* void glDisableClientStateIndexedEXT(GLenum array, GLuint index) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, array)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

    exdl_glDisableClientStateIndexedEXT
    ( STACK_GET_DATA(array)
   ,  STACK_GET_DATA(index)
    );
}

EXDL_API(egl_multiTexCoordPointerEXT)
{
  /* void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid*, pointer)
  STACK_FMT_END()

    exdl_glMultiTexCoordPointerEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(pointer)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_multiTexEnvfEXT)
{
  /* void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glMultiTexEnvfEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_multiTexEnvfvEXT)
{
  /* void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glMultiTexEnvfvEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_multiTexEnviEXT)
{
  /* void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glMultiTexEnviEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_multiTexEnvivEXT)
{
  /* void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glMultiTexEnvivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_multiTexGendEXT)
{
  /* void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   texunit)
    STACK_FMT_DATA(GLenum,   coord)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLdouble, param)
  STACK_FMT_END()

    exdl_glMultiTexGendEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_multiTexGendvEXT)
{
  /* void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   texunit)
    STACK_FMT_DATA(GLenum,   coord)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLdouble, params[])
  STACK_FMT_END()

    exdl_glMultiTexGendvEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_multiTexGenfEXT)
{
  /* void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  coord)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, param)
  STACK_FMT_END()

    exdl_glMultiTexGenfEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_multiTexGenfvEXT)
{
  /* void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  coord)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glMultiTexGenfvEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_multiTexGeniEXT)
{
  /* void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, coord)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  param)
  STACK_FMT_END()

    exdl_glMultiTexGeniEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(param)
    );
}

EXDL_API(egl_multiTexGenivEXT)
{
  /* void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, coord)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glMultiTexGenivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexEnvfvEXT)
{
  /* void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetMultiTexEnvfvEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexEnvivEXT)
{
  /* void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetMultiTexEnvivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexGendvEXT)
{
  /* void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   texunit)
    STACK_FMT_DATA(GLenum,   coord)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLdouble, params[])
  STACK_FMT_END()

    exdl_glGetMultiTexGendvEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexGenfvEXT)
{
  /* void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  coord)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetMultiTexGenfvEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexGenivEXT)
{
  /* void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, coord)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetMultiTexGenivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(coord)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getFloatIndexedvEXT)
{
  /* void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, data[])
  STACK_FMT_END()

    exdl_glGetFloatIndexedvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getDoubleIndexedvEXT)
{
  /* void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, data[])
  STACK_FMT_END()

    exdl_glGetDoubleIndexedvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(data)
    );
}

EXDL_API(egl_getPointerIndexedvEXT)
{
  /* void glGetPointerIndexedvEXT(GLenum target, GLuint index, GLvoid** data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLvoid**, data)
  STACK_FMT_END()

    exdl_glGetPointerIndexedvEXT
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid**) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTextureImage3DEXT)
{
  /* void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedTextureImage3DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTextureImage2DEXT)
{
  /* void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedTextureImage2DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTextureImage1DEXT)
{
  /* void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedTextureImage1DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTextureSubImage3DEXT)
{
  /* void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedTextureSubImage3DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTextureSubImage2DEXT)
{
  /* void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedTextureSubImage2DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedTextureSubImage1DEXT)
{
  /* void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedTextureSubImage1DEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getCompressedTextureImageEXT)
{
  /* void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, GLvoid* img) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  texture)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   lod)
    STACK_FMT_DATA(GLvoid*, img)
  STACK_FMT_END()

    exdl_glGetCompressedTextureImageEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(lod)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(img)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedMultiTexImage3DEXT)
{
  /* void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedMultiTexImage3DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedMultiTexImage2DEXT)
{
  /* void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedMultiTexImage2DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedMultiTexImage1DEXT)
{
  /* void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLint,   border)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedMultiTexImage1DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(border)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedMultiTexSubImage3DEXT)
{
  /* void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLint,   zoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedMultiTexSubImage3DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(zoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedMultiTexSubImage2DEXT)
{
  /* void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLint,   yoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedMultiTexSubImage2DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(yoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_compressedMultiTexSubImage1DEXT)
{
  /* void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* bits) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   level)
    STACK_FMT_DATA(GLint,   xoffset)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, imageSize)
    STACK_FMT_DATA(GLvoid*, bits)
  STACK_FMT_END()

    exdl_glCompressedMultiTexSubImage1DEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(xoffset)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(imageSize)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(bits)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_getCompressedMultiTexImageEXT)
{
  /* void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, GLvoid* img) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  texunit)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLint,   lod)
    STACK_FMT_DATA(GLvoid*, img)
  STACK_FMT_END()

    exdl_glGetCompressedMultiTexImageEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(lod)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(img)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_namedProgramStringEXT)
{
  /* void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const GLvoid* string) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  format)
    STACK_FMT_DATA(GLsizei, len)
    STACK_FMT_DATA(GLvoid*, string)
  STACK_FMT_END()

    exdl_glNamedProgramStringEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(format)
   ,  STACK_GET_DATA(len)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(string)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_namedProgramLocalParameter4dEXT)
{
  /* void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glNamedProgramLocalParameter4dEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_namedProgramLocalParameter4dvEXT)
{
  /* void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, params[])
  STACK_FMT_END()

    exdl_glNamedProgramLocalParameter4dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_namedProgramLocalParameter4fEXT)
{
  /* void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, x)
    STACK_FMT_DATA(GLfloat, y)
    STACK_FMT_DATA(GLfloat, z)
    STACK_FMT_DATA(GLfloat, w)
  STACK_FMT_END()

    exdl_glNamedProgramLocalParameter4fEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_namedProgramLocalParameter4fvEXT)
{
  /* void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glNamedProgramLocalParameter4fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getNamedProgramLocalParameterdvEXT)
{
  /* void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLenum,   target)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, params[])
  STACK_FMT_END()

    exdl_glGetNamedProgramLocalParameterdvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getNamedProgramLocalParameterfvEXT)
{
  /* void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glGetNamedProgramLocalParameterfvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getNamedProgramivEXT)
{
  /* void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetNamedProgramivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getNamedProgramStringEXT)
{
  /* void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, GLvoid* string) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLvoid*, string)
  STACK_FMT_END()

    exdl_glGetNamedProgramStringEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(string)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_namedProgramLocalParameters4fvEXT)
{
  /* void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, params[])
  STACK_FMT_END()

    exdl_glNamedProgramLocalParameters4fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_namedProgramLocalParameterI4iEXT)
{
  /* void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  x)
    STACK_FMT_DATA(GLint,  y)
    STACK_FMT_DATA(GLint,  z)
    STACK_FMT_DATA(GLint,  w)
  STACK_FMT_END()

    exdl_glNamedProgramLocalParameterI4iEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_namedProgramLocalParameterI4ivEXT)
{
  /* void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glNamedProgramLocalParameterI4ivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_namedProgramLocalParametersI4ivEXT)
{
  /* void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   params[])
  STACK_FMT_END()

    exdl_glNamedProgramLocalParametersI4ivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_namedProgramLocalParameterI4uiEXT)
{
  /* void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, x)
    STACK_FMT_DATA(GLuint, y)
    STACK_FMT_DATA(GLuint, z)
    STACK_FMT_DATA(GLuint, w)
  STACK_FMT_END()

    exdl_glNamedProgramLocalParameterI4uiEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_namedProgramLocalParameterI4uivEXT)
{
  /* void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glNamedProgramLocalParameterI4uivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_namedProgramLocalParametersI4uivEXT)
{
  /* void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  params[])
  STACK_FMT_END()

    exdl_glNamedProgramLocalParametersI4uivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getNamedProgramLocalParameterIivEXT)
{
  /* void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetNamedProgramLocalParameterIivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getNamedProgramLocalParameterIuivEXT)
{
  /* void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetNamedProgramLocalParameterIuivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_textureParameterIivEXT)
{
  /* void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glTextureParameterIivEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_textureParameterIuivEXT)
{
  /* void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glTextureParameterIuivEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getTextureParameterIivEXT)
{
  /* void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetTextureParameterIivEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getTextureParameterIuivEXT)
{
  /* void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetTextureParameterIuivEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_multiTexParameterIivEXT)
{
  /* void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glMultiTexParameterIivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_multiTexParameterIuivEXT)
{
  /* void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glMultiTexParameterIuivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexParameterIivEXT)
{
  /* void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetMultiTexParameterIivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getMultiTexParameterIuivEXT)
{
  /* void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLuint, params[])
  STACK_FMT_END()

    exdl_glGetMultiTexParameterIuivEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_programUniform1fEXT)
{
  /* void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
  STACK_FMT_END()

    exdl_glProgramUniform1fEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_programUniform2fEXT)
{
  /* void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
  STACK_FMT_END()

    exdl_glProgramUniform2fEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_programUniform3fEXT)
{
  /* void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
    STACK_FMT_DATA(GLfloat, v2)
  STACK_FMT_END()

    exdl_glProgramUniform3fEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_programUniform4fEXT)
{
  /* void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLfloat, v0)
    STACK_FMT_DATA(GLfloat, v1)
    STACK_FMT_DATA(GLfloat, v2)
    STACK_FMT_DATA(GLfloat, v3)
  STACK_FMT_END()

    exdl_glProgramUniform4fEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_programUniform1iEXT)
{
  /* void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLint,  v0)
  STACK_FMT_END()

    exdl_glProgramUniform1iEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_programUniform2iEXT)
{
  /* void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLint,  v0)
    STACK_FMT_DATA(GLint,  v1)
  STACK_FMT_END()

    exdl_glProgramUniform2iEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_programUniform3iEXT)
{
  /* void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLint,  v0)
    STACK_FMT_DATA(GLint,  v1)
    STACK_FMT_DATA(GLint,  v2)
  STACK_FMT_END()

    exdl_glProgramUniform3iEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_programUniform4iEXT)
{
  /* void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLint,  v0)
    STACK_FMT_DATA(GLint,  v1)
    STACK_FMT_DATA(GLint,  v2)
    STACK_FMT_DATA(GLint,  v3)
  STACK_FMT_END()

    exdl_glProgramUniform4iEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_programUniform1fvEXT)
{
  /* void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glProgramUniform1fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2fvEXT)
{
  /* void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glProgramUniform2fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3fvEXT)
{
  /* void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glProgramUniform3fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4fvEXT)
{
  /* void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLfloat, value[])
  STACK_FMT_END()

    exdl_glProgramUniform4fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform1ivEXT)
{
  /* void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[])
  STACK_FMT_END()

    exdl_glProgramUniform1ivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2ivEXT)
{
  /* void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[])
  STACK_FMT_END()

    exdl_glProgramUniform2ivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3ivEXT)
{
  /* void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[])
  STACK_FMT_END()

    exdl_glProgramUniform3ivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4ivEXT)
{
  /* void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLint,   value[])
  STACK_FMT_END()

    exdl_glProgramUniform4ivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2fvEXT)
{
  /* void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3fvEXT)
{
  /* void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4fvEXT)
{
  /* void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2x3fvEXT)
{
  /* void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2x3fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3x2fvEXT)
{
  /* void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3x2fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2x4fvEXT)
{
  /* void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2x4fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4x2fvEXT)
{
  /* void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4x2fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3x4fvEXT)
{
  /* void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3x4fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4x3fvEXT)
{
  /* void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLfloat,   value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4x3fvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform1uiEXT)
{
  /* void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
  STACK_FMT_END()

    exdl_glProgramUniform1uiEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
    );
}

EXDL_API(egl_programUniform2uiEXT)
{
  /* void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
  STACK_FMT_END()

    exdl_glProgramUniform2uiEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
    );
}

EXDL_API(egl_programUniform3uiEXT)
{
  /* void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
    STACK_FMT_DATA(GLuint, v2)
  STACK_FMT_END()

    exdl_glProgramUniform3uiEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
    );
}

EXDL_API(egl_programUniform4uiEXT)
{
  /* void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint,  location)
    STACK_FMT_DATA(GLuint, v0)
    STACK_FMT_DATA(GLuint, v1)
    STACK_FMT_DATA(GLuint, v2)
    STACK_FMT_DATA(GLuint, v3)
  STACK_FMT_END()

    exdl_glProgramUniform4uiEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(v0)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(v3)
    );
}

EXDL_API(egl_programUniform1uivEXT)
{
  /* void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform1uivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2uivEXT)
{
  /* void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform2uivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3uivEXT)
{
  /* void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform3uivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4uivEXT)
{
  /* void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  program)
    STACK_FMT_DATA(GLint,   location)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform4uivEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_namedBufferDataEXT)
{
  /* void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const GLvoid* data, GLenum usage) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     buffer)
    STACK_FMT_DATA(GLsizeiptr, size)
    STACK_FMT_DATA(GLvoid*,    data)
    STACK_FMT_DATA(GLenum,     usage)
  STACK_FMT_END()

    exdl_glNamedBufferDataEXT
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
   ,  STACK_GET_DATA(usage)
    );
}

EXDL_API(egl_namedBufferSubDataEXT)
{
  /* void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     buffer)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, size)
    STACK_FMT_DATA(GLvoid*,    data)
  STACK_FMT_END()

    exdl_glNamedBufferSubDataEXT
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_mapNamedBufferEXT)
{
  /* GLvoid* glMapNamedBufferEXT(GLuint buffer, GLenum access) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
    STACK_FMT_DATA(GLenum, access)
  STACK_FMT_END()

  CATCH_RESULT(GLvoid*)

    exdl_glMapNamedBufferEXT
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(access)
    );

  THROW_POINTER()
}

EXDL_API(egl_unmapNamedBufferEXT)
{
  /* GLboolean glUnmapNamedBufferEXT(GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glUnmapNamedBufferEXT
    ( STACK_GET_DATA(buffer)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_mapNamedBufferRangeEXT)
{
  /* GLvoid* glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     buffer)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, length)
    STACK_FMT_DATA(GLbitfield, access)
  STACK_FMT_END()

  CATCH_RESULT(GLvoid*)

    exdl_glMapNamedBufferRangeEXT
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_DATA(access)
    );

  THROW_POINTER()
}

EXDL_API(egl_flushMappedNamedBufferRangeEXT)
{
  /* void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     buffer)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, length)
  STACK_FMT_END()

    exdl_glFlushMappedNamedBufferRangeEXT
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(length)
    );
}

EXDL_API(egl_namedCopyBufferSubDataEXT)
{
  /* void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     readBuffer)
    STACK_FMT_DATA(GLuint,     writeBuffer)
    STACK_FMT_DATA(GLintptr,   readOffset)
    STACK_FMT_DATA(GLintptr,   writeOffset)
    STACK_FMT_DATA(GLsizeiptr, size)
  STACK_FMT_END()

    exdl_glNamedCopyBufferSubDataEXT
    ( STACK_GET_DATA(readBuffer)
   ,  STACK_GET_DATA(writeBuffer)
   ,  STACK_GET_DATA(readOffset)
   ,  STACK_GET_DATA(writeOffset)
   ,  STACK_GET_DATA(size)
    );
}

EXDL_API(egl_getNamedBufferParameterivEXT)
{
  /* void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetNamedBufferParameterivEXT
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getNamedBufferPointervEXT)
{
  /* void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, GLvoid** params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   buffer)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLvoid**, params)
  STACK_FMT_END()

    exdl_glGetNamedBufferPointervEXT
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(pname)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(params)
  : (GLvoid**) sd->bin[0].base
    );
}

EXDL_API(egl_getNamedBufferSubDataEXT)
{
  /* void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     buffer)
    STACK_FMT_DATA(GLintptr,   offset)
    STACK_FMT_DATA(GLsizeiptr, size)
    STACK_FMT_DATA(GLvoid*,    data)
  STACK_FMT_END()

    exdl_glGetNamedBufferSubDataEXT
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(offset)
   ,  STACK_GET_DATA(size)
   ,  (sd->next_bin == 0)
  ? STACK_GET_DATA(data)
  : (GLvoid*) sd->bin[0].base
    );
}

EXDL_API(egl_textureBufferEXT)
{
  /* void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, internalformat)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glTextureBufferEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_multiTexBufferEXT)
{
  /* void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, internalformat)
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glMultiTexBufferEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_namedRenderbufferStorageEXT)
{
  /* void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  renderbuffer)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glNamedRenderbufferStorageEXT
    ( STACK_GET_DATA(renderbuffer)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_getNamedRenderbufferParameterivEXT)
{
  /* void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, renderbuffer)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetNamedRenderbufferParameterivEXT
    ( STACK_GET_DATA(renderbuffer)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_checkNamedFramebufferStatusEXT)
{
  /* GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

  CATCH_RESULT(GLenum)

    exdl_glCheckNamedFramebufferStatusEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(target)
    );

  THROW_RESULT(GLenum)
}

EXDL_API(egl_namedFramebufferTexture1DEXT)
{
  /* void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, textarget)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
  STACK_FMT_END()

    exdl_glNamedFramebufferTexture1DEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(textarget)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_namedFramebufferTexture2DEXT)
{
  /* void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, textarget)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
  STACK_FMT_END()

    exdl_glNamedFramebufferTexture2DEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(textarget)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_namedFramebufferTexture3DEXT)
{
  /* void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, textarget)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLint,  zoffset)
  STACK_FMT_END()

    exdl_glNamedFramebufferTexture3DEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(textarget)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(zoffset)
    );
}

EXDL_API(egl_namedFramebufferRenderbufferEXT)
{
  /* void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, renderbuffertarget)
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()

    exdl_glNamedFramebufferRenderbufferEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(renderbuffertarget)
   ,  STACK_GET_DATA(renderbuffer)
    );
}

EXDL_API(egl_getNamedFramebufferAttachmentParameterivEXT)
{
  /* void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetNamedFramebufferAttachmentParameterivEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_generateTextureMipmapEXT)
{
  /* void glGenerateTextureMipmapEXT(GLuint texture, GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glGenerateTextureMipmapEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
    );
}

EXDL_API(egl_generateMultiTexMipmapEXT)
{
  /* void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glGenerateMultiTexMipmapEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
    );
}

EXDL_API(egl_framebufferDrawBufferEXT)
{
  /* void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glFramebufferDrawBufferEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_framebufferDrawBuffersEXT)
{
  /* void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum* bufs) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  framebuffer)
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLenum,  bufs[])
  STACK_FMT_END()

    exdl_glFramebufferDrawBuffersEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(bufs)
    );
}

EXDL_API(egl_framebufferReadBufferEXT)
{
  /* void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glFramebufferReadBufferEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_getFramebufferParameterivEXT)
{
  /* void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glGetFramebufferParameterivEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_namedRenderbufferStorageMultisampleEXT)
{
  /* void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  renderbuffer)
    STACK_FMT_DATA(GLsizei, samples)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glNamedRenderbufferStorageMultisampleEXT
    ( STACK_GET_DATA(renderbuffer)
   ,  STACK_GET_DATA(samples)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_namedRenderbufferStorageMultisampleCoverageEXT)
{
  /* void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  renderbuffer)
    STACK_FMT_DATA(GLsizei, coverageSamples)
    STACK_FMT_DATA(GLsizei, colorSamples)
    STACK_FMT_DATA(GLenum,  internalformat)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
  STACK_FMT_END()

    exdl_glNamedRenderbufferStorageMultisampleCoverageEXT
    ( STACK_GET_DATA(renderbuffer)
   ,  STACK_GET_DATA(coverageSamples)
   ,  STACK_GET_DATA(colorSamples)
   ,  STACK_GET_DATA(internalformat)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
    );
}

EXDL_API(egl_namedFramebufferTextureEXT)
{
  /* void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
  STACK_FMT_END()

    exdl_glNamedFramebufferTextureEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
    );
}

EXDL_API(egl_namedFramebufferTextureLayerEXT)
{
  /* void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLint,  layer)
  STACK_FMT_END()

    exdl_glNamedFramebufferTextureLayerEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(layer)
    );
}

EXDL_API(egl_namedFramebufferTextureFaceEXT)
{
  /* void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, framebuffer)
    STACK_FMT_DATA(GLenum, attachment)
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLint,  level)
    STACK_FMT_DATA(GLenum, face)
  STACK_FMT_END()

    exdl_glNamedFramebufferTextureFaceEXT
    ( STACK_GET_DATA(framebuffer)
   ,  STACK_GET_DATA(attachment)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(face)
    );
}

EXDL_API(egl_textureRenderbufferEXT)
{
  /* void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, texture)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()

    exdl_glTextureRenderbufferEXT
    ( STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(renderbuffer)
    );
}

EXDL_API(egl_multiTexRenderbufferEXT)
{
  /* void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, texunit)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()

    exdl_glMultiTexRenderbufferEXT
    ( STACK_GET_DATA(texunit)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(renderbuffer)
    );
}

EXDL_API(egl_programUniform1dEXT)
{
  /* void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, x)
  STACK_FMT_END()

    exdl_glProgramUniform1dEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_programUniform2dEXT)
{
  /* void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glProgramUniform2dEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_programUniform3dEXT)
{
  /* void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glProgramUniform3dEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_programUniform4dEXT)
{
  /* void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   program)
    STACK_FMT_DATA(GLint,    location)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glProgramUniform4dEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programUniform1dvEXT)
{
  /* void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform1dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2dvEXT)
{
  /* void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform2dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3dvEXT)
{
  /* void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform3dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4dvEXT)
{
  /* void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform4dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2dvEXT)
{
  /* void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3dvEXT)
{
  /* void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4dvEXT)
{
  /* void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2x3dvEXT)
{
  /* void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2x3dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix2x4dvEXT)
{
  /* void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix2x4dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3x2dvEXT)
{
  /* void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3x2dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix3x4dvEXT)
{
  /* void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix3x4dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4x2dvEXT)
{
  /* void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4x2dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniformMatrix4x3dvEXT)
{
  /* void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    program)
    STACK_FMT_DATA(GLint,     location)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_DATA(GLboolean, transpose)
    STACK_FMT_DATA(GLdouble,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformMatrix4x3dvEXT
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(transpose)
   ,  STACK_GET_ADDR(value)
    );
}

/* GL_EXT_vertex_array_bgra */

/* GL_EXT_texture_swizzle */

/* GL_NV_explicit_multisample */

EXDL_API(egl_getMultisamplefvNV)
{
  /* void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat* val) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLfloat, val[])
  STACK_FMT_END()

    exdl_glGetMultisamplefvNV
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(val)
    );
}

EXDL_API(egl_sampleMaskIndexedNV)
{
  /* void glSampleMaskIndexedNV(GLuint index, GLbitfield mask) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     index)
    STACK_FMT_DATA(GLbitfield, mask)
  STACK_FMT_END()

    exdl_glSampleMaskIndexedNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(mask)
    );
}

EXDL_API(egl_texRenderbufferNV)
{
  /* void glTexRenderbufferNV(GLenum target, GLuint renderbuffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, renderbuffer)
  STACK_FMT_END()

    exdl_glTexRenderbufferNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(renderbuffer)
    );
}

/* GL_NV_transform_feedback2 */

EXDL_API(egl_bindTransformFeedbackNV)
{
  /* void glBindTransformFeedbackNV(GLenum target, GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glBindTransformFeedbackNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(id)
    );
}

EXDL_API(egl_deleteTransformFeedbacksNV)
{
  /* void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  ids[])
  STACK_FMT_END()

    exdl_glDeleteTransformFeedbacksNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(ids)
    );
}

EXDL_API(egl_genTransformFeedbacksNV)
{
  /* void glGenTransformFeedbacksNV(GLsizei n, GLuint* ids) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint,  ids[])
  STACK_FMT_END()

    exdl_glGenTransformFeedbacksNV
    ( STACK_GET_DATA(n)
   ,  STACK_GET_ADDR(ids)
    );
}

EXDL_API(egl_isTransformFeedbackNV)
{
  /* GLboolean glIsTransformFeedbackNV(GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsTransformFeedbackNV
    ( STACK_GET_DATA(id)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_pauseTransformFeedbackNV)
{
  /* void glPauseTransformFeedbackNV(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glPauseTransformFeedbackNV
  (
  );
}

EXDL_API(egl_resumeTransformFeedbackNV)
{
  /* void glResumeTransformFeedbackNV(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glResumeTransformFeedbackNV
  (
  );
}

EXDL_API(egl_drawTransformFeedbackNV)
{
  /* void glDrawTransformFeedbackNV(GLenum mode, GLuint id) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
    STACK_FMT_DATA(GLuint, id)
  STACK_FMT_END()

    exdl_glDrawTransformFeedbackNV
    ( STACK_GET_DATA(mode)
   ,  STACK_GET_DATA(id)
    );
}

/* GL_ATI_meminfo */

/* GL_AMD_performance_monitor */

EXDL_API(egl_getPerfMonitorGroupsAMD)
{
  /* void glGetPerfMonitorGroupsAMD(GLint* numGroups, GLsizei groupsSize, GLuint* groups) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint*,  numGroups)
    STACK_FMT_DATA(GLsizei, groupsSize)
    STACK_FMT_DATA(GLuint*, groups)
  STACK_FMT_END()

    exdl_glGetPerfMonitorGroupsAMD
    ( STACK_GET_DATA(numGroups)
   ,  STACK_GET_DATA(groupsSize)
   ,  STACK_GET_DATA(groups)
    );
}

EXDL_API(egl_getPerfMonitorCountersAMD)
{
  /* void glGetPerfMonitorCountersAMD(GLuint group, GLint* numCounters, GLint* maxActiveCounters, GLsizei counterSize, GLuint* counters) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  group)
    STACK_FMT_LPTR(GLint*,  numCounters)
    STACK_FMT_LPTR(GLint*,  maxActiveCounters)
    STACK_FMT_DATA(GLsizei, counterSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, counters)
  FRAME_FMT_END()

    exdl_glGetPerfMonitorCountersAMD
    ( STACK_GET_DATA(group)
   ,  STACK_GET_DATA(numCounters)
   ,  STACK_GET_DATA(maxActiveCounters)
   ,  STACK_GET_DATA(counterSize)
   ,  FRAME_GET_ADDR(counters)
    );

  THROW_FRAME()
}

EXDL_API(egl_getPerfMonitorGroupStringAMD)
{
  /* void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei* length, GLchar* groupString) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   group)
    STACK_FMT_DATA(GLsizei,  bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLchar,  groupString)
  FRAME_FMT_END()

    exdl_glGetPerfMonitorGroupStringAMD
    ( STACK_GET_DATA(group)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(groupString)
    );

  THROW_FRAME()
}

EXDL_API(egl_getPerfMonitorCounterStringAMD)
{
  /* void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei* length, GLchar* counterString) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   group)
    STACK_FMT_DATA(GLuint,   counter)
    STACK_FMT_DATA(GLsizei,  bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei, length)
    FRAME_FMT_DATA(GLchar,  counterString)
  FRAME_FMT_END()

    exdl_glGetPerfMonitorCounterStringAMD
    ( STACK_GET_DATA(group)
   ,  STACK_GET_DATA(counter)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(counterString)
    );

  THROW_FRAME()
}

EXDL_API(egl_getPerfMonitorCounterInfoAMD)
{
  /* void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, GLvoid* data) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, group)
    STACK_FMT_DATA(GLuint, counter)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, data)
  FRAME_FMT_END()

    exdl_glGetPerfMonitorCounterInfoAMD
    ( STACK_GET_DATA(group)
   ,  STACK_GET_DATA(counter)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(data)
    );

  THROW_FRAME()
}

EXDL_API(egl_genPerfMonitorsAMD)
{
  /* void glGenPerfMonitorsAMD(GLsizei n, GLuint* monitors) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, monitors)
  FRAME_FMT_END()

    exdl_glGenPerfMonitorsAMD
    ( STACK_GET_DATA(n)
   ,  FRAME_GET_ADDR(monitors)
    );

  THROW_FRAME()
}

EXDL_API(egl_deletePerfMonitorsAMD)
{
  /* void glDeletePerfMonitorsAMD(GLsizei n, GLuint* monitors) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, n)
    STACK_FMT_DATA(GLuint*, monitors)
  STACK_FMT_END()

    exdl_glDeletePerfMonitorsAMD
    ( STACK_GET_DATA(n)
   ,  STACK_GET_DATA(monitors)
    );
}

EXDL_API(egl_selectPerfMonitorCountersAMD)
{
  /* void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint* counterList) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    monitor)
    STACK_FMT_DATA(GLboolean, enable)
    STACK_FMT_DATA(GLuint,    group)
    STACK_FMT_DATA(GLint,     numCounters)
    STACK_FMT_DATA(GLuint*,   counterList)
  STACK_FMT_END()

    exdl_glSelectPerfMonitorCountersAMD
    ( STACK_GET_DATA(monitor)
   ,  STACK_GET_DATA(enable)
   ,  STACK_GET_DATA(group)
   ,  STACK_GET_DATA(numCounters)
   ,  STACK_GET_DATA(counterList)
    );
}

EXDL_API(egl_beginPerfMonitorAMD)
{
  /* void glBeginPerfMonitorAMD(GLuint monitor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, monitor)
  STACK_FMT_END()

    exdl_glBeginPerfMonitorAMD
    ( STACK_GET_DATA(monitor)
    );
}

EXDL_API(egl_endPerfMonitorAMD)
{
  /* void glEndPerfMonitorAMD(GLuint monitor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, monitor)
  STACK_FMT_END()

    exdl_glEndPerfMonitorAMD
    ( STACK_GET_DATA(monitor)
    );
}

EXDL_API(egl_getPerfMonitorCounterDataAMD)
{
  /* void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint* data, GLint* bytesWritten) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  monitor)
    STACK_FMT_DATA(GLenum,  pname)
    STACK_FMT_DATA(GLsizei, dataSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, data)
    FRAME_FMT_DATA(GLint,  bytesWritten)
  FRAME_FMT_END()

    exdl_glGetPerfMonitorCounterDataAMD
    ( STACK_GET_DATA(monitor)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(dataSize)
   ,  FRAME_GET_ADDR(data)
   ,  FRAME_GET_ADDR(bytesWritten)
    );

  THROW_FRAME()
}

/* GL_AMD_texture_texture4 */

/* GL_AMD_vertex_shader_tesselator */

EXDL_API(egl_tessellationFactorAMD)
{
  /* void glTessellationFactorAMD(GLfloat factor) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLfloat, factor)
  STACK_FMT_END()

    exdl_glTessellationFactorAMD
    ( STACK_GET_DATA(factor)
    );
}

EXDL_API(egl_tessellationModeAMD)
{
  /* void glTessellationModeAMD(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glTessellationModeAMD
    ( STACK_GET_DATA(mode)
    );
}

/* GL_EXT_provoking_vertex */

EXDL_API(egl_provokingVertexEXT)
{
  /* void glProvokingVertexEXT(GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glProvokingVertexEXT
    ( STACK_GET_DATA(mode)
    );
}

/* GL_EXT_texture_snorm */
/* GL_AMD_draw_buffers_blend */

EXDL_API(egl_blendFuncIndexedAMD)
{
  /* void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buf)
    STACK_FMT_DATA(GLenum, src)
    STACK_FMT_DATA(GLenum, dst)
  STACK_FMT_END()

    exdl_glBlendFuncIndexedAMD
    ( STACK_GET_DATA(buf)
   ,  STACK_GET_DATA(src)
   ,  STACK_GET_DATA(dst)
    );
}

EXDL_API(egl_blendFuncSeparateIndexedAMD)
{
  /* void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buf)
    STACK_FMT_DATA(GLenum, srcRGB)
    STACK_FMT_DATA(GLenum, dstRGB)
    STACK_FMT_DATA(GLenum, srcAlpha)
    STACK_FMT_DATA(GLenum, dstAlpha)
  STACK_FMT_END()

    exdl_glBlendFuncSeparateIndexedAMD
    ( STACK_GET_DATA(buf)
   ,  STACK_GET_DATA(srcRGB)
   ,  STACK_GET_DATA(dstRGB)
   ,  STACK_GET_DATA(srcAlpha)
   ,  STACK_GET_DATA(dstAlpha)
    );
}

EXDL_API(egl_blendEquationIndexedAMD)
{
  /* void glBlendEquationIndexedAMD(GLuint buf, GLenum mode) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buf)
    STACK_FMT_DATA(GLenum, mode)
  STACK_FMT_END()

    exdl_glBlendEquationIndexedAMD
    ( STACK_GET_DATA(buf)
   ,  STACK_GET_DATA(mode)
    );
}

EXDL_API(egl_blendEquationSeparateIndexedAMD)
{
  /* void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buf)
    STACK_FMT_DATA(GLenum, modeRGB)
    STACK_FMT_DATA(GLenum, modeAlpha)
  STACK_FMT_END()

    exdl_glBlendEquationSeparateIndexedAMD
    ( STACK_GET_DATA(buf)
   ,  STACK_GET_DATA(modeRGB)
   ,  STACK_GET_DATA(modeAlpha)
    );
}

/* GL_APPLE_texture_range */

EXDL_API(egl_textureRangeAPPLE)
{
  /* void glTextureRangeAPPLE(GLenum target, GLsizei length, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, length)
    STACK_FMT_DATA(GLvoid,  pointer[])
  STACK_FMT_END()

    exdl_glTextureRangeAPPLE
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_ADDR(pointer)
    );
}

EXDL_API(egl_getTexParameterPointervAPPLE)
{
  /* void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, GLvoid** params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLvoid, params)
  FRAME_FMT_END()

    exdl_glGetTexParameterPointervAPPLE
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

/* GL_APPLE_float_pixels */

/* GL_APPLE_vertex_program_evaluators */

EXDL_API(egl_enableVertexAttribAPPLE)
{
  /* void glEnableVertexAttribAPPLE(GLuint index, GLenum pname) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

    exdl_glEnableVertexAttribAPPLE
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
    );
}

EXDL_API(egl_disableVertexAttribAPPLE)
{
  /* void glDisableVertexAttribAPPLE(GLuint index, GLenum pname) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

    exdl_glDisableVertexAttribAPPLE
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
    );
}

EXDL_API(egl_isVertexAttribEnabledAPPLE)
{
  /* GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, index)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsVertexAttribEnabledAPPLE
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_mapVertexAttrib1dAPPLE)
{
  /* void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLuint,    size)
    STACK_FMT_DATA(GLdouble,  u1)
    STACK_FMT_DATA(GLdouble,  u2)
    STACK_FMT_DATA(GLint,     stride)
    STACK_FMT_DATA(GLint,     order)
    STACK_FMT_DATA(GLdouble,  points[])
  STACK_FMT_END()

    exdl_glMapVertexAttrib1dAPPLE
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(u1)
   ,  STACK_GET_DATA(u2)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(order)
   ,  STACK_GET_ADDR(points)
    );
}

EXDL_API(egl_mapVertexAttrib1fAPPLE)
{
  /* void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLuint,   size)
    STACK_FMT_DATA(GLfloat,  u1)
    STACK_FMT_DATA(GLfloat,  u2)
    STACK_FMT_DATA(GLint,    stride)
    STACK_FMT_DATA(GLint,    order)
    STACK_FMT_DATA(GLfloat,  points[])
  STACK_FMT_END()

    exdl_glMapVertexAttrib1fAPPLE
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(u1)
   ,  STACK_GET_DATA(u2)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(order)
   ,  STACK_GET_ADDR(points)
    );
}

EXDL_API(egl_mapVertexAttrib2dAPPLE)
{
  /* void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLuint,    size)
    STACK_FMT_DATA(GLdouble,  u1)
    STACK_FMT_DATA(GLdouble,  u2)
    STACK_FMT_DATA(GLint,     ustride)
    STACK_FMT_DATA(GLint,     uorder)
    STACK_FMT_DATA(GLdouble,  v1)
    STACK_FMT_DATA(GLdouble,  v2)
    STACK_FMT_DATA(GLint,     vstride)
    STACK_FMT_DATA(GLint,     vorder)
    STACK_FMT_DATA(GLdouble,  points[])
  STACK_FMT_END()

    exdl_glMapVertexAttrib2dAPPLE
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(u1)
   ,  STACK_GET_DATA(u2)
   ,  STACK_GET_DATA(ustride)
   ,  STACK_GET_DATA(uorder)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(vstride)
   ,  STACK_GET_DATA(vorder)
   ,  STACK_GET_ADDR(points)
    );
}

EXDL_API(egl_mapVertexAttrib2fAPPLE)
{
  /* void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLuint,   size)
    STACK_FMT_DATA(GLfloat,  u1)
    STACK_FMT_DATA(GLfloat,  u2)
    STACK_FMT_DATA(GLint,    ustride)
    STACK_FMT_DATA(GLint,    uorder)
    STACK_FMT_DATA(GLfloat,  v1)
    STACK_FMT_DATA(GLfloat,  v2)
    STACK_FMT_DATA(GLint,    vstride)
    STACK_FMT_DATA(GLint,    vorder)
    STACK_FMT_DATA(GLfloat,  points[])
  STACK_FMT_END()

    exdl_glMapVertexAttrib2fAPPLE
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(u1)
   ,  STACK_GET_DATA(u2)
   ,  STACK_GET_DATA(ustride)
   ,  STACK_GET_DATA(uorder)
   ,  STACK_GET_DATA(v1)
   ,  STACK_GET_DATA(v2)
   ,  STACK_GET_DATA(vstride)
   ,  STACK_GET_DATA(vorder)
   ,  STACK_GET_ADDR(points)
    );
}

/* GL_APPLE_aux_depth_stencil */
/* GL_APPLE_object_purgeable */

EXDL_API(egl_objectPurgeableAPPLE)
{
  /* GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, objectType)
    STACK_FMT_DATA(GLuint, name)
    STACK_FMT_DATA(GLenum, option)
  STACK_FMT_END()

  CATCH_RESULT(GLenum)

    exdl_glObjectPurgeableAPPLE
    ( STACK_GET_DATA(objectType)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(option)
    );

  THROW_RESULT(GLenum)
}

EXDL_API(egl_objectUnpurgeableAPPLE)
{
  /* GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, objectType)
    STACK_FMT_DATA(GLuint, name)
    STACK_FMT_DATA(GLenum, option)
  STACK_FMT_END()

  CATCH_RESULT(GLenum)

    exdl_glObjectUnpurgeableAPPLE
    ( STACK_GET_DATA(objectType)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(option)
    );

  THROW_RESULT(GLenum)
}

EXDL_API(egl_getObjectParameterivAPPLE)
{
  /* void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, objectType)
    STACK_FMT_DATA(GLuint, name)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params)
  FRAME_FMT_END()

    exdl_glGetObjectParameterivAPPLE
    ( STACK_GET_DATA(objectType)
   ,  STACK_GET_DATA(name)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

/* GL_APPLE_row_bytes */

/* GL_APPLE_rgb_422 */

/* GL_NV_video_capture */

EXDL_API(egl_beginVideoCaptureNV)
{
  /* void glBeginVideoCaptureNV(GLuint video_capture_slot) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_capture_slot)
  STACK_FMT_END()

    exdl_glBeginVideoCaptureNV
    ( STACK_GET_DATA(video_capture_slot)
    );
}

EXDL_API(egl_bindVideoCaptureStreamBufferNV)
{
  /* void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      video_capture_slot)
    STACK_FMT_DATA(GLuint,      stream)
    STACK_FMT_DATA(GLenum,      frame_region)
    STACK_FMT_DATA(GLintptrARB, offset)
  STACK_FMT_END()

    exdl_glBindVideoCaptureStreamBufferNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(frame_region)
   ,  STACK_GET_DATA(offset)
    );
}

EXDL_API(egl_bindVideoCaptureStreamTextureNV)
{
  /* void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_capture_slot)
    STACK_FMT_DATA(GLuint, stream)
    STACK_FMT_DATA(GLenum, frame_region)
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLuint, texture)
  STACK_FMT_END()

    exdl_glBindVideoCaptureStreamTextureNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(frame_region)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(texture)
    );
}

EXDL_API(egl_endVideoCaptureNV)
{
  /* void glEndVideoCaptureNV(GLuint video_capture_slot) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_capture_slot)
  STACK_FMT_END()

    exdl_glEndVideoCaptureNV
    ( STACK_GET_DATA(video_capture_slot)
    );
}

EXDL_API(egl_getVideoCaptureivNV)
{
  /* void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_capture_slot)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params)
  FRAME_FMT_END()

    exdl_glGetVideoCaptureivNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getVideoCaptureStreamivNV)
{
  /* void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_capture_slot)
    STACK_FMT_DATA(GLuint, stream)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint, params)
  FRAME_FMT_END()

    exdl_glGetVideoCaptureStreamivNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getVideoCaptureStreamfvNV)
{
  /* void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_capture_slot)
    STACK_FMT_DATA(GLuint, stream)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLfloat, params)
  FRAME_FMT_END()

    exdl_glGetVideoCaptureStreamfvNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getVideoCaptureStreamdvNV)
{
  /* void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_capture_slot)
    STACK_FMT_DATA(GLuint, stream)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, params)
  FRAME_FMT_END()

    exdl_glGetVideoCaptureStreamdvNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_videoCaptureNV)
{
  /* GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint* sequence_num, GLuint64EXT* capture_time) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       video_capture_slot)
    STACK_FMT_LPTR(GLuint*,      sequence_num)
    STACK_FMT_DATA(GLuint64EXT,  capture_time[])
  STACK_FMT_END()

  CATCH_RESULT(GLenum)

    exdl_glVideoCaptureNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(sequence_num)
   ,  STACK_GET_ADDR(capture_time)
    );

  THROW_RESULT(GLenum)
}

EXDL_API(egl_videoCaptureStreamParameterivNV)
{
  /* void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, video_capture_slot)
    STACK_FMT_DATA(GLuint, stream)
    STACK_FMT_DATA(GLenum, pname)
    STACK_FMT_DATA(GLint,  params[])
  STACK_FMT_END()

    exdl_glVideoCaptureStreamParameterivNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_videoCaptureStreamParameterfvNV)
{
  /* void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   video_capture_slot)
    STACK_FMT_DATA(GLuint,   stream)
    STACK_FMT_DATA(GLenum,   pname)
    STACK_FMT_DATA(GLfloat,  params[])
  STACK_FMT_END()

    exdl_glVideoCaptureStreamParameterfvNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_videoCaptureStreamParameterdvNV)
{
  /* void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    video_capture_slot)
    STACK_FMT_DATA(GLuint,    stream)
    STACK_FMT_DATA(GLenum,    pname)
    STACK_FMT_DATA(GLdouble,  params[])
  STACK_FMT_END()

    exdl_glVideoCaptureStreamParameterdvNV
    ( STACK_GET_DATA(video_capture_slot)
   ,  STACK_GET_DATA(stream)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_ADDR(params)
    );
}

/* GL_NV_copy_image */

EXDL_API(egl_copyImageSubDataNV)
{
  /* void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  srcName)
    STACK_FMT_DATA(GLenum,  srcTarget)
    STACK_FMT_DATA(GLint,   srcLevel)
    STACK_FMT_DATA(GLint,   srcX)
    STACK_FMT_DATA(GLint,   srcY)
    STACK_FMT_DATA(GLint,   srcZ)
    STACK_FMT_DATA(GLuint,  dstName)
    STACK_FMT_DATA(GLenum,  dstTarget)
    STACK_FMT_DATA(GLint,   dstLevel)
    STACK_FMT_DATA(GLint,   dstX)
    STACK_FMT_DATA(GLint,   dstY)
    STACK_FMT_DATA(GLint,   dstZ)
    STACK_FMT_DATA(GLsizei, width)
    STACK_FMT_DATA(GLsizei, height)
    STACK_FMT_DATA(GLsizei, depth)
  STACK_FMT_END()

    exdl_glCopyImageSubDataNV
    ( STACK_GET_DATA(srcName)
   ,  STACK_GET_DATA(srcTarget)
   ,  STACK_GET_DATA(srcLevel)
   ,  STACK_GET_DATA(srcX)
   ,  STACK_GET_DATA(srcY)
   ,  STACK_GET_DATA(srcZ)
   ,  STACK_GET_DATA(dstName)
   ,  STACK_GET_DATA(dstTarget)
   ,  STACK_GET_DATA(dstLevel)
   ,  STACK_GET_DATA(dstX)
   ,  STACK_GET_DATA(dstY)
   ,  STACK_GET_DATA(dstZ)
   ,  STACK_GET_DATA(width)
   ,  STACK_GET_DATA(height)
   ,  STACK_GET_DATA(depth)
    );
}

/* GL_EXT_separate_shader_objects */

EXDL_API(egl_useShaderProgramEXT)
{
  /* void glUseShaderProgramEXT(GLenum type, GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

    exdl_glUseShaderProgramEXT
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(program)
    );
}

EXDL_API(egl_activeProgramEXT)
{
  /* void glActiveProgramEXT(GLuint program) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
  STACK_FMT_END()

    exdl_glActiveProgramEXT
    ( STACK_GET_DATA(program)
    );
}

EXDL_API(egl_createShaderProgramEXT)
{
  /* GLuint glCreateShaderProgramEXT(GLenum type, const GLchar* string) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, type)
    STACK_FMT_DATA(GLchar, string[])
  STACK_FMT_END()

  CATCH_RESULT(GLuint)

    exdl_glCreateShaderProgramEXT
    ( STACK_GET_DATA(type)
   ,  STACK_GET_ADDR(string)
    );

  THROW_RESULT(GLuint)
}

/* GL_NV_parameter_buffer_object2 */

/* GL_NV_shader_buffer_load */

EXDL_API(egl_makeBufferResidentNV)
{
  /* void glMakeBufferResidentNV(GLenum target, GLenum access) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, access)
  STACK_FMT_END()

    exdl_glMakeBufferResidentNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(access)
    );
}

EXDL_API(egl_makeBufferNonResidentNV)
{
  /* void glMakeBufferNonResidentNV(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

    exdl_glMakeBufferNonResidentNV
    ( STACK_GET_DATA(target)
    );
}

EXDL_API(egl_isBufferResidentNV)
{
  /* GLboolean glIsBufferResidentNV(GLenum target) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsBufferResidentNV
    ( STACK_GET_DATA(target)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_namedMakeBufferResidentNV)
{
  /* void glNamedMakeBufferResidentNV(GLuint buffer, GLenum access) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
    STACK_FMT_DATA(GLenum, access)
  STACK_FMT_END()

    exdl_glNamedMakeBufferResidentNV
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(access)
    );
}

EXDL_API(egl_namedMakeBufferNonResidentNV)
{
  /* void glNamedMakeBufferNonResidentNV(GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

    exdl_glNamedMakeBufferNonResidentNV
    ( STACK_GET_DATA(buffer)
    );
}

EXDL_API(egl_isNamedBufferResidentNV)
{
  /* GLboolean glIsNamedBufferResidentNV(GLuint buffer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsNamedBufferResidentNV
    ( STACK_GET_DATA(buffer)
    );

  THROW_RESULT(GLboolean)
}

EXDL_API(egl_getBufferParameterui64vNV)
{
  /* void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, target)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint64EXT, params)
  FRAME_FMT_END()

    exdl_glGetBufferParameterui64vNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getNamedBufferParameterui64vNV)
{
  /* void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, buffer)
    STACK_FMT_DATA(GLenum, pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint64EXT, params)
  FRAME_FMT_END()

    exdl_glGetNamedBufferParameterui64vNV
    ( STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getIntegerui64vNV)
{
  /* void glGetIntegerui64vNV(GLenum value, GLuint64EXT* result) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, value)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint64EXT, result)
  FRAME_FMT_END()

    exdl_glGetIntegerui64vNV
    ( STACK_GET_DATA(value)
   ,  FRAME_GET_ADDR(result)
    );

  THROW_FRAME()
}

EXDL_API(egl_uniformui64NV)
{
  /* void glUniformui64NV(GLint location, GLuint64EXT value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, value)
  STACK_FMT_END()

    exdl_glUniformui64NV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_uniformui64vNV)
{
  /* void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glUniformui64vNV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_getUniformui64vNV)
{
  /* void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint, program)
    STACK_FMT_DATA(GLint, location)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint64EXT, params)
  FRAME_FMT_END()

    exdl_glGetUniformui64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_programUniformui64NV)
{
  /* void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, value)
  STACK_FMT_END()

    exdl_glProgramUniformui64NV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(value)
    );
}

EXDL_API(egl_programUniformui64vNV)
{
  /* void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       program)
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glProgramUniformui64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

/* GL_NV_vertex_buffer_unified_memory */

EXDL_API(egl_bufferAddressRangeNV)
{
  /* void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,      pname)
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLuint64EXT, address)
    STACK_FMT_DATA(GLsizeiptr,  length)
  STACK_FMT_END()

    exdl_glBufferAddressRangeNV
    ( STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(address)
   ,  STACK_GET_DATA(length)
    );
}

EXDL_API(egl_vertexFormatNV)
{
  /* void glVertexFormatNV(GLint size, GLenum type, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glVertexFormatNV
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_normalFormatNV)
{
  /* void glNormalFormatNV(GLenum type, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glNormalFormatNV
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_colorFormatNV)
{
  /* void glColorFormatNV(GLint size, GLenum type, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glColorFormatNV
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_indexFormatNV)
{
  /* void glIndexFormatNV(GLenum type, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glIndexFormatNV
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_texCoordFormatNV)
{
  /* void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glTexCoordFormatNV
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_edgeFlagFormatNV)
{
  /* void glEdgeFlagFormatNV(GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glEdgeFlagFormatNV
    ( STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_secondaryColorFormatNV)
{
  /* void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glSecondaryColorFormatNV
    ( STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_fogCoordFormatNV)
{
  /* void glFogCoordFormatNV(GLenum type, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glFogCoordFormatNV
    ( STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_vertexAttribFormatNV)
{
  /* void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLint,     size)
    STACK_FMT_DATA(GLenum,    type)
    STACK_FMT_DATA(GLboolean, normalized)
    STACK_FMT_DATA(GLsizei,   stride)
  STACK_FMT_END()

    exdl_glVertexAttribFormatNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(normalized)
   ,  STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_vertexAttribIFormatNV)
{
  /* void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glVertexAttribIFormatNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
    );
}

EXDL_API(egl_getIntegerui64i_vNV)
{
  /* void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT* result) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, value)
    STACK_FMT_DATA(GLuint, index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint64EXT, result)
  FRAME_FMT_END()

    exdl_glGetIntegerui64i_vNV
    ( STACK_GET_DATA(value)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(result)
    );

  THROW_FRAME()
}

/* GL_NV_texture_barrier */

EXDL_API(egl_textureBarrierNV)
{
  /* void glTextureBarrierNV(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glTextureBarrierNV
  (
  );
}

/* GL_AMD_shader_stencil_export */

/* GL_AMD_seamless_cubemap_per_texture */

/* GL_AMD_conservative_depth */

/* GL_EXT_shader_image_load_store */

EXDL_API(egl_bindImageTextureEXT)
{
  /* void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLuint,    texture)
    STACK_FMT_DATA(GLint,     level)
    STACK_FMT_DATA(GLboolean, layered)
    STACK_FMT_DATA(GLint,     layer)
    STACK_FMT_DATA(GLenum,    access)
    STACK_FMT_DATA(GLint,     format)
  STACK_FMT_END()

    exdl_glBindImageTextureEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(texture)
   ,  STACK_GET_DATA(level)
   ,  STACK_GET_DATA(layered)
   ,  STACK_GET_DATA(layer)
   ,  STACK_GET_DATA(access)
   ,  STACK_GET_DATA(format)
    );
}

EXDL_API(egl_memoryBarrierEXT)
{
  /* void glMemoryBarrierEXT(GLbitfield barriers) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLbitfield, barriers)
  STACK_FMT_END()

    exdl_glMemoryBarrierEXT
    ( STACK_GET_DATA(barriers)
    );
}

/* GL_EXT_vertex_attrib_64bit */

EXDL_API(egl_vertexAttribL1dEXT)
{
  /* void glVertexAttribL1dEXT(GLuint index, GLdouble x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
  STACK_FMT_END()

    exdl_glVertexAttribL1dEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttribL2dEXT)
{
  /* void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
  STACK_FMT_END()

    exdl_glVertexAttribL2dEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttribL3dEXT)
{
  /* void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
  STACK_FMT_END()

    exdl_glVertexAttribL3dEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttribL4dEXT)
{
  /* void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLdouble, x)
    STACK_FMT_DATA(GLdouble, y)
    STACK_FMT_DATA(GLdouble, z)
    STACK_FMT_DATA(GLdouble, w)
  STACK_FMT_END()

    exdl_glVertexAttribL4dEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttribL1dvEXT)
{
  /* void glVertexAttribL1dvEXT(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLdouble,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL1dvEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL2dvEXT)
{
  /* void glVertexAttribL2dvEXT(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLdouble,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL2dvEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL3dvEXT)
{
  /* void glVertexAttribL3dvEXT(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLdouble,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL3dvEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL4dvEXT)
{
  /* void glVertexAttribL4dvEXT(GLuint index, const GLdouble* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLdouble,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL4dvEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribLPointerEXT)
{
  /* void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
    STACK_FMT_DATA(GLvoid,  pointer[])
  STACK_FMT_END()

    exdl_glVertexAttribLPointerEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_ADDR(pointer)
    );
}

EXDL_API(egl_getVertexAttribLdvEXT)
{
  /* void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,    index)
    STACK_FMT_DATA(GLenum,    pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLdouble, params)
  FRAME_FMT_END()

    exdl_glGetVertexAttribLdvEXT
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_vertexArrayVertexAttribLOffsetEXT)
{
  /* void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   vaobj)
    STACK_FMT_DATA(GLuint,   buffer)
    STACK_FMT_DATA(GLuint,   index)
    STACK_FMT_DATA(GLint,    size)
    STACK_FMT_DATA(GLenum,   type)
    STACK_FMT_DATA(GLsizei,  stride)
    STACK_FMT_DATA(GLintptr, offset)
  STACK_FMT_END()

    exdl_glVertexArrayVertexAttribLOffsetEXT
    ( STACK_GET_DATA(vaobj)
   ,  STACK_GET_DATA(buffer)
   ,  STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
   ,  STACK_GET_DATA(offset)
    );
}

/* GL_NV_gpu_program5 */

EXDL_API(egl_programSubroutineParametersuivNV)
{
  /* void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, count)
    STACK_FMT_DATA(GLuint,  params[])
  STACK_FMT_END()

    exdl_glProgramSubroutineParametersuivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(params)
    );
}

EXDL_API(egl_getProgramSubroutineParameteruivNV)
{
  /* void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint* param) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLuint,  index)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, param)
  FRAME_FMT_END()

    exdl_glGetProgramSubroutineParameteruivNV
    ( STACK_GET_DATA(target)
   ,  STACK_GET_DATA(index)
   ,  FRAME_GET_ADDR(param)
    );

  THROW_FRAME()
}

/* GL_NV_gpu_shader5 */

EXDL_API(egl_uniform1i64NV)
{
  /* void glUniform1i64NV(GLint location, GLint64EXT x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,      location)
    STACK_FMT_DATA(GLint64EXT, x)
  STACK_FMT_END()

    exdl_glUniform1i64NV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_uniform2i64NV)
{
  /* void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,      location)
    STACK_FMT_DATA(GLint64EXT, x)
    STACK_FMT_DATA(GLint64EXT, y)
  STACK_FMT_END()

    exdl_glUniform2i64NV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_uniform3i64NV)
{
  /* void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,      location)
    STACK_FMT_DATA(GLint64EXT, x)
    STACK_FMT_DATA(GLint64EXT, y)
    STACK_FMT_DATA(GLint64EXT, z)
  STACK_FMT_END()

    exdl_glUniform3i64NV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_uniform4i64NV)
{
  /* void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,      location)
    STACK_FMT_DATA(GLint64EXT, x)
    STACK_FMT_DATA(GLint64EXT, y)
    STACK_FMT_DATA(GLint64EXT, z)
    STACK_FMT_DATA(GLint64EXT, w)
  STACK_FMT_END()

    exdl_glUniform4i64NV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_uniform1i64vNV)
{
  /* void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLsizei,     count)
    STACK_FMT_DATA(GLint64EXT,  value[])
  STACK_FMT_END()

    exdl_glUniform1i64vNV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform2i64vNV)
{
  /* void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLsizei,     count)
    STACK_FMT_DATA(GLint64EXT,  value[])
  STACK_FMT_END()

    exdl_glUniform2i64vNV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform3i64vNV)
{
  /* void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLsizei,     count)
    STACK_FMT_DATA(GLint64EXT,  value[])
  STACK_FMT_END()

    exdl_glUniform3i64vNV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform4i64vNV)
{
  /* void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLsizei,     count)
    STACK_FMT_DATA(GLint64EXT,  value[])
  STACK_FMT_END()

    exdl_glUniform4i64vNV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform1ui64NV)
{
  /* void glUniform1ui64NV(GLint location, GLuint64EXT x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, x)
  STACK_FMT_END()

    exdl_glUniform1ui64NV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_uniform2ui64NV)
{
  /* void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, x)
    STACK_FMT_DATA(GLuint64EXT, y)
  STACK_FMT_END()

    exdl_glUniform2ui64NV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_uniform3ui64NV)
{
  /* void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, x)
    STACK_FMT_DATA(GLuint64EXT, y)
    STACK_FMT_DATA(GLuint64EXT, z)
  STACK_FMT_END()

    exdl_glUniform3ui64NV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_uniform4ui64NV)
{
  /* void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, x)
    STACK_FMT_DATA(GLuint64EXT, y)
    STACK_FMT_DATA(GLuint64EXT, z)
    STACK_FMT_DATA(GLuint64EXT, w)
  STACK_FMT_END()

    exdl_glUniform4ui64NV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_uniform1ui64vNV)
{
  /* void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glUniform1ui64vNV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform2ui64vNV)
{
  /* void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glUniform2ui64vNV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform3ui64vNV)
{
  /* void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glUniform3ui64vNV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_uniform4ui64vNV)
{
  /* void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glUniform4ui64vNV
    ( STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_getUniformi64vNV)
{
  /* void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint64EXT, params)
  FRAME_FMT_END()

    exdl_glGetUniformi64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_programUniform1i64NV)
{
  /* void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     program)
    STACK_FMT_DATA(GLint,      location)
    STACK_FMT_DATA(GLint64EXT, x)
  STACK_FMT_END()

    exdl_glProgramUniform1i64NV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_programUniform2i64NV)
{
  /* void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     program)
    STACK_FMT_DATA(GLint,      location)
    STACK_FMT_DATA(GLint64EXT, x)
    STACK_FMT_DATA(GLint64EXT, y)
  STACK_FMT_END()

    exdl_glProgramUniform2i64NV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_programUniform3i64NV)
{
  /* void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     program)
    STACK_FMT_DATA(GLint,      location)
    STACK_FMT_DATA(GLint64EXT, x)
    STACK_FMT_DATA(GLint64EXT, y)
    STACK_FMT_DATA(GLint64EXT, z)
  STACK_FMT_END()

    exdl_glProgramUniform3i64NV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_programUniform4i64NV)
{
  /* void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     program)
    STACK_FMT_DATA(GLint,      location)
    STACK_FMT_DATA(GLint64EXT, x)
    STACK_FMT_DATA(GLint64EXT, y)
    STACK_FMT_DATA(GLint64EXT, z)
    STACK_FMT_DATA(GLint64EXT, w)
  STACK_FMT_END()

    exdl_glProgramUniform4i64NV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programUniform1i64vNV)
{
  /* void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLsizei,     count)
    STACK_FMT_DATA(GLint64EXT,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform1i64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2i64vNV)
{
  /* void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLsizei,     count)
    STACK_FMT_DATA(GLint64EXT,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform2i64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3i64vNV)
{
  /* void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLsizei,     count)
    STACK_FMT_DATA(GLint64EXT,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform3i64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4i64vNV)
{
  /* void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLsizei,     count)
    STACK_FMT_DATA(GLint64EXT,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform4i64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform1ui64NV)
{
  /* void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, x)
  STACK_FMT_END()

    exdl_glProgramUniform1ui64NV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_programUniform2ui64NV)
{
  /* void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, x)
    STACK_FMT_DATA(GLuint64EXT, y)
  STACK_FMT_END()

    exdl_glProgramUniform2ui64NV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_programUniform3ui64NV)
{
  /* void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, x)
    STACK_FMT_DATA(GLuint64EXT, y)
    STACK_FMT_DATA(GLuint64EXT, z)
  STACK_FMT_END()

    exdl_glProgramUniform3ui64NV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_programUniform4ui64NV)
{
  /* void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      program)
    STACK_FMT_DATA(GLint,       location)
    STACK_FMT_DATA(GLuint64EXT, x)
    STACK_FMT_DATA(GLuint64EXT, y)
    STACK_FMT_DATA(GLuint64EXT, z)
    STACK_FMT_DATA(GLuint64EXT, w)
  STACK_FMT_END()

    exdl_glProgramUniform4ui64NV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_programUniform1ui64vNV)
{
  /* void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       program)
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform1ui64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform2ui64vNV)
{
  /* void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       program)
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform2ui64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform3ui64vNV)
{
  /* void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       program)
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform3ui64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

EXDL_API(egl_programUniform4ui64vNV)
{
  /* void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       program)
    STACK_FMT_DATA(GLint,        location)
    STACK_FMT_DATA(GLsizei,      count)
    STACK_FMT_DATA(GLuint64EXT,  value[])
  STACK_FMT_END()

    exdl_glProgramUniform4ui64vNV
    ( STACK_GET_DATA(program)
   ,  STACK_GET_DATA(location)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_ADDR(value)
    );
}

/* GL_NV_shader_buffer_store */

/* GL_NV_tessellation_program5 */

/* GL_NV_vertex_attrib_integer_64bit */

EXDL_API(egl_vertexAttribL1i64NV)
{
  /* void glVertexAttribL1i64NV(GLuint index, GLint64EXT x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     index)
    STACK_FMT_DATA(GLint64EXT, x)
  STACK_FMT_END()

    exdl_glVertexAttribL1i64NV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttribL2i64NV)
{
  /* void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     index)
    STACK_FMT_DATA(GLint64EXT, x)
    STACK_FMT_DATA(GLint64EXT, y)
  STACK_FMT_END()

    exdl_glVertexAttribL2i64NV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttribL3i64NV)
{
  /* void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     index)
    STACK_FMT_DATA(GLint64EXT, x)
    STACK_FMT_DATA(GLint64EXT, y)
    STACK_FMT_DATA(GLint64EXT, z)
  STACK_FMT_END()

    exdl_glVertexAttribL3i64NV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttribL4i64NV)
{
  /* void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,     index)
    STACK_FMT_DATA(GLint64EXT, x)
    STACK_FMT_DATA(GLint64EXT, y)
    STACK_FMT_DATA(GLint64EXT, z)
    STACK_FMT_DATA(GLint64EXT, w)
  STACK_FMT_END()

    exdl_glVertexAttribL4i64NV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttribL1i64vNV)
{
  /* void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLint64EXT,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL1i64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL2i64vNV)
{
  /* void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLint64EXT,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL2i64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL3i64vNV)
{
  /* void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLint64EXT,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL3i64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL4i64vNV)
{
  /* void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLint64EXT,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL4i64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL1ui64NV)
{
  /* void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLuint64EXT, x)
  STACK_FMT_END()

    exdl_glVertexAttribL1ui64NV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
    );
}

EXDL_API(egl_vertexAttribL2ui64NV)
{
  /* void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLuint64EXT, x)
    STACK_FMT_DATA(GLuint64EXT, y)
  STACK_FMT_END()

    exdl_glVertexAttribL2ui64NV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
    );
}

EXDL_API(egl_vertexAttribL3ui64NV)
{
  /* void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLuint64EXT, x)
    STACK_FMT_DATA(GLuint64EXT, y)
    STACK_FMT_DATA(GLuint64EXT, z)
  STACK_FMT_END()

    exdl_glVertexAttribL3ui64NV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
    );
}

EXDL_API(egl_vertexAttribL4ui64NV)
{
  /* void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLuint64EXT, x)
    STACK_FMT_DATA(GLuint64EXT, y)
    STACK_FMT_DATA(GLuint64EXT, z)
    STACK_FMT_DATA(GLuint64EXT, w)
  STACK_FMT_END()

    exdl_glVertexAttribL4ui64NV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(x)
   ,  STACK_GET_DATA(y)
   ,  STACK_GET_DATA(z)
   ,  STACK_GET_DATA(w)
    );
}

EXDL_API(egl_vertexAttribL1ui64vNV)
{
  /* void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       index)
    STACK_FMT_DATA(GLuint64EXT,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL1ui64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL2ui64vNV)
{
  /* void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       index)
    STACK_FMT_DATA(GLuint64EXT,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL2ui64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL3ui64vNV)
{
  /* void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       index)
    STACK_FMT_DATA(GLuint64EXT,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL3ui64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_vertexAttribL4ui64vNV)
{
  /* void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT* v) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       index)
    STACK_FMT_DATA(GLuint64EXT,  v[])
  STACK_FMT_END()

    exdl_glVertexAttribL4ui64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_ADDR(v)
    );
}

EXDL_API(egl_getVertexAttribLi64vNV)
{
  /* void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,      index)
    STACK_FMT_DATA(GLenum,      pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLint64EXT, params)
  FRAME_FMT_END()

    exdl_glGetVertexAttribLi64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_getVertexAttribLui64vNV)
{
  /* void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT* params) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,       index)
    STACK_FMT_DATA(GLenum,       pname)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint64EXT, params)
  FRAME_FMT_END()

    exdl_glGetVertexAttribLui64vNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(pname)
   ,  FRAME_GET_ADDR(params)
    );

  THROW_FRAME()
}

EXDL_API(egl_vertexAttribLFormatNV)
{
  /* void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,  index)
    STACK_FMT_DATA(GLint,   size)
    STACK_FMT_DATA(GLenum,  type)
    STACK_FMT_DATA(GLsizei, stride)
  STACK_FMT_END()

    exdl_glVertexAttribLFormatNV
    ( STACK_GET_DATA(index)
   ,  STACK_GET_DATA(size)
   ,  STACK_GET_DATA(type)
   ,  STACK_GET_DATA(stride)
    );
}

/* GL_NV_multisample_coverage */

/* GL_AMD_name_gen_delete */

EXDL_API(egl_genNamesAMD)
{
  /* void glGenNamesAMD(GLenum identifier, GLuint num, GLuint* names) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  identifier)
    STACK_FMT_DATA(GLuint,  num)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, names)
  FRAME_FMT_END()

    exdl_glGenNamesAMD
    ( STACK_GET_DATA(identifier)
   ,  STACK_GET_DATA(num)
   ,  FRAME_GET_ADDR(names)
    );

  THROW_FRAME()
}

EXDL_API(egl_deleteNamesAMD)
{
  /* void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint* names) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  identifier)
    STACK_FMT_DATA(GLuint,  num)
    STACK_FMT_DATA(GLuint,  names[])
  STACK_FMT_END()

    exdl_glDeleteNamesAMD
    ( STACK_GET_DATA(identifier)
   ,  STACK_GET_DATA(num)
   ,  STACK_GET_ADDR(names)
    );
}

EXDL_API(egl_isNameAMD)
{
  /* GLboolean glIsNameAMD(GLenum identifier, GLuint name) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum, identifier)
    STACK_FMT_DATA(GLuint, name)
  STACK_FMT_END()

  CATCH_RESULT(GLboolean)

    exdl_glIsNameAMD
    ( STACK_GET_DATA(identifier)
   ,  STACK_GET_DATA(name)
    );

  THROW_RESULT(GLboolean)
}

/* GL_AMD_debug_output */

EXDL_API(egl_debugMessageEnableAMD)
{
  /* void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,    category)
    STACK_FMT_DATA(GLenum,    severity)
    STACK_FMT_DATA(GLsizei,   count)
    STACK_FMT_LPTR(GLuint*,   ids)
    STACK_FMT_DATA(GLboolean, enabled)
  STACK_FMT_END()

    exdl_glDebugMessageEnableAMD
    ( STACK_GET_DATA(category)
   ,  STACK_GET_DATA(severity)
   ,  STACK_GET_DATA(count)
   ,  STACK_GET_DATA(ids)
   ,  STACK_GET_DATA(enabled)
    );
}

EXDL_API(egl_debugMessageInsertAMD)
{
  /* void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar* buf) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLenum,  category)
    STACK_FMT_DATA(GLenum,  severity)
    STACK_FMT_DATA(GLuint,  id)
    STACK_FMT_DATA(GLsizei, length)
    STACK_FMT_DATA(GLchar,  buf[])
  STACK_FMT_END()

    exdl_glDebugMessageInsertAMD
    ( STACK_GET_DATA(category)
   ,  STACK_GET_DATA(severity)
   ,  STACK_GET_DATA(id)
   ,  STACK_GET_DATA(length)
   ,  STACK_GET_ADDR(buf)
    );
}

EXDL_API(egl_debugMessageCallbackAMD)
{
  /* void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, GLvoid* userParam) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLDEBUGPROCAMD, callback)
    STACK_FMT_DATA(GLvoid,         userParam[])
  STACK_FMT_END()

    exdl_glDebugMessageCallbackAMD
    ( STACK_GET_DATA(callback)
   ,  STACK_GET_ADDR(userParam)
    );
}

EXDL_API(egl_getDebugMessageLogAMD)
{
  /* GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum* categories, GLuint* severities, GLuint* ids, GLsizei* lengths, GLchar* message) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLuint,   count)
    STACK_FMT_DATA(GLsizei,  bufsize)
    STACK_FMT_LPTR(GLenum*,  categories)
    STACK_FMT_LPTR(GLuint*,  severities)
    STACK_FMT_LPTR(GLuint*,  ids)
    STACK_FMT_LPTR(GLsizei*, lengths)
    STACK_FMT_LPTR(GLchar*,  message)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLuint, exdl)
  FRAME_FMT_END()

  FRAME_SET_DATA(exdl) =

    exdl_glGetDebugMessageLogAMD
    ( STACK_GET_DATA(count)
   ,  STACK_GET_DATA(bufsize)
   ,  STACK_GET_DATA(categories)
   ,  STACK_GET_DATA(severities)
   ,  STACK_GET_DATA(ids)
   ,  STACK_GET_DATA(lengths)
   ,  STACK_GET_DATA(message)
    );

  THROW_FRAME()
}

/* GL_NV_vdpau_interop */

EXDL_API(egl_vDPAUInitNV)
{
  /* void glVDPAUInitNV(const GLvoid* vdpDevice, const GLvoid* getProcAddress) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(GLvoid*, vdpDevice)
    STACK_FMT_DATA(GLvoid,  getProcAddress[])
  STACK_FMT_END()

    exdl_glVDPAUInitNV
    ( STACK_GET_DATA(vdpDevice)
   ,  STACK_GET_ADDR(getProcAddress)
    );
}

EXDL_API(egl_vDPAUFiniNV)
{
  /* void glVDPAUFiniNV(void) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  exdl_glVDPAUFiniNV
  (
  );
}

EXDL_API(egl_vDPAURegisterVideoSurfaceNV)
{
  /* GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(GLvoid* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint* textureNames) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(GLvoid*, vdpSurface)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, numTextureNames)
    STACK_FMT_DATA(GLuint,  textureNames[])
  STACK_FMT_END()

  CATCH_RESULT(GLvdpauSurfaceNV)

    exdl_glVDPAURegisterVideoSurfaceNV
    ( STACK_GET_DATA(vdpSurface)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(numTextureNames)
   ,  STACK_GET_ADDR(textureNames)
    );

  THROW_RESULT(GLvdpauSurfaceNV)
}

EXDL_API(egl_vDPAURegisterOutputSurfaceNV)
{
  /* GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(GLvoid* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint* textureNames) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_LPTR(GLvoid*, vdpSurface)
    STACK_FMT_DATA(GLenum,  target)
    STACK_FMT_DATA(GLsizei, numTextureNames)
    STACK_FMT_DATA(GLuint,  textureNames[])
  STACK_FMT_END()

  CATCH_RESULT(GLvdpauSurfaceNV)

    exdl_glVDPAURegisterOutputSurfaceNV
    ( STACK_GET_DATA(vdpSurface)
   ,  STACK_GET_DATA(target)
   ,  STACK_GET_DATA(numTextureNames)
   ,  STACK_GET_ADDR(textureNames)
    );

  THROW_RESULT(GLvdpauSurfaceNV)
}

EXDL_API(egl_vDPAUIsSurfaceNV)
{
  /* void glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLvdpauSurfaceNV, surface)
  STACK_FMT_END()

    exdl_glVDPAUIsSurfaceNV
    ( STACK_GET_DATA(surface)
    );
}

EXDL_API(egl_vDPAUUnregisterSurfaceNV)
{
  /* void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLvdpauSurfaceNV, surface)
  STACK_FMT_END()

    exdl_glVDPAUUnregisterSurfaceNV
    ( STACK_GET_DATA(surface)
    );
}

EXDL_API(egl_vDPAUGetSurfaceivNV)
{
  /* void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLvdpauSurfaceNV, surface)
    STACK_FMT_DATA(GLenum,           pname)
    STACK_FMT_DATA(GLsizei,          bufSize)
  STACK_FMT_END()

  FRAME_FMT_BEGIN()
    FRAME_FMT_DATA(GLsizei,         length)
    FRAME_FMT_DATA(GLint,           values)
  FRAME_FMT_END()

    exdl_glVDPAUGetSurfaceivNV
    ( STACK_GET_DATA(surface)
   ,  STACK_GET_DATA(pname)
   ,  STACK_GET_DATA(bufSize)
   ,  FRAME_GET_ADDR(length)
   ,  FRAME_GET_ADDR(values)
    );

  THROW_FRAME()
}

EXDL_API(egl_vDPAUSurfaceAccessNV)
{
  /* void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLvdpauSurfaceNV, surface)
    STACK_FMT_DATA(GLenum,           access)
  STACK_FMT_END()

    exdl_glVDPAUSurfaceAccessNV
    ( STACK_GET_DATA(surface)
   ,  STACK_GET_DATA(access)
    );
}

EXDL_API(egl_vDPAUMapSurfacesNV)
{
  /* void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV* surfaces) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei,           numSurfaces)
    STACK_FMT_DATA(GLvdpauSurfaceNV,  surfaces[])
  STACK_FMT_END()

    exdl_glVDPAUMapSurfacesNV
    ( STACK_GET_DATA(numSurfaces)
   ,  STACK_GET_ADDR(surfaces)
    );
}

EXDL_API(egl_vDPAUUnmapSurfacesNV)
{
  /* void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV* surfaces) */

  /* exp :  */
  /* inp :  */
  /* ret :  */

  STACK_FMT_BEGIN()
    STACK_FMT_DATA(GLsizei,           numSurface)
    STACK_FMT_DATA(GLvdpauSurfaceNV,  surfaces[])
  STACK_FMT_END()

    exdl_glVDPAUUnmapSurfacesNV
    ( STACK_GET_DATA(numSurface)
   ,  STACK_GET_ADDR(surfaces)
    );
}

/* GL_AMD_transform_feedback3_lines_triangles */

#endif // COMPILE_GLEXT
