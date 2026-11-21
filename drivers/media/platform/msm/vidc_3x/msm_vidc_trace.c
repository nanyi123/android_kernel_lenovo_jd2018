// SPDX-License-Identifier: GPL-2.0-only
/*
 * vidc tracepoint 定义宿主。
 *
 * 16 基线把 msm_vidc_debug.o 绑到 CONFIG_DEBUG_FS（见 Makefile），而
 * CREATE_TRACE_POINTS 原本就在 msm_vidc_debug.c 里。DEBUG_FS=n 时该目标不编，
 * vmlinux 链接就会缺 __tracepoint_msm_vidc_* / __tracepoint_msm_smem_buffer_*
 * / __tracepoint_venus_hfi_var_done（v4l2 与动态调频路径仍在调用它们）。
 *
 * 这里单独提供宿主：与 DEBUG_FS 解耦，debug.o 的编译条件保持上游不变。
 */
#define CREATE_TRACE_POINTS
#include "msm_vidc_common.h"
#include "trace/events/msm_vidc_events.h"
