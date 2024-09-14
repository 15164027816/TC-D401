/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include <stdbool.h>
#include "lvgl.h"
#include "gui_guider.h"
#include "widgets_init.h"




int32_t vo_counter=8 ; // 音量（默认为50）
char   vo_buf[50]={"8"};
int light_value = 80;
char light_buf[50] = {"80"};
bool pressing = false;
int country=0;
char MicState=1;  // 0关麦 1开麦 2申请 3等待
int vote_flag = 0;
int identity_man = 0; // 主席1 代表0
int select_flag; // 返回页面标志，用于定位进入选项的页面是自定义二三四五，键选举 2两键3三键4四键5五键 1满意度选举 6主席赞成反对选举  7代表赞成反对选举 18 三键满意度选举
// 添加保护页面返回 12、13、14、15、11、16、17与上面的对应
int server_flag=0;    //服务选项，1为茶水，2为纸笔，3为人工
int election_value=0;   //选举选项 1~5对应该选举的值
int election_flag=5;
int rating_flag=0;

static void main_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{

		// rt_kprintf("mic down\n");
		// LvglKeyValSend(BUTTON_MIC);

	            break;
    }
        default:
		break;
	}

}
static void main_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        identity_man=1;
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void main_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	lv_imgbtn_state_t state = lv_obj_get_state(guider_ui.main_imgbtn_3);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if (pressing == false)
		{
			//rt_kprintf("LV_EVENT_CLICKED");
			pressing = !pressing;
			// dacai2CmdSend(&str, sizeof(str)); // 入列到mq邮箱里
			//LvglKeyValSend(BUTTON_VIP);
		}
		break;
	}
    // if(state= LV_EVENT_PRESSING){

	// }
	// else
	case LV_EVENT_PRESSING:
	{
		if (pressing == true)
		{
			//rt_kprintf("LV_EVENT_PRESSING");
            // dacai2CmdSend(&str, sizeof(str)); // 入列到mq邮箱里
			pressing = !pressing;
		}

		break;
	}

	default:
		break;
	}
}


void events_init_main(lv_ui *ui)
{
    if (MicState == 0) {
        lv_imgbtn_set_state(ui->main_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED);
        // switch (country)
		// {
		// case 0:
		// 	lv_label_set_text(ui->main_label_3, "开启话筒");
		// 	break;
		// case 1:
        //     lv_label_set_text(ui->main_label_3, "開啟話筒");
		// 	break;

		// case 2:
        //     lv_label_set_text(ui->main_label_3, "Enable microphone");
        //     break;

        // case 3:
        //     lv_label_set_text(ui->main_label_3, "Включить микрофон");
		// 	break;

		// case 4:
        //     lv_label_set_text(ui->main_label_3, "Activer le microphone");
		// 	break;

		// default:
        // 	break;
		// }
    } else if(MicState == 1) {
        lv_imgbtn_set_state(ui->main_imgbtn_1, LV_IMGBTN_STATE_RELEASED);       //话筒开
        // switch (country)
		// {
		// case 0:
		// 	lv_label_set_text(guider_ui.main_label_3, "关闭话筒");
		// 	break;
		// case 1:
		// 	lv_label_set_text(guider_ui.main_label_3, "關閉話筒");
		// 	break;
        //     case 2:
		// 	lv_label_set_text(guider_ui.main_label_3, "Turn off microphone");
		// 	break;
		// case 3:
		// 	lv_label_set_text(guider_ui.main_label_3, "Выключить микрофон");
		// 	break;
        //     case 4:
		// 	lv_label_set_text(guider_ui.main_label_3, "Désactiver le microphone");
		// 	break;

		// default:
		// 	break;
		// }
    }
	lv_obj_add_event_cb(ui->main_imgbtn_1, main_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->main_imgbtn_2, main_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->main_imgbtn_3, main_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
}
static void menu_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.main_del == true) {
	          setup_scr_main(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.main, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.main_del = true;
	    }
		break;
	}
	default:
		break;
    }
}

static void menu_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_start_del == true) {
	          setup_scr_vote_start(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_start, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_start_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void menu_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.service_del == true) {
	          setup_scr_service(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.service, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.service_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void menu_imgbtn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.sign_start_del == true) {
	          setup_scr_sign_start(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.sign_start, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.sign_start_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void menu_imgbtn_5_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.audio_set_del == true) {
	          setup_scr_audio_set(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.audio_set, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.audio_set_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void menu_imgbtn_6_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.language_del == true) {
	          setup_scr_language(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.language, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.language_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void menu_imgbtn_7_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.set_up_del == true) {
	          setup_scr_set_up(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.set_up, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.set_up_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_menu(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->menu_imgbtn_1, menu_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_imgbtn_2, menu_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_imgbtn_3, menu_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_imgbtn_4, menu_imgbtn_4_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_imgbtn_5, menu_imgbtn_5_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_imgbtn_6, menu_imgbtn_6_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_imgbtn_7, menu_imgbtn_7_event_handler, LV_EVENT_ALL, NULL);
}
static void vote_start_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
		break;
	}
	default:
		break;
	}
}



static void vote_start_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        vote_flag=0;
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_del == true) {
	          setup_scr_vote(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_del = true;

        // {
		// LvglKeyValSend(BUTTON_CHAIR_START_VOTE);

		// break;
	    // }


	    }
		break;
	}
	default:
		break;
	}
}
static void vote_start_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_result_del == true) {
	          setup_scr_vote_result(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_result, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_result_del = true;
	    }
        // {

		// LvglKeyValSend(BUTTON_CHAIR_VOTE_RESULT_OUT);

		// break;
	    // }
		break;
	}
	default:
		break;
	}
}
void events_init_vote_start(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->vote_start_imgbtn_1, vote_start_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vote_start_imgbtn_2, vote_start_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vote_start_imgbtn_3, vote_start_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
}

