#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80498E28(CpuContext* ctx);
extern "C" uint64_t func_80498E28_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8047FEC4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8047FEC4u);
    goto loc_8047FEC4;

loc_8047FEC4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r3 = (r1 + 8);
    r31 = 0;
    r4 = 0;
    r5 = 30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r30 = 0x80740000u;
    r29 = 0x80740000u;
    r30 = (r30 + -6152);
    r27 = 0;
    r29 = (r29 + -18168);
}

loc_8047FF00:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 8160);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 40));
}

loc_8047FF10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047FF80;
    }
}

loc_8047FF14:
{
    r0 = MemoryInline::FlatRead8((r3 + 44));
}

loc_8047FF1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8047FF80;
    }
}

loc_8047FF20:
{
    r4 = MemoryInline::FlatRead8((r3 + 38));
    r0 = (r31 & 255);
    r5 = (r0 * 6);
    r28 = (r1 + 8);
    r3 = 0;
    r28 = (r28 + r5);
    r0 = (r4 * 52);
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r4));
    r4 = (r30 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 22));
    if constexpr (KnownRegArgsCpuCall<0x80498E28u>(&func_80498E28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80498E28_B20 = func_80498E28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80498E28_B20);
        r4 = static_cast<uint32_t>(regargs_result_80498E28_B20 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80498E28u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8047FF50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047FF7C;
    }
}

loc_8047FF54:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8047FF5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047FF7C;
    }
}

loc_8047FF60:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8047FF68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047FF7C;
    }
}

loc_8047FF6C:
{
    r0 = MemoryInline::FlatRead16((r3 + 76));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
}

loc_8047FF7C:
{
    r31 = (r31 + 1);
}

loc_8047FF80:
{
    r27 = (r27 + 1);
}

loc_8047FF88:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(16))) {
        goto loc_8047FF00;
    }
}

loc_8047FF8C:
{
    r4 = 0x80740000u;
    r3 = 0x80740000u;
    r4 = (r4 + -5120);
    r0 = (r31 & 255);
    r3 = (r3 + -18168);
    r6 = MemoryInline::FlatRead16((r4 + 4));
    r5 = MemoryInline::FlatRead16((r4 + 2));
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r3 + 548));
    r3 = 15;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    ctr = r12;
    ctx->lr = 0x8047FFC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047FEC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047FEC4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FBF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047FEC4 func_8047FEC4 preserves=true fpr_mask=0x00000000
