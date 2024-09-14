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

void setup_scr_pop_man(lv_ui *ui)
{
	//Write codes pop_man
	ui->pop_man = lv_obj_create(NULL);
	lv_obj_set_size(ui->pop_man, 800, 480);
	lv_obj_set_scrollbar_mode(ui->pop_man, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_man, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->pop_man, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->pop_man, &_popwindow_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->pop_man, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes pop_man_label_1
	ui->pop_man_label_1 = lv_label_create(ui->pop_man);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->pop_man_label_1, "人工服务");
	lv_label_set_long_mode(ui->pop_man_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->pop_man_label_1, 319, 34);
	lv_obj_set_size(ui->pop_man_label_1, 162, 38);
	lv_obj_set_scrollbar_mode(ui->pop_man_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_man_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->pop_man_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->pop_man_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->pop_man_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->pop_man_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->pop_man_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->pop_man_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->pop_man_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->pop_man_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->pop_man_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->pop_man_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->pop_man_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->pop_man_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->pop_man_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes pop_man_imgbtn_1
	ui->pop_man_imgbtn_1 = lv_imgbtn_create(ui->pop_man);
	lv_imgbtn_set_src(ui->pop_man_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_cancle_def_alpha_240x80, NULL);
	lv_imgbtn_set_src(ui->pop_man_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_cancle_clk_alpha_240x80, NULL);
	lv_obj_add_flag(ui->pop_man_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->pop_man_imgbtn_1_label = lv_label_create(ui->pop_man_imgbtn_1);
	lv_label_set_text(ui->pop_man_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->pop_man_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->pop_man_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->pop_man_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->pop_man_imgbtn_1, 145, 356);
	lv_obj_set_size(ui->pop_man_imgbtn_1, 240, 80);
	lv_obj_set_scrollbar_mode(ui->pop_man_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_man_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->pop_man_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->pop_man_imgbtn_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->pop_man_imgbtn_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->pop_man_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->pop_man_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for pop_man_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->pop_man_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->pop_man_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->pop_man_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->pop_man_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for pop_man_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->pop_man_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->pop_man_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->pop_man_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->pop_man_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes pop_man_imgbtn_2
	ui->pop_man_imgbtn_2 = lv_imgbtn_create(ui->pop_man);
	lv_imgbtn_set_src(ui->pop_man_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_confirm_def_alpha_240x80, NULL);
	lv_imgbtn_set_src(ui->pop_man_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_confirm_clk_alpha_240x80, NULL);
	lv_obj_add_flag(ui->pop_man_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->pop_man_imgbtn_2_label = lv_label_create(ui->pop_man_imgbtn_2);
	lv_label_set_text(ui->pop_man_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->pop_man_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->pop_man_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->pop_man_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->pop_man_imgbtn_2, 418, 356);
	lv_obj_set_size(ui->pop_man_imgbtn_2, 240, 80);
	lv_obj_set_scrollbar_mode(ui->pop_man_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_man_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->pop_man_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->pop_man_imgbtn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->pop_man_imgbtn_2, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->pop_man_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->pop_man_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for pop_man_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->pop_man_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->pop_man_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->pop_man_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->pop_man_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for pop_man_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->pop_man_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->pop_man_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->pop_man_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->pop_man_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes pop_man_label_5
	ui->pop_man_label_5 = lv_label_create(ui->pop_man);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->pop_man_label_5, "是否发送人工服务申请");
	lv_label_set_long_mode(ui->pop_man_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->pop_man_label_5, 239, 221);
	lv_obj_set_size(ui->pop_man_label_5, 323, 38);
	lv_obj_set_scrollbar_mode(ui->pop_man_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_man_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->pop_man_label_5, lv_color_hex(0x33425b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->pop_man_label_5, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->pop_man_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->pop_man_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes pop_man_label_6
	ui->pop_man_label_6 = lv_label_create(ui->pop_man);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->pop_man_label_6, "确认");
	lv_label_set_long_mode(ui->pop_man_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->pop_man_label_6, 504, 380);
	lv_obj_set_size(ui->pop_man_label_6, 68, 32);
	lv_obj_set_scrollbar_mode(ui->pop_man_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_man_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->pop_man_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->pop_man_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->pop_man_label_6, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->pop_man_label_6, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->pop_man_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->pop_man_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->pop_man_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->pop_man_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->pop_man_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->pop_man_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->pop_man_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->pop_man_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->pop_man_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes pop_man_label_7
	ui->pop_man_label_7 = lv_label_create(ui->pop_man);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->pop_man_label_7, "取消");
	lv_label_set_long_mode(ui->pop_man_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->pop_man_label_7, 215, 380);
	lv_obj_set_size(ui->pop_man_label_7, 100, 32);
	lv_obj_set_scrollbar_mode(ui->pop_man_label_7, LV_SCROLLBAR_MODE_OFF);

	//Write style for pop_man_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->pop_man_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->pop_man_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->pop_man_label_7, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->pop_man_label_7, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->pop_man_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->pop_man_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->pop_man_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->pop_man_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->pop_man_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->pop_man_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->pop_man_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->pop_man_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->pop_man_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->pop_man);


	//Init events for screen.
	events_init_pop_man(ui);
}
