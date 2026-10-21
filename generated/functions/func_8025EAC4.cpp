#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8025E2FC(CpuContext* ctx);
extern "C" uint64_t func_8025E2FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8025EAC4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8025EAC4u);
    goto loc_8025EAC4;

loc_8025EAC4:
{
    r3 = r29;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_8025EAD0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EAD4:
{
    r3 = 0;
    ctx->lr = 0x8025EADCu;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027BCAC_61A = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_61A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8025EAE0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EAE4:
{
    r3 = r29;
    r4 = 0;
    r5 = 88;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl1_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl1_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl1_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl1_cont_8026FECC;
}

loc_inl1_0x8026FEF4:
{
    r3 = 0;
}

loc_inl1_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8025EAF8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EAFC:
{
    r3 = r29;
    r4 = 12;
    r5 = 10;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl2_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl2_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl2_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl2_cont_8026FECC;
}

loc_inl2_0x8026FEF4:
{
    r3 = 0;
}

loc_inl2_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8025EB10:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EB14:
{
    r30 = 9;
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8025E2FC_1009 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_1009);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_1009 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8025EB2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB34;
    }
}

loc_8025EB30:
{
    r31 = 9;
}

loc_8025EB34:
{
    r3 = r29;
    r4 = 12;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8025E2FC_1401 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_1401);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_1401 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8025EB48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025EB4C:
{
    r31 = 9;
    goto loc_8025EB80;
}

loc_8025EB78:
{
    r30 = 0;
    r31 = 0;
}

loc_8025EB80:
{
    r0 = MemoryInline::FlatRead8((r29 + 776));
}

loc_8025EB88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025EBA8;
    }
}

loc_8025EB8C:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r29 + 997), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 1000), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025EBA8:
{
    MemoryInline::FlatWrite8((r29 + 997), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r29 + 996));
}

loc_8025EBB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_8025EC34;
    }
}

loc_8025EBB8:
{
    r0 = MemoryInline::FlatRead8((r29 + 998));
}

loc_8025EBC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r31))) {
        goto loc_8025EBE4;
    }
}

loc_8025EBC4:
{
    r0 = (r31 + -1);
}

loc_8025EBCC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8025EBDC;
    }
}

loc_8025EBD0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    goto loc_8025EBE4;
}

loc_8025EBDC:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
}

loc_8025EBE4:
{
    r0 = MemoryInline::FlatRead8((r29 + 996));
}

loc_8025EBEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EC14;
    }
}

loc_8025EBF0:
{
}

loc_8025EBF4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8025EC14;
    }
}

loc_8025EBF8:
{
    r0 = MemoryInline::FlatRead8((r29 + 999));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8025EC04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EC34;
    }
}

loc_8025EC08:
{
    r0 = MemoryInline::FlatRead8((r29 + 997));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025EC14:
{
}

loc_8025EC18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r31))) {
        goto loc_8025EC34;
    }
}

loc_8025EC1C:
{
    r0 = MemoryInline::FlatRead8((r29 + 999));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8025EC28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EC34;
    }
}

loc_8025EC2C:
{
    r0 = MemoryInline::FlatRead8((r29 + 997));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
}

loc_8025EC34:
{
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025EAC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025EAC4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8025EAC4 func_8025EAC4 preserves=true fpr_mask=0x00000000
