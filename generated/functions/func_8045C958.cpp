#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804574EC(CpuContext* ctx);
extern "C" uint64_t func_804574EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80457710(CpuContext* ctx);
extern "C" uint64_t func_80457710_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8045C958_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_stbu_ea_0 = 0;
    uint32_t r27_stbu_ea_1 = 0;
    uint32_t r27_stbu_ea_10 = 0;
    uint32_t r27_stbu_ea_11 = 0;
    uint32_t r27_stbu_ea_12 = 0;
    uint32_t r27_stbu_ea_13 = 0;
    uint32_t r27_stbu_ea_2 = 0;
    uint32_t r27_stbu_ea_3 = 0;
    uint32_t r27_stbu_ea_4 = 0;
    uint32_t r27_stbu_ea_5 = 0;
    uint32_t r27_stbu_ea_6 = 0;
    uint32_t r27_stbu_ea_7 = 0;
    uint32_t r27_stbu_ea_8 = 0;
    uint32_t r27_stbu_ea_9 = 0;
    uint32_t r31_ca_0 = 0;
    uint32_t r31_ca_1 = 0;
    uint32_t r31_ca_2 = 0;
    uint32_t r31_ca_3 = 0;
    uint32_t r31_ca_4 = 0;
    uint32_t r31_not_0 = 0;
    uint32_t r31_not_1 = 0;
    uint32_t r31_not_2 = 0;
    uint32_t r31_not_3 = 0;
    uint32_t r31_not_4 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8045C958u);
    goto loc_8045C958;

loc_8045C958:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r0 = (r4 | r3);
    r25 = 0;
    r31 = r3;
    r30 = r4;
    r23 = r5;
    r24 = r6;
    r27 = (r5 + -1);
    r26 = 0;
    MemoryInline::FlatWrite8((r5 + -1), static_cast<uint8_t>(r25));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C9BC;
    }
}

loc_8045C990:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_8045C998:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C9BC;
    }
}

loc_8045C99C:
{
    r0 = MemoryInline::FlatRead8((r6 + 3));
}

loc_8045C9A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045C9B4;
    }
}

loc_8045C9A8:
{
    r0 = MemoryInline::FlatRead8((r6 + 5));
}

loc_8045C9B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(111))) {
        goto loc_8045C9BC;
    }
}

loc_8045C9B4:
{
    r3 = r27;
    goto loc_8045CBF4;
}

loc_8045C9BC:
{
    r0 = MemoryInline::FlatRead8((r6 + 5));
}

loc_8045C9C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(100))) {
        goto loc_8045C9F4;
    }
}

loc_8045C9C8:
{
}

loc_8045C9CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(105))) {
        goto loc_8045C9F4;
    }
}

loc_8045C9D0:
{
}

loc_8045C9D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(111))) {
        goto loc_8045CA38;
    }
}

loc_8045C9D8:
{
}

loc_8045C9DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(117))) {
        goto loc_8045CA48;
    }
}

loc_8045C9E0:
{
}

loc_8045C9E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(120))) {
        goto loc_8045CA58;
    }
}

loc_8045C9E8:
{
}

loc_8045C9EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(88))) {
        goto loc_8045CA58;
    }
}

loc_8045C9F0:
{
    goto loc_8045CA64;
}

loc_8045C9F4:
{
    r29 = 0;
    r0 = (r3 ^ -2147483648);
    r6 = (r29 ^ -2147483648);
    r28 = 10;
    r5 = (r4 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r6_not_1 = ~(r6);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_not_1 + r0);
    r6 = (r6 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_2 = ~(r0);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r0);
    r6 = (r6 + r6_ca_2);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8045CA64;
    }
}

loc_8045CA18:
{
    r0 = 0x80000000u;
    r0 = (r3 ^ r0);
    r0 = (r4 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045CA30;
    }
}

loc_8045CA28:
{
    r30 = (0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r31_not_1 = ~(r3);
    r31_ca_1 = (xer >> 29) & 1u;
    r31 = (r31_not_1 + r31_ca_1);
}

loc_8045CA30:
{
    r25 = 1;
    goto loc_8045CA64;
}

loc_8045CA38:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r29));
    r28 = 8;
    goto loc_8045CA64;
}

loc_8045CA48:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r29));
    r28 = 10;
    goto loc_8045CA64;
}

loc_8045CA58:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r29));
    r28 = 16;
}

