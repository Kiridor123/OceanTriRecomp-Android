#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B4CC8(CpuContext* ctx);
extern "C" uint32_t func_803B4CC8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4D4C(CpuContext* ctx);
extern "C" uint32_t func_803B4D4C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803ADD88_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803ADD88u);
    goto loc_803ADD88;

loc_803ADD88:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r31 = (r3 + 148);
    r30 = 0;
    r3 = 0;
    ctx->lr = 0x803ADDB0u;
    if constexpr (KnownRegArgsCpuCall<0x803B4CC8u>(&func_803B4CC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4CC8_5D2 = func_803B4CC8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4CC8_5D2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4CC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803ADDB4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803ADDBC;
    }
}

loc_803ADDB8:
{
    r30 = 1;
}

loc_803ADDBC:
{
    r6 = 0;
    r5 = 0;
    r3 = 1;
    r0 = 3;
    ctr = r0;
}

loc_803ADDD0:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = (r4 & 1);
}

loc_803ADDDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ADE10;
    }
}

loc_803ADDE0:
{
    r0 = (r4 & 2);
}

loc_803ADDE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ADE10;
    }
}

loc_803ADDEC:
{
    r0 = (r4 & 4096);
}

loc_803ADDF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ADE10;
    }
}

loc_803ADDF8:
{
    r0 = (r4 & 8192);
}

loc_803ADE00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ADE10;
    }
}

loc_803ADE04:
{
    r0 = (r4 & 4);
}

loc_803ADE0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ADE34;
    }
}

loc_803ADE10:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_803ADE20:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_803ADE34;
    }
}

loc_803ADE24:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    r6 = (r0 & 255);
}

loc_803ADE34:
{
    r5 = (r5 + 1);
    r31 = (r31 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803ADDD0;
    }
}

loc_803ADE40:
{
}

loc_803ADE44:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_803ADE58;
    }
}

loc_803ADE48:
{
    r3 = (r13 + -22448);
    r3_addr_1 = (r3 + r6);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 147), static_cast<uint8_t>(r0));
}

loc_803ADE58:
{
    r3 = 0;
    ctx->lr = 0x803ADE60u;
    if constexpr (KnownRegArgsCpuCall<0x803B4D4Cu>(&func_803B4D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4D4C_101C = func_803B4D4C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4D4C_101C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803ADE64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803ADE74;
    }
}

loc_803ADE68:
{
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 147), static_cast<uint8_t>(r0));
}

loc_803ADE74:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -16864), 0, 4u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r4 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 148), 0, 200u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + 148));
    r0 = (r0 & 2);
}

loc_803ADE88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ADEAC;
    }
}

loc_803ADE8C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r5 + 152));
}

loc_803ADE94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ADEAC;
    }
}

loc_803ADE98:
{
    MemoryInline::FlatWrite8((r5 + 1679), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r5 + 154));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 1680), static_cast<uint8_t>(r0));
}

loc_803ADEAC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r5 + 244));
    r0 = (r0 & 2);
}

loc_803ADEB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ADEE0;
    }
}

loc_803ADEBC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 100u, (r5 + 248));
}

loc_803ADEC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ADEE0;
    }
}

loc_803ADEC8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 1681), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 102u, (r5 + 250));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 1682), static_cast<uint8_t>(r0));
}

loc_803ADEE0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 192u, (r5 + 340));
    r0 = (r0 & 2);
}

loc_803ADEEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ADF14;
    }
}

loc_803ADEF0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 196u, (r5 + 344));
}

loc_803ADEF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ADF14;
    }
}

loc_803ADEFC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 1683), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 198u, (r5 + 346));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 1684), static_cast<uint8_t>(r0));
}

loc_803ADF14:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 148), 0, 200u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r4 + 148));
    r0 = (r0 & 8192);
}

loc_803ADF24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ADF3C;
    }
}

loc_803ADF28:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r4 + 152));
}

loc_803ADF30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803ADF3C;
    }
}

loc_803ADF34:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r4 + 154));
    MemoryInline::FlatWrite16((r4 + 1496), static_cast<uint16_t>(r0));
}

loc_803ADF3C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r4 + 244));
    r0 = (r0 & 8192);
}

loc_803ADF48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ADF64;
    }
}

loc_803ADF4C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 100u, (r4 + 248));
}

loc_803ADF54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803ADF64;
    }
}

loc_803ADF58:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 102u, (r4 + 250));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 1496), static_cast<uint16_t>(r0));
}

loc_803ADF64:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 192u, (r4 + 340));
    r0 = (r0 & 8192);
}

loc_803ADF70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ADF8C;
    }
}

loc_803ADF74:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 196u, (r4 + 344));
}

loc_803ADF7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803ADF8C;
    }
}

loc_803ADF80:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 198u, (r4 + 346));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 1496), static_cast<uint16_t>(r0));
}

loc_803ADF8C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803ADD88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803ADD88_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803ADD88 func_803ADD88 preserves=true fpr_mask=0x00000000
