#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2250(CpuContext* ctx);
extern "C" uint64_t func_804C2250_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804C2480_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804C2480u);
    goto loc_804C2480;

loc_804C2480:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = (r3 + 60);
    r6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r5 + -1);
    r9 = ~(r0 | r0);
    r31 = 0;
    r30 = -1;
    r29 = 0;
    r7 = MemoryInline::FlatRead16((r3 + 18));
    r12 = MemoryInline::FlatRead32(r3);
    r0 = (r7 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r11 = (r11_rot_0 & 134217727);
    goto loc_804C2518;
}

loc_804C24CC:
{
    r8 = (r12 + 16);
    r10 = MemoryInline::FlatRead32((r12 + 4));
    r7 = (r5 + r8);
    r0 = (r7 + -1);
    r7 = (r9 & r0);
    r0 = (r7 - r8);
    r0 = (r4 + r0);
}

loc_804C24EC:
{
    if ((static_cast<uint32_t>(r10) < static_cast<uint32_t>(r0))) {
        goto loc_804C2514;
    }
}

loc_804C24F0:
{
}

loc_804C24F4:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(r10))) {
        goto loc_804C2514;
    }
}

loc_804C24F8:
{
}

loc_804C24FC:
{
    r31 = r12;
    r30 = r10;
    r29 = r7;
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_804C2520;
    }
}

loc_804C250C:
{
}

loc_804C2510:
{
    if ((static_cast<uint32_t>(r10) == static_cast<uint32_t>(r4))) {
        goto loc_804C2520;
    }
}

loc_804C2514:
{
    r12 = MemoryInline::FlatRead32((r12 + 12));
}

loc_804C2518:
{
}

loc_804C251C:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_804C24CC;
    }
}

loc_804C2520:
{
}

loc_804C2524:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804C253C;
    }
}

loc_804C2528:
{
    r4 = r31;
    r5 = r29;
    r7 = 0;
    ctx->lr = 0x804C2538u;
    if constexpr (KnownRegArgsCpuCall<0x804C2250u>(&func_804C2250)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_804C2250_BC4 = func_804C2250_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804C2250_BC4);
        r4 = static_cast<uint32_t>(regargs_result_804C2250_BC4 >> 32);
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
    goto loc_804C2540;
}

loc_804C253C:
{
    r3 = 0;
}

loc_804C2540:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_804C2480(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C2480_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C2480 func_804C2480 preserves=true fpr_mask=0x00000000
