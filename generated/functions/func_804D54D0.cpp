#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804575D8(CpuContext* ctx);
extern "C" uint64_t func_804575D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804577F4(CpuContext* ctx);
extern "C" uint64_t func_804577F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804D54D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r31_ca_0 = 0;
    uint32_t r31_ca_1 = 0;
    uint32_t r31_ca_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804D54D0u);
    goto loc_804D54D0;

loc_804D54D0:
{
    guest_range_1 = MemoryAlias::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryAlias::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryAlias::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r6 = 0x80000000u;
    r29 = r5;
    r0 = MemoryAlias::FlatRead32((r6 + 248));
    r28 = r3;
    r27 = r4;
    r5 = 0;
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r26 = (r26_rot_0 & 1073741823);
    r6 = r26;
    if constexpr (KnownRegArgsCpuCall<0x804577F4u>(&func_804577F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804577F4_E48 = func_804577F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804577F4_E48);
        r4 = static_cast<uint32_t>(regargs_result_804577F4_E48 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804577F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r7 = 0;
    r0 = (r3 ^ -2147483648);
    r6 = (r7 ^ -2147483648);
    r30 = r4;
    r5 = (r4 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r31 = r3;
    r6_not_0 = ~(r6);
    r6_ca_0 = (xer >> 29) & 1u;
    r6 = (r6_not_0 + r0);
    r6 = (r6 + r6_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_1 = ~(r0);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_not_1 + r0);
    r6 = (r6 + r6_ca_1);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804D5538;
    }
}

loc_804D5530:
{
    r30 = (r4 + r26);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(r26)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r31_ca_1 = (xer >> 29) & 1u;
    r31 = (r3 + r7);
    r31 = (r31 + r31_ca_1);
}

loc_804D5538:
{
    r4 = 1125908480;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & -8);
    r0 = (r4 + -8573);
    r5 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r26)) >> 32));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r3_mrot_0 = (r3_rot_1 & 7);
    r3_mdest_0 = (r3 & -8);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r6 = (r6_rot_0 & 131071);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804575D8_1B8E = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_1B8E);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_1B8E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r6 = 1000;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804577F4u>(&func_804577F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804577F4_2163 = func_804577F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804577F4_2163);
        r4 = static_cast<uint32_t>(regargs_result_804577F4_2163 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804577F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryAlias::FlatWrite32((r29 + 36), r4);
    r26 = 0x80000000u;
    r4 = 274857984;
    r3 = r31;
    r0 = MemoryAlias::FlatRead32((r26 + 248));
    r6 = (r4 + 19923);
    r4 = r30;
    r5 = 0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_0 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_1 & 67108863);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804575D8_2901 = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_2901);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_2901 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r6 = 1000;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804577F4u>(&func_804577F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804577F4_2ED6 = func_804577F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804577F4_2ED6);
        r4 = static_cast<uint32_t>(regargs_result_804577F4_2ED6 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804577F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryAlias::FlatWrite32((r29 + 32), r4);
    r4 = (r27 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r3_not_0 = ~(r31);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r3_not_0 + r28);
    r3 = (r3 + r3_ca_0);
    r5 = 0;
    r0 = MemoryAlias::FlatRead32((r26 + 248));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_2 & 1073741823);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804575D8_362E = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_362E);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_362E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r27 = 65536;
    r28 = r4;
    r26 = r3;
    r5 = 0;
    r6 = (r27 + 20864);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804575D8_3C39 = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_3C39);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_3C39 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 720896;
    r6 = (r27 + 20864);
    r0 = (r3 + 9589);
    r5 = 0;
    r31 = (r4 + r0);
    r3 = r26;
    r4 = r28;
    if constexpr (KnownRegArgsCpuCall<0x804577F4u>(&func_804577F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804577F4_426F = func_804577F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804577F4_426F);
        r4 = static_cast<uint32_t>(regargs_result_804577F4_426F >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804577F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804D55FC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_804D560C;
    }
}

loc_804D5600:
{
    r4 = (r4 + 65536);
    r31 = (r31 + -1);
    r4 = (r4 + 20864);
}

loc_804D560C:
{
    r6 = 0x92490000u;
    r5 = -1282605056;
    r7 = (r31 + 6);
    r3 = 1374420992;
    r0 = (r5 + -1615);
    r6 = (r6 + 9363);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r9 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r31))) >> 32));
    r3 = (r5 + r7);
    r3 = (static_cast<int32_t>(r3) >> 2);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    r0 = (r0 + r31);
    r3 = (r3 + r5);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = (r3 * 7);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r3 = (r0 + r3);
    r0 = (r7 - r5);
    guest_range_0 = MemoryAlias::ResolveRangeHost(r29, 0, 32u, false, true);
    MemoryAlias::WriteResolved32(guest_range_0, 24u, (r29 + 24), r0);
    r10 = (r3 * 365);
    goto loc_804D5670;
}

