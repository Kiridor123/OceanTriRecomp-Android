#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004EDB0(CpuContext* ctx);
extern "C" uint64_t func_8004EDB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004F000(CpuContext* ctx);
extern "C" void func_8004F000_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8004F000_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_80378F0C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80378F0C;

loc_80378F0C:
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
    r3 = 0x806C0000u;
    r3 = (r3 + 6576);
    r29 = (r3 + 5840);
    r28 = -1;
    r27 = 0;
    r31 = (r29 + 4);
    r30 = MemoryInline::FlatRead32(r29);
    goto loc_80378F64;
}

loc_80378F44:
{
    r3 = (r31 + 20);
    r4 = (r26 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80378F54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80378F5C;
    }
}

loc_80378F58:
{
    r28 = r27;
}

loc_80378F5C:
{
    r31 = (r31 + 36);
    r27 = (r27 + 1);
}

loc_80378F64:
{
}

loc_80378F68:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r30))) {
        goto loc_80378F44;
    }
}

loc_80378F6C:
{
}

loc_80378F70:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(0))) {
        goto loc_80378FC8;
    }
}

loc_80378F74:
{
    r30 = (r28 * 36);
    r3 = (r29 + r30);
    r31 = (r3 + 4);
    goto loc_80378FAC;
}

loc_80378F84:
{
    r0 = (r28 + 1);
}

loc_80378F8C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80378FA0;
    }
}

loc_80378F90:
{
    r3 = r31;
    r4 = (r30 + r29);
    r4 = (r4 + 40);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004F000u) && KnownTranslatedCpuCall<0x8004F000u>::kAvailable && !KnownTranslatedCpuCall<0x8004F000u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004F000u>()) {
        const auto state_free_result_8004F000_BD1 = func_8004F000_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004F000_BD1[0]);
        r5 = static_cast<uint32_t>(state_free_result_8004F000_BD1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004F000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80378FA0:
{
    r30 = (r30 + 36);
    r31 = (r31 + 36);
    r28 = (r28 + 1);
}

loc_80378FAC:
{
    r3 = MemoryInline::FlatRead32(r29);
}

loc_80378FB4:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r3))) {
        goto loc_80378F84;
    }
}

loc_80378FB8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32(r29, r0);
    r3 = r29;
    ctx->lr = 0x80378FC8u;
    if constexpr (KnownRegArgsCpuCall<0x8004EDB0u>(&func_8004EDB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8004EDB0_1075 = func_8004EDB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004EDB0_1075);
        r4 = static_cast<uint32_t>(regargs_result_8004EDB0_1075 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004EDB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80378FC8:
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80378F0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80378F0C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80378F0C func_80378F0C preserves=true fpr_mask=0x00000000
