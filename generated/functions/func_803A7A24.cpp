#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEB14(CpuContext* ctx);
extern "C" uint64_t func_800CEB14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A777C(CpuContext* ctx);
extern "C" uint32_t func_803A777C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803A780C(CpuContext* ctx);
extern "C" uint64_t func_803A780C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80433F18(CpuContext* ctx);
extern "C" uint64_t func_80433F18_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_803A777C_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_803A777C_statefree_v0(uint32_t);

extern "C" uint64_t func_803A7A24_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_803A7A24;

loc_803A7A24:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r0 = (r3 & 255);
}

loc_803A7A4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803A7B08;
    }
}

loc_803A7A50:
{
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x803A780Cu>(&func_803A780C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A780C_D57 = func_803A780C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803A780C_D57);
        r4 = static_cast<uint32_t>(regargs_result_803A780C_D57 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A780Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r27 = r3;
}

loc_803A7A60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A7A94;
    }
}

loc_803A7A64:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r3 = (r29 & 255);
    r0 = (r30 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x805F0000u;
    r4 = (r4 + 11892);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    ctx->lr = 0x803A7A8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80433F18u>(&func_80433F18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80433F18_12B3 = func_80433F18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80433F18_12B3);
        r4 = static_cast<uint32_t>(regargs_result_80433F18_12B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80433F18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r27;
    goto loc_803A7D24;
}

loc_803A7A94:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803A777Cu) && KnownTranslatedCpuCall<0x803A777Cu>::kAvailable && !KnownTranslatedCpuCall<0x803A777Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803A777Cu>()) {
        const auto state_free_result_803A777C_1AF5 = func_803A777C_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_803A777C_1AF5[0]);
        r3 = static_cast<uint32_t>(state_free_result_803A777C_1AF5[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803A777Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r31 = r3;
}

loc_803A7AA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A7AAC;
    }
}

loc_803A7AA4:
{
    r3 = 0;
    goto loc_803A7D24;
}

loc_803A7AAC:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r29 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r30 & 255);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 11892);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r6 = 0x803A0000u;
    r6 = (r6 + 31040);
    r7 = 3;
    r8 = (r1 + 8);
    ctx->lr = 0x803A7B04u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_800CEB14_258A = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_258A);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_258A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803A7D20;
}

loc_803A7B08:
{
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x803A780Cu>(&func_803A780C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A780C_2A9E = func_803A780C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803A780C_2A9E);
        r4 = static_cast<uint32_t>(regargs_result_803A780C_2A9E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A780Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r27 = r3;
}

loc_803A7B18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A7B74;
    }
}

loc_803A7B1C:
{
    r26 = 0;
    r0 = (r30 & 255);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r31 = (r31_rot_1 & -4);
    r3 = 0x805F0000u;
    r30 = (r3 + 11892);
    r29 = (r29 & 255);
    r28 = 1;
}

loc_803A7B38:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r26));
    r0 = (r29 & r0);
}

loc_803A7B44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7B60;
    }
}

loc_803A7B48:
{
    r3 = MemoryInline::FlatRead8((r27 + 3));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 3), static_cast<uint8_t>(r0));
    r3 = (r26 & 255);
    r30_addr_2 = (r30 + r31);
    r4 = MemoryInline::FlatRead32(r30_addr_2);
    ctx->lr = 0x803A7B60u;
    if constexpr (KnownRegArgsCpuCall<0x80433F18u>(&func_80433F18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80433F18_3146 = func_80433F18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80433F18_3146);
        r4 = static_cast<uint32_t>(regargs_result_80433F18_3146 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80433F18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_803A7B60:
{
    r26 = (r26 + 1);
}

loc_803A7B68:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(8))) {
        goto loc_803A7B38;
    }
}

loc_803A7B6C:
{
    r3 = r27;
    goto loc_803A7D24;
}

loc_803A7B74:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803A777Cu) && KnownTranslatedCpuCall<0x803A777Cu>::kAvailable && !KnownTranslatedCpuCall<0x803A777Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803A777Cu>()) {
        const auto state_free_result_803A777C_3A48 = func_803A777C_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_803A777C_3A48[0]);
        r3 = static_cast<uint32_t>(state_free_result_803A777C_3A48[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803A777Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r31 = r3;
}

loc_803A7B80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A7B8C;
    }
}

loc_803A7B84:
{
    r3 = 0;
    goto loc_803A7D24;
}

loc_803A7B8C:
{
    r5 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    r6 = 0;
    r4 = (r29 & 255);
    r0 = 8;
    ctr = r0;
}

loc_803A7BA4:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r0 = (r4 & r0);
}

loc_803A7BB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7BC0;
    }
}

loc_803A7BB4:
{
    r0 = (r6 & 255);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_803A7BC8;
}

loc_803A7BC0:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A7BA4;
    }
}

loc_803A7BC8:
{
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r30));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = 0;
    r6 = (r29 & 255);
    r5 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803A7BEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7BFC;
    }
}

loc_803A7BF0:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_803A7BFC:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803A7C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7C1C;
    }
}

loc_803A7C10:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_803A7C1C:
{
    r0 = 2;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803A7C2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7C3C;
    }
}

loc_803A7C30:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_803A7C3C:
{
    r0 = 3;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803A7C4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7C5C;
    }
}

loc_803A7C50:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_803A7C5C:
{
    r0 = 4;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803A7C6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7C7C;
    }
}

loc_803A7C70:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_803A7C7C:
{
    r0 = 5;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803A7C8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7C9C;
    }
}

loc_803A7C90:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_803A7C9C:
{
    r0 = 6;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803A7CAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7CBC;
    }
}

loc_803A7CB0:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_803A7CBC:
{
    r0 = 7;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803A7CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A7CDC;
    }
}

loc_803A7CD0:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_803A7CDC:
{
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r29 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r30 & 255);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 11892);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r6 = 0x803A0000u;
    r6 = (r6 + 31040);
    r7 = 3;
    r8 = (r1 + 8);
    ctx->lr = 0x803A7D20u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_800CEB14_53DE = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_53DE);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_53DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_803A7D20:
{
    r3 = r31;
}

loc_803A7D24:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A7A24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A7A24_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x001FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A7A24 func_803A7A24 preserves=true fpr_mask=0x00000000
