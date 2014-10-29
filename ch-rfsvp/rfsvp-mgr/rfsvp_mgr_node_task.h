/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_mgr_node_task.h
 * \author sandeepprakash
 *
 * \date   26-Sep-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_MGR_NODE_TASK_H__
#define __RFSVP_MGR_NODE_TASK_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/
#define RFSVP_MGR_TASK_Q_WAIT_TIMEOUT          (1000)

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/
typedef struct _RFSVP_MGR_SOCK_ACT_DATA_X
{
   RFSVP_MSG_HDR_X x_hdr;

   PAL_SOCK_HDL hl_sock_hdl;
} RFSVP_MGR_SOCK_ACT_DATA_X;

/***************************** FUNCTION PROTOTYPES ****************************/
void *rfsvp_mgr_node_task(
   void *p_thread_args);

SOCKMON_RET_E rfsvp_mgr_node_sockmon_active_sock_cbk (
   SOCKMON_SOCK_ACTIVITY_STATUS_E e_status,
   PAL_SOCK_HDL hl_sock_hdl,
   void *p_app_data);

RFSVP_RET_E rfsvp_mgr_post_msg_to_q (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint8_t *puc_data,
   uint32_t ui_data_len);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_MGR_NODE_TASK_H__ */
