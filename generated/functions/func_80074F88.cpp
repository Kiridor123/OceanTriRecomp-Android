#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074948(CpuContext* ctx);
extern "C" uint64_t func_80074948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80074F88_ra38_7e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80074F88u);
    goto loc_80074F88;

loc_80074F88:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x804573EC (7 guest instruction(s))
    MemoryInline::WriteResolvedFloat64(guest_range_0, 16u, (r11 + -48), f26.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 24u, (r11 + -40), f27.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r11 + -32), f28.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r11 + -24), f29.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r11 + -16), f30.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r11 + -8), f31.d);
    // end of inlined leaf 0x804573EC
    r31 = r3;
    f26.d = f1.d;
    f27.d = f2.d;
    f28.d = f3.d;
    f29.d = f4.d;
    f30.d = f5.d;
    f31.d = f6.d;
    // inline leaf 0x80067F4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80067F4C
}

loc_80074FC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80074FE4;
    }
}

loc_80074FC8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5136);
    r4 = 371;
    r5 = 0x80590000u;
    r5 = (r5 + -5080);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80074FE4u;
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

loc_80074FE4:
{
    r3 = r31;
    // inline leaf 0x80067F4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80067F4C
}

loc_80074FF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80075034;
    }
}

loc_80074FF4:
{
    r3 = r31;
    ctx->lr = 0x80074FFCu;
    if constexpr (KnownRegArgsCpuCall<0x80074948u>(&func_80074948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80074948_FE3 = func_80074948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074948_FE3);
        r4 = static_cast<uint32_t>(regargs_result_80074948_FE3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80074948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 168), r0);
    MemoryInline::FlatWriteFloat32((r3 + 188), f26.d);
    MemoryInline::FlatWriteFloat32((r3 + 192), f27.d);
    MemoryInline::FlatWriteFloat32((r3 + 196), f28.d);
    MemoryInline::FlatWriteFloat32((r3 + 200), f29.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f30.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f31.d);
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & -241);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 112), r0);
}

loc_80075034:
{
    r11 = (r1 + 64);
    // inline leaf 0x80457438 (7 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 60u, true, false);
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 4u, (r11 + -48));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 12u, (r11 + -40));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r11 + -32));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r11 + -24));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r11 + -16));
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r11 + -8));
    // end of inlined leaf 0x80457438
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80074F88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80074F88_ra38_7e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xFC00007E fpr_write=0xFC000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80074F88 func_80074F88 preserves=true fpr_mask=0x00000000
