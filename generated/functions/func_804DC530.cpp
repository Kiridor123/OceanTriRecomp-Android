#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804DBF90(CpuContext* ctx);
extern "C" uint64_t func_804DBF90_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_804DC530_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_804DC530;

loc_804DC530:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r31 = 0;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = 0;
    r30 = r3;
}

loc_804DC564:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_804DC5EC;
    }
}

loc_804DC568:
{
    r0 = MemoryInline::FlatRead32((r13 + -14796));
    r5 = 0x80750000u;
    r5 = (r5 + 2752);
}

loc_804DC578:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r0))) {
        goto loc_804DC5B4;
    }
}

loc_804DC57C:
{
    r3 = MemoryInline::FlatRead32((r13 + -14792));
}

loc_804DC584:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DC5B4;
    }
}

loc_804DC588:
{
    r0 = (0 - r29);
    r3 = (r5 + r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_804DC59C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DC5B4;
    }
}

loc_804DC5A0:
{
    r5_addr_1 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(r5_addr_1);
    r4 = (r1 + 8);
    r3 = (r5 + r0);
    ctx->lr = 0x804DC5B0u;
    if constexpr (KnownRegArgsCpuCall<0x804DBF90u>(&func_804DBF90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804DBF90_D63 = func_804DBF90_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804DBF90_D63);
        r4 = static_cast<uint32_t>(regargs_result_804DBF90_D63 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x804DBF90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_804DC5B8;
}

loc_804DC5B4:
{
    r3 = 0;
}

loc_804DC5B8:
{
}

loc_804DC5BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DC5EC;
    }
}

loc_804DC5C0:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
}

loc_804DC5C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DC5EC;
    }
}

loc_804DC5CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_804DC5D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r28))) {
        goto loc_804DC5EC;
    }
}

loc_804DC5D8:
{
    r4 = MemoryInline::FlatRead32((r1 + 32));
    r3 = r27;
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 1;
}

loc_804DC5EC:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 64);
    r3 = r31;
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DC530(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DC530_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DC530 func_804DC530 preserves=true fpr_mask=0x00000000
