#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E72D0(CpuContext* ctx);
extern "C" uint64_t func_800E72D0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800EDBB4(CpuContext* ctx);
extern "C" uint32_t func_800EDBB4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800EC424_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
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

    goto loc_800EC424;

loc_800EC424:
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
    r27 = r4;
    r28 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x800EC44Cu;
    if constexpr (KnownRegArgsCpuCall<0x800EDBB4u>(&func_800EDBB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800EDBB4_7BB = func_800EDBB4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800EDBB4_7BB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800EDBB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r31;
    ctx->lr = 0x800EC45Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E72D0u>(&func_800E72D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E72D0_A77 = func_800E72D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E72D0_A77);
        r4 = static_cast<uint32_t>(regargs_result_800E72D0_A77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E72D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800EC460:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800EC46C;
    }
}

loc_800EC464:
{
    r3 = 1;
    goto loc_800EC5FC;
}

loc_800EC46C:
{
    r30 = 0;
    r29 = 0;
    r0 = MemoryInline::FlatRead8((r27 + 4));
    r6 = (r0 & 1);
    r5 = MemoryInline::FlatRead8((r27 + 6));
    r0 = MemoryInline::FlatRead8((r27 + 7));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
}

loc_800EC48C:
{
    r0 = 255;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800EC498;
    }
}

loc_800EC494:
{
    r0 = r28;
}

loc_800EC498:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & -16777216);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    r28 = (r5 | r0);
    goto loc_800EC520;
}

loc_800EC4B0:
{
    r0 = MemoryInline::FlatRead8((r31 + 25));
}

loc_800EC4B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800EC514;
    }
}

loc_800EC4BC:
{
    r0 = MemoryInline::FlatRead8((r27 + 6));
}

loc_800EC4C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800EC514;
    }
}

loc_800EC4C8:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
}

loc_800EC4D0:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_800EC514;
    }
}

loc_800EC4D4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r3 + 108));
    r0 = (r3 + 65536);
}

loc_800EC4E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800EC4FC;
    }
}

loc_800EC4EC:
{
}

loc_800EC4F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EC4FC;
    }
}

loc_800EC4F4:
{
    r3 = 0;
    goto loc_800EC5FC;
}

loc_800EC4FC:
{
    r29 = (r29 + 1);
    r3 = MemoryInline::FlatRead8((r27 + 3));
    r0 = MemoryInline::FlatRead8((r31 + 24));
}

loc_800EC50C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800EC514;
    }
}

loc_800EC510:
{
    r30 = (r30 + 1);
}

loc_800EC514:
{
    r3 = r31;
    // inline leaf 0x800E72C8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x800E72C8
    r31 = r3;
}

loc_800EC520:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r31;
    ctx->lr = 0x800EC52Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E72D0u>(&func_800E72D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E72D0_1856 = func_800E72D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E72D0_1856);
        r4 = static_cast<uint32_t>(regargs_result_800E72D0_1856 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E72D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800EC530:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800EC4B0;
    }
}

loc_800EC534:
{
    r3 = MemoryInline::FlatRead8((r27 + 9));
}

loc_800EC53C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_800EC548;
    }
}

loc_800EC540:
{
}

loc_800EC544:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r29))) {
        goto loc_800EC550;
    }
}

loc_800EC548:
{
    r3 = 1;
    goto loc_800EC5FC;
}

loc_800EC550:
{
}

loc_800EC554:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800EC560;
    }
}

loc_800EC558:
{
    r3 = 0;
    goto loc_800EC5FC;
}

loc_800EC560:
{
    r0 = (r3 + -1);
    r30 = (r29 - r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x800EC570u;
    if constexpr (KnownRegArgsCpuCall<0x800EDBB4u>(&func_800EDBB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800EDBB4_1EB9 = func_800EDBB4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800EDBB4_1EB9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800EDBB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r29 = r3;
    goto loc_800EC5E4;
}

loc_800EC578:
{
    r0 = MemoryInline::FlatRead8((r29 + 25));
}

loc_800EC580:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800EC5D8;
    }
}

loc_800EC584:
{
    r0 = MemoryInline::FlatRead8((r27 + 6));
}

loc_800EC58C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800EC5D8;
    }
}

loc_800EC590:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
}

loc_800EC598:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_800EC5D8;
    }
}

loc_800EC59C:
{
    r3 = MemoryInline::FlatRead8((r27 + 3));
    r0 = MemoryInline::FlatRead8((r29 + 24));
}

loc_800EC5A8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800EC5D8;
    }
}

loc_800EC5AC:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r3;
    r3 = r26;
    r4 = (r4 + 72);
    // inline leaf 0x800E98AC (3 guest instruction(s))
    r0 = 5;
    MemoryInline::FlatWrite8((r4 + 58), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800E98AC
    r30 = (r30 + -1);
}

loc_800EC5CC:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(0))) {
        goto loc_800EC5D8;
    }
}

loc_800EC5D0:
{
    r3 = 1;
    goto loc_800EC5FC;
}

loc_800EC5D8:
{
    r3 = r29;
    // inline leaf 0x800E72C8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x800E72C8
    r29 = r3;
}

loc_800EC5E4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r29;
    ctx->lr = 0x800EC5F0u;
    if constexpr (KnownRegArgsCpuCall<0x800E72D0u>(&func_800E72D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E72D0_27EE = func_800E72D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E72D0_27EE);
        r4 = static_cast<uint32_t>(regargs_result_800E72D0_27EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E72D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800EC5F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800EC578;
    }
}

loc_800EC5F8:
{
    r3 = 0;
}

loc_800EC5FC:
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
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EC424(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EC424_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EC424 func_800EC424 preserves=true fpr_mask=0x00000000
