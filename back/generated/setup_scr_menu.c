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
extern int  country;

void setup_scr_menu(lv_ui *ui)
{
	//Write codes menu
	ui->menu = lv_obj_create(NULL);
	lv_obj_set_size(ui->menu, 800, 480);
	lv_obj_set_scrollbar_mode(ui->menu, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->menu, &_background_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_imgbtn_1
	ui->menu_imgbtn_1 = lv_imgbtn_create(ui->menu);
	lv_obj_add_flag(ui->menu_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->menu_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->menu_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->menu_imgbtn_1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_obj_add_flag(ui->menu_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_imgbtn_1_label = lv_label_create(ui->menu_imgbtn_1);
	lv_label_set_text(ui->menu_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->menu_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_imgbtn_1, 20, 11);
	lv_obj_set_size(ui->menu_imgbtn_1, 68, 48);
	lv_obj_set_scrollbar_mode(ui->menu_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_imgbtn_2
	ui->menu_imgbtn_2 = lv_imgbtn_create(ui->menu);
	lv_imgbtn_set_src(ui->menu_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_vote_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_vote_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_imgbtn_2_label = lv_label_create(ui->menu_imgbtn_2);
	lv_label_set_text(ui->menu_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->menu_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_imgbtn_2, 57, 86);
	lv_obj_set_size(ui->menu_imgbtn_2, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_imgbtn_2, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_imgbtn_3
	ui->menu_imgbtn_3 = lv_imgbtn_create(ui->menu);
	lv_obj_add_flag(ui->menu_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_meetserver_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_meetserver_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_imgbtn_3_label = lv_label_create(ui->menu_imgbtn_3);
	lv_label_set_text(ui->menu_imgbtn_3_label, "");
	lv_label_set_long_mode(ui->menu_imgbtn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_imgbtn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_imgbtn_3, 529, 86);
	lv_obj_set_size(ui->menu_imgbtn_3, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_imgbtn_4
	ui->menu_imgbtn_4 = lv_imgbtn_create(ui->menu);
	lv_obj_add_flag(ui->menu_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_sinup_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_imgbtn_4, LV_IMGBTN_STATE_PRESSED, NULL, &_sinup_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_imgbtn_4_label = lv_label_create(ui->menu_imgbtn_4);
	lv_label_set_text(ui->menu_imgbtn_4_label, "");
	lv_label_set_long_mode(ui->menu_imgbtn_4_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_imgbtn_4_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_imgbtn_4, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_imgbtn_4, 290, 86);
	lv_obj_set_size(ui->menu_imgbtn_4, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_imgbtn_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_imgbtn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_imgbtn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_4, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_imgbtn_5
	ui->menu_imgbtn_5 = lv_imgbtn_create(ui->menu);
	lv_obj_add_flag(ui->menu_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_voic_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_imgbtn_5, LV_IMGBTN_STATE_PRESSED, NULL, &_voic_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_imgbtn_5_label = lv_label_create(ui->menu_imgbtn_5);
	lv_label_set_text(ui->menu_imgbtn_5_label, "");
	lv_label_set_long_mode(ui->menu_imgbtn_5_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_imgbtn_5_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_imgbtn_5, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_imgbtn_5, 57, 252);
	lv_obj_set_size(ui->menu_imgbtn_5, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_imgbtn_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_imgbtn_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_imgbtn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_imgbtn_6
	ui->menu_imgbtn_6 = lv_imgbtn_create(ui->menu);
	lv_obj_add_flag(ui->menu_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_language_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_imgbtn_6, LV_IMGBTN_STATE_PRESSED, NULL, &_language_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_imgbtn_6_label = lv_label_create(ui->menu_imgbtn_6);
	lv_label_set_text(ui->menu_imgbtn_6_label, "");
	lv_label_set_long_mode(ui->menu_imgbtn_6_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_imgbtn_6_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_imgbtn_6, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_imgbtn_6, 290, 252);
	lv_obj_set_size(ui->menu_imgbtn_6, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_imgbtn_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_imgbtn_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_imgbtn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_imgbtn_7
	ui->menu_imgbtn_7 = lv_imgbtn_create(ui->menu);
	lv_obj_add_flag(ui->menu_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_imgbtn_7, LV_IMGBTN_STATE_RELEASED, NULL, &_set_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_imgbtn_7, LV_IMGBTN_STATE_PRESSED, NULL, &_set_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_imgbtn_7_label = lv_label_create(ui->menu_imgbtn_7);
	lv_label_set_text(ui->menu_imgbtn_7_label, "");
	lv_label_set_long_mode(ui->menu_imgbtn_7_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_imgbtn_7_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_imgbtn_7, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_imgbtn_7, 526, 252);
	lv_obj_set_size(ui->menu_imgbtn_7, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_imgbtn_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_imgbtn_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_imgbtn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_img_2
	ui->menu_img_2 = lv_img_create(ui->menu);
	lv_obj_add_flag(ui->menu_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->menu_img_2, &_earphone_alpha_31x33);
	lv_img_set_pivot(ui->menu_img_2, 50,50);
	lv_img_set_angle(ui->menu_img_2, 0);
	lv_obj_set_pos(ui->menu_img_2, 744, 427);
	lv_obj_set_size(ui->menu_img_2, 31, 33);
	lv_obj_set_scrollbar_mode(ui->menu_img_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_label_1
	ui->menu_label_1 = lv_label_create(ui->menu);
    switch (country)
		{
		case 0:
			lv_label_set_text(ui->menu_label_1, "发起签到");
			break;
		case 1:
            lv_label_set_text(ui->main_label_3, "發起簽到");
			break;

		case 2:
            lv_label_set_text(ui->main_label_3, "Start Sign-in");
            break;

        case 3:
            lv_label_set_text(ui->main_label_3, "Начать регистрацию");
			break;

		case 4:
            lv_label_set_text(ui->main_label_3, "Démarrer la connexion");
			break;

		default:
        	break;
		}

	lv_label_set_long_mode(ui->menu_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_label_1, 351, 198);
	lv_obj_set_size(ui->menu_label_1, 104, 30);
	lv_obj_set_scrollbar_mode(ui->menu_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_label_1, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_label_1, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_label_2
	ui->menu_label_2 = lv_label_create(ui->menu);
     switch (country)
		{
		case 0:
			lv_label_set_text(ui->menu_label_2, "发起表决");
			break;
		case 1:
            lv_label_set_text(ui->main_label_3, "發起表決");
			break;

		case 2:
            lv_label_set_text(ui->main_label_3, "Initiate a Vote");
            break;

        case 3:
            lv_label_set_text(ui->main_label_3, "Инициировать голосование");
			break;

		case 4:
            lv_label_set_text(ui->main_label_3, "Lancer un vote");
			break;

		default:
        	break;
		}

	lv_label_set_long_mode(ui->menu_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_label_2, 115, 198);
	lv_obj_set_size(ui->menu_label_2, 104, 30);
	lv_obj_set_scrollbar_mode(ui->menu_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_label_2, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_label_2, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_label_3
	ui->menu_label_3 = lv_label_create(ui->menu);
     switch (country)
		{
		case 0:
			lv_label_set_text(ui->menu_label_3, "会议服务");
			break;
		case 1:
            lv_label_set_text(ui->main_label_3, "會議服務");
			break;

		case 2:
            lv_label_set_text(ui->main_label_3, "Services");
            break;

        case 3:
            lv_label_set_text(ui->main_label_3, "Конференц-услуги");
			break;

		case 4:
            lv_label_set_text(ui->main_label_3, "Services de réunion");
			break;

		default:
        	break;
		}

	lv_label_set_long_mode(ui->menu_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_label_3, 587, 198);
	lv_obj_set_size(ui->menu_label_3, 104, 30);
	lv_obj_set_scrollbar_mode(ui->menu_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_label_3, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_label_3, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_label_4
	ui->menu_label_4 = lv_label_create(ui->menu);
     switch (country)
		{
		case 0:
			lv_label_set_text(ui->menu_label_4, "音频设置");
			break;
		case 1:
            lv_label_set_text(ui->main_label_3, "音頻設置");
			break;

		case 2:
            lv_label_set_text(ui->main_label_3, "Audio Settings");
            break;

        case 3:
            lv_label_set_text(ui->main_label_3, "Включить микрофон");
			break;

		case 4:
            lv_label_set_text(ui->main_label_3, "Paramètres audio");
			break;

		default:
        	break;
		}

	lv_label_set_long_mode(ui->menu_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_label_4, 115, 364);
	lv_obj_set_size(ui->menu_label_4, 104, 24);
	lv_obj_set_scrollbar_mode(ui->menu_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_label_4, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_label_4, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_label_5
	ui->menu_label_5 = lv_label_create(ui->menu);
	lv_label_set_text(ui->menu_label_5, "语言设置");
	lv_label_set_long_mode(ui->menu_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_label_5, 351, 364);
	lv_obj_set_size(ui->menu_label_5, 104, 24);
	lv_obj_set_scrollbar_mode(ui->menu_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_label_5, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_label_6
	ui->menu_label_6 = lv_label_create(ui->menu);
	lv_label_set_text(ui->menu_label_6, "系统设置");
	lv_label_set_long_mode(ui->menu_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_label_6, 587, 364);
	lv_obj_set_size(ui->menu_label_6, 104, 24);
	lv_obj_set_scrollbar_mode(ui->menu_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_label_6, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_label_6, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_label_7
	ui->menu_label_7 = lv_label_create(ui->menu);
	lv_label_set_text(ui->menu_label_7, "菜单");
	lv_label_set_long_mode(ui->menu_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_label_7, 366, 19);
	lv_obj_set_size(ui->menu_label_7, 69, 32);
	lv_obj_set_scrollbar_mode(ui->menu_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_label_7, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_label_7, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_label_8
	ui->menu_label_8 = lv_label_create(ui->menu);
	lv_label_set_text(ui->menu_label_8, "14:22");
	lv_label_set_long_mode(ui->menu_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_label_8, 685, 19);
	lv_obj_set_size(ui->menu_label_8, 95, 32);
	lv_obj_set_scrollbar_mode(ui->menu_label_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_label_8, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_label_8, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_label_9
	ui->menu_label_9 = lv_label_create(ui->menu);
	lv_label_set_text(ui->menu_label_9, "00:15:34");
	lv_label_set_long_mode(ui->menu_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_label_9, 316, 422);
	lv_obj_set_size(ui->menu_label_9, 168, 46);
	lv_obj_set_scrollbar_mode(ui->menu_label_9, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_label_9, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_label_9, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_label_9, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->menu_label_9, &_time_back_168x46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->menu_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->menu);


	//Init events for screen.
	events_init_menu(ui);
}
