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

void setup_scr_audio_set(lv_ui *ui)
{
	//Write codes audio_set
	ui->audio_set = lv_obj_create(NULL);
	lv_obj_set_size(ui->audio_set, 800, 480);
	lv_obj_set_scrollbar_mode(ui->audio_set, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->audio_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->audio_set, &_voiceset_back_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->audio_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes audio_set_label_1
	ui->audio_set_label_1 = lv_label_create(ui->audio_set);
    switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->audio_set_label_1, "音频设置");
	lv_label_set_long_mode(ui->audio_set_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->audio_set_label_1, 331, 19);
	lv_obj_set_size(ui->audio_set_label_1, 138, 32);
	lv_obj_set_scrollbar_mode(ui->audio_set_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->audio_set_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->audio_set_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->audio_set_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->audio_set_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->audio_set_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->audio_set_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->audio_set_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->audio_set_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->audio_set_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->audio_set_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->audio_set_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->audio_set_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->audio_set_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes audio_set_imgbtn_1
	ui->audio_set_imgbtn_1 = lv_imgbtn_create(ui->audio_set);
	lv_obj_add_flag(ui->audio_set_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->audio_set_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_back_def_alpha_68x48, NULL);
	lv_imgbtn_set_src(ui->audio_set_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_back_alpha_68x48, NULL);
	lv_obj_add_flag(ui->audio_set_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->audio_set_imgbtn_1_label = lv_label_create(ui->audio_set_imgbtn_1);
	lv_label_set_text(ui->audio_set_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->audio_set_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->audio_set_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->audio_set_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->audio_set_imgbtn_1, 20, 11);
	lv_obj_set_size(ui->audio_set_imgbtn_1, 68, 48);
	lv_obj_set_scrollbar_mode(ui->audio_set_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->audio_set_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->audio_set_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->audio_set_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->audio_set_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->audio_set_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for audio_set_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->audio_set_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->audio_set_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->audio_set_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->audio_set_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for audio_set_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->audio_set_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->audio_set_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->audio_set_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->audio_set_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes audio_set_label_2
	ui->audio_set_label_2 = lv_label_create(ui->audio_set);
	lv_label_set_text(ui->audio_set_label_2, "00:15:34");
	lv_label_set_long_mode(ui->audio_set_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->audio_set_label_2, 316, 422);
	lv_obj_set_size(ui->audio_set_label_2, 168, 46);
	lv_obj_set_scrollbar_mode(ui->audio_set_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->audio_set_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->audio_set_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->audio_set_label_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->audio_set_label_2, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->audio_set_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->audio_set_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->audio_set_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->audio_set_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->audio_set_label_2, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->audio_set_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->audio_set_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->audio_set_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->audio_set_label_2, &_time_back_168x46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->audio_set_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->audio_set_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes audio_set_label_3
	ui->audio_set_label_3 = lv_label_create(ui->audio_set);
	lv_label_set_text(ui->audio_set_label_3, "14:22");
	lv_label_set_long_mode(ui->audio_set_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->audio_set_label_3, 685, 19);
	lv_obj_set_size(ui->audio_set_label_3, 95, 32);
	lv_obj_set_scrollbar_mode(ui->audio_set_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->audio_set_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->audio_set_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->audio_set_label_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->audio_set_label_3, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->audio_set_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->audio_set_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->audio_set_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->audio_set_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->audio_set_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->audio_set_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->audio_set_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->audio_set_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->audio_set_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes audio_set_slider_1
	ui->audio_set_slider_1 = lv_slider_create(ui->audio_set);
	lv_slider_set_range(ui->audio_set_slider_1, 0,16);
	lv_slider_set_value(ui->audio_set_slider_1, 50, false);
	lv_obj_set_pos(ui->audio_set_slider_1, 456, 289);
	lv_obj_set_size(ui->audio_set_slider_1, 280, 16);
	lv_obj_set_scrollbar_mode(ui->audio_set_slider_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_slider_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->audio_set_slider_1, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->audio_set_slider_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->audio_set_slider_1, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->audio_set_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->audio_set_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for audio_set_slider_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->audio_set_slider_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->audio_set_slider_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->audio_set_slider_1, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for audio_set_slider_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->audio_set_slider_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->audio_set_slider_1, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->audio_set_slider_1, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes audio_set_label_4
	ui->audio_set_label_4 = lv_label_create(ui->audio_set);
	 switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->audio_set_label_4, "耳机音量");
	lv_label_set_long_mode(ui->audio_set_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->audio_set_label_4, 545, 98);
	lv_obj_set_size(ui->audio_set_label_4, 104, 24);
	lv_obj_set_scrollbar_mode(ui->audio_set_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->audio_set_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->audio_set_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->audio_set_label_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->audio_set_label_4, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->audio_set_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->audio_set_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->audio_set_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->audio_set_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->audio_set_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->audio_set_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->audio_set_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->audio_set_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->audio_set_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    extern char   vo_buf[50];
	//Write codes audio_set_label_5
	ui->audio_set_label_5 = lv_label_create(ui->audio_set);
	lv_label_set_text(ui->audio_set_label_5, vo_buf);
	lv_label_set_long_mode(ui->audio_set_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->audio_set_label_5, 554, 210);
	lv_obj_set_size(ui->audio_set_label_5, 78, 40);
	lv_obj_set_scrollbar_mode(ui->audio_set_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->audio_set_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->audio_set_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->audio_set_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->audio_set_label_5, &lv_font_SourceHanSansCN_Medium_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->audio_set_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->audio_set_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->audio_set_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->audio_set_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->audio_set_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->audio_set_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->audio_set_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->audio_set_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->audio_set_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes audio_set_label_6
	ui->audio_set_label_6 = lv_label_create(ui->audio_set);
	 switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->audio_set_label_6, "耳机输出");
	lv_label_set_long_mode(ui->audio_set_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->audio_set_label_6, 157, 98);
	lv_obj_set_size(ui->audio_set_label_6, 104, 24);
	lv_obj_set_scrollbar_mode(ui->audio_set_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->audio_set_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->audio_set_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->audio_set_label_6, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->audio_set_label_6, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->audio_set_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->audio_set_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->audio_set_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->audio_set_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->audio_set_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->audio_set_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->audio_set_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->audio_set_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->audio_set_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes audio_set_roller_1
	ui->audio_set_roller_1 = lv_roller_create(ui->audio_set);

	lv_roller_set_options(ui->audio_set_roller_1, "00\01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59\n60\n61\n62\n63", LV_ROLLER_MODE_NORMAL);
	lv_roller_set_visible_row_count(ui->audio_set_roller_1, 5);
    lv_obj_set_pos(ui->audio_set_roller_1, 20, 134);
	lv_obj_set_width(ui->audio_set_roller_1, 372);
     lv_obj_set_height(ui->audio_set_roller_1, 268);
    lv_obj_set_style_text_line_space(ui->audio_set_roller_1, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_scrollbar_mode(ui->audio_set_roller_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_roller_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->audio_set_roller_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->audio_set_roller_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->audio_set_roller_1, lv_color_hex(0xeff6ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->audio_set_roller_1, lv_color_hex(0x33425b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->audio_set_roller_1, &lv_font_SourceHanSansCN_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->audio_set_roller_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->audio_set_roller_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->audio_set_roller_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for audio_set_roller_1, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->audio_set_roller_1, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->audio_set_roller_1, lv_color_hex(0xc4dcfa), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->audio_set_roller_1, lv_color_hex(0x33425b), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->audio_set_roller_1, &lv_font_SourceHanSansCN_Medium_40, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->audio_set_roller_1, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DEFAULT);

	//Write codes audio_set_img_1
	ui->audio_set_img_1 = lv_img_create(ui->audio_set);
	lv_obj_add_flag(ui->audio_set_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->audio_set_img_1, &_blue_clecked_alpha_48x48);
	lv_img_set_pivot(ui->audio_set_img_1, 50,50);
	lv_img_set_angle(ui->audio_set_img_1, 0);
	lv_obj_set_pos(ui->audio_set_img_1, 331, 243);
	lv_obj_set_size(ui->audio_set_img_1, 48, 48);
	lv_obj_set_scrollbar_mode(ui->audio_set_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for audio_set_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->audio_set_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->audio_set);


	//Init events for screen.
	events_init_audio_set(ui);
}
