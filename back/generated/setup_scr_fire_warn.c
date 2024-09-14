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

void setup_scr_fire_warn(lv_ui *ui)
{
	//Write codes fire_warn
	ui->fire_warn = lv_obj_create(NULL);
	lv_obj_set_size(ui->fire_warn, 800, 480);
	lv_obj_set_scrollbar_mode(ui->fire_warn, LV_SCROLLBAR_MODE_OFF);

	//Write style for fire_warn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->fire_warn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->fire_warn, &_fire_alarm_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->fire_warn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes fire_warn_label_1
	ui->fire_warn_label_1 = lv_label_create(ui->fire_warn);
     switch (country)
    {
    case 0:
        break;

    default:
        break;
    }
	lv_label_set_text(ui->fire_warn_label_1, "消防警告!");
	lv_label_set_long_mode(ui->fire_warn_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->fire_warn_label_1, 320, 344);
	lv_obj_set_size(ui->fire_warn_label_1, 160, 32);
	lv_obj_set_scrollbar_mode(ui->fire_warn_label_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for fire_warn_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->fire_warn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->fire_warn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->fire_warn_label_1, lv_color_hex(0x33425b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->fire_warn_label_1, &lv_font_SourceHanSansCN_Medium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->fire_warn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->fire_warn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->fire_warn_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->fire_warn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->fire_warn_label_1, lv_color_hex(0xEff6ff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->fire_warn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->fire_warn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->fire_warn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->fire_warn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->fire_warn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	//Update current screen layout.
	lv_obj_update_layout(ui->fire_warn);


}
