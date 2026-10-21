#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2250(CpuContext* ctx);
extern "C" uint64_t func_804C2250_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804C2560_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804C2560u);
    goto loc_804C2560;

loc_804C2560:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = (r3 + 60);
    r6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r5 + -1);
    r8 = ~(r0 | r0);
    r12 = 0;
    r31 = -1;
    r5 = MemoryInline::FlatRead16((r3 + 18));
    r11 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r5 & 1);
    r5 = 0;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r10 = (r10_rot_0 & 134217727);
    goto loc_804C25EC;
}

loc_804C25A8:
{
    r9 = MemoryInline::FlatRead32((r11 + 4));
    r7 = (r11 + 16);
    r0 = (r9 + r7);
    r0 = (r0 - r4);
    r30 = (r8 & r0);
    r0 = (r30 - r7);
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_804C25E8;
    }
}

loc_804C25C4:
{
}

loc_804C25C8:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r9))) {
        goto loc_804C25E8;
    }
}

loc_804C25CC:
{
}

loc_804C25D0:
{
    r12 = r11;
    r31 = r9;
    r5 = r30;
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_804C25F4;
    }
}

loc_804C25E0:
{
}

loc_804C25E4:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r4))) {
        goto loc_804C25F4;
    }
}

loc_804C25E8:
{
    r11 = MemoryInline::FlatRead32((r11 + 8));
}

loc_804C25EC:
{
}

loc_804C25F0:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_804C25A8;
    }
}

loc_804C25F4:
{
}

loc_804C25F8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804C260C;
    }
}

loc_804C25FC:
{
    r4 = r12;
    r7 = 1;
    ctx->lr = 0x804C2608u;
    if constexpr (KnownRegArgsCpuCall<0x804C2250u>(&func_804C2250)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_804C2250_B6C = func_804C2250_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804C2250_B6C);
        r4 = static_cast<uint32_t>(regargs_result_804C2250_B6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804C2250u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
    }
    goto loc_804C2610;
}

loc_804C260C:
{
    r3 = 0;
}

loc_804C2610:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C2560(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C2560_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C2560 func_804C2560 preserves=true fpr_mask=0x00000000
