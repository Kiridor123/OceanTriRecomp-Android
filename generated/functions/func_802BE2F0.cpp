#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027A304(CpuContext* ctx);
extern "C" uint64_t func_8027A304_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802B7A1C(CpuContext* ctx);
extern "C" uint64_t func_802B7A1C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802B8BCC(CpuContext* ctx);
extern "C" uint32_t func_802B8BCC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802B9618(CpuContext* ctx);
extern "C" uint32_t func_802B9618_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BE450(CpuContext* ctx);
extern "C" uint32_t func_802BE450_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BE480(CpuContext* ctx);
extern "C" uint32_t func_802BE480_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802BE2F0_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_802BE2F0;

loc_802BE2F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x802BE308u;
    if constexpr (KnownRegArgsCpuCall<0x802BE450u>(&func_802BE450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BE450_7D8 = func_802BE450_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE450_7D8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BE450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802BE30C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BE318;
    }
}

loc_802BE310:
{
    r3 = 0;
    goto loc_802BE3EC;
}

loc_802BE318:
{
    // inline leaf 0x803C4890 (5 guest instruction(s))
    r3 = 0x806D0000u;
    r0 = MemoryInline::FlatRead8((r3 + 20384));
    r0_subfic_ra_1 = r0;
    r0 = (1 - r0_subfic_ra_1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x803C4890
    r0 = (r3 & 255);
}

loc_802BE324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BE330;
    }
}

loc_802BE328:
{
    r3 = 0;
    goto loc_802BE3EC;
}

loc_802BE330:
{
    ctx->lr = 0x802BE334u;
    if constexpr (KnownRegArgsCpuCall<0x802BE480u>(&func_802BE480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BE480_D10 = func_802BE480_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE480_D10;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BE480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802BE338:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BE344;
    }
}

loc_802BE33C:
{
    r3 = 0;
    goto loc_802BE3EC;
}

loc_802BE344:
{
    ctx->lr = 0x802BE348u;
    if constexpr (KnownRegArgsCpuCall<0x802B9618u>(&func_802B9618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B9618_1012 = func_802B9618_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802B9618_1012;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802B9618u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802BE34C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BE358;
    }
}

loc_802BE350:
{
    r3 = 0;
    goto loc_802BE3EC;
}

loc_802BE358:
{
    r0 = MemoryInline::FlatRead8((r31 + 1509));
}

loc_802BE360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BE36C;
    }
}

loc_802BE364:
{
    r3 = 0;
    goto loc_802BE3EC;
}

loc_802BE36C:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802BE378u;
    if constexpr (KnownRegArgsCpuCall<0x8027A304u>(&func_8027A304)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8027A304_144D = func_8027A304_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8027A304_144D);
        r4 = static_cast<uint32_t>(regargs_result_8027A304_144D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8027A304u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_802BE37C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BE388;
    }
}

loc_802BE380:
{
    r3 = 0;
    goto loc_802BE3EC;
}

loc_802BE388:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802BE394u;
    if constexpr (KnownRegArgsCpuCall<0x802B7A1Cu>(&func_802B7A1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B7A1C_1999 = func_802B7A1C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802B7A1C_1999);
        r4 = static_cast<uint32_t>(regargs_result_802B7A1C_1999 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802B7A1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_802BE398:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802BE3A4;
    }
}

loc_802BE39C:
{
    r3 = 0;
    goto loc_802BE3EC;
}

loc_802BE3A4:
{
    ctx->lr = 0x802BE3A8u;
    if constexpr (KnownRegArgsCpuCall<0x802B8BCCu>(&func_802B8BCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B8BCC_1EC9 = func_802B8BCC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802B8BCC_1EC9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802B8BCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802BE3B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BE3BC;
    }
}

loc_802BE3B4:
{
    r3 = 0;
    goto loc_802BE3EC;
}

loc_802BE3BC:
{
    ctx->lr = 0x802BE3C0u;
    if constexpr (KnownRegArgsCpuCall<0x802B8BCCu>(&func_802B8BCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B8BCC_2206 = func_802B8BCC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802B8BCC_2206;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802B8BCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802BE3C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802BE3D4;
    }
}

loc_802BE3CC:
{
    r3 = 0;
    goto loc_802BE3EC;
}

loc_802BE3D4:
{
    ctx->lr = 0x802BE3D8u;
    if constexpr (KnownRegArgsCpuCall<0x802B8BCCu>(&func_802B8BCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B8BCC_2543 = func_802B8BCC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802B8BCC_2543;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802B8BCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = (3 - r4);
    r0 = (r4 + -3);
    r0 = (r3 | r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
}

loc_802BE3EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BE2F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BE2F0_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BE2F0 func_802BE2F0 preserves=true fpr_mask=0x00000000
