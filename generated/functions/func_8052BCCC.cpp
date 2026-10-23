#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052BAA4(CpuContext* ctx);
extern "C" uint64_t func_8052BAA4_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8052BCCC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8052BCCC;

loc_8052BCCC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = 0;
    goto loc_8052BD6C;
}

loc_8052BCFC:
{
    r0 = (r31 & 65535);
    r3 = r26;
    r0 = (r0 * 20);
    r4 = (r27 + r0);
    ctx->lr = 0x8052BD10u;
    if constexpr (KnownRegArgsCpuCall<0x8052BAA4u>(&func_8052BAA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8052BAA4_6CF = func_8052BAA4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8052BAA4_6CF);
        r4 = static_cast<uint32_t>(regargs_result_8052BAA4_6CF >> 32);
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
        InvokeDirectCpu<0x8052BAA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r3 + 16);
    goto loc_8052BD60;
}

loc_8052BD1C:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
}

loc_8052BD24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8052BD30;
    }
}

loc_8052BD28:
{
    r3 = 1;
    goto loc_8052BD7C;
}

loc_8052BD30:
{
}

loc_8052BD34:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8052BD5C;
    }
}

loc_8052BD38:
{
    r5 = MemoryInline::FlatRead32((r30 + 12));
    goto loc_8052BD54;
}

loc_8052BD40:
{
}

loc_8052BD44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r5))) {
        goto loc_8052BD50;
    }
}

loc_8052BD48:
{
    r3 = 1;
    goto loc_8052BD7C;
}

loc_8052BD50:
{
    r5 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8052BD54:
{
}

loc_8052BD58:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8052BD40;
    }
}

loc_8052BD5C:
{
    r4 = MemoryInline::FlatRead32(r4);
}

loc_8052BD60:
{
}

loc_8052BD64:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8052BD1C;
    }
}

loc_8052BD68:
{
    r31 = (r31 + 1);
}

loc_8052BD6C:
{
    r0 = (r31 & 65535);
}

loc_8052BD74:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r28))) {
        goto loc_8052BCFC;
    }
}

loc_8052BD78:
{
    r3 = 0;
}

loc_8052BD7C:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052BCCC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052BCCC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052BCCC func_8052BCCC preserves=true fpr_mask=0x00000000
