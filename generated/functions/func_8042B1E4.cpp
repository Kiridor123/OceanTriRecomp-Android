#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DA084(CpuContext* ctx);
extern "C" uint32_t func_803DA084_ra0_0_8_0(CpuContext*);
extern "C" void func_8041A358(CpuContext* ctx);
extern "C" uint32_t func_8041A358_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803DA084_statefree(uint32_t);

extern "C" uint32_t func_8042B1E4_ra70_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8042B1E4u);
    goto loc_8042B1E4;

loc_8042B1E4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = MemoryInline::FlatRead32((r13 + -16440));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl1_0x8041A358:
{
}

loc_inl1_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A36C;
    }
}

loc_inl1_0x8041A360:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_inl1_cont_8041A358;
}

loc_inl1_0x8041A36C:
{
    r3 = 0;
}

loc_inl1_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_8042B20C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8042B218;
    }
}

loc_8042B210:
{
    r3 = 0;
    goto loc_8042B2A8;
}

loc_8042B218:
{
    r4 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -32100));
}

loc_8042B224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B230;
    }
}

loc_8042B228:
{
    r3 = 0;
    goto loc_8042B2A8;
}

loc_8042B230:
{
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + -32100), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + -32100), r0);
    r0 = 28;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + -32096), r0);
    r3 = 0x80430000u;
    r0 = (r3 + -20212);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + -32092), r0);
    r31 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + -32088), r31);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + -32084), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + -32080), r31);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + -32076), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + -32072), r31);
    r3 = 28;
    // inline leaf 0x8042A1A4 (6 guest instruction(s))
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 120), r5);
    // end of inlined leaf 0x8042A1A4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl4_0x8041A358:
{
}

loc_inl4_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8041A36C;
    }
}

loc_inl4_0x8041A360:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    goto loc_inl4_cont_8041A358;
}

loc_inl4_0x8041A36C:
{
    r3 = 0;
}

loc_inl4_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r4 = 0;
    // inline leaf 0x803DF1A8 (4 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 2789), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2790), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803DF1A8
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803DA084u) && KnownTranslatedCpuCall<0x803DA084u>::kAvailable && !KnownTranslatedCpuCall<0x803DA084u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803DA084u>()) {
        const auto state_free_result_803DA084_166E = func_803DA084_statefree(r13);
        r3 = static_cast<uint32_t>(state_free_result_803DA084_166E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DA084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        ctr = ctx->ctr;
    }
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8041A358u>(&func_8041A358)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041A358_1952 = func_8041A358_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8041A358_1952;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8041A358u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 200));
    ctr = r12;
    ctx->lr = 0x8042B29Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16045), static_cast<uint8_t>(r31));
    r3 = 1;
}

loc_8042B2A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_8042B1E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8042B1E4_ra70_1fe_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FF7 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8042B1E4 func_8042B1E4 preserves=true fpr_mask=0x00000000
