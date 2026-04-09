// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fairino_msgs:msg/RobotNonrtState.idl
// generated code does not contain a copyright notice

#include "fairino_msgs/msg/detail/robot_nonrt_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fairino_msgs
const rosidl_type_hash_t *
fairino_msgs__msg__RobotNonrtState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0x9c, 0xfc, 0x86, 0x87, 0xe6, 0x6b, 0xd1,
      0x13, 0xeb, 0x17, 0x39, 0x83, 0x5d, 0x13, 0xa1,
      0x90, 0x7b, 0xae, 0xad, 0x3d, 0x57, 0x4f, 0x7e,
      0x33, 0x43, 0xbd, 0x7c, 0xe7, 0x9c, 0x0f, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char fairino_msgs__msg__RobotNonrtState__TYPE_NAME[] = "fairino_msgs/msg/RobotNonrtState";

// Define type names, field names, and default values
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__prg_state[] = "prg_state";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__rbt_state[] = "rbt_state";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__rbt_main_code[] = "rbt_main_code";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__rbt_sub_code[] = "rbt_sub_code";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__robot_mode[] = "robot_mode";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_cur_pos[] = "j1_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_cur_pos[] = "j2_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_cur_pos[] = "j3_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_cur_pos[] = "j4_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_cur_pos[] = "j5_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_cur_pos[] = "j6_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_x_cur_pos[] = "cart_x_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_y_cur_pos[] = "cart_y_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_z_cur_pos[] = "cart_z_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_a_cur_pos[] = "cart_a_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_b_cur_pos[] = "cart_b_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_c_cur_pos[] = "cart_c_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_x_cur_pos[] = "flange_x_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_y_cur_pos[] = "flange_y_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_z_cur_pos[] = "flange_z_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_a_cur_pos[] = "flange_a_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_b_cur_pos[] = "flange_b_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_c_cur_pos[] = "flange_c_cur_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_actual_qd[] = "j1_actual_qd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_actual_qd[] = "j2_actual_qd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_actual_qd[] = "j3_actual_qd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_actual_qd[] = "j4_actual_qd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_actual_qd[] = "j5_actual_qd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_actual_qd[] = "j6_actual_qd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_actual_qdd[] = "j1_actual_qdd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_actual_qdd[] = "j2_actual_qdd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_actual_qdd[] = "j3_actual_qdd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_actual_qdd[] = "j4_actual_qdd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_actual_qdd[] = "j5_actual_qdd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_actual_qdd[] = "j6_actual_qdd";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_lin_cmd_speed[] = "cart_lin_cmd_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_rot_cmd_speed[] = "cart_rot_cmd_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_x_cmd_speed[] = "cart_x_cmd_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_y_cmd_speed[] = "cart_y_cmd_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_z_cmd_speed[] = "cart_z_cmd_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_a_cmd_speed[] = "cart_a_cmd_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_b_cmd_speed[] = "cart_b_cmd_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_c_cmd_speed[] = "cart_c_cmd_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_lin_cur_speed[] = "cart_lin_cur_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_rot_cur_speed[] = "cart_rot_cur_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_x_cur_speed[] = "cart_x_cur_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_y_cur_speed[] = "cart_y_cur_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_z_cur_speed[] = "cart_z_cur_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_a_cur_speed[] = "cart_a_cur_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_b_cur_speed[] = "cart_b_cur_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_c_cur_speed[] = "cart_c_cur_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_cur_tor[] = "j1_cur_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_cur_tor[] = "j2_cur_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_cur_tor[] = "j3_cur_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_cur_tor[] = "j4_cur_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_cur_tor[] = "j5_cur_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_cur_tor[] = "j6_cur_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_num[] = "tool_num";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__work_num[] = "work_num";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__dgt_output_h[] = "dgt_output_h";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__dgt_output_l[] = "dgt_output_l";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tl_dgt_output_l[] = "tl_dgt_output_l";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__dgt_input_h[] = "dgt_input_h";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__dgt_input_l[] = "dgt_input_l";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tl_dgt_input_l[] = "tl_dgt_input_l";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cl_analog_input_1[] = "cl_analog_input_1";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cl_analog_input_2[] = "cl_analog_input_2";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tl_anglog_input[] = "tl_anglog_input";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fx_raw_data[] = "ft_fx_raw_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fy_raw_data[] = "ft_fy_raw_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fz_raw_data[] = "ft_fz_raw_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_tx_raw_data[] = "ft_tx_raw_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_ty_raw_data[] = "ft_ty_raw_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_tz_raw_data[] = "ft_tz_raw_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fx_data[] = "ft_fx_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fy_data[] = "ft_fy_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fz_data[] = "ft_fz_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_tx_data[] = "ft_tx_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_ty_data[] = "ft_ty_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_tz_data[] = "ft_tz_data";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_actstatus[] = "ft_actstatus";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__emg[] = "emg";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__motion_done[] = "motion_done";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__grip_motion_done[] = "grip_motion_done";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__mc_queue_len[] = "mc_queue_len";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__collision_err[] = "collision_err";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__trajectory_pnum[] = "trajectory_pnum";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__safety_stop1_state[] = "safety_stop1_state";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__safety_stop2_state[] = "safety_stop2_state";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_fault_id[] = "gripper_fault_id";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__grippererro[] = "grippererro";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_active[] = "gripper_active";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_position[] = "gripper_position";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_speed[] = "gripper_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_current[] = "gripper_current";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_temp[] = "gripper_temp";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_voltage[] = "gripper_voltage";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_id[] = "aux_servo_id";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_err[] = "aux_servo_err";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_state[] = "aux_servo_state";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_pos[] = "aux_servo_pos";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_vel[] = "aux_servo_vel";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_torque[] = "aux_servo_torque";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_1[] = "ext_di_state_1";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_2[] = "ext_di_state_2";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_3[] = "ext_di_state_3";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_4[] = "ext_di_state_4";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_5[] = "ext_di_state_5";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_6[] = "ext_di_state_6";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_7[] = "ext_di_state_7";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_8[] = "ext_di_state_8";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_1[] = "ext_do_state_1";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_2[] = "ext_do_state_2";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_3[] = "ext_do_state_3";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_4[] = "ext_do_state_4";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_5[] = "ext_do_state_5";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_6[] = "ext_do_state_6";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_7[] = "ext_do_state_7";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_8[] = "ext_do_state_8";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ai_state_1[] = "ext_ai_state_1";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ai_state_2[] = "ext_ai_state_2";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ai_state_3[] = "ext_ai_state_3";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ai_state_4[] = "ext_ai_state_4";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ao_state_1[] = "ext_ao_state_1";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ao_state_2[] = "ext_ao_state_2";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ao_state_3[] = "ext_ao_state_3";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ao_state_4[] = "ext_ao_state_4";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__rbt_enable_state[] = "rbt_enable_state";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__end_lua_err_code[] = "end_lua_err_code";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cl_analog_output_1[] = "cl_analog_output_1";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cl_analog_output_2[] = "cl_analog_output_2";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tl_analog_output[] = "tl_analog_output";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_rot_num[] = "gripper_rot_num";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_rot_speed[] = "gripper_rot_speed";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_rot_torque[] = "gripper_rot_torque";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__weldbreakoffstate[] = "weldbreakoffstate";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__weldarcstate[] = "weldarcstate";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_tgt_tor[] = "j1_tgt_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_tgt_tor[] = "j2_tgt_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_tgt_tor[] = "j3_tgt_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_tgt_tor[] = "j4_tgt_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_tgt_tor[] = "j5_tgt_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_tgt_tor[] = "j6_tgt_tor";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__jwide_voltage_ctrl_box_temp[] = "jwide_voltage_ctrl_box_temp";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wide_voltage_ctrl_box_fan_current[] = "wide_voltage_ctrl_box_fan_current";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_x[] = "tool_coord_x";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_y[] = "tool_coord_y";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_z[] = "tool_coord_z";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_a[] = "tool_coord_a";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_b[] = "tool_coord_b";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_c[] = "tool_coord_c";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_x[] = "wobj_coord_x";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_y[] = "wobj_coord_y";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_z[] = "wobj_coord_z";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_a[] = "wobj_coord_a";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_b[] = "wobj_coord_b";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_c[] = "wobj_coord_c";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_x[] = "ex_tool_coord_x";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_y[] = "ex_tool_coord_y";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_z[] = "ex_tool_coord_z";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_a[] = "ex_tool_coord_a";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_b[] = "ex_tool_coord_b";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_c[] = "ex_tool_coord_c";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_x[] = "ex_axis_coord_x";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_y[] = "ex_axis_coord_y";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_z[] = "ex_axis_coord_z";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_a[] = "ex_axis_coord_a";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_b[] = "ex_axis_coord_b";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_c[] = "ex_axis_coord_c";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__load[] = "load";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__load_cog_x[] = "load_cog_x";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__load_cog_y[] = "load_cog_y";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__load_cog_z[] = "load_cog_z";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_last_servoj_target[] = "j1_last_servoj_target";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_last_servoj_target[] = "j2_last_servoj_target";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_last_servoj_target[] = "j3_last_servoj_target";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_last_servoj_target[] = "j4_last_servoj_target";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_last_servoj_target[] = "j5_last_servoj_target";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_last_servoj_target[] = "j6_last_servoj_target";
static char fairino_msgs__msg__RobotNonrtState__FIELD_NAME__servoj_cmd_num[] = "servoj_cmd_num";

