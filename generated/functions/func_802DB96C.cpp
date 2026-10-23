#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A0368(CpuContext* ctx);
extern "C" uint64_t func_802A0368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802A04C8(CpuContext* ctx);
extern "C" uint64_t func_802A04C8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802DB96C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_802DB96C;

loc_802DB96C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806C0000u;
    r31 = (r3 + -376);
    // inline leaf 0x80046F70 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 48));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80046F70
}

loc_802DB98C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802DB9A4;
    }
}

loc_802DB990:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_802DB9A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802DB9B4;
    }
}

loc_802DB9A4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_802DBB70;
}

loc_802DB9B4:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802DB9C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802DB9D4;
    }
}

loc_802DB9C4:
{
}

loc_802DB9C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802DBA18;
    }
}

loc_802DB9CC:
{
    r3 = 0;
    goto loc_802DBB70;
}

loc_802DB9D4:
{
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
}

loc_802DB9E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802DB9EC;
    }
}

loc_802DB9E4:
{
    r3 = 0;
    goto loc_802DBB70;
}

loc_802DB9EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 274));
}

loc_802DB9F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802DBA00;
    }
}

loc_802DB9F8:
{
    r3 = 0;
    goto loc_802DBB70;
}

loc_802DBA00:
{
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_802DBA0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_802DBA34;
    }
}

loc_802DBA10:
{
    r3 = 0;
    goto loc_802DBB70;
}

loc_802DBA18:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_802DBA28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802DBA34;
    }
}

loc_802DBA2C:
{
    r3 = 0;
    goto loc_802DBB70;
}

loc_802DBA34:
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

loc_802DBA40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802DBA54;
    }
}

loc_802DBA44:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_802DBB70;
}

loc_802DBA54:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -4792);
    r0 = MemoryInline::FlatRead8((r3 + 813));
}

loc_802DBA64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802DBA7C;
    }
}

loc_802DBA68:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 37), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_802DBB70;
}

loc_802DBA7C:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802DBA88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802DBA98;
    }
}

loc_802DBA8C:
{
}

loc_802DBA90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802DBB40;
    }
}

loc_802DBA94:
{
    goto loc_802DBB64;
}

loc_802DBA98:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_802DBAA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802DBAD0;
    }
}

loc_802DBAA8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2223));
}

loc_802DBAB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DBAD0;
    }
}

loc_802DBABC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 37), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_802DBB70;
}

loc_802DBAD0:
{
    r3 = 0;
    ctx->lr = 0x802DBAD8u;
    if constexpr (KnownRegArgsCpuCall<0x802A0368u>(&func_802A0368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A0368_1E0C = func_802A0368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A0368_1E0C);
        r4 = static_cast<uint32_t>(regargs_result_802A0368_1E0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A0368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802DBADC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DBB1C;
    }
}

loc_802DBAE0:
{
    if constexpr (KnownRegArgsCpuCall<0x802A04C8u>(&func_802A04C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A04C8_2152 = func_802A04C8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A04C8_2152);
        r4 = static_cast<uint32_t>(regargs_result_802A04C8_2152 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A04C8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802DBAE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DBB1C;
    }
}

loc_802DBAEC:
{
    // inline leaf 0x803C86D4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20424);
    r3 = MemoryInline::FlatRead8((r3 + 258));
    // end of inlined leaf 0x803C86D4
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802DBAF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_802DBB1C;
    }
}

loc_802DBAFC:
{
    // inline leaf 0x8033A8B4 (6 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = MemoryInline::FlatRead8((r3 + 5024));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8033A8B4
}

loc_802DBB04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802DBB1C;
    }
}

loc_802DBB08:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 24), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_802DBB70;
}

loc_802DBB1C:
{
    r0 = MemoryInline::FlatRead8((r31 + 37));
}

loc_802DBB24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802DBB64;
    }
}

loc_802DBB28:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 24), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_802DBB70;
}

loc_802DBB40:
{
    r0 = MemoryInline::FlatRead8((r31 + 37));
}

loc_802DBB48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802DBB64;
    }
}

loc_802DBB4C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 24), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_802DBB70;
}

loc_802DBB64:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r3 = 0;
}

loc_802DBB70:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DB96C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DB96C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802DB96C func_802DB96C preserves=true fpr_mask=0x00000000
