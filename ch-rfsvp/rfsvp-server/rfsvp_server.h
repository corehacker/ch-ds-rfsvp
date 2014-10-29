/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server.h
 * \author sandeepprakash
 *
 * \date   24-Sep-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_H__
#define __RFSVP_SERVER_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/
#define RFSVP_MGR_HOST_NAME_STR_MAX_LEN       (512)

/******************************** ENUMERATIONS ********************************/
typedef enum _RFSVP_SERVER_MSG_ID_E
{
   eRFSVP_SERVER_MSG_ID_INVALID                      = 0x00000000,

   eRFSVP_SERVER_MSG_ID_LISTENER_START               = 0x00001001,

   eRFSVP_SERVER_MSG_ID_SOCK_ACTIVITY                = 0x00001002,
   /*!< #_RFSVP_SERVER_NODE_SOCK_ACT_DATA_X. */

   eRFSVP_SERVER_MSG_ID_EXIT_TASK                    = 0x00001003,
   /*!< #_RFSVP_SERVER_NODE_EXIT_TASK_DATA_X. */

   eRFSVP_SERVER_MSG_ID_LISTENER_END                 = 0x00002000,

   eRFSVP_SERVER_MSG_ID_MAX,
} RFSVP_SERVER_MSG_ID_E;

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/
typedef struct RFSVP_SERVER_CTXT_X    *RFSVP_SERVER_HDL;

typedef struct _RFSVP_SERVER_INIT_PARAMS_X
{
   uint32_t    ui_node_index;

   uint32_t    ui_no_nodes;

   uint32_t    ui_unit_time_ms;

   SOCKMON_HDL hl_sockmon_hdl;

   uint8_t     uca_mgr_host_name_str[RFSVP_MGR_HOST_NAME_STR_MAX_LEN];

   uint16_t    us_mgr_port_ho;

   uint16_t    us_listen_port_start_ho;

   PAL_SEM_HDL hl_exit_sem_hdl;
} RFSVP_SERVER_INIT_PARAMS_X;

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_server_init (
   RFSVP_SERVER_HDL *phl_rfsvp_server_hdl,
   RFSVP_SERVER_INIT_PARAMS_X *px_init_params);

RFSVP_RET_E rfsvp_server_deinit (
   RFSVP_SERVER_HDL hl_rfsvp_server_hdl);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_H__ */
