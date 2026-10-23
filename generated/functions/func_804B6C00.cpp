#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D1740(CpuContext* ctx);
extern "C" uint64_t func_804D1740_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_804B6C00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804B6C00;

loc_804B6C00:
{
    MemoryHw::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x804B0000u;
    r3 = 18;
    MemoryHw::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 27296);
    // inline leaf 0x804D1360 (5 guest instruction(s))
    r5 = MemoryHw::FlatRead32((r13 + -15032));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5_addr_0 = (r5 + r0);
    r3 = MemoryHw::FlatRead32(r5_addr_0);
    r5_addr_1 = (r5 + r0);
    MemoryHw::FlatWrite32(r5_addr_1, r4);
    // end of inlined leaf 0x804D1360
    r4 = 0x804B0000u;
    r3 = 19;
    r4 = (r4 + 27520);
    // inline leaf 0x804D1360 (5 guest instruction(s))
    r5 = MemoryHw::FlatRead32((r13 + -15032));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_2 = (r5 + r0);
    r3 = MemoryHw::FlatRead32(r5_addr_2);
    r5_addr_3 = (r5 + r0);
    MemoryHw::FlatWrite32(r5_addr_3, r4);
    // end of inlined leaf 0x804D1360
    r3 = (r13 + -15376);
    // inline leaf 0x804D3FE0 (4 guest instruction(s))
    r0 = 0;
    MemoryHw::FlatWrite32((r3 + 4), r0);
    MemoryHw::FlatWrite32(r3, r0);
    // end of inlined leaf 0x804D3FE0
    r3 = 8192;
    ctx->lr = 0x804B6C3Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1740_8B1 = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_8B1);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_8B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 4096;
    ctx->lr = 0x804B6C44u;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1740_BF4 = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_BF4);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_BF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryHw::FlatRead32((r13 + -15440));
    r0 = MemoryHw::FlatRead16((r3 + 10));
    r0 = (r0 | 15);
    MemoryHw::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B6C00 func_804B6C00 preserves=true fpr_mask=0x00000000
