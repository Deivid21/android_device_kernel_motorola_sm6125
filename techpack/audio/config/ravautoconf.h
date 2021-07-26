/* Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#undef CONFIG_SND_SOC_MADERA
#undef CONFIG_CIRRUS_PLAYBACK
#define CONFIG_TAS2562_REGMAP 1
#define CONFIG_TAS2562_CODEC 1
#define TAS2558_CODEC 1
#define CONFIG_TAS25XX_CALIB 1
#define CONFIG_SND_SOC_TAS2562 1
