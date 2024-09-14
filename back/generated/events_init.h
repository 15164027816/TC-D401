/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


#ifndef EVENTS_INIT_H_
#define EVENTS_INIT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

void events_init(lv_ui *ui);

void events_init_main(lv_ui *ui);
void events_init_menu(lv_ui *ui);
void events_init_vote_start(lv_ui *ui);
void events_init_vote(lv_ui *ui);
void events_init_vote_confirm(lv_ui *ui);
void events_init_vote_fin_confirm(lv_ui *ui);
void events_init_vote_now(lv_ui *ui);
void events_init_vote_result(lv_ui *ui);
void events_init_sign_start(lv_ui *ui);
void events_init_sign(lv_ui *ui);
void events_init_sign_correct(lv_ui *ui);
void events_init_service(lv_ui *ui);
void events_init_service_confirm(lv_ui *ui);
void events_init_set_up(lv_ui *ui);
void events_init_light_sysvers(lv_ui *ui);
void events_init_topic(lv_ui *ui);
void events_init_audio_set(lv_ui *ui);
void events_init_language(lv_ui *ui);
void events_init_Representative(lv_ui *ui);
void events_init_confirm_denied(lv_ui *ui);
void events_init_menu_Representative(lv_ui *ui);
void events_init_election_five(lv_ui *ui);
void events_init_election_four(lv_ui *ui);
void events_init_election_three(lv_ui *ui);
void events_init_election_two(lv_ui *ui);
void events_init_Satisfaction(lv_ui *ui);
void events_init_set_ID(lv_ui *ui);
void events_init_confirm(lv_ui *ui);
void events_init_default_clock(lv_ui *ui);
void events_init_default_1(lv_ui *ui);
void events_init_default_2(lv_ui *ui);
void events_init_fire_warn(lv_ui *ui);
void events_init_rating(lv_ui *ui);
void events_init_rating_prot(lv_ui *ui);
void events_init_pop_speed(lv_ui *ui);
void events_init_pop_ID(lv_ui *ui);
void events_init_pop_sign(lv_ui *ui);
void events_init_pop_vote(lv_ui *ui);
void events_init_pop_unsign_nonvote(lv_ui *ui);
void events_init_pop_tea(lv_ui *ui);
void events_init_pop_pen(lv_ui *ui);
void events_init_pop_man(lv_ui *ui);
void events_init_pop_low_power(lv_ui *ui);
void events_init_pop_signal(lv_ui *ui);
void events_init_Pop(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
