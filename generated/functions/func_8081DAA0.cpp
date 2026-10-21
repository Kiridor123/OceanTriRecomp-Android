#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBD80(CpuContext* ctx);
extern "C" uint64_t func_804CBD80_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8081DAA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8081DAA0u);
    goto loc_8081DAA0;

loc_8081DAA0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80870000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = MemoryInline::FlatRead32((r5 + -32336));
}

loc_8081DABC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8081DB70;
    }
}

loc_8081DAC0:
{
}

loc_8081DAC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8081DAE4;
    }
}

loc_8081DAC8:
{
}

loc_8081DACC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-3))) {
        goto loc_8081DAF8;
    }
}

loc_8081DAD0:
{
}

loc_8081DAD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_8081DB0C;
    }
}

loc_8081DAD8:
{
}

loc_8081DADC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-2))) {
        goto loc_8081DB20;
    }
}

loc_8081DAE0:
{
    goto loc_8081DB70;
}

loc_8081DAE4:
{
    r0 = (r3 * 104);
    r4 = 1;
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 98), static_cast<uint8_t>(r4));
    goto loc_8081DB70;
}

loc_8081DAF8:
{
    r0 = (r3 * 104);
    r4 = 0;
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 98), static_cast<uint8_t>(r4));
    goto loc_8081DB70;
}

loc_8081DB0C:
{
    r0 = (r3 * 104);
    r4 = 0;
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 98), static_cast<uint8_t>(r4));
    goto loc_8081DB70;
}

loc_8081DB20:
{
    r0 = (r3 * 104);
    r4 = r3;
    r31 = (r5 + r0);
    r3 = r31;
    // inline leaf 0x804CC2B0 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x804CC2B0
    r3 = r31;
    ctx->lr = 0x8081DB3Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804CBE80_AC9 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_AC9);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_AC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r4 = 0x80000000u;
    r7 = 0x80820000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + -9616);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r3 = r31;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 67108863);
    r6 = (r0 * 50);
    ctx->lr = 0x8081DB70u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        const auto regargs_result_804CBD80_10A3 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_10A3);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_10A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8081DB70:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081DAA0 func_8081DAA0 preserves=true fpr_mask=0x00000000
