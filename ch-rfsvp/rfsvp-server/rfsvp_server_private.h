/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_server_private.h
 * \author sandeepprakash
 *
 * \date   24-Sep-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_SERVER_PRIVATE_H__
#define __RFSVP_SERVER_PRIVATE_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/
#define RFSVP_SERVER_TASK_MSGQ_SIZE                      (20)

#define RFSVP_SERVER_TASK_PING_PEERS_INTERVAL_MS         (60000 * 60)

#define RFSVP_SERVER_SEND_MSG_TIMEOUT_MS                 (9000)

#define RFSVP_SERVER_RECV_MSG_TIMEOUT_MS                 (9000)

#define NODE_MSG_MAX_MSG_LEN                             (64 * 1024)

#define RFSVP_SERVER_MAX_FILE_WRITE_BUF                  (1024)

#define RFSVP_S_LOG_STR                                  "RFSS"

#define RFSVP_S_LOG_LOW(format,...)                                              \
do                                                                            \
{                                                                             \
   LOG_LOW (RFSVP_S_LOG_STR,__FILE__,__FUNCTION__,__LINE__,format,               \
      ##__VA_ARGS__);                                                         \
} while (0)

#define RFSVP_S_LOG_MED(format,...)                                              \
do                                                                            \
{                                                                             \
   LOG_MED (RFSVP_S_LOG_STR,__FILE__,__FUNCTION__,__LINE__,format,               \
      ##__VA_ARGS__);                                                         \
} while (0)

#define RFSVP_S_LOG_HIGH(format,...)                                             \
do                                                                            \
{                                                                             \
   LOG_HIGH (RFSVP_S_LOG_STR,__FILE__,__FUNCTION__,__LINE__,format,              \
      ##__VA_ARGS__);                                                         \
} while (0)

#define RFSVP_S_LOG_FULL(format,...)                                             \
do                                                                            \
{                                                                             \
   LOG_FULL (RFSVP_S_LOG_STR,__FILE__,__FUNCTION__,__LINE__,format,              \
      ##__VA_ARGS__);                                                         \
} while (0)

/******************************** ENUMERATIONS ********************************/
typedef enum _RFSVP_SERVER_ALGO_STATE_E
{
   eRFSVP_SERVER_ALGO_STATE_INVALID             = 0x00000000,

   eRFSVP_SERVER_ALGO_STATE_IDLE,

   eRFSVP_SERVER_ALGO_STATE_IN_PROGRESS,

   eRFSVP_SERVER_ALGO_STATE_MAX
} RFSVP_SERVER_ALGO_STATE_E;

typedef enum _RFSVP_SERVER_ALGO_SUB_STATE_E
{
   eRFSVP_SERVER_ALGO_SUB_STATE_INVALID               = 0x00000000,

   eRFSVP_SERVER_ALGO_SUB_STATE_REACH_REQ             = 0x00000001,

   eRFSVP_SERVER_ALGO_SUB_STATE_REACH_WAITING         = 0x00000002,

   eRFSVP_SERVER_ALGO_SUB_STATE_REACH_REQ_DONE        = 0x00000004,

   eRFSVP_SERVER_ALGO_SUB_STATE_LOCK_REQ              = 0x00000008,

   eRFSVP_SERVER_ALGO_SUB_STATE_LOCK_REQ_DONE         = 0x00000010,

   eRFSVP_SERVER_ALGO_SUB_STATE_VOTE_REQ              = 0x00000020,

   eRFSVP_SERVER_ALGO_SUB_STATE_VOTE_REQ_DONE         = 0x00000040,

   eRFSVP_SERVER_ALGO_SUB_STATE_COMMIT_REQ            = 0x00000080,

   eRFSVP_SERVER_ALGO_SUB_STATE_SYNC_REQ              = 0x00000100,

   eRFSVP_SERVER_ALGO_SUB_STATE_SYNC_PROGRESS         = 0x00000200,

   eRFSVP_SERVER_ALGO_SUB_STATE_COMMIT_REQ_DONE       = 0x00000400,

   eRFSVP_SERVER_ALGO_SUB_STATE_ABORT_REQ             = 0x00000800,

   eRFSVP_SERVER_ALGO_SUB_STATE_ABORT_REQ_DONE        = 0x00001000,

   eRFSVP_SERVER_ALGO_SUB_STATE_COMPLETE              = 0x00002000,

   eRFSVP_SERVER_ALGO_SUB_STATE_MAX
} RFSVP_SERVER_ALGO_SUB_STATE_E;

typedef enum _RFSVP_SERVER_ALGO_WAIT_STATE_E
{
   eRFSVP_SERVER_ALGO_WAIT_STATE_INVALID               = 0x00000000,

   eRFSVP_SERVER_ALGO_WAIT_STATE_NEW_REQ_WAITING       = 0x00000001,

   eRFSVP_SERVER_ALGO_WAIT_STATE_MAX
} RFSVP_SERVER_ALGO_WAIT_STATE_E;

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/
typedef struct _RFSVP_SERVER_ALGO_MSG_DATA_X
{
   uint32_t ui_src_node_index;

   uint32_t ui_data_len;

   uint8_t *puc_data;
} RFSVP_SERVER_ALGO_MSG_DATA_X;

typedef struct _RFSVP_SERVER_ALGO_VP_X
{
   /*
    * 1. VNi : Version number of the file, initialized to 0.
    * 2. RUi : Number of replicas updated during the last write operation,
    *          initialized to 7 (number of nodes).
    * 3. DSi : Distinguished node list, initialized to null.
    */
   uint32_t                         ui_vn;

   uint32_t                         ui_ru;

   uint32_t                         uia_ds[RFSVP_MAX_SERVER_NODES];

   uint32_t                         ui_ds_count;

   uint32_t                         ui_cur_file_off;
} RFSVP_SERVER_ALGO_VP_X;

typedef struct _RFSVP_SERVER_ALGO_X
{
   TASK_HDL                         hl_algo_task_hdl;

   MSGQ_HDL                         hl_algo_req_msgq_hdl;

   MSGQ_HDL                         hl_app_req_msgq_hdl;

   PAL_FILE_HDL                     hl_file_hdl;

   RFSVP_SERVER_ALGO_STATE_E        e_state;

   uint32_t                         ui_sub_state;
   /*!< #_RFSVP_SERVER_ALGO_SUB_STATE_E. */

   uint32_t                         ui_wait_state;
   /*!< #_RFSVP_SERVER_ALGO_WAIT_STATE_E. */

   uint32_t                         ui_reachability_start_ms;

   bool                             ba_reachable[RFSVP_MAX_SERVER_NODES];

   bool                             ba_lock_rsp[RFSVP_MAX_SERVER_NODES];

   bool                             ba_vote_rsp[RFSVP_MAX_SERVER_NODES];

   bool                             ba_commit_rsp[RFSVP_MAX_SERVER_NODES];

   bool                             ba_abort_rsp[RFSVP_MAX_SERVER_NODES];

   uint32_t                         ui_cur_max_vn;

   uint32_t                         ui_cur_file_off;

   uint32_t                         ui_last_line_off;

   NODE_MSG_HDR_X                   *px_cur_req_msg_hdr;
   /*!< Pointer to the entire message of the current request. The header will
        be mapped to the actual structure based on the request type. */

   NODE_MSG_CMD_RSP_CODE_E           e_cur_req_rsp_code;

   uint8_t                           uca_read_data[RFSVP_SERVER_MAX_FILE_WRITE_BUF];

   /*
    * 1. VNi : Version number of the file, initialized to 0.
    * 2. RUi : Number of replicas updated during the last write operation,
    *          initialized to 7 (number of nodes).
    * 3. DSi : Distinguished node list, initialized to null.
    */
   RFSVP_SERVER_ALGO_VP_X           x_vp;

   RFSVP_SERVER_ALGO_VP_X           xa_nodex_vp[RFSVP_MAX_SERVER_NODES];

   uint32_t                         ui_seq_no;

   uint32_t                         ui_highest_seq_no;
} RFSVP_SERVER_ALGO_X;

typedef struct _RFSVP_SERVER_CTXT_X
{
   RFSVP_SERVER_INIT_PARAMS_X       x_init_params;

   TASK_HDL                         hl_main_task_hdl;

   RFSVP_SERVER_NODES_X             x_server_nodes;

   RFSVP_MGR_NODE_CTXT_X            x_mgr_node;

   PAL_SOCK_HDL                     hl_mgr_sock_hdl;

   PAL_SOCK_HDL                     hla_temp_node_sock[RFSVP_MAX_SERVER_NODES];

   uint8_t                          uca_temp_sock_buf[NODE_MSG_MAX_MSG_LEN];

   uint32_t                         ui_last_ping_time_ms;

   uint32_t                         ui_ping_seq_no;

   RFSVP_SERVER_ALGO_X              x_algo;
} RFSVP_SERVER_CTXT_X;

/***************************** FUNCTION PROTOTYPES ****************************/

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_SERVER_PRIVATE_H__ */
