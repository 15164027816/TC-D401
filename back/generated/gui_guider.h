/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{

	lv_obj_t *main;
	bool main_del;
	lv_obj_t *main_imgbtn_1;
	lv_obj_t *main_imgbtn_1_label;
	lv_obj_t *main_imgbtn_2;
	lv_obj_t *main_imgbtn_2_label;
	lv_obj_t *main_imgbtn_3;
	lv_obj_t *main_imgbtn_3_label;
	lv_obj_t *main_img_2;
	lv_obj_t *main_label_1;
	lv_obj_t *main_label_2;
	lv_obj_t *main_label_3;
	lv_obj_t *main_label_4;
	lv_obj_t *main_label_5;
	lv_obj_t *main_label_6;
	lv_obj_t *menu;
	bool menu_del;
	lv_obj_t *menu_imgbtn_1;
	lv_obj_t *menu_imgbtn_1_label;
	lv_obj_t *menu_imgbtn_2;
	lv_obj_t *menu_imgbtn_2_label;
	lv_obj_t *menu_imgbtn_3;
	lv_obj_t *menu_imgbtn_3_label;
	lv_obj_t *menu_imgbtn_4;
	lv_obj_t *menu_imgbtn_4_label;
	lv_obj_t *menu_imgbtn_5;
	lv_obj_t *menu_imgbtn_5_label;
	lv_obj_t *menu_imgbtn_6;
	lv_obj_t *menu_imgbtn_6_label;
	lv_obj_t *menu_imgbtn_7;
	lv_obj_t *menu_imgbtn_7_label;
	lv_obj_t *menu_img_2;
	lv_obj_t *menu_label_1;
	lv_obj_t *menu_label_2;
	lv_obj_t *menu_label_3;
	lv_obj_t *menu_label_4;
	lv_obj_t *menu_label_5;
	lv_obj_t *menu_label_6;
	lv_obj_t *menu_label_7;
	lv_obj_t *menu_label_8;
	lv_obj_t *menu_label_9;
	lv_obj_t *vote_start;
	bool vote_start_del;
	lv_obj_t *vote_start_label_1;
	lv_obj_t *vote_start_imgbtn_1;
	lv_obj_t *vote_start_imgbtn_1_label;
	lv_obj_t *vote_start_label_2;
	lv_obj_t *vote_start_label_3;
	lv_obj_t *vote_start_imgbtn_2;
	lv_obj_t *vote_start_imgbtn_2_label;
	lv_obj_t *vote_start_imgbtn_3;
	lv_obj_t *vote_start_imgbtn_3_label;
	lv_obj_t *vote_start_label_4;
	lv_obj_t *vote_start_label_5;
	lv_obj_t *vote_start_img_1;
	lv_obj_t *vote;
	bool vote_del;
	lv_obj_t *vote_label_1;
	lv_obj_t *vote_img_1;
	lv_obj_t *vote_label_2;
	lv_obj_t *vote_img_2;
	lv_obj_t *vote_label_3;
	lv_obj_t *vote_imgbtn_1;
	lv_obj_t *vote_imgbtn_1_label;
	lv_obj_t *vote_imgbtn_2;
	lv_obj_t *vote_imgbtn_2_label;
	lv_obj_t *vote_imgbtn_3;
	lv_obj_t *vote_imgbtn_3_label;
	lv_obj_t *vote_label_4;
	lv_obj_t *vote_label_5;
	lv_obj_t *vote_label_6;
	lv_obj_t *vote_imgbtn_4;
	lv_obj_t *vote_imgbtn_4_label;
	lv_obj_t *vote_label_7;
	lv_obj_t *vote_confirm;
	bool vote_confirm_del;
	lv_obj_t *vote_confirm_label_1;
	lv_obj_t *vote_confirm_label_2;
	lv_obj_t *vote_confirm_imgbtn_1;
	lv_obj_t *vote_confirm_imgbtn_1_label;
	lv_obj_t *vote_confirm_imgbtn_2;
	lv_obj_t *vote_confirm_imgbtn_2_label;
	lv_obj_t *vote_confirm_label_3;
	lv_obj_t *vote_confirm_label_4;
	lv_obj_t *vote_confirm_label_5;
	lv_obj_t *vote_fin_confirm;
	bool vote_fin_confirm_del;
	lv_obj_t *vote_fin_confirm_label_1;
	lv_obj_t *vote_fin_confirm_imgbtn_1;
	lv_obj_t *vote_fin_confirm_imgbtn_1_label;
	lv_obj_t *vote_fin_confirm_imgbtn_2;
	lv_obj_t *vote_fin_confirm_imgbtn_2_label;
	lv_obj_t *vote_fin_confirm_label_5;
	lv_obj_t *vote_fin_confirm_label_6;
	lv_obj_t *vote_fin_confirm_label_7;
	lv_obj_t *vote_now;
	bool vote_now_del;
	lv_obj_t *vote_now_label_1;
	lv_obj_t *vote_now_label_4;
	lv_obj_t *vote_now_label_5;
	lv_obj_t *vote_now_label_6;
	lv_obj_t *vote_now_label_7;
	lv_obj_t *vote_now_label_8;
	lv_obj_t *vote_now_label_9;
	lv_obj_t *vote_now_label_10;
	lv_obj_t *vote_now_label_11;
	lv_obj_t *vote_now_imgbtn_1;
	lv_obj_t *vote_now_imgbtn_1_label;
	lv_obj_t *vote_now_label_12;
	lv_obj_t *vote_result;
	bool vote_result_del;
	lv_obj_t *vote_result_imgbtn_1;
	lv_obj_t *vote_result_imgbtn_1_label;
	lv_obj_t *vote_result_label_1;
	lv_obj_t *vote_result_label_2;
	lv_obj_t *vote_result_label_3;
	lv_obj_t *vote_result_label_4;
	lv_obj_t *vote_result_label_5;
	lv_obj_t *vote_result_label_6;
	lv_obj_t *vote_result_label_7;
	lv_obj_t *vote_result_label_8;
	lv_obj_t *vote_result_label_9;
	lv_obj_t *vote_result_label_10;
	lv_obj_t *vote_result_label_11;
	lv_obj_t *vote_result_img_1;
	lv_obj_t *vote_result_label_12;
	lv_obj_t *sign_start;
	bool sign_start_del;
	lv_obj_t *sign_start_label_1;
	lv_obj_t *sign_start_label_2;
	lv_obj_t *sign_start_label_3;
	lv_obj_t *sign_start_label_4;
	lv_obj_t *sign_start_label_5;
	lv_obj_t *sign_start_label_6;
	lv_obj_t *sign_start_label_7;
	lv_obj_t *sign_start_imgbtn_1;
	lv_obj_t *sign_start_imgbtn_1_label;
	lv_obj_t *sign_start_label_8;
	lv_obj_t *sign_start_imgbtn_2;
	lv_obj_t *sign_start_imgbtn_2_label;
	lv_obj_t *sign;
	bool sign_del;
	lv_obj_t *sign_label_1;
	lv_obj_t *sign_label_2;
	lv_obj_t *sign_label_3;
	lv_obj_t *sign_label_4;
	lv_obj_t *sign_label_5;
	lv_obj_t *sign_label_6;
	lv_obj_t *sign_label_7;
	lv_obj_t *sign_imgbtn_1;
	lv_obj_t *sign_imgbtn_1_label;
	lv_obj_t *sign_label_8;
	lv_obj_t *sign_imgbtn_2;
	lv_obj_t *sign_imgbtn_2_label;
	lv_obj_t *sign_label_9;
	lv_obj_t *sign_correct;
	bool sign_correct_del;
	lv_obj_t *sign_correct_label_1;
	lv_obj_t *sign_correct_label_2;
	lv_obj_t *sign_correct_label_3;
	lv_obj_t *sign_correct_label_4;
	lv_obj_t *sign_correct_label_5;
	lv_obj_t *sign_correct_label_6;
	lv_obj_t *sign_correct_label_7;
	lv_obj_t *sign_correct_imgbtn_2;
	lv_obj_t *sign_correct_imgbtn_2_label;
	lv_obj_t *sign_correct_label_9;
	lv_obj_t *sign_correct_img_1;
	lv_obj_t *sign_correct_label_10;
	lv_obj_t *service;
	bool service_del;
	lv_obj_t *service_label_1;
	lv_obj_t *service_imgbtn_1;
	lv_obj_t *service_imgbtn_1_label;
	lv_obj_t *service_label_2;
	lv_obj_t *service_label_3;
	lv_obj_t *service_imgbtn_2;
	lv_obj_t *service_imgbtn_2_label;
	lv_obj_t *service_imgbtn_3;
	lv_obj_t *service_imgbtn_3_label;
	lv_obj_t *service_imgbtn_4;
	lv_obj_t *service_imgbtn_4_label;
	lv_obj_t *service_imgbtn_5;
	lv_obj_t *service_imgbtn_5_label;
	lv_obj_t *service_imgbtn_6;
	lv_obj_t *service_imgbtn_6_label;
	lv_obj_t *service_imgbtn_7;
	lv_obj_t *service_imgbtn_7_label;
	lv_obj_t *service_label_4;
	lv_obj_t *service_label_5;
	lv_obj_t *service_label_6;
	lv_obj_t *service_label_7;
	lv_obj_t *service_label_8;
	lv_obj_t *service_label_9;
	lv_obj_t *service_confirm;
	bool service_confirm_del;
	lv_obj_t *service_confirm_label_1;
	lv_obj_t *service_confirm_img_1;
	lv_obj_t *service_confirm_label_2;
	lv_obj_t *set_up;
	bool set_up_del;
	lv_obj_t *set_up_label_1;
	lv_obj_t *set_up_imgbtn_1;
	lv_obj_t *set_up_imgbtn_1_label;
	lv_obj_t *set_up_label_2;
	lv_obj_t *set_up_label_3;
	lv_obj_t *set_up_imgbtn_2;
	lv_obj_t *set_up_imgbtn_2_label;
	lv_obj_t *set_up_imgbtn_3;
	lv_obj_t *set_up_imgbtn_3_label;
	lv_obj_t *set_up_label_4;
	lv_obj_t *set_up_label_5;
	lv_obj_t *light_sysvers;
	bool light_sysvers_del;
	lv_obj_t *light_sysvers_label_1;
	lv_obj_t *light_sysvers_imgbtn_1;
	lv_obj_t *light_sysvers_imgbtn_1_label;
	lv_obj_t *light_sysvers_label_2;
	lv_obj_t *light_sysvers_label_3;
	lv_obj_t *light_sysvers_slider_1;
	lv_obj_t *light_sysvers_label_4;
	lv_obj_t *light_sysvers_label_5;
	lv_obj_t *light_sysvers_label_6;
	lv_obj_t *light_sysvers_label_7;
	lv_obj_t *light_sysvers_label_8;
	lv_obj_t *light_sysvers_label_9;
	lv_obj_t *light_sysvers_label_10;
	lv_obj_t *light_sysvers_label_11;
	lv_obj_t *light_sysvers_label_12;
	lv_obj_t *light_sysvers_label_13;
	lv_obj_t *light_sysvers_label_14;
	lv_obj_t *light_sysvers_label_15;
	lv_obj_t *light_sysvers_label_16;
	lv_obj_t *light_sysvers_label_17;
	lv_obj_t *light_sysvers_label_18;
	lv_obj_t *topic;
	bool topic_del;
	lv_obj_t *topic_label_1;
	lv_obj_t *topic_imgbtn_1;
	lv_obj_t *topic_imgbtn_1_label;
	lv_obj_t *topic_label_2;
	lv_obj_t *topic_label_3;
	lv_obj_t *topic_label_4;
	lv_obj_t *topic_label_5;
	lv_obj_t *topic_btn_1;
	lv_obj_t *topic_btn_1_label;
	lv_obj_t *audio_set;
	bool audio_set_del;
	lv_obj_t *audio_set_label_1;
	lv_obj_t *audio_set_imgbtn_1;
	lv_obj_t *audio_set_imgbtn_1_label;
	lv_obj_t *audio_set_label_2;
	lv_obj_t *audio_set_label_3;
	lv_obj_t *audio_set_slider_1;
	lv_obj_t *audio_set_label_4;
	lv_obj_t *audio_set_label_5;
	lv_obj_t *audio_set_label_6;
	lv_obj_t *audio_set_roller_1;
	lv_obj_t *audio_set_img_1;
	lv_obj_t *language;
	bool language_del;
	lv_obj_t *language_label_1;
	lv_obj_t *language_imgbtn_1;
	lv_obj_t *language_imgbtn_1_label;
	lv_obj_t *language_label_2;
	lv_obj_t *language_label_3;
	lv_obj_t *language_imgbtn_2;
	lv_obj_t *language_imgbtn_2_label;
	lv_obj_t *language_imgbtn_3;
	lv_obj_t *language_imgbtn_3_label;
	lv_obj_t *language_imgbtn_4;
	lv_obj_t *language_imgbtn_4_label;
	lv_obj_t *language_imgbtn_5;
	lv_obj_t *language_imgbtn_5_label;
	lv_obj_t *language_imgbtn_6;
	lv_obj_t *language_imgbtn_6_label;
	lv_obj_t *language_label_4;
	lv_obj_t *language_label_5;
	lv_obj_t *language_label_6;
	lv_obj_t *language_label_7;
	lv_obj_t *language_label_8;
	lv_obj_t *Representative;
	bool Representative_del;
	lv_obj_t *Representative_imgbtn_1;
	lv_obj_t *Representative_imgbtn_1_label;
	lv_obj_t *Representative_imgbtn_2;
	lv_obj_t *Representative_imgbtn_2_label;
	lv_obj_t *Representative_img_2;
	lv_obj_t *Representative_label_1;
	lv_obj_t *Representative_label_2;
	lv_obj_t *Representative_label_3;
	lv_obj_t *Representative_label_5;
	lv_obj_t *Representative_label_6;
	lv_obj_t *confirm_denied;
	bool confirm_denied_del;
	lv_obj_t *confirm_denied_label_1;
	lv_obj_t *confirm_denied_img_1;
	lv_obj_t *confirm_denied_label_2;
	lv_obj_t *menu_Representative;
	bool menu_Representative_del;
	lv_obj_t *menu_Representative_imgbtn_1;
	lv_obj_t *menu_Representative_imgbtn_1_label;
	lv_obj_t *menu_Representative_imgbtn_3;
	lv_obj_t *menu_Representative_imgbtn_3_label;
	lv_obj_t *menu_Representative_imgbtn_5;
	lv_obj_t *menu_Representative_imgbtn_5_label;
	lv_obj_t *menu_Representative_imgbtn_6;
	lv_obj_t *menu_Representative_imgbtn_6_label;
	lv_obj_t *menu_Representative_imgbtn_7;
	lv_obj_t *menu_Representative_imgbtn_7_label;
	lv_obj_t *menu_Representative_img_2;
	lv_obj_t *menu_Representative_label_3;
	lv_obj_t *menu_Representative_label_4;
	lv_obj_t *menu_Representative_label_5;
	lv_obj_t *menu_Representative_label_6;
	lv_obj_t *menu_Representative_label_7;
	lv_obj_t *menu_Representative_label_8;
	lv_obj_t *menu_Representative_label_9;
	lv_obj_t *election_five;
	bool election_five_del;
	lv_obj_t *election_five_label_1;
	lv_obj_t *election_five_img_1;
	lv_obj_t *election_five_img_2;
	lv_obj_t *election_five_label_2;
	lv_obj_t *election_five_label_3;
	lv_obj_t *election_five_imgbtn_1;
	lv_obj_t *election_five_imgbtn_1_label;
	lv_obj_t *election_five_label_4;
	lv_obj_t *election_five_imgbtn_2;
	lv_obj_t *election_five_imgbtn_2_label;
	lv_obj_t *election_five_imgbtn_3;
	lv_obj_t *election_five_imgbtn_3_label;
	lv_obj_t *election_five_imgbtn_4;
	lv_obj_t *election_five_imgbtn_4_label;
	lv_obj_t *election_five_imgbtn_5;
	lv_obj_t *election_five_imgbtn_5_label;
	lv_obj_t *election_five_label_5;
	lv_obj_t *election_five_label_6;
	lv_obj_t *election_five_label_7;
	lv_obj_t *election_five_label_8;
	lv_obj_t *election_four;
	bool election_four_del;
	lv_obj_t *election_four_label_1;
	lv_obj_t *election_four_img_1;
	lv_obj_t *election_four_img_2;
	lv_obj_t *election_four_label_2;
	lv_obj_t *election_four_label_3;
	lv_obj_t *election_four_imgbtn_1;
	lv_obj_t *election_four_imgbtn_1_label;
	lv_obj_t *election_four_imgbtn_2;
	lv_obj_t *election_four_imgbtn_2_label;
	lv_obj_t *election_four_imgbtn_3;
	lv_obj_t *election_four_imgbtn_3_label;
	lv_obj_t *election_four_imgbtn_4;
	lv_obj_t *election_four_imgbtn_4_label;
	lv_obj_t *election_four_label_4;
	lv_obj_t *election_four_label_5;
	lv_obj_t *election_four_label_6;
	lv_obj_t *election_four_label_7;
	lv_obj_t *election_three;
	bool election_three_del;
	lv_obj_t *election_three_label_1;
	lv_obj_t *election_three_img_1;
	lv_obj_t *election_three_img_2;
	lv_obj_t *election_three_label_2;
	lv_obj_t *election_three_label_3;
	lv_obj_t *election_three_imgbtn_1;
	lv_obj_t *election_three_imgbtn_1_label;
	lv_obj_t *election_three_imgbtn_2;
	lv_obj_t *election_three_imgbtn_2_label;
	lv_obj_t *election_three_imgbtn_3;
	lv_obj_t *election_three_imgbtn_3_label;
	lv_obj_t *election_three_label_4;
	lv_obj_t *election_three_label_5;
	lv_obj_t *election_three_label_6;
	lv_obj_t *election_two;
	bool election_two_del;
	lv_obj_t *election_two_label_1;
	lv_obj_t *election_two_img_1;
	lv_obj_t *election_two_img_2;
	lv_obj_t *election_two_label_2;
	lv_obj_t *election_two_label_3;
	lv_obj_t *election_two_imgbtn_1;
	lv_obj_t *election_two_imgbtn_1_label;
	lv_obj_t *election_two_imgbtn_2;
	lv_obj_t *election_two_imgbtn_2_label;
	lv_obj_t *election_two_label_4;
	lv_obj_t *election_two_label_5;
	lv_obj_t *Satisfaction;
	bool Satisfaction_del;
	lv_obj_t *Satisfaction_label_1;
	lv_obj_t *Satisfaction_img_1;
	lv_obj_t *Satisfaction_label_2;
	lv_obj_t *Satisfaction_img_2;
	lv_obj_t *Satisfaction_label_3;
	lv_obj_t *Satisfaction_imgbtn_1;
	lv_obj_t *Satisfaction_imgbtn_1_label;
	lv_obj_t *Satisfaction_imgbtn_2;
	lv_obj_t *Satisfaction_imgbtn_2_label;
	lv_obj_t *Satisfaction_imgbtn_3;
	lv_obj_t *Satisfaction_imgbtn_3_label;
	lv_obj_t *Satisfaction_label_4;
	lv_obj_t *Satisfaction_label_5;
	lv_obj_t *Satisfaction_label_6;
	lv_obj_t *set_ID;
	bool set_ID_del;
	lv_obj_t *set_ID_label_1;
	lv_obj_t *set_ID_label_2;
	lv_obj_t *set_ID_label_3;
	lv_obj_t *set_ID_label_4;
	lv_obj_t *set_ID_label_5;
	lv_obj_t *set_ID_label_6;
	lv_obj_t *set_ID_imgbtn_1;
	lv_obj_t *set_ID_imgbtn_1_label;
	lv_obj_t *set_ID_label_7;
	lv_obj_t *confirm;
	bool confirm_del;
	lv_obj_t *confirm_label_1;
	lv_obj_t *confirm_label_2;
	lv_obj_t *confirm_label_3;
	lv_obj_t *confirm_imgbtn_1;
	lv_obj_t *confirm_imgbtn_1_label;
	lv_obj_t *confirm_imgbtn_2;
	lv_obj_t *confirm_imgbtn_2_label;
	lv_obj_t *confirm_label_4;
	lv_obj_t *confirm_label_5;
	lv_obj_t *default_clock;
	bool default_clock_del;
	lv_obj_t *default_clock_img_1;
	lv_obj_t *default_1;
	bool default_1_del;
	lv_obj_t *default_2;
	bool default_2_del;
	lv_obj_t *fire_warn;
	bool fire_warn_del;
	lv_obj_t *fire_warn_label_1;
	lv_obj_t *rating;
	bool rating_del;
	lv_obj_t *rating_label_1;
	lv_obj_t *rating_img_1;
	lv_obj_t *rating_img_2;
	lv_obj_t *rating_label_2;
	lv_obj_t *rating_label_3;
	lv_obj_t *rating_imgbtn_1;
	lv_obj_t *rating_imgbtn_1_label;
	lv_obj_t *rating_label_4;
	lv_obj_t *rating_imgbtn_2;
	lv_obj_t *rating_imgbtn_2_label;
	lv_obj_t *rating_imgbtn_3;
	lv_obj_t *rating_imgbtn_3_label;
	lv_obj_t *rating_imgbtn_4;
	lv_obj_t *rating_imgbtn_4_label;
	lv_obj_t *rating_imgbtn_5;
	lv_obj_t *rating_imgbtn_5_label;
	lv_obj_t *rating_label_5;
	lv_obj_t *rating_label_6;
	lv_obj_t *rating_label_7;
	lv_obj_t *rating_label_8;
	lv_obj_t *rating_prot;
	bool rating_prot_del;
	lv_obj_t *rating_prot_label_1;
	lv_obj_t *rating_prot_imgbtn_1;
	lv_obj_t *rating_prot_imgbtn_1_label;
	lv_obj_t *rating_prot_imgbtn_2;
	lv_obj_t *rating_prot_imgbtn_2_label;
	lv_obj_t *rating_prot_label_3;
	lv_obj_t *rating_prot_label_4;
	lv_obj_t *rating_prot_label_5;
	lv_obj_t *rating_prot_label_6;
	lv_obj_t *pop_speed;
	bool pop_speed_del;
	lv_obj_t *pop_speed_label_1;
	lv_obj_t *pop_speed_img_1;
	lv_obj_t *pop_speed_label_2;
	lv_obj_t *pop_ID;
	bool pop_ID_del;
	lv_obj_t *pop_ID_label_1;
	lv_obj_t *pop_ID_img_1;
	lv_obj_t *pop_ID_pop_ID;
	lv_obj_t *pop_sign;
	bool pop_sign_del;
	lv_obj_t *pop_sign_label_1;
	lv_obj_t *pop_sign_img_1;
	lv_obj_t *pop_sign_pop_ID;
	lv_obj_t *pop_vote;
	bool pop_vote_del;
	lv_obj_t *pop_vote_label_1;
	lv_obj_t *pop_vote_img_1;
	lv_obj_t *pop_vote_pop_vote;
	lv_obj_t *pop_unsign_nonvote;
	bool pop_unsign_nonvote_del;
	lv_obj_t *pop_unsign_nonvote_label_1;
	lv_obj_t *pop_unsign_nonvote_img_1;
	lv_obj_t *pop_unsign_nonvote_pop_ID;
	lv_obj_t *pop_tea;
	bool pop_tea_del;
	lv_obj_t *pop_tea_label_1;
	lv_obj_t *pop_tea_imgbtn_1;
	lv_obj_t *pop_tea_imgbtn_1_label;
	lv_obj_t *pop_tea_imgbtn_2;
	lv_obj_t *pop_tea_imgbtn_2_label;
	lv_obj_t *pop_tea_label_5;
	lv_obj_t *pop_tea_label_6;
	lv_obj_t *pop_tea_label_7;
	lv_obj_t *pop_pen;
	bool pop_pen_del;
	lv_obj_t *pop_pen_label_1;
	lv_obj_t *pop_pen_imgbtn_1;
	lv_obj_t *pop_pen_imgbtn_1_label;
	lv_obj_t *pop_pen_imgbtn_2;
	lv_obj_t *pop_pen_imgbtn_2_label;
	lv_obj_t *pop_pen_label_5;
	lv_obj_t *pop_pen_label_6;
	lv_obj_t *pop_pen_label_7;
	lv_obj_t *pop_man;
	bool pop_man_del;
	lv_obj_t *pop_man_label_1;
	lv_obj_t *pop_man_imgbtn_1;
	lv_obj_t *pop_man_imgbtn_1_label;
	lv_obj_t *pop_man_imgbtn_2;
	lv_obj_t *pop_man_imgbtn_2_label;
	lv_obj_t *pop_man_label_5;
	lv_obj_t *pop_man_label_6;
	lv_obj_t *pop_man_label_7;
	lv_obj_t *pop_low_power;
	bool pop_low_power_del;
	lv_obj_t *pop_low_power_label_1;
	lv_obj_t *pop_low_power_img_1;
	lv_obj_t *pop_low_power_pop_vote;
	lv_obj_t *pop_signal;
	bool pop_signal_del;
	lv_obj_t *pop_signal_label_1;
	lv_obj_t *pop_signal_img_1;
	lv_obj_t *pop_signal_pop_signal;
	lv_obj_t *Pop;
	bool Pop_del;
	lv_obj_t *Pop_label_1;
	lv_obj_t *Pop_img_1;
	lv_obj_t *Pop_pop_vote;
	lv_obj_t *sign_Rep;
	bool sign_Rep_del;
	lv_obj_t *sign_Rep_label_1;
	lv_obj_t *sign_Rep_label_2;
	lv_obj_t *sign_Rep_label_3;
	lv_obj_t *sign_Rep_label_4;
	lv_obj_t *sign_Rep_label_5;
	lv_obj_t *sign_Rep_label_6;
	lv_obj_t *sign_Rep_label_7;
	lv_obj_t *sign_Rep_imgbtn_1;
	lv_obj_t *sign_Rep_imgbtn_1_label;
	lv_obj_t *sign_Rep_label_8;
	lv_obj_t *sign_Rep_success;
	bool sign_Rep_success_del;
	lv_obj_t *sign_Rep_success_label_1;
	lv_obj_t *sign_Rep_success_label_2;
	lv_obj_t *sign_Rep_success_label_3;
	lv_obj_t *sign_Rep_success_label_4;
	lv_obj_t *sign_Rep_success_label_5;
	lv_obj_t *sign_Rep_success_label_6;
	lv_obj_t *sign_Rep_success_label_7;
	lv_obj_t *sign_Rep_success_img_1;
	lv_obj_t *sign_Rep_success_label_8;
	lv_obj_t *election_prot;
	bool election_prot_del;
	lv_obj_t *election_prot_label_1;
	lv_obj_t *election_prot_imgbtn_1;
	lv_obj_t *election_prot_imgbtn_1_label;
	lv_obj_t *election_prot_imgbtn_2;
	lv_obj_t *election_prot_imgbtn_2_label;
	lv_obj_t *election_prot_label_3;
	lv_obj_t *election_prot_label_4;
	lv_obj_t *election_prot_label_5;
	lv_obj_t *election_prot_label_6;
	lv_obj_t *Satisfaction_prot;
	bool Satisfaction_prot_del;
	lv_obj_t *Satisfaction_prot_label_1;
	lv_obj_t *Satisfaction_prot_imgbtn_1;
	lv_obj_t *Satisfaction_prot_imgbtn_1_label;
	lv_obj_t *Satisfaction_prot_imgbtn_2;
	lv_obj_t *Satisfaction_prot_imgbtn_2_label;
	lv_obj_t *Satisfaction_prot_label_3;
	lv_obj_t *Satisfaction_prot_label_4;
	lv_obj_t *Satisfaction_prot_label_5;
	lv_obj_t *Satisfaction_prot_label_6;
    lv_obj_t *vote_rep;
	bool vote_rep_del;
	lv_obj_t *vote_rep_label_1;
	lv_obj_t *vote_rep_img_1;
	lv_obj_t *vote_rep_label_2;
	lv_obj_t *vote_rep_img_2;
	lv_obj_t *vote_rep_label_3;
	lv_obj_t *vote_rep_imgbtn_1;
	lv_obj_t *vote_rep_imgbtn_1_label;
	lv_obj_t *vote_rep_imgbtn_2;
	lv_obj_t *vote_rep_imgbtn_2_label;
	lv_obj_t *vote_rep_imgbtn_3;
	lv_obj_t *vote_rep_imgbtn_3_label;
	lv_obj_t *vote_rep_label_4;
	lv_obj_t *vote_rep_label_5;
	lv_obj_t *vote_rep_label_6;
}lv_ui;

