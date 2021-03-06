/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * gimpthresholdconfig.h
 * Copyright (C) 2007 Michael Natterer <mitch@gimp.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GIMP_THRESHOLD_CONFIG_H__
#define __GIMP_THRESHOLD_CONFIG_H__


#include "core/gimpsettings.h"


#define GIMP_TYPE_THRESHOLD_CONFIG            (gimp_threshold_config_get_type ())
#define GIMP_THRESHOLD_CONFIG(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIMP_TYPE_THRESHOLD_CONFIG, GimpThresholdConfig))
#define GIMP_THRESHOLD_CONFIG_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  GIMP_TYPE_THRESHOLD_CONFIG, GimpThresholdConfigClass))
#define GIMP_IS_THRESHOLD_CONFIG(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIMP_TYPE_THRESHOLD_CONFIG))
#define GIMP_IS_THRESHOLD_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  GIMP_TYPE_THRESHOLD_CONFIG))
#define GIMP_THRESHOLD_CONFIG_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  GIMP_TYPE_THRESHOLD_CONFIG, GimpThresholdConfigClass))


typedef struct _GimpThresholdConfigClass GimpThresholdConfigClass;

struct _GimpThresholdConfig
{
  GimpSettings  parent_instance;

  gdouble       low;
  gdouble       high;
};

struct _GimpThresholdConfigClass
{
  GimpSettingsClass  parent_class;
};


GType   gimp_threshold_config_get_type (void) G_GNUC_CONST;


#endif /* __GIMP_THRESHOLD_CONFIG_H__ */
