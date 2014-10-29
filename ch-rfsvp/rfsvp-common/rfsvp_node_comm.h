/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_node_comm.h
 * \author sandeepprakash
 *
 * \date   28-Sep-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_NODE_COMM_H__
#define __RFSVP_NODE_COMM_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/
#define NODE_MSG_MAX_HOSTNAME_STR_LEN                 (512)

#define RFSVP_MAX_SERVER_NODES                        (50)

/******************************** ENUMERATIONS ********************************/
typedef enum _NODE_MSG_ID_E
{
   eNODE_MSG_ID_INVALID                       = 0x00000000,

   /*
    * Reserved Messages.
    */
   eNODE_MSG_ID_RESERVED_START                = 0x00000001,

   eNODE_MSG_ID_RESERVED_END                  = 0x00001000,

   /*
    * Setup messages.
    */
   eNODE_MSG_ID_SETUP_RANGE_START             = 0x00001001,

   eNODE_MSG_ID_SETUP_JOIN                    = 0x00001002,
   /*!< #_NODE_MSG_JOIN_X. */

   eNODE_MSG_ID_SETUP_JOIN_DONE               = 0x00001003,
   /*!< #_NODE_MSG_JOIN_DONE_X. */

   eNODE_MSG_ID_SETUP_ESTABLISH_PEERS         = 0x00001004,
   /*!< #_NODE_MSG_ESTABLISH_PEERS_X. */

   eNODE_MSG_ID_SETUP_ESTABLISH_DONE          = 0x00001005,
   /*!< #_NODE_MSG_ESTABLISH_DONE_X. */

   eNODE_MSG_ID_SETUP_PING                    = 0x00001006,
   /*!< #_NODE_MSG_PING_X. */

   eNODE_MSG_ID_SETUP_RANGE_END               = 0x00002000,

   eNODE_MSG_ID_APP_MSG_START                 = 0x00002001,

   eNODE_MSG_ID_APP_MSG_CMD                   = 0x00002002,

   eNODE_MSG_ID_APP_MSG_CMD_RSP               = 0x00002003,

   eNODE_MSG_ID_APP_MSG_END                   = 0x00003000,

   eNODE_MSG_ID_ALGO_MSG_START                = 0x00003001,

   eNODE_MSG_ID_ALGO_MSG_IS_REACHABLE         = 0x00003002,
   /*!< #_NODE_MSG_ALGO_IS_REACHABLE_X. */

   eNODE_MSG_ID_ALGO_MSG_IS_REACHABLE_RSP     = 0x00003003,
   /*!< #_NODE_MSG_ALGO_IS_REACHABLE_RSP_X. */

   eNODE_MSG_ID_ALGO_MSG_VOTE_REQ             = 0x00003004,
   /*!< #_NODE_MSG_ALGO_VOTE_REQ_X. */

   eNODE_MSG_ID_ALGO_MSG_VOTE_RSP             = 0x00003005,
   /*!< #_NODE_MSG_ALGO_VOTE_RSP_X. */

   eNODE_MSG_ID_ALGO_MSG_COMMIT_REQ           = 0x00003006,
   /*!< #_NODE_MSG_ALGO_COMMIT_REQ_X. */

   eNODE_MSG_ID_ALGO_MSG_COMMIT_RSP           = 0x00003007,
   /*!< #_NODE_MSG_ALGO_COMMIT_RSP_X. */

   eNODE_MSG_ID_ALGO_MSG_SYNC_REQ             = 0x00003008,
   /*!< #_NODE_MSG_ALGO_SYNC_REQ_X. */

   eNODE_MSG_ID_ALGO_MSG_SYNC_RSP             = 0x00003009,
   /*!< #_NODE_MSG_ALGO_SYNC_RSP_X. */

   eNODE_MSG_ID_ALGO_MSG_SYNC_UPDATE          = 0x00003010,
   /*!< #_NODE_MSG_ALGO_SYNC_UPDATE_X. */

   eNODE_MSG_ID_ALGO_MSG_ABORT_REQ            = 0x00003011,
   /*!< #_NODE_MSG_ALGO_ABORT_REQ_X. */

   eNODE_MSG_ID_ALGO_MSG_ABORT_RSP            = 0x00003012,
   /*!< #_NODE_MSG_ALGO_ABORT_RSP_X. */

   eNODE_MSG_ID_ALGO_MSG_LOCK_REQ             = 0x00003013,
   /*!< #_NODE_MSG_ALGO_LOCK_REQ_X. */

   eNODE_MSG_ID_ALGO_MSG_LOCK_RSP             = 0x00003014,
   /*!< #_NODE_MSG_ALGO_LOCK_RSP_X. */

   eNODE_MSG_ID_ALGO_MSG_END                  = 0x00004000,

   /*
    * Other messages. For future use.
    */
   eNODE_MSG_ID_MAX
} NODE_MSG_ID_E;

