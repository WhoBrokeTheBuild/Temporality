#ifndef TEMPORALITY_OPENGL_CONFIG_HPP
#define TEMPORALITY_OPENGL_CONFIG_HPP

#include <Temporality/Config.hpp>

#if defined(TEMPORALITY_OPENGL_EXPORT)
    #define TEMPORALITY_OPENGL_API TEMPORALITY_API_EXPORT
#else
    #define TEMPORALITY_OPENGL_API TEMPORALITY_API_IMPORT
#endif

#include <Temporality/Macros.hpp>

#include <glad/gl.h>
#undef near
#undef far

#endif // TEMPORALITY_OPENGL_CONFIG_HPP