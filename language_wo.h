/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 *
 * dossier: C:\Users\Naedioba BA\Desktop\Marlin 2\Marlin-2.0.x (1)\Marlin-2.0.x\Marlin\src\lcd\language
 * site detraduction: https://fr.glosbe.com/fr/wo/Example.com
 * Final file: 07 October 2021
 */
#pragma once

/**
 * French
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 */

#define DISPLAY_CHARSET_ISO10646_1

namespace Language_wo {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t CHARSIZE              = 2;
  LSTR LANGUAGE                           = _UxGT("Wolof");

   // These strings should be translated
  LSTR WELCOME_MSG                        = MACHINE_NAME _UxGT(" pare na");
  LSTR MSG_YES                            = _UxGT("Waaw");
  LSTR MSG_NO                             = _UxGT("Déedéet ");
  LSTR MSG_BACK                           = _UxGT("Dellu");
  LSTR MSG_MEDIA_ABORTING                 = _UxGT("Bayyi...");
  LSTR MSG_MEDIA_INSERTED                 = _UxGT("SD bi dugg na");
  LSTR MSG_MEDIA_REMOVED                  = _UxGT("SD bi gennë");
  LSTR MSG_MEDIA_WAITING                  = _UxGT("Maa ngi xaar SD");
  LSTR MSG_SD_INIT_FAIL                   = _UxGT("SD bu ubbéekuwul");
  LSTR MSG_MEDIA_READ_ERROR               = _UxGT("SD bi baaxul");
  LSTR MSG_MEDIA_USB_REMOVED              = _UxGT("Dakkal na ñu USB bi");
  LSTR MSG_MEDIA_USB_FAILED               = _UxGT("USB bi doxul");
  LSTR MSG_KILL_SUBCALL_OVERFLOW          = _UxGT("Subcall Overflow");
  LSTR MSG_LCD_ENDSTOPS                   = _UxGT("Taxawal");
  LSTR MSG_LCD_SOFT_ENDSTOPS              = _UxGT("Taxawal yu nooy");
  LSTR MSG_MAIN                           = _UxGT("Alluwa bu jiitu");
  LSTR MSG_ADVANCED_SETTINGS              = _UxGT("Tëralin wu xóot");
  LSTR MSG_CONFIGURATION                  = _UxGT("Tëralin");
  LSTR MSG_RUN_AUTO_FILES                 = _UxGT("gcode buy démal boppam");
  LSTR MSG_DISABLE_STEPPERS               = _UxGT("Taxawal jumtukaay yi");
  LSTR MSG_DEBUG_MENU                     = _UxGT("Alluwa gàgganti");
  LSTR MSG_PROGRESS_BAR_TEST              = _UxGT("Jeem galanu jëm kanam");
  LSTR MSG_HOMING                         = _UxGT("Dellu kër");
  LSTR MSG_AUTO_HOME                      = _UxGT("Delloo boppam");
  LSTR MSG_AUTO_HOME_X                    = _UxGT("X delloo boppam");
  LSTR MSG_AUTO_HOME_Y                    = _UxGT("Y delloo boppam");
  LSTR MSG_AUTO_HOME_Z                    = _UxGT("Z delloo boppam");
  LSTR MSG_AUTO_HOME_I                    = _UxGT("Delloo ") LCD_STR_I _UxGT(" boppam");
  LSTR MSG_AUTO_HOME_J                    = _UxGT("Delloo ") LCD_STR_J _UxGT(" boppam");
  LSTR MSG_AUTO_HOME_K                    = _UxGT("Delloo ") LCD_STR_K _UxGT(" boppam");
  LSTR MSG_FILAMENT_SET                   = _UxGT("Tërallini buum");
  LSTR MSG_FILAMENT_MAN                   = _UxGT("Caytukaayu buum ");
  LSTR MSG_LEVBED_FL                      = _UxGT("Ci kanam ci cammooñ");
  LSTR MSG_LEVBED_FR                      = _UxGT("Ci kanam ci ndeyjoor");
  LSTR MSG_LEVBED_C                       = _UxGT("Ci digg bi");
  LSTR MSG_LEVBED_BL                      = _UxGT("Ci ginnaaw ci cammooñ");
  LSTR MSG_LEVBED_BR                      = _UxGT("Ci ginnaaw ci ndeyjoor");
  LSTR MSG_MANUAL_MESH                    = _UxGT("Rabbu loxo");
  LSTR MSG_AUTO_Z_ALIGN                   = _UxGT("Z féeteel boppam");
  LSTR MSG_ITERATION                      = _UxGT("Baamtu G34: %i");
  LSTR MSG_DECREASING_ACCURACY            = _UxGT("Wéraay gaa ngi wañi ku");
  LSTR MSG_ACCURACY_ACHIEVED              = _UxGT("Wéraay gi mat na");
  LSTR MSG_LEVEL_BED_HOMING               = _UxGT("Dellu ci kër yëpp XYZ...");
  LSTR MSG_LEVEL_BED_WAITING              = _UxGT("Cuqal ngir tambali");
  LSTR MSG_LEVEL_BED_NEXT_POINT           = _UxGT("Tomb bi ci topp");
  LSTR MSG_LEVEL_BED_DONE                 = _UxGT("Pare naa jubanti !");
  LSTR MSG_Z_FADE_HEIGHT                  = _UxGT("Kawewaay bi maase na");
  LSTR MSG_SET_HOME_OFFSETS               = _UxGT("Jagal randuk kër gi");
  LSTR MSG_HOME_OFFSET_X                  = _UxGT("Randuk kër X");
  LSTR MSG_HOME_OFFSET_Y                  = _UxGT("Randuk kër Y");
  LSTR MSG_HOME_OFFSET_Z                  = _UxGT("Randuk kër Z");
  LSTR MSG_HOME_OFFSET_I                  = _UxGT("Randuk kër gi ") LCD_STR_I;
  LSTR MSG_HOME_OFFSET_J                  = _UxGT("Randuk kër gi ") LCD_STR_J;
  LSTR MSG_HOME_OFFSET_K                  = _UxGT("Randuk kër gi ") LCD_STR_K;
  LSTR MSG_HOME_OFFSETS_APPLIED           = _UxGT("Randal yu ñu jëfe");
  LSTR MSG_SET_ORIGIN                     = _UxGT("Jagal kër");
  LSTR MSG_TRAMMING_WIZARD                = _UxGT("Jappalekaay tank yi");
  LSTR MSG_SELECT_ORIGIN                  = _UxGT("Tanku lal bi"); // Not a selection of the origin
  LSTR MSG_LAST_VALUE_SP                  = _UxGT("Diggante kër ");
  #if PREHEAT_COUNT
    LSTR MSG_PREHEAT_1                    = _UxGT("Tangal ") PREHEAT_1_LABEL;
    LSTR MSG_PREHEAT_1_H                  = _UxGT("Tangal ") PREHEAT_1_LABEL " ~";
    LSTR MSG_PREHEAT_1_END                = _UxGT("Tangal ") PREHEAT_1_LABEL _UxGT(" xélikaay");
    LSTR MSG_PREHEAT_1_END_E              = _UxGT("Tangal ") PREHEAT_1_LABEL _UxGT(" xélikaay ~");
    LSTR MSG_PREHEAT_1_ALL                = _UxGT("Tangal ") PREHEAT_1_LABEL _UxGT(" Tout");
    LSTR MSG_PREHEAT_1_BEDONLY            = _UxGT("Tangal ") PREHEAT_1_LABEL _UxGT(" Lal");
    LSTR MSG_PREHEAT_1_SETTINGS           = _UxGT("Jagal tangal ") PREHEAT_1_LABEL;

    LSTR MSG_PREHEAT_M                    = _UxGT("Tangal $");
    LSTR MSG_PREHEAT_M_H                  = _UxGT("Tangal $ ~");
    LSTR MSG_PREHEAT_M_END                = _UxGT("Tangal $ xélikaay");
    LSTR MSG_PREHEAT_M_END_E              = _UxGT("Tangal $ xélikaay ~");
    LSTR MSG_PREHEAT_M_ALL                = _UxGT("Tangal $ yëpp");
    LSTR MSG_PREHEAT_M_BEDONLY            = _UxGT("Tangal $ lal bi");
    LSTR MSG_PREHEAT_M_SETTINGS           = _UxGT("Jagal tangal $");
  #endif
  LSTR MSG_PREHEAT_CUSTOM                 = _UxGT("Tangal ci sama coobare");
  LSTR MSG_COOLDOWN                       = _UxGT("Seddal");