typedef enum _RFSVP_SERVER_NODE_STATE_E
{
   eRFSVP_SERVER_NODE_STATE_INVALID                  = 0x00000000,

   eRFSVP_SERVER_NODE_STATE_JOINED,

   eRFSVP_SERVER_NODE_STATE_ALGO_READY,

   eRFSVP_SERVER_NODE_STATE_ALGO_COMPLETE,

   eRFSVP_SERVER_NODE_STATE_MAX,
} RFSVP_SERVER_NODE_STATE_E;

typedef enum _RFSVP_SERVER_CMD_E
{
   eRFSVP_SERVER_CMD_INVALID                 = 0x00000000,

   eRFSVP_SERVER_CMD_HALT,

   eRFSVP_SERVER_CMD_WAIT,

   eRFSVP_SERVER_CMD_NODE_DOWN,

   eRFSVP_SERVER_CMD_NODE_UP,

   eRFSVP_SERVER_CMD_READ,

   eRFSVP_SERVER_CMD_WRITE,

   eRFSVP_SERVER_CMD_MAX
} RFSVP_SERVER_CMD_E;

typedef enum _RFSVP_SERVER_ALGO_RSP_CODE_E
{
   eRFSVP_SERVER_ALGO_RSP_CODE_SUCCESS          = 0x00000000,

   RFSVP_SERVER_ALGO_RSP_CODE_FAILURE
} RFSVP_SERVER_ALGO_RSP_CODE_E;

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/
typedef struct _RFSVP_MGR_NODE_CTXT_X
{
   uint8_t              uca_dns_name_str[NODE_MSG_MAX_HOSTNAME_STR_LEN];

   uint32_t             ui_ip_addr_ho;

   uint16_t             us_port_ho;
} RFSVP_MGR_NODE_CTXT_X;

typedef struct _RFSVP_SERVER_NODE_CTXT_X
{
   uint32_t             ui_node_index;

   uint32_t             ui_ip_addr_ho;

   RFSVP_SERVER_NODE_STATE_E e_state;

   uint8_t              uca_dns_name_str[NODE_MSG_MAX_HOSTNAME_STR_LEN];

   uint16_t             us_udp_port_ho;

   uint8_t              uca_reserved[62];
} RFSVP_SERVER_NODE_CTXT_X;

typedef struct _RFSVP_SERVER_NODES_X
{
   RFSVP_SERVER_NODE_CTXT_X     xa_nodes[RFSVP_MAX_SERVER_NODES];

   PAL_SOCK_HDL            hla_tcp_sock_hdl[RFSVP_MAX_SERVER_NODES];

   PAL_SOCK_HDL            hl_udp_sock_hdl;

   uint32_t                ui_no_nodes;
} RFSVP_SERVER_NODES_X;

typedef struct _NODE_MSG_HDR_X
{
   uint32_t ui_msg_id;

   uint32_t ui_msg_pay_len;

   uint32_t ui_node_index;

   uint8_t puc_padding[52];
} NODE_MSG_HDR_X;

typedef struct _NODE_MSG_JOIN_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   RFSVP_SERVER_NODE_CTXT_X x_node_ctxt;
} NODE_MSG_JOIN_X;

typedef struct _NODE_MSG_JOIN_DONE_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;
} NODE_MSG_JOIN_DONE_X;

typedef struct _NODE_MSG_PEER_DATA_X
{
   uint32_t ui_ip_addr_ho;

   uint16_t us_tcp_port_no_ho;

   uint16_t us_udp_port_no_ho;

   uint8_t  uca_host_name_str[NODE_MSG_MAX_HOSTNAME_STR_LEN];

   uint8_t  uca_reserved[60];
} NODE_MSG_PEER_DATA_X;

typedef struct _NODE_MSG_PEERS_X
{
   uint32_t             ui_count;

   //NODE_MSG_PEER_DATA_X xa_peer[RFSVP_MAX_SERVER_NODES];
} NODE_MSG_PEERS_X;

typedef struct _NODE_MSG_ESTABLISH_PEERS_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   NODE_MSG_PEERS_X x_peers;
} NODE_MSG_ESTABLISH_PEERS_X;

typedef struct _NODE_MSG_ESTABLISH_DONE_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;
} NODE_MSG_ESTABLISH_DONE_X;

typedef struct _NODE_MSG_PING_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_node_idx;

   uint32_t ui_ping_local_ts_ms;

   uint32_t ui_ping_seq_no;
} NODE_MSG_PING_X;

typedef struct _NODE_MSG_APP_CMD_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   RFSVP_SERVER_CMD_E e_cmd;

   uint32_t ui_server_idx;

   uint8_t uca_reserved[32];

   uint32_t ui_data_len;

   // uint8_t uca_data[];
} NODE_MSG_APP_CMD_X;