void ui_init_style(lv_style_t * style);
void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;

void setup_scr_main(lv_ui *ui);
void setup_scr_menu(lv_ui *ui);
void setup_scr_vote_start(lv_ui *ui);
void setup_scr_vote(lv_ui *ui);
void setup_scr_vote_confirm(lv_ui *ui);
void setup_scr_vote_fin_confirm(lv_ui *ui);
void setup_scr_vote_now(lv_ui *ui);
void setup_scr_vote_result(lv_ui *ui);
void setup_scr_sign_start(lv_ui *ui);
void setup_scr_sign(lv_ui *ui);
void setup_scr_sign_correct(lv_ui *ui);
void setup_scr_service(lv_ui *ui);
void setup_scr_service_confirm(lv_ui *ui);
void setup_scr_set_up(lv_ui *ui);
void setup_scr_light_sysvers(lv_ui *ui);
void setup_scr_topic(lv_ui *ui);
void setup_scr_audio_set(lv_ui *ui);
void setup_scr_language(lv_ui *ui);
void setup_scr_Representative(lv_ui *ui);
void setup_scr_confirm_denied(lv_ui *ui);
void setup_scr_menu_Representative(lv_ui *ui);
void setup_scr_election_five(lv_ui *ui);
void setup_scr_election_four(lv_ui *ui);
void setup_scr_election_three(lv_ui *ui);
void setup_scr_election_two(lv_ui *ui);
void setup_scr_Satisfaction(lv_ui *ui);
void setup_scr_set_ID(lv_ui *ui);
void setup_scr_confirm(lv_ui *ui);
void setup_scr_default_clock(lv_ui *ui);
void setup_scr_default_1(lv_ui *ui);
void setup_scr_default_2(lv_ui *ui);
void setup_scr_fire_warn(lv_ui *ui);
void setup_scr_rating(lv_ui *ui);
void setup_scr_rating_prot(lv_ui *ui);
void setup_scr_pop_speed(lv_ui *ui);
void setup_scr_pop_ID(lv_ui *ui);
void setup_scr_pop_sign(lv_ui *ui);
void setup_scr_pop_vote(lv_ui *ui);
void setup_scr_pop_unsign_nonvote(lv_ui *ui);
void setup_scr_pop_tea(lv_ui *ui);
void setup_scr_pop_pen(lv_ui *ui);
void setup_scr_pop_man(lv_ui *ui);
void setup_scr_pop_low_power(lv_ui *ui);
void setup_scr_pop_signal(lv_ui *ui);
void setup_scr_Pop(lv_ui *ui);
void setup_scr_screen_1(lv_ui *ui);
void setup_scr_sign_Rep(lv_ui *ui);
void setup_scr_sign_Rep_success(lv_ui *ui);
void setup_scr_election_prot(lv_ui *ui);
void setup_scr_Satisfaction_prot(lv_ui *ui);
void setup_scr_vote_rep(lv_ui *ui);

