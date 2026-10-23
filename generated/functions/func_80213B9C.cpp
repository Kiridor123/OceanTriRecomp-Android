#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80217FB0(CpuContext* ctx);
extern "C" uint64_t func_80217FB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E3B8(CpuContext* ctx);
extern "C" uint64_t func_8027E3B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E468(CpuContext* ctx);
extern "C" uint64_t func_8027E468_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80213B9C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80213B9C;

loc_80213B9C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r31 = r6;
    r3 = (r3 & 255);
    r4 = (r4 & 65535);
    ctx->lr = 0x80213BCCu;
    if constexpr (KnownRegArgsCpuCall<0x8027E3B8u>(&func_8027E3B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E3B8_6E8 = func_8027E3B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3B8_6E8);
        r4 = static_cast<uint32_t>(regargs_result_8027E3B8_6E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E3B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r31, r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r31 + 2), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r31 + 4), r0);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r31 + 6), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r31 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r31 + 10), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r31 + 12), r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r31 + 14), r0);
    }
    r3 = (r1 + 8);
    r4 = (r27 & 255);
    r5 = (r28 & 65535);
    ctx->lr = 0x80213C04u;
    if constexpr (KnownRegArgsCpuCall<0x80217FB0u>(&func_80217FB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217FB0_F8D = func_80217FB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217FB0_F8D);
        r4 = static_cast<uint32_t>(regargs_result_80217FB0_F8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80217FB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 8);
    r4 = (r29 & 255);
    ctx->lr = 0x80213C10u;
    if constexpr (KnownRegArgsCpuCall<0x8027E468u>(&func_8027E468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E468_130F = func_8027E468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E468_130F);
        r4 = static_cast<uint32_t>(regargs_result_8027E468_130F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E468u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_80213C18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80213C48;
    }
}

loc_80213C1C:
{
}

loc_80213C20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80213C5C;
    }
}

loc_80213C24:
{
}

loc_80213C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80213C70;
    }
}

loc_80213C2C:
{
}

loc_80213C30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80213C84;
    }
}

loc_80213C34:
{
}

loc_80213C38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80213C98;
    }
}

loc_80213C3C:
{
}

loc_80213C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80213CAC;
    }
}

loc_80213C44:
{
    goto loc_80213CEC;
}

loc_80213C48:
{
    r0 = 327;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    goto loc_80213CEC;
}

loc_80213C5C:
{
    r0 = 328;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    goto loc_80213CEC;
}

loc_80213C70:
{
    r0 = 444;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    goto loc_80213CEC;
}

loc_80213C84:
{
    r0 = 445;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    goto loc_80213CEC;
}

loc_80213C98:
{
    r0 = 446;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    goto loc_80213CEC;
}

loc_80213CAC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, (r30 + 12));
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r30 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r30 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r30 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r31 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r30 + 20));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r31 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r30 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r31 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r30 + 24));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r31 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r30 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r31 + 14), static_cast<uint16_t>(r0));
}

loc_80213CEC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80213B9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80213B9C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80213B9C func_80213B9C preserves=true fpr_mask=0x00000000
