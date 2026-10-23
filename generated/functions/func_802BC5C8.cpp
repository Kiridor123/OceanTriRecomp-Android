#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BED34(CpuContext* ctx);
extern "C" uint32_t func_802BED34_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8034F19C(CpuContext* ctx);
extern "C" uint32_t func_8034F19C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B0DC0(CpuContext* ctx);
extern "C" uint64_t func_803B0DC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8034F19C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8034F19C_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_802BC5C8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_802BC5C8;

loc_802BC5C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r4;
    ctx->lr = 0x802BC5ECu;
    if constexpr (KnownRegArgsCpuCall<0x802BED34u>(&func_802BED34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BED34_656 = func_802BED34_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BED34_656;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BED34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = r3;
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
    r29 = 0;
    r0 = MemoryInline::FlatRead8((r30 + 645));
    r0 = (r0 & 32);
}

loc_802BC60C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BC6A0;
    }
}

loc_802BC610:
{
    ctx->lr = 0x802BC614u;
    if constexpr (KnownRegArgsCpuCall<0x803B0DC0u>(&func_803B0DC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B0DC0_D4D = func_803B0DC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B0DC0_D4D);
        r4 = static_cast<uint32_t>(regargs_result_803B0DC0_D4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B0DC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_802BC618:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802BC6A0;
    }
}

loc_802BC61C:
{
}

loc_802BC620:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802BC630;
    }
}

loc_802BC624:
{
    r0 = MemoryInline::FlatRead8((r31 + 274));
}

loc_802BC62C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802BC6A0;
    }
}

loc_802BC630:
{
    // inline leaf 0x80058C14 (8 guest instruction(s))
}

loc_inl1_0x80058C14:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2152));
}

loc_inl1_0x80058C24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80058C28:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 2152), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80058C14;
}

loc_inl1_return:
{
}

loc_inl1_cont_80058C14:
{
    // end of inlined leaf 0x80058C14
    r0 = MemoryInline::FlatRead8((r28 + 3));
}

loc_802BC63C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(24))) {
        goto loc_802BC668;
    }
}

loc_802BC640:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8034F19Cu) && KnownTranslatedCpuCall<0x8034F19Cu>::kAvailable && !KnownTranslatedCpuCall<0x8034F19Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8034F19Cu>()) {
        const auto state_free_result_8034F19C_159D = func_8034F19C_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8034F19C_159D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8034F19Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802BC650:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BC660;
    }
}

loc_802BC654:
{
    r0 = 66;
    r29 = 119;
    goto loc_802BC67C;
}

loc_802BC660:
{
    r0 = 65;
    goto loc_802BC67C;
}

loc_802BC668:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 13048);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_802BC678:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802BC6A0;
    }
}

loc_802BC67C:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r30 + 646), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 647), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 1256), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 1252), r28);
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 645), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r30 + 834), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite8((r30 + 838), static_cast<uint8_t>(r3));
}

loc_802BC6A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BC5C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BC5C8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BC5C8 func_802BC5C8 preserves=true fpr_mask=0x00000000
