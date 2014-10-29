/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_mgr_cmd_interpret.h
 * \author sandeepprakash
 *
 * \date   02-Dec-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_MGR_CMD_INTERPRET_H__
#define __RFSVP_MGR_CMD_INTERPRET_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_mgr_cmd_handle_cmd_halt (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint8_t *puc_cmd_buf,
   uint32_t ui_cmd_buf_len);

RFSVP_RET_E rfsvp_mgr_cmd_handle_cmd_wait (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint8_t *puc_cmd_buf,
   uint32_t ui_cmd_buf_len);

RFSVP_RET_E rfsvp_mgr_cmd_handle_cmd_node_down (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint8_t *puc_cmd_buf,
   uint32_t ui_cmd_buf_len);

RFSVP_RET_E rfsvp_mgr_cmd_handle_cmd_node_up (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint8_t *puc_cmd_buf,
   uint32_t ui_cmd_buf_len);

RFSVP_RET_E rfsvp_mgr_cmd_handle_cmd_read (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint8_t *puc_cmd_buf,
   uint32_t ui_cmd_buf_len);

RFSVP_RET_E rfsvp_mgr_cmd_handle_cmd_write (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint8_t *puc_cmd_buf,
   uint32_t ui_cmd_buf_len);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_MGR_CMD_INTERPRET_H__ */
