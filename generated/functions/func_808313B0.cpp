#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808313B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x808313B0u);
    goto loc_808313B0;

loc_808313B0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r4;
    r0 = MemoryInline::FlatRead8((r4 + 80));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_0 & 1);
}

loc_808313D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80831434;
    }
}

loc_808313D4:
{
    r3 = (r4 + 4);
    r4 = (r5 + 132);
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 64));
    r3 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18632));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808313FC:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_80831404:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083142C;
    }
}

loc_80831408:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
}

loc_8083142C:
{
    r3 = (r1 + 8);
    goto loc_80831494;
}

loc_80831434:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 64));
    r5 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18632));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8083144C:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_80831454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80831490;
    }
}

loc_80831458:
{
    r3 = (r3 + 132);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C62C0u>(ctx);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    goto loc_80831494;
}

loc_80831490:
{
    r3 = (r3 + 132);
}

loc_80831494:
{
    r4 = 0;
    ctx->lr = 0x8083149Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BAB90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = 0;
    ctx->lr = 0x808314A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BACB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808313B0 func_808313B0 preserves=true fpr_mask=0x00000000
