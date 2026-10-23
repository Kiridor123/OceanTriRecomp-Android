#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008C4E8(CpuContext* ctx);
extern "C" uint32_t func_8008C4E8_ra58_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80098DC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_80098DC0;

loc_80098DC0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r28 = r3;
    r30 = r4;
}

loc_80098DE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80098E08;
    }
}

loc_80098DEC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 7552);
    r4 = 32;
    r5 = 0x80590000u;
    r5 = (r5 + 7568);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80098E08u;
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
}

loc_80098E08:
{
    r3 = r28;
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_80098E14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80098E34;
    }
}

loc_80098E18:
{
    r3 = 0x80590000u;
    r3 = (r3 + 7552);
    r4 = 33;
    r5 = 0x80590000u;
    r5 = (r5 + 7608);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80098E34u;
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
}

loc_80098E34:
{
    r3 = r28;
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_80098E40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80098FB0;
    }
}

loc_80098E44:
{
    r31 = MemoryInline::FlatRead32(r30);
    r3 = r28;
    // inline leaf 0x8005D128 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8005D128
    r28 = r3;
    r0 = (r31 & 128);
}

loc_80098E5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098EB0;
    }
}

loc_80098E60:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r3 & 8);
}

loc_80098E6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098E88;
    }
}

loc_80098E70:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31576));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    r31 = (r31 | 24);
    goto loc_80098EB0;
}

loc_80098E88:
{
    r0 = (r3 & 16);
}

loc_80098E90:
{
    r29 = (r31 & -17);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098E9C;
    }
}

loc_80098E98:
{
    r29 = (r31 | 16);
}

loc_80098E9C:
{
    r3 = (r30 + 4);
    r4 = (r28 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = -11;
    r31 = (r29 & r0);
}

loc_80098EB0:
{
    r0 = (r31 & 256);
}

loc_80098EB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098F28;
    }
}

loc_80098EBC:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 72));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0 = (r0 & 4);
}

loc_80098EDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098EF0;
    }
}

loc_80098EE0:
{
    r3 = (r30 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r31 = (r31 | 32);
    goto loc_80098F0C;
}

loc_80098EF0:
{
    r3 = (r30 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 48));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 52));
    if constexpr (KnownRegArgsCpuCall<0x8008C4E8u>(&func_8008C4E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8008C4E8_1973 = func_8008C4E8_ra58_1fe_10_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_8008C4E8_1973;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008C4E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r0 = -39;
    r31 = (r31 & r0);
}

loc_80098F0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    r31 = (r31 | -2147483648);
}

loc_80098F28:
{
    r0 = (r31 & 512);
}

loc_80098F30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098F7C;
    }
}

loc_80098F34:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r0 = (r0 & 2);
}

loc_80098F40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098F5C;
    }
}

loc_80098F44:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31572));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    r31 = (r31 | 64);
    goto loc_80098F7C;
}

loc_80098F5C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 60));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 64));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    r0 = -71;
    r31 = (r31 & r0);
}

loc_80098F7C:
{
    r0 = (r31 & 32);
}

loc_80098F84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098FA8;
    }
}

loc_80098F88:
{
    r0 = (r31 & 64);
}

loc_80098F90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098FA8;
    }
}

loc_80098F94:
{
    r31 = (r31 | 4);
    r0 = (r31 & 8);
}

loc_80098FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80098FA8;
    }
}

loc_80098FA4:
{
    r31 = (r31 | 2);
}

loc_80098FA8:
{
    r0 = (r31 & -897);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_80098FB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80098DC0 func_80098DC0 preserves=true fpr_mask=0x00000000
