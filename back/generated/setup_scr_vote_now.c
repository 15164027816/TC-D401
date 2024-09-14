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


void setup_scr_vote_now(lv_ui *ui)
{
	//Write codes vote_now
	ui->vote_now = lv_obj_create(NULL);
	lv_obj_set_size(ui->vote_now, 800, 480);
	lv_obj_set_scrollbar_mode(ui->vote_now, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->vote_now, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->vote_now, &_vote_result_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->vote_now, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_label_1
	ui->vote_now_label_1 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_1, "本次表决结果");
	lv_label_set_long_mode(ui->vote_now_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_1, 303, 34);
	lv_obj_set_size(ui->vote_now_label_1, 195, 38);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_label_4
	ui->vote_now_label_4 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_4, "赞成");
	lv_label_set_long_mode(ui->vote_now_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_4, 68, 144);
	lv_obj_set_size(ui->vote_now_label_4, 68, 32);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_4, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_4, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_label_5
	ui->vote_now_label_5 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_5, "反对");
	lv_label_set_long_mode(ui->vote_now_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_5, 436, 144);
	lv_obj_set_size(ui->vote_now_label_5, 68, 32);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_5, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_label_6
	ui->vote_now_label_6 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_6, "弃权");
	lv_label_set_long_mode(ui->vote_now_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_6, 68, 264);
	lv_obj_set_size(ui->vote_now_label_6, 68, 32);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_6, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_6, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_label_7
	ui->vote_now_label_7 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_7, "总数");
	lv_label_set_long_mode(ui->vote_now_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_7, 436, 264);
	lv_obj_set_size(ui->vote_now_label_7, 68, 32);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_7, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_7, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_label_8
	ui->vote_now_label_8 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_8, "10");
	lv_label_set_long_mode(ui->vote_now_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_8, 325, 144);
	lv_obj_set_size(ui->vote_now_label_8, 42, 32);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_8, lv_color_hex(0x00B119), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_8, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_8, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_label_9
	ui->vote_now_label_9 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_9, "2");
	lv_label_set_long_mode(ui->vote_now_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_9, 325, 264);
	lv_obj_set_size(ui->vote_now_label_9, 42, 32);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_9, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_9, lv_color_hex(0xD89800), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_9, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_9, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_label_10
	ui->vote_now_label_10 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_10, "15");
	lv_label_set_long_mode(ui->vote_now_label_10, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_10, 693, 264);
	lv_obj_set_size(ui->vote_now_label_10, 42, 32);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_10, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_10, lv_color_hex(0x007AFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_10, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_10, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_label_11
	ui->vote_now_label_11 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_11, "3");
	lv_label_set_long_mode(ui->vote_now_label_11, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_11, 693, 144);
	lv_obj_set_size(ui->vote_now_label_11, 42, 32);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_11, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_11, lv_color_hex(0xB10000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_11, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_11, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes vote_now_imgbtn_1
	ui->vote_now_imgbtn_1 = lv_imgbtn_create(ui->vote_now);
	lv_obj_add_flag(ui->vote_now_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->vote_now_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_redlongbut_alpha_280x64, NULL);
	lv_imgbtn_set_src(ui->vote_now_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_redlongbut_clk_alpha_280x64, NULL);
	lv_obj_add_flag(ui->vote_now_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->vote_now_imgbtn_1_label = lv_label_create(ui->vote_now_imgbtn_1);
	lv_label_set_text(ui->vote_now_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->vote_now_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->vote_now_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->vote_now_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->vote_now_imgbtn_1, 260, 372);
	lv_obj_set_size(ui->vote_now_imgbtn_1, 280, 64);
	lv_obj_set_scrollbar_mode(ui->vote_now_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->vote_now_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for vote_now_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->vote_now_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->vote_now_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->vote_now_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->vote_now_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for vote_now_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->vote_now_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->vote_now_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->vote_now_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->vote_now_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes vote_now_label_12
	ui->vote_now_label_12 = lv_label_create(ui->vote_now);
	lv_label_set_text(ui->vote_now_label_12, "退出表决");
	lv_label_set_long_mode(ui->vote_now_label_12, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->vote_now_label_12, 350, 392);
	lv_obj_set_size(ui->vote_now_label_12, 98, 24);
	lv_obj_set_scrollbar_mode(ui->vote_now_label_12, LV_SCROLLBAR_MODE_OFF);

	//Write style for vote_now_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->vote_now_label_12, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->vote_now_label_12, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->vote_now_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->vote_now_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->vote_now);

	
	//Init events for screen.
	events_init_vote_now(ui);
}
