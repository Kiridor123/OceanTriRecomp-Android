#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027328C(CpuContext* ctx);
extern "C" uint64_t func_8027328C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803A3968_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_803A3968;

loc_803A3968:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803A3994:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803A39BC;
    }
}

loc_803A3998:
{
}

loc_803A399C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803A39C8;
    }
}

loc_803A39A0:
{
}

loc_803A39A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803A39D4;
    }
}

loc_803A39A8:
{
}

loc_803A39AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803A39E0;
    }
}

loc_803A39B0:
{
}

loc_803A39B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803A39EC;
    }
}

loc_803A39B8:
{
    goto loc_803A39F8;
}

loc_803A39BC:
{
    r3 = 0x805F0000u;
    r30 = (r3 + 9972);
    goto loc_803A3A00;
}

loc_803A39C8:
{
    r3 = 0x805F0000u;
    r30 = (r3 + 10024);
    goto loc_803A3A00;
}

loc_803A39D4:
{
    r3 = 0x805F0000u;
    r30 = (r3 + 10076);
    goto loc_803A3A00;
}

loc_803A39E0:
{
    r3 = 0x805F0000u;
    r30 = (r3 + 10128);
    goto loc_803A3A00;
}

loc_803A39EC:
{
    r3 = 0x805F0000u;
    r30 = (r3 + 10180);
    goto loc_803A3A00;
}

loc_803A39F8:
{
    r3 = 0;
    goto loc_803A3A9C;
}

loc_803A3A00:
{
}

loc_803A3A04:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_803A3A10;
    }
}

loc_803A3A08:
{
    r3 = 0;
    goto loc_803A3A9C;
}

loc_803A3A10:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl2_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl2_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF40;
    }
}

loc_inl2_0x800CEF3C:
{
    r0 = 1;
}

loc_inl2_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl2_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
    r4 = (r0 & 65535);
    r3 = 0;
    goto loc_803A3A8C;
}

loc_803A3A48:
{
    r3 = (r3 + r0);
    r0 = (r3 & 65535);
}

loc_803A3A54:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_803A3A88;
    }
}

loc_803A3A58:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    MemoryInline::FlatWrite16((r31 + 1648), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r5 = 1;
    ctx->lr = 0x803A3A70u;
    if constexpr (KnownRegArgsCpuCall<0x8027328Cu>(&func_8027328C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8027328C_1780 = func_8027328C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027328C_1780);
        r4 = static_cast<uint32_t>(regargs_result_8027328C_1780 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027328Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r0 = 1;
    r5 = (static_cast<int32_t>(r3) >> 31);
    r4 = 0;
    r0_subfc_sub_1 = r0;
    r0 = (r3 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r4);
    r3 = (r3 + r3_ca_1);
    goto loc_803A3A9C;
}

loc_803A3A88:
{
    r30 = (r30 + 4);
}

loc_803A3A8C:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_803A3A94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_803A3A48;
    }
}

loc_803A3A98:
{
    r3 = 0;
}

loc_803A3A9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A3968(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A3968_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A3968 func_803A3968 preserves=true fpr_mask=0x00000000
