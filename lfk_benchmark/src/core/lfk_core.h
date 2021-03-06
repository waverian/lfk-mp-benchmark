/*
 * Copyright (c) 2022 waverian
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef LFK_CORE_LFK_CORE_H
#define LFK_CORE_LFK_CORE_H

#include "lfk/types.h"

typedef void (*benchmark_core_progress_callback_t)(void *data, int run,
                                                   int kernel);

typedef struct {
  void *data;
  benchmark_core_progress_callback_t callback;
} benchmark_core_progress_callback_handler_t;

typedef struct {
  lfk_run_result_t results;
  double execution_time;
  benchmark_core_progress_callback_handler_t callback_handler;
} benchmark_core_args_t;

void *benchmark_core_optimized(void *benchmark_args_as_void);

void *benchmark_core_nonoptimized(void *benchmark_args_as_void);

#endif /* LFK_CORE_LFK_CORE_H */
