#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F0DEC(CpuContext* ctx);
extern "C" uint64_t func_800F0DEC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8028F2EC(CpuContext* ctx);
extern "C" uint32_t func_8028F2EC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800EEF60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800EEF60;

loc_800EEF60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // inline leaf 0x8045169C (6 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17396), 0, 960u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 956u, (r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_800EEF80:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800EEFA4;
    }
}

loc_800EEF84:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_800EEF90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800EEFA4;
    }
}

loc_800EEF94:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800EEFA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EEFB0;
    }
}

loc_800EEFA4:
{
    r3 = 0x805A0000u;
    r5 = MemoryInline::FlatRead32((r3 + -26840));
    goto loc_800EEFBC;
}

loc_800EEFB0:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -26840);
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800EEFBC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r31 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_800EF038;
}

loc_800EEFC8:
{
}

loc_800EEFCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EF034;
    }
}

loc_800EEFD0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r31);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 212), r4);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r31 = (r31 + r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 408), r31);
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 604), r4);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r31 = (r31 + r0);
}

loc_800EF034:
{
    r5 = (r5 + 8);
}

loc_800EF038:
{
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EF040:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_800EEFC8;
    }
}

loc_800EF044:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 4), r31);
    r29 = 1;
    r30 = -1;
}

loc_800EF054:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r29 + 65536);
    r0 = (r3 + -26850);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r30));
    r3 = r29;
    // inline leaf 0x800F0474 (14 guest instruction(s))
    r5 = 0;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26764), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26957), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r3);
    MemoryInline::FlatWrite8((r3 + -27006), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x800F0474
    r29 = (r29 + 1);
}

loc_800EF074:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(49))) {
        goto loc_800EF054;
    }
}

loc_800EF078:
{
    r0 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26704), r0);
    r0 = 255;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26712), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 8), r31);
    ctx->lr = 0x800EF0A4u;
    if constexpr (KnownRegArgsCpuCall<0x8028F2ECu>(&func_8028F2EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8028F2EC_1BC1 = func_8028F2EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028F2EC_1BC1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8028F2ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r3 & 255);
    if constexpr (KnownRegArgsCpuCall<0x800F0DECu>(&func_800F0DEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F0DEC_1E3F = func_800F0DEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F0DEC_1E3F);
        r4 = static_cast<uint32_t>(regargs_result_800F0DEC_1E3F >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F0DECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EEF60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EEF60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EEF60 func_800EEF60 preserves=true fpr_mask=0x00000000
