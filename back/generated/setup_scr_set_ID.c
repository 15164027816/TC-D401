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


void setup_scr_set_ID(lv_ui *ui)
{
	//Write codes set_ID
	ui->set_ID = lv_obj_create(NULL);
	lv_obj_set_size(ui->set_ID, 800, 480);
	lv_obj_set_scrollbar_mode(ui->set_ID, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_ID, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->set_ID, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->set_ID, &_setID_back_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->set_ID, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_ID_label_1
	ui->set_ID_label_1 = lv_label_create(ui->set_ID);
	lv_label_set_text(ui->set_ID_label_1, "设置ID");
	lv_label_set_long_mode(ui->set_ID_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_ID_label_1, 351, 34);
	lv_obj_set_size(ui->set_ID_label_1, 98, 36);
	lv_obj_set_scrollbar_mode(ui->set_ID_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_ID_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_ID_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_ID_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_ID_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_ID_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_ID_label_2
	ui->set_ID_label_2 = lv_label_create(ui->set_ID);
	lv_label_set_text(ui->set_ID_label_2, "当前ID:");
	lv_label_set_long_mode(ui->set_ID_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_ID_label_2, 68, 128);
	lv_obj_set_size(ui->set_ID_label_2, 130, 35);
	lv_obj_set_scrollbar_mode(ui->set_ID_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_ID_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_ID_label_2, lv_color_hex(0x6f8fa9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_ID_label_2, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_ID_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_ID_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_ID_label_3
	ui->set_ID_label_3 = lv_label_create(ui->set_ID);
	lv_label_set_text(ui->set_ID_label_3, "本机ID:");
	lv_label_set_long_mode(ui->set_ID_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_ID_label_3, 68, 220);
	lv_obj_set_size(ui->set_ID_label_3, 130, 35);
	lv_obj_set_scrollbar_mode(ui->set_ID_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_ID_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_ID_label_3, lv_color_hex(0x6f8fa9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_ID_label_3, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_ID_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_ID_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_ID_label_4
	ui->set_ID_label_4 = lv_label_create(ui->set_ID);
	lv_label_set_text(ui->set_ID_label_4, "001");
	lv_label_set_long_mode(ui->set_ID_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_ID_label_4, 674, 128);
	lv_obj_set_size(ui->set_ID_label_4, 58, 32);
	lv_obj_set_scrollbar_mode(ui->set_ID_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_ID_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_ID_label_4, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_ID_label_4, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_ID_label_4, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_ID_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_ID_label_5
	ui->set_ID_label_5 = lv_label_create(ui->set_ID);
	lv_label_set_text(ui->set_ID_label_5, "002");
	lv_label_set_long_mode(ui->set_ID_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_ID_label_5, 674, 220);
	lv_obj_set_size(ui->set_ID_label_5, 58, 32);
	lv_obj_set_scrollbar_mode(ui->set_ID_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_ID_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_ID_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_ID_label_5, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_ID_label_5, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_ID_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_ID_label_6
	ui->set_ID_label_6 = lv_label_create(ui->set_ID);
	lv_label_set_text(ui->set_ID_label_6, "将\"当前ID\"修改为\"本机ID\"请按\"设置\"按钮");
	lv_label_set_long_mode(ui->set_ID_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_ID_label_6, 133, 300);
	lv_obj_set_size(ui->set_ID_label_6, 535, 27);
	lv_obj_set_scrollbar_mode(ui->set_ID_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_ID_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_ID_label_6, lv_color_hex(0x33425b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_ID_label_6, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_ID_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_ID_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_ID_imgbtn_1
	ui->set_ID_imgbtn_1 = lv_imgbtn_create(ui->set_ID);
	lv_obj_add_flag(ui->set_ID_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->set_ID_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_confirm_def_alpha_240x80, NULL);
	lv_imgbtn_set_src(ui->set_ID_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_confirm_clk_alpha_240x80, NULL);
	lv_obj_add_flag(ui->set_ID_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->set_ID_imgbtn_1_label = lv_label_create(ui->set_ID_imgbtn_1);
	lv_label_set_text(ui->set_ID_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->set_ID_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->set_ID_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->set_ID_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->set_ID_imgbtn_1, 280, 356);
	lv_obj_set_size(ui->set_ID_imgbtn_1, 240, 80);
	lv_obj_set_scrollbar_mode(ui->set_ID_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_ID_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->set_ID_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_ID_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_ID_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_ID_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_ID_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for set_ID_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->set_ID_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->set_ID_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->set_ID_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->set_ID_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for set_ID_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->set_ID_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->set_ID_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->set_ID_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->set_ID_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes set_ID_label_7
	ui->set_ID_label_7 = lv_label_create(ui->set_ID);
	lv_label_set_text(ui->set_ID_label_7, "设置");
	lv_label_set_long_mode(ui->set_ID_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_ID_label_7, 368, 378);
	lv_obj_set_size(ui->set_ID_label_7, 65, 32);
	lv_obj_set_scrollbar_mode(ui->set_ID_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_ID_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_ID_label_7, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_ID_label_7, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_ID_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_ID_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->set_ID);

	
}
