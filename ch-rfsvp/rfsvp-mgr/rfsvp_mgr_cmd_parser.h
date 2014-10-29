/*******************************************************************************
 * Copyright (c) 2012, Sandeep Prakash <123sandy@gmail.com>
 * All rights reserved.
 *
 * \file   rfsvp_mgr_cmd_parser.h
 * \author sandeepprakash
 *
 * \date   26-Nov-2012
 *
 * \brief  
 *
 ******************************************************************************/

#ifndef __RFSVP_MGR_CMD_PARSER_H__
#define __RFSVP_MGR_CMD_PARSER_H__

#ifdef  __cplusplus
extern  "C"
{
#endif

/********************************* CONSTANTS **********************************/

/*********************************** MACROS ***********************************/
#define RFSVP_SERVER_CMD_STR_HALT      "HALT"
#define RFSVP_SERVER_CMD_STR_WAIT      "WAIT"
#define RFSVP_SERVER_CMD_STR_NODE_DOWN "NODE-DOWN"
#define RFSVP_SERVER_CMD_STR_NODE_UP   "NODE-UP"
#define RFSVP_SERVER_CMD_STR_READ      "READ"
#define RFSVP_SERVER_CMD_STR_WRITE     "WRITE"

/******************************** ENUMERATIONS ********************************/

/*********************** CLASS/STRUCTURE/UNION DATA TYPES *********************/

/***************************** FUNCTION PROTOTYPES ****************************/
RFSVP_RET_E rfsvp_mgr_cmd_parser_init (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt);

RFSVP_RET_E rfsvp_mgr_cmd_parser_get_next_command (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint8_t *puc_cmd_buf,
   uint32_t *pui_cmd_buf_len);

RFSVP_RET_E rfsvp_mgr_cmd_parser_interpret_cmd_line (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt,
   uint8_t *puc_cmd_buf,
   uint32_t ui_cmd_buf_len);

RFSVP_RET_E rfsvp_mgr_cmd_parser_deinit (
   RFSVP_MGR_CTXT_X *px_rfsvp_mgr_ctxt);

#ifdef   __cplusplus
}
#endif

#endif /* __RFSVP_MGR_CMD_PARSER_H__ */
