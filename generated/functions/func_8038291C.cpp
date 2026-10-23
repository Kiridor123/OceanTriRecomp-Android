#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803827E0(CpuContext* ctx);
extern "C" uint64_t func_803827E0_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_8038291C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t xer = ctx->xer;

    goto loc_8038291C;

loc_8038291C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    r0 = (r4 & 255);
}

loc_80382940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80382968;
    }
}

loc_80382944:
{
}

loc_80382948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803829D0;
    }
}

loc_8038294C:
{
}

loc_80382950:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80382A18;
    }
}

loc_80382954:
{
}

loc_80382958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80382A38;
    }
}

loc_8038295C:
{
}

loc_80382960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80382A50;
    }
}

loc_80382964:
{
    goto loc_80382BF8;
}

loc_80382968:
{
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_80382970:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8038297C;
    }
}

loc_80382974:
{
    r3 = 1;
    goto loc_80382BFC;
}

loc_8038297C:
{
    r4 = 3;
    r5 = 0;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl0_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl0_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl0_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D290:
{
    r3 = 1;
    goto loc_inl0_cont_8012D270;
}

loc_inl0_0x8012D298:
{
    r3 = 0;
}

loc_inl0_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_8038298C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803829C0;
    }
}

loc_80382990:
{
    r3 = r30;
    r4 = 3;
    r5 = 1;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl1_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl1_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl1_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D290:
{
    r3 = 1;
    goto loc_inl1_cont_8012D270;
}

loc_inl1_0x8012D298:
{
    r3 = 0;
}

loc_inl1_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_803829A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803829C0;
    }
}

loc_803829A8:
{
    r3 = r30;
    r4 = 3;
    r5 = 2;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl2_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl2_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl2_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D290:
{
    r3 = 1;
    goto loc_inl2_cont_8012D270;
}

loc_inl2_0x8012D298:
{
    r3 = 0;
}

loc_inl2_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_803829BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803829C8;
    }
}

loc_803829C0:
{
    r3 = 2;
    goto loc_80382BFC;
}

loc_803829C8:
{
    r3 = 0;
    goto loc_80382BFC;
}

loc_803829D0:
{
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl3_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl3_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802B06E4:
{
    r3 = r0;
    goto loc_inl3_cont_802B06CC;
}

loc_inl3_return:
{
}

loc_inl3_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803829E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_803829F4;
    }
}

loc_803829E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_803829EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_803829F4;
    }
}

loc_803829F0:
{
    r31 = 1;
}

loc_803829F4:
{
}

loc_803829F8:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80382A04;
    }
}

loc_803829FC:
{
    r3 = 2;
    goto loc_80382BFC;
}

loc_80382A04:
{
    r3 = MemoryInline::FlatRead8((r30 + 572));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    goto loc_80382BFC;
}

loc_80382A18:
{
    r5 = MemoryInline::FlatRead16((r3 + 858));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = 450;
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3 = 0;
    r0_subfc_sub_1 = r0;
    r0 = (r5 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r4 + r3);
    r0 = (r0 + r0_ca_1);
    r3 = (r0 & 255);
    goto loc_80382BFC;
}

loc_80382A38:
{
    // inline leaf 0x80130180 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r3 = (r0 & 128);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80130180
    r4 = (1 - r3);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_80382BFC;
}

loc_80382A50:
{
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl5_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl5_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x802B06E4:
{
    r3 = r0;
    goto loc_inl5_cont_802B06CC;
}

loc_inl5_return:
{
}

loc_inl5_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80382A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80382A78;
    }
}

loc_80382A64:
{
}

loc_80382A68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80382B70;
    }
}

loc_80382A6C:
{
}

loc_80382A70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80382BB0;
    }
}

loc_80382A74:
{
    goto loc_80382BF0;
}

loc_80382A78:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80382A80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80382AA0;
    }
}

loc_80382A84:
{
}

loc_80382A88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80382AD4;
    }
}

loc_80382A8C:
{
}

loc_80382A90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80382B08;
    }
}

loc_80382A94:
{
}

loc_80382A98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80382B3C;
    }
}

loc_80382A9C:
{
    goto loc_80382BF0;
}

loc_80382AA0:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_80382AA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80382AC0;
    }
}

loc_80382AAC:
{
    r3 = r30;
    r4 = 8;
    r5 = 4;
    ctx->lr = 0x80382ABCu;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_2735 = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_2735);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_2735 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382AC0:
{
    r3 = r30;
    r4 = 4;
    r5 = 4;
    ctx->lr = 0x80382AD0u;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_2B6C = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_2B6C);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_2B6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382AD4:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_80382ADC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80382AF4;
    }
}

loc_80382AE0:
{
    r3 = r30;
    r4 = 7;
    r5 = 4;
    ctx->lr = 0x80382AF0u;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_3067 = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_3067);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_3067 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382AF4:
{
    r3 = r30;
    r4 = 3;
    r5 = 4;
    ctx->lr = 0x80382B04u;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_349E = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_349E);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_349E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382B08:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_80382B10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80382B28;
    }
}

loc_80382B14:
{
    r3 = r30;
    r4 = 8;
    r5 = 5;
    ctx->lr = 0x80382B24u;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_3999 = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_3999);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_3999 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382B28:
{
    r3 = r30;
    r4 = 3;
    r5 = 5;
    ctx->lr = 0x80382B38u;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_3DD0 = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_3DD0);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_3DD0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382B3C:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_80382B44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80382B5C;
    }
}

loc_80382B48:
{
    r3 = r30;
    r4 = 4;
    r5 = 2;
    ctx->lr = 0x80382B58u;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_42CB = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_42CB);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_42CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382B5C:
{
    r3 = r30;
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x80382B6Cu;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_4702 = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_4702);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_4702 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382B70:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80382B78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80382BF0;
    }
}

loc_80382B7C:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_80382B84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80382B9C;
    }
}

loc_80382B88:
{
    r3 = r30;
    r4 = 3;
    r5 = 3;
    ctx->lr = 0x80382B98u;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_4CC0 = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_4CC0);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_4CC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382B9C:
{
    r3 = r30;
    r4 = 0;
    r5 = 3;
    ctx->lr = 0x80382BACu;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_50F7 = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_50F7);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_50F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382BB0:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80382BB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80382BF0;
    }
}

loc_80382BBC:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_80382BC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80382BDC;
    }
}

loc_80382BC8:
{
    r3 = r30;
    r4 = 3;
    r5 = 3;
    ctx->lr = 0x80382BD8u;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_56B5 = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_56B5);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_56B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382BDC:
{
    r3 = r30;
    r4 = 0;
    r5 = 3;
    ctx->lr = 0x80382BECu;
    if constexpr (KnownRegArgsCpuCall<0x803827E0u>(&func_803827E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_803827E0_5AEC = func_803827E0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803827E0_5AEC);
        r4 = static_cast<uint32_t>(regargs_result_803827E0_5AEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x803827E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_80382BFC;
}

loc_80382BF0:
{
    r3 = 255;
    goto loc_80382BFC;
}

loc_80382BF8:
{
    r3 = 0;
}

loc_80382BFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8038291C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8038291C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xC0000002 fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8038291C func_8038291C preserves=true fpr_mask=0x00000000
