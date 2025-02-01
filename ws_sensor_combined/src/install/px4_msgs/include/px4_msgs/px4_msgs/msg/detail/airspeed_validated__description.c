// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/AirspeedValidated.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/airspeed_validated__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__AirspeedValidated__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0xa4, 0x46, 0x4b, 0xc6, 0x35, 0x50, 0x5f,
      0x62, 0x1f, 0xe7, 0xf0, 0xbf, 0x94, 0xbb, 0x2a,
      0xa1, 0x7c, 0xb7, 0x32, 0x9a, 0x2f, 0x23, 0x0a,
      0xda, 0x20, 0xfb, 0x71, 0xca, 0x7f, 0x73, 0x49,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__AirspeedValidated__TYPE_NAME[] = "px4_msgs/msg/AirspeedValidated";

// Define type names, field names, and default values
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__indicated_airspeed_m_s[] = "indicated_airspeed_m_s";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__calibrated_airspeed_m_s[] = "calibrated_airspeed_m_s";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__true_airspeed_m_s[] = "true_airspeed_m_s";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__calibrated_ground_minus_wind_m_s[] = "calibrated_ground_minus_wind_m_s";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__true_ground_minus_wind_m_s[] = "true_ground_minus_wind_m_s";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__airspeed_sensor_measurement_valid[] = "airspeed_sensor_measurement_valid";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__selected_airspeed_index[] = "selected_airspeed_index";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__airspeed_derivative_filtered[] = "airspeed_derivative_filtered";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__throttle_filtered[] = "throttle_filtered";
static char px4_msgs__msg__AirspeedValidated__FIELD_NAME__pitch_filtered[] = "pitch_filtered";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__AirspeedValidated__FIELDS[] = {
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__indicated_airspeed_m_s, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__calibrated_airspeed_m_s, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__true_airspeed_m_s, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__calibrated_ground_minus_wind_m_s, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__true_ground_minus_wind_m_s, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__airspeed_sensor_measurement_valid, 33, 33},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__selected_airspeed_index, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__airspeed_derivative_filtered, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__throttle_filtered, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AirspeedValidated__FIELD_NAME__pitch_filtered, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__AirspeedValidated__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__AirspeedValidated__TYPE_NAME, 30, 30},
      {px4_msgs__msg__AirspeedValidated__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "float32 indicated_airspeed_m_s\\t\\t\\t# indicated airspeed in m/s (IAS), set to NAN if invalid\n"
  "float32 calibrated_airspeed_m_s     \\t\\t# calibrated airspeed in m/s (CAS, accounts for instrumentation errors), set to NAN if invalid\n"
  "float32 true_airspeed_m_s\\t\\t\\t# true filtered airspeed in m/s (TAS), set to NAN if invalid\n"
  "\n"
  "float32 calibrated_ground_minus_wind_m_s \\t# CAS calculated from groundspeed - windspeed, where windspeed is estimated based on a zero-sideslip assumption, set to NAN if invalid\n"
  "float32 true_ground_minus_wind_m_s \\t\\t# TAS calculated from groundspeed - windspeed, where windspeed is estimated based on a zero-sideslip assumption, set to NAN if invalid\n"
  "\n"
  "bool airspeed_sensor_measurement_valid \\t\\t# True if data from at least one airspeed sensor is declared valid.\n"
  "\n"
  "int8 selected_airspeed_index \\t\\t\\t# 1-3: airspeed sensor index, 0: groundspeed-windspeed, -1: airspeed invalid\n"
  "\n"
  "float32 airspeed_derivative_filtered\\t\\t# filtered indicated airspeed derivative [m/s/s]\n"
  "float32 throttle_filtered\\t\\t\\t# filtered fixed-wing throttle [-]\n"
  "float32 pitch_filtered\\t\\t\\t\\t# filtered pitch [rad]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__AirspeedValidated__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__AirspeedValidated__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1144, 1144},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__AirspeedValidated__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__AirspeedValidated__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
