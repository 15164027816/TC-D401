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


void ui_init_style(lv_style_t * style)
{
  if (style->prop_cnt > 1)
    lv_style_reset(style);
  else
    lv_style_init(style);
}

void init_scr_del_flag(lv_ui *ui)
{

	ui->main_del = true;
	ui->menu_del = true;
	ui->vote_start_del = true;
	ui->vote_del = true;
	ui->vote_confirm_del = true;
	ui->vote_fin_confirm_del = true;
	ui->vote_now_del = true;
	ui->vote_result_del = true;
	ui->sign_start_del = true;
	ui->sign_del = true;
	ui->sign_correct_del = true;
	ui->service_del = true;
	ui->service_confirm_del = true;
	ui->set_up_del = true;
	ui->light_sysvers_del = true;
	ui->topic_del = true;
	ui->audio_set_del = true;
	ui->language_del = true;
	ui->Representative_del = true;
	ui->confirm_denied_del = true;
	ui->menu_Representative_del = true;
	ui->election_five_del = true;
	ui->election_four_del = true;
	ui->election_three_del = true;
	ui->election_two_del = true;
	ui->Satisfaction_del = true;
	ui->set_ID_del = true;
	ui->confirm_del = true;
	ui->default_clock_del = true;
	ui->default_1_del = true;
	ui->default_2_del = true;
	ui->fire_warn_del = true;
	ui->rating_del = true;
	ui->rating_prot_del = true;
	ui->pop_speed_del = true;
	ui->pop_ID_del = true;
	ui->pop_sign_del = true;
	ui->pop_vote_del = true;
	ui->pop_unsign_nonvote_del = true;
	ui->pop_tea_del = true;
	ui->pop_pen_del = true;
	ui->pop_man_del = true;
	ui->pop_low_power_del = true;
	ui->pop_signal_del = true;
	ui->Pop_del = true;
	ui->sign_Rep_del = true;
	ui->sign_Rep_success_del = true;
	ui->election_prot_del = true;
	ui->Satisfaction_prot_del = true;
	ui->vote_rep_del = true;
}

void setup_ui(lv_ui *ui)
{
  init_scr_del_flag(ui);
  setup_scr_rating(ui);
  lv_scr_load(ui->rating);
}