// 事件处理函数，使用 user_data 参数
static void vote_imgbtn_common_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        // 从 event 结构体中获取 user_data，即我们的 ui 指针
        lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

        // 检查 ui 指针是否有效
        if (ui == NULL) return;

        // 根据触发事件的对象切换按钮状态
        lv_obj_t * btn_clicked = lv_event_get_target(e);
        if (btn_clicked == ui->vote_imgbtn_1) {
            vote_flag = 1;
            //LvglKeyValSend(BUTTON_SELECT_OPTION1);
            // 设置按钮2为按下状态，按钮3为释放状态
        lv_imgbtn_set_state(ui->vote_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->vote_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->vote_imgbtn_2) {
            vote_flag = 2;
            //LvglKeyValSend(BUTTON_SELECT_OPTION2);
        lv_imgbtn_set_state(ui->vote_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->vote_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->vote_imgbtn_3) {
            vote_flag = 3;
            //LvglKeyValSend(BUTTON_SELECT_OPTION3);
        lv_imgbtn_set_state(ui->vote_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        }
        // 刷新屏幕
        lv_refr_now(NULL);
    }
}
static void vote_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_confirm_del == true) {
	          setup_scr_vote_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_confirm_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void vote_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_confirm_del == true) {
	          setup_scr_vote_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_confirm_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void vote_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_confirm_del == true) {
	          setup_scr_vote_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_confirm_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void vote_imgbtn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        //LvglKeyValSend(BUTTON_CHAIR_STOP_VOTE);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_fin_confirm_del == true) {
	          setup_scr_vote_fin_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_fin_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_fin_confirm_del = true;
	    }
		break;
        // {
		// LvglKeyValSend(BUTTON_CHAIR_STOP_VOTE);

		// break;
	    // }
	}
	default:
		break;
	}
}



void events_init_vote(lv_ui *ui)
{
        switch (vote_flag)
    {
    case 0:
    {
        lv_imgbtn_set_state(ui->vote_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        break;
        }
    case 1:
    {
        lv_imgbtn_set_state(ui->vote_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED);
        break;
        }
    case 2:
    {
        lv_imgbtn_set_state(ui->vote_imgbtn_2, LV_IMGBTN_STATE_CHECKED_RELEASED);
        break;
        }
    case 3:
    {
        lv_imgbtn_set_state(ui->vote_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED);
        break;
    }
    default:
        break;
    }
    select_flag = 16;
    lv_obj_add_event_cb(ui->vote_imgbtn_1, vote_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->vote_imgbtn_2, vote_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->vote_imgbtn_3, vote_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);

	lv_obj_add_event_cb(ui->vote_imgbtn_1, vote_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vote_imgbtn_2, vote_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vote_imgbtn_3, vote_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vote_imgbtn_4, vote_imgbtn_4_event_handler, LV_EVENT_ALL, NULL);

}


static void vote_confirm_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        vote_flag=0;
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_del == true) {
	          setup_scr_vote(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void vote_confirm_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
            if (identity_man==1)
            {
                if (guider_ui.vote_del == true) {
	          setup_scr_vote(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_del = true;
            }
            else if (identity_man==0)
            {
                 if (guider_ui.vote_rep_del == true) {
	          setup_scr_vote_rep(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_rep, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_rep_del = true;
            }



	    }
		break;
	}
	default:
		break;
	}
}
void events_init_vote_confirm(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->vote_confirm_imgbtn_1, vote_confirm_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vote_confirm_imgbtn_2, vote_confirm_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}
static void vote_fin_confirm_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_del == true) {
	          setup_scr_vote(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void vote_fin_confirm_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_now_del == true) {
	          setup_scr_vote_now(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_now, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_now_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_vote_fin_confirm(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->vote_fin_confirm_imgbtn_1, vote_fin_confirm_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vote_fin_confirm_imgbtn_2, vote_fin_confirm_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}
static void vote_now_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
	}
	default:
		break;
	}
}
void events_init_vote_now(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->vote_now_imgbtn_1, vote_now_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}
static void vote_result_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
	}
	default:
		break;
	}
}
void events_init_vote_result(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->vote_result_imgbtn_1, vote_result_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}
static void sign_start_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.sign_del == true) {
	          setup_scr_sign(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.sign, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.sign_del = true;
	    }
		break;
        // {
        //     LvglKeyValSend(BUTTON_CHAIR_START_SIGN);

		// break;
        // }
	}
	default:
		break;
	}
}