typedef enum _NODE_MSG_CMD_RSP_CODE_E
{
   eNODE_MSG_CMD_RSP_CODE_SUCCESS,

   eNODE_MSG_CMD_RSP_CODE_FAILURE,

   eNODE_MSG_CMD_RSP_CODE_ABORTED,

   eNODE_MSG_CMD_RSP_CODE_FILE_EMPTY
} NODE_MSG_CMD_RSP_CODE_E;

typedef struct _NODE_MSG_APP_CMD_RSP_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   RFSVP_SERVER_CMD_E e_cmd;

   NODE_MSG_CMD_RSP_CODE_E e_rsp_code;

   uint32_t ui_server_idx;

   uint8_t uca_reserved[32];

   uint32_t ui_data_len;

   // uint8_t uca_data[];
} NODE_MSG_APP_CMD_RSP_X;

typedef struct _NODE_MSG_ALGO_IS_REACHABLE_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;
} NODE_MSG_ALGO_IS_REACHABLE_X;

typedef struct _NODE_MSG_ALGO_IS_REACHABLE_RSP_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   RFSVP_SERVER_ALGO_RSP_CODE_E e_rsp_code;
} NODE_MSG_ALGO_IS_REACHABLE_RSP_X;

typedef enum _NODE_VOTE_REQ_PURPOSE_E
{
   eNODE_VOTE_REQ_PURPOSE_INVALID         = 0x00000000,

   eNODE_VOTE_REQ_PURPOSE_VOTING,

   eNODE_VOTE_REQ_PURPOSE_QUERY,

   eNODE_VOTE_REQ_PURPOSE_MAX
} NODE_VOTE_REQ_PURPOSE_E;

typedef struct _NODE_MSG_ALGO_VOTE_REQ_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   NODE_VOTE_REQ_PURPOSE_E e_purpose;

   uint32_t ui_seq_no;
} NODE_MSG_ALGO_VOTE_REQ_X;

typedef struct _ALGO_VP_X
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
} ALGO_VP_X;

typedef struct _NODE_MSG_ALGO_VOTE_RSP_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   RFSVP_SERVER_ALGO_RSP_CODE_E e_rsp_code;

   ALGO_VP_X x_vp;
} NODE_MSG_ALGO_VOTE_RSP_X;

typedef struct _NODE_MSG_ALGO_LOCK_REQ_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   uint32_t ui_seq_no;
} NODE_MSG_ALGO_LOCK_REQ_X;

typedef struct _NODE_MSG_ALGO_LOCK_RSP_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   RFSVP_SERVER_ALGO_RSP_CODE_E e_rsp_code;
} NODE_MSG_ALGO_LOCK_RSP_X;

typedef struct _NODE_MSG_ALGO_COMMIT_REQ_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   ALGO_VP_X x_updated_vp;

   uint32_t ui_data_len;

   // uint8_t uca_data[];
} NODE_MSG_ALGO_COMMIT_REQ_X;

typedef struct _NODE_MSG_ALGO_COMMIT_RSP_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   RFSVP_SERVER_ALGO_RSP_CODE_E e_rsp_code;
} NODE_MSG_ALGO_COMMIT_RSP_X;

typedef struct _NODE_MSG_ALGO_SYNC_REQ_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   uint32_t ui_sync_start_vn;

   uint32_t ui_file_offset;
} NODE_MSG_ALGO_SYNC_REQ_X;

typedef struct _NODE_MSG_ALGO_SYNC_RSP_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   RFSVP_SERVER_ALGO_RSP_CODE_E e_rsp_code;

   uint32_t ui_sync_vn;

   uint32_t ui_final_offset;

   uint8_t uca_reserved[32];

   uint32_t ui_data_len;

   // uint8_t uca_data[];
} NODE_MSG_ALGO_SYNC_RSP_X;

typedef struct _NODE_MSG_ALGO_SYNC_UPDATE_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   uint32_t ui_sync_vn;

   uint32_t ui_final_offset;

   uint8_t uca_reserved[32];

   uint32_t ui_data_len;

   // uint8_t uca_data[];
} NODE_MSG_ALGO_SYNC_UPDATE_X;

typedef struct _NODE_MSG_ALGO_ABORT_REQ_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;
} NODE_MSG_ALGO_ABORT_REQ_X;

typedef struct _NODE_MSG_ALGO_ABORT_RSP_X
{
   NODE_MSG_HDR_X x_hdr;

   uint32_t ui_bitmask;

   uint32_t ui_server_idx;

   RFSVP_SERVER_ALGO_RSP_CODE_E e_rsp_code;
} NODE_MSG_ALGO_ABORT_RSP_X;

/***************************** FUNCTION PROTOTYPES ****************************/

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_NODE_COMM_H__ */
