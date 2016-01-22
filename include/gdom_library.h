/*  =========================================================================
    global domination - generated layer of public API

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of Global Domination. Resistance is useless.     
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef GDOM_LIBRARY_H_INCLUDED
#define GDOM_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>

//  GDOM version macros for compile-time API detection

#define GDOM_VERSION_MAJOR 0
#define GDOM_VERSION_MINOR 3
#define GDOM_VERSION_PATCH 0

#define GDOM_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define GDOM_VERSION \
    GDOM_MAKE_VERSION(GDOM_VERSION_MAJOR, GDOM_VERSION_MINOR, GDOM_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBGDOM_STATIC
#       define GDOM_EXPORT
#   elif defined LIBGDOM_EXPORTS
#       define GDOM_EXPORT __declspec(dllexport)
#   else
#       define GDOM_EXPORT __declspec(dllimport)
#   endif
#else
#   define GDOM_EXPORT
#endif

//  Opaque class structures to allow forward references

//  Draft APIs, excluded by default in stable releases
#ifdef WITH_DRAFTS
typedef struct _gdom_server_t gdom_server_t;
#define GDOM_SERVER_T_DEFINED
typedef struct _gdom_client_t gdom_client_t;
#define GDOM_CLIENT_T_DEFINED
#endif // WITH_DRAFTS

//  Public API classes

//  Draft APIs, excluded by default in stable releases
#ifdef WITH_DRAFTS
#include "gdom_server.h"
#include "gdom_client.h"
#endif // WITH_DRAFTS

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
