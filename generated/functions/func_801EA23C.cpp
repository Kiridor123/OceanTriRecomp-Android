#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A25C(CpuContext* ctx);
extern "C" void func_8004A25C_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8004A25C_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_801EA23C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
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

    goto loc_801EA23C;

loc_801EA23C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = r4;
    r31 = r7;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_801EA260:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_801EA300;
    }
}

loc_801EA264:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_801EA26C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_801EA274;
    }
}

loc_801EA270:
{
    r5 = r6;
}

loc_801EA274:
{
    r26 = 0;
    r27 = r3;
    r3 = 1374420992;
    r28 = (r3 + -31457);
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    goto loc_801EA2F4;
}

loc_801EA28C:
{
    r3 = (r31 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl1_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl1_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF8C;
    }
}

loc_inl1_0x800CEF88:
{
    r0 = 1;
}

loc_inl1_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl1_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r31 = r3;
    r4 = (r3 & 65535);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r28)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r5 = (r4 - r0);
    r3 = 0;
    r4 = r30;
    goto loc_801EA2E0;
}

loc_801EA2C0:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r3 = (r3 + r0);
}

loc_801EA2CC:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r3))) {
        goto loc_801EA2DC;
    }
}

loc_801EA2D0:
{
    r3 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A25Cu) && KnownTranslatedCpuCall<0x8004A25Cu>::kAvailable && !KnownTranslatedCpuCall<0x8004A25Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A25Cu>()) {
        const auto state_free_result_8004A25C_10E3 = func_8004A25C_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004A25C_10E3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004A25Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    goto loc_801EA2EC;
}

loc_801EA2DC:
{
    r4 = (r4 + 6);
}

loc_801EA2E0:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_801EA2E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EA2C0;
    }
}

loc_801EA2EC:
{
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_801EA2F4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
}

loc_801EA2FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r29))) {
        goto loc_801EA28C;
    }
}

loc_801EA300:
{
    r11 = (r1 + 32);
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

extern "C" void func_801EA23C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801EA23C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801EA23C func_801EA23C preserves=true fpr_mask=0x00000000