LV_IMG_DECLARE(_background_800x480);
LV_IMG_DECLARE(_microphone_off_alpha_362x210);
LV_IMG_DECLARE(_microphone_on_alpha_362x210);
LV_IMG_DECLARE(_microphone_on_alpha_362x210);
LV_IMG_DECLARE(_microphone_off_alpha_362x210);
LV_IMG_DECLARE(_menu_def_alpha_118x50);
LV_IMG_DECLARE(_menu_push_alpha_118x50);
LV_IMG_DECLARE(_prispeak_def_alpha_130x130);
LV_IMG_DECLARE(_prispeak_clk_alpha_130x130);
LV_IMG_DECLARE(_earphone_alpha_31x33);

LV_IMG_DECLARE(_time_back_168x46);

LV_IMG_DECLARE(_background_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);
LV_IMG_DECLARE(_vote_def_alpha_220x150);
LV_IMG_DECLARE(_vote_clk_alpha_220x150);
LV_IMG_DECLARE(_meetserver_def_alpha_220x150);
LV_IMG_DECLARE(_meetserver_clk_alpha_220x150);
LV_IMG_DECLARE(_sinup_def_alpha_220x150);
LV_IMG_DECLARE(_sinup_clk_alpha_220x150);
LV_IMG_DECLARE(_voic_def_alpha_220x150);
LV_IMG_DECLARE(_voic_clk_alpha_220x150);
LV_IMG_DECLARE(_language_def_alpha_220x150);
LV_IMG_DECLARE(_language_clk_alpha_220x150);
LV_IMG_DECLARE(_set_def_alpha_220x150);
LV_IMG_DECLARE(_set_clk_alpha_220x150);
LV_IMG_DECLARE(_earphone_alpha_31x33);

