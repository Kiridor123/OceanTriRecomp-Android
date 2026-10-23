#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BFB44(CpuContext* ctx);
extern "C" uint64_t func_802BFB44_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_802C239C_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_lfsx_802C2408_loc_0 = 0;
    uint32_t addr_lfsx_802C2468_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_802C239C;

loc_802C239C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = (r3 & 255);
}

loc_802C23B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(33))) {
        goto loc_802C248C;
    }
}

loc_802C23BC:
{
    r3 = (r1 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13388));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13428));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13384));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 128;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = 0x805D0000u;
    r31 = (r3 + 16872);
    r30 = 0;
    // inline leaf 0x803C48A4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20384);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x803C48A4
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13468));
    goto loc_802C2460;
}

loc_802C2408:
{
    addr_lfsx_802C2408_loc_0 = (r31 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_802C2408_loc_0);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    r0 = fctiwzword0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802C2420:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_802C245C;
    }
}

loc_802C2424:
{
    r0 = (r30 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r31 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    r0 = fctiwzword1;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802C2448:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_802C245C;
    }
}

loc_802C244C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
}

loc_802C245C:
{
    r30 = (r30 + 4);
}

loc_802C2460:
{
    r0 = (r30 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    addr_lfsx_802C2468_loc_0 = (r31 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_802C2468_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802C2470:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802C2408;
    }
}

loc_802C2474:
{
    r3 = MemoryInline::FlatRead16((r13 + -17078));
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r13 + -26908));
    f2.d = MemoryInline::FlatReadFloat32((r13 + -26912));
    ctx->lr = 0x802C248Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BFB44u>(&func_802BFB44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802BFB44_13A5 = func_802BFB44_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802BFB44_13A5);
        r4 = static_cast<uint32_t>(regargs_result_802BFB44_13A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802BFB44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_802C248C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C239C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C239C_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C239C func_802C239C preserves=true fpr_mask=0x00000000