static void sign_start_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_sign_start(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->sign_start_imgbtn_1, sign_start_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui->sign_start_imgbtn_2, sign_start_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}

static void sign_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.sign_correct_del == true) {
	          setup_scr_sign_correct(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.sign_correct, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.sign_correct_del = true;
	    }
		break;
        // {
        //     LvglKeyValSend(BUTTON_SET_SIGN);
        // }
	}
	default:
		break;
	}
}
static void sign_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	   lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        //LvglKeyValSend(BUTTON_CHAIR_END_SIGN);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
        // {
        //     LvglKeyValSend(BUTTON_CHAIR_END_SIGN);
		// break;
        // }

	default:
		break;
	}
}
}
void events_init_sign(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->sign_imgbtn_1, sign_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->sign_imgbtn_2, sign_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}


static void sign_correct_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	   lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
	}
	default:
		break;
	}
}
void events_init_sign_correct(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->sign_correct_imgbtn_2, sign_correct_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}


static void service_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
	}
	default:
		break;
	}
}
static void service_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        server_flag=1;
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.pop_tea_del == true) {
	          setup_scr_pop_tea(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.pop_tea, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.pop_tea_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void service_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        server_flag=2;
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.pop_pen_del == true) {
	          setup_scr_pop_pen(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.pop_pen, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.pop_pen_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void service_imgbtn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        server_flag=3;
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.pop_man_del == true) {
	          setup_scr_pop_man(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.pop_man, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.pop_man_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_service(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->service_imgbtn_1, service_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->service_imgbtn_2, service_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->service_imgbtn_3, service_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->service_imgbtn_4, service_imgbtn_4_event_handler, LV_EVENT_ALL, NULL);
}
static void service_confirm_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
	}
	default:
		break;
	}
}
void events_init_service_confirm(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->service_confirm, service_confirm_event_handler, LV_EVENT_ALL, NULL);
}
static void set_up_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	   lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
	}
	default:
		break;
	}
}


static void set_ID_imgbtn_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code)
	{
	case LV_EVENT_CLICKED:
	{

		//LvglKeyValSend(BUTTON_SET_ID); // 编id

	}
	default:
		break;
	}
}

void events_init_set_ID(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->set_ID_imgbtn_1, set_ID_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}

static void set_up_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.light_sysvers_del == true) {
	          setup_scr_light_sysvers(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.light_sysvers, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.light_sysvers_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void set_up_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if (guider_ui.topic_del == true) {
	          setup_scr_topic(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.topic, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.topic_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_set_up(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->set_up_imgbtn_1, set_up_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->set_up_imgbtn_2, set_up_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->set_up_imgbtn_3, set_up_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
}


static void light_sysvers_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.set_up_del == true) {
	          setup_scr_set_up(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.set_up, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.set_up_del = true;
	    }
		break;
	}
	default:
		break;
	}
}


static void light_sysvers_slider_1_event_handler (lv_event_t *e)
{
	lv_obj_t * slider = lv_event_get_target(e);

	switch (lv_event_get_code(e)) {
	case LV_EVENT_VALUE_CHANGED:
	{
        light_value = lv_slider_get_value(slider);
		lv_obj_set_style_text_font(guider_ui.light_sysvers_label_5, &lv_font_SourceHanSansCN_Medium_40, 0);

        sprintf(light_buf,"%d",light_value);
		lv_label_set_text(guider_ui.light_sysvers_label_5, light_buf);
		break;
	}
	default:
		break;
	}
}




void events_init_light_sysvers(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->light_sysvers_imgbtn_1, light_sysvers_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui->light_sysvers_slider_1, light_sysvers_slider_1_event_handler, LV_EVENT_ALL, ui);
    lv_slider_set_value(ui->light_sysvers_slider_1, light_value, LV_ANIM_OFF);              // 保证滑动块状态
}
static void topic_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.set_up_del == true) {
	          setup_scr_set_up(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.set_up, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.set_up_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_topic(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->topic_imgbtn_1, topic_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}
static void audio_set_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
	}
	default:
		break;
	}
}

static void audio_set_slider_1_event_handler (lv_event_t *e)
{
	lv_obj_t * slider = lv_event_get_target(e);

	switch (lv_event_get_code(e)) {
	case LV_EVENT_VALUE_CHANGED:
	{
        vo_counter = lv_slider_get_value(slider);
		lv_obj_set_style_text_font(guider_ui.audio_set_label_5, &lv_font_SourceHanSansCN_Medium_40, 0);

        sprintf(vo_buf,"%d",vo_counter);
		lv_label_set_text(guider_ui.audio_set_label_5, vo_buf);
		break;
	}
	default:
		break;
	}
}

int selected_index_Audio = 3; // 音频通道(默认为04)

static void Audio_channels_roller_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t *roller = lv_event_get_target(e); // 获取事件的目标对象，即 Roller 控件
	switch (code)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
		static char buf[32];
		lv_roller_get_selected_str(roller, buf, sizeof(buf)); // 获取选中条目的文本值
		// printf("Selected value: %s\n", buf);
        selected_index_Audio = lv_roller_get_selected(roller);
		// printf("Selected index: %d\n", selected_index_Audio);
		// LvglKeyValDataSend(BUTTON_LCH, selected_index_Audio);
		break;
	}
    	default:
		break;
	}
}

