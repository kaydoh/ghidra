/* ###
 * IP: GHIDRA
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "pcode_test.h"


#define PCODE_CONVERT(typ, typ0)			\
  typ0 pcode_##typ##_to_##typ0##_convert(typ a) {	\
    return (typ0)a;					\
  }

PCODE_CONVERT(i1, i1);
PCODE_CONVERT(i1, i2);
PCODE_CONVERT(i1, i4);
PCODE_CONVERT(i1, u1);
PCODE_CONVERT(i1, u2);
PCODE_CONVERT(i1, u4);

PCODE_CONVERT(i2, i1);
PCODE_CONVERT(i2, i2);
PCODE_CONVERT(i2, i4);
PCODE_CONVERT(i2, u1);
PCODE_CONVERT(i2, u2);
PCODE_CONVERT(i2, u4);

PCODE_CONVERT(i4, i1);
PCODE_CONVERT(i4, i2);
PCODE_CONVERT(i4, i4);
PCODE_CONVERT(i4, u1);
PCODE_CONVERT(i4, u2);
PCODE_CONVERT(i4, u4);

PCODE_CONVERT(u1, i1);
PCODE_CONVERT(u1, i2);
PCODE_CONVERT(u1, i4);
PCODE_CONVERT(u1, u1);
PCODE_CONVERT(u1, u2);
PCODE_CONVERT(u1, u4);

PCODE_CONVERT(u2, i1);
PCODE_CONVERT(u2, i2);
PCODE_CONVERT(u2, i4);
PCODE_CONVERT(u2, u1);
PCODE_CONVERT(u2, u2);
PCODE_CONVERT(u2, u4);

PCODE_CONVERT(u4, i1);
PCODE_CONVERT(u4, i2);
PCODE_CONVERT(u4, i4);
PCODE_CONVERT(u4, u1);
PCODE_CONVERT(u4, u2);
PCODE_CONVERT(u4, u4);

#if defined(HAS_LONGLONG)

PCODE_CONVERT(i8, i1);
PCODE_CONVERT(i8, i2);
PCODE_CONVERT(i8, i4);
PCODE_CONVERT(i8, i8);
PCODE_CONVERT(i8, u1);
PCODE_CONVERT(i8, u2);
PCODE_CONVERT(i8, u4);
PCODE_CONVERT(i8, u8);

PCODE_CONVERT(u8, i1);
PCODE_CONVERT(u8, i2);
PCODE_CONVERT(u8, i4);
PCODE_CONVERT(u8, i8);
PCODE_CONVERT(u8, u1);
PCODE_CONVERT(u8, u2);
PCODE_CONVERT(u8, u4);
PCODE_CONVERT(u8, u8);

PCODE_CONVERT(i1, i8);
PCODE_CONVERT(i2, i8);
PCODE_CONVERT(i4, i8);
PCODE_CONVERT(u1, i8);
PCODE_CONVERT(u2, i8);
PCODE_CONVERT(u4, i8);

PCODE_CONVERT(i1, u8);
PCODE_CONVERT(i2, u8);
PCODE_CONVERT(i4, u8);
PCODE_CONVERT(u1, u8);
PCODE_CONVERT(u2, u8);
PCODE_CONVERT(u4, u8);

#endif // HAS_LONGLONG


#if defined(HAS_FLOAT)

PCODE_CONVERT(f4, i1);
PCODE_CONVERT(f4, i2);
PCODE_CONVERT(f4, i4);
PCODE_CONVERT(f4, f4);
PCODE_CONVERT(f4, u1);
PCODE_CONVERT(f4, u2);
PCODE_CONVERT(f4, u4);

PCODE_CONVERT(i1, f4);
PCODE_CONVERT(i2, f4);
PCODE_CONVERT(i4, f4);
PCODE_CONVERT(u1, f4);
PCODE_CONVERT(u2, f4);
PCODE_CONVERT(u4, f4);

#if defined(HAS_LONGLONG)
PCODE_CONVERT(f4, u8);
PCODE_CONVERT(f4, i8);
PCODE_CONVERT(u8, f4);
PCODE_CONVERT(i8, f4);
#endif // HAS_LONGLONG

#endif // HAS_FLOAT


#if defined(HAS_DOUBLE)

PCODE_CONVERT(f8, i1);
PCODE_CONVERT(f8, i2);
PCODE_CONVERT(f8, i4);
PCODE_CONVERT(f8, f8);
PCODE_CONVERT(f8, u1);
PCODE_CONVERT(f8, u2);
PCODE_CONVERT(f8, u4);

PCODE_CONVERT(i1, f8);
PCODE_CONVERT(i2, f8);
PCODE_CONVERT(i4, f8);
PCODE_CONVERT(u1, f8);
PCODE_CONVERT(u2, f8);
PCODE_CONVERT(u4, f8);

#if defined(HAS_FLOAT)
PCODE_CONVERT(f8, f4);
PCODE_CONVERT(f4, f8);
#endif // HAS_FLOAT

#if defined(HAS_LONGLONG)
PCODE_CONVERT(f8, u8);
PCODE_CONVERT(f8, i8);
PCODE_CONVERT(u8, f8);
PCODE_CONVERT(i8, f8);
#endif // HAS_LONGLONG

#endif // HAS_DOUBLE
