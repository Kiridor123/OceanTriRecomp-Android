#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804575D8(CpuContext* ctx);
extern "C" uint64_t func_804575D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804E98D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_10 = 0;
    uint32_t r0_ca_11 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_9 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_10 = 0;
    uint32_t r0_not_11 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_not_6 = 0;
    uint32_t r0_not_7 = 0;
    uint32_t r0_not_8 = 0;
    uint32_t r0_not_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_10 = 0;
    uint32_t r3_mdest_11 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mdest_7 = 0;
    uint32_t r3_mdest_8 = 0;
    uint32_t r3_mdest_9 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_10 = 0;
    uint32_t r3_mrot_11 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_mrot_7 = 0;
    uint32_t r3_mrot_8 = 0;
    uint32_t r3_mrot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_10 = 0;
    uint32_t r5_ca_11 = 0;
    uint32_t r5_ca_12 = 0;
    uint32_t r5_ca_13 = 0;
    uint32_t r5_ca_14 = 0;
    uint32_t r5_ca_15 = 0;
    uint32_t r5_ca_16 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_ca_4 = 0;
    uint32_t r5_ca_5 = 0;
    uint32_t r5_ca_6 = 0;
    uint32_t r5_ca_7 = 0;
    uint32_t r5_ca_8 = 0;
    uint32_t r5_ca_9 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_10 = 0;
    uint32_t r5_not_11 = 0;
    uint32_t r5_not_12 = 0;
    uint32_t r5_not_13 = 0;
    uint32_t r5_not_14 = 0;
    uint32_t r5_not_15 = 0;
    uint32_t r5_not_16 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_not_4 = 0;
    uint32_t r5_not_5 = 0;
    uint32_t r5_not_6 = 0;
    uint32_t r5_not_7 = 0;
    uint32_t r5_not_8 = 0;
    uint32_t r5_not_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_804E98D0;

loc_804E98D0:
{
    guest_range_0 = MemoryHw::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryHw::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r0 = MemoryHw::FlatRead32((r13 + -19608));
    r29 = r3;
}

loc_804E98F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E990C;
    }
}

loc_804E98F4:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 192));
    r0 = (r0 & -32769);
    r0 = (r0 | 32768);
    MemoryHw::FlatWrite32((r3 + 192), r0);
    goto loc_804E991C;
}

loc_804E990C:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 192));
    r0 = (r0 & -32769);
    MemoryHw::FlatWrite32((r3 + 192), r0);
}

loc_804E991C:
{
    ctx->lr = 0x804E9920u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_1681 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_1681);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_1681 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r28 = r4;
    r27 = r3;
    r26 = 2;
    r25 = 0;
}

loc_804E9930:
{
    ctx->lr = 0x804E9934u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_1AD4 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_1AD4);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_1AD4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r7 = (r4 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r6 = 486;
    r0_not_2 = ~(r27);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r3);
    r0 = (r0 + r0_ca_2);
    r5 = 0;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & -8);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r3_mrot_2 = (r3_rot_3 & 7);
    r3_mdest_2 = (r3 & -8);
    r3 = (r3_mdest_2 | r3_mrot_2);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_804575D8_2162 = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_2162);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_2162 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    }
    r0 = (r3 ^ -2147483648);
    r5 = (r25 ^ -2147483648);
    r3 = (r4 - r26);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r26) ? 1u : 0u) << 29);
    r5_not_2 = ~(r5);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r0);
    r5 = (r5 + r5_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_3 = ~(r0);
    r5_ca_3 = (xer >> 29) & 1u;
    r5 = (r5_not_3 + r0);
    r5 = (r5 + r5_ca_3);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804E9930;
    }
}

loc_804E9970:
{
    r31 = -847249408;
    r30 = 0;
    r0 = MemoryHw::FlatRead32((r31 + 192));
    r27 = 2;
    r28 = 0;
    r0 = (r0 & -16385);
    MemoryHw::FlatWrite32((r31 + 192), r0);
}

loc_804E998C:
{
    r0 = (r29 & 128);
}

loc_804E9990:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E99C4;
    }
}

loc_804E9994:
{
    r0 = MemoryHw::FlatRead32((r13 + -19608));
}

loc_804E999C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E99B0;
    }
}

loc_804E99A0:
{
    r0 = MemoryHw::FlatRead32((r31 + 192));
    r0 = (r0 & -32769);
    MemoryHw::FlatWrite32((r31 + 192), r0);
    goto loc_804E99F0;
}

