/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_mgr.h
 * \author sandeepprakash
 *
 * \date   24-Sep-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_MGR_H__
#define __RFSVP_MGR_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/
#define RFSVP_SERVER_CMD_FILENAME_STR_LEN             (512)
/******************************** ENUMERATIONS ********************************/
typedef enum _RFSVP_MGR_MSG_ID_E
{
   eRFSVP_MGR_MSG_ID_INVALID                      = 0x00000000,

   eRFSVP_MGR_MSG_ID_LISTENER_START               = 0x00001001,

   eRFSVP_MGR_MSG_ID_SOCK_ACTIVITY            = 0x00001002,
   /*!< #_RFSVP_MGR_LISTENER_SOCK_ACT_DATA_X */

   eRFSVP_MGR_MSG_ID_LISTENER_END                 = 0x00002000,

   eRFSVP_MGR_MSG_ID_MAX,
} RFSVP_MGR_MSG_ID_E;

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/
typedef struct RFSVP_MGR_CTXT_X    *RFSVP_MGR_HDL;

typedef struct _RFSVP_MGR_INIT_PARAMS_X
{
   uint32_t    ui_no_nodes;

   SOCKMON_HDL hl_sockmon_hdl;

   uint16_t    us_listen_port_start_ho;

   uint8_t     uca_cmd_filename_str[RFSVP_SERVER_CMD_FILENAME_STR_LEN];
} RFSVP_MGR_INIT_PARAMS_X;

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_mgr_init (
   RFSVP_MGR_HDL *phl_rfsvp_mgr_hdl,
   RFSVP_MGR_INIT_PARAMS_X *px_init_params);

RFSVP_RET_E rfsvp_mgr_deinit (
   RFSVP_MGR_HDL hl_rfsvp_mgr_hdl);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_MGR_H__ */
