/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_mgr_private.h
 * \author sandeepprakash
 *
 * \date   24-Sep-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_MGR_PRIVATE_H__
#define __RFSVP_MGR_PRIVATE_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/
#define RFSVP_MGR_TASK_MSGQ_SIZE                      (20)

#define RFSVP_MGR_TASK_PING_PEERS_INTERVAL_MS         (1200000)

#define RFSVP_MGR_SEND_MSG_TIMEOUT_MS                 (9000)

#define RFSVP_MGR_RECV_MSG_TIMEOUT_MS                 (9000)

#define NODE_MSG_MAX_MSG_LEN                          (64 * 1024)

#define RFSVP_MGR_CMD_LINE_BUF_LEN                    (256)

#define RFSVP_M_LOG_STR                               "RFSM"

#define RFSVP_M_LOG_LOW(format,...)                                              \
do                                                                            \
{                                                                             \
   LOG_LOW (RFSVP_M_LOG_STR,__FILE__,__FUNCTION__,__LINE__,format,               \
      ##__VA_ARGS__);                                                         \
} while (0)

#define RFSVP_M_LOG_MED(format,...)                                              \
do                                                                            \
{                                                                             \
   LOG_MED (RFSVP_M_LOG_STR,__FILE__,__FUNCTION__,__LINE__,format,               \
      ##__VA_ARGS__);                                                         \
} while (0)

#define RFSVP_M_LOG_HIGH(format,...)                                             \
do                                                                            \
{                                                                             \
   LOG_HIGH (RFSVP_M_LOG_STR,__FILE__,__FUNCTION__,__LINE__,format,              \
      ##__VA_ARGS__);                                                         \
} while (0)

#define RFSVP_M_LOG_FULL(format,...)                                             \
do                                                                            \
{                                                                             \
   LOG_FULL (RFSVP_M_LOG_STR,__FILE__,__FUNCTION__,__LINE__,format,              \
      ##__VA_ARGS__);                                                         \
} while (0)

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/
typedef struct _RFSVP_MGR_CTXT_X
{
   RFSVP_MGR_INIT_PARAMS_X              x_init_params;

   TASK_HDL                         hl_listner_task_hdl;

   TASK_HDL                         hl_cmd_task_hdl;

   PAL_SOCK_HDL                     hl_listner_sock_hdl;

   RFSVP_SERVER_NODES_X             x_server_nodes;

   RFSVP_MGR_NODE_CTXT_X            x_mgr_node;

   PAL_SOCK_HDL                     hla_temp_node_sock[RFSVP_MAX_SERVER_NODES];

   uint8_t                          uca_temp_sock_buf[NODE_MSG_MAX_MSG_LEN];

   uint32_t                         ui_last_ping_time_ms;

   PAL_FILE_HDL                     hl_cmd_file_hdl;
} RFSVP_MGR_CTXT_X;

/***************************** FUNCTION PROTOTYPES ****************************/

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_MGR_PRIVATE_H__ */
