#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AA8C8(CpuContext* ctx);
extern "C" uint64_t func_802AA8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AA9E0(CpuContext* ctx);
extern "C" uint64_t func_802AA9E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809F652C(CpuContext* MKW_RESTRICT ctx)
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_809F652C;

loc_809F652C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f31.d);
    r28 = r3;
    r29 = r4;
    f31.d = f1.d;
    r3 = (r1 + 8);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = 92;
    ctx->lr = 0x809F6568u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_802AA7C8_921 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_921);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_921 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r31 = r3;
}

loc_809F6570:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809F677C;
    }
}

loc_809F6574:
{
    r4 = 0x809F0000u;
    r0 = (r4 + 27468);
    MemoryInline::FlatWriteRam32((r3 + 248), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + 27392);
    MemoryInline::FlatWriteRam32((r3 + 252), r0);
    r30 = MemoryInline::FlatRead32((r3 + 256));
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 40), r0);
    r3 = (r30 + 44);
    r4 = MemoryInline::FlatRead32((r30 + 40));
    ctx->lr = 0x809F65A4u;
    if constexpr (KnownRegArgsCpuCall<0x802AA9E0u>(&func_802AA9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_802AA9E0_EDB = func_802AA9E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA9E0_EDB);
        r4 = static_cast<uint32_t>(regargs_result_802AA9E0_EDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AA9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r30 + 40));
}

loc_809F65AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_809F65BC;
    }
}

