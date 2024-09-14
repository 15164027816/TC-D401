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


void setup_scr_service(lv_ui *ui)
{
	//Write codes service
	ui->service = lv_obj_create(NULL);
	lv_obj_set_size(ui->service, 800, 480);
	lv_obj_set_scrollbar_mode(ui->service, LV_SCROLLBAR_MODE_OFF);

	//Write style for service, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->service, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->service, &_background_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->service, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_label_1
	ui->service_label_1 = lv_label_create(ui->service);
	lv_label_set_text(ui->service_label_1, "会议服务");
	lv_label_set_long_mode(ui->service_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_label_1, 331, 19);
	lv_obj_set_size(ui->service_label_1, 138, 32);
	lv_obj_set_scrollbar_mode(ui->service_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_imgbtn_1
	ui->service_imgbtn_1 = lv_imgbtn_create(ui->service);
	lv_obj_add_flag(ui->service_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->service_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->service_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_obj_add_flag(ui->service_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->service_imgbtn_1_label = lv_label_create(ui->service_imgbtn_1);
	lv_label_set_text(ui->service_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->service_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->service_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->service_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->service_imgbtn_1, 20, 11);
	lv_obj_set_size(ui->service_imgbtn_1, 68, 48);
	lv_obj_set_scrollbar_mode(ui->service_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->service_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for service_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->service_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->service_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for service_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->service_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->service_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes service_label_2
	ui->service_label_2 = lv_label_create(ui->service);
	lv_label_set_text(ui->service_label_2, "00:15:34");
	lv_label_set_long_mode(ui->service_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_label_2, 316, 422);
	lv_obj_set_size(ui->service_label_2, 168, 46);
	lv_obj_set_scrollbar_mode(ui->service_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_label_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_label_2, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_label_2, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->service_label_2, &_time_back_168x46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->service_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_label_3
	ui->service_label_3 = lv_label_create(ui->service);
	lv_label_set_text(ui->service_label_3, "14:22");
	lv_label_set_long_mode(ui->service_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_label_3, 685, 19);
	lv_obj_set_size(ui->service_label_3, 95, 32);
	lv_obj_set_scrollbar_mode(ui->service_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_label_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_label_3, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_imgbtn_2
	ui->service_imgbtn_2 = lv_imgbtn_create(ui->service);
	lv_obj_add_flag(ui->service_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->service_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_tea_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->service_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_tea_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->service_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->service_imgbtn_2_label = lv_label_create(ui->service_imgbtn_2);
	lv_label_set_text(ui->service_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->service_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->service_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->service_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->service_imgbtn_2, 54, 86);
	lv_obj_set_size(ui->service_imgbtn_2, 220, 150);
	lv_obj_set_scrollbar_mode(ui->service_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->service_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for service_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->service_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->service_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for service_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->service_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->service_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes service_imgbtn_3
	ui->service_imgbtn_3 = lv_imgbtn_create(ui->service);
	lv_obj_add_flag(ui->service_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->service_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_pen_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->service_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_pen_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->service_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	ui->service_imgbtn_3_label = lv_label_create(ui->service_imgbtn_3);
	lv_label_set_text(ui->service_imgbtn_3_label, "");
	lv_label_set_long_mode(ui->service_imgbtn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->service_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->service_imgbtn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->service_imgbtn_3, 290, 86);
	lv_obj_set_size(ui->service_imgbtn_3, 220, 150);
	lv_obj_set_scrollbar_mode(ui->service_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->service_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_imgbtn_3, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for service_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->service_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->service_imgbtn_3, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for service_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->service_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->service_imgbtn_3, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes service_imgbtn_4
	ui->service_imgbtn_4 = lv_imgbtn_create(ui->service);
	lv_obj_add_flag(ui->service_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->service_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_humlod_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->service_imgbtn_4, LV_IMGBTN_STATE_PRESSED, NULL, &_humlod_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->service_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
	ui->service_imgbtn_4_label = lv_label_create(ui->service_imgbtn_4);
	lv_label_set_text(ui->service_imgbtn_4_label, "");
	lv_label_set_long_mode(ui->service_imgbtn_4_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->service_imgbtn_4_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->service_imgbtn_4, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->service_imgbtn_4, 526, 86);
	lv_obj_set_size(ui->service_imgbtn_4, 220, 150);
	lv_obj_set_scrollbar_mode(ui->service_imgbtn_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->service_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_imgbtn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_imgbtn_4, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_imgbtn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for service_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->service_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->service_imgbtn_4, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for service_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->service_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->service_imgbtn_4, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes service_imgbtn_5
	ui->service_imgbtn_5 = lv_imgbtn_create(ui->service);
	lv_obj_add_flag(ui->service_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->service_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_customized_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->service_imgbtn_5, LV_IMGBTN_STATE_PRESSED, NULL, &_customized_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->service_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	ui->service_imgbtn_5_label = lv_label_create(ui->service_imgbtn_5);
	lv_label_set_text(ui->service_imgbtn_5_label, "");
	lv_label_set_long_mode(ui->service_imgbtn_5_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->service_imgbtn_5_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->service_imgbtn_5, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->service_imgbtn_5, 54, 252);
	lv_obj_set_size(ui->service_imgbtn_5, 220, 150);
	lv_obj_set_scrollbar_mode(ui->service_imgbtn_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->service_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_imgbtn_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_imgbtn_5, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_imgbtn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for service_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->service_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->service_imgbtn_5, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for service_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->service_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->service_imgbtn_5, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes service_imgbtn_6
	ui->service_imgbtn_6 = lv_imgbtn_create(ui->service);
	lv_obj_add_flag(ui->service_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->service_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_customized_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->service_imgbtn_6, LV_IMGBTN_STATE_PRESSED, NULL, &_customized_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->service_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
	ui->service_imgbtn_6_label = lv_label_create(ui->service_imgbtn_6);
	lv_label_set_text(ui->service_imgbtn_6_label, "");
	lv_label_set_long_mode(ui->service_imgbtn_6_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->service_imgbtn_6_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->service_imgbtn_6, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->service_imgbtn_6, 290, 252);
	lv_obj_set_size(ui->service_imgbtn_6, 220, 150);
	lv_obj_set_scrollbar_mode(ui->service_imgbtn_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->service_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_imgbtn_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_imgbtn_6, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_imgbtn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for service_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->service_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->service_imgbtn_6, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for service_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->service_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->service_imgbtn_6, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes service_imgbtn_7
	ui->service_imgbtn_7 = lv_imgbtn_create(ui->service);
	lv_obj_add_flag(ui->service_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->service_imgbtn_7, LV_IMGBTN_STATE_RELEASED, NULL, &_customized_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->service_imgbtn_7, LV_IMGBTN_STATE_PRESSED, NULL, &_customized_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->service_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
	ui->service_imgbtn_7_label = lv_label_create(ui->service_imgbtn_7);
	lv_label_set_text(ui->service_imgbtn_7_label, "");
	lv_label_set_long_mode(ui->service_imgbtn_7_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->service_imgbtn_7_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->service_imgbtn_7, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->service_imgbtn_7, 526, 252);
	lv_obj_set_size(ui->service_imgbtn_7, 220, 150);
	lv_obj_set_scrollbar_mode(ui->service_imgbtn_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->service_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_imgbtn_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_imgbtn_7, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_imgbtn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for service_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->service_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->service_imgbtn_7, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for service_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->service_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->service_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->service_imgbtn_7, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->service_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes service_label_4
	ui->service_label_4 = lv_label_create(ui->service);
	lv_label_set_text(ui->service_label_4, "茶水");
	lv_label_set_long_mode(ui->service_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_label_4, 139, 198);
	lv_obj_set_size(ui->service_label_4, 52, 28);
	lv_obj_set_scrollbar_mode(ui->service_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_label_4, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_label_4, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_label_5
	ui->service_label_5 = lv_label_create(ui->service);
	lv_label_set_text(ui->service_label_5, "纸笔");
	lv_label_set_long_mode(ui->service_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_label_5, 375, 198);
	lv_obj_set_size(ui->service_label_5, 52, 28);
	lv_obj_set_scrollbar_mode(ui->service_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_label_5, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_label_6
	ui->service_label_6 = lv_label_create(ui->service);
	lv_label_set_text(ui->service_label_6, "人工");
	lv_label_set_long_mode(ui->service_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_label_6, 611, 198);
	lv_obj_set_size(ui->service_label_6, 52, 28);
	lv_obj_set_scrollbar_mode(ui->service_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_label_6, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_label_6, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_label_7
	ui->service_label_7 = lv_label_create(ui->service);
	lv_label_set_text(ui->service_label_7, "自定义1");
	lv_label_set_long_mode(ui->service_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_label_7, 120, 364);
	lv_obj_set_size(ui->service_label_7, 94, 24);
	lv_obj_set_scrollbar_mode(ui->service_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_label_7, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_label_7, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_label_8
	ui->service_label_8 = lv_label_create(ui->service);
	lv_label_set_text(ui->service_label_8, "自定义2");
	lv_label_set_long_mode(ui->service_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_label_8, 356, 364);
	lv_obj_set_size(ui->service_label_8, 94, 31);
	lv_obj_set_scrollbar_mode(ui->service_label_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_label_8, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_label_8, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes service_label_9
	ui->service_label_9 = lv_label_create(ui->service);
	lv_label_set_text(ui->service_label_9, "自定义3");
	lv_label_set_long_mode(ui->service_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->service_label_9, 592, 364);
	lv_obj_set_size(ui->service_label_9, 94, 24);
	lv_obj_set_scrollbar_mode(ui->service_label_9, LV_SCROLLBAR_MODE_OFF);

	//Write style for service_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->service_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->service_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->service_label_9, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->service_label_9, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->service_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->service_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->service_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->service_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->service_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->service_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->service_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->service_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->service_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->service);

	
	//Init events for screen.
	events_init_service(ui);
}