void events_init_audio_set(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->audio_set_imgbtn_1, audio_set_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->audio_set_slider_1, audio_set_slider_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->audio_set_roller_1, Audio_channels_roller_1_event_handler, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(ui->audio_set_roller_1, selected_index_Audio, LV_ANIM_OFF); // 保证滚轮状态
    lv_slider_set_value(ui->audio_set_slider_1, vo_counter, LV_ANIM_OFF);              // 保证滑动块状态
}
static void language_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
	        if(1==identity_man){
            if (guider_ui.menu_del == true) {
	          setup_scr_menu(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_del = true;
            }
            else if (0==identity_man)
            {
            if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
            }

	    }
		break;
	}
	default:
		break;
	}
}
// 事件处理函数，使用 user_data 参数
static void language_imgbtn_common_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        // 从 event 结构体中获取 user_data，即我们的 ui 指针
        lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

        // 检查 ui 指针是否有效
        if (ui == NULL) return;

        // 根据触发事件的对象切换按钮状态
        lv_obj_t * btn_clicked = lv_event_get_target(e);
        if (btn_clicked == ui->language_imgbtn_2) {
            country = 0;   //简体
            // 设置按钮2为按下状态，按钮3为释放状态
        lv_imgbtn_set_state(ui->language_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->language_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_6, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->language_imgbtn_3) {
            country = 2;   //英语
            // 设置按钮3为按下状态，按钮2为释放状态
        lv_imgbtn_set_state(ui->language_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->language_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_6, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->language_imgbtn_4)
        {
            country = 4;   //法语
        lv_imgbtn_set_state(ui->language_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_4, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->language_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_6, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->language_imgbtn_5)
        {
            country = 1;   //繁体
        lv_imgbtn_set_state(ui->language_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_5, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->language_imgbtn_6, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->language_imgbtn_6)
        {
            country = 3;   //俄语
        lv_imgbtn_set_state(ui->language_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->language_imgbtn_6, LV_IMGBTN_STATE_PRESSED);
        }
        // 刷新屏幕
        lv_refr_now(NULL);
    }
}

void events_init_language(lv_ui *ui)
{

    switch (country)
    {
    case 0: //中文
    {lv_imgbtn_set_state(ui->language_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        break;}
    case 1: //简体
    {lv_imgbtn_set_state(ui->language_imgbtn_5, LV_IMGBTN_STATE_PRESSED);
        break;}
    case 2: //英文
    {lv_imgbtn_set_state(ui->language_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        break;}
    case 3: //俄语
    {lv_imgbtn_set_state(ui->language_imgbtn_6, LV_IMGBTN_STATE_PRESSED);
        break;}
    case 4: //法语
    {lv_imgbtn_set_state(ui->language_imgbtn_4, LV_IMGBTN_STATE_PRESSED);
        break;}
    default:
        break;
    }
	lv_obj_add_event_cb(ui->language_imgbtn_1, language_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->language_imgbtn_2, language_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->language_imgbtn_3, language_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->language_imgbtn_4, language_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->language_imgbtn_5, language_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->language_imgbtn_6, language_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
}


static void Representative_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		//rt_kprintf("mic down\n");
		//LvglKeyValSend(BUTTON_MIC);
		break;
	}
	default:
		break;
	}
}






static void Representative_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        identity_man=0;
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.menu_Representative_del == true) {
	          setup_scr_menu_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.menu_Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.menu_Representative_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_Representative(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Representative_imgbtn_2, Representative_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui->Representative_imgbtn_1, Representative_event_handler, LV_EVENT_ALL, NULL);
}


static void menu_Representative_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.Representative_del == true) {
	          setup_scr_Representative(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.Representative, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.Representative_del = true;
	    }
		break;
	}
	default:
		break;
	}
}