  LSTR MSG_CUTTER_FREQUENCY               = _UxGT("Baraay");
  LSTR MSG_LASER_MENU                     = _UxGT("Saytu Laser");
  LSTR MSG_SPINDLE_MENU                   = _UxGT("Saytu sampukaay");
  LSTR MSG_LASER_POWER                    = _UxGT("Kattan");
  LSTR MSG_SPINDLE_POWER                  = _UxGT("Kattanu sampukaay");
  LSTR MSG_LASER_TOGGLE                   = _UxGT("Wëlbati Laser");
  LSTR MSG_LASER_EVAC_TOGGLE              = _UxGT("Wëlbati ëffukaay");
  LSTR MSG_LASER_ASSIST_TOGGLE            = _UxGT("Jappalewaay ngelaw");
  LSTR MSG_LASER_PULSE_MS                 = _UxGT("Test Pulse ms");
  LSTR MSG_LASER_FIRE_PULSE               = _UxGT("Fire Pulse");
  LSTR MSG_FLOWMETER_FAULT                = _UxGT("Coolant Flow Fault");
  LSTR MSG_SPINDLE_TOGGLE                 = _UxGT("Toggle Spindle");
  LSTR MSG_SPINDLE_EVAC_TOGGLE            = _UxGT("Toggle Vacuum");
  LSTR MSG_SPINDLE_FORWARD                = _UxGT("Spindle Forward");
  LSTR MSG_SPINDLE_REVERSE                = _UxGT("Juutal sampukaay yi");
  LSTR MSG_SWITCH_PS_ON                   = _UxGT("Taal mbëj mi");
  LSTR MSG_SWITCH_PS_OFF                  = _UxGT("Fey mbëj mi");
  LSTR MSG_EXTRUDE                        = _UxGT("Xéli");
  LSTR MSG_RETRACT                        = _UxGT("Dellu ginnaaw");
  LSTR MSG_MOVE_AXIS                      = _UxGT("Toxal ngalan");
  LSTR MSG_BED_LEVELING                   = _UxGT("Jubanti lal bi");
  LSTR MSG_LEVEL_BED                      = _UxGT("Kawewaayu lal bi");
  LSTR MSG_BED_TRAMMING                   = _UxGT("Kawewaayu ruqu yi");
  LSTR MSG_BED_TRAMMING_RAISE             = _UxGT("Yëkkëti ruqu wi ba si natukaay bi");
  LSTR MSG_BED_TRAMMING_IN_RANGE          = _UxGT("Kawewaayu ruqu yi jaadu na");
  LSTR MSG_BED_TRAMMING_GOOD_POINTS       = _UxGT("Tomb yu baax: ");
  LSTR MSG_BED_TRAMMING_LAST_Z            = _UxGT("Z bu mujj: ");
  LSTR MSG_NEXT_CORNER                    = _UxGT("Ruqu wi ci topp");
  LSTR MSG_MESH_EDITOR                    = _UxGT("Soppi rabb bi"); // 13 car. max
  LSTR MSG_EDIT_MESH                      = _UxGT("Soppi rëd yi");
  LSTR MSG_MESH_VIEW                      = _UxGT("Xool rabb bi");
  LSTR MSG_EDITING_STOPPED                = _UxGT("Dakkal na ñu coppite yi");
  LSTR MSG_PROBING_POINT                  = _UxGT("Natt tomb");
  LSTR MSG_MESH_X                         = _UxGT("Alluwa tur X");
  LSTR MSG_MESH_Y                         = _UxGT("Alluwa tur Y");
  LSTR MSG_MESH_EDIT_Z                    = _UxGT("Xayma Z");
  LSTR MSG_CUSTOM_COMMANDS                = _UxGT("Samay ndigel");

  LSTR MSG_LCD_TILTING_MESH               = _UxGT("Wéngal rabb");
  LSTR MSG_M48_TEST                       = _UxGT("Diggante natukaay Z M48");
  LSTR MSG_M48_POINT                      = _UxGT("Tomb M48");
  LSTR MSG_M48_OUT_OF_BOUNDS              = _UxGT("Nattukaay bi dafa romb");
  LSTR MSG_M48_DEVIATION                  = _UxGT("Diggante");
  LSTR MSG_IDEX_MENU                      = _UxGT("Anam IDEX");
  LSTR MSG_OFFSETS_MENU                   = _UxGT("Jumtukaayu randal");
  LSTR MSG_IDEX_MODE_AUTOPARK             = _UxGT("Fatul boppam");
  LSTR MSG_IDEX_MODE_DUPLICATE            = _UxGT("Seexal");
  LSTR MSG_IDEX_MODE_MIRRORED_COPY        = _UxGT("Seexalu seetu");
  LSTR MSG_IDEX_MODE_FULL_CTRL            = _UxGT("Saytu bu mat");
  LSTR MSG_IDEX_DUPE_GAP                  = _UxGT("Séexal kambu X");
  LSTR MSG_HOTEND_OFFSET_X                = _UxGT("Xélikaay 2 X");
  LSTR MSG_HOTEND_OFFSET_Y                = _UxGT("Xélikaay 2 Y");
  LSTR MSG_HOTEND_OFFSET_Z                = _UxGT("Xélikaay 2 Z");
  LSTR MSG_UBL_DOING_G29                  = _UxGT("G29 baa ngi dox");
  LSTR MSG_UBL_TOOLS                      = _UxGT("Jumtukaayi UBL");
  LSTR MSG_UBL_LEVEL_BED                  = _UxGT("Lal bi jub na");
  LSTR MSG_LCD_TILTING_MESH               = _UxGT("Tombu wéngal");
  LSTR MSG_UBL_MANUAL_MESH                = _UxGT("Rabbuk loxo");
  LSTR MSG_UBL_MESH_WIZARD                = _UxGT("Dimbalikaay rabb UBL");
  LSTR MSG_UBL_BC_INSERT                  = _UxGT("Teg xeer te natt");
  LSTR MSG_UBL_BC_INSERT2                 = _UxGT("Natt");
  LSTR MSG_UBL_BC_REMOVE                  = _UxGT("Dindin te natt lal bi");
  LSTR MSG_UBL_MOVING_TO_NEXT             = _UxGT("Dem ci bi ci topp");
  LSTR MSG_UBL_ACTIVATE_MESH              = _UxGT("Taal UBL bi");
  LSTR MSG_UBL_DEACTIVATE_MESH            = _UxGT("Fey UBL bi");
  LSTR MSG_UBL_SET_TEMP_BED               = _UxGT("tanggooru lal bi");
  LSTR MSG_UBL_BED_TEMP_CUSTOM            = _UxGT("tanggooru lal bi");
  LSTR MSG_UBL_SET_TEMP_HOTEND            = _UxGT("tanggooru xélikaay bi");
  LSTR MSG_UBL_HOTEND_TEMP_CUSTOM         = _UxGT("tanggooru xélikaay bi");
  LSTR MSG_UBL_MESH_EDIT                  = _UxGT("Soppi rëd yi");
  LSTR MSG_UBL_EDIT_CUSTOM_MESH           = _UxGT("Soppi samay rëd");
  LSTR MSG_UBL_FINE_TUNE_MESH             = _UxGT("Jagal bu ñaw");
  LSTR MSG_UBL_DONE_EDITING_MESH          = _UxGT("Jeexal");
  LSTR MSG_UBL_BUILD_CUSTOM_MESH          = _UxGT("Fent rëd ...");
  LSTR MSG_UBL_BUILD_MESH_MENU            = _UxGT("Fent rëd yi");

  #if PREHEAT_COUNT
    LSTR MSG_UBL_BUILD_MESH_M             = _UxGT("Fent rëd $");
    LSTR MSG_UBL_VALIDATE_MESH_M          = _UxGT("Móol rëd yi$");
  #endif

