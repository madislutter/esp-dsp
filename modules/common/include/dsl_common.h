// Copyright 2018-2019 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _dsl_common_H_
#define _dsl_common_H_
#include "stdint.h"
#include "dsl_err.h"


#ifdef __cplusplus
extern "C"
{
#endif

/**
 * The function check if the argument is power of 2.
 * The implementation use ANSI C and could be compiled and run on any platform
 *
 * @return
 *      - 1 if x is power of two
 *      - 0 if no
 */
uint8_t is_power_of_two(int x);

#ifdef __cplusplus
}
#endif

#endif // _dsl_common_H_