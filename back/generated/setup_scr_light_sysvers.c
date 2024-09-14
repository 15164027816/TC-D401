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

void setup_scr_light_sysvers(lv_ui *ui)
{
	//Write codes light_sysvers
	ui->light_sysvers = lv_obj_create(NULL);
	lv_obj_set_size(ui->light_sysvers, 800, 480);
	lv_obj_set_scrollbar_mode(ui->light_sysvers, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->light_sysvers, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->light_sysvers, &_voiceset_back_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->light_sysvers, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_1
	ui->light_sysvers_label_1 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_1, "系统设置");
	lv_label_set_long_mode(ui->light_sysvers_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_1, 331, 19);
	lv_obj_set_size(ui->light_sysvers_label_1, 138, 32);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_imgbtn_1
	ui->light_sysvers_imgbtn_1 = lv_imgbtn_create(ui->light_sysvers);
	lv_obj_add_flag(ui->light_sysvers_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->light_sysvers_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->light_sysvers_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_obj_add_flag(ui->light_sysvers_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->light_sysvers_imgbtn_1_label = lv_label_create(ui->light_sysvers_imgbtn_1);
	lv_label_set_text(ui->light_sysvers_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->light_sysvers_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->light_sysvers_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->light_sysvers_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->light_sysvers_imgbtn_1, 20, 11);
	lv_obj_set_size(ui->light_sysvers_imgbtn_1, 68, 48);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->light_sysvers_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for light_sysvers_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->light_sysvers_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->light_sysvers_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->light_sysvers_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->light_sysvers_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for light_sysvers_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->light_sysvers_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->light_sysvers_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->light_sysvers_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->light_sysvers_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes light_sysvers_label_2
	ui->light_sysvers_label_2 = lv_label_create(ui->light_sysvers);
	lv_label_set_text(ui->light_sysvers_label_2, "00:15:34");
	lv_label_set_long_mode(ui->light_sysvers_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_2, 316, 422);
	lv_obj_set_size(ui->light_sysvers_label_2, 168, 46);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_2, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_2, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->light_sysvers_label_2, &_time_back_168x46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->light_sysvers_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_3
	ui->light_sysvers_label_3 = lv_label_create(ui->light_sysvers);
	lv_label_set_text(ui->light_sysvers_label_3, "14:22");
	lv_label_set_long_mode(ui->light_sysvers_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_3, 685, 19);
	lv_obj_set_size(ui->light_sysvers_label_3, 95, 32);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_3, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_slider_1
	ui->light_sysvers_slider_1 = lv_slider_create(ui->light_sysvers);
	lv_slider_set_range(ui->light_sysvers_slider_1, 1,100);
	lv_slider_set_value(ui->light_sysvers_slider_1, 50, false);
	lv_obj_set_pos(ui->light_sysvers_slider_1, 454, 294);
	lv_obj_set_size(ui->light_sysvers_slider_1, 280, 16);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_slider_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_slider_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->light_sysvers_slider_1, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->light_sysvers_slider_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_slider_1, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->light_sysvers_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for light_sysvers_slider_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->light_sysvers_slider_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->light_sysvers_slider_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_slider_1, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for light_sysvers_slider_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->light_sysvers_slider_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->light_sysvers_slider_1, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_slider_1, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_4
	ui->light_sysvers_label_4 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_4, "亮度");
	lv_label_set_long_mode(ui->light_sysvers_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_4, 545, 98);
	lv_obj_set_size(ui->light_sysvers_label_4, 104, 24);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_4, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    extern char light_buf[50] ;
	//Write codes light_sysvers_label_5
	ui->light_sysvers_label_5 = lv_label_create(ui->light_sysvers);
	lv_label_set_text(ui->light_sysvers_label_5, light_buf);
	lv_label_set_long_mode(ui->light_sysvers_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_5, 558, 210);
	lv_obj_set_size(ui->light_sysvers_label_5, 76, 40);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_5, &lv_font_SourceHanSansCN_Medium_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_6
	ui->light_sysvers_label_6 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_6, "系统信息");
	lv_label_set_long_mode(ui->light_sysvers_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_6, 157, 98);
	lv_obj_set_size(ui->light_sysvers_label_6, 104, 24);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_6, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_6, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_7
	ui->light_sysvers_label_7 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_7, "身份");
	lv_label_set_long_mode(ui->light_sysvers_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_7, 40, 150);
	lv_obj_set_size(ui->light_sysvers_label_7, 52, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_7, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_7, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_8
	ui->light_sysvers_label_8 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_8, "IP地址");
	lv_label_set_long_mode(ui->light_sysvers_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_8, 40, 192);
	lv_obj_set_size(ui->light_sysvers_label_8, 79, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_8, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_8, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_8, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_9
	ui->light_sysvers_label_9 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_9, "本地ID");
	lv_label_set_long_mode(ui->light_sysvers_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_9, 40, 234);
	lv_obj_set_size(ui->light_sysvers_label_9, 82, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_9, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_9, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_9, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_10
	ui->light_sysvers_label_10 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_10, "表决权限");
	lv_label_set_long_mode(ui->light_sysvers_label_10, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_10, 40, 276);
	lv_obj_set_size(ui->light_sysvers_label_10, 104, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_10, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_10, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_10, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_11
	ui->light_sysvers_label_11 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_11, "签到权限");
	lv_label_set_long_mode(ui->light_sysvers_label_11, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_11, 40, 318);
	lv_obj_set_size(ui->light_sysvers_label_11, 108, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_11, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_11, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_11, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_11, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_12
	ui->light_sysvers_label_12 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_12, "版本号");
	lv_label_set_long_mode(ui->light_sysvers_label_12, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_12, 40, 360);
	lv_obj_set_size(ui->light_sysvers_label_12, 73, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_12, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_12, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_12, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_12, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_13
	ui->light_sysvers_label_13 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_13, "主席");
	lv_label_set_long_mode(ui->light_sysvers_label_13, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_13, 323, 150);
	lv_obj_set_size(ui->light_sysvers_label_13, 53, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_13, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_13, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_13, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_14
	ui->light_sysvers_label_14 = lv_label_create(ui->light_sysvers);
	lv_label_set_text(ui->light_sysvers_label_14, "172.16.15.23");
	lv_label_set_long_mode(ui->light_sysvers_label_14, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_14, 224, 192);
	lv_obj_set_size(ui->light_sysvers_label_14, 148, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_14, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_14, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_14, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_14, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_15
	ui->light_sysvers_label_15 = lv_label_create(ui->light_sysvers);
	lv_label_set_text(ui->light_sysvers_label_15, "001");
	lv_label_set_long_mode(ui->light_sysvers_label_15, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_15, 330, 234);
	lv_obj_set_size(ui->light_sysvers_label_15, 42, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_15, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_15, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_15, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_16
	ui->light_sysvers_label_16 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_16, "开启");
	lv_label_set_long_mode(ui->light_sysvers_label_16, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_16, 323, 276);
	lv_obj_set_size(ui->light_sysvers_label_16, 49, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_16, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_16, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_16, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_17
	ui->light_sysvers_label_17 = lv_label_create(ui->light_sysvers);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->light_sysvers_label_17, "禁止");
	lv_label_set_long_mode(ui->light_sysvers_label_17, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_17, 323, 318);
	lv_obj_set_size(ui->light_sysvers_label_17, 49, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_17, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_17, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_17, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_17, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes light_sysvers_label_18
	ui->light_sysvers_label_18 = lv_label_create(ui->light_sysvers);
	lv_label_set_text(ui->light_sysvers_label_18, "V1.0");
	lv_label_set_long_mode(ui->light_sysvers_label_18, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->light_sysvers_label_18, 322, 360);
	lv_obj_set_size(ui->light_sysvers_label_18, 50, 27);
	lv_obj_set_scrollbar_mode(ui->light_sysvers_label_18, LV_SCROLLBAR_MODE_OFF);

	//Write style for light_sysvers_label_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->light_sysvers_label_18, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->light_sysvers_label_18, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->light_sysvers_label_18, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->light_sysvers_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->light_sysvers);


	//Init events for screen.
	events_init_light_sysvers(ui);
}
