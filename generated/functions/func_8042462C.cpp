#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8042462C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8042462Cu);
    goto loc_8042462C;

loc_8042462C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -16692));
}

loc_80424648:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80424658;
    }
}

loc_8042464C:
{
    r3 = 65536;
    ctx->lr = 0x80424654u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80040520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r13 + -16692), r3);
}

loc_80424658:
{
    r7 = MemoryInline::FlatRead32((r13 + -16692));
    r6 = 0;
    r4 = r31;
    r3 = 0;
    r0 = 4;
    ctr = r0;
}

loc_80424670:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 31384), 0, 320u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 31384), r7);
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r4 + 31640), r3);
    r5 = (r31 + r6);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 31896), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r5 + 31896), static_cast<uint8_t>(r3));
    r0 = (r7 + 1024);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 31388), r0);
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r4 + 31644), r3);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r5 + 31897), static_cast<uint8_t>(r3));
    r0 = (r7 + 2048);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 31392), r0);
    MemoryInline::WriteResolved32(guest_range_0, 264u, (r4 + 31648), r3);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r5 + 31898), static_cast<uint8_t>(r3));
    r0 = (r7 + 3072);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 31396), r0);
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r4 + 31652), r3);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r5 + 31899), static_cast<uint8_t>(r3));
    r0 = (r7 + 4096);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 31400), r0);
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r4 + 31656), r3);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r5 + 31900), static_cast<uint8_t>(r3));
    r0 = (r7 + 5120);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 31404), r0);
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r4 + 31660), r3);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r5 + 31901), static_cast<uint8_t>(r3));
    r0 = (r7 + 6144);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 31408), r0);
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r4 + 31664), r3);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r5 + 31902), static_cast<uint8_t>(r3));
    r0 = (r7 + 7168);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 31412), r0);
    MemoryInline::WriteResolved32(guest_range_0, 284u, (r4 + 31668), r3);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r5 + 31903), static_cast<uint8_t>(r3));
    r7 = (r7 + 8192);
    r6 = (r6 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 31416), r7);
    MemoryInline::WriteResolved32(guest_range_0, 288u, (r4 + 31672), r3);
    r5 = (r31 + r6);
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 31896), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r5 + 31896), static_cast<uint8_t>(r3));
    r0 = (r7 + 1024);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 31420), r0);
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r4 + 31676), r3);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r5 + 31897), static_cast<uint8_t>(r3));
    r0 = (r7 + 2048);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 31424), r0);
    MemoryInline::WriteResolved32(guest_range_0, 296u, (r4 + 31680), r3);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r5 + 31898), static_cast<uint8_t>(r3));
    r0 = (r7 + 3072);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 31428), r0);
    MemoryInline::WriteResolved32(guest_range_0, 300u, (r4 + 31684), r3);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r5 + 31899), static_cast<uint8_t>(r3));
    r0 = (r7 + 4096);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 31432), r0);
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r4 + 31688), r3);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r5 + 31900), static_cast<uint8_t>(r3));
    r0 = (r7 + 5120);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 31436), r0);
    MemoryInline::WriteResolved32(guest_range_0, 308u, (r4 + 31692), r3);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r5 + 31901), static_cast<uint8_t>(r3));
    r0 = (r7 + 6144);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 31440), r0);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r4 + 31696), r3);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 31902), static_cast<uint8_t>(r3));
    r0 = (r7 + 7168);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 31444), r0);
    MemoryInline::WriteResolved32(guest_range_0, 316u, (r4 + 31700), r3);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 31903), static_cast<uint8_t>(r3));
    r7 = (r7 + 8192);
    r4 = (r4 + 64);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80424670;
    }
}

loc_80424788:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042462C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042462C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8042462C func_8042462C preserves=true fpr_mask=0x00000000
