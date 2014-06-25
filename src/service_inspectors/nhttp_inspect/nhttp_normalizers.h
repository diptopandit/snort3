/****************************************************************************
 *
** Copyright (C) 2014 Cisco and/or its affiliates. All rights reserved.
 * Copyright (C) 2003-2013 Sourcefire, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License Version 2 as
 * published by the Free Software Foundation.  You may not use, modify or
 * distribute this program under any other version of the GNU General
 * Public License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 ****************************************************************************/

//
//  @author     Tom Peters <thopeter@cisco.com>
//
//  @brief      Normalizer function declarations
//

#ifndef NHTTP_NORMALIZERS_H
#define NHTTP_NORMALIZERS_H

int32_t normDecimalInteger(const uint8_t*, int32_t, uint8_t*, uint64_t&, const void* notUsed);
int32_t norm2Lower(const uint8_t*, int32_t, uint8_t*, uint64_t&, const void* notUsed);
int32_t normStrCode(const uint8_t*, int32_t, uint8_t*, uint64_t&, const void*);
int32_t normSeqStrCode(const uint8_t*, int32_t, uint8_t*, uint64_t&, const void*);
int32_t normRemoveLws(const uint8_t*, int32_t, uint8_t*, uint64_t&, const void* notUsed);

#endif


