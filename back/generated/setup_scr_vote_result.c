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


void setup_scr_vote_result(lv_ui *ui)
{
	//Write codes vote_result
	ui->vote_result = lv_obj_create(NULL);
	lv_obj_set_size(ui->vote_result, 800, 480);
	lv_obj_set_scrollbar_mode(ui->vote_result, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->vote_result, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->vote_result, &_votresult_back_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->vote_result, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_imgbtn_1
	ui->vote_result_imgbtn_1 = lv_imgbtn_create(ui->vote_result);
	lv_obj_add_flag(ui->vote_result_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->vote_result_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->vote_result_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_obj_add_flag(ui->vote_result_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->vote_result_imgbtn_1_label = lv_label_create(ui->vote_result_imgbtn_1);
	lv_label_set_text(ui->vote_result_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->vote_result_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->vote_result_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->vote_result_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->vote_result_imgbtn_1, 20, 11);
	lv_obj_set_size(ui->vote_result_imgbtn_1, 68, 48);
	lv_obj_set_scrollbar_mode(ui->vote_result_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->vote_result_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for vote_result_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->vote_result_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->vote_result_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->vote_result_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->vote_result_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for vote_result_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->vote_result_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->vote_result_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->vote_result_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->vote_result_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes vote_result_label_1
	ui->vote_result_label_1 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_1, "表决结果");
	lv_label_set_long_mode(ui->vote_result_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_1, 331, 19);
	lv_obj_set_size(ui->vote_result_label_1, 138, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_2
	ui->vote_result_label_2 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_2, "14:22");
	lv_label_set_long_mode(ui->vote_result_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_2, 685, 19);
	lv_obj_set_size(ui->vote_result_label_2, 95, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_2, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_3
	ui->vote_result_label_3 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_3, "上次表决结果");
	lv_label_set_long_mode(ui->vote_result_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_3, 303, 106);
	lv_obj_set_size(ui->vote_result_label_3, 204, 36);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_3, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_3, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_4
	ui->vote_result_label_4 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_4, "赞成");
	lv_label_set_long_mode(ui->vote_result_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_4, 68, 194);
	lv_obj_set_size(ui->vote_result_label_4, 68, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_4, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_4, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_5
	ui->vote_result_label_5 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_5, "反对");
	lv_label_set_long_mode(ui->vote_result_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_5, 436, 194);
	lv_obj_set_size(ui->vote_result_label_5, 68, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_5, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_6
	ui->vote_result_label_6 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_6, "弃权");
	lv_label_set_long_mode(ui->vote_result_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_6, 68, 314);
	lv_obj_set_size(ui->vote_result_label_6, 68, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_6, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_6, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_7
	ui->vote_result_label_7 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_7, "总数");
	lv_label_set_long_mode(ui->vote_result_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_7, 436, 314);
	lv_obj_set_size(ui->vote_result_label_7, 68, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_7, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_7, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_8
	ui->vote_result_label_8 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_8, "10");
	lv_label_set_long_mode(ui->vote_result_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_8, 325, 194);
	lv_obj_set_size(ui->vote_result_label_8, 42, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_8, lv_color_hex(0x00B119), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_8, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_8, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_9
	ui->vote_result_label_9 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_9, "2");
	lv_label_set_long_mode(ui->vote_result_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_9, 325, 314);
	lv_obj_set_size(ui->vote_result_label_9, 42, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_9, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_9, lv_color_hex(0xD89800), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_9, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_9, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_10
	ui->vote_result_label_10 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_10, "15");
	lv_label_set_long_mode(ui->vote_result_label_10, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_10, 693, 314);
	lv_obj_set_size(ui->vote_result_label_10, 42, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_10, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_10, lv_color_hex(0x007AFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_10, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_10, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_11
	ui->vote_result_label_11 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_11, "3");
	lv_label_set_long_mode(ui->vote_result_label_11, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_11, 693, 194);
	lv_obj_set_size(ui->vote_result_label_11, 42, 32);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_11, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_11, lv_color_hex(0xB10000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_11, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_11, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_img_1
	ui->vote_result_img_1 = lv_img_create(ui->vote_result);
	lv_obj_add_flag(ui->vote_result_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->vote_result_img_1, &_earphone_alpha_31x33);
	lv_img_set_pivot(ui->vote_result_img_1, 50,50);
	lv_img_set_angle(ui->vote_result_img_1, 0);
	lv_obj_set_pos(ui->vote_result_img_1, 744, 427);
	lv_obj_set_size(ui->vote_result_img_1, 31, 33);
	lv_obj_set_scrollbar_mode(ui->vote_result_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->vote_result_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_result_label_12
	ui->vote_result_label_12 = lv_label_create(ui->vote_result);
	lv_label_set_text(ui->vote_result_label_12, "00:15:34");
	lv_label_set_long_mode(ui->vote_result_label_12, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_result_label_12, 316, 422);
	lv_obj_set_size(ui->vote_result_label_12, 168, 46);
	lv_obj_set_scrollbar_mode(ui->vote_result_label_12, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_result_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_result_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_result_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_result_label_12, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_result_label_12, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_result_label_12, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_result_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_result_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_result_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_result_label_12, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_result_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_result_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_result_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->vote_result_label_12, &_time_back_168x46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->vote_result_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_result_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->vote_result);

	
	//Init events for screen.
	events_init_vote_result(ui);
}