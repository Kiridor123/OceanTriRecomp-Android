#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCC90(CpuContext* ctx);
extern "C" uint64_t func_804CCC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80434A4C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80434A4C;

loc_80434A4C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r4 = 0x806D0000u;
    r31 = (r4 + 27520);
    r0 = MemoryInline::FlatRead32((r31 + 176));
}

loc_80434A7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434BDC;
    }
}

loc_80434A80:
{
    r0 = MemoryInline::FlatRead8((r31 + 180));
}

loc_80434A88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80434BDC;
    }
}

loc_80434A8C:
{
    r4 = MemoryInline::FlatRead32((r31 + 160));
    r0 = MemoryInline::FlatRead32((r31 + 164));
    r4 = (r4 * r0);
    r0 = (r4 + 31);
    r30 = (r0 & -32);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r4 = (r4_rot_1 & 1073741823);
    r0 = (r4 + 31);
    r29 = (r0 & -32);
    MemoryInline::FlatWriteRam32((r31 + 332), r3);
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCC90_79F = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_79F);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_79F >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = (r28 + r30);
    MemoryInline::FlatWriteRam32((r31 + 336), r30);
    r3 = r30;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCC90_A18 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_A18);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_A18 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = (r30 + r29);
    MemoryInline::FlatWriteRam32((r31 + 340), r30);
    r3 = r30;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCC90_C91 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_C91);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_C91 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = (r30 + r29);
    r4 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 172), 0, 160u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r31 + 212), r30);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 100), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r31 + 220), r4);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r31 + 224), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r31 + 232), r4);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r31 + 236), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r31 + 244), r4);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r31 + 248), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r31 + 256), r4);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r31 + 260), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r31 + 268), r4);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r31 + 272), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r31 + 280), r4);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r31 + 284), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r31 + 292), r4);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r31 + 296), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r31 + 304), r4);
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r31 + 308), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r31 + 316), r4);
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r31 + 320), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r30 = (r30 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r31 + 328), r4);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 172), r30);
}

loc_80434BDC:
{
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80434A4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80434A4C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80434A4C func_80434A4C preserves=true fpr_mask=0x00000000
