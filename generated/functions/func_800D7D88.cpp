#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800D7F34(CpuContext* ctx);
extern "C" uint64_t func_800D7F34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800D7D88_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_800D7D88;

loc_800D7D88:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r8;
    r30 = MemoryInline::FlatRead32(r8);
    r31 = r7;
    r0 = (r30 & 2);
}

loc_800D7DC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D7DD0;
    }
}

loc_800D7DC4:
{
    r0 = (r30 & 4);
}

loc_800D7DCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D7E04;
    }
}

loc_800D7DD0:
{
    r3 = r7;
    // inline leaf 0x800D7FA4 (5 guest instruction(s))
    r3 = (r3 & 1073741824);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800D7FA4
}

loc_800D7DDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D7DF0;
    }
}

loc_800D7DE0:
{
    r3 = r25;
    r4 = r27;
    ctx->lr = 0x800D7DECu;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80071070_BEA = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_BEA);
        r4 = static_cast<uint32_t>(regargs_result_80071070_BEA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_800D7EB8;
}

loc_800D7DF0:
{
    r3 = r25;
    r4 = r27;
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x805019BCu>(ctx);
    goto loc_800D7EB8;
}

loc_800D7E04:
{
    r0 = (r30 & 32);
}

loc_800D7E0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D7E74;
    }
}

loc_800D7E10:
{
    r3 = r7;
    // inline leaf 0x800D7FA4 (5 guest instruction(s))
    r3 = (r3 & 1073741824);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800D7FA4
}

loc_800D7E1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D7E48;
    }
}

loc_800D7E20:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 72));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = r25;
    r4 = r27;
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501A10u>(ctx);
    goto loc_800D7EB8;
}

loc_800D7E48:
{
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 24);
    r4 = r28;
    r5 = (r29 + 28);
    ctx->lr = 0x800D7E60u;
    if constexpr (KnownRegArgsCpuCall<0x800D7F34u>(&func_800D7F34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_800D7F34_1706 = func_800D7F34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D7F34_1706);
        r4 = static_cast<uint32_t>(regargs_result_800D7F34_1706 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800D7F34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r25;
    r4 = r27;
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    goto loc_800D7EB8;
}

loc_800D7E74:
{
    r3 = r7;
    // inline leaf 0x800D7FA4 (5 guest instruction(s))
    r3 = (r3 & 1073741824);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800D7FA4
}

loc_800D7E80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D7E98;
    }
}

loc_800D7E84:
{
    r3 = r25;
    r4 = r27;
    r5 = (r29 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    goto loc_800D7EB8;
}

loc_800D7E98:
{
    r3 = r25;
    r4 = r27;
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x805019BCu>(ctx);
    r3 = r25;
    r4 = r25;
    r5 = (r29 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_800D7EB8:
{
    r0 = (r30 & 8);
}

loc_800D7EC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D7EE4;
    }
}

loc_800D7EC4:
{
    r3 = r31;
    // inline leaf 0x80073828 (2 guest instruction(s))
    r3 = (r3 | 1073741824);
    // end of inlined leaf 0x80073828
    r31 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30412));
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r26 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r26, f0.d);
    goto loc_800D7EFC;
}

loc_800D7EE4:
{
    r3 = r31;
    // inline leaf 0x80073818 (2 guest instruction(s))
    r3 = (r3 & 1073741823);
    // end of inlined leaf 0x80073818
    r31 = r3;
    r3 = r26;
    r4 = (r29 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800D7EFC:
{
    r0 = (r30 & 16);
}

loc_800D7F04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D7F14;
    }
}

loc_800D7F08:
{
    r3 = r31;
    // inline leaf 0x80073820 (2 guest instruction(s))
    r3 = (r3 | 268435456);
    // end of inlined leaf 0x80073820
    goto loc_800D7F1C;
}

loc_800D7F14:
{
    r3 = r31;
    // inline leaf 0x80073810 (2 guest instruction(s))
    r3 = (r3 & 268435455);
    // end of inlined leaf 0x80073810
}

loc_800D7F1C:
{
    r11 = (r1 + 112);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D7D88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D7D88_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D7D88 func_800D7D88 preserves=true fpr_mask=0x00000000
