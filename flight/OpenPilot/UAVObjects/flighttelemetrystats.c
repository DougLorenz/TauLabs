/**
 ******************************************************************************
 *
 * @file       flighttelemetrystats.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the FlightTelemetryStats object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flighttelemetrystats.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "flighttelemetrystats.h"

// Private variables
static UAVObjHandle handle;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure
 */
int32_t FlightTelemetryStatsInitialize()
{
	UAVObjMetadata metadata;

	// Register object with the object manager
	handle = UAVObjRegister(FLIGHTTELEMETRYSTATS_OBJID, FLIGHTTELEMETRYSTATS_NAME, 0, FLIGHTTELEMETRYSTATS_ISSINGLEINST, FLIGHTTELEMETRYSTATS_ISSETTINGS, FLIGHTTELEMETRYSTATS_NUMBYTES);
	if (handle == 0) return -1;

	// Initialize metadata
	metadata.telemetryAcked = 1;
	metadata.telemetryUpdateMode = UPDATEMODE_PERIODIC;
	metadata.telemetryUpdatePeriod = 5000;
	metadata.gcsTelemetryAcked = 1;
	metadata.gcsTelemetryUpdateMode = UPDATEMODE_NEVER;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdateMode = UPDATEMODE_PERIODIC;
	metadata.loggingUpdatePeriod = 5000;
	UAVObjSetMetadata(handle, &metadata);

	// Done
	return 0;
}

/**
 * Get object handle
 */
UAVObjHandle FlightTelemetryStatsHandle()
{
	return handle;
}


