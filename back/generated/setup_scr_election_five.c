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

void setup_scr_election_five(lv_ui *ui)
{
	//Write codes election_five
	ui->election_five = lv_obj_create(NULL);
	lv_obj_set_size(ui->election_five, 800, 480);
	lv_obj_set_scrollbar_mode(ui->election_five, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->election_five, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->election_five, &_popwindow_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->election_five, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_label_1
	ui->election_five_label_1 = lv_label_create(ui->election_five);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->election_five_label_1, "选举");
	lv_label_set_long_mode(ui->election_five_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->election_five_label_1, 368, 34);
	lv_obj_set_size(ui->election_five_label_1, 65, 36);
	lv_obj_set_scrollbar_mode(ui->election_five_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_img_1
	ui->election_five_img_1 = lv_img_create(ui->election_five);
	lv_obj_add_flag(ui->election_five_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->election_five_img_1, &_origin_alpha_18x18);
	lv_img_set_pivot(ui->election_five_img_1, 50,50);
	lv_img_set_angle(ui->election_five_img_1, 0);
	lv_obj_set_pos(ui->election_five_img_1, 44, 112);
	lv_obj_set_size(ui->election_five_img_1, 18, 18);
	lv_obj_set_scrollbar_mode(ui->election_five_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->election_five_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_img_2
	ui->election_five_img_2 = lv_img_create(ui->election_five);
	lv_obj_add_flag(ui->election_five_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->election_five_img_2, &_origin_alpha_18x18);
	lv_img_set_pivot(ui->election_five_img_2, 50,50);
	lv_img_set_angle(ui->election_five_img_2, 0);
	lv_obj_set_pos(ui->election_five_img_2, 306, 112);
	lv_obj_set_size(ui->election_five_img_2, 18, 18);
	lv_obj_set_scrollbar_mode(ui->election_five_img_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->election_five_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_label_2
	ui->election_five_label_2 = lv_label_create(ui->election_five);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->election_five_label_2, "记名表决");
	lv_label_set_long_mode(ui->election_five_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->election_five_label_2, 70, 108);
	lv_obj_set_size(ui->election_five_label_2, 96, 28);
	lv_obj_set_scrollbar_mode(ui->election_five_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_label_2, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_label_2, &lv_font_SourceHanSansCN_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_label_3
	ui->election_five_label_3 = lv_label_create(ui->election_five);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->election_five_label_3, "选择第一次有效");
	lv_label_set_long_mode(ui->election_five_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->election_five_label_3, 332, 108);
	lv_obj_set_size(ui->election_five_label_3, 168, 28);
	lv_obj_set_scrollbar_mode(ui->election_five_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_label_3, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_label_3, &lv_font_SourceHanSansCN_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_imgbtn_1
	ui->election_five_imgbtn_1 = lv_imgbtn_create(ui->election_five);
	lv_obj_add_flag(ui->election_five_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_obj_add_flag(ui->election_five_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->election_five_imgbtn_1_label = lv_label_create(ui->election_five_imgbtn_1);
	lv_label_set_text(ui->election_five_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->election_five_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->election_five_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->election_five_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->election_five_imgbtn_1, 44, 160);
	lv_obj_set_size(ui->election_five_imgbtn_1, 344, 80);
	lv_obj_set_scrollbar_mode(ui->election_five_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for election_five_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for election_five_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes election_five_label_4
	ui->election_five_label_4 = lv_label_create(ui->election_five);
	lv_label_set_text(ui->election_five_label_4, "1");
	lv_label_set_long_mode(ui->election_five_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->election_five_label_4, 206, 184);
	lv_obj_set_size(ui->election_five_label_4, 19, 32);
	lv_obj_set_scrollbar_mode(ui->election_five_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->election_five_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->election_five_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_label_4, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->election_five_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->election_five_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->election_five_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->election_five_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->election_five_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->election_five_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->election_five_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_imgbtn_2
	ui->election_five_imgbtn_2 = lv_imgbtn_create(ui->election_five);
	lv_obj_add_flag(ui->election_five_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_obj_add_flag(ui->election_five_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->election_five_imgbtn_2_label = lv_label_create(ui->election_five_imgbtn_2);
	lv_label_set_text(ui->election_five_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->election_five_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->election_five_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->election_five_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->election_five_imgbtn_2, 44, 256);
	lv_obj_set_size(ui->election_five_imgbtn_2, 344, 80);
	lv_obj_set_scrollbar_mode(ui->election_five_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for election_five_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for election_five_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes election_five_imgbtn_3
	ui->election_five_imgbtn_3 = lv_imgbtn_create(ui->election_five);
	lv_obj_add_flag(ui->election_five_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_obj_add_flag(ui->election_five_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	ui->election_five_imgbtn_3_label = lv_label_create(ui->election_five_imgbtn_3);
	lv_label_set_text(ui->election_five_imgbtn_3_label, "");
	lv_label_set_long_mode(ui->election_five_imgbtn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->election_five_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->election_five_imgbtn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->election_five_imgbtn_3, 44, 352);
	lv_obj_set_size(ui->election_five_imgbtn_3, 344, 80);
	lv_obj_set_scrollbar_mode(ui->election_five_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_3, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for election_five_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_3, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for election_five_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_3, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes election_five_imgbtn_4
	ui->election_five_imgbtn_4 = lv_imgbtn_create(ui->election_five);
	lv_obj_add_flag(ui->election_five_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_PRESSED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_4, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_obj_add_flag(ui->election_five_imgbtn_4, LV_OBJ_FLAG_CHECKABLE);
	ui->election_five_imgbtn_4_label = lv_label_create(ui->election_five_imgbtn_4);
	lv_label_set_text(ui->election_five_imgbtn_4_label, "");
	lv_label_set_long_mode(ui->election_five_imgbtn_4_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->election_five_imgbtn_4_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->election_five_imgbtn_4, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->election_five_imgbtn_4, 412, 160);
	lv_obj_set_size(ui->election_five_imgbtn_4, 344, 80);
	lv_obj_set_scrollbar_mode(ui->election_five_imgbtn_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_4, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_imgbtn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for election_five_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_4, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for election_five_imgbtn_4, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_4, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_4, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes election_five_imgbtn_5
	ui->election_five_imgbtn_5 = lv_imgbtn_create(ui->election_five);
	lv_obj_add_flag(ui->election_five_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_RELEASED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_PRESSED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_fiveitem_clk_alpha_344x80, NULL);
	lv_imgbtn_set_src(ui->election_five_imgbtn_5, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_fiveitem_def_alpha_344x80, NULL);
	lv_obj_add_flag(ui->election_five_imgbtn_5, LV_OBJ_FLAG_CHECKABLE);
	ui->election_five_imgbtn_5_label = lv_label_create(ui->election_five_imgbtn_5);
	lv_label_set_text(ui->election_five_imgbtn_5_label, "");
	lv_label_set_long_mode(ui->election_five_imgbtn_5_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->election_five_imgbtn_5_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->election_five_imgbtn_5, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->election_five_imgbtn_5, 412, 256);
	lv_obj_set_size(ui->election_five_imgbtn_5, 344, 80);
	lv_obj_set_scrollbar_mode(ui->election_five_imgbtn_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_5, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_imgbtn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for election_five_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_5, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for election_five_imgbtn_5, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->election_five_imgbtn_5, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->election_five_imgbtn_5, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->election_five_imgbtn_5, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->election_five_imgbtn_5, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes election_five_label_5
	ui->election_five_label_5 = lv_label_create(ui->election_five);
	lv_label_set_text(ui->election_five_label_5, "3");
	lv_label_set_long_mode(ui->election_five_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->election_five_label_5, 207, 280);
	lv_obj_set_size(ui->election_five_label_5, 19, 32);
	lv_obj_set_scrollbar_mode(ui->election_five_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->election_five_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->election_five_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_label_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_label_5, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->election_five_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->election_five_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->election_five_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->election_five_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->election_five_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->election_five_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->election_five_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_label_6
	ui->election_five_label_6 = lv_label_create(ui->election_five);
	lv_label_set_text(ui->election_five_label_6, "5");
	lv_label_set_long_mode(ui->election_five_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->election_five_label_6, 207, 376);
	lv_obj_set_size(ui->election_five_label_6, 19, 32);
	lv_obj_set_scrollbar_mode(ui->election_five_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->election_five_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->election_five_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_label_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_label_6, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->election_five_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->election_five_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->election_five_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->election_five_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->election_five_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->election_five_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->election_five_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_label_7
	ui->election_five_label_7 = lv_label_create(ui->election_five);
	lv_label_set_text(ui->election_five_label_7, "2");
	lv_label_set_long_mode(ui->election_five_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->election_five_label_7, 575, 184);
	lv_obj_set_size(ui->election_five_label_7, 19, 32);
	lv_obj_set_scrollbar_mode(ui->election_five_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->election_five_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->election_five_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_label_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_label_7, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->election_five_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->election_five_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->election_five_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->election_five_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->election_five_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->election_five_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->election_five_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes election_five_label_8
	ui->election_five_label_8 = lv_label_create(ui->election_five);
	lv_label_set_text(ui->election_five_label_8, "4");
	lv_label_set_long_mode(ui->election_five_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->election_five_label_8, 575, 280);
	lv_obj_set_size(ui->election_five_label_8, 19, 32);
	lv_obj_set_scrollbar_mode(ui->election_five_label_8, LV_SCROLLBAR_MODE_OFF);

	//Write style for election_five_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->election_five_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->election_five_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->election_five_label_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->election_five_label_8, &lv_font_SourceHanSansCN_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->election_five_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->election_five_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->election_five_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->election_five_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->election_five_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->election_five_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->election_five_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->election_five_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->election_five_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->election_five);

	events_init_election_five(ui);
}