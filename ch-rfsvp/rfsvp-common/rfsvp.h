/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp.h
 * \author sandeepprakash
 *
 * \date   23-Nov-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_H__
#define __RFSVP_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/
typedef enum _RFSVP_RET_E
{
   eRFSVP_RET_SUCCESS                   = 0x00000000,

   eRFSVP_RET_FAILURE,

   eRFSVP_RET_INVALID_ARGS,

   eRFSVP_RET_INVALID_HANDLE,

   eRFSVP_RET_RESOURCE_FAILURE,

   eRFSVP_RET_INVALID_MESSAGE,

   eRFSVP_RET_MAX
} RFSVP_RET_E;

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/
typedef struct _RFSVP_MSG_HDR_X
{
   uint32_t ui_msg_id;

   uint32_t ui_msg_pay_len;

   uint8_t uca_reserved[56];
} RFSVP_MSG_HDR_X;

/***************************** FUNCTION PROTOTYPES ****************************/

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_H__ */
