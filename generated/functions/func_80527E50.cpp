#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80528E50(CpuContext* ctx);
extern "C" uint64_t func_80528E50_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80527E50_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_mdest_0 = 0;
    uint32_t r28_mdest_1 = 0;
    uint32_t r28_mdest_2 = 0;
    uint32_t r28_mrot_0 = 0;
    uint32_t r28_mrot_1 = 0;
    uint32_t r28_mrot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80527E50;

loc_80527E50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    ctx->lr = 0x80527E7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80528E50u>(&func_80528E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80528E50_8AA = func_80528E50_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80528E50_8AA);
        r4 = static_cast<uint32_t>(regargs_result_80528E50_8AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80528E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80527E80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80527F24;
    }
}

loc_80527E84:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r27);
    r9 = 0x80520000u;
    r12 = 33;
    r11 = 10;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r30);
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(8));
    r28_mrot_0 = (r28_rot_0 & 65280);
    r28_mdest_0 = (r28 & -65281);
    r28 = (r28_mdest_0 | r28_mrot_0);
    r0 = 0;
    r5 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r31);
    r10 = r3;
    r9 = (r9 + 31936);
    r4 = 2;
    r6 = MemoryInline::FlatRead8((r27 + 11));
    r7 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 12), static_cast<uint8_t>(r6));
    r6 = 32;
    r8 = 0;
    r31 = MemoryInline::FlatRead32(r27);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r31);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 20), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 21), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 22), static_cast<uint16_t>(r28));
    r11 = MemoryInline::FlatRead8((r27 + 8));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), r11);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 26), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r27);
    r3 = MemoryInline::FlatRead32((r13 + -13344));
    r3 = MemoryInline::FlatRead32((r3 + 15040));
    ctx->lr = 0x80527EF8u;
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
    ctx->gpr[12] = r12;
    InvokeDirectCpu<0x804BCE70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
}

loc_80527EFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80527F0C;
    }
}

loc_80527F00:
{
}

loc_80527F04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-8))) {
        goto loc_80527F14;
    }
}

loc_80527F08:
{
    goto loc_80527F1C;
}

loc_80527F0C:
{
    r3 = 0;
    goto loc_80527F28;
}

loc_80527F14:
{
    r3 = -5;
    goto loc_80527F28;
}

loc_80527F1C:
{
    r3 = -4;
    goto loc_80527F28;
}

loc_80527F24:
{
    r3 = -5;
}

loc_80527F28:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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

extern "C" void func_80527E50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80527E50_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80527E50 func_80527E50 preserves=true fpr_mask=0x00000000
