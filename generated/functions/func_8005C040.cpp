#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005BB58(CpuContext* ctx);
extern "C" uint64_t func_8005BB58_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_8005BDA0(CpuContext* ctx);
extern "C" uint64_t func_8005BDA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8005C040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_8005C040;

loc_8005C040:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r31 = MemoryInline::FlatRead32((r13 + -17736));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r31 + 65536);
    r30 = MemoryInline::FlatRead32((r3 + 20584));
}

loc_8005C06C:
{
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005BDA0u>(&func_8005BDA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005BDA0_70E = func_8005BDA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005BDA0_70E);
        r4 = static_cast<uint32_t>(regargs_result_8005BDA0_70E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005BDA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8005C078:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005C154;
    }
}

loc_8005C07C:
{
}

loc_8005C080:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(32))) {
        goto loc_8005C08C;
    }
}

loc_8005C084:
{
    r28 = 1;
    goto loc_8005C138;
}

loc_8005C08C:
{
}

loc_8005C090:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(10))) {
        goto loc_8005C0B0;
    }
}

loc_8005C094:
{
    r4 = (r31 + 65536);
    MemoryInline::FlatWrite32((r4 + 20584), r30);
    r3 = MemoryInline::FlatRead32((r4 + 20588));
    r0 = MemoryInline::FlatRead32((r4 + 20576));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 20588), r0);
    goto loc_8005C06C;
}

loc_8005C0B0:
{
    r0 = MemoryInline::FlatRead32((r31 + 48));
}

loc_8005C0B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005C0E4;
    }
}

loc_8005C0BC:
{
}

loc_8005C0C0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(15))) {
        goto loc_8005C0D0;
    }
}

loc_8005C0C4:
{
    r28 = 0;
    // inline leaf 0x8005BFC4 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x8005BFC4
    goto loc_8005C114;
}

loc_8005C0D0:
{
}

loc_8005C0D4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(127))) {
        goto loc_8005C0E4;
    }
}

loc_8005C0D8:
{
    r28 = 1;
    // inline leaf 0x8005BFC4 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x8005BFC4
    goto loc_8005C114;
}

loc_8005C0E4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005BF84u>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    // inline leaf 0x8005C010 (12 guest instruction(s))
}

loc_inl2_0x8005C010:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
    r0 = MemoryInline::FlatRead32((r4 + 28));
}

loc_inl2_0x8005C01C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8005C028;
    }
}

loc_inl2_0x8005C020:
{
    r3 = 1;
    goto loc_inl2_cont_8005C010;
}

loc_inl2_0x8005C028:
{
    r4 = 0x80580000u;
    r4 = (r4 + 2072);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2));
}

loc_inl2_cont_8005C010:
{
    // end of inlined leaf 0x8005C010
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_8005C0FC:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r0))) {
        goto loc_8005C138;
    }
}

loc_8005C100:
{
    r4 = (r31 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + 20572));
    r0 = MemoryInline::FlatRead32((r4 + 20568));
}

loc_8005C110:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8005C154;
    }
}

loc_8005C114:
{
    r4 = (r31 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + 20584));
    r4 = MemoryInline::FlatRead32((r4 + 20588));
    r5 = r29;
    ctx->lr = 0x8005C128u;
    if constexpr (KnownRegArgsCpuCall<0x8005BB58u>(&func_8005BB58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005BB58_1627 = func_8005BB58_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BB58_1627);
        r4 = static_cast<uint32_t>(regargs_result_8005BB58_1627 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005BB58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r4 = (r31 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + 20572));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 20572), r0);
}

loc_8005C138:
{
    r4 = (r31 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + 20584));
    r0 = MemoryInline::FlatRead32((r4 + 20576));
    r0 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 20584), r0);
    goto loc_8005C06C;
}

loc_8005C154:
{
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020FF gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005C040 func_8005C040 preserves=true fpr_mask=0x00000000
