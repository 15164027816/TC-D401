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

void setup_scr_Satisfaction(lv_ui *ui)
{
	//Write codes Satisfaction
	ui->Satisfaction = lv_obj_create(NULL);
	lv_obj_set_size(ui->Satisfaction, 800, 480);
	lv_obj_set_scrollbar_mode(ui->Satisfaction, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Satisfaction, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Satisfaction, &_popwindow_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Satisfaction, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_label_1
	ui->Satisfaction_label_1 = lv_label_create(ui->Satisfaction);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->Satisfaction_label_1, "表决");
	lv_label_set_long_mode(ui->Satisfaction_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_label_1, 368, 34);
	lv_obj_set_size(ui->Satisfaction_label_1, 68, 36);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_img_1
	ui->Satisfaction_img_1 = lv_img_create(ui->Satisfaction);
	lv_obj_add_flag(ui->Satisfaction_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Satisfaction_img_1, &_origin_alpha_18x18);
	lv_img_set_pivot(ui->Satisfaction_img_1, 50,50);
	lv_img_set_angle(ui->Satisfaction_img_1, 0);
	lv_obj_set_pos(ui->Satisfaction_img_1, 44, 112);
	lv_obj_set_size(ui->Satisfaction_img_1, 18, 18);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Satisfaction_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_label_2
	ui->Satisfaction_label_2 = lv_label_create(ui->Satisfaction);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->Satisfaction_label_2, "记名表决");
	lv_label_set_long_mode(ui->Satisfaction_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_label_2, 70, 108);
	lv_obj_set_size(ui->Satisfaction_label_2, 104, 28);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_label_2, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_label_2, &lv_font_SourceHanSansCN_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_img_2
	ui->Satisfaction_img_2 = lv_img_create(ui->Satisfaction);
	lv_obj_add_flag(ui->Satisfaction_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Satisfaction_img_2, &_origin_alpha_18x18);
	lv_img_set_pivot(ui->Satisfaction_img_2, 50,50);
	lv_img_set_angle(ui->Satisfaction_img_2, 0);
	lv_obj_set_pos(ui->Satisfaction_img_2, 306, 112);
	lv_obj_set_size(ui->Satisfaction_img_2, 18, 18);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_img_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Satisfaction_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_label_3
	ui->Satisfaction_label_3 = lv_label_create(ui->Satisfaction);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->Satisfaction_label_3, "选择第一次有效");
	lv_label_set_long_mode(ui->Satisfaction_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_label_3, 332, 108);
	lv_obj_set_size(ui->Satisfaction_label_3, 182, 28);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_label_3, lv_color_hex(0x6F8FA9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_label_3, &lv_font_SourceHanSansCN_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_imgbtn_1
	ui->Satisfaction_imgbtn_1 = lv_imgbtn_create(ui->Satisfaction);
	lv_obj_add_flag(ui->Satisfaction_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_unselectbtn_alpha_220x180, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_greenselect_alpha_220x180, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_greenselect_alpha_220x180, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_unselectbtn_alpha_220x180, NULL);
	lv_obj_add_flag(ui->Satisfaction_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->Satisfaction_imgbtn_1_label = lv_label_create(ui->Satisfaction_imgbtn_1);
	lv_label_set_text(ui->Satisfaction_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->Satisfaction_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Satisfaction_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Satisfaction_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->Satisfaction_imgbtn_1, 44, 160);
	lv_obj_set_size(ui->Satisfaction_imgbtn_1, 220, 180);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Satisfaction_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Satisfaction_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->Satisfaction_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->Satisfaction_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->Satisfaction_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for Satisfaction_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->Satisfaction_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->Satisfaction_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Satisfaction_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes Satisfaction_imgbtn_2
	ui->Satisfaction_imgbtn_2 = lv_imgbtn_create(ui->Satisfaction);
	lv_obj_add_flag(ui->Satisfaction_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_unselectbtn_alpha_220x180, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_yelloselect_alpha_220x180, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_yelloselect_alpha_220x180, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_unselectbtn_alpha_220x180, NULL);
	lv_obj_add_flag(ui->Satisfaction_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->Satisfaction_imgbtn_2_label = lv_label_create(ui->Satisfaction_imgbtn_2);
	lv_label_set_text(ui->Satisfaction_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->Satisfaction_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Satisfaction_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Satisfaction_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->Satisfaction_imgbtn_2, 290, 160);
	lv_obj_set_size(ui->Satisfaction_imgbtn_2, 220, 180);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Satisfaction_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Satisfaction_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->Satisfaction_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->Satisfaction_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->Satisfaction_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for Satisfaction_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->Satisfaction_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->Satisfaction_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Satisfaction_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes Satisfaction_imgbtn_3
	ui->Satisfaction_imgbtn_3 = lv_imgbtn_create(ui->Satisfaction);
	lv_obj_add_flag(ui->Satisfaction_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_unselectbtn_alpha_220x180, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_redselect_alpha_220x180, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_redselect_alpha_220x180, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_imgbtn_3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_unselectbtn_alpha_220x180, NULL);
	lv_obj_add_flag(ui->Satisfaction_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	ui->Satisfaction_imgbtn_3_label = lv_label_create(ui->Satisfaction_imgbtn_3);
	lv_label_set_text(ui->Satisfaction_imgbtn_3_label, "");
	lv_label_set_long_mode(ui->Satisfaction_imgbtn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Satisfaction_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Satisfaction_imgbtn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->Satisfaction_imgbtn_3, 536, 160);
	lv_obj_set_size(ui->Satisfaction_imgbtn_3, 220, 180);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Satisfaction_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_imgbtn_3, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Satisfaction_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->Satisfaction_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->Satisfaction_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->Satisfaction_imgbtn_3, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for Satisfaction_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->Satisfaction_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->Satisfaction_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Satisfaction_imgbtn_3, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes Satisfaction_label_4
	ui->Satisfaction_label_4 = lv_label_create(ui->Satisfaction);
	lv_label_set_text(ui->Satisfaction_label_4, "满意");
	lv_label_set_long_mode(ui->Satisfaction_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_label_4, 106, 228);
	lv_obj_set_size(ui->Satisfaction_label_4, 98, 44);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_label_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_label_4, &lv_font_SourceHanSansCN_Medium_44, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_label_5
	ui->Satisfaction_label_5 = lv_label_create(ui->Satisfaction);
	lv_label_set_text(ui->Satisfaction_label_5, "基本满意");
	lv_label_set_long_mode(ui->Satisfaction_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_label_5, 312, 228);
	lv_obj_set_size(ui->Satisfaction_label_5, 176, 44);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_label_5, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_label_5, &lv_font_SourceHanSansCN_Medium_44, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_label_6
	ui->Satisfaction_label_6 = lv_label_create(ui->Satisfaction);
	lv_label_set_text(ui->Satisfaction_label_6, "不满意");
	lv_label_set_long_mode(ui->Satisfaction_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_label_6, 580, 228);
	lv_obj_set_size(ui->Satisfaction_label_6, 132, 44);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_label_6, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_label_6, &lv_font_SourceHanSansCN_Medium_44, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->Satisfaction);

    events_init_Satisfaction(ui);
}
