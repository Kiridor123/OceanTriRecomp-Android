#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8042479C_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8042479Cu);
    goto loc_8042479C;

loc_8042479C:
{
    r8 = MemoryInline::FlatRead32((r13 + -16692));
}

loc_804247A4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804247A8:
{
    r7 = 0;
    r5 = r3;
    r4 = 0;
    r0 = 4;
    ctr = r0;
}

loc_804247BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 31384), 0, 320u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 31384), r8);
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r5 + 31640), r4);
    r6 = (r3 + r7);
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + 31896), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r6 + 31896), static_cast<uint8_t>(r4));
    r0 = (r8 + 1024);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 31388), r0);
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r5 + 31644), r4);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r6 + 31897), static_cast<uint8_t>(r4));
    r0 = (r8 + 2048);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 31392), r0);
    MemoryInline::WriteResolved32(guest_range_0, 264u, (r5 + 31648), r4);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r6 + 31898), static_cast<uint8_t>(r4));
    r0 = (r8 + 3072);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 31396), r0);
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r5 + 31652), r4);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r6 + 31899), static_cast<uint8_t>(r4));
    r0 = (r8 + 4096);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 31400), r0);
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r5 + 31656), r4);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r6 + 31900), static_cast<uint8_t>(r4));
    r0 = (r8 + 5120);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 31404), r0);
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r5 + 31660), r4);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r6 + 31901), static_cast<uint8_t>(r4));
    r0 = (r8 + 6144);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 31408), r0);
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r5 + 31664), r4);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r6 + 31902), static_cast<uint8_t>(r4));
    r0 = (r8 + 7168);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 31412), r0);
    MemoryInline::WriteResolved32(guest_range_0, 284u, (r5 + 31668), r4);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r6 + 31903), static_cast<uint8_t>(r4));
    r8 = (r8 + 8192);
    r7 = (r7 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 31416), r8);
    MemoryInline::WriteResolved32(guest_range_0, 288u, (r5 + 31672), r4);
    r6 = (r3 + r7);
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 31896), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r6 + 31896), static_cast<uint8_t>(r4));
    r0 = (r8 + 1024);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r5 + 31420), r0);
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r5 + 31676), r4);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r6 + 31897), static_cast<uint8_t>(r4));
    r0 = (r8 + 2048);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r5 + 31424), r0);
    MemoryInline::WriteResolved32(guest_range_0, 296u, (r5 + 31680), r4);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r6 + 31898), static_cast<uint8_t>(r4));
    r0 = (r8 + 3072);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r5 + 31428), r0);
    MemoryInline::WriteResolved32(guest_range_0, 300u, (r5 + 31684), r4);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r6 + 31899), static_cast<uint8_t>(r4));
    r0 = (r8 + 4096);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r5 + 31432), r0);
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r5 + 31688), r4);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r6 + 31900), static_cast<uint8_t>(r4));
    r0 = (r8 + 5120);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r5 + 31436), r0);
    MemoryInline::WriteResolved32(guest_range_0, 308u, (r5 + 31692), r4);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r6 + 31901), static_cast<uint8_t>(r4));
    r0 = (r8 + 6144);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r5 + 31440), r0);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r5 + 31696), r4);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r6 + 31902), static_cast<uint8_t>(r4));
    r0 = (r8 + 7168);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r5 + 31444), r0);
    MemoryInline::WriteResolved32(guest_range_0, 316u, (r5 + 31700), r4);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r6 + 31903), static_cast<uint8_t>(r4));
    r8 = (r8 + 8192);
    r5 = (r5 + 64);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804247BC;
    }
}

loc_804248D4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_8042479C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8042479C_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042479C func_8042479C preserves=true fpr_mask=0x00000000
