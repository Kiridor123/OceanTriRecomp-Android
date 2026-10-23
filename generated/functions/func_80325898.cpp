#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80325828(CpuContext* ctx);
extern "C" uint32_t func_80325828_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80325898_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80325898;

loc_80325898:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r4 + 432);
    r4 = (r30 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_803258C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803258D8;
    }
}

loc_803258CC:
{
}

loc_803258D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80325928;
    }
}

loc_803258D4:
{
    goto loc_80325954;
}

loc_803258D8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 808), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_803258E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803258F4;
    }
}

loc_803258EC:
{
}

loc_803258F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8032591C;
    }
}

loc_803258F4:
{
    r3 = MemoryInline::FlatRead8((r31 + 1134));
    r0 = MemoryInline::FlatRead8((r30 + 57));
}

loc_80325900:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8032591C;
    }
}

loc_80325904:
{
    r3 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_80325910:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8032591C;
    }
}

loc_80325914:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 808), static_cast<uint8_t>(r0));
}

loc_8032591C:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80325828u>(&func_80325828)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80325828_A16 = func_80325828_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80325828_A16;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80325828u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    goto loc_80325980;
}

loc_80325928:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 808), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 820), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 1083));
}

loc_8032593C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80325980;
    }
}

loc_80325940:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl0_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl0_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x801307B0;
    }
}

loc_inl0_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl0_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_80130790;
}

loc_inl0_return:
{
}

loc_inl0_cont_80130790:
{
    // end of inlined leaf 0x80130790
    goto loc_80325980;
}

loc_80325954:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 808), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 820), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_8032596C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80325980;
    }
}

loc_80325970:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl1_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl1_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x801307B0;
    }
}

loc_inl1_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl1_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80130790;
}

loc_inl1_return:
{
}

loc_inl1_cont_80130790:
{
    // end of inlined leaf 0x80130790
}

loc_80325980:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80325898(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80325898_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80325898 func_80325898 preserves=true fpr_mask=0x00000000
