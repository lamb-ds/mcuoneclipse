/* ###################################################################
**     Filename    : Events.h
**     Project     : FRDM-KL25Z_NeoShield
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-10-08, 17:02, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/*!
** @file Events.h
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "FRTOS1.h"
#include "UTIL1.h"
#include "CLS1.h"
#include "WAIT1.h"
#include "CS1.h"
#include "AS1.h"
#include "ASerialLdd1.h"
#include "LED1.h"
#include "LEDpin1.h"
#include "BitIoLdd1.h"
#include "LED2.h"
#include "LEDpin2.h"
#include "BitIoLdd2.h"
#include "GI2C1.h"
#include "I2C1.h"
#include "RTC1.h"
#include "TMOUT1.h"
#include "PTC.h"
#include "DMA1.h"
#include "DMACH0.h"
#include "DMACH1.h"
#include "DMACH2.h"
#include "RNET1.h"
#include "RF1.h"
#include "CE1.h"
#include "BitIoLdd6.h"
#include "CSN1.h"
#include "BitIoLdd7.h"
#include "IRQ1.h"
#include "ExtIntLdd1.h"
#include "SM1.h"
#include "SMasterLdd1.h"
#include "TmDt1.h"
#include "FAT1.h"
#include "SD1.h"
#include "SS1.h"
#include "CD1.h"
#include "PTD.h"
#include "SM2.h"
#include "SMasterLdd2.h"
#include "HF1.h"
#include "VS1.h"
#include "MCS1.h"
#include "BitIoLdd9.h"
#include "DCS1.h"
#include "BitIoLdd10.h"
#include "DREQ1.h"
#include "BitIoLdd11.h"
#include "TPM0.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MKL25Z128LK4]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMIINT(void);


void FRTOS1_vApplicationStackOverflowHook(xTaskHandle pxTask, char *pcTaskName);
/*
** ===================================================================
**     Event       :  FRTOS1_vApplicationStackOverflowHook (module Events)
**
**     Component   :  FRTOS1 [FreeRTOS]
**     Description :
**         if enabled, this hook will be called in case of a stack
**         overflow.
**     Parameters  :
**         NAME            - DESCRIPTION
**         pxTask          - Task handle
**       * pcTaskName      - Pointer to task name
**     Returns     : Nothing
** ===================================================================
*/

void FRTOS1_vApplicationTickHook(void);
/*
** ===================================================================
**     Event       :  FRTOS1_vApplicationTickHook (module Events)
**
**     Component   :  FRTOS1 [FreeRTOS]
**     Description :
**         If enabled, this hook will be called by the RTOS for every
**         tick increment.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void FRTOS1_vApplicationIdleHook(void);
/*
** ===================================================================
**     Event       :  FRTOS1_vApplicationIdleHook (module Events)
**
**     Component   :  FRTOS1 [FreeRTOS]
**     Description :
**         If enabled, this hook will be called when the RTOS is idle.
**         This might be a good place to go into low power mode.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void FRTOS1_vApplicationMallocFailedHook(void);
/*
** ===================================================================
**     Event       :  FRTOS1_vApplicationMallocFailedHook (module Events)
**
**     Component   :  FRTOS1 [FreeRTOS]
**     Description :
**         If enabled, the RTOS will call this hook in case memory
**         allocation failed.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/*
** ===================================================================
**     Event       :  DMACH2_OnComplete (module Events)
**
**     Component   :  DMACH2 [DMAChannel_LDD]
*/
/*!
**     @brief
**         Called at the end of a DMA transfer. If the Half complete
**         property in initialization section is enabled, this event is
**         also called when current major iteration count reaches the
**         halfway point. See SetEventMask() and GetEventMask() methods.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer is passed
**                           as the parameter of Init method.
*/
/* ===================================================================*/
void DMACH2_OnComplete(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Event       :  DMACH1_OnComplete (module Events)
**
**     Component   :  DMACH1 [DMAChannel_LDD]
*/
/*!
**     @brief
**         Called at the end of a DMA transfer. If the Half complete
**         property in initialization section is enabled, this event is
**         also called when current major iteration count reaches the
**         halfway point. See SetEventMask() and GetEventMask() methods.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer is passed
**                           as the parameter of Init method.
*/
/* ===================================================================*/
void DMACH1_OnComplete(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Event       :  DMACH0_OnComplete (module Events)
**
**     Component   :  DMACH0 [DMAChannel_LDD]
*/
/*!
**     @brief
**         Called at the end of a DMA transfer. If the Half complete
**         property in initialization section is enabled, this event is
**         also called when current major iteration count reaches the
**         halfway point. See SetEventMask() and GetEventMask() methods.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer is passed
**                           as the parameter of Init method.
*/
/* ===================================================================*/
void DMACH0_OnComplete(LDD_TUserData *UserDataPtr);

void VS1_OnActivateSPI(void);
/*
** ===================================================================
**     Event       :  VS1_OnActivateSPI (module Events)
**
**     Component   :  VS1 [VS1053]
**     Description :
**         Event called before activating SPI bus
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void VS1_OnDeactivateSPI(void);
/*
** ===================================================================
**     Event       :  VS1_OnDeactivateSPI (module Events)
**
**     Component   :  VS1 [VS1053]
**     Description :
**         Event called after deactivating SPI bus.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void SD1_OnActivate(byte mode);
/*
** ===================================================================
**     Event       :  SD1_OnActivate (module Events)
**
**     Component   :  SD1 [SD_Card]
**     Description :
**         Event called when Activate() method is called. This gives an
**         opportunity to the application to synchronize access to a
**         shared bus.
**     Parameters  :
**         NAME            - DESCRIPTION
**         mode            - 0: slow mode, 1: fast mode
**     Returns     : Nothing
** ===================================================================
*/

void SD1_OnDeactivate(byte mode);
/*
** ===================================================================
**     Event       :  SD1_OnDeactivate (module Events)
**
**     Component   :  SD1 [SD_Card]
**     Description :
**         Event called when Deactivate() method is called. This gives
**         an opportunity to the application to synchronize access to a
**         shared bus.
**     Parameters  :
**         NAME            - DESCRIPTION
**         mode            - 0: slow mode, 1: fast mode
**     Returns     : Nothing
** ===================================================================
*/

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __Events_H*/
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.10]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
