/*
	nVidia DirectDraw Fix
	Copyright (c) 2009 Julien Langer

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef COMPAT_H
#define COMPAT_H

#include "config.h"

#ifdef HAVE_STDINT_H
	#include <stdint.h>
#else
	#ifdef _MSC_VER
		typedef unsigned __int64 uint64_t;
		typedef unsigned __int32 uint32_t;
		typedef unsigned __int16 uint16_t;
		typedef unsigned __int8 uint8_t;
		typedef __int64 int64_t;
		typedef __int32 int32_t;
		typedef __int16 int16_t;
		typedef __int8 int8_t;
	#endif
#endif

#endif
