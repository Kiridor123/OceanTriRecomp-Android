#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027D850(CpuContext* ctx);
extern "C" uint32_t func_8027D850_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_802B7880(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_802B7880;

loc_802B7880:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
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
    r30 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r30 = (r30 + r0);
    r29 = 0;
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_802B78C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802B7918;
    }
}

loc_802B78C8:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027D850u>(&func_8027D850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027D850_A72 = func_8027D850_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8027D850_A72;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027D850u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802B78D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B7918;
    }
}

loc_802B78DC:
{
    r29 = 1;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13732));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802B78F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802B7934;
    }
}

loc_802B78F8:
{
    r29 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13624));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802B790C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B7934;
    }
}

loc_802B7910:
{
    r29 = 3;
    goto loc_802B7934;
}

loc_802B7918:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_802B7920:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B7934;
    }
}

loc_802B7924:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 132), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_802B79C8;
}

loc_802B7934:
{
    r4 = MemoryInline::FlatRead8((r31 + 132));
}

loc_802B793C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802B794C;
    }
}

loc_802B7940:
{
}

loc_802B7944:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802B7980;
    }
}

loc_802B7948:
{
    goto loc_802B79C4;
}

loc_802B794C:
{
}

loc_802B7950:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(3))) {
        goto loc_802B7960;
    }
}

loc_802B7954:
{
    r0 = 4;
    MemoryInline::FlatWrite16((r31 + 134), static_cast<uint16_t>(r0));
    goto loc_802B79C4;
}

loc_802B7960:
{
    r3 = MemoryInline::FlatRead16((r31 + 134));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150332768);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 134), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B7974:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802B79C4;
    }
}

loc_802B7978:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 132), static_cast<uint8_t>(r0));
}

loc_802B7980:
{
    r0 = (r29 & 1);
}

loc_802B7988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B799C;
    }
}

loc_802B798C:
{
    r0 = 15;
    MemoryInline::FlatWrite16((r31 + 134), static_cast<uint16_t>(r0));
    r3 = 1;
    goto loc_802B79C8;
}

loc_802B799C:
{
    r3 = MemoryInline::FlatRead16((r31 + 134));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150332828);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 134), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B79B0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B79BC;
    }
}

loc_802B79B4:
{
    r3 = 1;
    goto loc_802B79C8;
}

loc_802B79BC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 132), static_cast<uint8_t>(r0));
}

loc_802B79C4:
{
    r3 = 0;
}

loc_802B79C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B7880 func_802B7880 preserves=true fpr_mask=0x00000000
