#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80271604(CpuContext* ctx);
extern "C" uint64_t func_80271604_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802E741C(CpuContext* ctx);
extern "C" uint64_t func_802E741C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802E746C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_802E746C;

loc_802E746C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r27 = r4;
    r28 = r5;
    r30 = 0;
    r0 = MemoryInline::FlatRead16((r5 + 1124));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802E7498:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E7574;
    }
}

loc_802E749C:
{
    r29 = 0;
    r3 = r28;
    r4 = 45;
    ctx->lr = 0x802E74ACu;
    if constexpr (KnownRegArgsCpuCall<0x80271604u>(&func_80271604)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80271604_824 = func_80271604_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271604_824);
        r4 = static_cast<uint32_t>(regargs_result_80271604_824 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80271604u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = 0;
    r0 = (r3 & 255);
}

loc_802E74B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(125))) {
        goto loc_802E74C0;
    }
}

loc_802E74BC:
{
    r4 = 1;
}

loc_802E74C0:
{
}

loc_802E74C4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802E7574;
    }
}

loc_802E74C8:
{
    r0 = (r3 & 255);
}

loc_802E74D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(124))) {
        goto loc_802E74E8;
    }
}

loc_802E74D4:
{
}

loc_802E74D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(126))) {
        goto loc_802E74F0;
    }
}

loc_802E74DC:
{
}

loc_802E74E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(127))) {
        goto loc_802E74F8;
    }
}

loc_802E74E4:
{
    goto loc_802E7500;
}

loc_802E74E8:
{
    r30 = 0;
    goto loc_802E7504;
}

loc_802E74F0:
{
    r30 = 3;
    goto loc_802E7504;
}

loc_802E74F8:
{
    r30 = 4;
    goto loc_802E7504;
}

loc_802E7500:
{
    r30 = 2;
}

loc_802E7504:
{
    r0 = (r27 & 255);
}

loc_802E750C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E7524;
    }
}

loc_802E7510:
{
}

loc_802E7514:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802E7530;
    }
}

loc_802E7518:
{
}

loc_802E751C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802E7538;
    }
}

loc_802E7520:
{
    goto loc_802E7540;
}

loc_802E7524:
{
    r29 = 0;
    r30 = 0;
    goto loc_802E755C;
}

loc_802E7530:
{
    r29 = 0;
    goto loc_802E755C;
}

loc_802E7538:
{
    r29 = 1;
    goto loc_802E755C;
}

loc_802E7540:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 25800);
    r4 = 2040;
    r5 = 0x805D0000u;
    r5 = (r5 + 25824);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x802E755Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_802E755C:
{
    r4 = (r29 * 10);
    r3 = 0x805D0000u;
    r0 = (r3 + 25652);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = (r0 + r4);
    r3_addr_1 = (r3 + r0);
    r30 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_802E7574:
{
}

loc_802E7578:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802E7588;
    }
}

loc_802E757C:
{
    r0 = (r31 + r30);
    r3 = (r0 & 65535);
    goto loc_802E7594;
}

loc_802E7588:
{
    r3 = (r31 & 65535);
    r4 = r28;
    ctx->lr = 0x802E7594u;
    if constexpr (KnownRegArgsCpuCall<0x802E741Cu>(&func_802E741C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E741C_1758 = func_802E741C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802E741C_1758);
        r4 = static_cast<uint32_t>(regargs_result_802E741C_1758 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802E741Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802E7594:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E746C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E746C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E746C func_802E746C preserves=true fpr_mask=0x00000000
