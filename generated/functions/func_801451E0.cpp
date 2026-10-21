#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80145018(CpuContext* ctx);
extern "C" uint64_t func_80145018_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AFCE8(CpuContext* ctx);
extern "C" uint32_t func_802AFCE8_ra0_0_8_0(CpuContext*);

extern "C" uint64_t func_802AFCE8_statefree();

extern "C" uint32_t func_801451E0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801451E0u);
    goto loc_801451E0;

loc_801451E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r25 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r24 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r25 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80145018u>(&func_80145018)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80145018_E72 = func_80145018_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80145018_E72);
        r4 = static_cast<uint32_t>(regargs_result_80145018_E72 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80145018u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8014521C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80145228;
    }
}

loc_80145220:
{
    r3 = 0;
    goto loc_80145328;
}

loc_80145228:
{
    r26 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80145230:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8014523C;
    }
}

loc_80145234:
{
    r3 = 0;
    goto loc_80145328;
}

loc_8014523C:
{
    r27 = 1;
    r30 = 0;
    r29 = 0;
    goto loc_8014530C;
}

loc_8014524C:
{
    r31 = 0;
    r28 = 0;
    r25 = r24;
    goto loc_801452EC;
}

loc_8014525C:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_80145264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801452E4;
    }
}

loc_80145268:
{
    r0 = MemoryInline::FlatRead8((r25 + 1131));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80145274:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80145284;
    }
}

loc_80145278:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80145280:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_801452E4;
    }
}

loc_80145284:
{
    r3 = MemoryInline::FlatRead8((r25 + 3));
    r0 = MemoryInline::FlatRead8(r26);
}

loc_80145290:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801452E4;
    }
}

loc_80145294:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
}

loc_8014529C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801452B0;
    }
}

loc_801452A0:
{
    r3 = MemoryInline::FlatRead8((r25 + 10));
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_801452AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801452E4;
    }
}

loc_801452B0:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AFCE8u) && KnownTranslatedCpuCall<0x802AFCE8u>::kAvailable && !KnownTranslatedCpuCall<0x802AFCE8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AFCE8u>()) {
        const auto state_free_result_802AFCE8_1887 = func_802AFCE8_statefree();
        r3 = static_cast<uint32_t>(state_free_result_802AFCE8_1887);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802AFCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r25 + 481));
}

loc_801452C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801452E4;
    }
}

loc_801452C4:
{
    r31 = 1;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    MemoryInline::FlatWrite8((r25 + 1131), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 4));
}

loc_801452D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801452F8;
    }
}

loc_801452DC:
{
    r30 = 1;
    goto loc_801452F8;
}

loc_801452E4:
{
    r28 = (r28 + 1);
    r25 = (r25 + 2840);
}

loc_801452EC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_801452F4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r23))) {
        goto loc_8014525C;
    }
}

loc_801452F8:
{
}

loc_801452FC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80145304;
    }
}

loc_80145300:
{
    r27 = 0;
}

loc_80145304:
{
    r26 = (r26 + 12);
    r29 = (r29 + 1);
}

loc_8014530C:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_80145314:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8014524C;
    }
}

loc_80145318:
{
}

loc_8014531C:
{
    r3 = -1;
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(1))) {
        goto loc_80145328;
    }
}

loc_80145324:
{
    r3 = r27;
}

loc_80145328:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    return r3;
}

}

extern "C" void func_801451E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801451E0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801451E0 func_801451E0 preserves=true fpr_mask=0x00000000
