#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A5234(CpuContext* ctx);
extern "C" uint32_t func_800A5234_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800A9770(CpuContext* ctx);
extern "C" uint32_t func_800A9770_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A5234_statefree(uint32_t);
extern "C" uint64_t func_800A9770_statefree(uint32_t);

extern "C" void func_800F98E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800F98E8u);
    goto loc_800F98E8;

loc_800F98E8:
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
    r27 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800A5234u) && KnownTranslatedCpuCall<0x800A5234u>::kAvailable && !KnownTranslatedCpuCall<0x800A5234u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800A5234u>()) {
        const auto state_free_result_800A5234_760 = func_800A5234_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_800A5234_760);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A5234u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r29 = (r3 & 65535);
    r28 = 0;
    r30 = 0x805A0000u;
    r31 = 0x805A0000u;
    goto loc_800F9958;
}

loc_800F991C:
{
    r3 = r26;
    r4 = (r28 & 65535);
    ctx->lr = 0x800F9928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A523Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
}

loc_800F992C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9948;
    }
}

loc_800F9930:
{
    r3 = (r30 + -17008);
    r4 = 2854;
    r5 = (r31 + -16992);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800F9944u;
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
    goto loc_800F9954;
}

loc_800F9948:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800A9770u) && KnownTranslatedCpuCall<0x800A9770u>::kAvailable && !KnownTranslatedCpuCall<0x800A9770u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800A9770u>()) {
        const auto state_free_result_800A9770_F62 = func_800A9770_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_800A9770_F62);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A9770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r27 = (r27 + r0);
}

loc_800F9954:
{
    r28 = (r28 + 1);
}

loc_800F9958:
{
}

loc_800F995C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r29))) {
        goto loc_800F991C;
    }
}

loc_800F9960:
{
    r0 = (0 - r27);
    r0 = (r0 & ~r27);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F98E8 func_800F98E8 preserves=true fpr_mask=0x00000000
