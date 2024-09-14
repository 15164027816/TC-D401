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

void setup_scr_confirm(lv_ui *ui)
{
	//Write codes confirm
	ui->confirm = lv_obj_create(NULL);
	lv_obj_set_size(ui->confirm, 800, 480);
	lv_obj_set_scrollbar_mode(ui->confirm, LV_SCROLLBAR_MODE_OFF);

	//Write style for confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->confirm, &_speakrequst_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes confirm_label_1
	ui->confirm_label_1 = lv_label_create(ui->confirm);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->confirm_label_1, "发言申请");
	lv_label_set_long_mode(ui->confirm_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->confirm_label_1, 335, 34);
	lv_obj_set_size(ui->confirm_label_1, 130, 36);
	lv_obj_set_scrollbar_mode(ui->confirm_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for confirm_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->confirm_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->confirm_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->confirm_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->confirm_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes confirm_label_2
	ui->confirm_label_2 = lv_label_create(ui->confirm);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->confirm_label_2, "张国庆");
	lv_label_set_long_mode(ui->confirm_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->confirm_label_2, 351, 154);
	lv_obj_set_size(ui->confirm_label_2, 98, 32);
	lv_obj_set_scrollbar_mode(ui->confirm_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for confirm_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->confirm_label_2, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->confirm_label_2, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->confirm_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->confirm_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes confirm_label_3
	ui->confirm_label_3 = lv_label_create(ui->confirm);
	lv_label_set_text(ui->confirm_label_3, "ID:001");
	lv_label_set_long_mode(ui->confirm_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->confirm_label_3, 334, 208);
	lv_obj_set_size(ui->confirm_label_3, 125, 32);
	lv_obj_set_scrollbar_mode(ui->confirm_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for confirm_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->confirm_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->confirm_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->confirm_label_3, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->confirm_label_3, &lv_font_SourceHanSansCN_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->confirm_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->confirm_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->confirm_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->confirm_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->confirm_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->confirm_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->confirm_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->confirm_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->confirm_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes confirm_imgbtn_1
	ui->confirm_imgbtn_1 = lv_imgbtn_create(ui->confirm);
	lv_obj_add_flag(ui->confirm_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->confirm_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_redlongbut_alpha_240x80, NULL);
	lv_imgbtn_set_src(ui->confirm_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_redlongbut_clk_alpha_240x80, NULL);
	lv_obj_add_flag(ui->confirm_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->confirm_imgbtn_1_label = lv_label_create(ui->confirm_imgbtn_1);
	lv_label_set_text(ui->confirm_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->confirm_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->confirm_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->confirm_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->confirm_imgbtn_1, 144, 356);
	lv_obj_set_size(ui->confirm_imgbtn_1, 240, 80);
	lv_obj_set_scrollbar_mode(ui->confirm_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for confirm_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->confirm_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->confirm_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->confirm_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->confirm_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->confirm_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for confirm_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->confirm_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->confirm_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->confirm_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->confirm_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for confirm_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->confirm_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->confirm_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->confirm_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->confirm_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes confirm_imgbtn_2
	ui->confirm_imgbtn_2 = lv_imgbtn_create(ui->confirm);
	lv_obj_add_flag(ui->confirm_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->confirm_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_confirm_def_alpha_240x80, NULL);
	lv_imgbtn_set_src(ui->confirm_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_confirm_clk_alpha_240x80, NULL);
	lv_obj_add_flag(ui->confirm_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->confirm_imgbtn_2_label = lv_label_create(ui->confirm_imgbtn_2);
	lv_label_set_text(ui->confirm_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->confirm_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->confirm_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->confirm_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->confirm_imgbtn_2, 416, 356);
	lv_obj_set_size(ui->confirm_imgbtn_2, 240, 80);
	lv_obj_set_scrollbar_mode(ui->confirm_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for confirm_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->confirm_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->confirm_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->confirm_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->confirm_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->confirm_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for confirm_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->confirm_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->confirm_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->confirm_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->confirm_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for confirm_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->confirm_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->confirm_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->confirm_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->confirm_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes confirm_label_4
	ui->confirm_label_4 = lv_label_create(ui->confirm);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->confirm_label_4, "拒绝");
	lv_label_set_long_mode(ui->confirm_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->confirm_label_4, 232, 380);
	lv_obj_set_size(ui->confirm_label_4, 65, 32);
	lv_obj_set_scrollbar_mode(ui->confirm_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for confirm_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->confirm_label_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->confirm_label_4, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->confirm_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->confirm_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes confirm_label_5
	ui->confirm_label_5 = lv_label_create(ui->confirm);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->confirm_label_5, "同意");
	lv_label_set_long_mode(ui->confirm_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->confirm_label_5, 504, 380);
	lv_obj_set_size(ui->confirm_label_5, 65, 32);
	lv_obj_set_scrollbar_mode(ui->confirm_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for confirm_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->confirm_label_5, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->confirm_label_5, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->confirm_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->confirm_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->confirm);

	events_init_confirm(ui);
}
