#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E4108(CpuContext* ctx);
extern "C" uint32_t func_801E4108_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80212B34(CpuContext* ctx);
extern "C" uint32_t func_80212B34_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80212B80(CpuContext* ctx);
extern "C" uint64_t func_80212B80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80212B34_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80212B34_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80212EA0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80212EA0u);
    goto loc_80212EA0;

loc_80212EA0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r30 = 0;
    r29 = -1;
    r0 = (r5 * 6);
}

loc_80212ED4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(-1))) {
        goto loc_80212EE8;
    }
}

loc_80212ED8:
{
    r3 = (r4 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80212B34u) && KnownTranslatedCpuCall<0x80212B34u>::kAvailable && !KnownTranslatedCpuCall<0x80212B34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80212B34u>()) {
        const auto state_free_result_80212B34_96E = func_80212B34_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80212B34_96E[0]);
        r3 = static_cast<uint32_t>(state_free_result_80212B34_96E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80212B34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
    goto loc_80212EFC;
}

loc_80212EE8:
{
    r3 = (r3 & 255);
    r4 = (r4 & 255);
    r6_addr_1 = (r6 + r0);
    r5 = MemoryInline::FlatRead16(r6_addr_1);
    ctx->lr = 0x80212EF8u;
    if constexpr (KnownRegArgsCpuCall<0x80212B80u>(&func_80212B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80212B80_D83 = func_80212B80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80212B80_D83);
        r4 = static_cast<uint32_t>(regargs_result_80212B80_D83 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80212B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
}

loc_80212EFC:
{
    r28 = 0;
    goto loc_80212F64;
}

loc_80212F04:
{
    r3 = r27;
    ctx->lr = 0x80212F0Cu;
    if constexpr (KnownRegArgsCpuCall<0x801E4108u>(&func_801E4108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801E4108_11E3 = func_801E4108_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801E4108_11E3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x801E4108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80212F10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80212F5C;
    }
}

loc_80212F14:
{
    r3 = (r24 & 255);
    r4 = (r25 & 255);
    r5 = MemoryInline::FlatRead16(r27);
    ctx->lr = 0x80212F24u;
    if constexpr (KnownRegArgsCpuCall<0x80212B80u>(&func_80212B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80212B80_1607 = func_80212B80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80212B80_1607);
        r4 = static_cast<uint32_t>(regargs_result_80212B80_1607 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80212B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r3));
}

loc_80212F28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80212F38;
    }
}

loc_80212F2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80212F5C;
    }
}

loc_80212F30:
{
}

loc_80212F34:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r28))) {
        goto loc_80212F5C;
    }
}

loc_80212F38:
{
}

loc_80212F3C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(-1))) {
        goto loc_80212F54;
    }
}

loc_80212F40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r30));
}

loc_80212F44:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80212F54;
    }
}

loc_80212F48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80212F5C;
    }
}

loc_80212F4C:
{
}

loc_80212F50:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r29))) {
        goto loc_80212F5C;
    }
}

loc_80212F54:
{
    r29 = r28;
    r30 = r3;
}

loc_80212F5C:
{
    r28 = (r28 + 1);
    r27 = (r27 + 6);
}

loc_80212F64:
{
    r0 = MemoryInline::FlatRead16((r27 + 2));
}

loc_80212F6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80212F7C;
    }
}

loc_80212F70:
{
    r0 = MemoryInline::FlatRead16((r27 + 4));
}

loc_80212F78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80212F04;
    }
}

loc_80212F7C:
{
    r3 = r29;
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80212EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80212EA0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80212EA0 func_80212EA0 preserves=true fpr_mask=0x00000000
