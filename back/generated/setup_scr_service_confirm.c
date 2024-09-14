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


void setup_scr_service_confirm(lv_ui *ui)
{
	//Write codes service_confirm
	ui->service_confirm = lv_obj_create(NULL);
	lv_obj_set_size(ui->service_confirm, 800, 480);
	lv_obj_set_scrollbar_mode(ui->service_confirm, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->service_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->service_confirm, &_popwindow_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->service_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_confirm_label_1
	ui->service_confirm_label_1 = lv_label_create(ui->service_confirm);
	lv_label_set_text(ui->service_confirm_label_1, "提示");
	lv_label_set_long_mode(ui->service_confirm_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_confirm_label_1, 368, 34);
	lv_obj_set_size(ui->service_confirm_label_1, 68, 38);
	lv_obj_set_scrollbar_mode(ui->service_confirm_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_confirm_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_confirm_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_confirm_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_confirm_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_confirm_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_confirm_img_1
	ui->service_confirm_img_1 = lv_img_create(ui->service_confirm);
	lv_obj_add_flag(ui->service_confirm_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->service_confirm_img_1, &_success_alpha_72x72);
	lv_img_set_pivot(ui->service_confirm_img_1, 50,50);
	lv_img_set_angle(ui->service_confirm_img_1, 0);
	lv_obj_set_pos(ui->service_confirm_img_1, 364, 184);
	lv_obj_set_size(ui->service_confirm_img_1, 72, 72);
	lv_obj_set_scrollbar_mode(ui->service_confirm_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_confirm_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->service_confirm_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_confirm_label_2
	ui->service_confirm_label_2 = lv_label_create(ui->service_confirm);
	lv_label_set_text(ui->service_confirm_label_2, "发送成功,请等待服务人员处理");
	lv_label_set_long_mode(ui->service_confirm_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_confirm_label_2, 173, 284);
	lv_obj_set_size(ui->service_confirm_label_2, 454, 32);
	lv_obj_set_scrollbar_mode(ui->service_confirm_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_confirm_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_confirm_label_2, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_confirm_label_2, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_confirm_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_confirm_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->service_confirm);

	
	//Init events for screen.
	events_init_service_confirm(ui);
}