  LSTR MSG_UBL_BUILD_COLD_MESH            = _UxGT("Natt si seddaay");
  LSTR MSG_UBL_MESH_HEIGHT_ADJUST         = _UxGT("Jagal kawewaayu der wi");
  LSTR MSG_UBL_MESH_HEIGHT_AMOUNT         = _UxGT("Kawewaay (x0.1mm)");
  LSTR MSG_UBL_VALIDATE_MESH_MENU         = _UxGT("Saytu rëd yi");
  LSTR MSG_UBL_VALIDATE_CUSTOM_MESH       = _UxGT("Móol rëd yi ...");
  LSTR MSG_UBL_CONTINUE_MESH              = _UxGT("Yeggali rëd yi");
  LSTR MSG_UBL_MESH_LEVELING              = _UxGT("Këru rabb");
  LSTR MSG_G26_HEATING_BED                = _UxGT("G26: Tangal lal bi");
  LSTR MSG_G26_HEATING_NOZZLE             = _UxGT("Xélikaay baa ngi tang...");
  LSTR MSG_G26_MANUAL_PRIME               = _UxGT("Tambalik loxo...");
  LSTR MSG_G26_FIXED_LENGTH               = _UxGT("Tambalik guddaay bu dul soppiku");
  LSTR MSG_G26_PRIME_DONE                 = _UxGT("Tambali gi jeex na");
  LSTR MSG_G26_CANCELED                   = _UxGT("Dakkal na ñu G26 bi");
  LSTR MSG_G26_LEAVING                    = _UxGT("Gennë G26");
  LSTR MSG_UBL_3POINT_MESH_LEVELING       = _UxGT("Këru 3 tomb");
  LSTR MSG_UBL_GRID_MESH_LEVELING         = _UxGT("Këru rëd yi");
  LSTR MSG_UBL_MESH_LEVEL                 = _UxGT("Natt");
  LSTR MSG_UBL_SIDE_POINTS                = _UxGT("Tombi wet");
  LSTR MSG_UBL_MAP_TYPE                   = _UxGT("Xeetu kart");
  LSTR MSG_UBL_OUTPUT_MAP                 = _UxGT("Toxal rëd yi");
  LSTR MSG_UBL_OUTPUT_MAP_HOST            = _UxGT("Toxalu njaatige");
  LSTR MSG_UBL_OUTPUT_MAP_CSV             = _UxGT("Toxal ci CSV");
  LSTR MSG_UBL_OUTPUT_MAP_BACKUP          = _UxGT("Denc na ñu toxal gi");
  LSTR MSG_UBL_INFO_UBL                   = _UxGT("Xibaari gàgganti UBL");
  LSTR MSG_UBL_FILLIN_AMOUNT              = _UxGT("Limu tomb");
  LSTR MSG_UBL_MANUAL_FILLIN              = _UxGT("Feesalu loxo");
  LSTR MSG_UBL_SMART_FILLIN               = _UxGT("Feesal boppam");
  LSTR MSG_UBL_FILLIN_MESH                = _UxGT("Feesal rabb");
  LSTR MSG_UBL_INVALIDATE_ALL             = _UxGT("Far lepp");
  LSTR MSG_UBL_INVALIDATE_CLOSEST         = _UxGT("Far li gëna jege");
  LSTR MSG_UBL_FINE_TUNE_ALL              = _UxGT("Jagal gu xóot (yëpp)");
  LSTR MSG_UBL_FINE_TUNE_CLOSEST          = _UxGT("Jagal gu xóot gëna jege");
  LSTR MSG_UBL_STORAGE_MESH_MENU          = _UxGT("Denc rabb");
  LSTR MSG_UBL_STORAGE_SLOT               = _UxGT("Xar-xaru SD");
  LSTR MSG_UBL_LOAD_MESH                  = _UxGT("Yeb rabb bi");
  LSTR MSG_UBL_SAVE_MESH                  = _UxGT("Denc rabb bi");
  LSTR MSG_MESH_LOADED                    = _UxGT("Yeb %i rabb");
  LSTR MSG_MESH_SAVED                     = _UxGT("Yeb %i rabb");
  LSTR MSG_UBL_NO_STORAGE                 = _UxGT("Amoul SD");
  LSTR MSG_UBL_SAVE_ERROR                 = _UxGT("Njumte: Dencu UBL");
  LSTR MSG_UBL_RESTORE_ERROR              = _UxGT("Njumte: Ubbi UBL");
  LSTR MSG_UBL_Z_OFFSET                   = _UxGT("Randuk Z: ");
  LSTR MSG_UBL_Z_OFFSET_STOPPED           = _UxGT("Randuk Z bi taxaw na");
  LSTR MSG_UBL_STEP_BY_STEP_MENU          = _UxGT("Jappalekaay UBL");
  LSTR MSG_UBL_1_BUILD_COLD_MESH          = _UxGT("1.Natt si seddaay");
  LSTR MSG_UBL_2_SMART_FILLIN             = _UxGT("2.Mottalil boppam");
  LSTR MSG_UBL_3_VALIDATE_MESH_MENU       = _UxGT("3.Saytu rabb");
  LSTR MSG_UBL_4_FINE_TUNE_ALL            = _UxGT("4.Jagal gu ñaw");
  LSTR MSG_UBL_5_VALIDATE_MESH_MENU       = _UxGT("5.Saytu rabb");
  LSTR MSG_UBL_6_FINE_TUNE_ALL            = _UxGT("6.Jagal gu ñaw");
  LSTR MSG_UBL_7_SAVE_MESH                = _UxGT("7.Denc rabb");

  LSTR MSG_LED_CONTROL                    = _UxGT("Saytu LED");
  LSTR MSG_LEDS                           = _UxGT("Leer");
  LSTR MSG_LED_PRESETS                    = _UxGT("Jagal LED");
  LSTR MSG_SET_LEDS_RED                   = _UxGT("Xonq");
  LSTR MSG_SET_LEDS_ORANGE                = _UxGT("Suraas");
  LSTR MSG_SET_LEDS_YELLOW                = _UxGT("Mboq");
  LSTR MSG_SET_LEDS_GREEN                 = _UxGT("Nëtëx");
  LSTR MSG_SET_LEDS_BLUE                  = _UxGT("Baxa");
  LSTR MSG_SET_LEDS_INDIGO                = _UxGT("Fudan");
  LSTR MSG_SET_LEDS_VIOLET                = _UxGT("Yolet");
  LSTR MSG_SET_LEDS_WHITE                 = _UxGT("Weex");
  LSTR MSG_SET_LEDS_DEFAULT               = _UxGT("Defaut");
  LSTR MSG_LED_CHANNEL_N                  = _UxGT("Yoon =");
  LSTR MSG_LEDS2                          = _UxGT("Léer yi #2");
  LSTR MSG_NEO2_PRESETS                   = _UxGT("Tëralini léer #2");
  LSTR MSG_NEO2_BRIGHTNESS                = _UxGT("Léeraay");
  LSTR MSG_CUSTOM_LEDS                    = _UxGT("Samay LED");
  LSTR MSG_INTENSITY_R                    = _UxGT("Leeraayu xonq");
  LSTR MSG_INTENSITY_G                    = _UxGT("Leeraayu nëtëx");
  LSTR MSG_INTENSITY_B                    = _UxGT("Leeraayu baxa");
  LSTR MSG_INTENSITY_W                    = _UxGT("Leeraayu weex");
  LSTR MSG_LED_BRIGHTNESS                 = _UxGT("Leeraay");