loc_8045CA64:
{
    r3 = r31;
    r4 = r30;
    r5 = r29;
    r6 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_80457710_187D = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_187D);
        r4 = static_cast<uint32_t>(regargs_result_80457710_187D >> 32);
        r0 = ctx->gpr[0];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
    r22 = r4;
    r3 = r31;
    r4 = r30;
    r5 = r29;
    r6 = r28;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804574EC_1BE1 = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_1BE1);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_1BE1 >> 32);
        r0 = ctx->gpr[0];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_8045CA94:
{
    r30 = r4;
    r31 = r3;
    if ((static_cast<int32_t>(r22) >= static_cast<int32_t>(10))) {
        goto loc_8045CAA8;
    }
}

loc_8045CAA0:
{
    r5 = (r22 + 48);
    goto loc_8045CABC;
}

loc_8045CAA8:
{
    r0 = MemoryInline::FlatRead8((r24 + 5));
    r5 = (r22 + 55);
}

loc_8045CAB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(120))) {
        goto loc_8045CABC;
    }
}

loc_8045CAB8:
{
    r5 = (r22 + 87);
}

loc_8045CABC:
{
    r0 = (r4 | r3);
    r27_stbu_ea_2 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_2, static_cast<uint8_t>(r5));
    r27 = r27_stbu_ea_2;
    r26 = (r26 + 1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045CA64;
    }
}

loc_8045CACC:
{
    r0 = (r28 ^ 8);
    r0 = (r0 | r29);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045CAFC;
    }
}

loc_8045CAD8:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_8045CAE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045CAFC;
    }
}

loc_8045CAE4:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_8045CAEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8045CAFC;
    }
}

loc_8045CAF0:
{
    r0 = 48;
    r27_stbu_ea_3 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_3, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_3;
    r26 = (r26 + 1);
}

loc_8045CAFC:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_8045CB04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045CB54;
    }
}

loc_8045CB08:
{
    r0 = MemoryInline::FlatRead32((r24 + 8));
}

loc_8045CB10:
{
    MemoryInline::FlatWrite32((r24 + 12), r0);
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8045CB24;
    }
}

loc_8045CB18:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_8045CB20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045CB30;
    }
}

loc_8045CB24:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_8045CB30:
{
    r0 = (r28 ^ 16);
    r0 = (r0 | r29);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045CB54;
    }
}

loc_8045CB3C:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_8045CB44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045CB54;
    }
}

loc_8045CB48:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r3 + -2);
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_8045CB54:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r23 - r27);
    r0 = (r3 + r0);
}

loc_8045CB64:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_8045CB70;
    }
}

loc_8045CB68:
{
    r3 = 0;
    goto loc_8045CBF4;
}

loc_8045CB70:
{
    r3 = 48;
    goto loc_8045CB80;
}

loc_8045CB78:
{
    r27_stbu_ea_6 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_6, static_cast<uint8_t>(r3));
    r27 = r27_stbu_ea_6;
    r26 = (r26 + 1);
}

loc_8045CB80:
{
    r0 = MemoryInline::FlatRead32((r24 + 12));
}

loc_8045CB88:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8045CB78;
    }
}

loc_8045CB8C:
{
    r0 = (r28 ^ 16);
    r0 = (r0 | r29);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045CBB4;
    }
}

loc_8045CB98:
{
    r0 = MemoryInline::FlatRead8((r24 + 3));
}

loc_8045CBA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045CBB4;
    }
}

loc_8045CBA4:
{
    r3 = MemoryInline::FlatRead8((r24 + 5));
    r0 = 48;
    MemoryInline::FlatWrite8((r27 + -1), static_cast<uint8_t>(r3));
    r27_stbu_ea_7 = (r27 + -2);
    MemoryInline::FlatWrite8(r27_stbu_ea_7, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_7;
}

loc_8045CBB4:
{
}

loc_8045CBB8:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8045CBC8;
    }
}

loc_8045CBBC:
{
    r0 = 45;
    r27_stbu_ea_9 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_9, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_9;
    goto loc_8045CBF0;
}

loc_8045CBC8:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_8045CBD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045CBE0;
    }
}

loc_8045CBD4:
{
    r0 = 43;
    r27_stbu_ea_10 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_10, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_10;
    goto loc_8045CBF0;
}

loc_8045CBE0:
{
}

loc_8045CBE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045CBF0;
    }
}

loc_8045CBE8:
{
    r0 = 32;
    r27_stbu_ea_11 = (r27 + -1);
    MemoryInline::FlatWrite8(r27_stbu_ea_11, static_cast<uint8_t>(r0));
    r27 = r27_stbu_ea_11;
}

loc_8045CBF0:
{
    r3 = r27;
}

loc_8045CBF4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045C958(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045C958_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000006FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045C958 func_8045C958 preserves=true fpr_mask=0x00000000
