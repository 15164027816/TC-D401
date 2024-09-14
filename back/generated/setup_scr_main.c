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

void setup_scr_main(lv_ui *ui)
{
	//Write codes main
	ui->main = lv_obj_create(NULL);
	lv_obj_set_size(ui->main, 800, 480);
	lv_obj_set_scrollbar_mode(ui->main, LV_SCROLLBAR_MODE_OFF);

	//Write style for main, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->main, &_background_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->main, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes main_imgbtn_1
	ui->main_imgbtn_1 = lv_imgbtn_create(ui->main);
	lv_imgbtn_set_src(ui->main_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_microphone_off_alpha_362x210, NULL);
	lv_imgbtn_set_src(ui->main_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_microphone_on_alpha_362x210, NULL);
	lv_imgbtn_set_src(ui->main_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_microphone_on_alpha_362x210, NULL);
	lv_imgbtn_set_src(ui->main_imgbtn_1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_microphone_off_alpha_362x210, NULL);
	lv_obj_add_flag(ui->main_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
	ui->main_imgbtn_1_label = lv_label_create(ui->main_imgbtn_1);
	lv_label_set_text(ui->main_imgbtn_1_label, "");
	lv_label_set_long_mode(ui->main_imgbtn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->main_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->main_imgbtn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->main_imgbtn_1, 219, 135);
	lv_obj_set_size(ui->main_imgbtn_1, 362, 210);
	lv_obj_set_scrollbar_mode(ui->main_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->main_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->main_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->main_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->main_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->main_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for main_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->main_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->main_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->main_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->main_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for main_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->main_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->main_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->main_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->main_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes main_imgbtn_2
	ui->main_imgbtn_2 = lv_imgbtn_create(ui->main);
	lv_obj_add_flag(ui->main_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->main_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_menu_def_alpha_118x50, NULL);
	lv_imgbtn_set_src(ui->main_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_menu_push_alpha_118x50, NULL);
	lv_obj_add_flag(ui->main_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
	ui->main_imgbtn_2_label = lv_label_create(ui->main_imgbtn_2);
	lv_label_set_text(ui->main_imgbtn_2_label, "");
	lv_label_set_long_mode(ui->main_imgbtn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->main_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->main_imgbtn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->main_imgbtn_2, 662, 90);
	lv_obj_set_size(ui->main_imgbtn_2, 118, 50);
	lv_obj_set_scrollbar_mode(ui->main_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->main_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->main_imgbtn_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->main_imgbtn_2, &lv_font_SourceHanSansCN_Medium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->main_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->main_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for main_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->main_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->main_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->main_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->main_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for main_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->main_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->main_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->main_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->main_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes main_imgbtn_3
	ui->main_imgbtn_3 = lv_imgbtn_create(ui->main);
	lv_obj_add_flag(ui->main_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	lv_imgbtn_set_src(ui->main_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_prispeak_def_alpha_130x130, NULL);
	lv_imgbtn_set_src(ui->main_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_prispeak_clk_alpha_130x130, NULL);
	lv_obj_add_flag(ui->main_imgbtn_3, LV_OBJ_FLAG_CHECKABLE);
	ui->main_imgbtn_3_label = lv_label_create(ui->main_imgbtn_3);
	lv_label_set_text(ui->main_imgbtn_3_label, "");
	lv_label_set_long_mode(ui->main_imgbtn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->main_imgbtn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->main_imgbtn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->main_imgbtn_3, 650, 206);
	lv_obj_set_size(ui->main_imgbtn_3, 130, 130);
	lv_obj_set_scrollbar_mode(ui->main_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->main_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->main_imgbtn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->main_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->main_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->main_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for main_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_img_opa(ui->main_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->main_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->main_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->main_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style for main_imgbtn_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_img_opa(ui->main_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->main_imgbtn_3, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->main_imgbtn_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->main_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write codes main_img_2
	ui->main_img_2 = lv_img_create(ui->main);
	lv_obj_add_flag(ui->main_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->main_img_2, &_earphone_alpha_31x33);
	lv_img_set_pivot(ui->main_img_2, 50,50);
	lv_img_set_angle(ui->main_img_2, 0);
	lv_obj_set_pos(ui->main_img_2, 744, 427);
	lv_obj_set_size(ui->main_img_2, 31, 33);
	lv_obj_set_scrollbar_mode(ui->main_img_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->main_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes main_label_1
	ui->main_label_1 = lv_label_create(ui->main);
    switch (country)
    {
    case 0:
        lv_label_set_text(ui->main_label_1, "菜单");
        break;
    case 1:
        lv_label_set_text(ui->main_label_1, "菜單");
        break;
    case 2:
        lv_label_set_text(ui->main_label_1, "menu");
        break;
    case 3:
        lv_label_set_text(ui->main_label_1, "меню");
        break;
    case 4:
        lv_label_set_text(ui->main_label_1, "menu");
    default:
        break;
    }

	lv_label_set_long_mode(ui->main_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->main_label_1, 670, 98);
	lv_obj_set_size(ui->main_label_1, 84, 30);
	lv_obj_set_scrollbar_mode(ui->main_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->main_label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->main_label_1, &lv_font_SourceHanSansCN_Medium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->main_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->main_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes main_label_2
	ui->main_label_2 = lv_label_create(ui->main);
	lv_label_set_text(ui->main_label_2, "你好,杨徐谌密");
	lv_label_set_long_mode(ui->main_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->main_label_2, 20, 19);
	lv_obj_set_size(ui->main_label_2, 219, 32);
	lv_obj_set_scrollbar_mode(ui->main_label_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->main_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->main_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->main_label_2, lv_color_hex(0xFFCB00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->main_label_2, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->main_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->main_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->main_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->main_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->main_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->main_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->main_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->main_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->main_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    extern int country;
	//Write codes main_label_3
	ui->main_label_3 = lv_label_create(ui->main);
	//lv_label_set_text(ui->main_label_3, "开启话筒");
     switch (country)
		{
		case 0:
			lv_label_set_text(ui->main_label_3, "开启话筒");
			break;
		case 1:
            lv_label_set_text(ui->main_label_3, "開啟話筒");
			break;

		case 2:
            lv_label_set_text(ui->main_label_3, "Enable microphone");
            break;

        case 3:
            lv_label_set_text(ui->main_label_3, "Включить микрофон");
			break;

		case 4:
            lv_label_set_text(ui->main_label_3, "Activer le microphone");
			break;

		default:
        	break;
		}
	lv_label_set_long_mode(ui->main_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->main_label_3, 232, 356);
	lv_obj_set_size(ui->main_label_3, 340, 32);
	lv_obj_set_scrollbar_mode(ui->main_label_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->main_label_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->main_label_3, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->main_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->main_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes main_label_4
	ui->main_label_4 = lv_label_create(ui->main);
    switch (country)
    {
    case 0:
        lv_label_set_text(ui->main_label_4, "优先发言");
        break;
    case 1:
        lv_label_set_text(ui->main_label_4, "優先發言");
        break;
    case 2:
        lv_label_set_text(ui->main_label_4, "Priority to speak");
        break;
    case 3:
        lv_label_set_text(ui->main_label_4, "Говори первым");
        break;
    case 4:
        lv_label_set_text(ui->main_label_4, "Parlez d'abord");
    default:
        break;
    }

	lv_label_set_long_mode(ui->main_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->main_label_4, 644, 356);
	lv_obj_set_size(ui->main_label_4, 150, 60);
	lv_obj_set_scrollbar_mode(ui->main_label_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->main_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->main_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->main_label_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->main_label_4, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->main_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->main_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->main_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->main_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->main_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->main_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->main_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->main_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->main_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes main_label_5
	ui->main_label_5 = lv_label_create(ui->main);
	lv_label_set_text(ui->main_label_5, "00:15:34");
	lv_label_set_long_mode(ui->main_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->main_label_5, 316, 422);
	lv_obj_set_size(ui->main_label_5, 168, 46);
	lv_obj_set_scrollbar_mode(ui->main_label_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->main_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->main_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->main_label_5, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->main_label_5, &lv_font_SourceHanSansCN_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->main_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->main_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->main_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->main_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->main_label_5, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->main_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->main_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->main_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->main_label_5, &_time_back_168x46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->main_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->main_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes main_label_6
	ui->main_label_6 = lv_label_create(ui->main);
	lv_label_set_text(ui->main_label_6, "14:22");
	lv_label_set_long_mode(ui->main_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->main_label_6, 685, 19);
	lv_obj_set_size(ui->main_label_6, 95, 32);
	lv_obj_set_scrollbar_mode(ui->main_label_6, LV_SCROLLBAR_MODE_OFF);

	//Write style for main_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->main_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->main_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->main_label_6, lv_color_hex(0xFFFFFF), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->main_label_6, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->main_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->main_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->main_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->main_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->main_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->main_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->main_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->main_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->main_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->main);


	//Init events for screen.
	events_init_main(ui);
}