loc_804D5668:
{
    r10 = (r10 + -365);
    r3 = (r3 + -1);
}

loc_804D5670:
{
}

loc_804D5674:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1))) {
        goto loc_804D56B0;
    }
}

loc_804D5678:
{
    r5 = (r3 + -1);
    r0 = (r3 + 3);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r7 = (static_cast<int32_t>(r5) >> 7);
    r5 = (static_cast<int32_t>(r5) >> 5);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_4 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 1);
    r5 = (r5 + r6);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    r6 = (r7 + r8);
    r0 = (r0 - r5);
    r0 = (r6 + r0);
    goto loc_804D56B4;
}

loc_804D56B0:
{
    r0 = 0;
}

loc_804D56B4:
{
    r7 = (r10 + r0);
}

loc_804D56BC:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r7))) {
        goto loc_804D5668;
    }
}

loc_804D56C0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & -1073741824);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r6 = (r6_rot_6 & 1);
    r5 = (r0 - r6);
    MemoryAlias::WriteResolved32(guest_range_0, 20u, (r29 + 20), r3);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -1);
    r0 = (r31 - r7);
    r5 = (r5 + r6);
    MemoryAlias::WriteResolved32(guest_range_0, 28u, (r29 + 28), r0);
    r7 = 0;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D570C;
    }
}

loc_804D56E8:
{
    r5 = 1374420992;
    r5 = (r5 + -31457);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r5 = (static_cast<int32_t>(r5) >> 5);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_7 & 1);
    r5 = (r5 + r6);
    r5 = (r5 * 100);
    r5 = (r3 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D5730;
    }
}

loc_804D570C:
{
    r5 = 1374420992;
    r5 = (r5 + -31457);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r5 = (static_cast<int32_t>(r5) >> 7);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_9 & 1);
    r5 = (r5 + r6);
    r5 = (r5 * 400);
    r3 = (r3 - r5);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D5734;
    }
}

loc_804D5730:
{
    r7 = 1;
}

loc_804D5734:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_804D5738:
{
    r7 = 0x80620000u;
    r7 = (r7 + -8392);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D574C;
    }
}

loc_804D5744:
{
    r7 = 0x80620000u;
    r7 = (r7 + -8344);
}

loc_804D574C:
{
    r6 = 12;
    r3 = 48;
    // nop
}

loc_804D5758:
{
    r3 = (r3 + -4);
    r6 = (r6 + -1);
    r7_addr_2 = (r7 + r3);
    r5 = MemoryAlias::FlatRead32(r7_addr_2);
}

loc_804D5768:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r5))) {
        goto loc_804D5758;
    }
}

loc_804D576C:
{
    r5 = 0x88890000u;
    MemoryAlias::WriteResolved32(guest_range_0, 16u, (r29 + 16), r6);
    r6 = (r5 + -30583);
    r11 = (r1 + 32);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r7_addr_3 = (r7 + r3);
    r3 = MemoryAlias::FlatRead32(r7_addr_3);
    r3 = (r0 - r3);
    r0 = (r3 + 1);
    MemoryAlias::WriteResolved32(guest_range_0, 12u, (r29 + 12), r0);
    r3 = (r5 + r4);
    r0 = (static_cast<int32_t>(r3) >> 5);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r9 = (r0 + r5);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    r0 = (r0 + r9);
    r7 = (static_cast<int32_t>(r0) >> 5);
    r5 = (static_cast<int32_t>(r0) >> 5);
    r0 = (static_cast<int32_t>(r3) >> 5);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_4 & 1);
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_12 & 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r7 = (r7 + r8);
    r0 = (r0 + r3);
    r5 = (r5 + r6);
    r3 = (r5 * 60);
    MemoryAlias::WriteResolved32(guest_range_0, 8u, (r29 + 8), r7);
    r0 = (r0 * 60);
    r3 = (r9 - r3);
    MemoryAlias::WriteResolved32(guest_range_0, 4u, (r29 + 4), r3);
    r0 = (r4 - r0);
    MemoryAlias::WriteResolved32(guest_range_0, 0u, r29, r0);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryAlias::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D54D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D54D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x81 cr_write=0x81 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D54D0 func_804D54D0 preserves=true fpr_mask=0x00000000
