#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DA790(CpuContext* ctx);
extern "C" uint64_t func_800DA790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800DD254_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_lfsx_800DD330_loc_0 = 0;
    uint32_t addr_lfsx_800DD37C_loc_0 = 0;
    uint32_t addr_lfsx_800DD3AC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_800DD254;

loc_800DD254:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_800DD280:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_800DD3DC;
    }
}

loc_800DD284:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -31940);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800DD29Cu:
        goto loc_800DD29C;
        break;
    case 0x800DD2ACu:
        goto loc_800DD2AC;
        break;
    case 0x800DD2BCu:
        goto loc_800DD2BC;
        break;
    case 0x800DD2CCu:
        goto loc_800DD2CC;
        break;
    case 0x800DD31Cu:
        goto loc_800DD31C;
        break;
    case 0x800DD2DCu:
        goto loc_800DD2DC;
        break;
    case 0x800DD2ECu:
        goto loc_800DD2EC;
        break;
    case 0x800DD2FCu:
        goto loc_800DD2FC;
        break;
    case 0x800DD30Cu:
        goto loc_800DD30C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800DD29C:
{
    r0 = 0;
    r3 = 0x805A0000u;
    r4 = (r3 + -32152);
    goto loc_800DD320;
}

loc_800DD2AC:
{
    r0 = 1;
    r3 = 0x805A0000u;
    r4 = (r3 + -32152);
    goto loc_800DD320;
}

loc_800DD2BC:
{
    r0 = 2;
    r3 = 0x805A0000u;
    r4 = (r3 + -32152);
    goto loc_800DD320;
}

loc_800DD2CC:
{
    r0 = 3;
    r3 = 0x805A0000u;
    r4 = (r3 + -32152);
    goto loc_800DD320;
}

loc_800DD2DC:
{
    r0 = 4;
    r3 = 0x805A0000u;
    r4 = (r3 + -32152);
    goto loc_800DD320;
}

loc_800DD2EC:
{
    r0 = 5;
    r3 = 0x805A0000u;
    r4 = (r3 + -32152);
    goto loc_800DD320;
}

loc_800DD2FC:
{
    r0 = 6;
    r3 = 0x805A0000u;
    r4 = (r3 + -32080);
    goto loc_800DD320;
}

loc_800DD30C:
{
    r0 = 7;
    r3 = 0x805A0000u;
    r4 = (r3 + -32020);
    goto loc_800DD320;
}

loc_800DD31C:
{
    goto loc_800DD3DC;
}

loc_800DD320:
{
}

loc_800DD324:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_800DD364;
    }
}

loc_800DD328:
{
    r0 = (r0 * 12);
    r3 = (r1 + 32);
    addr_lfsx_800DD330_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_800DD330_loc_0);
    r4 = (r4 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = 46;
    r4 = 12;
    r5 = (r1 + 44);
    ctx->lr = 0x800DD360u;
    if constexpr (KnownRegArgsCpuCall<0x800DA790u>(&func_800DA790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800DA790_149F = func_800DA790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DA790_149F);
        r4 = static_cast<uint32_t>(regargs_result_800DA790_149F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DA790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
    goto loc_800DD3DC;
}

loc_800DD364:
{
    r0 = (r31 & 255);
}

loc_800DD36C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DD3A0;
    }
}

loc_800DD370:
{
    r31 = 13;
    r0 = (r0 * 12);
    r3 = (r1 + 20);
    addr_lfsx_800DD37C_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_800DD37C_loc_0);
    r4 = (r4 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800DD3CC;
}

loc_800DD3A0:
{
    r31 = 11;
    r0 = (r0 * 12);
    r3 = (r1 + 8);
    addr_lfsx_800DD3AC_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_800DD3AC_loc_0);
    r4 = (r4 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800DD3CC:
{
    r3 = 46;
    r4 = r31;
    r5 = (r1 + 44);
    ctx->lr = 0x800DD3DCu;
    if constexpr (KnownRegArgsCpuCall<0x800DA790u>(&func_800DA790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800DA790_1EB3 = func_800DA790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DA790_1EB3);
        r4 = static_cast<uint32_t>(regargs_result_800DA790_1EB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DA790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
}

loc_800DD3DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DD254(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DD254_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DD254 func_800DD254 preserves=true fpr_mask=0x00000000