LV_IMG_DECLARE(_time_back_168x46);

LV_IMG_DECLARE(_background_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);

LV_IMG_DECLARE(_time_back_168x46);
LV_IMG_DECLARE(_startvot_def_alpha_260x180);
LV_IMG_DECLARE(_startvot_clk_alpha_260x180);
LV_IMG_DECLARE(_votresult_def_alpha_260x180);
LV_IMG_DECLARE(_votresult_clk_alpha_260x180);
LV_IMG_DECLARE(_earphone_alpha_31x33);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_greenselect_alpha_220x180);
LV_IMG_DECLARE(_greenselect_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_redselect_alpha_220x180);
LV_IMG_DECLARE(_redselect_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_yelloselect_alpha_220x180);
LV_IMG_DECLARE(_yelloselect_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_redlongbut_alpha_280x64);
LV_IMG_DECLARE(_redlongbut_clk_alpha_280x64);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_cancle_def_alpha_240x80);
LV_IMG_DECLARE(_cancle_clk_alpha_240x80);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_cancle_def_alpha_240x80);
LV_IMG_DECLARE(_cancle_clk_alpha_240x80);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);

LV_IMG_DECLARE(_vote_result_800x480);
LV_IMG_DECLARE(_redlongbut_alpha_280x64);
LV_IMG_DECLARE(_redlongbut_clk_alpha_280x64);

