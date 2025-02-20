/***************************************************************************//**
 * @file
 * @brief EFM32TG11B_DEVINFO register and bit field definitions
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#if defined(__ICCARM__)
#pragma system_include       /* Treat file as system include file. */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang system_header  /* Treat file as system include file. */
#endif

/***************************************************************************//**
 * @addtogroup Parts
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @defgroup EFM32TG11B_DEVINFO Device Information and Calibration
 * @{
 ******************************************************************************/

/** DEVINFO Register Declaration */
typedef struct {
  __IM uint32_t CAL;              /**< CRC of DI-page and calibration temperature  */
  uint32_t      RESERVED0[11U];   /**< Reserved for future use **/
  __IM uint32_t CUSTOMINFO;       /**< Custom information  */
  __IM uint32_t MEMINFO;          /**< Flash page size and misc. chip information  */
  uint32_t      RESERVED1[2U];    /**< Reserved for future use **/
  __IM uint32_t UNIQUEL;          /**< Low 32 bits of device unique number  */
  __IM uint32_t UNIQUEH;          /**< High 32 bits of device unique number  */
  __IM uint32_t MSIZE;            /**< Flash and SRAM Memory size in kB  */
  __IM uint32_t PART;             /**< Part description  */
  __IM uint32_t DEVINFOREV;       /**< Device information page revision  */
  __IM uint32_t EMUTEMP;          /**< EMU Temperature Calibration Information  */
  uint32_t      RESERVED2[2U];    /**< Reserved for future use **/
  __IM uint32_t ADC0CAL0;         /**< ADC0 calibration register 0  */
  __IM uint32_t ADC0CAL1;         /**< ADC0 calibration register 1  */
  __IM uint32_t ADC0CAL2;         /**< ADC0 calibration register 2  */
  __IM uint32_t ADC0CAL3;         /**< ADC0 calibration register 3  */
  uint32_t      RESERVED3[4U];    /**< Reserved for future use **/
  __IM uint32_t HFRCOCAL0;        /**< HFRCO Calibration Register (4 MHz)  */
  uint32_t      RESERVED4[2U];    /**< Reserved for future use **/
  __IM uint32_t HFRCOCAL3;        /**< HFRCO Calibration Register (7 MHz)  */
  uint32_t      RESERVED5[2U];    /**< Reserved for future use **/
  __IM uint32_t HFRCOCAL6;        /**< HFRCO Calibration Register (13 MHz)  */
  __IM uint32_t HFRCOCAL7;        /**< HFRCO Calibration Register (16 MHz)  */
  __IM uint32_t HFRCOCAL8;        /**< HFRCO Calibration Register (19 MHz)  */
  uint32_t      RESERVED6[1U];    /**< Reserved for future use **/
  __IM uint32_t HFRCOCAL10;       /**< HFRCO Calibration Register (26 MHz)  */
  __IM uint32_t HFRCOCAL11;       /**< HFRCO Calibration Register (32 MHz)  */
  __IM uint32_t HFRCOCAL12;       /**< HFRCO Calibration Register (38 MHz)  */
  __IM uint32_t HFRCOCAL13;       /**< HFRCO Calibration Register (48 MHz)  */
  uint32_t      RESERVED7[10U];   /**< Reserved for future use **/
  __IM uint32_t AUXHFRCOCAL0;     /**< AUXHFRCO Calibration Register (4 MHz)  */
  uint32_t      RESERVED8[2U];    /**< Reserved for future use **/
  __IM uint32_t AUXHFRCOCAL3;     /**< AUXHFRCO Calibration Register (7 MHz)  */
  uint32_t      RESERVED9[2U];    /**< Reserved for future use **/
  __IM uint32_t AUXHFRCOCAL6;     /**< AUXHFRCO Calibration Register (13 MHz)  */
  __IM uint32_t AUXHFRCOCAL7;     /**< AUXHFRCO Calibration Register (16 MHz)  */
  __IM uint32_t AUXHFRCOCAL8;     /**< AUXHFRCO Calibration Register (19 MHz)  */
  uint32_t      RESERVED10[1U];   /**< Reserved for future use **/
  __IM uint32_t AUXHFRCOCAL10;    /**< AUXHFRCO Calibration Register (26 MHz)  */
  __IM uint32_t AUXHFRCOCAL11;    /**< AUXHFRCO Calibration Register (32 MHz)  */
  __IM uint32_t AUXHFRCOCAL12;    /**< AUXHFRCO Calibration Register (38 MHz)  */
  __IM uint32_t AUXHFRCOCAL13;    /**< AUXHFRCO Calibration Register (48 MHz)  */
  uint32_t      RESERVED11[10U];  /**< Reserved for future use **/
  __IM uint32_t VMONCAL0;         /**< VMON Calibration Register 0  */
  __IM uint32_t VMONCAL1;         /**< VMON Calibration Register 1  */
  __IM uint32_t VMONCAL2;         /**< VMON Calibration Register 2  */
  uint32_t      RESERVED12[7U];   /**< Reserved for future use **/
  __IM uint32_t DCDCLNVCTRL0;     /**< DCDC Low-noise VREF Trim Register 0  */
  __IM uint32_t DCDCLPVCTRL0;     /**< DCDC Low-power VREF Trim Register 0  */
  __IM uint32_t DCDCLPVCTRL1;     /**< DCDC Low-power VREF Trim Register 1  */
  __IM uint32_t DCDCLPVCTRL2;     /**< DCDC Low-power VREF Trim Register 2  */
  __IM uint32_t DCDCLPVCTRL3;     /**< DCDC Low-power VREF Trim Register 3  */
  __IM uint32_t DCDCLPCMPHYSSEL0; /**< DCDC LPCMPHYSSEL Trim Register 0  */
  __IM uint32_t DCDCLPCMPHYSSEL1; /**< DCDC LPCMPHYSSEL Trim Register 1  */
  __IM uint32_t VDAC0MAINCAL;     /**< VDAC0 Cals for Main Path  */
  __IM uint32_t VDAC0ALTCAL;      /**< VDAC0 Cals for Alternate Path  */
  __IM uint32_t VDAC0CH1CAL;      /**< VDAC0 CH1 Error Cal  */
  __IM uint32_t OPA0CAL0;         /**< OPA0 Calibration Register for DRIVESTRENGTH 0, INCBW=1  */
  __IM uint32_t OPA0CAL1;         /**< OPA0 Calibration Register for DRIVESTRENGTH 1, INCBW=1  */
  __IM uint32_t OPA0CAL2;         /**< OPA0 Calibration Register for DRIVESTRENGTH 2, INCBW=1  */
  __IM uint32_t OPA0CAL3;         /**< OPA0 Calibration Register for DRIVESTRENGTH 3, INCBW=1  */
  __IM uint32_t OPA0CAL4;         /**< OPA0 Calibration Register for DRIVESTRENGTH 0, INCBW=0  */
  __IM uint32_t OPA0CAL5;         /**< OPA0 Calibration Register for DRIVESTRENGTH 1, INCBW=0  */
  __IM uint32_t OPA0CAL6;         /**< OPA0 Calibration Register for DRIVESTRENGTH 2, INCBW=0  */
  __IM uint32_t OPA0CAL7;         /**< OPA0 Calibration Register for DRIVESTRENGTH 3, INCBW=0  */
  __IM uint32_t OPA1CAL0;         /**< OPA1 Calibration Register for DRIVESTRENGTH 0, INCBW=1  */
  __IM uint32_t OPA1CAL1;         /**< OPA1 Calibration Register for DRIVESTRENGTH 1, INCBW=1  */
  __IM uint32_t OPA1CAL2;         /**< OPA1 Calibration Register for DRIVESTRENGTH 2, INCBW=1  */
  __IM uint32_t OPA1CAL3;         /**< OPA1 Calibration Register for DRIVESTRENGTH 3, INCBW=1  */
  __IM uint32_t OPA1CAL4;         /**< OPA1 Calibration Register for DRIVESTRENGTH 0, INCBW=0  */
  __IM uint32_t OPA1CAL5;         /**< OPA1 Calibration Register for DRIVESTRENGTH 1, INCBW=0  */
  __IM uint32_t OPA1CAL6;         /**< OPA1 Calibration Register for DRIVESTRENGTH 2, INCBW=0  */
  __IM uint32_t OPA1CAL7;         /**< OPA1 Calibration Register for DRIVESTRENGTH 3, INCBW=0  */
  __IM uint32_t OPA2CAL0;         /**< OPA2 Calibration Register for DRIVESTRENGTH 0, INCBW=1  */
  __IM uint32_t OPA2CAL1;         /**< OPA2 Calibration Register for DRIVESTRENGTH 1, INCBW=1  */
  __IM uint32_t OPA2CAL2;         /**< OPA2 Calibration Register for DRIVESTRENGTH 2, INCBW=1  */
  __IM uint32_t OPA2CAL3;         /**< OPA2 Calibration Register for DRIVESTRENGTH 3, INCBW=1  */
  __IM uint32_t OPA2CAL4;         /**< OPA2 Calibration Register for DRIVESTRENGTH 0, INCBW=0  */
  __IM uint32_t OPA2CAL5;         /**< OPA2 Calibration Register for DRIVESTRENGTH 1, INCBW=0  */
  __IM uint32_t OPA2CAL6;         /**< OPA2 Calibration Register for DRIVESTRENGTH 2, INCBW=0  */
  __IM uint32_t OPA2CAL7;         /**< OPA2 Calibration Register for DRIVESTRENGTH 3, INCBW=0  */
  __IM uint32_t OPA3CAL0;         /**< OPA3 Calibration Register for DRIVESTRENGTH 0, INCBW=1  */
  __IM uint32_t OPA3CAL1;         /**< OPA3 Calibration Register for DRIVESTRENGTH 1, INCBW=1  */
  __IM uint32_t OPA3CAL2;         /**< OPA3 Calibration Register for DRIVESTRENGTH 2, INCBW=1  */
  __IM uint32_t OPA3CAL3;         /**< OPA3 Calibration Register for DRIVESTRENGTH 3, INCBW=1  */
  __IM uint32_t OPA3CAL4;         /**< OPA3 Calibration Register for DRIVESTRENGTH 0, INCBW=0  */
  __IM uint32_t OPA3CAL5;         /**< OPA3 Calibration Register for DRIVESTRENGTH 1, INCBW=0  */
  __IM uint32_t OPA3CAL6;         /**< OPA3 Calibration Register for DRIVESTRENGTH 2, INCBW=0  */
  __IM uint32_t OPA3CAL7;         /**< OPA3 Calibration Register for DRIVESTRENGTH 3, INCBW=0  */
  __IM uint32_t CSENGAINCAL;      /**< Cap Sense Gain Adjustment  */
} DEVINFO_TypeDef;                /** @} */

/***************************************************************************//**
 * @addtogroup EFM32TG11B_DEVINFO
 * @{
 * @defgroup EFM32TG11B_DEVINFO_BitFields DEVINFO Bit Fields
 * @{
 ******************************************************************************/

/* Bit fields for DEVINFO CAL */
#define _DEVINFO_CAL_MASK                                        0x00FFFFFFUL /**< Mask for DEVINFO_CAL */
#define _DEVINFO_CAL_CRC_SHIFT                                   0            /**< Shift value for CRC */
#define _DEVINFO_CAL_CRC_MASK                                    0xFFFFUL     /**< Bit mask for CRC */
#define _DEVINFO_CAL_TEMP_SHIFT                                  16           /**< Shift value for TEMP */
#define _DEVINFO_CAL_TEMP_MASK                                   0xFF0000UL   /**< Bit mask for TEMP */

/* Bit fields for DEVINFO CUSTOMINFO */
#define _DEVINFO_CUSTOMINFO_MASK                                 0xFFFF0000UL /**< Mask for DEVINFO_CUSTOMINFO */
#define _DEVINFO_CUSTOMINFO_PARTNO_SHIFT                         16           /**< Shift value for PARTNO */
#define _DEVINFO_CUSTOMINFO_PARTNO_MASK                          0xFFFF0000UL /**< Bit mask for PARTNO */

