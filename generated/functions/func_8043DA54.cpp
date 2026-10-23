#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8030B7F4(CpuContext* ctx);
extern "C" uint64_t func_8030B7F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8043CBDC(CpuContext* ctx);
extern "C" uint64_t func_8043CBDC_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8043DA54_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_8043DA54;

loc_8043DA54:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    r31 = r4;
    r30 = r6;
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r5 = (r5 & 255);
}

loc_8043DA84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_8043DA9C;
    }
}

loc_8043DA88:
{
}

loc_8043DA8C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8043DAE4;
    }
}

loc_8043DA90:
{
}

loc_8043DA94:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8043DB38;
    }
}

loc_8043DA98:
{
    goto loc_8043DB44;
}

loc_8043DA9C:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
}

loc_8043DAB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8043DB48;
    }
}

loc_8043DAB4:
{
    r4 = MemoryInline::FlatRead8(r31);
    r0 = (r30 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0 = (r4 + r0);
    r0 = (r0 * 2848);
    r3 = (r3 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8030B7F4u>(&func_8030B7F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8030B7F4_E16 = func_8030B7F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8030B7F4_E16);
        r4 = static_cast<uint32_t>(regargs_result_8030B7F4_E16 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8030B7F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_8043DB48;
}

loc_8043DAE4:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8043DAEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8043DB04;
    }
}

loc_8043DAF0:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8(r4);
    ctx->lr = 0x8043DAFCu;
    if constexpr (KnownRegArgsCpuCall<0x8043CBDCu>(&func_8043CBDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8043CBDC_131B = func_8043CBDC_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043CBDC_131B);
        r4 = static_cast<uint32_t>(regargs_result_8043CBDC_131B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8043CBDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 8);
    goto loc_8043DB14;
}

loc_8043DB04:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r0 * 236);
    r3 = (r3 + r0);
}

loc_8043DB14:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8043DB1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8043DB2C;
    }
}

loc_8043DB20:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_8043DB48;
}

loc_8043DB2C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_8043DB48;
}

loc_8043DB38:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    goto loc_8043DB48;
}

loc_8043DB44:
{
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
}

loc_8043DB48:
{
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043DA54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043DA54_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8043DA54 func_8043DA54 preserves=true fpr_mask=0x00000000