loc_804E99B0:
{
    r0 = MemoryHw::FlatRead32((r31 + 192));
    r0 = (r0 & -32769);
    r0 = (r0 | 32768);
    MemoryHw::FlatWrite32((r31 + 192), r0);
    goto loc_804E99F0;
}

loc_804E99C4:
{
    r0 = MemoryHw::FlatRead32((r13 + -19608));
}

loc_804E99CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E99E4;
    }
}

loc_804E99D0:
{
    r0 = MemoryHw::FlatRead32((r31 + 192));
    r0 = (r0 & -32769);
    r0 = (r0 | 32768);
    MemoryHw::FlatWrite32((r31 + 192), r0);
    goto loc_804E99F0;
}

loc_804E99E4:
{
    r0 = MemoryHw::FlatRead32((r31 + 192));
    r0 = (r0 & -32769);
    MemoryHw::FlatWrite32((r31 + 192), r0);
}

loc_804E99F0:
{
    ctx->lr = 0x804E99F4u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_2EF6 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_2EF6);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_2EF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r26 = r4;
    r25 = r3;
}

loc_804E99FC:
{
    ctx->lr = 0x804E9A00u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_332D = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_332D);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_332D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r7 = (r4 - r26);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r26) ? 1u : 0u) << 29);
    r6 = 486;
    r0_not_5 = ~(r25);
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_not_5 + r3);
    r0 = (r0 + r0_ca_5);
    r5 = 0;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_6 & -8);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r4 = (r4_rot_5 & -8);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r3_mrot_5 = (r3_rot_7 & 7);
    r3_mdest_5 = (r3 & -8);
    r3 = (r3_mdest_5 | r3_mrot_5);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_804575D8_39BB = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_39BB);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_39BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    }
    r0 = (r3 ^ -2147483648);
    r5 = (r28 ^ -2147483648);
    r3 = (r4 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    r5_not_6 = ~(r5);
    r5_ca_6 = (xer >> 29) & 1u;
    r5 = (r5_not_6 + r0);
    r5 = (r5 + r5_ca_6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_6)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_6)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_7 = ~(r0);
    r5_ca_7 = (xer >> 29) & 1u;
    r5 = (r5_not_7 + r0);
    r5 = (r5 + r5_ca_7);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804E99FC;
    }
}

loc_804E9A3C:
{
    r0 = MemoryHw::FlatRead32((r31 + 192));
    r0 = (r0 & -16385);
    r0 = (r0 | 16384);
    MemoryHw::FlatWrite32((r31 + 192), r0);
    ctx->lr = 0x804E9A50u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_4217 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_4217);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_4217 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r25 = r4;
    r26 = r3;
}

loc_804E9A58:
{
    ctx->lr = 0x804E9A5Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_464E = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_464E);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_464E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r7 = (r4 - r25);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r25) ? 1u : 0u) << 29);
    r6 = 486;
    r0_not_7 = ~(r26);
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_not_7 + r3);
    r0 = (r0 + r0_ca_7);
    r5 = 0;
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_9 & -8);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r4 = (r4_rot_7 & -8);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r3_mrot_7 = (r3_rot_10 & 7);
    r3_mdest_7 = (r3 & -8);
    r3 = (r3_mdest_7 | r3_mrot_7);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_804575D8_4CDE = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_4CDE);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_4CDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    }
    r0 = (r3 ^ -2147483648);
    r5 = (r28 ^ -2147483648);
    r3 = (r4 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    r5_not_9 = ~(r5);
    r5_ca_9 = (xer >> 29) & 1u;
    r5 = (r5_not_9 + r0);
    r5 = (r5 + r5_ca_9);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_9)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_9)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_10 = ~(r0);
    r5_ca_10 = (xer >> 29) & 1u;
    r5 = (r5_not_10 + r0);
    r5 = (r5 + r5_ca_10);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804E9A58;
    }
}

loc_804E9A98:
{
    r0 = MemoryHw::FlatRead32((r31 + 192));
    r30 = (r30 + 1);
}

loc_804E9AA4:
{
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_2 & 254);
    r0 = (r0 & -16385);
    MemoryHw::FlatWrite32((r31 + 192), r0);
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(8))) {
        goto loc_804E998C;
    }
}

loc_804E9AB4:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 196));
    r0 = (r0 & -32769);
    r0 = (r0 | 16384);
    MemoryHw::FlatWrite32((r3 + 196), r0);
    ctx->lr = 0x804E9ACCu;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_56EC = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_56EC);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_56EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r31 = r4;
    r30 = r3;
    r29 = 2;
    r28 = 0;
}

