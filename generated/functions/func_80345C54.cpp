#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D068(CpuContext* ctx);
extern "C" uint32_t func_8012D068_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80345AD0(CpuContext* ctx);
extern "C" uint64_t func_80345AD0_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" MkwStateFreeResult2 func_8012D068_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8012D068_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80345C54_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t xer = ctx->xer;

    goto loc_80345C54;

loc_80345C54:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r1 + 40), f31.d);
    r11 = (r1 + 40);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    f31.d = f1.d;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r31 = r3;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFAF4_CF0 = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_CF0);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_CF0 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFAF4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
    r29 = 0;
    r31 = (r31 & 65535);
    goto loc_80345CF8;
}

loc_80345C9C:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012D068u) && KnownTranslatedCpuCall<0x8012D068u>::kAvailable && !KnownTranslatedCpuCall<0x8012D068u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012D068u>()) {
        const auto state_free_result_8012D068_105A = func_8012D068_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8012D068_105A[0]);
        r3 = static_cast<uint32_t>(state_free_result_8012D068_105A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x8012D068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        xer = ctx->xer;
    }
}

loc_80345CA8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80345CF0;
    }
}

loc_80345CAC:
{
    r3 = MemoryInline::FlatRead8((r27 + 20));
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80345CB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80345CF0;
    }
}

loc_80345CBC:
{
    r0 = MemoryInline::FlatRead32((r30 + 456));
    r0 = (r0 & 1);
}

loc_80345CC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80345CF0;
    }
}

loc_80345CCC:
{
    r3 = r27;
    r4 = (r28 & 255);
    r5 = (r30 + 392);
    f1.d = f31.d;
    ctx->lr = 0x80345CE0u;
    if constexpr (KnownRegArgsCpuCall<0x80345AD0u>(&func_80345AD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        const auto regargs_result_80345AD0_174A = func_80345AD0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80345AD0_174A);
        r4 = static_cast<uint32_t>(regargs_result_80345AD0_174A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80345AD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    }
}

loc_80345CE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80345CF0;
    }
}

loc_80345CE8:
{
    r3 = 1;
    goto loc_80345D08;
}

loc_80345CF0:
{
    r29 = (r29 + 1);
    r30 = (r30 + 2840);
}

loc_80345CF8:
{
    r0 = (r29 & 65535);
}

loc_80345D00:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r31))) {
        goto loc_80345C9C;
    }
}

loc_80345D04:
{
    r3 = 0;
}

loc_80345D08:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r11 = (r1 + 40);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80345C54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80345C54_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80345C54 func_80345C54 preserves=true fpr_mask=0x00000000
