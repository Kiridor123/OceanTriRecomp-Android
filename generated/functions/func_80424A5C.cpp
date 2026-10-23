#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8042479C(CpuContext* ctx);
extern "C" uint32_t func_8042479C_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80424A5C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_80424A5C;

loc_80424A5C:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r6 = 0;
    r5 = r3;
    r4 = 0;
    r0 = 2;
    ctr = r0;
}

loc_80424A74:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 16084), 0, 4049u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r5 + 16084), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 88u, (r5 + 16172), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 176u, (r5 + 16260), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 264u, (r5 + 16348), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 352u, (r5 + 16436), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 440u, (r5 + 16524), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 528u, (r5 + 16612), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 616u, (r5 + 16700), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 704u, (r5 + 16788), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 792u, (r5 + 16876), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 880u, (r5 + 16964), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 968u, (r5 + 17052), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1056u, (r5 + 17140), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1144u, (r5 + 17228), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1232u, (r5 + 17316), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1320u, (r5 + 17404), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1408u, (r5 + 17492), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1496u, (r5 + 17580), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1584u, (r5 + 17668), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1672u, (r5 + 17756), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1760u, (r5 + 17844), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1848u, (r5 + 17932), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1936u, (r5 + 18020), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2024u, (r5 + 18108), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2112u, (r5 + 18196), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2200u, (r5 + 18284), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2288u, (r5 + 18372), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2376u, (r5 + 18460), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2464u, (r5 + 18548), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2552u, (r5 + 18636), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2640u, (r5 + 18724), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2728u, (r5 + 18812), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2816u, (r5 + 18900), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2904u, (r5 + 18988), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2992u, (r5 + 19076), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3080u, (r5 + 19164), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3168u, (r5 + 19252), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3256u, (r5 + 19340), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3344u, (r5 + 19428), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3432u, (r5 + 19516), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3520u, (r5 + 19604), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3608u, (r5 + 19692), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3696u, (r5 + 19780), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3784u, (r5 + 19868), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3872u, (r5 + 19956), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3960u, (r5 + 20044), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 4048u, (r5 + 20132), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 20220), static_cast<uint8_t>(r4));
    r5 = (r5 + 4224);
    r6 = (r6 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80424A74;
    }
}

loc_80424B40:
{
    r0 = (r6 * 88);
    r4 = (r3 + r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 16084), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 16172), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 16260), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 16348), static_cast<uint8_t>(r0));
    r5 = 1;
    MemoryInline::FlatWrite8((r3 + 16084), static_cast<uint8_t>(r5));
    r0 = (r3 + 16084);
    MemoryInline::FlatWrite32((r3 + 16080), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4632));
    r4 = MemoryInline::FlatRead32((r3 + 16080));
    MemoryInline::FlatWriteFloat32((r4 + 60), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 16080));
    MemoryInline::FlatWriteFloat32((r4 + 64), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 16080));
    MemoryInline::FlatWrite32((r4 + 84), r5);
    if constexpr (KnownRegArgsCpuCall<0x8042479Cu>(&func_8042479C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8042479C_1A70 = func_8042479C_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8042479C_1A70;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042479Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80424A5C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80424A5C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201C gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80424A5C func_80424A5C preserves=true fpr_mask=0x00000000
