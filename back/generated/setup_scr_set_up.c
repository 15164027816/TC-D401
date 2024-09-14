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


void setup_scr_set_up(lv_ui *ui)
{
	//Write codes set_up
	ui->set_up = lv_obj_create(NULL);
	lv_obj_set_size(ui->set_up, 800, 480);
	lv_obj_set_scrollbar_mode(ui->set_up, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_up, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->set_up, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->set_up, &_background_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->set_up, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_up_label_1
	ui->set_up_label_1 = lv_label_create(ui->set_up);
	lv_label_set_text(ui->set_up_label_1, "系统设置");
	lv_label_set_long_mode(ui->set_up_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_up_label_1, 331, 19);
	lv_obj_set_size(ui->set_up_label_1, 138, 32);
	lv_obj_set_scrollbar_mode(ui->set_up_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_up_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_up_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_up_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_up_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_up_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_up_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_up_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_up_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_up_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_up_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_up_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_up_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_up_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_up_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_up_imgbtn_1
	ui->set_up_imgbtn_1 = lv_imgbtn_create(ui->set_up);
	lv_obj_add_flag(ui->set_up_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->set_up_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->set_up_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_obj_add_flag(ui->set_up_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->set_up_imgbtn_1_label = lv_label_create(ui->set_up_imgbtn_1);
	lv_label_set_text(ui->set_up_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->set_up_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->set_up_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->set_up_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->set_up_imgbtn_1, 20, 11);
	lv_obj_set_size(ui->set_up_imgbtn_1, 68, 48);
	lv_obj_set_scrollbar_mode(ui->set_up_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_up_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->set_up_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_up_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_up_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_up_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_up_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for set_up_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->set_up_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->set_up_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->set_up_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->set_up_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for set_up_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->set_up_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->set_up_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->set_up_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->set_up_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes set_up_label_2
	ui->set_up_label_2 = lv_label_create(ui->set_up);
	lv_label_set_text(ui->set_up_label_2, "00:15:34");
	lv_label_set_long_mode(ui->set_up_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_up_label_2, 316, 422);
	lv_obj_set_size(ui->set_up_label_2, 168, 46);
	lv_obj_set_scrollbar_mode(ui->set_up_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_up_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_up_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_up_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_up_label_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_up_label_2, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_up_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_up_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_up_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_up_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_up_label_2, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_up_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_up_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_up_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->set_up_label_2, &_time_back_168x46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->set_up_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_up_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_up_label_3
	ui->set_up_label_3 = lv_label_create(ui->set_up);
	lv_label_set_text(ui->set_up_label_3, "14:22");
	lv_label_set_long_mode(ui->set_up_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_up_label_3, 685, 19);
	lv_obj_set_size(ui->set_up_label_3, 95, 32);
	lv_obj_set_scrollbar_mode(ui->set_up_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_up_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_up_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_up_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_up_label_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_up_label_3, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_up_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_up_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_up_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_up_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_up_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_up_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_up_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_up_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_up_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_up_imgbtn_2
	ui->set_up_imgbtn_2 = lv_imgbtn_create(ui->set_up);
	lv_obj_add_flag(ui->set_up_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->set_up_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_setting_def_alpha_260x180, NULL);
	lv_imgbtn_set_src(ui->set_up_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_setting_clk_alpha_260x180, NULL);
	lv_obj_add_flag(ui->set_up_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->set_up_imgbtn_2_label = lv_label_create(ui->set_up_imgbtn_2);
	lv_label_set_text(ui->set_up_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->set_up_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->set_up_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->set_up_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->set_up_imgbtn_2, 131, 142);
	lv_obj_set_size(ui->set_up_imgbtn_2, 260, 180);
	lv_obj_set_scrollbar_mode(ui->set_up_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_up_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->set_up_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_up_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_up_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_up_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_up_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for set_up_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->set_up_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->set_up_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->set_up_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->set_up_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for set_up_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->set_up_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->set_up_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->set_up_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->set_up_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes set_up_imgbtn_3
	ui->set_up_imgbtn_3 = lv_imgbtn_create(ui->set_up);
	lv_obj_add_flag(ui->set_up_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->set_up_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_themestyle_def_alpha_260x180, NULL);
	lv_imgbtn_set_src(ui->set_up_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_themestyle_clk_alpha_260x180, NULL);
	lv_obj_add_flag(ui->set_up_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	ui->set_up_imgbtn_3_label = lv_label_create(ui->set_up_imgbtn_3);
	lv_label_set_text(ui->set_up_imgbtn_3_label, "");
	lv_label_set_long_mode(ui->set_up_imgbtn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->set_up_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->set_up_imgbtn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->set_up_imgbtn_3, 408, 142);
	lv_obj_set_size(ui->set_up_imgbtn_3, 260, 180);
	lv_obj_set_scrollbar_mode(ui->set_up_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_up_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->set_up_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_up_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_up_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_up_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_up_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for set_up_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->set_up_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->set_up_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->set_up_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->set_up_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for set_up_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->set_up_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->set_up_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->set_up_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->set_up_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes set_up_label_4
	ui->set_up_label_4 = lv_label_create(ui->set_up);
	lv_label_set_text(ui->set_up_label_4, "系统设置");
	lv_label_set_long_mode(ui->set_up_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_up_label_4, 213, 270);
	lv_obj_set_size(ui->set_up_label_4, 104, 27);
	lv_obj_set_scrollbar_mode(ui->set_up_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_up_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_up_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_up_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_up_label_4, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_up_label_4, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_up_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_up_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_up_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_up_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_up_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_up_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_up_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_up_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_up_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes set_up_label_5
	ui->set_up_label_5 = lv_label_create(ui->set_up);
	lv_label_set_text(ui->set_up_label_5, "主题风格");
	lv_label_set_long_mode(ui->set_up_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->set_up_label_5, 489, 270);
	lv_obj_set_size(ui->set_up_label_5, 104, 27);
	lv_obj_set_scrollbar_mode(ui->set_up_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for set_up_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->set_up_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->set_up_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->set_up_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->set_up_label_5, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->set_up_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->set_up_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->set_up_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->set_up_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->set_up_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->set_up_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->set_up_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->set_up_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->set_up_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->set_up);

	
	//Init events for screen.
	events_init_set_up(ui);
}