static rosidl_runtime_c__type_description__Field fairino_msgs__msg__RobotNonrtState__FIELDS[] = {
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__prg_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__rbt_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__rbt_main_code, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__rbt_sub_code, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__robot_mode, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_cur_pos, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_cur_pos, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_cur_pos, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_cur_pos, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_cur_pos, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_cur_pos, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_x_cur_pos, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_y_cur_pos, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_z_cur_pos, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_a_cur_pos, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_b_cur_pos, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_c_cur_pos, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_x_cur_pos, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_y_cur_pos, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_z_cur_pos, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_a_cur_pos, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_b_cur_pos, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__flange_c_cur_pos, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_actual_qd, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_actual_qd, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_actual_qd, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_actual_qd, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_actual_qd, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_actual_qd, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_actual_qdd, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_actual_qdd, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_actual_qdd, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_actual_qdd, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_actual_qdd, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_actual_qdd, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_lin_cmd_speed, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_rot_cmd_speed, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_x_cmd_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_y_cmd_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_z_cmd_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_a_cmd_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_b_cmd_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_c_cmd_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_lin_cur_speed, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_rot_cur_speed, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_x_cur_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_y_cur_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_z_cur_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_a_cur_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_b_cur_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cart_c_cur_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_cur_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_cur_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_cur_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_cur_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_cur_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_cur_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_num, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__work_num, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__dgt_output_h, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__dgt_output_l, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tl_dgt_output_l, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__dgt_input_h, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__dgt_input_l, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tl_dgt_input_l, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cl_analog_input_1, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cl_analog_input_2, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tl_anglog_input, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fx_raw_data, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fy_raw_data, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fz_raw_data, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_tx_raw_data, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_ty_raw_data, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_tz_raw_data, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fx_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fy_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_fz_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_tx_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_ty_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_tz_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ft_actstatus, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__emg, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__motion_done, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__grip_motion_done, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__mc_queue_len, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__collision_err, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__trajectory_pnum, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__safety_stop1_state, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__safety_stop2_state, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_fault_id, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__grippererro, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_active, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_position, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_current, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_temp, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_id, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_err, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_state, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_pos, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_vel, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__aux_servo_torque, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_1, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_2, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_3, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_4, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_5, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_6, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_7, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_di_state_8, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_1, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_2, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_3, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_4, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_5, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_6, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_7, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_do_state_8, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ai_state_1, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ai_state_2, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ai_state_3, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ai_state_4, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ao_state_1, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ao_state_2, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ao_state_3, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ext_ao_state_4, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__rbt_enable_state, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__end_lua_err_code, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cl_analog_output_1, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__cl_analog_output_2, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tl_analog_output, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_rot_num, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_rot_speed, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__gripper_rot_torque, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__weldbreakoffstate, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__weldarcstate, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_tgt_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_tgt_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_tgt_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_tgt_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_tgt_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_tgt_tor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__jwide_voltage_ctrl_box_temp, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wide_voltage_ctrl_box_fan_current, 33, 33},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_y, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_z, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_a, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_b, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__tool_coord_c, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_y, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_z, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_a, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_b, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__wobj_coord_c, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_x, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_y, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_z, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_a, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_b, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_tool_coord_c, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_x, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_y, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_z, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_a, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_b, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__ex_axis_coord_c, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__load, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__load_cog_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__load_cog_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__load_cog_z, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j1_last_servoj_target, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j2_last_servoj_target, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j3_last_servoj_target, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j4_last_servoj_target, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j5_last_servoj_target, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__j6_last_servoj_target, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fairino_msgs__msg__RobotNonrtState__FIELD_NAME__servoj_cmd_num, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
fairino_msgs__msg__RobotNonrtState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fairino_msgs__msg__RobotNonrtState__TYPE_NAME, 32, 32},
      {fairino_msgs__msg__RobotNonrtState__FIELDS, 180, 180},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 prg_state\n"
  "uint8 rbt_state\n"
  "uint16 rbt_main_code\n"
  "uint16 rbt_sub_code\n"
  "uint8 robot_mode\n"
  "float64 j1_cur_pos\n"
  "float64 j2_cur_pos\n"
  "float64 j3_cur_pos\n"
  "float64 j4_cur_pos\n"
  "float64 j5_cur_pos\n"
  "float64 j6_cur_pos\n"
  "float64 cart_x_cur_pos\n"
  "float64 cart_y_cur_pos\n"
  "float64 cart_z_cur_pos\n"
  "float64 cart_a_cur_pos\n"
  "float64 cart_b_cur_pos\n"
  "float64 cart_c_cur_pos\n"
  "float64 flange_x_cur_pos\n"
  "float64 flange_y_cur_pos\n"
  "float64 flange_z_cur_pos\n"
  "float64 flange_a_cur_pos\n"
  "float64 flange_b_cur_pos\n"
  "float64 flange_c_cur_pos\n"
  "float64 j1_actual_qd\n"
  "float64 j2_actual_qd\n"
  "float64 j3_actual_qd\n"
  "float64 j4_actual_qd\n"
  "float64 j5_actual_qd\n"
  "float64 j6_actual_qd\n"
  "float64 j1_actual_qdd\n"
  "float64 j2_actual_qdd\n"
  "float64 j3_actual_qdd\n"
  "float64 j4_actual_qdd\n"
  "float64 j5_actual_qdd\n"
  "float64 j6_actual_qdd\n"
  "float64 cart_lin_cmd_speed\n"
  "float64 cart_rot_cmd_speed\n"
  "float64 cart_x_cmd_speed\n"
  "float64 cart_y_cmd_speed\n"
  "float64 cart_z_cmd_speed\n"
  "float64 cart_a_cmd_speed\n"
  "float64 cart_b_cmd_speed\n"
  "float64 cart_c_cmd_speed\n"
  "float64 cart_lin_cur_speed\n"
  "float64 cart_rot_cur_speed\n"
  "float64 cart_x_cur_speed\n"
  "float64 cart_y_cur_speed\n"
  "float64 cart_z_cur_speed\n"
  "float64 cart_a_cur_speed\n"
  "float64 cart_b_cur_speed\n"
  "float64 cart_c_cur_speed\n"
  "float64 j1_cur_tor\n"
  "float64 j2_cur_tor\n"
  "float64 j3_cur_tor\n"
  "float64 j4_cur_tor\n"
  "float64 j5_cur_tor\n"
  "float64 j6_cur_tor\n"
  "uint8 tool_num\n"
  "uint8 work_num\n"
  "uint8 dgt_output_h\n"
  "uint8 dgt_output_l\n"
  "uint8 tl_dgt_output_l\n"
  "uint8 dgt_input_h\n"
  "uint8 dgt_input_l\n"
  "uint8 tl_dgt_input_l\n"
  "uint16 cl_analog_input_1\n"
  "uint16 cl_analog_input_2\n"
  "uint16 tl_anglog_input\n"
  "float64 ft_fx_raw_data\n"
  "float64 ft_fy_raw_data\n"
  "float64 ft_fz_raw_data\n"
  "float64 ft_tx_raw_data\n"
  "float64 ft_ty_raw_data\n"
  "float64 ft_tz_raw_data\n"
  "float64 ft_fx_data\n"
  "float64 ft_fy_data\n"
  "float64 ft_fz_data\n"
  "float64 ft_tx_data\n"
  "float64 ft_ty_data\n"
  "float64 ft_tz_data\n"
  "uint8 ft_actstatus\n"
  "uint8 emg\n"
  "uint8 motion_done\n"
  "uint8 grip_motion_done\n"
  "uint16 mc_queue_len\n"
  "uint8 collision_err\n"
  "uint16 trajectory_pnum\n"
  "uint8 safety_stop1_state\n"
  "uint8 safety_stop2_state\n"
  "uint8 gripper_fault_id\n"
  "uint16 grippererro\n"
  "uint16 gripper_active\n"
  "uint8 gripper_position\n"
  "uint8 gripper_speed\n"
  "uint8 gripper_current\n"
  "uint16 gripper_temp\n"
  "uint16 gripper_voltage\n"
  "uint8 aux_servo_id\n"
  "uint16 aux_servo_err\n"
  "uint16 aux_servo_state\n"
  "float64 aux_servo_pos\n"
  "float64 aux_servo_vel\n"
  "float64 aux_servo_torque\n"
  "uint16 ext_di_state_1\n"
  "uint16 ext_di_state_2\n"
  "uint16 ext_di_state_3\n"
  "uint16 ext_di_state_4\n"
  "uint16 ext_di_state_5\n"
  "uint16 ext_di_state_6\n"
  "uint16 ext_di_state_7\n"
  "uint16 ext_di_state_8\n"
  "uint16 ext_do_state_1\n"
  "uint16 ext_do_state_2\n"
  "uint16 ext_do_state_3\n"
  "uint16 ext_do_state_4\n"
  "uint16 ext_do_state_5\n"
  "uint16 ext_do_state_6\n"
  "uint16 ext_do_state_7\n"
  "uint16 ext_do_state_8\n"
  "uint16 ext_ai_state_1\n"
  "uint16 ext_ai_state_2\n"
  "uint16 ext_ai_state_3\n"
  "uint16 ext_ai_state_4\n"
  "uint16 ext_ao_state_1\n"
  "uint16 ext_ao_state_2\n"
  "uint16 ext_ao_state_3\n"
  "uint16 ext_ao_state_4\n"
  "uint8 rbt_enable_state\n"
  "uint16 end_lua_err_code\n"
  "uint16 cl_analog_output_1\n"
  "uint16 cl_analog_output_2\n"
  "uint16 tl_analog_output\n"
  "float64 gripper_rot_num\n"
  "uint8 gripper_rot_speed\n"
  "uint8 gripper_rot_torque\n"
  "uint8 weldbreakoffstate\n"
  "uint8 weldarcstate\n"
  "float64 j1_tgt_tor\n"
  "float64 j2_tgt_tor\n"
  "float64 j3_tgt_tor\n"
  "float64 j4_tgt_tor\n"
  "float64 j5_tgt_tor\n"
  "float64 j6_tgt_tor\n"
  "float64 jwide_voltage_ctrl_box_temp\n"
  "uint16 wide_voltage_ctrl_box_fan_current\n"
  "float64 tool_coord_x\n"
  "float64 tool_coord_y\n"
  "float64 tool_coord_z\n"
  "float64 tool_coord_a\n"
  "float64 tool_coord_b\n"
  "float64 tool_coord_c\n"
  "float64 wobj_coord_x\n"
  "float64 wobj_coord_y\n"
  "float64 wobj_coord_z\n"
  "float64 wobj_coord_a\n"
  "float64 wobj_coord_b\n"
  "float64 wobj_coord_c\n"
  "float64 ex_tool_coord_x\n"
  "float64 ex_tool_coord_y\n"
  "float64 ex_tool_coord_z\n"
  "float64 ex_tool_coord_a\n"
  "float64 ex_tool_coord_b\n"
  "float64 ex_tool_coord_c\n"
  "float64 ex_axis_coord_x\n"
  "float64 ex_axis_coord_y\n"
  "float64 ex_axis_coord_z\n"
  "float64 ex_axis_coord_a\n"
  "float64 ex_axis_coord_b\n"
  "float64 ex_axis_coord_c\n"
  "float64 load\n"
  "float64 load_cog_x\n"
  "float64 load_cog_y\n"
  "float64 load_cog_z\n"
  "float64 j1_last_servoj_target\n"
  "float64 j2_last_servoj_target\n"
  "float64 j3_last_servoj_target\n"
  "float64 j4_last_servoj_target\n"
  "float64 j5_last_servoj_target\n"
  "float64 j6_last_servoj_target\n"
  "uint16 servoj_cmd_num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fairino_msgs__msg__RobotNonrtState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fairino_msgs__msg__RobotNonrtState__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 4000, 4000},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fairino_msgs__msg__RobotNonrtState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fairino_msgs__msg__RobotNonrtState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
