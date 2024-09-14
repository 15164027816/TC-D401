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


void setup_scr_sign(lv_ui *ui)
{
	//Write codes sign
	ui->sign = lv_obj_create(NULL);
	lv_obj_set_size(ui->sign, 800, 480);
	lv_obj_set_scrollbar_mode(ui->sign, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->sign, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->sign, &_sinup_back_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->sign, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes sign_label_1
	ui->sign_label_1 = lv_label_create(ui->sign);
	lv_label_set_text(ui->sign_label_1, "发起签到");
	lv_label_set_long_mode(ui->sign_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->sign_label_1, 355, 34);
	lv_obj_set_size(ui->sign_label_1, 136, 37);
	lv_obj_set_scrollbar_mode(ui->sign_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->sign_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes sign_label_2
	ui->sign_label_2 = lv_label_create(ui->sign);
	lv_label_set_text(ui->sign_label_2, "应到人数:");
	lv_label_set_long_mode(ui->sign_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->sign_label_2, 68, 122);
	lv_obj_set_size(ui->sign_label_2, 162, 32);
	lv_obj_set_scrollbar_mode(ui->sign_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->sign_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->sign_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_label_2, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_label_2, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->sign_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->sign_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->sign_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->sign_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->sign_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->sign_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->sign_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes sign_label_3
	ui->sign_label_3 = lv_label_create(ui->sign);
	lv_label_set_text(ui->sign_label_3, "已到人数:");
	lv_label_set_long_mode(ui->sign_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->sign_label_3, 68, 210);
	lv_obj_set_size(ui->sign_label_3, 162, 32);
	lv_obj_set_scrollbar_mode(ui->sign_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->sign_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->sign_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_label_3, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_label_3, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->sign_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->sign_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->sign_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->sign_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->sign_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->sign_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->sign_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes sign_label_4
	ui->sign_label_4 = lv_label_create(ui->sign);
	lv_label_set_text(ui->sign_label_4, "未到人数:");
	lv_label_set_long_mode(ui->sign_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->sign_label_4, 68, 298);
	lv_obj_set_size(ui->sign_label_4, 162, 40);
	lv_obj_set_scrollbar_mode(ui->sign_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->sign_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->sign_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_label_4, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_label_4, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->sign_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->sign_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->sign_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->sign_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->sign_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->sign_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->sign_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes sign_label_5
	ui->sign_label_5 = lv_label_create(ui->sign);
	lv_label_set_text(ui->sign_label_5, "15");
	lv_label_set_long_mode(ui->sign_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->sign_label_5, 692, 122);
	lv_obj_set_size(ui->sign_label_5, 42, 32);
	lv_obj_set_scrollbar_mode(ui->sign_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->sign_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->sign_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_label_5, lv_color_hex(0x007AFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_label_5, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->sign_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->sign_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_label_5, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->sign_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->sign_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->sign_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->sign_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->sign_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes sign_label_6
	ui->sign_label_6 = lv_label_create(ui->sign);
	lv_label_set_text(ui->sign_label_6, "10");
	lv_label_set_long_mode(ui->sign_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->sign_label_6, 692, 210);
	lv_obj_set_size(ui->sign_label_6, 42, 32);
	lv_obj_set_scrollbar_mode(ui->sign_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->sign_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->sign_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_label_6, lv_color_hex(0x00B119), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_label_6, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->sign_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->sign_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_label_6, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->sign_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->sign_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->sign_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->sign_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->sign_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes sign_label_7
	ui->sign_label_7 = lv_label_create(ui->sign);
	lv_label_set_text(ui->sign_label_7, "5");
	lv_label_set_long_mode(ui->sign_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->sign_label_7, 692, 298);
	lv_obj_set_size(ui->sign_label_7, 42, 32);
	lv_obj_set_scrollbar_mode(ui->sign_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->sign_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->sign_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_label_7, lv_color_hex(0xB10000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_label_7, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->sign_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->sign_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_label_7, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->sign_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->sign_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->sign_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->sign_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->sign_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes sign_imgbtn_1
	ui->sign_imgbtn_1 = lv_imgbtn_create(ui->sign);
	lv_obj_add_flag(ui->sign_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->sign_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_confirm_def_alpha_280x64, NULL);
	lv_imgbtn_set_src(ui->sign_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_confirm_clk_alpha_280x64, NULL);
	lv_obj_add_flag(ui->sign_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->sign_imgbtn_1_label = lv_label_create(ui->sign_imgbtn_1);
	lv_label_set_text(ui->sign_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->sign_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->sign_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->sign_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->sign_imgbtn_1, 108, 372);
	lv_obj_set_size(ui->sign_imgbtn_1, 280, 64);
	lv_obj_set_scrollbar_mode(ui->sign_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->sign_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for sign_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->sign_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->sign_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->sign_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->sign_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for sign_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->sign_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->sign_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->sign_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->sign_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes sign_label_8
	ui->sign_label_8 = lv_label_create(ui->sign);
	lv_label_set_text(ui->sign_label_8, "签到");
	lv_label_set_long_mode(ui->sign_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->sign_label_8, 223, 392);
	lv_obj_set_size(ui->sign_label_8, 52, 24);
	lv_obj_set_scrollbar_mode(ui->sign_label_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->sign_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->sign_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_label_8, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_label_8, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->sign_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->sign_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->sign_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->sign_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->sign_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->sign_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->sign_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes sign_imgbtn_2
	ui->sign_imgbtn_2 = lv_imgbtn_create(ui->sign);
	lv_obj_add_flag(ui->sign_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->sign_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_redlongbut_alpha_280x64, NULL);
	lv_imgbtn_set_src(ui->sign_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_redlongbut_clk_alpha_280x64, NULL);
	lv_obj_add_flag(ui->sign_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->sign_imgbtn_2_label = lv_label_create(ui->sign_imgbtn_2);
	lv_label_set_text(ui->sign_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->sign_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->sign_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->sign_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->sign_imgbtn_2, 412, 372);
	lv_obj_set_size(ui->sign_imgbtn_2, 280, 64);
	lv_obj_set_scrollbar_mode(ui->sign_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->sign_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for sign_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->sign_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->sign_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->sign_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->sign_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for sign_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->sign_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->sign_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->sign_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->sign_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes sign_label_9
	ui->sign_label_9 = lv_label_create(ui->sign);
	lv_label_set_text(ui->sign_label_9, "结束签到");
	lv_label_set_long_mode(ui->sign_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->sign_label_9, 502, 392);
	lv_obj_set_size(ui->sign_label_9, 104, 24);
	lv_obj_set_scrollbar_mode(ui->sign_label_9, LV_SCROLLBAR_MODE_OFF);

	//Write style for sign_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->sign_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->sign_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->sign_label_9, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->sign_label_9, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->sign_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->sign_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->sign_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->sign_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->sign_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->sign_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->sign_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->sign_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->sign_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->sign);

	
	//Init events for screen.
	events_init_sign(ui);
}