/* Bit fields for DEVINFO MEMINFO */
#define _DEVINFO_MEMINFO_MASK                                    0xFFFFFFFFUL                               /**< Mask for DEVINFO_MEMINFO */
#define _DEVINFO_MEMINFO_TEMPGRADE_SHIFT                         0                                          /**< Shift value for TEMPGRADE */
#define _DEVINFO_MEMINFO_TEMPGRADE_MASK                          0xFFUL                                     /**< Bit mask for TEMPGRADE */
#define _DEVINFO_MEMINFO_TEMPGRADE_N40TO85                       0x00000000UL                               /**< Mode N40TO85 for DEVINFO_MEMINFO */
#define _DEVINFO_MEMINFO_TEMPGRADE_N40TO125                      0x00000001UL                               /**< Mode N40TO125 for DEVINFO_MEMINFO */
#define _DEVINFO_MEMINFO_TEMPGRADE_N40TO105                      0x00000002UL                               /**< Mode N40TO105 for DEVINFO_MEMINFO */
#define _DEVINFO_MEMINFO_TEMPGRADE_N0TO70                        0x00000003UL                               /**< Mode N0TO70 for DEVINFO_MEMINFO */
#define DEVINFO_MEMINFO_TEMPGRADE_N40TO85                        (_DEVINFO_MEMINFO_TEMPGRADE_N40TO85 << 0)  /**< Shifted mode N40TO85 for DEVINFO_MEMINFO */
#define DEVINFO_MEMINFO_TEMPGRADE_N40TO125                       (_DEVINFO_MEMINFO_TEMPGRADE_N40TO125 << 0) /**< Shifted mode N40TO125 for DEVINFO_MEMINFO */
#define DEVINFO_MEMINFO_TEMPGRADE_N40TO105                       (_DEVINFO_MEMINFO_TEMPGRADE_N40TO105 << 0) /**< Shifted mode N40TO105 for DEVINFO_MEMINFO */
#define DEVINFO_MEMINFO_TEMPGRADE_N0TO70                         (_DEVINFO_MEMINFO_TEMPGRADE_N0TO70 << 0)   /**< Shifted mode N0TO70 for DEVINFO_MEMINFO */
#define _DEVINFO_MEMINFO_PKGTYPE_SHIFT                           8                                          /**< Shift value for PKGTYPE */
#define _DEVINFO_MEMINFO_PKGTYPE_MASK                            0xFF00UL                                   /**< Bit mask for PKGTYPE */
#define _DEVINFO_MEMINFO_PKGTYPE_WLCSP                           0x0000004AUL                               /**< Mode WLCSP for DEVINFO_MEMINFO */
#define _DEVINFO_MEMINFO_PKGTYPE_BGA                             0x0000004CUL                               /**< Mode BGA for DEVINFO_MEMINFO */
#define _DEVINFO_MEMINFO_PKGTYPE_QFN                             0x0000004DUL                               /**< Mode QFN for DEVINFO_MEMINFO */
#define _DEVINFO_MEMINFO_PKGTYPE_QFP                             0x00000051UL                               /**< Mode QFP for DEVINFO_MEMINFO */
#define DEVINFO_MEMINFO_PKGTYPE_WLCSP                            (_DEVINFO_MEMINFO_PKGTYPE_WLCSP << 8)      /**< Shifted mode WLCSP for DEVINFO_MEMINFO */
#define DEVINFO_MEMINFO_PKGTYPE_BGA                              (_DEVINFO_MEMINFO_PKGTYPE_BGA << 8)        /**< Shifted mode BGA for DEVINFO_MEMINFO */
#define DEVINFO_MEMINFO_PKGTYPE_QFN                              (_DEVINFO_MEMINFO_PKGTYPE_QFN << 8)        /**< Shifted mode QFN for DEVINFO_MEMINFO */
#define DEVINFO_MEMINFO_PKGTYPE_QFP                              (_DEVINFO_MEMINFO_PKGTYPE_QFP << 8)        /**< Shifted mode QFP for DEVINFO_MEMINFO */
#define _DEVINFO_MEMINFO_PINCOUNT_SHIFT                          16                                         /**< Shift value for PINCOUNT */
#define _DEVINFO_MEMINFO_PINCOUNT_MASK                           0xFF0000UL                                 /**< Bit mask for PINCOUNT */
#define _DEVINFO_MEMINFO_FLASH_PAGE_SIZE_SHIFT                   24                                         /**< Shift value for FLASH_PAGE_SIZE */
#define _DEVINFO_MEMINFO_FLASH_PAGE_SIZE_MASK                    0xFF000000UL                               /**< Bit mask for FLASH_PAGE_SIZE */

/* Bit fields for DEVINFO UNIQUEL */
#define _DEVINFO_UNIQUEL_MASK                                    0xFFFFFFFFUL /**< Mask for DEVINFO_UNIQUEL */
#define _DEVINFO_UNIQUEL_UNIQUEL_SHIFT                           0            /**< Shift value for UNIQUEL */
#define _DEVINFO_UNIQUEL_UNIQUEL_MASK                            0xFFFFFFFFUL /**< Bit mask for UNIQUEL */

/* Bit fields for DEVINFO UNIQUEH */
#define _DEVINFO_UNIQUEH_MASK                                    0xFFFFFFFFUL /**< Mask for DEVINFO_UNIQUEH */
#define _DEVINFO_UNIQUEH_UNIQUEH_SHIFT                           0            /**< Shift value for UNIQUEH */
#define _DEVINFO_UNIQUEH_UNIQUEH_MASK                            0xFFFFFFFFUL /**< Bit mask for UNIQUEH */

/* Bit fields for DEVINFO MSIZE */
#define _DEVINFO_MSIZE_MASK                                      0xFFFFFFFFUL /**< Mask for DEVINFO_MSIZE */
#define _DEVINFO_MSIZE_FLASH_SHIFT                               0            /**< Shift value for FLASH */
#define _DEVINFO_MSIZE_FLASH_MASK                                0xFFFFUL     /**< Bit mask for FLASH */
#define _DEVINFO_MSIZE_SRAM_SHIFT                                16           /**< Shift value for SRAM */
#define _DEVINFO_MSIZE_SRAM_MASK                                 0xFFFF0000UL /**< Bit mask for SRAM */

/* Bit fields for DEVINFO PART */
#define _DEVINFO_PART_MASK                                       0xFFFFFFFFUL                                   /**< Mask for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_NUMBER_SHIFT                        0                                              /**< Shift value for DEVICE_NUMBER */
#define _DEVINFO_PART_DEVICE_NUMBER_MASK                         0xFFFFUL                                       /**< Bit mask for DEVICE_NUMBER */
#define _DEVINFO_PART_DEVICE_FAMILY_SHIFT                        16                                             /**< Shift value for DEVICE_FAMILY */
#define _DEVINFO_PART_DEVICE_FAMILY_MASK                         0xFF0000UL                                     /**< Bit mask for DEVICE_FAMILY */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG1P                    0x00000010UL                                   /**< Mode EFR32MG1P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG1B                    0x00000011UL                                   /**< Mode EFR32MG1B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG1V                    0x00000012UL                                   /**< Mode EFR32MG1V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG1P                    0x00000013UL                                   /**< Mode EFR32BG1P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG1B                    0x00000014UL                                   /**< Mode EFR32BG1B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG1V                    0x00000015UL                                   /**< Mode EFR32BG1V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG1P                    0x00000019UL                                   /**< Mode EFR32FG1P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG1B                    0x0000001AUL                                   /**< Mode EFR32FG1B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG1V                    0x0000001BUL                                   /**< Mode EFR32FG1V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG12P                   0x0000001CUL                                   /**< Mode EFR32MG12P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG12B                   0x0000001DUL                                   /**< Mode EFR32MG12B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG12V                   0x0000001EUL                                   /**< Mode EFR32MG12V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG12P                   0x0000001FUL                                   /**< Mode EFR32BG12P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG12B                   0x00000020UL                                   /**< Mode EFR32BG12B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG12V                   0x00000021UL                                   /**< Mode EFR32BG12V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG12P                   0x00000025UL                                   /**< Mode EFR32FG12P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG12B                   0x00000026UL                                   /**< Mode EFR32FG12B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG12V                   0x00000027UL                                   /**< Mode EFR32FG12V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG13P                   0x00000028UL                                   /**< Mode EFR32MG13P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG13B                   0x00000029UL                                   /**< Mode EFR32MG13B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG13V                   0x0000002AUL                                   /**< Mode EFR32MG13V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG13P                   0x0000002BUL                                   /**< Mode EFR32BG13P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG13B                   0x0000002CUL                                   /**< Mode EFR32BG13B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG13V                   0x0000002DUL                                   /**< Mode EFR32BG13V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32ZG13P                   0x0000002EUL                                   /**< Mode EFR32ZG13P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32ZG13L                   0x0000002FUL                                   /**< Mode EFR32ZG13L for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32ZG13S                   0x00000030UL                                   /**< Mode EFR32ZG13S for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG13P                   0x00000031UL                                   /**< Mode EFR32FG13P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG13B                   0x00000032UL                                   /**< Mode EFR32FG13B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG13V                   0x00000033UL                                   /**< Mode EFR32FG13V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG14P                   0x00000034UL                                   /**< Mode EFR32MG14P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG14B                   0x00000035UL                                   /**< Mode EFR32MG14B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32MG14V                   0x00000036UL                                   /**< Mode EFR32MG14V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG14P                   0x00000037UL                                   /**< Mode EFR32BG14P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG14B                   0x00000038UL                                   /**< Mode EFR32BG14B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32BG14V                   0x00000039UL                                   /**< Mode EFR32BG14V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32ZG14P                   0x0000003AUL                                   /**< Mode EFR32ZG14P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG14P                   0x0000003DUL                                   /**< Mode EFR32FG14P for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG14B                   0x0000003EUL                                   /**< Mode EFR32FG14B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFR32FG14V                   0x0000003FUL                                   /**< Mode EFR32FG14V for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32G                       0x00000047UL                                   /**< Mode EFM32G for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32GG                      0x00000048UL                                   /**< Mode EFM32GG for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32TG                      0x00000049UL                                   /**< Mode EFM32TG for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32LG                      0x0000004AUL                                   /**< Mode EFM32LG for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32WG                      0x0000004BUL                                   /**< Mode EFM32WG for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32ZG                      0x0000004CUL                                   /**< Mode EFM32ZG for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32HG                      0x0000004DUL                                   /**< Mode EFM32HG for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32PG1B                    0x00000051UL                                   /**< Mode EFM32PG1B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32JG1B                    0x00000053UL                                   /**< Mode EFM32JG1B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32PG12B                   0x00000055UL                                   /**< Mode EFM32PG12B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32JG12B                   0x00000057UL                                   /**< Mode EFM32JG12B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32GG11B                   0x00000064UL                                   /**< Mode EFM32GG11B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32TG11B                   0x00000067UL                                   /**< Mode EFM32TG11B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EFM32GG12B                   0x0000006AUL                                   /**< Mode EFM32GG12B for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EZR32LG                      0x00000078UL                                   /**< Mode EZR32LG for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EZR32WG                      0x00000079UL                                   /**< Mode EZR32WG for DEVINFO_PART */
#define _DEVINFO_PART_DEVICE_FAMILY_EZR32HG                      0x0000007AUL                                   /**< Mode EZR32HG for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG1P                     (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG1P << 16)  /**< Shifted mode EFR32MG1P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG1B                     (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG1B << 16)  /**< Shifted mode EFR32MG1B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG1V                     (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG1V << 16)  /**< Shifted mode EFR32MG1V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG1P                     (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG1P << 16)  /**< Shifted mode EFR32BG1P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG1B                     (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG1B << 16)  /**< Shifted mode EFR32BG1B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG1V                     (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG1V << 16)  /**< Shifted mode EFR32BG1V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG1P                     (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG1P << 16)  /**< Shifted mode EFR32FG1P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG1B                     (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG1B << 16)  /**< Shifted mode EFR32FG1B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG1V                     (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG1V << 16)  /**< Shifted mode EFR32FG1V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG12P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG12P << 16) /**< Shifted mode EFR32MG12P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG12B                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG12B << 16) /**< Shifted mode EFR32MG12B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG12V                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG12V << 16) /**< Shifted mode EFR32MG12V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG12P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG12P << 16) /**< Shifted mode EFR32BG12P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG12B                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG12B << 16) /**< Shifted mode EFR32BG12B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG12V                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG12V << 16) /**< Shifted mode EFR32BG12V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG12P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG12P << 16) /**< Shifted mode EFR32FG12P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG12B                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG12B << 16) /**< Shifted mode EFR32FG12B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG12V                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG12V << 16) /**< Shifted mode EFR32FG12V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG13P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG13P << 16) /**< Shifted mode EFR32MG13P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG13B                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG13B << 16) /**< Shifted mode EFR32MG13B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG13V                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG13V << 16) /**< Shifted mode EFR32MG13V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG13P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG13P << 16) /**< Shifted mode EFR32BG13P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG13B                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG13B << 16) /**< Shifted mode EFR32BG13B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG13V                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG13V << 16) /**< Shifted mode EFR32BG13V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32ZG13P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32ZG13P << 16) /**< Shifted mode EFR32ZG13P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32ZG13L                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32ZG13L << 16) /**< Shifted mode EFR32ZG13L for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32ZG13S                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32ZG13S << 16) /**< Shifted mode EFR32ZG13S for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG13P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG13P << 16) /**< Shifted mode EFR32FG13P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG13B                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG13B << 16) /**< Shifted mode EFR32FG13B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG13V                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG13V << 16) /**< Shifted mode EFR32FG13V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG14P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG14P << 16) /**< Shifted mode EFR32MG14P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG14B                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG14B << 16) /**< Shifted mode EFR32MG14B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32MG14V                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32MG14V << 16) /**< Shifted mode EFR32MG14V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG14P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG14P << 16) /**< Shifted mode EFR32BG14P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG14B                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG14B << 16) /**< Shifted mode EFR32BG14B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32BG14V                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32BG14V << 16) /**< Shifted mode EFR32BG14V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32ZG14P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32ZG14P << 16) /**< Shifted mode EFR32ZG14P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG14P                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG14P << 16) /**< Shifted mode EFR32FG14P for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG14B                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG14B << 16) /**< Shifted mode EFR32FG14B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFR32FG14V                    (_DEVINFO_PART_DEVICE_FAMILY_EFR32FG14V << 16) /**< Shifted mode EFR32FG14V for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32G                        (_DEVINFO_PART_DEVICE_FAMILY_EFM32G << 16)     /**< Shifted mode EFM32G for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32GG                       (_DEVINFO_PART_DEVICE_FAMILY_EFM32GG << 16)    /**< Shifted mode EFM32GG for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32TG                       (_DEVINFO_PART_DEVICE_FAMILY_EFM32TG << 16)    /**< Shifted mode EFM32TG for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32LG                       (_DEVINFO_PART_DEVICE_FAMILY_EFM32LG << 16)    /**< Shifted mode EFM32LG for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32WG                       (_DEVINFO_PART_DEVICE_FAMILY_EFM32WG << 16)    /**< Shifted mode EFM32WG for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32ZG                       (_DEVINFO_PART_DEVICE_FAMILY_EFM32ZG << 16)    /**< Shifted mode EFM32ZG for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32HG                       (_DEVINFO_PART_DEVICE_FAMILY_EFM32HG << 16)    /**< Shifted mode EFM32HG for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32PG1B                     (_DEVINFO_PART_DEVICE_FAMILY_EFM32PG1B << 16)  /**< Shifted mode EFM32PG1B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32JG1B                     (_DEVINFO_PART_DEVICE_FAMILY_EFM32JG1B << 16)  /**< Shifted mode EFM32JG1B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32PG12B                    (_DEVINFO_PART_DEVICE_FAMILY_EFM32PG12B << 16) /**< Shifted mode EFM32PG12B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32JG12B                    (_DEVINFO_PART_DEVICE_FAMILY_EFM32JG12B << 16) /**< Shifted mode EFM32JG12B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32GG11B                    (_DEVINFO_PART_DEVICE_FAMILY_EFM32GG11B << 16) /**< Shifted mode EFM32GG11B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32TG11B                    (_DEVINFO_PART_DEVICE_FAMILY_EFM32TG11B << 16) /**< Shifted mode EFM32TG11B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EFM32GG12B                    (_DEVINFO_PART_DEVICE_FAMILY_EFM32GG12B << 16) /**< Shifted mode EFM32GG12B for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EZR32LG                       (_DEVINFO_PART_DEVICE_FAMILY_EZR32LG << 16)    /**< Shifted mode EZR32LG for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EZR32WG                       (_DEVINFO_PART_DEVICE_FAMILY_EZR32WG << 16)    /**< Shifted mode EZR32WG for DEVINFO_PART */
#define DEVINFO_PART_DEVICE_FAMILY_EZR32HG                       (_DEVINFO_PART_DEVICE_FAMILY_EZR32HG << 16)    /**< Shifted mode EZR32HG for DEVINFO_PART */
#define _DEVINFO_PART_PROD_REV_SHIFT                             24                                             /**< Shift value for PROD_REV */
#define _DEVINFO_PART_PROD_REV_MASK                              0xFF000000UL                                   /**< Bit mask for PROD_REV */

