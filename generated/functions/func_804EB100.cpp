#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E9840(CpuContext* ctx);
extern "C" uint64_t func_804E9840_ra608_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804EB100_ra608_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r9, uint32_t arg_r10)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r9 = arg_r9;
    uint32_t r10 = arg_r10;

    goto loc_804EB100;

loc_804EB100:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 34;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r0 = 16;
    r4 = (r1 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 34u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r1 + 10), static_cast<uint8_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r1 + 12), static_cast<uint8_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r1 + 14), static_cast<uint8_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r1 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r1 + 16), static_cast<uint8_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r1 + 18), static_cast<uint8_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r1 + 20), static_cast<uint8_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r1 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r1 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r1 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r1 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r1 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r1 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r1 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_0 & 255);
    r0 = (r0 & 192);
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r1 + 28), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r1 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 22));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_1 & 255);
    r0 = (r0 & 192);
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r1 + 30), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r1 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 24));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_2 & 255);
    r0 = (r0 & 192);
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r1 + 32), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r1 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r3 + 26));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_3 & 255);
    r0 = (r0 & 192);
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r1 + 34), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r1 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r3 + 28));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_4 & 255);
    r0 = (r0 & 192);
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r1 + 36), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r1 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r3 + 30));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_5 & 255);
    r0 = (r0 & 192);
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r1 + 38), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r1 + 39), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 32));
    r3 = 224;
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_6 & 255);
    r0 = (r0 & 192);
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r1 + 40), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r1 + 41), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804E9C20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 2;
    ctx->lr = 0x804EB250u;
    if constexpr (KnownRegArgsCpuCall<0x804E9840u>(&func_804E9840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_804E9840_1F9A = func_804E9840_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804E9840_1F9A);
        r4 = static_cast<uint32_t>(regargs_result_804E9840_1F9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804E9840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EB100(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EB100_ra608_0_18_0(ctx, ctx->gpr[3], ctx->gpr[9], ctx->gpr[10]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000060A gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EB100 func_804EB100 preserves=true fpr_mask=0x00000000
