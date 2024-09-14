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

void setup_scr_Satisfaction_prot(lv_ui *ui)
{
	//Write codes Satisfaction_prot
	ui->Satisfaction_prot = lv_obj_create(NULL);
	lv_obj_set_size(ui->Satisfaction_prot, 800, 480);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_prot, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_prot, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Satisfaction_prot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Satisfaction_prot, &_popwindow_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Satisfaction_prot, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_prot_label_1
	ui->Satisfaction_prot_label_1 = lv_label_create(ui->Satisfaction_prot);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->Satisfaction_prot_label_1, "提示");
	lv_label_set_long_mode(ui->Satisfaction_prot_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_prot_label_1, 368, 34);
	lv_obj_set_size(ui->Satisfaction_prot_label_1, 68, 38);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_prot_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_prot_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_prot_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_prot_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_prot_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_prot_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_prot_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_prot_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_prot_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_prot_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_prot_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_prot_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_prot_imgbtn_1
	ui->Satisfaction_prot_imgbtn_1 = lv_imgbtn_create(ui->Satisfaction_prot);
	lv_obj_add_flag(ui->Satisfaction_prot_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->Satisfaction_prot_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_cancle_def_alpha_240x80, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_prot_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_cancle_clk_alpha_240x80, NULL);
	lv_obj_add_flag(ui->Satisfaction_prot_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->Satisfaction_prot_imgbtn_1_label = lv_label_create(ui->Satisfaction_prot_imgbtn_1);
	lv_label_set_text(ui->Satisfaction_prot_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->Satisfaction_prot_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Satisfaction_prot_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Satisfaction_prot_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->Satisfaction_prot_imgbtn_1, 145, 356);
	lv_obj_set_size(ui->Satisfaction_prot_imgbtn_1, 240, 80);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_prot_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_prot_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Satisfaction_prot_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_prot_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Satisfaction_prot_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->Satisfaction_prot_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for Satisfaction_prot_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->Satisfaction_prot_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_imgbtn_1, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes Satisfaction_prot_imgbtn_2
	ui->Satisfaction_prot_imgbtn_2 = lv_imgbtn_create(ui->Satisfaction_prot);
	lv_obj_add_flag(ui->Satisfaction_prot_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->Satisfaction_prot_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_confirm_def_alpha_240x80, NULL);
	lv_imgbtn_set_src(ui->Satisfaction_prot_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_confirm_clk_alpha_240x80, NULL);
	lv_obj_add_flag(ui->Satisfaction_prot_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->Satisfaction_prot_imgbtn_2_label = lv_label_create(ui->Satisfaction_prot_imgbtn_2);
	lv_label_set_text(ui->Satisfaction_prot_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->Satisfaction_prot_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Satisfaction_prot_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Satisfaction_prot_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->Satisfaction_prot_imgbtn_2, 418, 356);
	lv_obj_set_size(ui->Satisfaction_prot_imgbtn_2, 240, 80);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_prot_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_prot_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Satisfaction_prot_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_prot_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Satisfaction_prot_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->Satisfaction_prot_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for Satisfaction_prot_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->Satisfaction_prot_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_imgbtn_2, &lv_font_SourceHanSansCN_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes Satisfaction_prot_label_3
	ui->Satisfaction_prot_label_3 = lv_label_create(ui->Satisfaction_prot);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->Satisfaction_prot_label_3, "取消");
	lv_label_set_long_mode(ui->Satisfaction_prot_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_prot_label_3, 231, 380);
	lv_obj_set_size(ui->Satisfaction_prot_label_3, 68, 32);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_prot_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_prot_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_prot_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_prot_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_label_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_label_3, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_prot_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_prot_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_prot_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_prot_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_prot_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_prot_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_prot_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_prot_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_prot_label_4
	ui->Satisfaction_prot_label_4 = lv_label_create(ui->Satisfaction_prot);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->Satisfaction_prot_label_4, "确认");
	lv_label_set_long_mode(ui->Satisfaction_prot_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_prot_label_4, 504, 380);
	lv_obj_set_size(ui->Satisfaction_prot_label_4, 68, 32);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_prot_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_prot_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_prot_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_prot_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_label_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_label_4, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_prot_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_prot_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_prot_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_prot_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_prot_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_prot_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_prot_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_prot_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Satisfaction_prot_label_5
	ui->Satisfaction_prot_label_5 = lv_label_create(ui->Satisfaction_prot);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->Satisfaction_prot_label_5, "确认选择该选项么？");
	lv_label_set_long_mode(ui->Satisfaction_prot_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_prot_label_5, 255, 203);
	lv_obj_set_size(ui->Satisfaction_prot_label_5, 292, 34);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_prot_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_prot_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_label_5, lv_color_hex(0x33425B), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_label_5, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_prot_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    extern int satis_flag;     //0满意，1基本满意，2 不满意 ，3 未表决
	//Write codes Satisfaction_prot_label_6
	ui->Satisfaction_prot_label_6 = lv_label_create(ui->Satisfaction_prot);
    switch (satis_flag)
    {
    case 0:
        {
             switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
            lv_label_set_text(ui->Satisfaction_prot_label_6, "(满意)");
        break;
        }
    case 1:{
         switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
        lv_label_set_text(ui->Satisfaction_prot_label_6, "(基本满意)");
        break;
    }
    case 2:{
         switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
        lv_label_set_text(ui->Satisfaction_prot_label_6, "(不满意)");
        break;
    }
    default:
        break;
    }

	lv_label_set_long_mode(ui->Satisfaction_prot_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Satisfaction_prot_label_6, 317, 249);
	lv_obj_set_size(ui->Satisfaction_prot_label_6, 166, 32);
	lv_obj_set_scrollbar_mode(ui->Satisfaction_prot_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for Satisfaction_prot_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Satisfaction_prot_label_6, lv_color_hex(0x33425b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Satisfaction_prot_label_6, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Satisfaction_prot_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Satisfaction_prot_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->Satisfaction_prot);


	//Init events for screen.
	events_init_Satisfaction_prot(ui);
}