/* Bit fields for DEVINFO DEVINFOREV */
#define _DEVINFO_DEVINFOREV_MASK                                 0x000000FFUL /**< Mask for DEVINFO_DEVINFOREV */
#define _DEVINFO_DEVINFOREV_MINOR_SHIFT                          0            /**< Shift value for MINOR */
#define _DEVINFO_DEVINFOREV_MINOR_MASK                           0x1FUL       /**< Bit mask for MINOR */
#define _DEVINFO_DEVINFOREV_MAJOR_SHIFT                          5            /**< Shift value for MAJOR */
#define _DEVINFO_DEVINFOREV_MAJOR_MASK                           0xE0UL       /**< Bit mask for MAJOR */

/* Bit fields for DEVINFO EMUTEMP */
#define _DEVINFO_EMUTEMP_MASK                                    0x000000FFUL /**< Mask for DEVINFO_EMUTEMP */
#define _DEVINFO_EMUTEMP_EMUTEMPROOM_SHIFT                       0            /**< Shift value for EMUTEMPROOM */
#define _DEVINFO_EMUTEMP_EMUTEMPROOM_MASK                        0xFFUL       /**< Bit mask for EMUTEMPROOM */

/* Bit fields for DEVINFO ADC0CAL0 */
#define _DEVINFO_ADC0CAL0_MASK                                   0x7FFF7FFFUL /**< Mask for DEVINFO_ADC0CAL0 */
#define _DEVINFO_ADC0CAL0_OFFSET1V25_SHIFT                       0            /**< Shift value for OFFSET1V25 */
#define _DEVINFO_ADC0CAL0_OFFSET1V25_MASK                        0xFUL        /**< Bit mask for OFFSET1V25 */
#define _DEVINFO_ADC0CAL0_NEGSEOFFSET1V25_SHIFT                  4            /**< Shift value for NEGSEOFFSET1V25 */
#define _DEVINFO_ADC0CAL0_NEGSEOFFSET1V25_MASK                   0xF0UL       /**< Bit mask for NEGSEOFFSET1V25 */
#define _DEVINFO_ADC0CAL0_GAIN1V25_SHIFT                         8            /**< Shift value for GAIN1V25 */
#define _DEVINFO_ADC0CAL0_GAIN1V25_MASK                          0x7F00UL     /**< Bit mask for GAIN1V25 */
#define _DEVINFO_ADC0CAL0_OFFSET2V5_SHIFT                        16           /**< Shift value for OFFSET2V5 */
#define _DEVINFO_ADC0CAL0_OFFSET2V5_MASK                         0xF0000UL    /**< Bit mask for OFFSET2V5 */
#define _DEVINFO_ADC0CAL0_NEGSEOFFSET2V5_SHIFT                   20           /**< Shift value for NEGSEOFFSET2V5 */
#define _DEVINFO_ADC0CAL0_NEGSEOFFSET2V5_MASK                    0xF00000UL   /**< Bit mask for NEGSEOFFSET2V5 */
#define _DEVINFO_ADC0CAL0_GAIN2V5_SHIFT                          24           /**< Shift value for GAIN2V5 */
#define _DEVINFO_ADC0CAL0_GAIN2V5_MASK                           0x7F000000UL /**< Bit mask for GAIN2V5 */

/* Bit fields for DEVINFO ADC0CAL1 */
#define _DEVINFO_ADC0CAL1_MASK                                   0x7FFF7FFFUL /**< Mask for DEVINFO_ADC0CAL1 */
#define _DEVINFO_ADC0CAL1_OFFSETVDD_SHIFT                        0            /**< Shift value for OFFSETVDD */
#define _DEVINFO_ADC0CAL1_OFFSETVDD_MASK                         0xFUL        /**< Bit mask for OFFSETVDD */
#define _DEVINFO_ADC0CAL1_NEGSEOFFSETVDD_SHIFT                   4            /**< Shift value for NEGSEOFFSETVDD */
#define _DEVINFO_ADC0CAL1_NEGSEOFFSETVDD_MASK                    0xF0UL       /**< Bit mask for NEGSEOFFSETVDD */
#define _DEVINFO_ADC0CAL1_GAINVDD_SHIFT                          8            /**< Shift value for GAINVDD */
#define _DEVINFO_ADC0CAL1_GAINVDD_MASK                           0x7F00UL     /**< Bit mask for GAINVDD */
#define _DEVINFO_ADC0CAL1_OFFSET5VDIFF_SHIFT                     16           /**< Shift value for OFFSET5VDIFF */
#define _DEVINFO_ADC0CAL1_OFFSET5VDIFF_MASK                      0xF0000UL    /**< Bit mask for OFFSET5VDIFF */
#define _DEVINFO_ADC0CAL1_NEGSEOFFSET5VDIFF_SHIFT                20           /**< Shift value for NEGSEOFFSET5VDIFF */
#define _DEVINFO_ADC0CAL1_NEGSEOFFSET5VDIFF_MASK                 0xF00000UL   /**< Bit mask for NEGSEOFFSET5VDIFF */
#define _DEVINFO_ADC0CAL1_GAIN5VDIFF_SHIFT                       24           /**< Shift value for GAIN5VDIFF */
#define _DEVINFO_ADC0CAL1_GAIN5VDIFF_MASK                        0x7F000000UL /**< Bit mask for GAIN5VDIFF */

/* Bit fields for DEVINFO ADC0CAL2 */
#define _DEVINFO_ADC0CAL2_MASK                                   0x000000FFUL /**< Mask for DEVINFO_ADC0CAL2 */
#define _DEVINFO_ADC0CAL2_OFFSET2XVDD_SHIFT                      0            /**< Shift value for OFFSET2XVDD */
#define _DEVINFO_ADC0CAL2_OFFSET2XVDD_MASK                       0xFUL        /**< Bit mask for OFFSET2XVDD */
#define _DEVINFO_ADC0CAL2_NEGSEOFFSET2XVDD_SHIFT                 4            /**< Shift value for NEGSEOFFSET2XVDD */
#define _DEVINFO_ADC0CAL2_NEGSEOFFSET2XVDD_MASK                  0xF0UL       /**< Bit mask for NEGSEOFFSET2XVDD */

/* Bit fields for DEVINFO ADC0CAL3 */
#define _DEVINFO_ADC0CAL3_MASK                                   0x0000FFF0UL /**< Mask for DEVINFO_ADC0CAL3 */
#define _DEVINFO_ADC0CAL3_TEMPREAD1V25_SHIFT                     4            /**< Shift value for TEMPREAD1V25 */
#define _DEVINFO_ADC0CAL3_TEMPREAD1V25_MASK                      0xFFF0UL     /**< Bit mask for TEMPREAD1V25 */