LV_IMG_DECLARE(_votresult_back_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);
LV_IMG_DECLARE(_earphone_alpha_31x33);

LV_IMG_DECLARE(_time_back_168x46);

LV_IMG_DECLARE(_sinup_back_800x480);
LV_IMG_DECLARE(_confirm_def_alpha_280x64);
LV_IMG_DECLARE(_confirm_clk_alpha_280x64);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);

LV_IMG_DECLARE(_sinup_back_800x480);
LV_IMG_DECLARE(_confirm_def_alpha_280x64);
LV_IMG_DECLARE(_confirm_clk_alpha_280x64);
LV_IMG_DECLARE(_redlongbut_alpha_280x64);
LV_IMG_DECLARE(_redlongbut_clk_alpha_280x64);

LV_IMG_DECLARE(_sinup_back_800x480);
LV_IMG_DECLARE(_redlongbut_alpha_280x64);
LV_IMG_DECLARE(_redlongbut_clk_alpha_280x64);
LV_IMG_DECLARE(_sign_correct_alpha_40x40);

LV_IMG_DECLARE(_background_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);

LV_IMG_DECLARE(_time_back_168x46);
LV_IMG_DECLARE(_tea_def_alpha_220x150);
LV_IMG_DECLARE(_tea_clk_alpha_220x150);
LV_IMG_DECLARE(_pen_def_alpha_220x150);
LV_IMG_DECLARE(_pen_clk_alpha_220x150);
LV_IMG_DECLARE(_humlod_def_alpha_220x150);
LV_IMG_DECLARE(_humlod_clk_alpha_220x150);
LV_IMG_DECLARE(_customized_def_alpha_220x150);
LV_IMG_DECLARE(_customized_clk_alpha_220x150);
LV_IMG_DECLARE(_customized_def_alpha_220x150);
LV_IMG_DECLARE(_customized_clk_alpha_220x150);
LV_IMG_DECLARE(_customized_def_alpha_220x150);
LV_IMG_DECLARE(_customized_clk_alpha_220x150);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_success_alpha_72x72);

