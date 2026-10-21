#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80513010_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80513010u);
    goto loc_80513010;

loc_80513010:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 128), 0, 82u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 156));
    r5 = 6;
    r4 = 4;
    r0 = 1;
}

loc_80513024:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 136), 0, 80u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r5);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 212), r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8051304C;
    }
}

loc_80513034:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 172));
}

loc_8051303C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051304C;
    }
}

loc_80513040:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 188));
}

loc_80513048:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80513054;
    }
}

loc_8051304C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80513054:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
}

loc_8051305C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80513084;
    }
}

loc_80513060:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
}

loc_80513068:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80513084;
    }
}

loc_8051306C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 148));
}

loc_80513074:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_80513084;
    }
}

loc_80513078:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_80513200;
}

loc_80513084:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 148));
}

loc_8051308C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8051309C;
    }
}

loc_80513090:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_80513200;
}

loc_8051309C:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
}

loc_805130A4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_805130E4;
    }
}

loc_805130A8:
{
}

loc_805130AC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_805130E4;
    }
}

loc_805130B0:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r4 ^ r0);
    r0 = (r0 - r4);
}

loc_805130CC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_805130E4;
    }
}

loc_805130D0:
{
    r4 = 5;
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r0);
    }
    goto loc_80513200;
}

loc_805130E4:
{
}

loc_805130E8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80513128;
    }
}

loc_805130EC:
{
}

loc_805130F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80513128;
    }
}

loc_805130F4:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r4 ^ r0);
    r0 = (r0 - r4);
}

loc_80513110:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_80513128;
    }
}

loc_80513114:
{
    r4 = 5;
    r0 = 2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r0);
    }
    goto loc_80513200;
}

loc_80513128:
{
}

loc_8051312C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8051316C;
    }
}

loc_80513130:
{
}

loc_80513134:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8051316C;
    }
}

loc_80513138:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r4 ^ r0);
    r0 = (r0 - r4);
}

loc_80513154:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_8051316C;
    }
}

loc_80513158:
{
    r4 = 5;
    r0 = 3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r0);
    }
    goto loc_80513200;
}

loc_8051316C:
{
}

loc_80513170:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805131B0;
    }
}

loc_80513174:
{
}

loc_80513178:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805131B0;
    }
}

loc_8051317C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r4 ^ r0);
    r0 = (r0 - r4);
}

loc_80513198:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_805131B0;
    }
}

loc_8051319C:
{
    r4 = 5;
    r0 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r0);
    }
    goto loc_80513200;
}

loc_805131B0:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805131B4:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_805131C4;
    }
}

loc_805131B8:
{
    r0 = 4;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_80513200;
}

loc_805131C4:
{
}

loc_805131C8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805131DC;
    }
}

loc_805131CC:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_805131DC;
    }
}

loc_805131D0:
{
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_80513200;
}

loc_805131DC:
{
}

loc_805131E0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_805131F8;
    }
}

loc_805131E4:
{
}

loc_805131E8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_805131F8;
    }
}

loc_805131EC:
{
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_80513200;
}

loc_805131F8:
{
    r0 = 6;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
}

loc_80513200:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 152));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 160));
}

loc_8051320C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r6))) {
        goto loc_8051323C;
    }
}

loc_80513210:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r3 + 168));
}

loc_8051321C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8051323C;
    }
}

loc_80513220:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 56u, (r3 + 184));
}

loc_8051322C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8051323C;
    }
}

loc_80513230:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
    goto loc_805132A8;
}

loc_8051323C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
}

loc_80513244:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_80513260;
    }
}

loc_80513248:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
}

loc_80513250:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80513260;
    }
}

loc_80513254:
{
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
    goto loc_805132A8;
}

loc_80513260:
{
}

loc_80513264:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r6))) {
        goto loc_80513284;
    }
}

loc_80513268:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
}

loc_80513274:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80513284;
    }
}

loc_80513278:
{
    r0 = 4;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
    goto loc_805132A8;
}

loc_80513284:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
}

loc_80513290:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_805132A0;
    }
}

loc_80513294:
{
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
    goto loc_805132A8;
}

loc_805132A0:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
}

loc_805132A8:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 80u, (r3 + 208));
}

loc_805132B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805132C8;
    }
}

loc_805132B4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 160));
}

loc_805132BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_805132C8;
    }
}

loc_805132C0:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 212), r0);
}

loc_805132C8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80513010(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80513010_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80513010 func_80513010 preserves=true fpr_mask=0x00000000
