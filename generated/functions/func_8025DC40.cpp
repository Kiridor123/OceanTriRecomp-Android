#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A288(CpuContext* ctx);
extern "C" uint64_t func_8026A288_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" void func_8025DC40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8025DC40;

loc_8025DC40:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r4 = 10;
    // inline leaf 0x80277CAC (2 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 918), 0, 723u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 490u, (r3 + 1408), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x80277CAC
    r3 = r29;
    r4 = 10;
    // inline leaf 0x80277BA8 (2 guest instruction(s))
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 918), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x80277BA8
    r3 = r29;
    // inline leaf 0x8027A1E0 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 592u, (r3 + 1510), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 591u, (r3 + 1509), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 594u, (r3 + 1512), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8027A1E0
    r3 = r29;
    // inline leaf 0x8027AC70 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 549u, (r3 + 1467), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8027AC70
    r31 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 550u, (r29 + 1468), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 551u, (r29 + 1469), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 722u, (r29 + 1640), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 552u, (r29 + 1470), static_cast<uint8_t>(r31));
    r3 = r29;
    r4 = 2048;
    // inline leaf 0x8026FF54 (12 guest instruction(s))
}

loc_inl4_0x8026FF54:
{
    r0 = (r4 & -2147483648);
}

loc_inl4_0x8026FF5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8026FF70;
    }
}

loc_inl4_0x8026FF60:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 860), r0);
    goto loc_inl4_cont_8026FF54;
}

loc_inl4_0x8026FF70:
{
    r5 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r0 = (r5 & ~r0);
    MemoryInline::FlatWrite32((r3 + 864), r0);
}

loc_inl4_cont_8026FF54:
{
    // end of inlined leaf 0x8026FF54
    r3 = MemoryInline::FlatRead8((r29 + 5));
}

loc_8025DCAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8025DCC4;
    }
}

loc_8025DCB0:
{
}

loc_8025DCB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8025DD48;
    }
}

loc_8025DCB8:
{
}

loc_8025DCBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8025DD7C;
    }
}

loc_8025DCC0:
{
    goto loc_8025DD84;
}

loc_8025DCC4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 119), static_cast<uint8_t>(r0));
    r0 = 300;
    MemoryInline::FlatWrite32((r29 + 40), r0);
    MemoryInline::FlatWrite8((r29 + 24), static_cast<uint8_t>(r31));
}

loc_8025DCE4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8025DD1C;
    }
}

loc_8025DCE8:
{
    r3 = r29;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8025DCFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80275B68u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r29;
    r4 = 210;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x8025DD10u;
    if constexpr (KnownRegArgsCpuCall<0x8026A288u>(&func_8026A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8026A288_147B = func_8026A288_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A288_147B);
        r4 = static_cast<uint32_t>(regargs_result_8026A288_147B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8026A288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    f0.d = MemoryInline::FlatReadFloat32((r29 + 96));
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    goto loc_8025DD84;
}

loc_8025DD1C:
{
    r3 = r29;
    r4 = 3;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8025DD30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80275B68u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r29;
    r4 = 259;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x8025DD44u;
    if constexpr (KnownRegArgsCpuCall<0x8026A288u>(&func_8026A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8026A288_1CE5 = func_8026A288_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A288_1CE5);
        r4 = static_cast<uint32_t>(regargs_result_8026A288_1CE5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8026A288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8025DD84;
}

loc_8025DD48:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8025DD54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025DD84;
    }
}

loc_8025DD58:
{
    r3 = MemoryInline::FlatRead32((r29 + 40));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 40), r0);
}

loc_8025DD68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8025DD84;
    }
}

loc_8025DD6C:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_8025DD84;
}

loc_8025DD7C:
{
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r31));
}

loc_8025DD84:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8025DC40 func_8025DC40 preserves=true fpr_mask=0x00000000
