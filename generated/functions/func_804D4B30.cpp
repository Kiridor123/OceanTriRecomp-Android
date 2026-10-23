#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D50B0(CpuContext* ctx);
extern "C" uint64_t func_804D50B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804D4B30_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    const uint32_t r29_entry = r29;

    goto loc_804D4B30;

loc_804D4B30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = r4;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead16((r31 + 714));
    r30 = r3;
    r0 = (r0 & 1);
}

loc_804D4B60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D4BE0;
    }
}

loc_804D4B64:
{
    r0 = MemoryInline::FlatRead16((r31 + 712));
}

loc_804D4B6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_804D4BE0;
    }
}

loc_804D4B70:
{
    r0 = MemoryInline::FlatRead32((r31 + 744));
}

loc_804D4B78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D4BE0;
    }
}

loc_804D4B7C:
{
    r3 = (r31 + 744);
    ctx->lr = 0x804D4B84u;
    if constexpr (KnownRegArgsCpuCall<0x804D50B0u>(&func_804D50B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[29] = r29;
        const auto regargs_result_804D50B0_A37 = func_804D50B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D50B0_A37);
        r4 = static_cast<uint32_t>(regargs_result_804D50B0_A37 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r29 = ctx->gpr[29];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[29] = r29;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D50B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r29 = ctx->gpr[29];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead16((r31 + 712));
}

loc_804D4B8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D4B98;
    }
}

loc_804D4B90:
{
    r0 = 0;
    goto loc_804D4BC8;
}

loc_804D4B98:
{
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 220));
    goto loc_804D4BBC;
}

loc_804D4BA8:
{
}

loc_804D4BAC:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r3))) {
        goto loc_804D4BB8;
    }
}

loc_804D4BB0:
{
    r0 = 1;
    goto loc_804D4BC8;
}

loc_804D4BB8:
{
    r3 = MemoryInline::FlatRead32((r3 + 764));
}

loc_804D4BBC:
{
}

loc_804D4BC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D4BA8;
    }
}

loc_804D4BC4:
{
    r0 = 0;
}

loc_804D4BC8:
{
}

loc_804D4BCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D4BE0;
    }
}

loc_804D4BD0:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0;
    goto loc_804D4C58;
}

loc_804D4BE0:
{
    r0 = MemoryInline::FlatRead16((r31 + 712));
}

loc_804D4BE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_804D4C4C;
    }
}

loc_804D4BEC:
{
}

loc_804D4BF0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_804D4BFC;
    }
}

loc_804D4BF4:
{
    r0 = MemoryInline::FlatRead32((r31 + 728));
    MemoryInline::FlatWrite32(r29, r0);
}

loc_804D4BFC:
{
    r4 = MemoryInline::FlatRead32((r31 + 764));
    r5 = MemoryInline::FlatRead32((r31 + 768));
}

loc_804D4C08:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4C18;
    }
}

loc_804D4C0C:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 224), r5);
    goto loc_804D4C1C;
}

loc_804D4C18:
{
    MemoryInline::FlatWrite32((r4 + 768), r5);
}

loc_804D4C1C:
{
}

loc_804D4C20:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D4C30;
    }
}

loc_804D4C24:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 220), r4);
    goto loc_804D4C34;
}

loc_804D4C30:
{
    MemoryInline::FlatWrite32((r5 + 764), r4);
}

loc_804D4C34:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 712), static_cast<uint16_t>(r0));
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
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 1;
    goto loc_804D4C58;
}

loc_804D4C4C:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0;
}

loc_804D4C58:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[29] = r29_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D4B30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D4B30_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D4B30 func_804D4B30 preserves=true fpr_mask=0x00000000
