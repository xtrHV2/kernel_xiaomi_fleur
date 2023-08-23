/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include "kd_imgsensor.h"
#include "imgsensor_sensor_list.h"

/* Add Sensor Init function here
 * Note:
 * 1. Add by the resolution from ""large to small"", due to large sensor
 *    will be possible to be main sensor.
 *    This can avoid I2C error during searching sensor.
 * 2. This file should be the same as
 *    mediatek\custom\common\hal\imgsensor\src\sensorlist.cpp
 */
struct IMGSENSOR_SENSOR_LIST
	gimgsensor_sensor_list[MAX_NUM_OF_SUPPORT_SENSOR] = {
#if defined(S5KHM2SD_MAIN_OFILM_MIPI_RAW)
{S5KHM2SD_MAIN_OFILM_SENSOR_ID, SENSOR_DRVNAME_S5KHM2SD_MAIN_OFILM_MIPI_RAW, S5KHM2SD_MAIN_OFILM_MIPI_RAW_SensorInit},
#endif
#if defined(S5KHM2SD_MAIN_SEMCO_MIPI_RAW)
{S5KHM2SD_MAIN_SEMCO_SENSOR_ID, SENSOR_DRVNAME_S5KHM2SD_MAIN_SEMCO_MIPI_RAW, S5KHM2SD_MAIN_SEMCO_MIPI_RAW_SensorInit},
#endif
#if defined(OV64B40_MAIN_SUNNY_MIPI_RAW)
{OV64B40_MAIN_SUNNY_SENSOR_ID, SENSOR_DRVNAME_OV64B40_MAIN_SUNNY_MIPI_RAW, OV64B40_MAIN_SUNNY_MIPI_RAW_SensorInit},
#endif
#if defined(OV64B40_MAIN_AAC_MIPI_RAW)
{OV64B40_MAIN_AAC_SENSOR_ID, SENSOR_DRVNAME_OV64B40_MAIN_AAC_MIPI_RAW, OV64B40_MAIN_AAC_MIPI_RAW_SensorInit},
#endif
#if defined(OV64B40_MAIN_OFILM_MIPI_RAW)
{OV64B40_MAIN_OFILM_SENSOR_ID, SENSOR_DRVNAME_OV64B40_MAIN_OFILM_MIPI_RAW, OV64B40_MAIN_OFILM_MIPI_RAW_SensorInit},
#endif
#if defined(IMX471_FRONT_SUNNY_MIPI_RAW)
{IMX471_FRONT_SUNNY_SENSOR_ID, SENSOR_DRVNAME_IMX471_FRONT_SUNNY_MIPI_RAW, IMX471_FRONT_SUNNY_MIPI_RAW_SensorInit},
#endif
#if defined(IMX471_FRONT_OFILM_MIPI_RAW)
{IMX471_FRONT_OFILM_SENSOR_ID, SENSOR_DRVNAME_IMX471_FRONT_OFILM_MIPI_RAW, IMX471_FRONT_OFILM_MIPI_RAW_SensorInit},
#endif
#if defined(IMX355_ULTRA_OFILM_MIPI_RAW)
{IMX355_ULTRA_OFILM_SENSOR_ID, SENSOR_DRVNAME_IMX355_ULTRA_OFILM_MIPI_RAW, IMX355_ULTRA_OFILM_MIPI_RAW_SensorInit},
#endif
#if defined(S5K4H7_ULTRA_SUNNY_MIPI_RAW)
{S5K4H7_ULTRA_SUNNY_SENSOR_ID, SENSOR_DRVNAME_S5K4H7_ULTRA_SUNNY_MIPI_RAW, S5K4H7_ULTRA_SUNNY_MIPI_RAW_SensorInit},
#endif
#if defined(OV02B1B_DEPTH_SUNNY_MIPI_RAW)
{OV02B1B_DEPTH_SUNNY_SENSOR_ID, SENSOR_DRVNAME_OV02B1B_DEPTH_SUNNY_MIPI_RAW, OV02B1B_DEPTH_SUNNY_MIPI_RAW_SensorInit},
#endif
#if defined(OV02B1B_DEPTH_TRULY_MIPI_RAW)
{OV02B1B_DEPTH_TRULY_SENSOR_ID, SENSOR_DRVNAME_OV02B1B_DEPTH_TRULY_MIPI_RAW, OV02B1B_DEPTH_TRULY_MIPI_RAW_SensorInit},
#endif
#if defined(OV02B1B_DEPTH_SUNNY2_MIPI_RAW)
{OV02B1B_DEPTH_SUNNY2_SENSOR_ID, SENSOR_DRVNAME_OV02B1B_DEPTH_SUNNY2_MIPI_RAW, OV02B1B_DEPTH_SUNNY2_MIPI_RAW_SensorInit},
#endif
#if defined(GC02M1_MACRO_OFILM_MIPI_RAW)
{GC02M1_MACRO_OFILM_SENSOR_ID, SENSOR_DRVNAME_GC02M1_MACRO_OFILM_MIPI_RAW, GC02M1_MACRO_OFILM_MIPI_RAW_SensorInit},
#endif
#if defined(GC02M1_MACRO_AAC_MIPI_RAW)
{GC02M1_MACRO_AAC_SENSOR_ID, SENSOR_DRVNAME_GC02M1_MACRO_AAC_MIPI_RAW, GC02M1_MACRO_AAC_MIPI_RAW_SensorInit},
#endif

	/*  ADD sensor driver before this line */
	{0, {0}, NULL}, /* end of list */
};

/* e_add new sensor driver here */