/* Bit fields for DEVINFO HFRCOCAL0 */
#define _DEVINFO_HFRCOCAL0_MASK                                  0xFFFF3F7FUL /**< Mask for DEVINFO_HFRCOCAL0 */
#define _DEVINFO_HFRCOCAL0_TUNING_SHIFT                          0            /**< Shift value for TUNING */
#define _DEVINFO_HFRCOCAL0_TUNING_MASK                           0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_HFRCOCAL0_FINETUNING_SHIFT                      8            /**< Shift value for FINETUNING */
#define _DEVINFO_HFRCOCAL0_FINETUNING_MASK                       0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_HFRCOCAL0_FREQRANGE_SHIFT                       16           /**< Shift value for FREQRANGE */
#define _DEVINFO_HFRCOCAL0_FREQRANGE_MASK                        0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_HFRCOCAL0_CMPBIAS_SHIFT                         21           /**< Shift value for CMPBIAS */
#define _DEVINFO_HFRCOCAL0_CMPBIAS_MASK                          0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_HFRCOCAL0_LDOHP_SHIFT                           24           /**< Shift value for LDOHP */
#define _DEVINFO_HFRCOCAL0_LDOHP_MASK                            0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_HFRCOCAL0_CLKDIV_SHIFT                          25           /**< Shift value for CLKDIV */
#define _DEVINFO_HFRCOCAL0_CLKDIV_MASK                           0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_HFRCOCAL0_FINETUNINGEN_SHIFT                    27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL0_FINETUNINGEN_MASK                     0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL0_VREFTC_SHIFT                          28           /**< Shift value for VREFTC */
#define _DEVINFO_HFRCOCAL0_VREFTC_MASK                           0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO HFRCOCAL3 */
#define _DEVINFO_HFRCOCAL3_MASK                                  0xFFFF3F7FUL /**< Mask for DEVINFO_HFRCOCAL3 */
#define _DEVINFO_HFRCOCAL3_TUNING_SHIFT                          0            /**< Shift value for TUNING */
#define _DEVINFO_HFRCOCAL3_TUNING_MASK                           0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_HFRCOCAL3_FINETUNING_SHIFT                      8            /**< Shift value for FINETUNING */
#define _DEVINFO_HFRCOCAL3_FINETUNING_MASK                       0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_HFRCOCAL3_FREQRANGE_SHIFT                       16           /**< Shift value for FREQRANGE */
#define _DEVINFO_HFRCOCAL3_FREQRANGE_MASK                        0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_HFRCOCAL3_CMPBIAS_SHIFT                         21           /**< Shift value for CMPBIAS */
#define _DEVINFO_HFRCOCAL3_CMPBIAS_MASK                          0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_HFRCOCAL3_LDOHP_SHIFT                           24           /**< Shift value for LDOHP */
#define _DEVINFO_HFRCOCAL3_LDOHP_MASK                            0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_HFRCOCAL3_CLKDIV_SHIFT                          25           /**< Shift value for CLKDIV */
#define _DEVINFO_HFRCOCAL3_CLKDIV_MASK                           0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_HFRCOCAL3_FINETUNINGEN_SHIFT                    27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL3_FINETUNINGEN_MASK                     0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL3_VREFTC_SHIFT                          28           /**< Shift value for VREFTC */
#define _DEVINFO_HFRCOCAL3_VREFTC_MASK                           0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO HFRCOCAL6 */
#define _DEVINFO_HFRCOCAL6_MASK                                  0xFFFF3F7FUL /**< Mask for DEVINFO_HFRCOCAL6 */
#define _DEVINFO_HFRCOCAL6_TUNING_SHIFT                          0            /**< Shift value for TUNING */
#define _DEVINFO_HFRCOCAL6_TUNING_MASK                           0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_HFRCOCAL6_FINETUNING_SHIFT                      8            /**< Shift value for FINETUNING */
#define _DEVINFO_HFRCOCAL6_FINETUNING_MASK                       0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_HFRCOCAL6_FREQRANGE_SHIFT                       16           /**< Shift value for FREQRANGE */
#define _DEVINFO_HFRCOCAL6_FREQRANGE_MASK                        0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_HFRCOCAL6_CMPBIAS_SHIFT                         21           /**< Shift value for CMPBIAS */
#define _DEVINFO_HFRCOCAL6_CMPBIAS_MASK                          0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_HFRCOCAL6_LDOHP_SHIFT                           24           /**< Shift value for LDOHP */
#define _DEVINFO_HFRCOCAL6_LDOHP_MASK                            0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_HFRCOCAL6_CLKDIV_SHIFT                          25           /**< Shift value for CLKDIV */
#define _DEVINFO_HFRCOCAL6_CLKDIV_MASK                           0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_HFRCOCAL6_FINETUNINGEN_SHIFT                    27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL6_FINETUNINGEN_MASK                     0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL6_VREFTC_SHIFT                          28           /**< Shift value for VREFTC */
#define _DEVINFO_HFRCOCAL6_VREFTC_MASK                           0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO HFRCOCAL7 */
#define _DEVINFO_HFRCOCAL7_MASK                                  0xFFFF3F7FUL /**< Mask for DEVINFO_HFRCOCAL7 */
#define _DEVINFO_HFRCOCAL7_TUNING_SHIFT                          0            /**< Shift value for TUNING */
#define _DEVINFO_HFRCOCAL7_TUNING_MASK                           0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_HFRCOCAL7_FINETUNING_SHIFT                      8            /**< Shift value for FINETUNING */
#define _DEVINFO_HFRCOCAL7_FINETUNING_MASK                       0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_HFRCOCAL7_FREQRANGE_SHIFT                       16           /**< Shift value for FREQRANGE */
#define _DEVINFO_HFRCOCAL7_FREQRANGE_MASK                        0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_HFRCOCAL7_CMPBIAS_SHIFT                         21           /**< Shift value for CMPBIAS */
#define _DEVINFO_HFRCOCAL7_CMPBIAS_MASK                          0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_HFRCOCAL7_LDOHP_SHIFT                           24           /**< Shift value for LDOHP */
#define _DEVINFO_HFRCOCAL7_LDOHP_MASK                            0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_HFRCOCAL7_CLKDIV_SHIFT                          25           /**< Shift value for CLKDIV */
#define _DEVINFO_HFRCOCAL7_CLKDIV_MASK                           0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_HFRCOCAL7_FINETUNINGEN_SHIFT                    27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL7_FINETUNINGEN_MASK                     0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL7_VREFTC_SHIFT                          28           /**< Shift value for VREFTC */
#define _DEVINFO_HFRCOCAL7_VREFTC_MASK                           0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO HFRCOCAL8 */
#define _DEVINFO_HFRCOCAL8_MASK                                  0xFFFF3F7FUL /**< Mask for DEVINFO_HFRCOCAL8 */
#define _DEVINFO_HFRCOCAL8_TUNING_SHIFT                          0            /**< Shift value for TUNING */
#define _DEVINFO_HFRCOCAL8_TUNING_MASK                           0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_HFRCOCAL8_FINETUNING_SHIFT                      8            /**< Shift value for FINETUNING */
#define _DEVINFO_HFRCOCAL8_FINETUNING_MASK                       0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_HFRCOCAL8_FREQRANGE_SHIFT                       16           /**< Shift value for FREQRANGE */
#define _DEVINFO_HFRCOCAL8_FREQRANGE_MASK                        0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_HFRCOCAL8_CMPBIAS_SHIFT                         21           /**< Shift value for CMPBIAS */
#define _DEVINFO_HFRCOCAL8_CMPBIAS_MASK                          0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_HFRCOCAL8_LDOHP_SHIFT                           24           /**< Shift value for LDOHP */
#define _DEVINFO_HFRCOCAL8_LDOHP_MASK                            0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_HFRCOCAL8_CLKDIV_SHIFT                          25           /**< Shift value for CLKDIV */
#define _DEVINFO_HFRCOCAL8_CLKDIV_MASK                           0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_HFRCOCAL8_FINETUNINGEN_SHIFT                    27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL8_FINETUNINGEN_MASK                     0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL8_VREFTC_SHIFT                          28           /**< Shift value for VREFTC */
#define _DEVINFO_HFRCOCAL8_VREFTC_MASK                           0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO HFRCOCAL10 */
#define _DEVINFO_HFRCOCAL10_MASK                                 0xFFFF3F7FUL /**< Mask for DEVINFO_HFRCOCAL10 */
#define _DEVINFO_HFRCOCAL10_TUNING_SHIFT                         0            /**< Shift value for TUNING */
#define _DEVINFO_HFRCOCAL10_TUNING_MASK                          0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_HFRCOCAL10_FINETUNING_SHIFT                     8            /**< Shift value for FINETUNING */
#define _DEVINFO_HFRCOCAL10_FINETUNING_MASK                      0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_HFRCOCAL10_FREQRANGE_SHIFT                      16           /**< Shift value for FREQRANGE */
#define _DEVINFO_HFRCOCAL10_FREQRANGE_MASK                       0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_HFRCOCAL10_CMPBIAS_SHIFT                        21           /**< Shift value for CMPBIAS */
#define _DEVINFO_HFRCOCAL10_CMPBIAS_MASK                         0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_HFRCOCAL10_LDOHP_SHIFT                          24           /**< Shift value for LDOHP */
#define _DEVINFO_HFRCOCAL10_LDOHP_MASK                           0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_HFRCOCAL10_CLKDIV_SHIFT                         25           /**< Shift value for CLKDIV */
#define _DEVINFO_HFRCOCAL10_CLKDIV_MASK                          0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_HFRCOCAL10_FINETUNINGEN_SHIFT                   27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL10_FINETUNINGEN_MASK                    0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL10_VREFTC_SHIFT                         28           /**< Shift value for VREFTC */
#define _DEVINFO_HFRCOCAL10_VREFTC_MASK                          0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO HFRCOCAL11 */
#define _DEVINFO_HFRCOCAL11_MASK                                 0xFFFF3F7FUL /**< Mask for DEVINFO_HFRCOCAL11 */
#define _DEVINFO_HFRCOCAL11_TUNING_SHIFT                         0            /**< Shift value for TUNING */
#define _DEVINFO_HFRCOCAL11_TUNING_MASK                          0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_HFRCOCAL11_FINETUNING_SHIFT                     8            /**< Shift value for FINETUNING */
#define _DEVINFO_HFRCOCAL11_FINETUNING_MASK                      0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_HFRCOCAL11_FREQRANGE_SHIFT                      16           /**< Shift value for FREQRANGE */
#define _DEVINFO_HFRCOCAL11_FREQRANGE_MASK                       0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_HFRCOCAL11_CMPBIAS_SHIFT                        21           /**< Shift value for CMPBIAS */
#define _DEVINFO_HFRCOCAL11_CMPBIAS_MASK                         0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_HFRCOCAL11_LDOHP_SHIFT                          24           /**< Shift value for LDOHP */
#define _DEVINFO_HFRCOCAL11_LDOHP_MASK                           0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_HFRCOCAL11_CLKDIV_SHIFT                         25           /**< Shift value for CLKDIV */
#define _DEVINFO_HFRCOCAL11_CLKDIV_MASK                          0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_HFRCOCAL11_FINETUNINGEN_SHIFT                   27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL11_FINETUNINGEN_MASK                    0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL11_VREFTC_SHIFT                         28           /**< Shift value for VREFTC */
#define _DEVINFO_HFRCOCAL11_VREFTC_MASK                          0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO HFRCOCAL12 */
#define _DEVINFO_HFRCOCAL12_MASK                                 0xFFFF3F7FUL /**< Mask for DEVINFO_HFRCOCAL12 */
#define _DEVINFO_HFRCOCAL12_TUNING_SHIFT                         0            /**< Shift value for TUNING */
#define _DEVINFO_HFRCOCAL12_TUNING_MASK                          0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_HFRCOCAL12_FINETUNING_SHIFT                     8            /**< Shift value for FINETUNING */
#define _DEVINFO_HFRCOCAL12_FINETUNING_MASK                      0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_HFRCOCAL12_FREQRANGE_SHIFT                      16           /**< Shift value for FREQRANGE */
#define _DEVINFO_HFRCOCAL12_FREQRANGE_MASK                       0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_HFRCOCAL12_CMPBIAS_SHIFT                        21           /**< Shift value for CMPBIAS */
#define _DEVINFO_HFRCOCAL12_CMPBIAS_MASK                         0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_HFRCOCAL12_LDOHP_SHIFT                          24           /**< Shift value for LDOHP */
#define _DEVINFO_HFRCOCAL12_LDOHP_MASK                           0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_HFRCOCAL12_CLKDIV_SHIFT                         25           /**< Shift value for CLKDIV */
#define _DEVINFO_HFRCOCAL12_CLKDIV_MASK                          0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_HFRCOCAL12_FINETUNINGEN_SHIFT                   27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL12_FINETUNINGEN_MASK                    0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL12_VREFTC_SHIFT                         28           /**< Shift value for VREFTC */
#define _DEVINFO_HFRCOCAL12_VREFTC_MASK                          0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO HFRCOCAL13 */
#define _DEVINFO_HFRCOCAL13_MASK                                 0xFFFF3F7FUL /**< Mask for DEVINFO_HFRCOCAL13 */
#define _DEVINFO_HFRCOCAL13_TUNING_SHIFT                         0            /**< Shift value for TUNING */
#define _DEVINFO_HFRCOCAL13_TUNING_MASK                          0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_HFRCOCAL13_FINETUNING_SHIFT                     8            /**< Shift value for FINETUNING */
#define _DEVINFO_HFRCOCAL13_FINETUNING_MASK                      0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_HFRCOCAL13_FREQRANGE_SHIFT                      16           /**< Shift value for FREQRANGE */
#define _DEVINFO_HFRCOCAL13_FREQRANGE_MASK                       0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_HFRCOCAL13_CMPBIAS_SHIFT                        21           /**< Shift value for CMPBIAS */
#define _DEVINFO_HFRCOCAL13_CMPBIAS_MASK                         0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_HFRCOCAL13_LDOHP_SHIFT                          24           /**< Shift value for LDOHP */
#define _DEVINFO_HFRCOCAL13_LDOHP_MASK                           0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_HFRCOCAL13_CLKDIV_SHIFT                         25           /**< Shift value for CLKDIV */
#define _DEVINFO_HFRCOCAL13_CLKDIV_MASK                          0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_HFRCOCAL13_FINETUNINGEN_SHIFT                   27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL13_FINETUNINGEN_MASK                    0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_HFRCOCAL13_VREFTC_SHIFT                         28           /**< Shift value for VREFTC */
#define _DEVINFO_HFRCOCAL13_VREFTC_MASK                          0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO AUXHFRCOCAL0 */
#define _DEVINFO_AUXHFRCOCAL0_MASK                               0xFFFF3F7FUL /**< Mask for DEVINFO_AUXHFRCOCAL0 */
#define _DEVINFO_AUXHFRCOCAL0_TUNING_SHIFT                       0            /**< Shift value for TUNING */
#define _DEVINFO_AUXHFRCOCAL0_TUNING_MASK                        0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_AUXHFRCOCAL0_FINETUNING_SHIFT                   8            /**< Shift value for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL0_FINETUNING_MASK                    0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL0_FREQRANGE_SHIFT                    16           /**< Shift value for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL0_FREQRANGE_MASK                     0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL0_CMPBIAS_SHIFT                      21           /**< Shift value for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL0_CMPBIAS_MASK                       0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL0_LDOHP_SHIFT                        24           /**< Shift value for LDOHP */
#define _DEVINFO_AUXHFRCOCAL0_LDOHP_MASK                         0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_AUXHFRCOCAL0_CLKDIV_SHIFT                       25           /**< Shift value for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL0_CLKDIV_MASK                        0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL0_FINETUNINGEN_SHIFT                 27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL0_FINETUNINGEN_MASK                  0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL0_VREFTC_SHIFT                       28           /**< Shift value for VREFTC */
#define _DEVINFO_AUXHFRCOCAL0_VREFTC_MASK                        0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO AUXHFRCOCAL3 */
#define _DEVINFO_AUXHFRCOCAL3_MASK                               0xFFFF3F7FUL /**< Mask for DEVINFO_AUXHFRCOCAL3 */
#define _DEVINFO_AUXHFRCOCAL3_TUNING_SHIFT                       0            /**< Shift value for TUNING */
#define _DEVINFO_AUXHFRCOCAL3_TUNING_MASK                        0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_AUXHFRCOCAL3_FINETUNING_SHIFT                   8            /**< Shift value for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL3_FINETUNING_MASK                    0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL3_FREQRANGE_SHIFT                    16           /**< Shift value for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL3_FREQRANGE_MASK                     0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL3_CMPBIAS_SHIFT                      21           /**< Shift value for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL3_CMPBIAS_MASK                       0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL3_LDOHP_SHIFT                        24           /**< Shift value for LDOHP */
#define _DEVINFO_AUXHFRCOCAL3_LDOHP_MASK                         0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_AUXHFRCOCAL3_CLKDIV_SHIFT                       25           /**< Shift value for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL3_CLKDIV_MASK                        0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL3_FINETUNINGEN_SHIFT                 27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL3_FINETUNINGEN_MASK                  0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL3_VREFTC_SHIFT                       28           /**< Shift value for VREFTC */
#define _DEVINFO_AUXHFRCOCAL3_VREFTC_MASK                        0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO AUXHFRCOCAL6 */
#define _DEVINFO_AUXHFRCOCAL6_MASK                               0xFFFF3F7FUL /**< Mask for DEVINFO_AUXHFRCOCAL6 */
#define _DEVINFO_AUXHFRCOCAL6_TUNING_SHIFT                       0            /**< Shift value for TUNING */
#define _DEVINFO_AUXHFRCOCAL6_TUNING_MASK                        0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_AUXHFRCOCAL6_FINETUNING_SHIFT                   8            /**< Shift value for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL6_FINETUNING_MASK                    0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL6_FREQRANGE_SHIFT                    16           /**< Shift value for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL6_FREQRANGE_MASK                     0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL6_CMPBIAS_SHIFT                      21           /**< Shift value for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL6_CMPBIAS_MASK                       0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL6_LDOHP_SHIFT                        24           /**< Shift value for LDOHP */
#define _DEVINFO_AUXHFRCOCAL6_LDOHP_MASK                         0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_AUXHFRCOCAL6_CLKDIV_SHIFT                       25           /**< Shift value for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL6_CLKDIV_MASK                        0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL6_FINETUNINGEN_SHIFT                 27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL6_FINETUNINGEN_MASK                  0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL6_VREFTC_SHIFT                       28           /**< Shift value for VREFTC */
#define _DEVINFO_AUXHFRCOCAL6_VREFTC_MASK                        0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO AUXHFRCOCAL7 */
#define _DEVINFO_AUXHFRCOCAL7_MASK                               0xFFFF3F7FUL /**< Mask for DEVINFO_AUXHFRCOCAL7 */
#define _DEVINFO_AUXHFRCOCAL7_TUNING_SHIFT                       0            /**< Shift value for TUNING */
#define _DEVINFO_AUXHFRCOCAL7_TUNING_MASK                        0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_AUXHFRCOCAL7_FINETUNING_SHIFT                   8            /**< Shift value for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL7_FINETUNING_MASK                    0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL7_FREQRANGE_SHIFT                    16           /**< Shift value for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL7_FREQRANGE_MASK                     0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL7_CMPBIAS_SHIFT                      21           /**< Shift value for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL7_CMPBIAS_MASK                       0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL7_LDOHP_SHIFT                        24           /**< Shift value for LDOHP */
#define _DEVINFO_AUXHFRCOCAL7_LDOHP_MASK                         0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_AUXHFRCOCAL7_CLKDIV_SHIFT                       25           /**< Shift value for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL7_CLKDIV_MASK                        0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL7_FINETUNINGEN_SHIFT                 27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL7_FINETUNINGEN_MASK                  0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL7_VREFTC_SHIFT                       28           /**< Shift value for VREFTC */
#define _DEVINFO_AUXHFRCOCAL7_VREFTC_MASK                        0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO AUXHFRCOCAL8 */
#define _DEVINFO_AUXHFRCOCAL8_MASK                               0xFFFF3F7FUL /**< Mask for DEVINFO_AUXHFRCOCAL8 */
#define _DEVINFO_AUXHFRCOCAL8_TUNING_SHIFT                       0            /**< Shift value for TUNING */
#define _DEVINFO_AUXHFRCOCAL8_TUNING_MASK                        0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_AUXHFRCOCAL8_FINETUNING_SHIFT                   8            /**< Shift value for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL8_FINETUNING_MASK                    0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL8_FREQRANGE_SHIFT                    16           /**< Shift value for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL8_FREQRANGE_MASK                     0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL8_CMPBIAS_SHIFT                      21           /**< Shift value for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL8_CMPBIAS_MASK                       0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL8_LDOHP_SHIFT                        24           /**< Shift value for LDOHP */
#define _DEVINFO_AUXHFRCOCAL8_LDOHP_MASK                         0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_AUXHFRCOCAL8_CLKDIV_SHIFT                       25           /**< Shift value for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL8_CLKDIV_MASK                        0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL8_FINETUNINGEN_SHIFT                 27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL8_FINETUNINGEN_MASK                  0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL8_VREFTC_SHIFT                       28           /**< Shift value for VREFTC */
#define _DEVINFO_AUXHFRCOCAL8_VREFTC_MASK                        0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO AUXHFRCOCAL10 */
#define _DEVINFO_AUXHFRCOCAL10_MASK                              0xFFFF3F7FUL /**< Mask for DEVINFO_AUXHFRCOCAL10 */
#define _DEVINFO_AUXHFRCOCAL10_TUNING_SHIFT                      0            /**< Shift value for TUNING */
#define _DEVINFO_AUXHFRCOCAL10_TUNING_MASK                       0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_AUXHFRCOCAL10_FINETUNING_SHIFT                  8            /**< Shift value for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL10_FINETUNING_MASK                   0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL10_FREQRANGE_SHIFT                   16           /**< Shift value for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL10_FREQRANGE_MASK                    0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL10_CMPBIAS_SHIFT                     21           /**< Shift value for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL10_CMPBIAS_MASK                      0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL10_LDOHP_SHIFT                       24           /**< Shift value for LDOHP */
#define _DEVINFO_AUXHFRCOCAL10_LDOHP_MASK                        0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_AUXHFRCOCAL10_CLKDIV_SHIFT                      25           /**< Shift value for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL10_CLKDIV_MASK                       0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL10_FINETUNINGEN_SHIFT                27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL10_FINETUNINGEN_MASK                 0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL10_VREFTC_SHIFT                      28           /**< Shift value for VREFTC */
#define _DEVINFO_AUXHFRCOCAL10_VREFTC_MASK                       0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO AUXHFRCOCAL11 */
#define _DEVINFO_AUXHFRCOCAL11_MASK                              0xFFFF3F7FUL /**< Mask for DEVINFO_AUXHFRCOCAL11 */
#define _DEVINFO_AUXHFRCOCAL11_TUNING_SHIFT                      0            /**< Shift value for TUNING */
#define _DEVINFO_AUXHFRCOCAL11_TUNING_MASK                       0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_AUXHFRCOCAL11_FINETUNING_SHIFT                  8            /**< Shift value for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL11_FINETUNING_MASK                   0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL11_FREQRANGE_SHIFT                   16           /**< Shift value for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL11_FREQRANGE_MASK                    0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL11_CMPBIAS_SHIFT                     21           /**< Shift value for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL11_CMPBIAS_MASK                      0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL11_LDOHP_SHIFT                       24           /**< Shift value for LDOHP */
#define _DEVINFO_AUXHFRCOCAL11_LDOHP_MASK                        0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_AUXHFRCOCAL11_CLKDIV_SHIFT                      25           /**< Shift value for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL11_CLKDIV_MASK                       0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL11_FINETUNINGEN_SHIFT                27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL11_FINETUNINGEN_MASK                 0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL11_VREFTC_SHIFT                      28           /**< Shift value for VREFTC */
#define _DEVINFO_AUXHFRCOCAL11_VREFTC_MASK                       0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO AUXHFRCOCAL12 */
#define _DEVINFO_AUXHFRCOCAL12_MASK                              0xFFFF3F7FUL /**< Mask for DEVINFO_AUXHFRCOCAL12 */
#define _DEVINFO_AUXHFRCOCAL12_TUNING_SHIFT                      0            /**< Shift value for TUNING */
#define _DEVINFO_AUXHFRCOCAL12_TUNING_MASK                       0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_AUXHFRCOCAL12_FINETUNING_SHIFT                  8            /**< Shift value for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL12_FINETUNING_MASK                   0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL12_FREQRANGE_SHIFT                   16           /**< Shift value for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL12_FREQRANGE_MASK                    0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL12_CMPBIAS_SHIFT                     21           /**< Shift value for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL12_CMPBIAS_MASK                      0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL12_LDOHP_SHIFT                       24           /**< Shift value for LDOHP */
#define _DEVINFO_AUXHFRCOCAL12_LDOHP_MASK                        0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_AUXHFRCOCAL12_CLKDIV_SHIFT                      25           /**< Shift value for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL12_CLKDIV_MASK                       0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL12_FINETUNINGEN_SHIFT                27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL12_FINETUNINGEN_MASK                 0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL12_VREFTC_SHIFT                      28           /**< Shift value for VREFTC */
#define _DEVINFO_AUXHFRCOCAL12_VREFTC_MASK                       0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO AUXHFRCOCAL13 */
#define _DEVINFO_AUXHFRCOCAL13_MASK                              0xFFFF3F7FUL /**< Mask for DEVINFO_AUXHFRCOCAL13 */
#define _DEVINFO_AUXHFRCOCAL13_TUNING_SHIFT                      0            /**< Shift value for TUNING */
#define _DEVINFO_AUXHFRCOCAL13_TUNING_MASK                       0x7FUL       /**< Bit mask for TUNING */
#define _DEVINFO_AUXHFRCOCAL13_FINETUNING_SHIFT                  8            /**< Shift value for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL13_FINETUNING_MASK                   0x3F00UL     /**< Bit mask for FINETUNING */
#define _DEVINFO_AUXHFRCOCAL13_FREQRANGE_SHIFT                   16           /**< Shift value for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL13_FREQRANGE_MASK                    0x1F0000UL   /**< Bit mask for FREQRANGE */
#define _DEVINFO_AUXHFRCOCAL13_CMPBIAS_SHIFT                     21           /**< Shift value for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL13_CMPBIAS_MASK                      0xE00000UL   /**< Bit mask for CMPBIAS */
#define _DEVINFO_AUXHFRCOCAL13_LDOHP_SHIFT                       24           /**< Shift value for LDOHP */
#define _DEVINFO_AUXHFRCOCAL13_LDOHP_MASK                        0x1000000UL  /**< Bit mask for LDOHP */
#define _DEVINFO_AUXHFRCOCAL13_CLKDIV_SHIFT                      25           /**< Shift value for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL13_CLKDIV_MASK                       0x6000000UL  /**< Bit mask for CLKDIV */
#define _DEVINFO_AUXHFRCOCAL13_FINETUNINGEN_SHIFT                27           /**< Shift value for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL13_FINETUNINGEN_MASK                 0x8000000UL  /**< Bit mask for FINETUNINGEN */
#define _DEVINFO_AUXHFRCOCAL13_VREFTC_SHIFT                      28           /**< Shift value for VREFTC */
#define _DEVINFO_AUXHFRCOCAL13_VREFTC_MASK                       0xF0000000UL /**< Bit mask for VREFTC */

