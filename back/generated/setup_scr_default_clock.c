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


void setup_scr_default_clock(lv_ui *ui)
{
	//Write codes default_clock
	ui->default_clock = lv_obj_create(NULL);
	lv_obj_set_size(ui->default_clock, 800, 480);
	lv_obj_set_scrollbar_mode(ui->default_clock, LV_SCROLLBAR_MODE_OFF);

	//Write style for default_clock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->default_clock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->default_clock, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes default_clock_img_1
	ui->default_clock_img_1 = lv_img_create(ui->default_clock);
	lv_obj_add_flag(ui->default_clock_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->default_clock_img_1, &_clock_alpha_480x480);
	lv_img_set_pivot(ui->default_clock_img_1, 50,50);
	lv_img_set_angle(ui->default_clock_img_1, 0);
	lv_obj_set_pos(ui->default_clock_img_1, 160, 0);
	lv_obj_set_size(ui->default_clock_img_1, 480, 480);
	lv_obj_set_scrollbar_mode(ui->default_clock_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for default_clock_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->default_clock_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->default_clock);

	
}