LV_IMG_DECLARE(_background_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);

LV_IMG_DECLARE(_time_back_168x46);
LV_IMG_DECLARE(_setting_def_alpha_260x180);
LV_IMG_DECLARE(_setting_clk_alpha_260x180);
LV_IMG_DECLARE(_themestyle_def_alpha_260x180);
LV_IMG_DECLARE(_themestyle_clk_alpha_260x180);

LV_IMG_DECLARE(_voiceset_back_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);

LV_IMG_DECLARE(_time_back_168x46);

LV_IMG_DECLARE(_style_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);

LV_IMG_DECLARE(_time_back_168x46);

LV_IMG_DECLARE(_voiceset_back_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);

LV_IMG_DECLARE(_time_back_168x46);
LV_IMG_DECLARE(_blue_clecked_alpha_48x48);

LV_IMG_DECLARE(_languageset_back_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);

LV_IMG_DECLARE(_time_back_168x46);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_select_alpha_350x80);
LV_IMG_DECLARE(_language_nosel_alpha_350x80);

LV_IMG_DECLARE(_background_800x480);
LV_IMG_DECLARE(_microphone_off_alpha_362x210);
LV_IMG_DECLARE(_applying_alpha_362x210);
LV_IMG_DECLARE(_applying_alpha_362x210);
LV_IMG_DECLARE(_microphone_off_alpha_362x210);
LV_IMG_DECLARE(_menu_def_alpha_118x50);
LV_IMG_DECLARE(_menu_push_alpha_118x50);
LV_IMG_DECLARE(_earphone_alpha_31x33);