/* Bit fields for DEVINFO VMONCAL0 */
#define _DEVINFO_VMONCAL0_MASK                                   0xFFFFFFFFUL /**< Mask for DEVINFO_VMONCAL0 */
#define _DEVINFO_VMONCAL0_AVDD1V86THRESFINE_SHIFT                0            /**< Shift value for AVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL0_AVDD1V86THRESFINE_MASK                 0xFUL        /**< Bit mask for AVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL0_AVDD1V86THRESCOARSE_SHIFT              4            /**< Shift value for AVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL0_AVDD1V86THRESCOARSE_MASK               0xF0UL       /**< Bit mask for AVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL0_AVDD2V98THRESFINE_SHIFT                8            /**< Shift value for AVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL0_AVDD2V98THRESFINE_MASK                 0xF00UL      /**< Bit mask for AVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL0_AVDD2V98THRESCOARSE_SHIFT              12           /**< Shift value for AVDD2V98THRESCOARSE */
#define _DEVINFO_VMONCAL0_AVDD2V98THRESCOARSE_MASK               0xF000UL     /**< Bit mask for AVDD2V98THRESCOARSE */
#define _DEVINFO_VMONCAL0_ALTAVDD1V86THRESFINE_SHIFT             16           /**< Shift value for ALTAVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL0_ALTAVDD1V86THRESFINE_MASK              0xF0000UL    /**< Bit mask for ALTAVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL0_ALTAVDD1V86THRESCOARSE_SHIFT           20           /**< Shift value for ALTAVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL0_ALTAVDD1V86THRESCOARSE_MASK            0xF00000UL   /**< Bit mask for ALTAVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL0_ALTAVDD2V98THRESFINE_SHIFT             24           /**< Shift value for ALTAVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL0_ALTAVDD2V98THRESFINE_MASK              0xF000000UL  /**< Bit mask for ALTAVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL0_ALTAVDD2V98THRESCOARSE_SHIFT           28           /**< Shift value for ALTAVDD2V98THRESCOARSE */
#define _DEVINFO_VMONCAL0_ALTAVDD2V98THRESCOARSE_MASK            0xF0000000UL /**< Bit mask for ALTAVDD2V98THRESCOARSE */

