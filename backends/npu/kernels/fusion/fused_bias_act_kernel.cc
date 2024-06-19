// Copyright (c) 2024 PaddlePaddle Authors. All Rights Reserved.
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

#include "kernels/funcs/npu_funcs.h"
#include "kernels/funcs/npu_op_runner.h"

namespace custom_kernel {

template <typename T, typename Context>
void FusedBiasActKernel(
    const Context &dev_ctx,
    const phi::DenseTensor &x,
    const paddle::optional<phi::DenseTensor> &bias,
    const paddle::optional<phi::DenseTensor> &dequant_scales,
    const paddle::optional<phi::DenseTensor> &shift,
    const paddle::optional<phi::DenseTensor> &smooth,
    const std::string &act_method,
    const std::string &compute_dtype,
    float quant_scale,
    int quant_round_type,
    float quant_max_bound,
    float quant_min_bound,
    phi::DenseTensor *out) {
  PADDLE_THROW(phi::errors::Unimplemented("Only supports model export"));
}

}  // namespace custom_kernel

PD_REGISTER_PLUGIN_KERNEL(fused_bias_act,
                          npu,
                          ALL_LAYOUT,
                          custom_kernel::FusedBiasActKernel,
                          phi::float16,
                          int32_t) {}