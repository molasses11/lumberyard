/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/
// Original file Copyright Crytek GMBH or its affiliates, used under license.

#ifndef CRYINCLUDE_CRYPHYSICS_IPHYSICS_H
#define CRYINCLUDE_CRYPHYSICS_IPHYSICS_H
#pragma once

#if ENABLE_CRY_PHYSICS
#ifdef PHYSICS_EXPORTS
    #define CRYPHYSICS_API DLL_EXPORT
#else
    #define CRYPHYSICS_API DLL_IMPORT
#endif

#define vector_class Vec3_tpl


#include <CrySizer.h>



//#include "utils.h"
#include "Cry_Math.h"
#include "primitives.h"

extern "C" CRYPHYSICS_API IPhysicalWorld * CreatePhysicalWorld(struct ISystem* pLog);
#endif // ENABLE_CRY_PHYSICS

#endif // CRYINCLUDE_CRYPHYSICS_IPHYSICS_H