LV_IMG_DECLARE(_time_back_168x46);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_hint_alpha_72x72);

LV_IMG_DECLARE(_background_800x480);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);
LV_IMG_DECLARE(_back_def_alpha_68x48);
LV_IMG_DECLARE(_back_alpha_68x48);
LV_IMG_DECLARE(_meetserver_def_alpha_220x150);
LV_IMG_DECLARE(_meetserver_clk_alpha_220x150);
LV_IMG_DECLARE(_voic_def_alpha_220x150);
LV_IMG_DECLARE(_voic_clk_alpha_220x150);
LV_IMG_DECLARE(_language_def_alpha_220x150);
LV_IMG_DECLARE(_language_clk_alpha_220x150);
LV_IMG_DECLARE(_set_def_alpha_220x150);
LV_IMG_DECLARE(_set_clk_alpha_220x150);
LV_IMG_DECLARE(_earphone_alpha_31x33);

LV_IMG_DECLARE(_time_back_168x46);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_clk_alpha_344x128);
LV_IMG_DECLARE(_foreitem_def_alpha_344x128);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_doubleitem_def_alpha_712x128);
LV_IMG_DECLARE(_doubleitem_clk_alpha_712x128);
LV_IMG_DECLARE(_doubleitem_clk_alpha_712x128);
LV_IMG_DECLARE(_doubleitem_def_alpha_712x128);
LV_IMG_DECLARE(_doubleitem_def_alpha_712x128);
LV_IMG_DECLARE(_doubleitem_clk_alpha_712x128);
LV_IMG_DECLARE(_doubleitem_clk_alpha_712x128);
LV_IMG_DECLARE(_doubleitem_def_alpha_712x128);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_greenselect_alpha_220x180);
LV_IMG_DECLARE(_greenselect_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_yelloselect_alpha_220x180);
LV_IMG_DECLARE(_yelloselect_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);
LV_IMG_DECLARE(_redselect_alpha_220x180);
LV_IMG_DECLARE(_redselect_alpha_220x180);
LV_IMG_DECLARE(_unselectbtn_alpha_220x180);