static void menu_Representative_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.service_del == true) {
	          setup_scr_service(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.service, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.service_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void menu_Representative_imgbtn_5_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.audio_set_del == true) {
	          setup_scr_audio_set(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.audio_set, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.audio_set_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void menu_Representative_imgbtn_6_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.language_del == true) {
	          setup_scr_language(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.language, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.language_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void menu_Representative_imgbtn_7_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.set_up_del == true) {
	          setup_scr_set_up(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.set_up, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.set_up_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_menu_Representative(lv_ui *ui)
{
    lv_obj_add_event_cb(ui->menu_Representative_imgbtn_1, menu_Representative_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_Representative_imgbtn_3, menu_Representative_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_Representative_imgbtn_5, menu_Representative_imgbtn_5_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_Representative_imgbtn_6, menu_Representative_imgbtn_6_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->menu_Representative_imgbtn_7, menu_Representative_imgbtn_7_event_handler, LV_EVENT_ALL, NULL);
}






static void election_five_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_five_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_five_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_five_imgbtn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_five_imgbtn_5_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}

// 事件处理函数
static void election_five_imgbtn_common_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        // 从 event 结构体中获取 user_data，即我们的 ui 指针
        lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

        // 检查 ui 指针是否有效
        if (ui == NULL) return;

        // 根据触发事件的对象切换按钮状态
        lv_obj_t * btn_clicked = lv_event_get_target(e);
        if (btn_clicked == ui->election_five_imgbtn_1) {
            election_value=1;
            //LvglKeyValSend(BUTTON_SELECT_OPTION1);
        lv_imgbtn_set_state(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->election_five_imgbtn_2) {
            election_value=3;
            //LvglKeyValSend(BUTTON_SELECT_OPTION2);
        lv_imgbtn_set_state(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->election_five_imgbtn_3) {
            election_value=5;
            //LvglKeyValSend(BUTTON_SELECT_OPTION3);
        lv_imgbtn_set_state(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->election_five_imgbtn_4) {
            election_value=2;
            //LvglKeyValSend(BUTTON_SELECT_OPTION4);
        lv_imgbtn_set_state(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
         } else if (btn_clicked == ui->election_five_imgbtn_5) {
            election_value=4;
            //LvglKeyValSend(BUTTON_SELECT_OPTION5);
        lv_imgbtn_set_state(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_PRESSED);
         }
           // 刷新屏幕
        lv_refr_now(NULL);
    }
}

void events_init_election_five(lv_ui *ui)
{
    switch (election_value)
    {
    case 0:{
        lv_imgbtn_set_state(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        break;
    }
    case 1:{
        lv_imgbtn_set_state(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 2:{
        lv_imgbtn_set_state(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 3:{
        lv_imgbtn_set_state(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 4:{
        lv_imgbtn_set_state(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 5:{
        lv_imgbtn_set_state(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    default:
        break;
    }
    select_flag = 5;
    lv_obj_add_event_cb(ui->election_five_imgbtn_1, election_five_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_five_imgbtn_2, election_five_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_five_imgbtn_3, election_five_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_five_imgbtn_4, election_five_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_five_imgbtn_5, election_five_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_five_imgbtn_1, election_five_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_five_imgbtn_2, election_five_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_five_imgbtn_3, election_five_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_five_imgbtn_4, election_five_imgbtn_4_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_five_imgbtn_5, election_five_imgbtn_5_event_handler, LV_EVENT_ALL, NULL);
}
static void election_four_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_four_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_four_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_four_imgbtn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}


// 事件处理函数
static void election_four_imgbtn_common_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        // 从 event 结构体中获取 user_data，即我们的 ui 指针
        lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

        // 检查 ui 指针是否有效
        if (ui == NULL) return;

        // 根据触发事件的对象切换按钮状态
        lv_obj_t * btn_clicked = lv_event_get_target(e);
        if (btn_clicked == ui->election_four_imgbtn_1) {
            election_value=1;
            //LvglKeyValSend(BUTTON_SELECT_OPTION1);
        lv_imgbtn_set_state(ui->election_four_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->election_four_imgbtn_2) {
            election_value=2;
            //LvglKeyValSend(BUTTON_SELECT_OPTION2);
        lv_imgbtn_set_state(ui->election_four_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->election_four_imgbtn_3) {
            election_value=3;
            //LvglKeyValSend(BUTTON_SELECT_OPTION3);
        lv_imgbtn_set_state(ui->election_four_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->election_four_imgbtn_4) {
            election_value=4;
            //LvglKeyValSend(BUTTON_SELECT_OPTION4);
        lv_imgbtn_set_state(ui->election_four_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_4, LV_IMGBTN_STATE_PRESSED);
         }
           // 刷新屏幕
        lv_refr_now(NULL);
    }
}
void events_init_election_four(lv_ui *ui)
{
     switch (election_value)
    {
    case 0:{
        lv_imgbtn_set_state(ui->election_four_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_four_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        break;
    }
    case 1:{
        lv_imgbtn_set_state(ui->election_four_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 2:{
        lv_imgbtn_set_state(ui->election_four_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 3:{
        lv_imgbtn_set_state(ui->election_four_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 4:{
        lv_imgbtn_set_state(ui->election_four_imgbtn_4, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    default:
        break;
    }
    select_flag = 4;
    lv_obj_add_event_cb(ui->election_four_imgbtn_1, election_four_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_four_imgbtn_2, election_four_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_four_imgbtn_3, election_four_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_four_imgbtn_4, election_four_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_four_imgbtn_1, election_four_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_four_imgbtn_2, election_four_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_four_imgbtn_3, election_four_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_four_imgbtn_4, election_four_imgbtn_4_event_handler, LV_EVENT_ALL, NULL);
}
static void election_three_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_three_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_three_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}

// 事件处理函数
static void election_three_imgbtn_common_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        // 从 event 结构体中获取 user_data，即我们的 ui 指针
        lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

        // 检查 ui 指针是否有效
        if (ui == NULL) return;

        // 根据触发事件的对象切换按钮状态
        lv_obj_t * btn_clicked = lv_event_get_target(e);
        if (btn_clicked == ui->election_three_imgbtn_1) {
            election_value=1;
            //LvglKeyValSend(BUTTON_SELECT_OPTION1);
        lv_imgbtn_set_state(ui->election_three_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_three_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_three_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->election_three_imgbtn_2)
        {
            election_value=2;
            //LvglKeyValSend(BUTTON_SELECT_OPTION2);
        lv_imgbtn_set_state(ui->election_three_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_three_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_three_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->election_three_imgbtn_3)
        {
            election_value=3;
            //LvglKeyValSend(BUTTON_SELECT_OPTION3);
        lv_imgbtn_set_state(ui->election_three_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_three_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_three_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        }
               // 刷新屏幕
        lv_refr_now(NULL);
    }
}




void events_init_election_three(lv_ui *ui)
{
     switch (election_value)
    {
    case 0:{
        lv_imgbtn_set_state(ui->election_three_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_three_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_three_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        break;
    }
    case 1:{
        lv_imgbtn_set_state(ui->election_three_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 2:{
        lv_imgbtn_set_state(ui->election_three_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 3:{
        lv_imgbtn_set_state(ui->election_three_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        break;
    }

    default:
        break;
    }
    select_flag = 3;
    lv_obj_add_event_cb(ui->election_three_imgbtn_1, election_three_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_three_imgbtn_2, election_three_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_three_imgbtn_3, election_three_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_three_imgbtn_1, election_three_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_three_imgbtn_2, election_three_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_three_imgbtn_3, election_three_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
}
static void election_two_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_two_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_prot_del == true) {
	          setup_scr_election_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}

static void election_two_imgbtn_common_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        // 从 event 结构体中获取 user_data，即我们的 ui 指针
        lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

        // 检查 ui 指针是否有效
        if (ui == NULL) return;

        // 根据触发事件的对象切换按钮状态s
        lv_obj_t * btn_clicked = lv_event_get_target(e);
        if (btn_clicked == ui->election_two_imgbtn_1) {
            election_value=1;
            //LvglKeyValSend(BUTTON_SELECT_OPTION1);
        lv_imgbtn_set_state(ui->election_two_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->election_two_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->election_two_imgbtn_2)
        {
            election_value=2;
            //LvglKeyValSend(BUTTON_SELECT_OPTION2);
        lv_imgbtn_set_state(ui->election_two_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_two_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        }
                      // 刷新屏幕
        lv_refr_now(NULL);
    }
}
void events_init_election_two(lv_ui *ui)
{
    switch (election_value)
    {
    case 0:{
        lv_imgbtn_set_state(ui->election_two_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->election_two_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        break;
    }
    case 1:{
        lv_imgbtn_set_state(ui->election_two_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        break;
    }
    case 2:{
        lv_imgbtn_set_state(ui->election_two_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        break;
    }

    default:
        break;
    }
    select_flag = 2;
    lv_obj_add_event_cb(ui->election_two_imgbtn_1, election_two_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_two_imgbtn_2, election_two_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->election_two_imgbtn_1, election_two_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_two_imgbtn_2, election_two_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}

static void pop_tea_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.service_del == true) {
	          setup_scr_service(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.service, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.service_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void pop_tea_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);

	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.service_confirm_del == true) {
	          setup_scr_service_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.service_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.service_confirm_del = true;
	    }
        //LvglKeyValSend(BUTTON_TEA_SERVICE);
		break;
	}
	default:
		break;
	}
}
void events_init_pop_tea(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->pop_tea_imgbtn_1, pop_tea_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->pop_tea_imgbtn_2, pop_tea_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}
static void pop_pen_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.service_del == true) {
	          setup_scr_service(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.service, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.service_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void pop_pen_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);

	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.service_confirm_del == true) {
	          setup_scr_service_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.service_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.service_confirm_del = true;
	    }
        //LvglKeyValSend(BUTTON_PEN_SERVICE);
		break;
	}
	default:
		break;
	}
}
void events_init_pop_pen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->pop_pen_imgbtn_1, pop_pen_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->pop_pen_imgbtn_2, pop_pen_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}
static void pop_man_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.service_del == true) {
	          setup_scr_service(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.service, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.service_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void pop_man_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);

	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.service_confirm_del == true) {
	          setup_scr_service_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.service_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.service_confirm_del = true;
	    }
        //LvglKeyValSend(BUTTON_ARTIFICIAL_SERVICE);
		break;
	}
	default:
		break;
	}
}

void events_init_pop_man(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->pop_man_imgbtn_1, pop_man_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->pop_man_imgbtn_2, pop_man_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}


static void rating_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{

		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.rating_prot_del == true) {
	          setup_scr_rating_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.rating_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.rating_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}

static void rating_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{

		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.rating_prot_del == true) {
	          setup_scr_rating_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.rating_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.rating_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void rating_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{

		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.rating_prot_del == true) {
	          setup_scr_rating_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.rating_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.rating_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void rating_imgbtn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{

		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.rating_prot_del == true) {
	          setup_scr_rating_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.rating_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.rating_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void rating_imgbtn_5_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{

		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.rating_prot_del == true) {
	          setup_scr_rating_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.rating_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.rating_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}


// 事件处理函数，使用 user_data 参数
static void rating_imgbtn_common_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        // 从 event 结构体中获取 user_data，即我们的 ui 指针
        lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

        // 检查 ui 指针是否有效
        if (ui == NULL) return;

        // 根据触发事件的对象切换按钮状态
        lv_obj_t * btn_clicked = lv_event_get_target(e);
        if (btn_clicked == ui->rating_imgbtn_1) {
            rating_flag = 1;   //优秀
            //LvglKeyValSend(BUTTON_SELECT_OPTION1);
        lv_imgbtn_set_state(ui->rating_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->rating_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_5, LV_IMGBTN_STATE_RELEASED);

        } else if (btn_clicked == ui->rating_imgbtn_4) {
            rating_flag = 2;   //良好
            //LvglKeyValSend(BUTTON_SELECT_OPTION2);
        lv_imgbtn_set_state(ui->rating_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_4, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->rating_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->rating_imgbtn_2)
        {
            rating_flag = 3;   //中等
            //LvglKeyValSend(BUTTON_SELECT_OPTION3);
        lv_imgbtn_set_state(ui->rating_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->rating_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->rating_imgbtn_5)
        {
            rating_flag = 4;   //及格
            //LvglKeyValSend(BUTTON_SELECT_OPTION4);
        lv_imgbtn_set_state(ui->rating_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_5, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->rating_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->rating_imgbtn_3)
        {
            rating_flag = 5;   //较差
            //LvglKeyValSend(BUTTON_SELECT_OPTION5);
        lv_imgbtn_set_state(ui->rating_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        }
        // 刷新屏幕
        lv_refr_now(NULL);
    }
}


void events_init_rating(lv_ui *ui)
{
    select_flag = 1;
    switch (rating_flag)
    {
    case 0:{
        lv_imgbtn_set_state(ui->rating_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_4, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_5, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->rating_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        break;
    }
    case 1:lv_imgbtn_set_state(ui->rating_imgbtn_1, LV_IMGBTN_STATE_PRESSED);break;
    case 2:lv_imgbtn_set_state(ui->rating_imgbtn_4, LV_IMGBTN_STATE_PRESSED);break;
    case 3:lv_imgbtn_set_state(ui->rating_imgbtn_2, LV_IMGBTN_STATE_PRESSED);break;
    case 4:lv_imgbtn_set_state(ui->rating_imgbtn_5, LV_IMGBTN_STATE_PRESSED);break;
    case 5:lv_imgbtn_set_state(ui->rating_imgbtn_3, LV_IMGBTN_STATE_PRESSED);break;


    default:
        break;
    }
    lv_obj_add_event_cb(ui->rating_imgbtn_1, rating_imgbtn_common_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->rating_imgbtn_2, rating_imgbtn_common_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->rating_imgbtn_3, rating_imgbtn_common_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->rating_imgbtn_4, rating_imgbtn_common_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->rating_imgbtn_5, rating_imgbtn_common_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->rating_imgbtn_1, rating_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->rating_imgbtn_2, rating_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->rating_imgbtn_3, rating_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->rating_imgbtn_4, rating_imgbtn_4_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->rating_imgbtn_5, rating_imgbtn_5_event_handler, LV_EVENT_ALL, NULL);
}


static void rating_prot_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        rating_flag = 0;
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.rating_del == true) {
	          setup_scr_rating(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.rating, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.rating_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void rating_prot_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.rating_del == true) {
	          setup_scr_rating(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.rating, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.rating_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_rating_prot(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->rating_prot_imgbtn_1, rating_prot_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->rating_prot_imgbtn_2, rating_prot_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}


static void sign_Rep_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.sign_Rep_success_del == true) {
	          setup_scr_sign_Rep_success(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.sign_Rep_success, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.sign_Rep_success_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_PC_sign(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->sign_Rep_imgbtn_1, sign_Rep_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
}


static void election_prot_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        election_value=0;
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.election_two_del == true) {
	          setup_scr_election_two(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.election_two, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.election_two_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void election_prot_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		break;
	}
	default:
		break;
	}
}
void events_init_election_prot(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->election_prot_imgbtn_1, election_prot_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->election_prot_imgbtn_2, election_prot_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}


 int satis_flag=3;     //0满意，1基本满意，2 不满意 ，3 未表决





 static void Satisfaction_imgbtn_common_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        // 从 event 结构体中获取 user_data，即我们的 ui 指针
        lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

        // 检查 ui 指针是否有效
        if (ui == NULL) return;

        // 根据触发事件的对象切换按钮状态
        lv_obj_t * btn_clicked = lv_event_get_target(e);
        if (btn_clicked == ui->Satisfaction_imgbtn_1) {
            satis_flag = 0;   //满意
           // LvglKeyValSend(BUTTON_SATISFIED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        }
        else if (btn_clicked == ui->Satisfaction_imgbtn_2)
        {
             satis_flag = 1;   //基本满意
             //LvglKeyValSend(BUTTON_BASIC_SATISFATION);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        }
        else if (btn_clicked == ui->Satisfaction_imgbtn_3)
        {
             satis_flag = 2;   //不满意
             //LvglKeyValSend(BUTTON_DISSATISFIED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        }
         // 刷新屏幕
        lv_refr_now(NULL);
    }
}


static void Satisfaction_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.Satisfaction_prot_del == true) {
	          setup_scr_Satisfaction_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.Satisfaction_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.Satisfaction_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void Satisfaction_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.Satisfaction_prot_del == true) {
	          setup_scr_Satisfaction_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.Satisfaction_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.Satisfaction_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void Satisfaction_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.Satisfaction_prot_del == true) {
	          setup_scr_Satisfaction_prot(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.Satisfaction_prot, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.Satisfaction_prot_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_Satisfaction(lv_ui *ui)
{
    switch (satis_flag)
    {
    case 0:{
        lv_imgbtn_set_state(ui->Satisfaction_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        break;
        }
    case 1:{
        lv_imgbtn_set_state(ui->Satisfaction_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        break;
        }
    case 2:{
        lv_imgbtn_set_state(ui->Satisfaction_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        break;
        }
    case 3:{
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
             lv_imgbtn_set_state(ui->Satisfaction_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        break;
        }
    default:
        break;
    }

    lv_obj_add_event_cb(ui->Satisfaction_imgbtn_1, Satisfaction_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->Satisfaction_imgbtn_2, Satisfaction_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->Satisfaction_imgbtn_3, Satisfaction_imgbtn_common_event_handler, LV_EVENT_CLICKED, ui);
	lv_obj_add_event_cb(ui->Satisfaction_imgbtn_1, Satisfaction_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->Satisfaction_imgbtn_2, Satisfaction_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->Satisfaction_imgbtn_3, Satisfaction_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);

}


static void Satisfaction_prot_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
        satis_flag=3;     //返回默认全部都为未选择状态
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.Satisfaction_del == true) {
	          setup_scr_Satisfaction(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.Satisfaction, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.Satisfaction_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void Satisfaction_prot_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{

		break;
	}
	default:
		break;
	}
}
void events_init_Satisfaction_prot(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Satisfaction_prot_imgbtn_1, Satisfaction_prot_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->Satisfaction_prot_imgbtn_2, Satisfaction_prot_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}


static void vote_rep_imgbtn_common_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED) {
        // 从 event 结构体中获取 user_data，即我们的 ui 指针
        lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

        // 检查 ui 指针是否有效
        if (ui == NULL) return;

        // 根据触发事件的对象切换按钮状态
        lv_obj_t * btn_clicked = lv_event_get_target(e);
        if (btn_clicked == ui->vote_rep_imgbtn_1) {
            vote_flag = 1;
            //LvglKeyValSend(BUTTON_SELECT_OPTION1);
            // 设置按钮2为按下状态，按钮3为释放状态
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_1, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->vote_rep_imgbtn_2) {
            vote_flag = 2;
            //LvglKeyValSend(BUTTON_SELECT_OPTION2);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_2, LV_IMGBTN_STATE_PRESSED);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        } else if (btn_clicked == ui->vote_rep_imgbtn_3) {
            vote_flag = 3;
            //LvglKeyValSend(BUTTON_SELECT_OPTION3);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_3, LV_IMGBTN_STATE_PRESSED);
        }
        // 刷新屏幕
        lv_refr_now(NULL);
    }
}


static void vote_rep_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_confirm_del == true) {
	          setup_scr_vote_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_confirm_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void vote_rep_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_confirm_del == true) {
	          setup_scr_vote_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_confirm_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
static void vote_rep_imgbtn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		//Write the load screen code.
	    lv_obj_t * act_scr = lv_scr_act();
	    lv_disp_t * d = lv_obj_get_disp(act_scr);
	    if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr)) {
			lv_obj_clean(act_scr);
	        if (guider_ui.vote_confirm_del == true) {
	          setup_scr_vote_confirm(&guider_ui);
	        }
	        lv_scr_load_anim(guider_ui.vote_confirm, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	        guider_ui.vote_confirm_del = true;
	    }
		break;
	}
	default:
		break;
	}
}
void events_init_vote_rep(lv_ui *ui)
{
    switch (vote_flag)
    {
    case 0:
    {
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_1, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_2, LV_IMGBTN_STATE_RELEASED);
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_3, LV_IMGBTN_STATE_RELEASED);
        break;
        }
    case 1:
    {
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED);
        break;
        }
    case 2:
    {
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_2, LV_IMGBTN_STATE_CHECKED_RELEASED);
        break;
        }
    case 3:
    {
        lv_imgbtn_set_state(ui->vote_rep_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED);
        break;
    }
    default:
        break;
    }
    select_flag = 17;
    lv_obj_add_event_cb(ui->vote_rep_imgbtn_1, vote_rep_imgbtn_common_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->vote_rep_imgbtn_2, vote_rep_imgbtn_common_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->vote_rep_imgbtn_3, vote_rep_imgbtn_common_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->vote_rep_imgbtn_1, vote_rep_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vote_rep_imgbtn_2, vote_rep_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->vote_rep_imgbtn_3, vote_rep_imgbtn_3_event_handler, LV_EVENT_ALL, NULL);
}

static void confirm_imgbtn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
        //LvglKeyValSend(BUTTON_APPLY_SPEAK_REFUSE);
		break;
	}
	default:
		break;
	}
}
static void confirm_imgbtn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
    //LvglKeyValSend(BUTTON_APPLY_SPEAK_AGREE);
		break;
	}
	default:
		break;
	}
}
void events_init_confirm(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->confirm_imgbtn_1, confirm_imgbtn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->confirm_imgbtn_2, confirm_imgbtn_2_event_handler, LV_EVENT_ALL, NULL);
}

void events_init(lv_ui *ui)
{


}