/* Bit fields for DEVINFO VMONCAL1 */
#define _DEVINFO_VMONCAL1_MASK                                   0xFFFFFFFFUL /**< Mask for DEVINFO_VMONCAL1 */
#define _DEVINFO_VMONCAL1_DVDD1V86THRESFINE_SHIFT                0            /**< Shift value for DVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL1_DVDD1V86THRESFINE_MASK                 0xFUL        /**< Bit mask for DVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL1_DVDD1V86THRESCOARSE_SHIFT              4            /**< Shift value for DVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL1_DVDD1V86THRESCOARSE_MASK               0xF0UL       /**< Bit mask for DVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL1_DVDD2V98THRESFINE_SHIFT                8            /**< Shift value for DVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL1_DVDD2V98THRESFINE_MASK                 0xF00UL      /**< Bit mask for DVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL1_DVDD2V98THRESCOARSE_SHIFT              12           /**< Shift value for DVDD2V98THRESCOARSE */
#define _DEVINFO_VMONCAL1_DVDD2V98THRESCOARSE_MASK               0xF000UL     /**< Bit mask for DVDD2V98THRESCOARSE */
#define _DEVINFO_VMONCAL1_IO01V86THRESFINE_SHIFT                 16           /**< Shift value for IO01V86THRESFINE */
#define _DEVINFO_VMONCAL1_IO01V86THRESFINE_MASK                  0xF0000UL    /**< Bit mask for IO01V86THRESFINE */
#define _DEVINFO_VMONCAL1_IO01V86THRESCOARSE_SHIFT               20           /**< Shift value for IO01V86THRESCOARSE */
#define _DEVINFO_VMONCAL1_IO01V86THRESCOARSE_MASK                0xF00000UL   /**< Bit mask for IO01V86THRESCOARSE */
#define _DEVINFO_VMONCAL1_IO02V98THRESFINE_SHIFT                 24           /**< Shift value for IO02V98THRESFINE */
#define _DEVINFO_VMONCAL1_IO02V98THRESFINE_MASK                  0xF000000UL  /**< Bit mask for IO02V98THRESFINE */
#define _DEVINFO_VMONCAL1_IO02V98THRESCOARSE_SHIFT               28           /**< Shift value for IO02V98THRESCOARSE */
#define _DEVINFO_VMONCAL1_IO02V98THRESCOARSE_MASK                0xF0000000UL /**< Bit mask for IO02V98THRESCOARSE */

/* Bit fields for DEVINFO VMONCAL2 */
#define _DEVINFO_VMONCAL2_MASK                                   0xFFFFFFFFUL /**< Mask for DEVINFO_VMONCAL2 */
#define _DEVINFO_VMONCAL2_BUVDD1V86THRESFINE_SHIFT               0            /**< Shift value for BUVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL2_BUVDD1V86THRESFINE_MASK                0xFUL        /**< Bit mask for BUVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL2_BUVDD1V86THRESCOARSE_SHIFT             4            /**< Shift value for BUVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL2_BUVDD1V86THRESCOARSE_MASK              0xF0UL       /**< Bit mask for BUVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL2_BUVDD2V98THRESFINE_SHIFT               8            /**< Shift value for BUVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL2_BUVDD2V98THRESFINE_MASK                0xF00UL      /**< Bit mask for BUVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL2_BUVDD2V98THRESCOARSE_SHIFT             12           /**< Shift value for BUVDD2V98THRESCOARSE */
#define _DEVINFO_VMONCAL2_BUVDD2V98THRESCOARSE_MASK              0xF000UL     /**< Bit mask for BUVDD2V98THRESCOARSE */
#define _DEVINFO_VMONCAL2_FVDD1V86THRESFINE_SHIFT                16           /**< Shift value for FVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL2_FVDD1V86THRESFINE_MASK                 0xF0000UL    /**< Bit mask for FVDD1V86THRESFINE */
#define _DEVINFO_VMONCAL2_FVDD1V86THRESCOARSE_SHIFT              20           /**< Shift value for FVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL2_FVDD1V86THRESCOARSE_MASK               0xF00000UL   /**< Bit mask for FVDD1V86THRESCOARSE */
#define _DEVINFO_VMONCAL2_FVDD2V98THRESFINE_SHIFT                24           /**< Shift value for FVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL2_FVDD2V98THRESFINE_MASK                 0xF000000UL  /**< Bit mask for FVDD2V98THRESFINE */
#define _DEVINFO_VMONCAL2_FVDD2V98THRESCOARSE_SHIFT              28           /**< Shift value for FVDD2V98THRESCOARSE */
#define _DEVINFO_VMONCAL2_FVDD2V98THRESCOARSE_MASK               0xF0000000UL /**< Bit mask for FVDD2V98THRESCOARSE */

/* Bit fields for DEVINFO DCDCLNVCTRL0 */
#define _DEVINFO_DCDCLNVCTRL0_MASK                               0xFFFFFFFFUL /**< Mask for DEVINFO_DCDCLNVCTRL0 */
#define _DEVINFO_DCDCLNVCTRL0_1V2LNATT0_SHIFT                    0            /**< Shift value for 1V2LNATT0 */
#define _DEVINFO_DCDCLNVCTRL0_1V2LNATT0_MASK                     0xFFUL       /**< Bit mask for 1V2LNATT0 */
#define _DEVINFO_DCDCLNVCTRL0_1V8LNATT0_SHIFT                    8            /**< Shift value for 1V8LNATT0 */
#define _DEVINFO_DCDCLNVCTRL0_1V8LNATT0_MASK                     0xFF00UL     /**< Bit mask for 1V8LNATT0 */
#define _DEVINFO_DCDCLNVCTRL0_1V8LNATT1_SHIFT                    16           /**< Shift value for 1V8LNATT1 */
#define _DEVINFO_DCDCLNVCTRL0_1V8LNATT1_MASK                     0xFF0000UL   /**< Bit mask for 1V8LNATT1 */
#define _DEVINFO_DCDCLNVCTRL0_3V0LNATT1_SHIFT                    24           /**< Shift value for 3V0LNATT1 */
#define _DEVINFO_DCDCLNVCTRL0_3V0LNATT1_MASK                     0xFF000000UL /**< Bit mask for 3V0LNATT1 */

/* Bit fields for DEVINFO DCDCLPVCTRL0 */
#define _DEVINFO_DCDCLPVCTRL0_MASK                               0xFFFFFFFFUL /**< Mask for DEVINFO_DCDCLPVCTRL0 */
#define _DEVINFO_DCDCLPVCTRL0_1V2LPATT0LPCMPBIAS0_SHIFT          0            /**< Shift value for 1V2LPATT0LPCMPBIAS0 */
#define _DEVINFO_DCDCLPVCTRL0_1V2LPATT0LPCMPBIAS0_MASK           0xFFUL       /**< Bit mask for 1V2LPATT0LPCMPBIAS0 */
#define _DEVINFO_DCDCLPVCTRL0_1V8LPATT0LPCMPBIAS0_SHIFT          8            /**< Shift value for 1V8LPATT0LPCMPBIAS0 */
#define _DEVINFO_DCDCLPVCTRL0_1V8LPATT0LPCMPBIAS0_MASK           0xFF00UL     /**< Bit mask for 1V8LPATT0LPCMPBIAS0 */
#define _DEVINFO_DCDCLPVCTRL0_1V2LPATT0LPCMPBIAS1_SHIFT          16           /**< Shift value for 1V2LPATT0LPCMPBIAS1 */
#define _DEVINFO_DCDCLPVCTRL0_1V2LPATT0LPCMPBIAS1_MASK           0xFF0000UL   /**< Bit mask for 1V2LPATT0LPCMPBIAS1 */
#define _DEVINFO_DCDCLPVCTRL0_1V8LPATT0LPCMPBIAS1_SHIFT          24           /**< Shift value for 1V8LPATT0LPCMPBIAS1 */
#define _DEVINFO_DCDCLPVCTRL0_1V8LPATT0LPCMPBIAS1_MASK           0xFF000000UL /**< Bit mask for 1V8LPATT0LPCMPBIAS1 */

/* Bit fields for DEVINFO DCDCLPVCTRL1 */
#define _DEVINFO_DCDCLPVCTRL1_MASK                               0xFFFFFFFFUL /**< Mask for DEVINFO_DCDCLPVCTRL1 */
#define _DEVINFO_DCDCLPVCTRL1_1V2LPATT0LPCMPBIAS2_SHIFT          0            /**< Shift value for 1V2LPATT0LPCMPBIAS2 */
#define _DEVINFO_DCDCLPVCTRL1_1V2LPATT0LPCMPBIAS2_MASK           0xFFUL       /**< Bit mask for 1V2LPATT0LPCMPBIAS2 */
#define _DEVINFO_DCDCLPVCTRL1_1V8LPATT0LPCMPBIAS2_SHIFT          8            /**< Shift value for 1V8LPATT0LPCMPBIAS2 */
#define _DEVINFO_DCDCLPVCTRL1_1V8LPATT0LPCMPBIAS2_MASK           0xFF00UL     /**< Bit mask for 1V8LPATT0LPCMPBIAS2 */
#define _DEVINFO_DCDCLPVCTRL1_1V2LPATT0LPCMPBIAS3_SHIFT          16           /**< Shift value for 1V2LPATT0LPCMPBIAS3 */
#define _DEVINFO_DCDCLPVCTRL1_1V2LPATT0LPCMPBIAS3_MASK           0xFF0000UL   /**< Bit mask for 1V2LPATT0LPCMPBIAS3 */
#define _DEVINFO_DCDCLPVCTRL1_1V8LPATT0LPCMPBIAS3_SHIFT          24           /**< Shift value for 1V8LPATT0LPCMPBIAS3 */
#define _DEVINFO_DCDCLPVCTRL1_1V8LPATT0LPCMPBIAS3_MASK           0xFF000000UL /**< Bit mask for 1V8LPATT0LPCMPBIAS3 */

