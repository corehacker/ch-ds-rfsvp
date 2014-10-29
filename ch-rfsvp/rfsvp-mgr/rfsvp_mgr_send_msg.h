/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_mgr_send_msg.h
 * \author sandeepprakash
 *
 * \date   07-Oct-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_MGR_SEND_MSG_H__
#define __RFSVP_MGR_SEND_MSG_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_mgr_node_send_join_done_to_node (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_mgr_node_send_establish_peers_to_node (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint32_t ui_index);

RFSVP_RET_E rfsvp_mgr_node_send_app_msg_cmd_to_node (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint32_t ui_index,
   NODE_MSG_APP_CMD_X *px_cmd);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_MGR_SEND_MSG_H__ */