LV_IMG_DECLARE(_setID_back_800x480);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);

LV_IMG_DECLARE(_speakrequst_800x480);
LV_IMG_DECLARE(_redlongbut_alpha_240x80);
LV_IMG_DECLARE(_redlongbut_clk_alpha_240x80);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);
LV_IMG_DECLARE(_clock_alpha_480x480);

LV_IMG_DECLARE(_bluescreensaver_800x480);

LV_IMG_DECLARE(_screansaver_800x480);

LV_IMG_DECLARE(_fire_alarm_800x480);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_origin_alpha_18x18);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_clk_alpha_344x80);
LV_IMG_DECLARE(_fiveitem_def_alpha_344x80);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_cancle_def_alpha_240x80);
LV_IMG_DECLARE(_cancle_clk_alpha_240x80);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_hint_alpha_72x72);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_hint_alpha_72x72);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_hint_alpha_72x72);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_hint_alpha_72x72);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_hint_alpha_72x72);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_cancle_def_alpha_240x80);
LV_IMG_DECLARE(_cancle_clk_alpha_240x80);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_cancle_def_alpha_240x80);
LV_IMG_DECLARE(_cancle_clk_alpha_240x80);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_cancle_def_alpha_240x80);
LV_IMG_DECLARE(_cancle_clk_alpha_240x80);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_hint_alpha_72x72);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_hint_alpha_72x72);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_hint_alpha_72x72);

LV_IMG_DECLARE(_background_800x480);

LV_IMG_DECLARE(_sinup_back_800x480);
LV_IMG_DECLARE(_confirm_def_alpha_280x64);
LV_IMG_DECLARE(_confirm_clk_alpha_280x64);

LV_IMG_DECLARE(_sinup_back_800x480);
LV_IMG_DECLARE(_sign_correct_alpha_40x40);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_cancle_def_alpha_240x80);
LV_IMG_DECLARE(_cancle_clk_alpha_240x80);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);

LV_IMG_DECLARE(_popwindow_800x480);
LV_IMG_DECLARE(_cancle_def_alpha_240x80);
LV_IMG_DECLARE(_cancle_clk_alpha_240x80);
LV_IMG_DECLARE(_confirm_def_alpha_240x80);
LV_IMG_DECLARE(_confirm_clk_alpha_240x80);

LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Medium_30)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Medium_32)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Medium_24)
//LV_FONT_DECLARE(lv_font_SourceHanSansCN_Medium_16)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Medium_12)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Regular_24)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Medium_44)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Bold_32)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Regular_32)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Medium_40)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Medium_28)


#ifdef __cplusplus
}
#endif
#endif
