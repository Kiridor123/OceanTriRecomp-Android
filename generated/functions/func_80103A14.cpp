#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80103A14_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80103A14;

loc_80103A14:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r26 = r4;
    r28 = r5;
    r29 = r6;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 481));
}

loc_80103A48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80103BAC;
    }
}

loc_80103A4C:
{
    r3 = 72;
    ctx->lr = 0x80103A54u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_93E = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_93E);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_93E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r31 = r3;
}

loc_80103A5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80103BAC;
    }
}

loc_80103A60:
{
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r4 = (r26 & 255);
    r3 = 0x805A0000u;
    r3 = (r3 + -6720);
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite32(r30, r0);
    r3 = (r30 + 60);
    r5 = (r4 * 12);
    r4 = 0x805A0000u;
    r0 = (r4 + -6648);
    r4 = (r0 + r5);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005001C_E58 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_E58;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
    }
    r0 = 8;
    MemoryInline::FlatWriteRam8((r31 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_80103AA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(36))) {
        goto loc_80103B20;
    }
}

loc_80103AA8:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_80103AB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80103AD4;
    }
}

loc_80103AB8:
{
}

loc_80103ABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_80103AD4;
    }
}

loc_80103AC0:
{
}

loc_80103AC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80103AE0;
    }
}

loc_80103AC8:
{
}

loc_80103ACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80103AE0;
    }
}

loc_80103AD0:
{
    goto loc_80103B08;
}

loc_80103AD4:
{
    r0 = 38;
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
    goto loc_80103B20;
}

loc_80103AE0:
{
    r0 = MemoryInline::FlatRead16((r27 + 552));
    r0 = (r0 & 6);
}

loc_80103AEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80103AFC;
    }
}

loc_80103AF0:
{
    r0 = 37;
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
    goto loc_80103B20;
}

loc_80103AFC:
{
    r0 = 39;
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
    goto loc_80103B20;
}

loc_80103B08:
{
    r0 = MemoryInline::FlatRead16((r27 + 552));
    r0 = (r0 & 6);
}

loc_80103B14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80103B20;
    }
}

loc_80103B18:
{
    r0 = 37;
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
}

loc_80103B20:
{
    MemoryInline::FlatWriteRam32((r31 + 48), r27);
    r0 = MemoryInline::FlatRead8((r27 + 481));
    MemoryInline::FlatWriteRam8((r31 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_80103B34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80103B44;
    }
}

loc_80103B38:
{
    r0 = 4;
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
    goto loc_80103B4C;
}

loc_80103B44:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
}

loc_80103B4C:
{
    MemoryInline::FlatWriteRam32((r31 + 36), r28);
    r0 = MemoryInline::FlatRead32((r27 + 448));
    r0 = (r29 + r0);
    MemoryInline::FlatWriteRam32((r31 + 40), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 44), r0);
    r3 = r31;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = r27;
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -6984);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r5 = (r30 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    r3 = 0x80100000u;
    r0 = (r3 + 15636);
    MemoryInline::FlatWriteRam32((r31 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + 15696);
    MemoryInline::FlatWriteRam32((r31 + 52), r0);
}

loc_80103BAC:
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
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80103A14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80103A14_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80103A14 func_80103A14 preserves=true fpr_mask=0x00000000
