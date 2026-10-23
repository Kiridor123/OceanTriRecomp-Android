#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80294F60_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_lfsx_802950A0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80294F60;

loc_80294F60:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80294F94:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80295118;
    }
}

loc_80294F98:
{
}

loc_80294F9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8029502C;
    }
}

loc_80294FA0:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -6932));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80294FB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(127))) {
        goto loc_80294FF4;
    }
}

loc_80294FB4:
{
    r3 = (r1 + 56);
    r4 = 0x806B0000u;
    r4 = (r4 + -7944);
    r4 = (r4 + 44);
    r5 = 0x806B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -6984));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 68);
    r4 = 0x806B0000u;
    r4 = (r4 + -7344);
    r5 = (r1 + 56);
    ctx->lr = 0x80294FE4u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_B02 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_B02);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_B02 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80295118;
}

loc_80294FF4:
{
    r3 = r31;
    r4 = 0x806B0000u;
    r4 = (r4 + -7224);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 44);
    r4 = 0x806B0000u;
    r4 = (r4 + -7944);
    r4 = (r4 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = r31;
    r4 = (r1 + 44);
    ctx->lr = 0x80295028u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    goto loc_80295118;
}

loc_8029502C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14152));
    r4 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -6984);
    ctr = r0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80295064;
    }
}

loc_80295044:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8029504C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80295058;
    }
}

loc_80295050:
{
    r29 = r4;
    f1.d = f0.d;
}

loc_80295058:
{
    r3 = (r3 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80295044;
    }
}

loc_80295064:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -6932);
    r3_addr_1 = (r3 + r29);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80295078:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(127))) {
        goto loc_802950D4;
    }
}

loc_8029507C:
{
    r3 = (r1 + 20);
    r5 = (r29 * 60);
    r4 = 0x806B0000u;
    r0 = (r4 + -7944);
    r4 = (r0 + r5);
    r4 = (r4 + 44);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = 0x806B0000u;
    r5 = (r5 + -6984);
    addr_lfsx_802950A0_loc_0 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_802950A0_loc_0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 32);
    r5 = (r29 * 12);
    r4 = 0x806B0000u;
    r0 = (r4 + -7344);
    r4 = (r0 + r5);
    r5 = (r1 + 20);
    ctx->lr = 0x802950C4u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_18BC = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_18BC);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_18BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80295118;
}

loc_802950D4:
{
    r3 = r31;
    r5 = (r29 * 12);
    r4 = 0x806B0000u;
    r0 = (r4 + -7224);
    r4 = (r0 + r5);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    r5 = (r29 * 60);
    r4 = 0x806B0000u;
    r0 = (r4 + -7944);
    r4 = (r0 + r5);
    r4 = (r4 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x80295118u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
}

loc_80295118:
{
    r3 = MemoryInline::FlatRead8((r13 + -17096));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80294F60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80294F60_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80294F60 func_80294F60 preserves=true fpr_mask=0x00000000
