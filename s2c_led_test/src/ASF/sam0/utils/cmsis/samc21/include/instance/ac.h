/**
 * \file
 *
 * \brief Instance description for AC
 *
 * Copyright (c) 2015-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMC21_AC_INSTANCE_
#define _SAMC21_AC_INSTANCE_

/* ========== Register definition for AC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_AC_CTRLA               (0x42005000U) /**< \brief (AC) Control A */
#define REG_AC_CTRLB               (0x42005001U) /**< \brief (AC) Control B */
#define REG_AC_EVCTRL              (0x42005002U) /**< \brief (AC) Event Control */
#define REG_AC_INTENCLR            (0x42005004U) /**< \brief (AC) Interrupt Enable Clear */
#define REG_AC_INTENSET            (0x42005005U) /**< \brief (AC) Interrupt Enable Set */
#define REG_AC_INTFLAG             (0x42005006U) /**< \brief (AC) Interrupt Flag Status and Clear */
#define REG_AC_STATUSA             (0x42005007U) /**< \brief (AC) Status A */
#define REG_AC_STATUSB             (0x42005008U) /**< \brief (AC) Status B */
#define REG_AC_DBGCTRL             (0x42005009U) /**< \brief (AC) Debug Control */
#define REG_AC_WINCTRL             (0x4200500AU) /**< \brief (AC) Window Control */
#define REG_AC_SCALER0             (0x4200500CU) /**< \brief (AC) Scaler 0 */
#define REG_AC_SCALER1             (0x4200500DU) /**< \brief (AC) Scaler 1 */
#define REG_AC_SCALER2             (0x4200500EU) /**< \brief (AC) Scaler 2 */
#define REG_AC_SCALER3             (0x4200500FU) /**< \brief (AC) Scaler 3 */
#define REG_AC_COMPCTRL0           (0x42005010U) /**< \brief (AC) Comparator Control 0 */
#define REG_AC_COMPCTRL1           (0x42005014U) /**< \brief (AC) Comparator Control 1 */
#define REG_AC_COMPCTRL2           (0x42005018U) /**< \brief (AC) Comparator Control 2 */
#define REG_AC_COMPCTRL3           (0x4200501CU) /**< \brief (AC) Comparator Control 3 */
#define REG_AC_SYNCBUSY            (0x42005020U) /**< \brief (AC) Synchronization Busy */
#else
#define REG_AC_CTRLA               (*(RwReg8 *)0x42005000U) /**< \brief (AC) Control A */
#define REG_AC_CTRLB               (*(WoReg8 *)0x42005001U) /**< \brief (AC) Control B */
#define REG_AC_EVCTRL              (*(RwReg16*)0x42005002U) /**< \brief (AC) Event Control */
#define REG_AC_INTENCLR            (*(RwReg8 *)0x42005004U) /**< \brief (AC) Interrupt Enable Clear */
#define REG_AC_INTENSET            (*(RwReg8 *)0x42005005U) /**< \brief (AC) Interrupt Enable Set */
#define REG_AC_INTFLAG             (*(RwReg8 *)0x42005006U) /**< \brief (AC) Interrupt Flag Status and Clear */
#define REG_AC_STATUSA             (*(RoReg8 *)0x42005007U) /**< \brief (AC) Status A */
#define REG_AC_STATUSB             (*(RoReg8 *)0x42005008U) /**< \brief (AC) Status B */
#define REG_AC_DBGCTRL             (*(RwReg8 *)0x42005009U) /**< \brief (AC) Debug Control */
#define REG_AC_WINCTRL             (*(RwReg8 *)0x4200500AU) /**< \brief (AC) Window Control */
#define REG_AC_SCALER0             (*(RwReg8 *)0x4200500CU) /**< \brief (AC) Scaler 0 */
#define REG_AC_SCALER1             (*(RwReg8 *)0x4200500DU) /**< \brief (AC) Scaler 1 */
#define REG_AC_SCALER2             (*(RwReg8 *)0x4200500EU) /**< \brief (AC) Scaler 2 */
#define REG_AC_SCALER3             (*(RwReg8 *)0x4200500FU) /**< \brief (AC) Scaler 3 */
#define REG_AC_COMPCTRL0           (*(RwReg  *)0x42005010U) /**< \brief (AC) Comparator Control 0 */
#define REG_AC_COMPCTRL1           (*(RwReg  *)0x42005014U) /**< \brief (AC) Comparator Control 1 */
#define REG_AC_COMPCTRL2           (*(RwReg  *)0x42005018U) /**< \brief (AC) Comparator Control 2 */
#define REG_AC_COMPCTRL3           (*(RwReg  *)0x4200501CU) /**< \brief (AC) Comparator Control 3 */
#define REG_AC_SYNCBUSY            (*(RoReg  *)0x42005020U) /**< \brief (AC) Synchronization Busy */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for AC peripheral ========== */
#define AC_COMPCTRL_MUXNEG_OPAMP    7        // OPAMP selection for MUXNEG
#define AC_GCLK_ID                  40       // Index of Generic Clock
#define AC_NUM_CMP                  4        // Number of comparators
#define AC_SPEED_LEVELS             2        // Number of speed values

#endif /* _SAMC21_AC_INSTANCE_ */
