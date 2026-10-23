#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8037695C(CpuContext* ctx);
extern "C" uint32_t func_8037695C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_801ECA5C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801ECA5C;

loc_801ECA5C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r31 = r9;
    ctx->lr = 0x801ECA90u;
    if constexpr (KnownRegArgsCpuCall<0x8037695Cu>(&func_8037695C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8037695C_6B4 = func_8037695C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8037695C_6B4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8037695Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_801ECA94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801ECAA0;
    }
}

loc_801ECA98:
{
    r3 = 0;
    goto loc_801ECB78;
}

loc_801ECAA0:
{
    r3 = (r31 & 65535);
    r0 = (r3 & 15360);
}

loc_801ECAAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801ECB74;
    }
}

loc_801ECAB0:
{
    r0 = (r3 & 2048);
}

loc_801ECAB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801ECAC8;
    }
}

loc_801ECABC:
{
    r3 = MemoryInline::FlatRead16(r25);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r0));
}

loc_801ECAC8:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 1024);
}

loc_801ECAD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801ECAE4;
    }
}

loc_801ECAD8:
{
    r3 = MemoryInline::FlatRead16(r25);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r0));
}

loc_801ECAE4:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 8192);
}

loc_801ECAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801ECB00;
    }
}

loc_801ECAF4:
{
    r3 = MemoryInline::FlatRead16(r26);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r0));
}

loc_801ECB00:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 4096);
}

loc_801ECB0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801ECB1C;
    }
}

loc_801ECB10:
{
    r3 = MemoryInline::FlatRead16(r26);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r0));
}

loc_801ECB1C:
{
    r3 = MemoryInline::FlatRead16(r25);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
}

loc_801ECB28:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_801ECB34;
    }
}

loc_801ECB2C:
{
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r27));
    goto loc_801ECB44;
}

loc_801ECB34:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_801ECB3C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_801ECB44;
    }
}

loc_801ECB40:
{
    MemoryInline::FlatWrite16(r25, static_cast<uint16_t>(r28));
}

loc_801ECB44:
{
    r3 = MemoryInline::FlatRead16(r26);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_801ECB50:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_801ECB5C;
    }
}

loc_801ECB54:
{
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r29));
    goto loc_801ECB6C;
}

loc_801ECB5C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_801ECB64:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_801ECB6C;
    }
}

loc_801ECB68:
{
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r30));
}

loc_801ECB6C:
{
    r3 = 1;
    goto loc_801ECB78;
}

loc_801ECB74:
{
    r3 = 0;
}

loc_801ECB78:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return r3;
}

}

extern "C" void func_801ECA5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801ECA5C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x0000080B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801ECA5C func_801ECA5C preserves=true fpr_mask=0x00000000
