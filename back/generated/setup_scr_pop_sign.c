/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"
extern int country;

void setup_scr_pop_sign(lv_ui *ui)
{
	//Write codes pop_sign
	ui->pop_sign = lv_obj_create(NULL);
	lv_obj_set_size(ui->pop_sign, 800, 480);
	lv_obj_set_scrollbar_mode(ui->pop_sign, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_sign, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->pop_sign, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->pop_sign, &_popwindow_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->pop_sign, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes pop_sign_label_1
	ui->pop_sign_label_1 = lv_label_create(ui->pop_sign);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->pop_sign_label_1, "提示");
	lv_label_set_long_mode(ui->pop_sign_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->pop_sign_label_1, 368, 34);
	lv_obj_set_size(ui->pop_sign_label_1, 65, 38);
	lv_obj_set_scrollbar_mode(ui->pop_sign_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_sign_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->pop_sign_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->pop_sign_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->pop_sign_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->pop_sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes pop_sign_img_1
	ui->pop_sign_img_1 = lv_img_create(ui->pop_sign);
	lv_obj_add_flag(ui->pop_sign_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->pop_sign_img_1, &_hint_alpha_72x72);
	lv_img_set_pivot(ui->pop_sign_img_1, 50,50);
	lv_img_set_angle(ui->pop_sign_img_1, 0);
	lv_obj_set_pos(ui->pop_sign_img_1, 364, 184);
	lv_obj_set_size(ui->pop_sign_img_1, 72, 72);
	lv_obj_set_scrollbar_mode(ui->pop_sign_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_sign_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->pop_sign_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes pop_sign_pop_ID
	ui->pop_sign_pop_ID = lv_label_create(ui->pop_sign);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->pop_sign_pop_ID, "禁止签到！");
	lv_label_set_long_mode(ui->pop_sign_pop_ID, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->pop_sign_pop_ID, 189, 284);
	lv_obj_set_size(ui->pop_sign_pop_ID, 421, 38);
	lv_obj_set_scrollbar_mode(ui->pop_sign_pop_ID, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_sign_pop_ID, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->pop_sign_pop_ID, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->pop_sign_pop_ID, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->pop_sign_pop_ID, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->pop_sign_pop_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->pop_sign);


}
