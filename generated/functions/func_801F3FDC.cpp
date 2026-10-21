#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802232BC(CpuContext* ctx);
extern "C" uint64_t func_802232BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801F3FDC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801F3FDCu);
    goto loc_801F3FDC;

loc_801F3FDC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    MemoryInline::FlatWrite8((r3 + 610), static_cast<uint8_t>(r4));
    r31 = 0;
}

loc_801F4000:
{
    r3 = (r31 & 255);
    // inline leaf 0x8027391C (8 guest instruction(s))
}

loc_inl0_0x8027391C:
{
    r0 = (r3 & 255);
}

loc_inl0_0x80273924:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x80273930;
    }
}

loc_inl0_0x80273928:
{
    r3 = 0;
    goto loc_inl0_cont_8027391C;
}

loc_inl0_0x80273930:
{
    r3 = (r13 + -27872);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl0_cont_8027391C:
{
    // end of inlined leaf 0x8027391C
    r4 = (r3 & 255);
}

loc_801F4010:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_801F401C;
    }
}

loc_801F4014:
{
    r3 = MemoryInline::FlatRead32((r30 + 40));
    ctx->lr = 0x801F401Cu;
    if constexpr (KnownRegArgsCpuCall<0x802232BCu>(&func_802232BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802232BC_7DB = func_802232BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802232BC_7DB);
        r4 = static_cast<uint32_t>(regargs_result_802232BC_7DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802232BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801F401C:
{
    r31 = (r31 + 1);
}

loc_801F4024:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(7))) {
        goto loc_801F4000;
    }
}

loc_801F4028:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F3FDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F3FDC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F3FDC func_801F3FDC preserves=true fpr_mask=0x00000000
