/*  =========================================================================
    composite_metrics_classes - private header file

    Copyright (C) 2014 - 2015 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef COMPOSITE_METRICS_CLASSES_H_INCLUDED
#define COMPOSITE_METRICS_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/composite_metrics.h"

//  Internal API
#include "logger.h"
#include "subprocess.h"
#include "actor_commands.h"
#include "data.h"
#include "proto_metric_unavailable.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef COMPOSITE_METRICS_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
COMPOSITE_METRICS_EXPORT void
    logger_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
COMPOSITE_METRICS_EXPORT void
    subprocess_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
COMPOSITE_METRICS_EXPORT void
    actor_commands_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
COMPOSITE_METRICS_EXPORT void
    data_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
COMPOSITE_METRICS_EXPORT void
    proto_metric_unavailable_test (bool verbose);

#endif // COMPOSITE_METRICS_BUILD_DRAFT_API

#endif
