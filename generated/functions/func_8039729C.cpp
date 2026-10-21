#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AF24(CpuContext* ctx);
extern "C" uint64_t func_8004AF24_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_8039729C_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8039729Cu);
    goto loc_8039729C;

loc_8039729C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r29 = r3;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r30 = r3;
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 12322), 0, 42u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r27 + 12326), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r27 + 12323), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r27 + 12322), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r27 + 12328), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r27 + 12329), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r27 + 12340), r31);
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r27 + 12338), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r27 + 12332), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 30u, (r27 + 12352), r31);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r27 + 12330), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r27 + 12331), static_cast<uint8_t>(r31));
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r27 + 12342), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 34u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r27 + 12356), r31);
        MemoryInline::WriteResolved16(guest_range_0, 36u, (r27 + 12358), r31);
    }
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r27 + 12324), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r27 + 12333), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r27 + 12335), static_cast<uint8_t>(r31));
    r0 = (r3 + 340);
    MemoryInline::WriteResolved32(guest_range_0, 38u, (r27 + 12360), r0);
    r28 = 24;
    r3 = r29;
    ctx->lr = 0x80397328u;
    if constexpr (KnownRegArgsCpuCall<0x8004AF24u>(&func_8004AF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AF24_EE8 = func_8004AF24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AF24_EE8);
        r4 = static_cast<uint32_t>(regargs_result_8004AF24_EE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8039732C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397340;
    }
}

loc_80397330:
{
    r0 = (r30 + 436);
    MemoryInline::FlatWrite32((r27 + 12364), r0);
    r28 = 32;
    goto loc_80397344;
}

loc_80397340:
{
    MemoryInline::FlatWrite32((r27 + 12364), r31);
}

loc_80397344:
{
    r3 = r28;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl3_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl3_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x802A8F8C;
    }
}

loc_inl3_0x802A8F84:
{
    r3 = 1;
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl3_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_return:
{
}

loc_inl3_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r27 + 12334), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r27 + 12344), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r27 + 12346), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r27 + 12348), static_cast<uint16_t>(r0));
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return r3;
}

}

extern "C" void func_8039729C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8039729C_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000202A gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8039729C func_8039729C preserves=true fpr_mask=0x00000000