loc_809F65B0:
{
    r3 = r31;
    ctx->lr = 0x809F65B8u;
    if constexpr (KnownRegArgsCpuCall<0x802AA8C8u>(&func_802AA8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_802AA8C8_1331 = func_802AA8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AA8C8_1331);
        r4 = static_cast<uint32_t>(regargs_result_802AA8C8_1331 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AA8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_809F677C;
}

loc_809F65BC:
{
    r3 = (r30 + 80);
    r4 = 1;
    ctx->lr = 0x809F65C8u;
    if constexpr (KnownRegArgsCpuCall<0x802AA9E0u>(&func_802AA9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_802AA9E0_1923 = func_802AA9E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA9E0_1923);
        r4 = static_cast<uint32_t>(regargs_result_802AA9E0_1923 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AA9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_809F65CC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_809F65DC;
    }
}

loc_809F65D0:
{
    r3 = r31;
    ctx->lr = 0x809F65D8u;
    if constexpr (KnownRegArgsCpuCall<0x802AA8C8u>(&func_802AA8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_802AA8C8_1D4B = func_802AA8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AA8C8_1D4B);
        r4 = static_cast<uint32_t>(regargs_result_802AA8C8_1D4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AA8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_809F677C;
}

loc_809F65DC:
{
    r0 = (r29 & 127);
}

loc_809F65E4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(41))) {
        goto loc_809F6600;
    }
}

loc_809F65E8:
{
    r3 = 0x80A30000u;
    r3 = (r3 + -19992);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x809F6600u:
        goto loc_809F6600;
        break;
    case 0x809F6608u:
        goto loc_809F6608;
        break;
    case 0x809F6610u:
        goto loc_809F6610;
        break;
    case 0x809F6618u:
        goto loc_809F6618;
        break;
    case 0x809F6620u:
        goto loc_809F6620;
        break;
    case 0x809F6628u:
        goto loc_809F6628;
        break;
    case 0x809F6630u:
        goto loc_809F6630;
        break;
    case 0x809F6638u:
        goto loc_809F6638;
        break;
    case 0x809F6640u:
        goto loc_809F6640;
        break;
    case 0x809F6648u:
        goto loc_809F6648;
        break;
    case 0x809F6650u:
        goto loc_809F6650;
        break;
    case 0x809F6658u:
        goto loc_809F6658;
        break;
    case 0x809F6660u:
        goto loc_809F6660;
        break;
    case 0x809F6668u:
        goto loc_809F6668;
        break;
    case 0x809F6670u:
        goto loc_809F6670;
        break;
    case 0x809F6678u:
        goto loc_809F6678;
        break;
    case 0x809F6680u:
        goto loc_809F6680;
        break;
    case 0x809F6688u:
        goto loc_809F6688;
        break;
    case 0x809F6690u:
        goto loc_809F6690;
        break;
    case 0x809F6698u:
        goto loc_809F6698;
        break;
    case 0x809F66A0u:
        goto loc_809F66A0;
        break;
    case 0x809F66A8u:
        goto loc_809F66A8;
        break;
    case 0x809F66B0u:
        goto loc_809F66B0;
        break;
    case 0x809F66B8u:
        goto loc_809F66B8;
        break;
    case 0x809F66C0u:
        goto loc_809F66C0;
        break;
    case 0x809F66C8u:
        goto loc_809F66C8;
        break;
    case 0x809F66D0u:
        goto loc_809F66D0;
        break;
    case 0x809F66D8u:
        goto loc_809F66D8;
        break;
    case 0x809F66E0u:
        goto loc_809F66E0;
        break;
    case 0x809F66E8u:
        goto loc_809F66E8;
        break;
    case 0x809F6748u:
        goto loc_809F6748;
        break;
    case 0x809F6750u:
        goto loc_809F6750;
        break;
    case 0x809F6758u:
        goto loc_809F6758;
        break;
    case 0x809F6760u:
        goto loc_809F6760;
        break;
    case 0x809F6708u:
        goto loc_809F6708;
        break;
    case 0x809F6724u:
        goto loc_809F6724;
        break;
    case 0x809F6768u:
        goto loc_809F6768;
        break;
    case 0x809F6740u:
        goto loc_809F6740;
        break;
    case 0x809F66F0u:
        goto loc_809F66F0;
        break;
    case 0x809F66F8u:
        goto loc_809F66F8;
        break;
    case 0x809F6700u:
        goto loc_809F6700;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_809F6600:
{
    r5 = 0;
    goto loc_809F676C;
}

loc_809F6608:
{
    r5 = 1;
    goto loc_809F676C;
}

loc_809F6610:
{
    r5 = 2;
    goto loc_809F676C;
}

loc_809F6618:
{
    r5 = 3;
    goto loc_809F676C;
}

loc_809F6620:
{
    r5 = 4;
    goto loc_809F676C;
}

loc_809F6628:
{
    r5 = 5;
    goto loc_809F676C;
}

loc_809F6630:
{
    r5 = 6;
    goto loc_809F676C;
}

loc_809F6638:
{
    r5 = 7;
    goto loc_809F676C;
}

loc_809F6640:
{
    r5 = 8;
    goto loc_809F676C;
}

loc_809F6648:
{
    r5 = 9;
    goto loc_809F676C;
}

loc_809F6650:
{
    r5 = 10;
    goto loc_809F676C;
}

loc_809F6658:
{
    r5 = 11;
    goto loc_809F676C;
}

loc_809F6660:
{
    r5 = 12;
    goto loc_809F676C;
}

loc_809F6668:
{
    r5 = 13;
    goto loc_809F676C;
}

loc_809F6670:
{
    r5 = 14;
    goto loc_809F676C;
}

loc_809F6678:
{
    r5 = 15;
    goto loc_809F676C;
}

loc_809F6680:
{
    r5 = 16;
    goto loc_809F676C;
}

loc_809F6688:
{
    r5 = 17;
    goto loc_809F676C;
}

loc_809F6690:
{
    r5 = 18;
    goto loc_809F676C;
}

loc_809F6698:
{
    r5 = 19;
    goto loc_809F676C;
}

loc_809F66A0:
{
    r5 = 20;
    goto loc_809F676C;
}

loc_809F66A8:
{
    r5 = 21;
    goto loc_809F676C;
}

loc_809F66B0:
{
    r5 = 22;
    goto loc_809F676C;
}

loc_809F66B8:
{
    r5 = 23;
    goto loc_809F676C;
}

loc_809F66C0:
{
    r5 = 24;
    goto loc_809F676C;
}

loc_809F66C8:
{
    r5 = 25;
    goto loc_809F676C;
}

loc_809F66D0:
{
    r5 = 26;
    goto loc_809F676C;
}

loc_809F66D8:
{
    r5 = 27;
    goto loc_809F676C;
}

loc_809F66E0:
{
    r5 = 28;
    goto loc_809F676C;
}

loc_809F66E8:
{
    r5 = 29;
    goto loc_809F676C;
}

loc_809F66F0:
{
    r5 = 30;
    goto loc_809F676C;
}

loc_809F66F8:
{
    r5 = 31;
    goto loc_809F676C;
}

loc_809F6700:
{
    r5 = 32;
    goto loc_809F676C;
}

loc_809F6708:
{
    r0 = MemoryInline::FlatRead8((r28 + 9));
}

loc_809F6710:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_809F671C;
    }
}

loc_809F6714:
{
    r5 = 33;
    goto loc_809F676C;
}

loc_809F671C:
{
    r5 = 42;
    goto loc_809F676C;
}

loc_809F6724:
{
    r0 = MemoryInline::FlatRead8((r28 + 9));
}

loc_809F672C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_809F6738;
    }
}

loc_809F6730:
{
    r5 = 34;
    goto loc_809F676C;
}

loc_809F6738:
{
    r5 = 43;
    goto loc_809F676C;
}

loc_809F6740:
{
    r5 = 35;
    goto loc_809F676C;
}

loc_809F6748:
{
    r5 = 36;
    goto loc_809F676C;
}

loc_809F6750:
{
    r5 = 37;
    goto loc_809F676C;
}

loc_809F6758:
{
    r5 = 38;
    goto loc_809F676C;
}

loc_809F6760:
{
    r5 = 39;
    goto loc_809F676C;
}

loc_809F6768:
{
    r5 = 40;
}

loc_809F676C:
{
    r3 = r31;
    r4 = r28;
    f1.d = f31.d;
    ctx->lr = 0x809F677Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x809F67A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f31 = ctx->fpr[31];
}

loc_809F677C:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809F652C func_809F652C preserves=true fpr_mask=0x00000000
