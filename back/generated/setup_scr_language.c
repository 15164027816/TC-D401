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

void setup_scr_language(lv_ui *ui)
{
	//Write codes language
	ui->language = lv_obj_create(NULL);
	lv_obj_set_size(ui->language, 800, 480);
	lv_obj_set_scrollbar_mode(ui->language, LV_SCROLLBAR_MODE_OFF);

	//Write style for language, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->language, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->language, &_languageset_back_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->language, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes language_label_1
	ui->language_label_1 = lv_label_create(ui->language);
	lv_label_set_text(ui->language_label_1, "语言设置");
	lv_label_set_long_mode(ui->language_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->language_label_1, 331, 19);
	lv_obj_set_size(ui->language_label_1, 138, 32);
	lv_obj_set_scrollbar_mode(ui->language_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->language_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->language_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->language_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->language_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->language_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->language_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->language_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->language_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->language_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes language_imgbtn_1
	ui->language_imgbtn_1 = lv_imgbtn_create(ui->language);
	lv_obj_add_flag(ui->language_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->language_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_obj_add_flag(ui->language_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->language_imgbtn_1_label = lv_label_create(ui->language_imgbtn_1);
	lv_label_set_text(ui->language_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->language_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->language_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->language_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->language_imgbtn_1, 20, 11);
	lv_obj_set_size(ui->language_imgbtn_1, 68, 48);
	lv_obj_set_scrollbar_mode(ui->language_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->language_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for language_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->language_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->language_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for language_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->language_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->language_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes language_label_2
	ui->language_label_2 = lv_label_create(ui->language);
	lv_label_set_text(ui->language_label_2, "00:15:34");
	lv_label_set_long_mode(ui->language_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->language_label_2, 316, 422);
	lv_obj_set_size(ui->language_label_2, 168, 46);
	lv_obj_set_scrollbar_mode(ui->language_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->language_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->language_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_label_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_label_2, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->language_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->language_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->language_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->language_label_2, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->language_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->language_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->language_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->language_label_2, &_time_back_168x46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->language_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes language_label_3
	ui->language_label_3 = lv_label_create(ui->language);
	lv_label_set_text(ui->language_label_3, "14:22");
	lv_label_set_long_mode(ui->language_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->language_label_3, 685, 19);
	lv_obj_set_size(ui->language_label_3, 95, 32);
	lv_obj_set_scrollbar_mode(ui->language_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->language_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->language_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_label_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_label_3, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->language_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->language_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->language_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->language_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->language_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->language_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->language_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes language_imgbtn_2
	ui->language_imgbtn_2 = lv_imgbtn_create(ui->language);
	lv_obj_add_flag(ui->language_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->language_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_obj_add_flag(ui->language_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->language_imgbtn_2_label = lv_label_create(ui->language_imgbtn_2);
	lv_label_set_text(ui->language_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->language_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->language_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->language_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->language_imgbtn_2, 40, 105);
	lv_obj_set_size(ui->language_imgbtn_2, 350, 80);
	lv_obj_set_scrollbar_mode(ui->language_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->language_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for language_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->language_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->language_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for language_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->language_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->language_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes language_imgbtn_3
	ui->language_imgbtn_3 = lv_imgbtn_create(ui->language);
	lv_obj_add_flag(ui->language_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->language_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_obj_add_flag(ui->language_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	ui->language_imgbtn_3_label = lv_label_create(ui->language_imgbtn_3);
	lv_label_set_text(ui->language_imgbtn_3_label, "");
	lv_label_set_long_mode(ui->language_imgbtn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->language_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->language_imgbtn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->language_imgbtn_3, 40, 204);
	lv_obj_set_size(ui->language_imgbtn_3, 350, 80);
	lv_obj_set_scrollbar_mode(ui->language_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->language_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for language_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->language_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->language_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for language_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->language_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->language_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes language_imgbtn_4
	ui->language_imgbtn_4 = lv_imgbtn_create(ui->language);
	lv_obj_add_flag(ui->language_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->language_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_4, LV_IMGBTN_STATE_PRESSED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_4, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_4, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_obj_add_flag(ui->language_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
	ui->language_imgbtn_4_label = lv_label_create(ui->language_imgbtn_4);
	lv_label_set_text(ui->language_imgbtn_4_label, "");
	lv_label_set_long_mode(ui->language_imgbtn_4_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->language_imgbtn_4_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->language_imgbtn_4, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->language_imgbtn_4, 40, 302);
	lv_obj_set_size(ui->language_imgbtn_4, 350, 80);
	lv_obj_set_scrollbar_mode(ui->language_imgbtn_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->language_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_imgbtn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_imgbtn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for language_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->language_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->language_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for language_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->language_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->language_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes language_imgbtn_5
	ui->language_imgbtn_5 = lv_imgbtn_create(ui->language);
	lv_obj_add_flag(ui->language_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->language_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_5, LV_IMGBTN_STATE_PRESSED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_5, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_5, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_obj_add_flag(ui->language_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	ui->language_imgbtn_5_label = lv_label_create(ui->language_imgbtn_5);
	lv_label_set_text(ui->language_imgbtn_5_label, "");
	lv_label_set_long_mode(ui->language_imgbtn_5_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->language_imgbtn_5_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->language_imgbtn_5, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->language_imgbtn_5, 410, 106);
	lv_obj_set_size(ui->language_imgbtn_5, 350, 80);
	lv_obj_set_scrollbar_mode(ui->language_imgbtn_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->language_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_imgbtn_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_imgbtn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for language_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->language_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->language_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for language_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->language_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->language_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes language_imgbtn_6
	ui->language_imgbtn_6 = lv_imgbtn_create(ui->language);
	lv_obj_add_flag(ui->language_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->language_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_6, LV_IMGBTN_STATE_PRESSED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_6, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_language_select_alpha_350x80, NULL);
	lv_imgbtn_set_src(ui->language_imgbtn_6, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_language_nosel_alpha_350x80, NULL);
	lv_obj_add_flag(ui->language_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
	ui->language_imgbtn_6_label = lv_label_create(ui->language_imgbtn_6);
	lv_label_set_text(ui->language_imgbtn_6_label, "");
	lv_label_set_long_mode(ui->language_imgbtn_6_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->language_imgbtn_6_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->language_imgbtn_6, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->language_imgbtn_6, 410, 204);
	lv_obj_set_size(ui->language_imgbtn_6, 350, 80);
	lv_obj_set_scrollbar_mode(ui->language_imgbtn_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->language_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_imgbtn_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_imgbtn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for language_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->language_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->language_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for language_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->language_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->language_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->language_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->language_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes language_label_4
	ui->language_label_4 = lv_label_create(ui->language);
	lv_label_set_text(ui->language_label_4, "简体中文");
	lv_label_set_long_mode(ui->language_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->language_label_4, 64, 130);
	lv_obj_set_size(ui->language_label_4, 136, 48);
	lv_obj_set_scrollbar_mode(ui->language_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->language_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->language_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_label_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_label_4, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->language_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->language_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->language_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->language_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->language_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->language_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->language_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes language_label_5
	ui->language_label_5 = lv_label_create(ui->language);
	lv_label_set_text(ui->language_label_5, "English");
	lv_label_set_long_mode(ui->language_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->language_label_5, 64, 228);
	lv_obj_set_size(ui->language_label_5, 136, 60);
	lv_obj_set_scrollbar_mode(ui->language_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_label_5, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_label_5, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes language_label_6
	ui->language_label_6 = lv_label_create(ui->language);
	lv_label_set_text(ui->language_label_6, "Français");
	lv_label_set_long_mode(ui->language_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->language_label_6, 67, 326);
	lv_obj_set_size(ui->language_label_6, 136, 48);
	lv_obj_set_scrollbar_mode(ui->language_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_label_6, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_label_6, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes language_label_7
	ui->language_label_7 = lv_label_create(ui->language);
	lv_label_set_text(ui->language_label_7, "繁體中文");
	lv_label_set_long_mode(ui->language_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->language_label_7, 434, 130);
	lv_obj_set_size(ui->language_label_7, 136, 48);
	lv_obj_set_scrollbar_mode(ui->language_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->language_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->language_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_label_7, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_label_7, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->language_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->language_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->language_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->language_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->language_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->language_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->language_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes language_label_8
	ui->language_label_8 = lv_label_create(ui->language);
	lv_label_set_text(ui->language_label_8, "Pусский");
	lv_label_set_long_mode(ui->language_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->language_label_8, 434, 228);
	lv_obj_set_size(ui->language_label_8, 138, 42);
	lv_obj_set_scrollbar_mode(ui->language_label_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for language_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->language_label_8, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->language_label_8, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->language_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->language_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->language);


	//Init events for screen.
	events_init_language(ui);
}
