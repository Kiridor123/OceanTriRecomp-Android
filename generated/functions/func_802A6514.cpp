#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F740(CpuContext* ctx);
extern "C" uint64_t func_8029F740_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802A6688(CpuContext* ctx);
extern "C" uint64_t func_802A6688_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802A67B0(CpuContext* ctx);
extern "C" uint64_t func_802A67B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D7350(CpuContext* ctx);
extern "C" uint64_t func_802D7350_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AB08C(CpuContext* ctx);
extern "C" uint32_t func_803AB08C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802A6514_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_802A6514;

loc_802A6514:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = 0;
    r4 = MemoryInline::FlatRead8((r30 + 17));
    // inline leaf 0x802A0550 (20 guest instruction(s))
}

loc_inl0_0x802A0550:
{
    r0 = (r4 & 255);
    r6 = (r0 * 816);
    r4 = 0x806B0000u;
    r5 = (r4 + -4792);
    r4 = (r5 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 14));
}

loc_inl0_0x802A056C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x802A0598;
    }
}

loc_inl0_0x802A0570:
{
    r5_addr_1 = (r5 + r6);
    r0 = MemoryInline::FlatRead8(r5_addr_1);
}

loc_inl0_0x802A0578:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl0_0x802A0598;
    }
}

loc_inl0_0x802A057C:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = MemoryInline::FlatRead8((r4 + 20));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl0_0x802A058C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_inl0_0x802A0598;
    }
}

loc_inl0_0x802A0590:
{
    r3 = 1;
    goto loc_inl0_cont_802A0550;
}

loc_inl0_0x802A0598:
{
    r3 = 0;
}

loc_inl0_cont_802A0550:
{
    // end of inlined leaf 0x802A0550
}

loc_802A653C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802A6564;
    }
}

loc_802A6540:
{
    r3 = 0x805D0000u;
    r3 = (r3 + -6264);
    r4 = 1175;
    r5 = 0x805D0000u;
    r5 = (r5 + -6248);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x802A655Cu;
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
    r3 = 0;
    goto loc_802A6670;
}

loc_802A6564:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead8((r30 + 418));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r30 + 419));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r30 + 416));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 * r0);
    r0 = (r5 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // inline leaf 0x802A9E44 (16 guest instruction(s))
}

loc_inl1_0x802A9E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl1_0x802A9E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A9E70;
    }
}

loc_inl1_0x802A9E50:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A9E58:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(24))) {
        goto loc_inl1_0x802A9E70;
    }
}

loc_inl1_0x802A9E5C:
{
    r3 = MemoryInline::FlatRead32((r3 + 408));
    r0 = (r5 + -24);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    goto loc_inl1_cont_802A9E44;
}

loc_inl1_0x802A9E70:
{
    r3 = MemoryInline::FlatRead32((r3 + 404));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
}

loc_inl1_cont_802A9E44:
{
    // end of inlined leaf 0x802A9E44
    r31 = MemoryInline::FlatRead16(r3);
    r3 = r30;
    ctx->lr = 0x802A659Cu;
    if constexpr (KnownRegArgsCpuCall<0x802A6688u>(&func_802A6688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802A6688_15EC = func_802A6688_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A6688_15EC);
        r4 = static_cast<uint32_t>(regargs_result_802A6688_15EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802A6688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802A65A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802A65C0;
    }
}

loc_802A65A8:
{
}

loc_802A65AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802A65FC;
    }
}

loc_802A65B0:
{
}

loc_802A65B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802A663C;
    }
}

loc_802A65B8:
{
    r3 = 0;
    goto loc_802A6670;
}

loc_802A65C0:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8029F740u>(&func_8029F740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8029F740_1B15 = func_8029F740_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F740_1B15);
        r4 = static_cast<uint32_t>(regargs_result_8029F740_1B15 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8029F740u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_802A65D0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_802A65DC;
    }
}

loc_802A65D4:
{
    r3 = 0;
    goto loc_802A6670;
}

loc_802A65DC:
{
    r3 = r30;
    r4 = -1;
    ctx->lr = 0x802A65E8u;
    if constexpr (KnownRegArgsCpuCall<0x802A67B0u>(&func_802A67B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802A67B0_1F24 = func_802A67B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A67B0_1F24);
        r4 = static_cast<uint32_t>(regargs_result_802A67B0_1F24 >> 32);
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
        InvokeDirectCpu<0x802A67B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802A65F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A666C;
    }
}

loc_802A65F4:
{
    r3 = 0;
    goto loc_802A6670;
}

loc_802A65FC:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8029F740u>(&func_8029F740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8029F740_237C = func_8029F740_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F740_237C);
        r4 = static_cast<uint32_t>(regargs_result_8029F740_237C >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8029F740u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_802A660C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_802A6618;
    }
}

loc_802A6610:
{
    r3 = 0;
    goto loc_802A6670;
}

loc_802A6618:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead8((r30 + 17));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x802A6628u;
    if constexpr (KnownRegArgsCpuCall<0x802A67B0u>(&func_802A67B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802A67B0_27E7 = func_802A67B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A67B0_27E7);
        r4 = static_cast<uint32_t>(regargs_result_802A67B0_27E7 >> 32);
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
        InvokeDirectCpu<0x802A67B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802A6630:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A666C;
    }
}

loc_802A6634:
{
    r3 = 0;
    goto loc_802A6670;
}

loc_802A663C:
{
    ctx->lr = 0x802A6640u;
    if constexpr (KnownRegArgsCpuCall<0x803AB08Cu>(&func_803AB08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803AB08C_2C67 = func_803AB08C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB08C_2C67;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803AB08Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802A6644:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802A6650;
    }
}

loc_802A6648:
{
    r3 = 0;
    goto loc_802A6670;
}

loc_802A6650:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x802D7350u>(&func_802D7350)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_802D7350_3024 = func_802D7350_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7350_3024);
        r4 = static_cast<uint32_t>(regargs_result_802D7350_3024 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D7350u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802A6660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802A666C;
    }
}

loc_802A6664:
{
    r3 = 0;
    goto loc_802A6670;
}

loc_802A666C:
{
    r3 = 1;
}

loc_802A6670:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A6514(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A6514_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802A6514 func_802A6514 preserves=true fpr_mask=0x00000000
