/*******************************************************************************
 *
 *  Copyright (c) 2019-2022 TimesGraph
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

#ifndef TG_SIMD_H
#define TG_SIMD_H

#include <cstring>

#ifdef ENABLE_ASMLIB
#include "asmlib/asmlib.h"
#define __MEMCPY A_memcpy
#define __MEMSET A_memset
//TODO: replace with A_memmove (-fPIC asm lib)
#define __MEMMOVE memmove
#else
#define __MEMCPY memcpy
#define __MEMSET memset
#define __MEMMOVE memmove
#endif

#endif //TG_SIMD_H
