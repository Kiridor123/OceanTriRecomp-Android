#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A0228(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800A0228u);
    goto loc_800A0228;

loc_800A0228:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_800A0238:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A0244;
    }
}

loc_800A023C:
{
    f1.d = f2.d;
    goto loc_800A034C;
}

loc_800A0244:
{
    r0 = (r3 & 255);
    r4 = (r0 & 3);
}

loc_800A0250:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800A0268;
    }
}

loc_800A0254:
{
}

loc_800A0258:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_800A0278;
    }
}

loc_800A025C:
{
}

loc_800A0260:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_800A0324;
    }
}

loc_800A0264:
{
    goto loc_800A032C;
}

loc_800A0268:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    goto loc_800A034C;
}

loc_800A0278:
{
}

loc_800A027C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800A02A8;
    }
}

loc_800A0280:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31428));
    f4.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31432));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    goto loc_800A034C;
}

loc_800A02A8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 1);
}

loc_800A02B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A02BC;
    }
}

loc_800A02B4:
{
    f6.d = MemoryInline::FlatReadFloat32((r2 + -31464));
    goto loc_800A02C0;
}

loc_800A02BC:
{
    f6.d = MemoryInline::FlatReadFloat32((r2 + -31424));
}

loc_800A02C0:
{
    r0 = (r3 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 1);
}

loc_800A02CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A02D8;
    }
}

loc_800A02D0:
{
    f7.d = MemoryInline::FlatReadFloat32((r2 + -31464));
    goto loc_800A02DC;
}

loc_800A02D8:
{
    f7.d = MemoryInline::FlatReadFloat32((r2 + -31424));
}

loc_800A02DC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31428));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31420));
    f0.d = PpcFmulsInline(f0.d, f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31432));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    goto loc_800A034C;
}

loc_800A0324:
{
    f1.d = f2.d;
    goto loc_800A034C;
}

loc_800A032C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 761;
    r5 = 0x80590000u;
    r5 = (r5 + 10176);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A0348u;
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
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31464));
}

loc_800A034C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x000000FF fpr_write=0x000000FB fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A0228 func_800A0228 preserves=true fpr_mask=0x00000000
