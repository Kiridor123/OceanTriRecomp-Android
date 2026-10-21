#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050D7C(CpuContext* ctx);
extern "C" uint64_t func_80050D7C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" void func_80A05A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80A05A3Cu);
    goto loc_80A05A3C;

loc_80A05A3C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r3 = (r1 + 32);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r28 + 256));
    r4 = (r4 + 4);
    r5 = (r28 + 24);
    ctx->lr = 0x80A05A84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x809EF924u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = (r1 + 32);
    r4 = (r1 + 8);
    ctx->lr = 0x80A05A90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r1 + 24);
    ctx->lr = 0x80A05AA0u;
    if constexpr (KnownRegArgsCpuCall<0x80050D7Cu>(&func_80050D7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80050D7C_8FA = func_80050D7C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050D7C_8FA);
        r4 = static_cast<uint32_t>(regargs_result_80050D7C_8FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050D7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r4 = (r0 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r3 - r0);
    r5 = (r0 & 65535);
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r4 - r0);
    r4 = (r0 & 65535);
    r0 = (r29 & 255);
}

loc_80A05AD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80A05AF0;
    }
}

loc_80A05ADC:
{
}

loc_80A05AE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A05AFC;
    }
}

loc_80A05AE4:
{
}

loc_80A05AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A05B08;
    }
}

loc_80A05AEC:
{
    goto loc_80A05B10;
}

loc_80A05AF0:
{
    r6 = 1280;
    r7 = 512;
    goto loc_80A05B10;
}

loc_80A05AFC:
{
    r6 = 2560;
    r7 = 512;
    goto loc_80A05B10;
}

loc_80A05B08:
{
    r6 = 4608;
    r7 = 1024;
}

loc_80A05B10:
{
    r3 = 65536;
    r0 = (r3 + -32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80A05B1C:
{
    r0 = r5;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80A05B2C;
    }
}

loc_80A05B24:
{
    r0 = (0 - r5);
    r0 = (r0 & 65535);
}

loc_80A05B2C:
{
}

loc_80A05B30:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r6))) {
        goto loc_80A05B38;
    }
}

loc_80A05B34:
{
    r6 = r0;
}

loc_80A05B38:
{
    r3 = 65536;
    r0 = (r3 + -32768);
}

loc_80A05B44:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_80A05B58;
    }
}

loc_80A05B48:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 - r6);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_80A05B64;
}

loc_80A05B58:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_80A05B64:
{
    r3 = 65536;
    r0 = (r3 + -32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80A05B70:
{
    r0 = r4;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80A05B80;
    }
}

loc_80A05B78:
{
    r0 = (0 - r4);
    r0 = (r0 & 65535);
}

loc_80A05B80:
{
}

loc_80A05B84:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_80A05B8C;
    }
}

loc_80A05B88:
{
    r7 = r0;
}

loc_80A05B8C:
{
    r3 = 65536;
    r0 = (r3 + -32768);
}

loc_80A05B98:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80A05BAC;
    }
}

loc_80A05B9C:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 - r7);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_80A05BB8;
}

loc_80A05BAC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_80A05BB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FF8 fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A05A3C func_80A05A3C preserves=true fpr_mask=0x00000000
