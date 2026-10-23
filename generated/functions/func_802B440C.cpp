#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802B440C_ra38_1f2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_802B440C;

loc_802B440C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r27 = r5;
    r3 = (r1 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = 0;
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_802B4444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802B4450;
    }
}

loc_802B4448:
{
}

loc_802B444C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_802B448C;
    }
}

loc_802B4450:
{
    r0 = (r29 & 255);
}

loc_802B4458:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_802B448C;
    }
}

loc_802B445C:
{
    r3 = 0x805D0000u;
    r30 = (r3 + -68);
    r3 = 0x805D0000u;
    r4 = (r3 + -80);
    r0 = (r27 & 65535);
    r0 = (r0 & 1);
}

loc_802B4478:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 176);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B448C;
    }
}

loc_802B4484:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 160);
}

loc_802B448C:
{
}

loc_802B4490:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802B4608;
    }
}

loc_802B4494:
{
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802B44A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802B44CC;
    }
}

loc_802B44A8:
{
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802B44B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802B44CC;
    }
}

loc_802B44B8:
{
    r0 = 2;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802B44C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802B44CC;
    }
}

loc_802B44C8:
{
    r0 = 3;
}

loc_802B44CC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r31 = MemoryInline::FlatRead32(r3_addr_1);
    r4 = (r27 & 65535);
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r0 = (r4 - r0);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r0 = (r4 & 16);
}

loc_802B4504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B4558;
    }
}

loc_802B4508:
{
    r0 = 0;
    r3 = (r3 & 255);
    r3 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    r3 = (r3 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802B4528:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(3))) {
        goto loc_802B4530;
    }
}

loc_802B452C:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
}

loc_802B4530:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r3 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r3));
    r3 = (r3 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802B454C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(3))) {
        goto loc_802B45A4;
    }
}

loc_802B4550:
{
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_802B45A4;
}

loc_802B4558:
{
    r0 = 2;
    r3 = (r3 & 255);
    r3 = (r3 + -1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    r3 = (r3 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802B4578:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_802B4580;
    }
}

loc_802B457C:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
}

loc_802B4580:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r3 = (r3 + -1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r3));
    r3 = (r3 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802B459C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_802B45A4;
    }
}

loc_802B45A0:
{
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
}

loc_802B45A4:
{
    r27 = 0;
    r28 = (r1 + 8);
    goto loc_802B45F8;
}

loc_802B45B0:
{
    r3 = (r1 + 12);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005001C_1C55 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_1C55;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 12);
    r4 = (r29 & 255);
    r0 = (r27 & 255);
    r28_addr_2 = (r28 + r0);
    r0 = MemoryInline::FlatRead8(r28_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 10);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r6 + 136));
    ctr = r12;
    ctx->lr = 0x802B45F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = (r31 + 1);
    r27 = (r27 + 1);
}

loc_802B45F8:
{
    r4 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_802B4604:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802B45B0;
    }
}

loc_802B4608:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B440C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B440C_ra38_1f2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FF3 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B440C func_802B440C preserves=true fpr_mask=0x00000000
