#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8007B1C4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8007B1C4u);
    goto loc_8007B1C4;

loc_8007B1C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    // inline leaf 0x80065268 (10 guest instruction(s))
}

loc_inl0_0x80065268:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x80065274:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80065288;
    }
}

loc_inl0_0x80065278:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x80065280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80065288;
    }
}

loc_inl0_0x80065284:
{
    r4 = 1;
}

loc_inl0_0x80065288:
{
    r3 = r4;
}

loc_inl0_cont_80065268:
{
    // end of inlined leaf 0x80065268
}

loc_8007B1F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007B210;
    }
}

loc_8007B1F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -3264);
    r4 = 476;
    r5 = 0x80590000u;
    r5 = (r5 + -2888);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007B210u;
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
}

loc_8007B210:
{
    r3 = r29;
    // inline leaf 0x80065268 (10 guest instruction(s))
}

loc_inl1_0x80065268:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x80065274:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80065288;
    }
}

loc_inl1_0x80065278:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x80065280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80065288;
    }
}

loc_inl1_0x80065284:
{
    r4 = 1;
}

loc_inl1_0x80065288:
{
    r3 = r4;
}

loc_inl1_cont_80065268:
{
    // end of inlined leaf 0x80065268
}

loc_8007B21C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007B268;
    }
}

loc_8007B220:
{
}

loc_8007B224:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(8))) {
        goto loc_8007B268;
    }
}

loc_8007B228:
{
}

loc_8007B22C:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_8007B244;
    }
}

loc_8007B230:
{
    r0 = -1;
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3_addr_0 = (r3 + r30);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8007B26C;
}

loc_8007B244:
{
    r3 = MemoryInline::FlatRead32(r29);
    // inline leaf 0x80065244 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16(r3);
    // end of inlined leaf 0x80065244
}

loc_8007B250:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r3))) {
        goto loc_8007B268;
    }
}

loc_8007B254:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3_addr_1 = (r3 + r30);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8007B26C;
}

loc_8007B268:
{
    r3 = 0;
}

loc_8007B26C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8007B1C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007B1C4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007B1C4 func_8007B1C4 preserves=true fpr_mask=0x00000000
