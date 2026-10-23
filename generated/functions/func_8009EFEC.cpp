#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009EFEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8009F270_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8009EFEC;

loc_8009EFEC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    f31.d = f1.d;
    r27 = r8;
    r28 = r9;
    r29 = r10;
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r8 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009F054:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F06C;
    }
}

loc_8009F058:
{
    r3 = (r8 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009F064:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F06C;
    }
}

loc_8009F068:
{
    r10 = 0;
}

loc_8009F06C:
{
}

loc_8009F070:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009F088;
    }
}

loc_8009F074:
{
    r3 = (r8 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009F080:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F088;
    }
}

loc_8009F084:
{
    r9 = 0;
}

loc_8009F088:
{
}

loc_8009F08C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009F0A0;
    }
}

loc_8009F090:
{
    r0 = (r11 + 1073741824);
}

loc_8009F098:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F0A0;
    }
}

loc_8009F09C:
{
    r7 = 0;
}

loc_8009F0A0:
{
}

loc_8009F0A4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009F0BC;
    }
}

loc_8009F0A8:
{
    r3 = (r8 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009F0B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F0BC;
    }
}

loc_8009F0B8:
{
    r6 = 0;
}

loc_8009F0BC:
{
}

loc_8009F0C0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009F0D8;
    }
}

loc_8009F0C4:
{
    r3 = (r8 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009F0D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F0D8;
    }
}

loc_8009F0D4:
{
    r5 = 0;
}

loc_8009F0D8:
{
}

loc_8009F0DC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009F0F4;
    }
}

loc_8009F0E0:
{
    r3 = (r8 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009F0EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F0F4;
    }
}

loc_8009F0F0:
{
    r4 = 0;
}

loc_8009F0F4:
{
}

loc_8009F0F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009F11C;
    }
}

loc_8009F0FC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 10860);
    r4 = 497;
    r5 = 0x80590000u;
    r5 = (r5 + 10804);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009F11Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009F11C:
{
    r3 = (r29 + r30);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r3);
    r31 = (static_cast<int32_t>(r0) >> 1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r0 = (r26 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31412));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009F158:
{
    r4 = cr;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r29 * r28);
    r27_addr_0 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_0);
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_8009F170:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009F184;
    }
}

loc_8009F174:
{
    MemoryInline::FlatWrite32(r22, r29);
    r0 = 1;
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r0));
    goto loc_8009F26C;
}

loc_8009F184:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009F1C0;
    }
}

loc_8009F188:
{
    MemoryInline::FlatWrite32(r22, r29);
}

loc_8009F190:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r30))) {
        goto loc_8009F1A0;
    }
}

loc_8009F194:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r0));
    goto loc_8009F26C;
}

loc_8009F1A0:
{
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r4));
}

loc_8009F1A8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009F26C;
    }
}

loc_8009F1AC:
{
    r0 = (r29 + 1);
    r0 = (r0 * r28);
    r27_addr_1 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_1);
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r0));
    goto loc_8009F26C;
}

loc_8009F1C0:
{
    r0 = (r30 * r28);
    r27_addr_2 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_2);
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r0));
}

loc_8009F1D0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r26))) {
        goto loc_8009F1E4;
    }
}

loc_8009F1D4:
{
    MemoryInline::FlatWrite32(r22, r30);
    r0 = 1;
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r0));
    goto loc_8009F26C;
}

loc_8009F1E4:
{
    r0 = (r31 * r28);
    r27_addr_3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_3);
    goto loc_8009F258;
}

loc_8009F1F0:
{
}

loc_8009F1F4:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r0))) {
        goto loc_8009F224;
    }
}

loc_8009F1F8:
{
    MemoryInline::FlatWrite32(r22, r31);
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r4));
}

loc_8009F204:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009F26C;
    }
}

loc_8009F208:
{
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32(r22);
    r0 = (r3 + 1);
    r0 = (r0 * r28);
    r27_addr_5 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_5);
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r0));
    goto loc_8009F26C;
}

loc_8009F224:
{
}

loc_8009F228:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r26))) {
        goto loc_8009F238;
    }
}

loc_8009F22C:
{
    r29 = r31;
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    goto loc_8009F240;
}

loc_8009F238:
{
    r30 = r31;
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r0));
}

loc_8009F240:
{
    r3 = (r29 + r30);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r31 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r31 * r28);
    r27_addr_6 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_6);
}

loc_8009F258:
{
}

loc_8009F25C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r31))) {
        goto loc_8009F1F0;
    }
}

loc_8009F260:
{
    MemoryInline::FlatWrite32(r22, r29);
    r0 = 0;
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r0));
}

loc_8009F26C:
{
    r0 = 72;
    addr_psqx_8009F270_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009F270_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000EFB gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009EFEC func_8009EFEC preserves=true fpr_mask=0x00000000
