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

#include "dsls_fir.h"


esp_err_t dsls_fird_init_32f(fir_32f_t* fir, float* coeffs, float* delay, int N, int d, int start_pos)
{
    fir->coeffs = coeffs;
    fir->delay = delay;
    fir->N = N-1;
    fir->pos = 0;
    fir->d = d;
    fir->d_pos = start_pos;
    if (fir->d_pos >= fir->d) return ESP_ERR_DSL_PARAM_OUTOFRANGE;

    for (int i=0 ; i< N; i++)
    {
        fir->delay[i] = 0;
    }
    return ESP_OK;
}
