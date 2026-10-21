#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B2DB4(CpuContext* ctx);
extern "C" uint64_t func_803B2DB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B6054(CpuContext* ctx);
extern "C" uint64_t func_803B6054_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B6240(CpuContext* ctx);
extern "C" uint64_t func_803B6240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803B2F2C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803B2F2Cu);
    goto loc_803B2F2C;

loc_803B2F2C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 0;
    r27 = 0;
}

loc_803B2F54:
{
    r3 = (r29 & 65535);
    r4 = (r27 & 65535);
    ctx->lr = 0x803B2F60u;
    if constexpr (KnownRegArgsCpuCall<0x803B6054u>(&func_803B6054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B6054_73E = func_803B6054_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B6054_73E);
        r4 = static_cast<uint32_t>(regargs_result_803B6054_73E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B6054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_803B2F68:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(0))) {
        goto loc_803B2F90;
    }
}

loc_803B2F6C:
{
    r3 = (r29 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x803B6240u>(&func_803B6240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_803B6240_ACF = func_803B6240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B6240_ACF);
        r4 = static_cast<uint32_t>(regargs_result_803B6240_ACF >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B6240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r26 = (r26 - r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
}

loc_803B2F88:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_803B2F90;
    }
}

loc_803B2F8C:
{
    r31 = r26;
}

loc_803B2F90:
{
    r27 = (r27 + 1);
}

loc_803B2F98:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(3))) {
        goto loc_803B2F54;
    }
}

loc_803B2F9C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_803B2FA4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803B2FB0;
    }
}

loc_803B2FA8:
{
    r3 = 0;
    goto loc_803B30C0;
}

loc_803B2FB0:
{
    r3 = (r29 & 65535);
    r4 = 1;
    ctx->lr = 0x803B2FBCu;
    if constexpr (KnownRegArgsCpuCall<0x803B2DB4u>(&func_803B2DB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_803B2DB4_1133 = func_803B2DB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B2DB4_1133);
        r4 = static_cast<uint32_t>(regargs_result_803B2DB4_1133 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B2DB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_803B2FC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B3040;
    }
}

loc_803B2FC8:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r4 = (r3 + 27242);
    r3 = 0;
    r0 = 3;
    ctr = r0;
}

loc_803B2FEC:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_803B2FF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B3030;
    }
}

loc_803B2FF8:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r29));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_803B3008:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_803B3010;
    }
}

loc_803B300C:
{
    r30 = r31;
}

loc_803B3010:
{
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r30));
    r3 = r28;
    r4 = (r29 & 65535);
    r0 = (0 - r30);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x803B3028u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80272E94u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    r3 = (r30 & 65535);
    goto loc_803B30C0;
}

loc_803B3030:
{
    r3 = (r3 + 1);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B2FEC;
    }
}

loc_803B303C:
{
    goto loc_803B30BC;
}

loc_803B3040:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r5 = (r3 + 27242);
    r4 = 0;
    r3 = (r29 & 65535);
    r0 = 3;
    ctr = r0;
}

loc_803B3068:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_803B3070:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803B30B0;
    }
}

loc_803B3074:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_803B3080:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_803B3088;
    }
}

loc_803B3084:
{
    r30 = r31;
}

loc_803B3088:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r30);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r3 = r28;
    r4 = (r29 & 65535);
    r0 = (0 - r30);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x803B30A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80272E94u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    r3 = (r30 & 65535);
    goto loc_803B30C0;
}

loc_803B30B0:
{
    r4 = (r4 + 1);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B3068;
    }
}

loc_803B30BC:
{
    r3 = (r30 & 65535);
}

loc_803B30C0:
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B2F2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B2F2C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B2F2C func_803B2F2C preserves=true fpr_mask=0x00000000