  LSTR MSG_MOVING                         = _UxGT("Toxalin...");
  LSTR MSG_FREE_XY                        = _UxGT("Gàgganti XY");
  LSTR MSG_MOVE_X                         = _UxGT("Toxal X");
  LSTR MSG_MOVE_Y                         = _UxGT("Toxal Y");
  LSTR MSG_MOVE_Z                         = _UxGT("Toxal Z");
  LSTR MSG_MOVE_I                         = _UxGT("Toxal ") LCD_STR_I;
  LSTR MSG_MOVE_J                         = _UxGT("Toxal ") LCD_STR_J;
  LSTR MSG_MOVE_K                         = _UxGT("Toxal ") LCD_STR_K;
  LSTR MSG_MOVE_E                         = _UxGT("Buuxukaay");
  LSTR MSG_MOVE_EN                        = _UxGT("Buuxukaay *");
  LSTR MSG_HOTEND_TOO_COLD                = _UxGT("Xélikaay bi dafa sedd lool");
  LSTR MSG_MOVE_N_MM                      = _UxGT("Toxal %smm");
  LSTR MSG_MOVE_01MM                      = _UxGT("Toxal 0.1mm");
  LSTR MSG_MOVE_1MM                       = _UxGT("Toxal 1mm");
  LSTR MSG_MOVE_10MM                      = _UxGT("Toxal 10mm");
  LSTR MSG_MOVE_100MM                     = _UxGT("Toxal 100mm");
  LSTR MSG_MOVE_0001IN                    = _UxGT("Toxal 0.001\"");
  LSTR MSG_MOVE_001IN                     = _UxGT("Toxal 0.01\"");
  LSTR MSG_MOVE_01IN                      = _UxGT("Toxal 0.1\"");
  LSTR MSG_MOVE_1IN                       = _UxGT("Toxal 1\"");
  LSTR MSG_SPEED                          = _UxGT("Gaawaay");
  LSTR MSG_MAXSPEED                       = _UxGT("Xiir gi gëna gaaw (mm/s)");
  LSTR MSG_MAXSPEED_X                     = _UxGT("Xiir gi") LCD_STR_A _UxGT(" ëpp");
  LSTR MSG_MAXSPEED_Y                     = _UxGT("Xiir gi") LCD_STR_B _UxGT(" ëpp");
  LSTR MSG_MAXSPEED_Z                     = _UxGT("Xiir gi") LCD_STR_C _UxGT(" ëpp");
  LSTR MSG_MAXSPEED_E                     = _UxGT("Xiir gi") LCD_STR_E _UxGT("ëpp");
  LSTR MSG_BED_Z                          = _UxGT("Lal Z");
  LSTR MSG_NOZZLE                         = _UxGT("Xélikaay bi"); //****
  LSTR MSG_NOZZLE_N                       = _UxGT("Xélikaay ~");
  LSTR MSG_NOZZLE_PARKED                  = _UxGT("Xélikaay bi fatu na");
  LSTR MSG_NOZZLE_STANDBY                 = _UxGT("Xélikaay ba ngi xaar");
  LSTR MSG_BED                            = _UxGT("Lal bi");  //****
  LSTR MSG_CHAMBER                        = _UxGT("Boyet");
  LSTR MSG_COOLER                         = _UxGT("Seralukaayu Laser");
  LSTR MSG_COOLER_TOGGLE                  = _UxGT("Wëlbati seralukaay");
  LSTR MSG_FLOWMETER_SAFETY               = _UxGT("Kaaraange yebeef");
  LSTR MSG_LASER                          = _UxGT("Laser");
  LSTR MSG_FAN_SPEED                      = _UxGT("Gaawaay ëpukaay"); // 15 car. max
  LSTR MSG_FAN_SPEED_N                    = _UxGT("Gaaw. ëpukaay.~");
  LSTR MSG_STORED_FAN_N                   = _UxGT("Gaaw. bi dencu~");
  LSTR MSG_EXTRA_FAN_SPEED                = _UxGT("Beneen ëpukaay ");
  LSTR MSG_EXTRA_FAN_SPEED_N              = _UxGT("Beneen ëpukaay~");
  LSTR MSG_CONTROLLER_FAN                 = _UxGT("Uppukaay");
  LSTR MSG_CONTROLLER_FAN_IDLE_SPEED      = _UxGT("Idle Speed");
  LSTR MSG_CONTROLLER_FAN_AUTO_ON         = _UxGT("Anamu boppam);
  LSTR MSG_CONTROLLER_FAN_SPEED           = _UxGT("Active Speed");
  LSTR MSG_CONTROLLER_FAN_DURATION        = _UxGT("Idle Period");
  LSTR MSG_FLOW                           = _UxGT("Yebeef");
  LSTR MSG_FLOW_N                         = _UxGT("Yebeef~");
  LSTR MSG_CONTROL                        = _UxGT("Saytu");
  LSTR MSG_MIN                            = " " LCD_STR_THERMOMETER _UxGT(" Yés");
  LSTR MSG_MAX                            = " " LCD_STR_THERMOMETER _UxGT(" Ëpp");
  LSTR MSG_FACTOR                         = " " LCD_STR_THERMOMETER _UxGT(" Facteur");
  LSTR MSG_AUTOTEMP                       = _UxGT("Tangal boppam");
  LSTR MSG_LCD_ON                         = _UxGT("Taak na");
  LSTR MSG_LCD_OFF                        = _UxGT("Fey na");
  LSTR MSG_PID_AUTOTUNE                   = _UxGT("PID jagal boppam ");
  LSTR MSG_PID_AUTOTUNE_E                 = _UxGT("PID jagal boppam *");
  LSTR MSG_PID_CYCLE                      = _UxGT("Wërngëlu PID");
  LSTR MSG_PID_AUTOTUNE_DONE              = _UxGT("PID jagal boppam pare na");
  LSTR MSG_PID_BAD_EXTRUDER_NUM           = _UxGT("PID jagal boppam doxul! E baaxul");
  LSTR MSG_PID_TEMP_TOO_HIGH              = _UxGT("PID jagal boppam doxul! tanggoor gi dafa ëpp");
  LSTR MSG_PID_TIMEOUT                    = _UxGT("Jagal gi antu wul! Diir gi dafa yagg");
  LSTR MSG_SELECT                         = _UxGT("Tànn");
  LSTR MSG_SELECT_E                       = _UxGT("Tànn *");
  LSTR MSG_ACC                            = _UxGT("Xiir");
  LSTR MSG_JERK                           = _UxGT("Yëngëtu");
  LSTR MSG_VA_JERK                        = _UxGT("V") LCD_STR_A _UxGT(" yëngëtu");
  LSTR MSG_VB_JERK                        = _UxGT("V") LCD_STR_B _UxGT(" yëngëtu");
  LSTR MSG_VC_JERK                        = _UxGT("V") LCD_STR_C _UxGT(" yëngëtu");
  LSTR MSG_VI_JERK                        = _UxGT("V") LCD_STR_I _UxGT(" yëngëtu");
  LSTR MSG_VJ_JERK                        = _UxGT("V") LCD_STR_J _UxGT(" yëngëtu");
  LSTR MSG_VK_JERK                        = _UxGT("V") LCD_STR_K _UxGT(" yëngëtu");
  LSTR MSG_VE_JERK                        = _UxGT("Ve yëngëtu");
  LSTR MSG_JUNCTION_DEVIATION             = _UxGT("Jàddaayu jokk-jokk");
  LSTR MSG_VELOCITY                       = _UxGT("Gaawaay");
  LSTR MSG_VMAX_A                         = _UxGT("Gën gaaw ") LCD_STR_A;
  LSTR MSG_VMAX_B                         = _UxGT("Gën gaaw ") LCD_STR_B;
  LSTR MSG_VMAX_C                         = _UxGT("Gën gaaw ") LCD_STR_C;
  LSTR MSG_VMAX_I                         = _UxGT("Gën gaaw ") LCD_STR_I;
  LSTR MSG_VMAX_J                         = _UxGT("Gën gaaw ") LCD_STR_J;
  LSTR MSG_VMAX_K                         = _UxGT("Gën gaaw ") LCD_STR_K;
  LSTR MSG_VMAX_E                         = _UxGT("Gën gaaw ") LCD_STR_E;
  LSTR MSG_VMAX_EN                        = _UxGT("Gën gaaw *");
  LSTR MSG_VMIN                           = _UxGT("Gëna yeex");
  LSTR MSG_VTRAV_MIN                      = _UxGT("Daw gi gëna yeex");
  LSTR MSG_ACCELERATION                   = _UxGT("Xiir");
  LSTR MSG_AMAX_A                         = _UxGT("Xiir gi ëp ") LCD_STR_A;
  LSTR MSG_AMAX_B                         = _UxGT("Xiir gi ëp ") LCD_STR_B;
  LSTR MSG_AMAX_C                         = _UxGT("Xiir gi ëp ") LCD_STR_C;
  LSTR MSG_AMAX_I                         = _UxGT("Xiir gi ëp ") LCD_STR_I;
  LSTR MSG_AMAX_J                         = _UxGT("Xiir gi ëp ") LCD_STR_J;
  LSTR MSG_AMAX_K                         = _UxGT("Xiir gi ëp ") LCD_STR_K;
  LSTR MSG_AMAX_E                         = _UxGT("Xiir gi ëp ") LCD_STR_E;
  LSTR MSG_AMAX_EN                        = _UxGT("Xiir gi ëp *");
  LSTR MSG_A_RETRACT                      = _UxGT("Xiiru deltu ginnaaw");
  LSTR MSG_A_TRAVEL                       = _UxGT("Xiiral daw");
  LSTR MSG_XY_FREQUENCY_LIMIT             = _UxGT("Gën gaa bar");
  LSTR MSG_XY_FREQUENCY_FEEDRATE          = _UxGT("Gën gaa yeex");
  LSTR MSG_STEPS_PER_MM                   = _UxGT("Jéego/mm");
  LSTR MSG_A_STEPS                        = LCD_STR_A _UxGT(" jéego/mm");
  LSTR MSG_B_STEPS                        = LCD_STR_B _UxGT(" jéego/mm");
  LSTR MSG_C_STEPS                        = LCD_STR_C _UxGT(" jéego/mm");
  LSTR MSG_I_STEPS                        = LCD_STR_I _UxGT(" jéego/mm");
  LSTR MSG_J_STEPS                        = LCD_STR_J _UxGT(" jéego/mm");
  LSTR MSG_K_STEPS                        = LCD_STR_K _UxGT(" jéego/mm");
  LSTR MSG_E_STEPS                        = _UxGT("E jéego/mm");
  LSTR MSG_EN_STEPS                       = _UxGT("* jéego/mm");
  LSTR MSG_TEMPERATURE                    = _UxGT("Tanggoor");
  LSTR MSG_MOTION                         = _UxGT("Dox");
  LSTR MSG_FILAMENT                       = _UxGT("Buum");
  LSTR MSG_VOLUMETRIC_ENABLED             = _UxGT("E ci mm") SUPERSCRIPT_THREE;
  LSTR MSG_VOLUMETRIC_LIMIT               = _UxGT("Cëslaay ci mm") SUPERSCRIPT_THREE;
  LSTR MSG_VOLUMETRIC_LIMIT_E             = _UxGT("Cëslaay *");
  LSTR MSG_FILAMENT_DIAM                  = _UxGT("Dijjaayu buum");
  LSTR MSG_FILAMENT_DIAM_E                = _UxGT("Dijjaayu buum *");
  LSTR MSG_FILAMENT_UNLOAD                = _UxGT("Rocci mm");
  LSTR MSG_FILAMENT_LOAD                  = _UxGT("Roof mm");
  LSTR MSG_ADVANCE_K                      = _UxGT("Jëmal kanam K");
  LSTR MSG_ADVANCE_K_E                    = _UxGT("Jëmal kanam K *");
  LSTR MSG_CONTRAST                       = _UxGT("Lëndëmaayu LCD");
  LSTR MSG_BRIGHTNESS                     = _UxGT("Leeraayu LCD");
  LSTR MSG_STORE_EEPROM                   = _UxGT("Denc tëralin");
  LSTR MSG_LOAD_EEPROM                    = _UxGT("Yeb tëralin");
  LSTR MSG_RESTORE_DEFAULTS               = _UxGT("Tëgaat bu bées");
  LSTR MSG_INIT_EEPROM                    = _UxGT("Tëgaat EEPROM bi");
  LSTR MSG_ERR_EEPROM_CRC                 = _UxGT("Jnumte EEPROM CRC");
  LSTR MSG_ERR_EEPROM_INDEX               = _UxGT("Njumte alluwa EEPROM");
  LSTR MSG_ERR_EEPROM_VERSION             = _UxGT("Njumte xétu EEPROM");
  LSTR MSG_SETTINGS_STORED                = _UxGT("Denc na ñu tëralin yi");
  LSTR MSG_MEDIA_UPDATE                   = _UxGT("Yeesal losisel SD");
  LSTR MSG_RESET_PRINTER                  = _UxGT("Yeesal móolukaay");
  LSTR MSG_REFRESH                        = LCD_STR_REFRESH  _UxGT("Yeesal");
  LSTR MSG_INFO_SCREEN                    = _UxGT("Xëtu wottu");
  LSTR MSG_PREPARE                        = _UxGT("Waajal");
  LSTR MSG_TUNE                           = _UxGT("Jagal");
  LSTR MSG_POWER_MONITOR                  = _UxGT("Wottukaayu kattan");
  LSTR MSG_CURRENT                        = _UxGT("Mbëj");
  LSTR MSG_VOLTAGE                        = _UxGT("Doole");
  LSTR MSG_POWER                          = _UxGT("Kattan");
  LSTR MSG_START_PRINT                    = _UxGT("Tambali móol");
  LSTR MSG_BUTTON_NEXT                    = _UxGT("Bi ci topp");
  LSTR MSG_BUTTON_INIT                    = _UxGT("Doortal");
  LSTR MSG_BUTTON_STOP                    = _UxGT("Bayyi");
  LSTR MSG_BUTTON_PRINT                   = _UxGT("Móol");
  LSTR MSG_BUTTON_RESET                   = _UxGT("Doortal");
  LSTR MSG_BUTTON_IGNORE                  = _UxGT("Tanxamlu");
  LSTR MSG_BUTTON_CANCEL                  = _UxGT("Bayyi");
  LSTR MSG_BUTTON_DONE                    = _UxGT("Noppi na");
  LSTR MSG_BUTTON_BACK                    = _UxGT("Dellu");
  LSTR MSG_BUTTON_PROCEED                 = _UxGT("Yeggali");
  LSTR MSG_BUTTON_SKIP                    = _UxGT("Jall");
  LSTR MSG_PAUSING                        = _UxGT("Xaarandi...");
  LSTR MSG_PAUSE_PRINT                    = _UxGT("Xaarandi móol");
  LSTR MSG_RESUME_PRINT                   = _UxGT("Yeggali móol");
  LSTR MSG_HOST_START_PRINT               = _UxGT("Tambali móol"bu sori);
  LSTR MSG_STOP_PRINT                     = _UxGT("Bayyi móol");
  LSTR MSG_END_LOOPS                      = _UxGT("Jeexitu wëndéelu yi");
  LSTR MSG_PRINTING_OBJECT                = _UxGT("Móol këf");
  LSTR MSG_CANCEL_OBJECT                  = _UxGT("Bayyi këf");
  LSTR MSG_CANCEL_OBJECT_N                = _UxGT("Bayyi këf =");
  LSTR MSG_OUTAGE_RECOVERY                = _UxGT("Yeggali móol");
  LSTR MSG_MEDIA_MENU                     = _UxGT("Móol li ci SD bi");
  LSTR MSG_NO_MEDIA                       = _UxGT("Amoul SD");
  LSTR MSG_DWELL                          = _UxGT("Nopalu...");
  LSTR MSG_USERWAIT                       = _UxGT("Xaar kiy jariñoo");
  LSTR MSG_PRINT_PAUSED                   = _UxGT("Móol baa ngi xaarandi");
  LSTR MSG_PRINTING                       = _UxGT("Móol");
  LSTR MSG_PRINT_ABORTED                  = _UxGT("Bayyi na ñu móol bi");
  LSTR MSG_PRINT_DONE                     = _UxGT("Pare na móol);
  LSTR MSG_NO_MOVE                        = _UxGT("Jumtukaayu yi da ñoo taxaw");
  LSTR MSG_KILLED                         = _UxGT("Bayyi");
  LSTR MSG_STOPPED                        = _UxGT("Taxawal");
  LSTR MSG_CONTROL_RETRACT                = _UxGT("Dellu ginnaaw mm");
  LSTR MSG_CONTROL_RETRACT_SWAP           = _UxGT("Dellu ginnaaw mm doxul");
  LSTR MSG_CONTROL_RETRACTF               = _UxGT("Gaawaayu dellu ginnaaw");
  LSTR MSG_CONTROL_RETRACT_ZHOP           = _UxGT("Tëb Z mm");
  LSTR MSG_CONTROL_RETRACT_RECOVER        = _UxGT("Dellu ginnaaw yeggali mm");
  LSTR MSG_CONTROL_RETRACT_RECOVER_SWAP   = _UxGT("Yeggali mm doxul");
  LSTR MSG_CONTROL_RETRACT_RECOVERF       = _UxGT("Gaawaay dellu ginnaaw yeggali");
  LSTR MSG_CONTROL_RETRACT_RECOVER_SWAPF  = _UxGT("Gaawaay laju Dellu ginnaaw yeggali");
  LSTR MSG_AUTORETRACT                    = _UxGT("Dellul boppam ginnaaw");
  LSTR MSG_FILAMENT_SWAP_LENGTH           = _UxGT("Guddaayu coppite");
  LSTR MSG_FILAMENT_SWAP_EXTRA            = _UxGT("Yok coppite");
  LSTR MSG_FILAMENT_PURGE_LENGTH          = _UxGT("Guddayu tuur");
  LSTR MSG_TOOL_CHANGE                    = _UxGT("Soppi jumtukaay");
  LSTR MSG_TOOL_CHANGE_ZLIFT              = _UxGT("Dolli Z");
  LSTR MSG_SINGLENOZZLE_PRIME_SPEED       = _UxGT("Xiir gu jiitu");
  LSTR MSG_SINGLENOZZLE_RETRACT_SPEED     = _UxGT("Xiiru dellu ginnaaw");
  LSTR MSG_FILAMENT_PARK_ENABLED          = _UxGT("Taxawal buuxukaay");
  LSTR MSG_SINGLENOZZLE_UNRETRACT_SPEED   = _UxGT("Xiiru yeggali");
  LSTR MSG_SINGLENOZZLE_FAN_SPEED         = _UxGT("Xiiru ëpukaay");
  LSTR MSG_SINGLENOZZLE_FAN_TIME          = _UxGT("tanggooru ëpukaay");
  LSTR MSG_TOOL_MIGRATION_ON              = _UxGT("Taal boppam");
  LSTR MSG_TOOL_MIGRATION_OFF             = _UxGT("Fey boppam");
  LSTR MSG_TOOL_MIGRATION                 = _UxGT("Toxalu yeesalu jumtukaay");
  LSTR MSG_TOOL_MIGRATION_AUTO            = _UxGT("Toxalu yeesalu boppam");
  LSTR MSG_TOOL_MIGRATION_END             = _UxGT("Buuxukaay bu mujj");
  LSTR MSG_TOOL_MIGRATION_SWAP            = _UxGT("Toxalu yeesal ca *");
  LSTR MSG_FILAMENTCHANGE                 = _UxGT("Soppi buum");
  LSTR MSG_FILAMENTCHANGE_E               = _UxGT("Soppi buum *");
  LSTR MSG_FILAMENTLOAD                   = _UxGT("Roof buum");
  LSTR MSG_FILAMENTLOAD_E                 = _UxGT("Roof buum *");
  LSTR MSG_FILAMENTUNLOAD                 = _UxGT("Rocci buum");
  LSTR MSG_FILAMENTUNLOAD_E               = _UxGT("Rocci buum *");
  LSTR MSG_FILAMENTUNLOAD_ALL             = _UxGT("Rocci lepp");
  LSTR MSG_ATTACH_MEDIA                   = _UxGT("Dugal SD bi");
  LSTR MSG_CHANGE_MEDIA                   = _UxGT("Yeesal SD bi");
  LSTR MSG_RELEASE_MEDIA                  = _UxGT("Génnee SD bi");
  LSTR MSG_ZPROBE_OUT                     = _UxGT("Nattukaay Z bi dafa génn lal bi");
  LSTR MSG_SKEW_FACTOR                    = _UxGT("Xayma diggante bi");
  LSTR MSG_BLTOUCH                        = _UxGT("BLTouch");
  LSTR MSG_BLTOUCH_SELFTEST               = _UxGT("Woolu boppam");
  LSTR MSG_BLTOUCH_RESET                  = _UxGT("Doortal");
  LSTR MSG_BLTOUCH_STOW                   = _UxGT("Delloo");
  LSTR MSG_BLTOUCH_DEPLOY                 = _UxGT("Génnee");
  LSTR MSG_BLTOUCH_SW_MODE                = _UxGT("Anamu SW");
  LSTR MSG_BLTOUCH_5V_MODE                = _UxGT("Anamu 5V");
  LSTR MSG_BLTOUCH_OD_MODE                = _UxGT("Anamu OD");
  LSTR MSG_BLTOUCH_MODE_STORE             = _UxGT("Jëfe anam");
  LSTR MSG_BLTOUCH_MODE_STORE_5V          = _UxGT("Yobbu 5V");
  LSTR MSG_BLTOUCH_MODE_STORE_OD          = _UxGT("Yobbu OD");
  LSTR MSG_BLTOUCH_MODE_ECHO              = _UxGT("Jëfe anam");
  LSTR MSG_BLTOUCH_MODE_CHANGE            = _UxGT("ARTU: Tëralin yu baaxul mën na yad ! Da nga yeggali?");
  LSTR MSG_TOUCHMI_PROBE                  = _UxGT("TouchMI");
  LSTR MSG_TOUCHMI_INIT                   = _UxGT("Doortal TouchMI");
  LSTR MSG_TOUCHMI_ZTEST                  = _UxGT("Jeem randalu Z");
  LSTR MSG_TOUCHMI_SAVE                   = _UxGT("Dencub fagaru");
  LSTR MSG_MANUAL_DEPLOY_TOUCHMI          = _UxGT("Génnee TouchMI");
  LSTR MSG_MANUAL_DEPLOY                  = _UxGT("Génnee natukaayu Z");
  LSTR MSG_MANUAL_STOW                    = _UxGT("Delloo natukaayu Z");
  LSTR MSG_HOME_FIRST                     = _UxGT("Kër %s%s%s jiitu");
  LSTR MSG_ZPROBE_SETTINGS                = _UxGT("Tëralinou natt gi");
  LSTR MSG_ZPROBE_OFFSETS                 = _UxGT("Barabu natukaayu Z");
  LSTR MSG_ZPROBE_XOFFSET                 = _UxGT("Randal X");
  LSTR MSG_ZPROBE_YOFFSET                 = _UxGT("Randal Y");
  LSTR MSG_ZPROBE_ZOFFSET                 = _UxGT("Randal Z");
  LSTR MSG_MOVE_NOZZLE_TO_BED             = _UxGT("Yobu nattukaay bi si lal bi");
  LSTR MSG_BABYSTEP_X                     = _UxGT("Jéego bu ndaw X");
  LSTR MSG_BABYSTEP_Y                     = _UxGT("Jéego bu ndaw  Y");
  LSTR MSG_BABYSTEP_Z                     = _UxGT("Jéego bu ndaw  Z");
  LSTR MSG_BABYSTEP_I                     = _UxGT("Jéego bu ndaw  ") LCD_STR_I;
  LSTR MSG_BABYSTEP_J                     = _UxGT("Jéego bu ndaw  ") LCD_STR_J;
  LSTR MSG_BABYSTEP_K                     = _UxGT("Jéego bu ndaw  ") LCD_STR_K;
  LSTR MSG_BABYSTEP_TOTAL                 = _UxGT("Yëpp");
  LSTR MSG_ENDSTOP_ABORT                  = _UxGT("Bayyi taxawal");
  LSTR MSG_HEATING_FAILED_LCD             = _UxGT("Njumte tangal");
  LSTR MSG_ERR_REDUNDANT_TEMP             = _UxGT("Njumte tanggoor guy wëndelu");
  LSTR MSG_THERMAL_RUNAWAY                = _UxGT("Njumte tanggoor");
  LSTR MSG_THERMAL_RUNAWAY_BED            = _UxGT("TANGGAAYU LAL BI EPP NA");
  LSTR MSG_THERMAL_RUNAWAY_CHAMBER        = _UxGT("TANGGAAYU NEEK BI EPP NA");
  LSTR MSG_THERMAL_RUNAWAY_COOLER         = _UxGT("Serral bi ëpp na");
  LSTR MSG_COOLING_FAILED                 = _UxGT("Serralukaay bi doxul");
  LSTR MSG_ERR_MAXTEMP                    = _UxGT("Njumte tanggoor bi ëpp");
  LSTR MSG_ERR_MINTEMP                    = _UxGT("Njumte tanggoor bi yés");
  LSTR MSG_HALTED                         = _UxGT("Móol gi taxaw na");
  LSTR MSG_PLEASE_RESET                   = _UxGT("Yeesalaatal ngi Yalla");
  LSTR MSG_HEATING                        = _UxGT("Tangal");
  LSTR MSG_COOLING                        = _UxGT("Seddal");
  LSTR MSG_BED_HEATING                    = _UxGT("Lal baa ngi tang...");
  LSTR MSG_BED_COOLING                    = _UxGT("Seralu lal bi...");
  LSTR MSG_PROBE_HEATING                  = _UxGT("Lambukaay baa ni tang...");
  LSTR MSG_PROBE_COOLING                  = _UxGT("Seralu lambukaay bi...");
  LSTR MSG_CHAMBER_HEATING                = _UxGT("Tangalu boyet bi...");
  LSTR MSG_CHAMBER_COOLING                = _UxGT("Seralu boyet bi...");
  LSTR MSG_LASER_COOLING                  = _UxGT("Laser Cooling...");
  LSTR MSG_DELTA_CALIBRATE                = _UxGT("Jubal Delta");
  LSTR MSG_DELTA_CALIBRATE_X              = _UxGT("Jubal X");
  LSTR MSG_DELTA_CALIBRATE_Y              = _UxGT("Jubal Y");
  LSTR MSG_DELTA_CALIBRATE_Z              = _UxGT("Jubal Z");
  LSTR MSG_DELTA_CALIBRATE_CENTER         = _UxGT("Jubal digg bi");
  LSTR MSG_DELTA_SETTINGS                 = _UxGT("Jagal Delta");
  LSTR MSG_DELTA_AUTO_CALIBRATE           = _UxGT("Jubal boppam");
  LSTR MSG_DELTA_HEIGHT_CALIBRATE         = _UxGT("Kawewaay Delta");
  LSTR MSG_DELTA_Z_OFFSET_CALIBRATE       = _UxGT("Delta Z natukaay");
  LSTR MSG_DELTA_DIAG_ROD                 = _UxGT("Diagonale");
  LSTR MSG_DELTA_HEIGHT                   = _UxGT("Kawewaay");
  LSTR MSG_DELTA_RADIUS                   = _UxGT("Rayon");
  LSTR MSG_INFO_MENU                      = _UxGT("Xibaari móolukaay bi");
  LSTR MSG_INFO_PRINTER_MENU              = _UxGT("Xibaari móolukaay bi");
  LSTR MSG_3POINT_LEVELING                = _UxGT("Këru 3 tomb");
  LSTR MSG_LINEAR_LEVELING                = _UxGT("Kër gu talli");
  LSTR MSG_BILINEAR_LEVELING              = _UxGT("Kër gu talli ñaari wet");
  LSTR MSG_UBL_LEVELING                   = _UxGT("Lal bi jub na");
  LSTR MSG_MESH_LEVELING                  = _UxGT("Këru rabb");
  LSTR MSG_MESH_DONE                      = _UxGT("Kër gi pare na");
  LSTR MSG_INFO_STATS_MENU                = _UxGT("Ay wànni móolukaay bi");
  LSTR MSG_INFO_BOARD_MENU                = _UxGT("Xibaari kart bi");
  LSTR MSG_INFO_THERMISTOR_MENU           = _UxGT("Natukaayi tanggoor");
  LSTR MSG_INFO_EXTRUDERS                 = _UxGT("Buuxukaay yi");
  LSTR MSG_INFO_BAUDRATE                  = _UxGT("Bauds");
  LSTR MSG_INFO_PROTOCOL                  = _UxGT("Mànkoo");
  LSTR MSG_INFO_RUNAWAY_OFF               = _UxGT("Aarukaay bi takul");
  LSTR MSG_INFO_RUNAWAY_ON                = _UxGT("Aarukaay bi tak na");
  LSTR MSG_HOTEND_IDLE_TIMEOUT            = _UxGT("Toggukaay bi takul");

  LSTR MSG_CASE_LIGHT                     = _UxGT("Leeru boyet");
  LSTR MSG_CASE_LIGHT_BRIGHTNESS          = _UxGT("Leeraay");
  LSTR MSG_KILL_EXPECTED_PRINTER          = _UxGT("Móolukaay bi baaxul");

  #if LCD_WIDTH >= 20
    LSTR MSG_INFO_PRINT_COUNT             = _UxGT("Limu móol");
    LSTR MSG_INFO_COMPLETED_PRINTS        = _UxGT("Yi pare");
    LSTR MSG_INFO_PRINT_TIME              = _UxGT("Diiru móol yëpp");
    LSTR MSG_INFO_PRINT_LONGEST           = _UxGT("Móol bi ëpp");
    LSTR MSG_INFO_PRINT_FILAMENT          = _UxGT("Guddaayu buum yëpp");
  #else
    LSTR MSG_INFO_PRINT_COUNT             = _UxGT("Móol yi");
    LSTR MSG_INFO_COMPLETED_PRINTS        = _UxGT("Yi pare");
    LSTR MSG_INFO_PRINT_TIME              = _UxGT("Lepp");
    LSTR MSG_INFO_PRINT_LONGEST           = _UxGT("gëna gudd");
    LSTR MSG_INFO_PRINT_FILAMENT          = _UxGT("Buum");
  #endif

  LSTR MSG_INFO_MIN_TEMP                  = _UxGT("Tanggoor wi yés");
  LSTR MSG_INFO_MAX_TEMP                  = _UxGT("Tanggoor wi ëpp");
  LSTR MSG_INFO_PSU                       = _UxGT("Mbëj");
  LSTR MSG_DRIVE_STRENGTH                 = _UxGT("Kattanu jumtukaay ");
  LSTR MSG_DAC_PERCENT_A                  = _UxGT("Gindikaay ") LCD_STR_A _UxGT(" %");
  LSTR MSG_DAC_PERCENT_B                  = _UxGT("Gindikaay ") LCD_STR_B _UxGT(" %");
  LSTR MSG_DAC_PERCENT_C                  = _UxGT("Gindikaay ") LCD_STR_C _UxGT(" %");
  LSTR MSG_DAC_PERCENT_I                  = _UxGT("Gindikaay ") LCD_STR_I _UxGT(" %");
  LSTR MSG_DAC_PERCENT_J                  = _UxGT("Gindikaay ") LCD_STR_J _UxGT(" %");
  LSTR MSG_DAC_PERCENT_K                  = _UxGT("Gindikaay ") LCD_STR_K _UxGT(" %");
  LSTR MSG_DAC_PERCENT_E                  = _UxGT("Gindikaay E %");
  LSTR MSG_ERROR_TMC                      = _UxGT("Njumte jokkoo TMC");
  LSTR MSG_DAC_EEPROM_WRITE               = _UxGT("Denc na DAC EEPROM");
  LSTR MSG_FILAMENT_CHANGE_HEADER         = _UxGT("SOPPI BUUM");
  LSTR MSG_FILAMENT_CHANGE_HEADER_PAUSE   = _UxGT("MOOL GI DAFA TAXAWANDI");
  LSTR MSG_FILAMENT_CHANGE_HEADER_LOAD    = _UxGT("ROOF BUUM");
  LSTR MSG_FILAMENT_CHANGE_HEADER_UNLOAD  = _UxGT("ROCCI BUUM");
  LSTR MSG_FILAMENT_CHANGE_OPTION_HEADER  = _UxGT("TANNEEFI YEGGALI:");
  LSTR MSG_FILAMENT_CHANGE_OPTION_PURGE   = _UxGT("Tuuraat");
  LSTR MSG_FILAMENT_CHANGE_OPTION_RESUME  = _UxGT("Yeggali móol");
  LSTR MSG_FILAMENT_CHANGE_NOZZLE         = _UxGT("  xélikaay: ");
  LSTR MSG_RUNOUT_SENSOR                  = _UxGT("Laambukaayu buum");
  LSTR MSG_RUNOUT_DISTANCE_MM             = _UxGT("Runout Dist mm");
  LSTR MSG_RUNOUT_ENABLE                  = _UxGT("Enable Runout");
  LSTR MSG_KILL_HOMING_FAILED             = _UxGT("Kër gi baaxul");
  LSTR MSG_LCD_PROBING_FAILED             = _UxGT("Nattukaay bi doxul");

  LSTR MSG_MMU2_CHOOSE_FILAMENT_HEADER    = _UxGT("TANN BUUM");
  LSTR MSG_MMU2_MENU                      = _UxGT("MMU");
  LSTR MSG_KILL_MMU2_FIRMWARE             = _UxGT("Yeesal losisel MMU!!");
  LSTR MSG_MMU2_NOT_RESPONDING            = _UxGT("MMU bi tontootul");
  LSTR MSG_MMU2_RESUME                    = _UxGT("Yeggali móol MMU");
  LSTR MSG_MMU2_RESUMING                  = _UxGT("Yeggali MMU...");
  LSTR MSG_MMU2_LOAD_FILAMENT             = _UxGT("Yeb ci MMU");
  LSTR MSG_MMU2_LOAD_ALL                  = _UxGT("Yeb lepp ci MMU");
  LSTR MSG_MMU2_LOAD_TO_NOZZLE            = _UxGT("Yeb ci xélikaay bi");
  LSTR MSG_MMU2_EJECT_FILAMENT            = _UxGT("Rocci buum bi ci MMU");
  LSTR MSG_MMU2_EJECT_FILAMENT_N          = _UxGT("Rocci buum ~");
  LSTR MSG_MMU2_UNLOAD_FILAMENT           = _UxGT("Rocci buum");
  LSTR MSG_MMU2_LOADING_FILAMENT          = _UxGT("Roof buum %i...");
  LSTR MSG_MMU2_EJECTING_FILAMENT         = _UxGT("Rocci buum...");
  LSTR MSG_MMU2_UNLOADING_FILAMENT        = _UxGT("Rocci buum....");
  LSTR MSG_MMU2_ALL                       = _UxGT("Yëpp");
  LSTR MSG_MMU2_FILAMENT_N                = _UxGT("Buum ~");
  LSTR MSG_MMU2_RESET                     = _UxGT("Doortal MMU");
  LSTR MSG_MMU2_RESETTING                 = _UxGT("Dolli MMU...");
  LSTR MSG_MMU2_EJECT_RECOVER             = _UxGT("Rocci, cuq");

  LSTR MSG_MIX                            = _UxGT("Mix");
  LSTR MSG_MIX_COMPONENT_N                = _UxGT("Yokk =");
  LSTR MSG_MIXER                          = _UxGT("Jambukaay");
  LSTR MSG_GRADIENT                       = _UxGT("Sopeeku wëyale");
  LSTR MSG_FULL_GRADIENT                  = _UxGT("Sopeeku wëyale bu mat");
  LSTR MSG_TOGGLE_MIX                     = _UxGT("Toggle mix");
  LSTR MSG_CYCLE_MIX                      = _UxGT("Wëlbati jaxase");
  LSTR MSG_GRADIENT_MIX                   = _UxGT("Jamb wëyale");
  LSTR MSG_REVERSE_GRADIENT               = _UxGT("Wëlbati wëyale");
  LSTR MSG_ACTIVE_VTOOL                   = _UxGT("Taal jumtukaay-V");
  LSTR MSG_START_VTOOL                    = _UxGT("Tambali jumtukaay-V");
  LSTR MSG_END_VTOOL                      = _UxGT(" Jeexitu jumtukaay-V");
  LSTR MSG_GRADIENT_ALIAS                 = _UxGT("Dàkkantal jumtukaay-V");
  LSTR MSG_RESET_VTOOLS                   = _UxGT("Doortal jumtukaayi-V");
  LSTR MSG_COMMIT_VTOOL                   = _UxGT("Nangu jambu jumtukaay-V");
  LSTR MSG_VTOOLS_RESET                   = _UxGT("Doortal jumtukaayi-V baax na");
  LSTR MSG_START_Z                        = _UxGT("Tambali Z:");
  LSTR MSG_END_Z                          = _UxGT("  Jeexitu Z:");

  LSTR MSG_GAMES                          = _UxGT("Po");
  LSTR MSG_BRICKOUT                       = _UxGT("Toj xeer");
  LSTR MSG_INVADERS                       = _UxGT("Doxandeem");
  LSTR MSG_SNAKE                          = _UxGT("Sn4k3");
  LSTR MSG_MAZE                           = _UxGT("Yoon yu lëj");

  LSTR MSG_BAD_PAGE                       = _UxGT("Njumte alluwa xët");
  LSTR MSG_BAD_PAGE_SPEED                 = _UxGT("Njumte xiiru xët");

  LSTR MSG_EDIT_PASSWORD                  = _UxGT("Duggal caabi");
  LSTR MSG_LOGIN_REQUIRED                 = _UxGT("Dafa laaj nga lëkkaloo");
  LSTR MSG_PASSWORD_SETTINGS              = _UxGT("Tëralinu caabi);
  LSTR MSG_ENTER_DIGIT                    = _UxGT("Duggalal araf yi");
  LSTR MSG_CHANGE_PASSWORD                = _UxGT("Tëral/bind caabi");
  LSTR MSG_REMOVE_PASSWORD                = _UxGT("Dindi caabi");
  LSTR MSG_PASSWORD_SET                   = _UxGT("Caabi bi mooy ");
  LSTR MSG_START_OVER                     = _UxGT("Tambaliaat");
  LSTR MSG_REMINDER_SAVE_SETTINGS         = _UxGT("Bul fatte denc!");
  LSTR MSG_PASSWORD_REMOVED               = _UxGT("Caabi bi dindéeku na");

  //
  // Filament Change screens show up to 3 lines on a 4-line display
  //                        ...or up to 2 lines on a 3-line display

  #if LCD_HEIGHT >= 4
    // Up to 3 lines allowed
    LSTR MSG_ADVANCED_PAUSE_WAITING       = _UxGT(MSG_2_LINE("Bësal butoñ bi", "ngir yeggali"));
    LSTR MSG_PAUSE_PRINT_PARKING          = _UxGT(MSG_1_LINE("Dellu..."));
    LSTR MSG_FILAMENT_CHANGE_INIT         = _UxGT(MSG_2_LINE("Xaaral buum", "ngi yeggali"));
    LSTR MSG_FILAMENT_CHANGE_INSERT       = _UxGT(MSG_3_LINE("Roofal buum", "nga bës butoñ bi", "ngi yeggali..."));
    LSTR MSG_FILAMENT_CHANGE_HEAT         = _UxGT(MSG_2_LINE("Bësal butoñ bi", "ngir tangal..."));
    LSTR MSG_FILAMENT_CHANGE_HEATING      = _UxGT(MSG_2_LINE("Xélikaay baa ngi tang", "Xaaral..."));
    LSTR MSG_FILAMENT_CHANGE_UNLOAD       = _UxGT(MSG_2_LINE("Xaar", "rocci buumm"));
    LSTR MSG_FILAMENT_CHANGE_LOAD         = _UxGT(MSG_2_LINE("Xaar", "roof buum"));
    LSTR MSG_FILAMENT_CHANGE_PURGE        = _UxGT(MSG_2_LINE("Xaar", "fomp buum"));
    LSTR MSG_FILAMENT_CHANGE_CONT_PURGE   = _UxGT(MSG_2_LINE("Bësal ngir yeggali", "fompu buum gi"));
    LSTR MSG_FILAMENT_CHANGE_RESUME       = _UxGT(MSG_2_LINE("Xaar dooraat", "móol"));
  #else // LCD_HEIGHT < 4
    // Up to 2 lines allowed
    LSTR MSG_ADVANCED_PAUSE_WAITING       = _UxGT(MSG_1_LINE("Cuqal ngir tambali"));
    LSTR MSG_PAUSE_PRINT_PARKING          = _UxGT(MSG_1_LINE("Fatu..."));
    LSTR MSG_FILAMENT_CHANGE_INIT         = _UxGT(MSG_1_LINE("Xaaral..."));
    LSTR MSG_FILAMENT_CHANGE_INSERT       = _UxGT(MSG_1_LINE("Roof buum"));
    LSTR MSG_FILAMENT_CHANGE_HEAT         = _UxGT(MSG_1_LINE("Tangal ?"));
    LSTR MSG_FILAMENT_CHANGE_HEATING      = _UxGT(MSG_1_LINE("Xélikaay baa ngi tang..."));
    LSTR MSG_FILAMENT_CHANGE_UNLOAD       = _UxGT(MSG_1_LINE("Rocci buum..."));
    LSTR MSG_FILAMENT_CHANGE_LOAD         = _UxGT(MSG_1_LINE("Yeb..."));
    LSTR MSG_FILAMENT_CHANGE_PURGE        = _UxGT(MSG_1_LINE("Tuur..."));
    LSTR MSG_FILAMENT_CHANGE_CONT_PURGE   = _UxGT(MSG_1_LINE("Jeexal ?"));
    LSTR MSG_FILAMENT_CHANGE_RESUME       = _UxGT(MSG_1_LINE("Tambaliaat..."));
  #endif // LCD_HEIGHT < 4

  LSTR MSG_TMC_DRIVERS                    = _UxGT("Gindikaayu TMC");
  LSTR MSG_TMC_CURRENT                    = _UxGT("Mbëju gindikaay");
  LSTR MSG_TMC_HYBRID_THRS                = _UxGT("Yemuwaay bu jaxasoo");   //Seuil hybride
  LSTR MSG_TMC_HOMING_THRS                = _UxGT("Kër gu anduk ak natukaay");
  LSTR MSG_TMC_STEPPING_MODE              = _UxGT("Anam ndànk-ndànk");
  LSTR MSG_TMC_STEALTH_ENABLED            = _UxGT("StealthChop bi taak na");
  LSTR MSG_SERVICE_RESET                  = _UxGT("Doortal");
  LSTR MSG_SERVICE_IN                     = _UxGT("  ci:");
  LSTR MSG_BACKLASH                       = _UxGT("Backlash");
  LSTR MSG_BACKLASH_CORRECTION            = _UxGT("Gàgganti");
  LSTR MSG_BACKLASH_SMOOTHING             = _UxGT("Ritaxal");

  LSTR MSG_LEVEL_X_AXIS                   = _UxGT("Këru ngalan X");
  LSTR MSG_AUTO_CALIBRATE                 = _UxGT("Natt boppam");
  #if ENABLED(TOUCH_UI_FTDI_EVE)
    LSTR MSG_HEATER_TIMEOUT               = _UxGT("Danc ko aar, tanggoor gu suufe. Ok ngir tangalaat te yeggali.");
  #else
    LSTR MSG_HEATER_TIMEOUT               = _UxGT("Danc ko aar");
  #endif
  LSTR MSG_REHEAT                         = _UxGT("Tangal");
  LSTR MSG_REHEATING                      = _UxGT("Tangalaat...");
  LSTR MSG_REHEATDONE                     = _UxGT("Tangalaati bi pare na");

  LSTR MSG_PROBE_WIZARD                   = _UxGT("Jappalekaay natukaayu Z");
  LSTR MSG_PROBE_WIZARD_PROBING           = _UxGT("Natt féetewaayu");
  LSTR MSG_PROBE_WIZARD_MOVING            = _UxGT("Randal ci barab");

  LSTR MSG_SOUND                          = _UxGT("Ay baat");

  LSTR MSG_TOP_LEFT                       = _UxGT("Ruqu kaw cammooñ");
  LSTR MSG_BOTTOM_LEFT                    = _UxGT("Ruqu suuf cammooñ");
  LSTR MSG_TOP_RIGHT                      = _UxGT("Ruqu kaw ndayjoor");
  LSTR MSG_BOTTOM_RIGHT                   = _UxGT("Ruqu suuf ndayjoor");
  LSTR MSG_CALIBRATION_COMPLETED          = _UxGT("Jagal gi jeex na");
  LSTR MSG_CALIBRATION_FAILED             = _UxGT("Jagal gi baaxul");

  LSTR MSG_DRIVER_BACKWARD                = _UxGT(" driver backward");

  LSTR MSG_SD_CARD                        = _UxGT("Kart SD");
  LSTR MSG_USB_DISK                       = _UxGT("Kale USB");

  // These strings can be the same in all languages
  LSTR MSG_MARLIN                         = _UxGT("Marlin");
  LSTR MSG_SHORT_DAY                      = _UxGT("b"); // One character only
  LSTR MSG_SHORT_HOUR                     = _UxGT("w"); // One character only
  LSTR MSG_SHORT_MINUTE                   = _UxGT("m"); // One character only
  LSTR MSG_PID_P                          = _UxGT("PID-P");
  LSTR MSG_PID_P_E                        = _UxGT("PID-P *");
  LSTR MSG_PID_I                          = _UxGT("PID-I");
  LSTR MSG_PID_I_E                        = _UxGT("PID-I *");
  LSTR MSG_PID_D                          = _UxGT("PID-D");
  LSTR MSG_PID_D_E                        = _UxGT("PID-D *");
  LSTR MSG_PID_C                          = _UxGT("PID-C");
  LSTR MSG_PID_C_E                        = _UxGT("PID-C *");
  LSTR MSG_PID_F                          = _UxGT("PID-F");
  LSTR MSG_PID_F_E                        = _UxGT("PID-F *");
  LSTR MSG_BACKLASH_A                     = LCD_STR_A;
  LSTR MSG_BACKLASH_B                     = LCD_STR_B;
  LSTR MSG_BACKLASH_C                     = LCD_STR_C;
  LSTR MSG_BACKLASH_I                     = LCD_STR_I;
  LSTR MSG_BACKLASH_J                     = LCD_STR_J;
  LSTR MSG_BACKLASH_K                     = LCD_STR_K;

  LSTR MSG_FILAMENT_SWAP_LENGTH           = _UxGT("Guddaayu dellu ginnaaw");
  LSTR MSG_FILAMENT_SWAP_EXTRA            = _UxGT("Dolli guddaay");
  LSTR MSG_FILAMENT_PURGE_LENGTH          = _UxGT("Guddaayu tuur");
  LSTR MSG_NOZZLE_STANDBY                 = _UxGT("Xaar xélikaay");

  LSTR MSG_SHORT_DAY                      = _UxGT("j"); // One character only
  LSTR MSG_SHORT_HOUR                     = _UxGT("h"); // One character only
  LSTR MSG_SHORT_MINUTE                   = _UxGT("m"); // One character only

}
