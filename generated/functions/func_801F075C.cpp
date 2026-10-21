#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802146B8(CpuContext* ctx);
extern "C" uint64_t func_802146B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801F075C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801F075Cu);
    goto loc_801F075C;

loc_801F075C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 1);
    r31 = (0 - r0);
    // inline leaf 0x801EF7A0 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r0 * 100);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 10);
    r0 = (r5 + r4);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // end of inlined leaf 0x801EF7A0
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3584));
}

loc_801F07A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F07AC;
    }
}

loc_801F07A4:
{
    r0 = (r31 + -1);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801F07AC:
{
    r3 = MemoryInline::FlatRead16((r30 + 22));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
}

loc_801F07B8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_801F081C;
    }
}

loc_801F07BC:
{
    r0 = MemoryInline::FlatRead8((r30 + 33));
}

loc_801F07C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801F07DC;
    }
}

loc_801F07C8:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_801F07D0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(2))) {
        goto loc_801F07DC;
    }
}

loc_801F07D4:
{
    r0 = (r3 + -2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
}

loc_801F07DC:
{
    r29 = MemoryInline::FlatRead16((r30 + 44));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r30 + 44);
    r0 = (r31 + 4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    r6 = 0;
    r7 = -1;
    r8 = 0;
    r9 = -1;
    r10 = 3;
    ctx->lr = 0x801F0810u;
    if constexpr (KnownRegArgsCpuCall<0x802146B8u>(&func_802146B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_802146B8_E37 = func_802146B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802146B8_E37);
        r4 = static_cast<uint32_t>(regargs_result_802146B8_E37 >> 32);
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x802146B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 33), static_cast<uint8_t>(r0));
    goto loc_801F0878;
}

loc_801F081C:
{
    r0 = MemoryInline::FlatRead8((r30 + 33));
}

loc_801F0824:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801F083C;
    }
}

loc_801F0828:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_801F0830:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(2))) {
        goto loc_801F083C;
    }
}

loc_801F0834:
{
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
}

loc_801F083C:
{
    r29 = MemoryInline::FlatRead16((r30 + 44));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r30 + 44);
    r0 = (r31 + 6);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    r6 = 0;
    r7 = -1;
    r8 = 0;
    r9 = -1;
    r10 = 3;
    ctx->lr = 0x801F0870u;
    if constexpr (KnownRegArgsCpuCall<0x802146B8u>(&func_802146B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        const auto regargs_result_802146B8_16A4 = func_802146B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802146B8_16A4);
        r4 = static_cast<uint32_t>(regargs_result_802146B8_16A4 >> 32);
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x802146B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 33), static_cast<uint8_t>(r0));
}

loc_801F0878:
{
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r29));
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F075C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F075C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F075C func_801F075C preserves=true fpr_mask=0x00000000