/* Bit fields for DEVINFO DCDCLPVCTRL2 */
#define _DEVINFO_DCDCLPVCTRL2_MASK                               0xFFFFFFFFUL /**< Mask for DEVINFO_DCDCLPVCTRL2 */
#define _DEVINFO_DCDCLPVCTRL2_1V8LPATT1LPCMPBIAS0_SHIFT          0            /**< Shift value for 1V8LPATT1LPCMPBIAS0 */
#define _DEVINFO_DCDCLPVCTRL2_1V8LPATT1LPCMPBIAS0_MASK           0xFFUL       /**< Bit mask for 1V8LPATT1LPCMPBIAS0 */
#define _DEVINFO_DCDCLPVCTRL2_3V0LPATT1LPCMPBIAS0_SHIFT          8            /**< Shift value for 3V0LPATT1LPCMPBIAS0 */
#define _DEVINFO_DCDCLPVCTRL2_3V0LPATT1LPCMPBIAS0_MASK           0xFF00UL     /**< Bit mask for 3V0LPATT1LPCMPBIAS0 */
#define _DEVINFO_DCDCLPVCTRL2_1V8LPATT1LPCMPBIAS1_SHIFT          16           /**< Shift value for 1V8LPATT1LPCMPBIAS1 */
#define _DEVINFO_DCDCLPVCTRL2_1V8LPATT1LPCMPBIAS1_MASK           0xFF0000UL   /**< Bit mask for 1V8LPATT1LPCMPBIAS1 */
#define _DEVINFO_DCDCLPVCTRL2_3V0LPATT1LPCMPBIAS1_SHIFT          24           /**< Shift value for 3V0LPATT1LPCMPBIAS1 */
#define _DEVINFO_DCDCLPVCTRL2_3V0LPATT1LPCMPBIAS1_MASK           0xFF000000UL /**< Bit mask for 3V0LPATT1LPCMPBIAS1 */

/* Bit fields for DEVINFO DCDCLPVCTRL3 */
#define _DEVINFO_DCDCLPVCTRL3_MASK                               0xFFFFFFFFUL /**< Mask for DEVINFO_DCDCLPVCTRL3 */
#define _DEVINFO_DCDCLPVCTRL3_1V8LPATT1LPCMPBIAS2_SHIFT          0            /**< Shift value for 1V8LPATT1LPCMPBIAS2 */
#define _DEVINFO_DCDCLPVCTRL3_1V8LPATT1LPCMPBIAS2_MASK           0xFFUL       /**< Bit mask for 1V8LPATT1LPCMPBIAS2 */
#define _DEVINFO_DCDCLPVCTRL3_3V0LPATT1LPCMPBIAS2_SHIFT          8            /**< Shift value for 3V0LPATT1LPCMPBIAS2 */
#define _DEVINFO_DCDCLPVCTRL3_3V0LPATT1LPCMPBIAS2_MASK           0xFF00UL     /**< Bit mask for 3V0LPATT1LPCMPBIAS2 */
#define _DEVINFO_DCDCLPVCTRL3_1V8LPATT1LPCMPBIAS3_SHIFT          16           /**< Shift value for 1V8LPATT1LPCMPBIAS3 */
#define _DEVINFO_DCDCLPVCTRL3_1V8LPATT1LPCMPBIAS3_MASK           0xFF0000UL   /**< Bit mask for 1V8LPATT1LPCMPBIAS3 */
#define _DEVINFO_DCDCLPVCTRL3_3V0LPATT1LPCMPBIAS3_SHIFT          24           /**< Shift value for 3V0LPATT1LPCMPBIAS3 */
#define _DEVINFO_DCDCLPVCTRL3_3V0LPATT1LPCMPBIAS3_MASK           0xFF000000UL /**< Bit mask for 3V0LPATT1LPCMPBIAS3 */

/* Bit fields for DEVINFO DCDCLPCMPHYSSEL0 */
#define _DEVINFO_DCDCLPCMPHYSSEL0_MASK                           0x0000FFFFUL /**< Mask for DEVINFO_DCDCLPCMPHYSSEL0 */
#define _DEVINFO_DCDCLPCMPHYSSEL0_LPCMPHYSSELLPATT0_SHIFT        0            /**< Shift value for LPCMPHYSSELLPATT0 */
#define _DEVINFO_DCDCLPCMPHYSSEL0_LPCMPHYSSELLPATT0_MASK         0xFFUL       /**< Bit mask for LPCMPHYSSELLPATT0 */
#define _DEVINFO_DCDCLPCMPHYSSEL0_LPCMPHYSSELLPATT1_SHIFT        8            /**< Shift value for LPCMPHYSSELLPATT1 */
#define _DEVINFO_DCDCLPCMPHYSSEL0_LPCMPHYSSELLPATT1_MASK         0xFF00UL     /**< Bit mask for LPCMPHYSSELLPATT1 */

/* Bit fields for DEVINFO DCDCLPCMPHYSSEL1 */
#define _DEVINFO_DCDCLPCMPHYSSEL1_MASK                           0xFFFFFFFFUL /**< Mask for DEVINFO_DCDCLPCMPHYSSEL1 */
#define _DEVINFO_DCDCLPCMPHYSSEL1_LPCMPHYSSELLPCMPBIAS0_SHIFT    0            /**< Shift value for LPCMPHYSSELLPCMPBIAS0 */
#define _DEVINFO_DCDCLPCMPHYSSEL1_LPCMPHYSSELLPCMPBIAS0_MASK     0xFFUL       /**< Bit mask for LPCMPHYSSELLPCMPBIAS0 */
#define _DEVINFO_DCDCLPCMPHYSSEL1_LPCMPHYSSELLPCMPBIAS1_SHIFT    8            /**< Shift value for LPCMPHYSSELLPCMPBIAS1 */
#define _DEVINFO_DCDCLPCMPHYSSEL1_LPCMPHYSSELLPCMPBIAS1_MASK     0xFF00UL     /**< Bit mask for LPCMPHYSSELLPCMPBIAS1 */
#define _DEVINFO_DCDCLPCMPHYSSEL1_LPCMPHYSSELLPCMPBIAS2_SHIFT    16           /**< Shift value for LPCMPHYSSELLPCMPBIAS2 */
#define _DEVINFO_DCDCLPCMPHYSSEL1_LPCMPHYSSELLPCMPBIAS2_MASK     0xFF0000UL   /**< Bit mask for LPCMPHYSSELLPCMPBIAS2 */
#define _DEVINFO_DCDCLPCMPHYSSEL1_LPCMPHYSSELLPCMPBIAS3_SHIFT    24           /**< Shift value for LPCMPHYSSELLPCMPBIAS3 */
#define _DEVINFO_DCDCLPCMPHYSSEL1_LPCMPHYSSELLPCMPBIAS3_MASK     0xFF000000UL /**< Bit mask for LPCMPHYSSELLPCMPBIAS3 */

/* Bit fields for DEVINFO VDAC0MAINCAL */
#define _DEVINFO_VDAC0MAINCAL_MASK                               0x3FFFFFFFUL /**< Mask for DEVINFO_VDAC0MAINCAL */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIM1V25LN_SHIFT            0            /**< Shift value for GAINERRTRIM1V25LN */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIM1V25LN_MASK             0x3FUL       /**< Bit mask for GAINERRTRIM1V25LN */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIM2V5LN_SHIFT             6            /**< Shift value for GAINERRTRIM2V5LN */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIM2V5LN_MASK              0xFC0UL      /**< Bit mask for GAINERRTRIM2V5LN */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIM1V25_SHIFT              12           /**< Shift value for GAINERRTRIM1V25 */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIM1V25_MASK               0x3F000UL    /**< Bit mask for GAINERRTRIM1V25 */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIM2V5_SHIFT               18           /**< Shift value for GAINERRTRIM2V5 */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIM2V5_MASK                0xFC0000UL   /**< Bit mask for GAINERRTRIM2V5 */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIMVDDANAEXTPIN_SHIFT      24           /**< Shift value for GAINERRTRIMVDDANAEXTPIN */
#define _DEVINFO_VDAC0MAINCAL_GAINERRTRIMVDDANAEXTPIN_MASK       0x3F000000UL /**< Bit mask for GAINERRTRIMVDDANAEXTPIN */

/* Bit fields for DEVINFO VDAC0ALTCAL */
#define _DEVINFO_VDAC0ALTCAL_MASK                                0x3FFFFFFFUL /**< Mask for DEVINFO_VDAC0ALTCAL */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIM1V25LNALT_SHIFT          0            /**< Shift value for GAINERRTRIM1V25LNALT */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIM1V25LNALT_MASK           0x3FUL       /**< Bit mask for GAINERRTRIM1V25LNALT */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIM2V5LNALT_SHIFT           6            /**< Shift value for GAINERRTRIM2V5LNALT */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIM2V5LNALT_MASK            0xFC0UL      /**< Bit mask for GAINERRTRIM2V5LNALT */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIM1V25ALT_SHIFT            12           /**< Shift value for GAINERRTRIM1V25ALT */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIM1V25ALT_MASK             0x3F000UL    /**< Bit mask for GAINERRTRIM1V25ALT */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIM2V5ALT_SHIFT             18           /**< Shift value for GAINERRTRIM2V5ALT */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIM2V5ALT_MASK              0xFC0000UL   /**< Bit mask for GAINERRTRIM2V5ALT */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIMVDDANAEXTPINALT_SHIFT    24           /**< Shift value for GAINERRTRIMVDDANAEXTPINALT */
#define _DEVINFO_VDAC0ALTCAL_GAINERRTRIMVDDANAEXTPINALT_MASK     0x3F000000UL /**< Bit mask for GAINERRTRIMVDDANAEXTPINALT */

/* Bit fields for DEVINFO VDAC0CH1CAL */
#define _DEVINFO_VDAC0CH1CAL_MASK                                0x00000FF7UL /**< Mask for DEVINFO_VDAC0CH1CAL */
#define _DEVINFO_VDAC0CH1CAL_OFFSETTRIM_SHIFT                    0            /**< Shift value for OFFSETTRIM */
#define _DEVINFO_VDAC0CH1CAL_OFFSETTRIM_MASK                     0x7UL        /**< Bit mask for OFFSETTRIM */
#define _DEVINFO_VDAC0CH1CAL_GAINERRTRIMCH1A_SHIFT               4            /**< Shift value for GAINERRTRIMCH1A */
#define _DEVINFO_VDAC0CH1CAL_GAINERRTRIMCH1A_MASK                0xF0UL       /**< Bit mask for GAINERRTRIMCH1A */
#define _DEVINFO_VDAC0CH1CAL_GAINERRTRIMCH1B_SHIFT               8            /**< Shift value for GAINERRTRIMCH1B */
#define _DEVINFO_VDAC0CH1CAL_GAINERRTRIMCH1B_MASK                0xF00UL      /**< Bit mask for GAINERRTRIMCH1B */

