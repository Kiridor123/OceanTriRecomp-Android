#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_804B7820(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B7820u);
    goto loc_804B7820;

loc_804B7820:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2440));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_6CC = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_6CC;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r6 = 0;
    r5 = 78;
    r8 = (r3 & 511);
    r6_mrot_0 = (r3 & 511);
    r6_mdest_0 = (r6 & -512);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r7 = MemoryInline::FlatRead32((r2 + -2480));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r6_mrot_1 = (r6_rot_0 & -16777216);
    r6_mdest_1 = (r6 & 16777215);
    r6 = (r6_mdest_1 | r6_mrot_1);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r3 = 0;
    r0 = (r8 + -129);
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r3));
    r4 = (256 - r8);
    r3 = (r8 + -256);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(126));
}

loc_804B7878:
{
    r3 = (r4 | r3);
    r0 = MemoryInline::FlatRead32((r7 + 572));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r0_mrot_0 = (r0_rot_0 & 1024);
    r0_mdest_0 = (r0 & -1025);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r7 + 572), r0);
    r0 = MemoryInline::FlatRead32((r7 + 564));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r3 = (r3_rot_0 & 1023);
    r4 = (r3 + 1);
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r3 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r3 = (r3 + 1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804B78D0;
    }
}

loc_804B78A8:
{
    goto loc_804B78B4;
}

loc_804B78B0:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r8 = (r8_rot_2 & 2147483647);
}

loc_804B78B4:
{
    r0 = (r8 & 1);
}

loc_804B78B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B78B0;
    }
}

loc_804B78BC:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r0 = (r0 * r8);
    r0 = (r4 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B78D0;
    }
}

loc_804B78CC:
{
    r3 = (r3 + 1);
}

loc_804B78D0:
{
}

loc_804B78D4:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1024))) {
        goto loc_804B78DC;
    }
}

loc_804B78D8:
{
    r3 = 1024;
}

loc_804B78DC:
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
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000019E gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B7820 func_804B7820 preserves=true fpr_mask=0x00000000
