#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802190E4(CpuContext* ctx);
extern "C" uint64_t func_802190E4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801EF2A8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801EF2A8u);
    goto loc_801EF2A8;

loc_801EF2A8:
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
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r31 = r9;
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead16((r3 + 140));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r3 = (r3 + 3584);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801EF2FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_801EF39C;
    }
}

loc_801EF300:
{
    r0 = (r5 & 65535);
}

loc_801EF308:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801EF32C;
    }
}

loc_801EF30C:
{
    // inline leaf 0x8027F128 (12 guest instruction(s))
}

loc_inl1_0x8027F128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl1_0x8027F130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_inl1_0x8027F13C;
    }
}

loc_inl1_0x8027F134:
{
    r3 = 0;
    goto loc_inl1_cont_8027F128;
}

loc_inl1_0x8027F13C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + -17);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_8027F128:
{
    // end of inlined leaf 0x8027F128
}

loc_801EF314:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EF324;
    }
}

loc_801EF318:
{
    r3 = 65536;
    r27 = (r3 + -1);
    goto loc_801EF32C;
}

loc_801EF324:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r27 = MemoryInline::FlatRead16((r3 + 140));
}

loc_801EF32C:
{
    r0 = (r27 & 65535);
}

loc_801EF334:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801EF34C;
    }
}

loc_801EF338:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r3 = (r3 + 3584);
    goto loc_801EF350;
}

loc_801EF34C:
{
    r3 = 0;
}

loc_801EF350:
{
}

loc_801EF354:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EF374;
    }
}

loc_801EF358:
{
    // inline leaf 0x8027F128 (12 guest instruction(s))
}

loc_inl2_0x8027F128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl2_0x8027F130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_inl2_0x8027F13C;
    }
}

loc_inl2_0x8027F134:
{
    r3 = 0;
    goto loc_inl2_cont_8027F128;
}

loc_inl2_0x8027F13C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + -17);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
}

loc_inl2_cont_8027F128:
{
    // end of inlined leaf 0x8027F128
}

loc_801EF360:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EF374;
    }
}

loc_801EF364:
{
    r3 = 65536;
    r28 = (r3 + -1);
    r29 = r28;
    goto loc_801EF39C;
}

loc_801EF374:
{
    r0 = (r28 & 65535);
}

loc_801EF37C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801EF388;
    }
}

loc_801EF380:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r28 = MemoryInline::FlatRead16((r3 + 142));
}

loc_801EF388:
{
    r0 = (r29 & 65535);
}

loc_801EF390:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801EF39C;
    }
}

loc_801EF394:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r29 = MemoryInline::FlatRead16((r3 + 144));
}

loc_801EF39C:
{
    MemoryInline::FlatWrite16((r26 + 4), static_cast<uint16_t>(r27));
    MemoryInline::FlatWrite16((r26 + 6), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r26 + 8), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite32((r26 + 144), r31);
    r0 = (r30 & 255);
}

loc_801EF3B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EF3D4;
    }
}

loc_801EF3BC:
{
    r3 = r31;
    r4 = (r26 + 16);
    r5 = 5;
    r6 = 7;
    ctx->lr = 0x801EF3D0u;
    if constexpr (KnownRegArgsCpuCall<0x802190E4u>(&func_802190E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802190E4_182E = func_802190E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802190E4_182E);
        r4 = static_cast<uint32_t>(regargs_result_802190E4_182E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802190E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801EF3E8;
}

loc_801EF3D4:
{
    r3 = r31;
    r4 = (r26 + 16);
    r5 = 5;
    r6 = 6;
    ctx->lr = 0x801EF3E8u;
    if constexpr (KnownRegArgsCpuCall<0x802190E4u>(&func_802190E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802190E4_1C3C = func_802190E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802190E4_1C3C);
        r4 = static_cast<uint32_t>(regargs_result_802190E4_1C3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802190E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801EF3E8:
{
    r0 = 4;
    MemoryInline::FlatWrite16((r26 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 32));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r26 + 32), static_cast<uint8_t>(r0));
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801EF2A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801EF2A8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801EF2A8 func_801EF2A8 preserves=true fpr_mask=0x00000000