loc_804E9ADC:
{
    ctx->lr = 0x804E9AE0u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_5B3F = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_5B3F);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_5B3F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r7 = (r4 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r6 = 486;
    r0_not_9 = ~(r30);
    r0_ca_9 = (xer >> 29) & 1u;
    r0 = (r0_not_9 + r3);
    r0 = (r0 + r0_ca_9);
    r5 = 0;
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_12 & -8);
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r4 = (r4_rot_9 & -8);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r3_mrot_9 = (r3_rot_13 & 7);
    r3_mdest_9 = (r3 & -8);
    r3 = (r3_mdest_9 | r3_mrot_9);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_804575D8_61D1 = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_61D1);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_61D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    }
    r0 = (r3 ^ -2147483648);
    r5 = (r28 ^ -2147483648);
    r3 = (r4 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r5_not_12 = ~(r5);
    r5_ca_12 = (xer >> 29) & 1u;
    r5 = (r5_not_12 + r0);
    r5 = (r5 + r5_ca_12);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_12)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_12)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_13 = ~(r0);
    r5_ca_13 = (xer >> 29) & 1u;
    r5 = (r5_not_13 + r0);
    r5 = (r5 + r5_ca_13);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804E9ADC;
    }
}

loc_804E9B1C:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 192));
    r0 = (r0 & -16385);
    r0 = (r0 | 16384);
    MemoryHw::FlatWrite32((r3 + 192), r0);
    ctx->lr = 0x804E9B34u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_6A4B = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_6A4B);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_6A4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r28 = r4;
    r31 = r3;
    r30 = 2;
    r29 = 0;
}

loc_804E9B44:
{
    ctx->lr = 0x804E9B48u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_6E9E = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_6E9E);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_6E9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r7 = (r4 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r6 = 486;
    r0_not_11 = ~(r31);
    r0_ca_11 = (xer >> 29) & 1u;
    r0 = (r0_not_11 + r3);
    r0 = (r0 + r0_ca_11);
    r5 = 0;
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_15 & -8);
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r4 = (r4_rot_11 & -8);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r3_mrot_11 = (r3_rot_16 & 7);
    r3_mdest_11 = (r3 & -8);
    r3 = (r3_mdest_11 | r3_mrot_11);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_804575D8_753A = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_753A);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_753A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    }
    r0 = (r3 ^ -2147483648);
    r5 = (r29 ^ -2147483648);
    r3 = (r4 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r5_not_15 = ~(r5);
    r5_ca_15 = (xer >> 29) & 1u;
    r5 = (r5_not_15 + r0);
    r5 = (r5 + r5_ca_15);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_15)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_15)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_16 = ~(r0);
    r5_ca_16 = (xer >> 29) & 1u;
    r5 = (r5_not_16 + r0);
    r5 = (r5 + r5_ca_16);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804E9B44;
    }
}

loc_804E9B84:
{
    r0 = MemoryHw::FlatRead32((r13 + -19608));
}

loc_804E9B8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804E9BA8;
    }
}

loc_804E9B90:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 200));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_1 & 1);
}

loc_804E9B9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E9BA8;
    }
}

loc_804E9BA0:
{
    r3 = 0;
    goto loc_804E9C00;
}

loc_804E9BA8:
{
    r0 = MemoryHw::FlatRead32((r13 + -19608));
}

loc_804E9BB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E9BCC;
    }
}

loc_804E9BB4:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 192));
    r0 = (r0 & -32769);
    r0 = (r0 | 32768);
    MemoryHw::FlatWrite32((r3 + 192), r0);
    goto loc_804E9BDC;
}

loc_804E9BCC:
{
    r3 = -847249408;
    r0 = MemoryHw::FlatRead32((r3 + 192));
    r0 = (r0 & -32769);
    MemoryHw::FlatWrite32((r3 + 192), r0);
}

loc_804E9BDC:
{
    r4 = -847249408;
    r3 = 1;
    r0 = MemoryHw::FlatRead32((r4 + 196));
    r0 = (r0 & -32769);
    r0 = (r0 | 49152);
    MemoryHw::FlatWrite32((r4 + 196), r0);
    r0 = MemoryHw::FlatRead32((r4 + 192));
    r0 = (r0 & -16385);
    MemoryHw::FlatWrite32((r4 + 192), r0);
}

loc_804E9C00:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryHw::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E98D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E98D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000026FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E98D0 func_804E98D0 preserves=true fpr_mask=0x00000000
