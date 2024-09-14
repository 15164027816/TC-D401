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

void setup_scr_menu_Representative(lv_ui *ui)
{
	//Write codes menu_Representative
	ui->menu_Representative = lv_obj_create(NULL);
	lv_obj_set_size(ui->menu_Representative, 800, 480);
	lv_obj_set_scrollbar_mode(ui->menu_Representative, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->menu_Representative, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->menu_Representative, &_background_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->menu_Representative, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_Representative_imgbtn_1
	ui->menu_Representative_imgbtn_1 = lv_imgbtn_create(ui->menu_Representative);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_Representative_imgbtn_1_label = lv_label_create(ui->menu_Representative_imgbtn_1);
	lv_label_set_text(ui->menu_Representative_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->menu_Representative_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_Representative_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_Representative_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_Representative_imgbtn_1, 20, 11);
	lv_obj_set_size(ui->menu_Representative_imgbtn_1, 68, 48);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_Representative_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_Representative_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_Representative_imgbtn_3
	ui->menu_Representative_imgbtn_3 = lv_imgbtn_create(ui->menu_Representative);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_meetserver_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_meetserver_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_Representative_imgbtn_3_label = lv_label_create(ui->menu_Representative_imgbtn_3);
	lv_label_set_text(ui->menu_Representative_imgbtn_3_label, "");
	lv_label_set_long_mode(ui->menu_Representative_imgbtn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_Representative_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_Representative_imgbtn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_Representative_imgbtn_3, 172, 86);
	lv_obj_set_size(ui->menu_Representative_imgbtn_3, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_Representative_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_Representative_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_Representative_imgbtn_5
	ui->menu_Representative_imgbtn_5 = lv_imgbtn_create(ui->menu_Representative);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_voic_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_5, LV_IMGBTN_STATE_PRESSED, NULL, &_voic_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_Representative_imgbtn_5_label = lv_label_create(ui->menu_Representative_imgbtn_5);
	lv_label_set_text(ui->menu_Representative_imgbtn_5_label, "");
	lv_label_set_long_mode(ui->menu_Representative_imgbtn_5_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_Representative_imgbtn_5_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_Representative_imgbtn_5, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_Representative_imgbtn_5, 408, 86);
	lv_obj_set_size(ui->menu_Representative_imgbtn_5, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_imgbtn_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_imgbtn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_Representative_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_Representative_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_5, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_Representative_imgbtn_6
	ui->menu_Representative_imgbtn_6 = lv_imgbtn_create(ui->menu_Representative);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_6, LV_IMGBTN_STATE_RELEASED, NULL, &_language_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_6, LV_IMGBTN_STATE_PRESSED, NULL, &_language_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_6, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_Representative_imgbtn_6_label = lv_label_create(ui->menu_Representative_imgbtn_6);
	lv_label_set_text(ui->menu_Representative_imgbtn_6_label, "");
	lv_label_set_long_mode(ui->menu_Representative_imgbtn_6_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_Representative_imgbtn_6_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_Representative_imgbtn_6, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_Representative_imgbtn_6, 172, 252);
	lv_obj_set_size(ui->menu_Representative_imgbtn_6, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_imgbtn_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_imgbtn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_Representative_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_Representative_imgbtn_6, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_6, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_6, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_6, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_6, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_Representative_imgbtn_7
	ui->menu_Representative_imgbtn_7 = lv_imgbtn_create(ui->menu_Representative);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_7, LV_IMGBTN_STATE_RELEASED, NULL, &_set_def_alpha_220x150, NULL);
	lv_imgbtn_set_src(ui->menu_Representative_imgbtn_7, LV_IMGBTN_STATE_PRESSED, NULL, &_set_clk_alpha_220x150, NULL);
	lv_obj_add_flag(ui->menu_Representative_imgbtn_7, LV_OBJ_FLAG_CHECKABLE);
	ui->menu_Representative_imgbtn_7_label = lv_label_create(ui->menu_Representative_imgbtn_7);
	lv_label_set_text(ui->menu_Representative_imgbtn_7_label, "");
	lv_label_set_long_mode(ui->menu_Representative_imgbtn_7_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->menu_Representative_imgbtn_7_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->menu_Representative_imgbtn_7, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->menu_Representative_imgbtn_7, 411, 252);
	lv_obj_set_size(ui->menu_Representative_imgbtn_7, 220, 150);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_imgbtn_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_imgbtn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for menu_Representative_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for menu_Representative_imgbtn_7, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->menu_Representative_imgbtn_7, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->menu_Representative_imgbtn_7, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->menu_Representative_imgbtn_7, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->menu_Representative_imgbtn_7, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes menu_Representative_img_2
	ui->menu_Representative_img_2 = lv_img_create(ui->menu_Representative);
	lv_obj_add_flag(ui->menu_Representative_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->menu_Representative_img_2, &_earphone_alpha_31x33);
	lv_img_set_pivot(ui->menu_Representative_img_2, 50,50);
	lv_img_set_angle(ui->menu_Representative_img_2, 0);
	lv_obj_set_pos(ui->menu_Representative_img_2, 744, 427);
	lv_obj_set_size(ui->menu_Representative_img_2, 31, 33);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_img_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->menu_Representative_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_Representative_label_3
	ui->menu_Representative_label_3 = lv_label_create(ui->menu_Representative);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->menu_Representative_label_3, "会议服务");
	lv_label_set_long_mode(ui->menu_Representative_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_Representative_label_3, 233, 198);
	lv_obj_set_size(ui->menu_Representative_label_3, 104, 30);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_Representative_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_Representative_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_label_3, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_label_3, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_Representative_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_Representative_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_Representative_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_Representative_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_Representative_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_Representative_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_Representative_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_Representative_label_4
	ui->menu_Representative_label_4 = lv_label_create(ui->menu_Representative);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->menu_Representative_label_4, "音频设置");
	lv_label_set_long_mode(ui->menu_Representative_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_Representative_label_4, 469, 198);
	lv_obj_set_size(ui->menu_Representative_label_4, 104, 24);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_Representative_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_Representative_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_label_4, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_label_4, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_Representative_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_Representative_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_Representative_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_Representative_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_Representative_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_Representative_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_Representative_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_Representative_label_5
	ui->menu_Representative_label_5 = lv_label_create(ui->menu_Representative);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->menu_Representative_label_5, "语言设置");
	lv_label_set_long_mode(ui->menu_Representative_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_Representative_label_5, 233, 364);
	lv_obj_set_size(ui->menu_Representative_label_5, 104, 24);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_Representative_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_Representative_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_label_5, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_Representative_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_Representative_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_Representative_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_Representative_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_Representative_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_Representative_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_Representative_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_Representative_label_6
	ui->menu_Representative_label_6 = lv_label_create(ui->menu_Representative);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->menu_Representative_label_6, "系统设置");
	lv_label_set_long_mode(ui->menu_Representative_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_Representative_label_6, 469, 364);
	lv_obj_set_size(ui->menu_Representative_label_6, 104, 24);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_Representative_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_Representative_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_label_6, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_label_6, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_Representative_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_Representative_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_Representative_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_Representative_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_Representative_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_Representative_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_Representative_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_Representative_label_7
	ui->menu_Representative_label_7 = lv_label_create(ui->menu_Representative);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->menu_Representative_label_7, "菜单");
	lv_label_set_long_mode(ui->menu_Representative_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_Representative_label_7, 366, 19);
	lv_obj_set_size(ui->menu_Representative_label_7, 69, 32);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_Representative_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_Representative_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_label_7, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_label_7, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_Representative_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_Representative_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_Representative_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_Representative_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_Representative_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_Representative_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_Representative_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_Representative_label_8
	ui->menu_Representative_label_8 = lv_label_create(ui->menu_Representative);
	lv_label_set_text(ui->menu_Representative_label_8, "14:22");
	lv_label_set_long_mode(ui->menu_Representative_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_Representative_label_8, 685, 19);
	lv_obj_set_size(ui->menu_Representative_label_8, 95, 32);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_label_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_Representative_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_Representative_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_label_8, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_label_8, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_Representative_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_Representative_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_Representative_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_Representative_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_Representative_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_Representative_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_Representative_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes menu_Representative_label_9
	ui->menu_Representative_label_9 = lv_label_create(ui->menu_Representative);
	lv_label_set_text(ui->menu_Representative_label_9, "00:15:34");
	lv_label_set_long_mode(ui->menu_Representative_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->menu_Representative_label_9, 316, 422);
	lv_obj_set_size(ui->menu_Representative_label_9, 168, 46);
	lv_obj_set_scrollbar_mode(ui->menu_Representative_label_9, LV_SCROLLBAR_MODE_OFF);

	//Write style for menu_Representative_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->menu_Representative_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->menu_Representative_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->menu_Representative_label_9, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->menu_Representative_label_9, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->menu_Representative_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->menu_Representative_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->menu_Representative_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->menu_Representative_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->menu_Representative_label_9, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->menu_Representative_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->menu_Representative_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->menu_Representative_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->menu_Representative_label_9, &_time_back_168x46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->menu_Representative_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->menu_Representative_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->menu_Representative);


	//Init events for screen.
	events_init_menu_Representative(ui);
}