/* Bit fields for DEVINFO OPA0CAL0 */
#define _DEVINFO_OPA0CAL0_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA0CAL0 */
#define _DEVINFO_OPA0CAL0_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA0CAL0_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA0CAL0_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA0CAL0_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA0CAL0_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA0CAL0_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA0CAL0_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA0CAL0_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA0CAL0_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA0CAL0_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA0CAL0_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA0CAL0_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA0CAL0_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA0CAL0_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA0CAL1 */
#define _DEVINFO_OPA0CAL1_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA0CAL1 */
#define _DEVINFO_OPA0CAL1_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA0CAL1_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA0CAL1_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA0CAL1_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA0CAL1_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA0CAL1_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA0CAL1_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA0CAL1_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA0CAL1_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA0CAL1_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA0CAL1_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA0CAL1_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA0CAL1_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA0CAL1_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA0CAL2 */
#define _DEVINFO_OPA0CAL2_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA0CAL2 */
#define _DEVINFO_OPA0CAL2_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA0CAL2_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA0CAL2_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA0CAL2_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA0CAL2_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA0CAL2_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA0CAL2_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA0CAL2_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA0CAL2_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA0CAL2_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA0CAL2_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA0CAL2_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA0CAL2_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA0CAL2_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA0CAL3 */
#define _DEVINFO_OPA0CAL3_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA0CAL3 */
#define _DEVINFO_OPA0CAL3_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA0CAL3_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA0CAL3_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA0CAL3_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA0CAL3_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA0CAL3_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA0CAL3_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA0CAL3_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA0CAL3_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA0CAL3_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA0CAL3_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA0CAL3_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA0CAL3_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA0CAL3_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA0CAL4 */
#define _DEVINFO_OPA0CAL4_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA0CAL4 */
#define _DEVINFO_OPA0CAL4_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA0CAL4_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA0CAL4_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA0CAL4_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA0CAL4_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA0CAL4_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA0CAL4_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA0CAL4_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA0CAL4_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA0CAL4_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA0CAL4_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA0CAL4_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA0CAL4_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA0CAL4_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA0CAL5 */
#define _DEVINFO_OPA0CAL5_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA0CAL5 */
#define _DEVINFO_OPA0CAL5_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA0CAL5_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA0CAL5_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA0CAL5_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA0CAL5_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA0CAL5_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA0CAL5_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA0CAL5_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA0CAL5_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA0CAL5_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA0CAL5_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA0CAL5_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA0CAL5_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA0CAL5_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA0CAL6 */
#define _DEVINFO_OPA0CAL6_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA0CAL6 */
#define _DEVINFO_OPA0CAL6_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA0CAL6_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA0CAL6_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA0CAL6_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA0CAL6_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA0CAL6_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA0CAL6_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA0CAL6_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA0CAL6_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA0CAL6_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA0CAL6_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA0CAL6_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA0CAL6_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA0CAL6_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA0CAL7 */
#define _DEVINFO_OPA0CAL7_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA0CAL7 */
#define _DEVINFO_OPA0CAL7_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA0CAL7_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA0CAL7_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA0CAL7_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA0CAL7_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA0CAL7_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA0CAL7_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA0CAL7_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA0CAL7_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA0CAL7_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA0CAL7_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA0CAL7_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA0CAL7_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA0CAL7_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA1CAL0 */
#define _DEVINFO_OPA1CAL0_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA1CAL0 */
#define _DEVINFO_OPA1CAL0_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA1CAL0_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA1CAL0_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA1CAL0_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA1CAL0_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA1CAL0_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA1CAL0_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA1CAL0_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA1CAL0_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA1CAL0_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA1CAL0_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA1CAL0_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA1CAL0_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA1CAL0_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA1CAL1 */
#define _DEVINFO_OPA1CAL1_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA1CAL1 */
#define _DEVINFO_OPA1CAL1_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA1CAL1_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA1CAL1_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA1CAL1_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA1CAL1_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA1CAL1_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA1CAL1_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA1CAL1_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA1CAL1_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA1CAL1_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA1CAL1_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA1CAL1_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA1CAL1_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA1CAL1_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA1CAL2 */
#define _DEVINFO_OPA1CAL2_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA1CAL2 */
#define _DEVINFO_OPA1CAL2_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA1CAL2_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA1CAL2_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA1CAL2_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA1CAL2_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA1CAL2_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA1CAL2_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA1CAL2_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA1CAL2_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA1CAL2_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA1CAL2_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA1CAL2_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA1CAL2_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA1CAL2_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA1CAL3 */
#define _DEVINFO_OPA1CAL3_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA1CAL3 */
#define _DEVINFO_OPA1CAL3_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA1CAL3_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA1CAL3_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA1CAL3_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA1CAL3_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA1CAL3_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA1CAL3_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA1CAL3_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA1CAL3_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA1CAL3_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA1CAL3_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA1CAL3_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA1CAL3_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA1CAL3_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA1CAL4 */
#define _DEVINFO_OPA1CAL4_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA1CAL4 */
#define _DEVINFO_OPA1CAL4_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA1CAL4_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA1CAL4_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA1CAL4_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA1CAL4_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA1CAL4_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA1CAL4_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA1CAL4_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA1CAL4_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA1CAL4_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA1CAL4_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA1CAL4_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA1CAL4_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA1CAL4_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA1CAL5 */
#define _DEVINFO_OPA1CAL5_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA1CAL5 */
#define _DEVINFO_OPA1CAL5_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA1CAL5_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA1CAL5_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA1CAL5_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA1CAL5_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA1CAL5_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA1CAL5_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA1CAL5_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA1CAL5_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA1CAL5_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA1CAL5_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA1CAL5_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA1CAL5_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA1CAL5_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA1CAL6 */
#define _DEVINFO_OPA1CAL6_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA1CAL6 */
#define _DEVINFO_OPA1CAL6_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA1CAL6_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA1CAL6_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA1CAL6_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA1CAL6_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA1CAL6_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA1CAL6_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA1CAL6_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA1CAL6_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA1CAL6_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA1CAL6_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA1CAL6_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA1CAL6_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA1CAL6_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA1CAL7 */
#define _DEVINFO_OPA1CAL7_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA1CAL7 */
#define _DEVINFO_OPA1CAL7_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA1CAL7_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA1CAL7_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA1CAL7_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA1CAL7_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA1CAL7_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA1CAL7_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA1CAL7_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA1CAL7_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA1CAL7_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA1CAL7_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA1CAL7_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA1CAL7_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA1CAL7_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA2CAL0 */
#define _DEVINFO_OPA2CAL0_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA2CAL0 */
#define _DEVINFO_OPA2CAL0_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA2CAL0_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA2CAL0_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA2CAL0_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA2CAL0_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA2CAL0_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA2CAL0_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA2CAL0_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA2CAL0_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA2CAL0_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA2CAL0_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA2CAL0_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA2CAL0_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA2CAL0_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA2CAL1 */
#define _DEVINFO_OPA2CAL1_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA2CAL1 */
#define _DEVINFO_OPA2CAL1_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA2CAL1_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA2CAL1_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA2CAL1_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA2CAL1_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA2CAL1_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA2CAL1_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA2CAL1_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA2CAL1_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA2CAL1_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA2CAL1_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA2CAL1_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA2CAL1_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA2CAL1_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA2CAL2 */
#define _DEVINFO_OPA2CAL2_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA2CAL2 */
#define _DEVINFO_OPA2CAL2_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA2CAL2_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA2CAL2_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA2CAL2_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA2CAL2_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA2CAL2_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA2CAL2_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA2CAL2_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA2CAL2_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA2CAL2_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA2CAL2_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA2CAL2_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA2CAL2_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA2CAL2_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA2CAL3 */
#define _DEVINFO_OPA2CAL3_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA2CAL3 */
#define _DEVINFO_OPA2CAL3_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA2CAL3_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA2CAL3_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA2CAL3_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA2CAL3_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA2CAL3_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA2CAL3_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA2CAL3_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA2CAL3_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA2CAL3_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA2CAL3_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA2CAL3_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA2CAL3_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA2CAL3_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA2CAL4 */
#define _DEVINFO_OPA2CAL4_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA2CAL4 */
#define _DEVINFO_OPA2CAL4_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA2CAL4_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA2CAL4_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA2CAL4_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA2CAL4_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA2CAL4_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA2CAL4_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA2CAL4_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA2CAL4_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA2CAL4_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA2CAL4_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA2CAL4_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA2CAL4_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA2CAL4_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA2CAL5 */
#define _DEVINFO_OPA2CAL5_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA2CAL5 */
#define _DEVINFO_OPA2CAL5_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA2CAL5_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA2CAL5_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA2CAL5_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA2CAL5_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA2CAL5_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA2CAL5_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA2CAL5_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA2CAL5_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA2CAL5_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA2CAL5_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA2CAL5_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA2CAL5_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA2CAL5_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA2CAL6 */
#define _DEVINFO_OPA2CAL6_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA2CAL6 */
#define _DEVINFO_OPA2CAL6_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA2CAL6_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA2CAL6_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA2CAL6_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA2CAL6_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA2CAL6_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA2CAL6_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA2CAL6_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA2CAL6_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA2CAL6_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA2CAL6_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA2CAL6_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA2CAL6_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA2CAL6_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA2CAL7 */
#define _DEVINFO_OPA2CAL7_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA2CAL7 */
#define _DEVINFO_OPA2CAL7_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA2CAL7_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA2CAL7_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA2CAL7_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA2CAL7_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA2CAL7_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA2CAL7_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA2CAL7_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA2CAL7_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA2CAL7_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA2CAL7_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA2CAL7_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA2CAL7_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA2CAL7_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA3CAL0 */
#define _DEVINFO_OPA3CAL0_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA3CAL0 */
#define _DEVINFO_OPA3CAL0_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA3CAL0_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA3CAL0_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA3CAL0_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA3CAL0_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA3CAL0_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA3CAL0_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA3CAL0_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA3CAL0_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA3CAL0_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA3CAL0_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA3CAL0_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA3CAL0_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA3CAL0_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA3CAL1 */
#define _DEVINFO_OPA3CAL1_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA3CAL1 */
#define _DEVINFO_OPA3CAL1_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA3CAL1_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA3CAL1_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA3CAL1_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA3CAL1_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA3CAL1_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA3CAL1_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA3CAL1_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA3CAL1_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA3CAL1_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA3CAL1_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA3CAL1_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA3CAL1_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA3CAL1_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA3CAL2 */
#define _DEVINFO_OPA3CAL2_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA3CAL2 */
#define _DEVINFO_OPA3CAL2_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA3CAL2_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA3CAL2_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA3CAL2_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA3CAL2_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA3CAL2_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA3CAL2_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA3CAL2_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA3CAL2_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA3CAL2_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA3CAL2_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA3CAL2_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA3CAL2_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA3CAL2_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA3CAL3 */
#define _DEVINFO_OPA3CAL3_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA3CAL3 */
#define _DEVINFO_OPA3CAL3_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA3CAL3_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA3CAL3_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA3CAL3_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA3CAL3_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA3CAL3_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA3CAL3_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA3CAL3_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA3CAL3_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA3CAL3_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA3CAL3_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA3CAL3_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA3CAL3_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA3CAL3_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA3CAL4 */
#define _DEVINFO_OPA3CAL4_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA3CAL4 */
#define _DEVINFO_OPA3CAL4_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA3CAL4_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA3CAL4_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA3CAL4_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA3CAL4_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA3CAL4_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA3CAL4_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA3CAL4_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA3CAL4_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA3CAL4_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA3CAL4_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA3CAL4_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA3CAL4_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA3CAL4_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA3CAL5 */
#define _DEVINFO_OPA3CAL5_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA3CAL5 */
#define _DEVINFO_OPA3CAL5_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA3CAL5_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA3CAL5_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA3CAL5_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA3CAL5_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA3CAL5_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA3CAL5_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA3CAL5_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA3CAL5_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA3CAL5_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA3CAL5_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA3CAL5_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA3CAL5_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA3CAL5_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA3CAL6 */
#define _DEVINFO_OPA3CAL6_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA3CAL6 */
#define _DEVINFO_OPA3CAL6_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA3CAL6_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA3CAL6_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA3CAL6_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA3CAL6_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA3CAL6_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA3CAL6_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA3CAL6_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA3CAL6_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA3CAL6_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA3CAL6_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA3CAL6_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA3CAL6_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA3CAL6_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO OPA3CAL7 */
#define _DEVINFO_OPA3CAL7_MASK                                   0x7DF6EDEFUL /**< Mask for DEVINFO_OPA3CAL7 */
#define _DEVINFO_OPA3CAL7_CM1_SHIFT                              0            /**< Shift value for CM1 */
#define _DEVINFO_OPA3CAL7_CM1_MASK                               0xFUL        /**< Bit mask for CM1 */
#define _DEVINFO_OPA3CAL7_CM2_SHIFT                              5            /**< Shift value for CM2 */
#define _DEVINFO_OPA3CAL7_CM2_MASK                               0x1E0UL      /**< Bit mask for CM2 */
#define _DEVINFO_OPA3CAL7_CM3_SHIFT                              10           /**< Shift value for CM3 */
#define _DEVINFO_OPA3CAL7_CM3_MASK                               0xC00UL      /**< Bit mask for CM3 */
#define _DEVINFO_OPA3CAL7_GM_SHIFT                               13           /**< Shift value for GM */
#define _DEVINFO_OPA3CAL7_GM_MASK                                0xE000UL     /**< Bit mask for GM */
#define _DEVINFO_OPA3CAL7_GM3_SHIFT                              17           /**< Shift value for GM3 */
#define _DEVINFO_OPA3CAL7_GM3_MASK                               0x60000UL    /**< Bit mask for GM3 */
#define _DEVINFO_OPA3CAL7_OFFSETP_SHIFT                          20           /**< Shift value for OFFSETP */
#define _DEVINFO_OPA3CAL7_OFFSETP_MASK                           0x1F00000UL  /**< Bit mask for OFFSETP */
#define _DEVINFO_OPA3CAL7_OFFSETN_SHIFT                          26           /**< Shift value for OFFSETN */
#define _DEVINFO_OPA3CAL7_OFFSETN_MASK                           0x7C000000UL /**< Bit mask for OFFSETN */

/* Bit fields for DEVINFO CSENGAINCAL */
#define _DEVINFO_CSENGAINCAL_MASK                                0x000000FFUL /**< Mask for DEVINFO_CSENGAINCAL */
#define _DEVINFO_CSENGAINCAL_GAINCAL_SHIFT                       0            /**< Shift value for GAINCAL */
#define _DEVINFO_CSENGAINCAL_GAINCAL_MASK                        0xFFUL       /**< Bit mask for GAINCAL */

/** @} */
/** @} End of group EFM32TG11B_DEVINFO */
/** @} End of group Parts */
