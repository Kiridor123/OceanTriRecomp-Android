#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80486EDC(CpuContext* ctx);
extern "C" uint64_t func_80486EDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804870F8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    goto loc_804870F8;

loc_804870F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_80487110:
{
    r26 = r3;
    r27 = r5;
    r28 = r6;
    r7 = 0;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80487168;
    }
}

loc_80487124:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (r0 & 16);
}

loc_8048712C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80487168;
    }
}

loc_80487130:
{
    r3 = MemoryInline::FlatRead16(r5);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r0 = MemoryInline::FlatRead16((r5 + 6));
    MemoryInline::FlatWrite16((r6 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r6 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 8));
    MemoryInline::FlatWrite16((r6 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 8));
    r3 = (r0 & -17);
    MemoryInline::FlatWrite8((r6 + 8), static_cast<uint8_t>(r3));
    goto loc_80487240;
}

loc_80487168:
{
    r31 = 0x80740000u;
    r30 = r4;
    r31 = (r31 + -17608);
    r29 = 0;
}

loc_80487178:
{
    r0 = MemoryInline::FlatRead8((r31 + 1368));
    r0 = (r0 & 1);
}

loc_80487180:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804871BC;
    }
}

loc_80487184:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_8048718C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80487198;
    }
}

loc_80487190:
{
    r3 = 0;
    goto loc_80487240;
}

loc_80487198:
{
    r3 = r7;
    r4 = r30;
    r5 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80486EDCu>(&func_80486EDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        const auto regargs_result_80486EDC_CCA = func_80486EDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80486EDC_CCA);
        r4 = static_cast<uint32_t>(regargs_result_80486EDC_CCA >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80486EDCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_804871AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804871B8;
    }
}

loc_804871B0:
{
    r3 = 0;
    goto loc_80487240;
}

loc_804871B8:
{
    r7 = r28;
}

loc_804871BC:
{
    r29 = (r29 + 1);
    r30 = (r30 + 10);
}

loc_804871C8:
{
    r31 = (r31 + 8);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_80487178;
    }
}

loc_804871D0:
{
}

loc_804871D4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80487214;
    }
}

loc_804871D8:
{
}

loc_804871DC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8048720C;
    }
}

loc_804871E0:
{
    r3 = MemoryInline::FlatRead16(r27);
    r0 = MemoryInline::FlatRead16((r27 + 2));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r27 + 4));
    r0 = MemoryInline::FlatRead16((r27 + 6));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r27 + 8));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    goto loc_8048723C;
}

loc_8048720C:
{
    r3 = 0;
    goto loc_80487240;
}

loc_80487214:
{
}

loc_80487218:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(128))) {
        goto loc_8048723C;
    }
}

loc_8048721C:
{
    r3 = r27;
    r4 = r7;
    r5 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80486EDCu>(&func_80486EDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        const auto regargs_result_80486EDC_1663 = func_80486EDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80486EDC_1663);
        r4 = static_cast<uint32_t>(regargs_result_80486EDC_1663 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80486EDCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80487230:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8048723C;
    }
}

loc_80487234:
{
    r3 = 0;
    goto loc_80487240;
}

loc_8048723C:
{
    r3 = MemoryInline::FlatRead8((r28 + 8));
}

loc_80487240:
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
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804870F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804870F8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804870F8 func_804870F8 preserves=true fpr_mask=0x00000000
