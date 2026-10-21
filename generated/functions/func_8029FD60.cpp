#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A00F0(CpuContext* ctx);
extern "C" uint64_t func_802A00F0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802A01AC(CpuContext* ctx);
extern "C" uint64_t func_802A01AC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8031AC68(CpuContext* ctx);
extern "C" uint32_t func_8031AC68_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8031AC68_statefree(uint32_t);

extern "C" void func_8029FD60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8029FD60u);
    goto loc_8029FD60;

loc_8029FD60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x806B0000u;
    r31 = (r3 + -4792);
    r30 = 0;
    r3 = (r31 + 108);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 25));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8029FDA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029FDB8;
    }
}

loc_8029FDA4:
{
}

loc_8029FDA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029FEB0;
    }
}

loc_8029FDAC:
{
}

loc_8029FDB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029FF2C;
    }
}

loc_8029FDB4:
{
    goto loc_8029FF9C;
}

loc_8029FDB8:
{
    r0 = 6;
    MemoryInline::FlatWriteRam8((r31 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_8029FDC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029FE5C;
    }
}

loc_8029FDCC:
{
    ctx->lr = 0x8029FDD0u;
    if constexpr (KnownRegArgsCpuCall<0x802A01ACu>(&func_802A01AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A01AC_AE6 = func_802A01AC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A01AC_AE6);
        r4 = static_cast<uint32_t>(regargs_result_802A01AC_AE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A01ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8029FDD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029FDE4;
    }
}

loc_8029FDD8:
{
    r3 = 3;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
    goto loc_8029FDEC;
}

loc_8029FDE4:
{
    r3 = 2;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
}

loc_8029FDEC:
{
    r30 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8031AC68u) && KnownTranslatedCpuCall<0x8031AC68u>::kAvailable && !KnownTranslatedCpuCall<0x8031AC68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8031AC68u>()) {
        const auto state_free_result_8031AC68_11A2 = func_8031AC68_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8031AC68_11A2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031AC68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r31 + 134), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8031AC68u) && KnownTranslatedCpuCall<0x8031AC68u>::kAvailable && !KnownTranslatedCpuCall<0x8031AC68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8031AC68u>()) {
        const auto state_free_result_8031AC68_1501 = func_8031AC68_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8031AC68_1501);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031AC68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r31 + 158), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x8029FE18u;
    if constexpr (KnownRegArgsCpuCall<0x802A00F0u>(&func_802A00F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802A00F0_1819 = func_802A00F0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A00F0_1819);
        r4 = static_cast<uint32_t>(regargs_result_802A00F0_1819 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A00F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r31 + 230), static_cast<uint8_t>(r0));
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8029FE2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8029FE50;
    }
}

loc_8029FE30:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2223));
}

loc_8029FE40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029FE50;
    }
}

loc_8029FE44:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 182), static_cast<uint8_t>(r0));
    goto loc_8029FEA0;
}

loc_8029FE50:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 182), static_cast<uint8_t>(r0));
    goto loc_8029FEA0;
}

loc_8029FE5C:
{
    r3 = 1;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
    r30 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8031AC68u) && KnownTranslatedCpuCall<0x8031AC68u>::kAvailable && !KnownTranslatedCpuCall<0x8031AC68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8031AC68u>()) {
        const auto state_free_result_8031AC68_20B9 = func_8031AC68_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8031AC68_20B9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031AC68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r31 + 134), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8031AC68u) && KnownTranslatedCpuCall<0x8031AC68u>::kAvailable && !KnownTranslatedCpuCall<0x8031AC68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8031AC68u>()) {
        const auto state_free_result_8031AC68_2418 = func_8031AC68_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8031AC68_2418);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031AC68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r31 + 158), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x8029FE90u;
    if constexpr (KnownRegArgsCpuCall<0x802A00F0u>(&func_802A00F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802A00F0_2730 = func_802A00F0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A00F0_2730);
        r4 = static_cast<uint32_t>(regargs_result_802A00F0_2730 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A00F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r31 + 230), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 182), static_cast<uint8_t>(r0));
}

loc_8029FEA0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 110), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 206), static_cast<uint8_t>(r0));
    goto loc_8029FFA4;
}

loc_8029FEB0:
{
    r0 = 6;
    MemoryInline::FlatWriteRam8((r31 + 23), static_cast<uint8_t>(r0));
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8029FEC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029FED0;
    }
}

loc_8029FEC4:
{
    r3 = 5;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
    goto loc_8029FED8;
}

loc_8029FED0:
{
    r3 = 4;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
}

loc_8029FED8:
{
    r30 = r3;
    r29 = 1;
    MemoryInline::FlatWriteRam8((r31 + 110), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r31 + 134), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r31 + 158), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r31 + 230), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_8029FEF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8029FFA4;
    }
}

loc_8029FEFC:
{
    MemoryInline::FlatWriteRam8((r31 + 182), static_cast<uint8_t>(r29));
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8029FF08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029FF14;
    }
}

loc_8029FF0C:
{
    MemoryInline::FlatWriteRam8((r31 + 206), static_cast<uint8_t>(r29));
    goto loc_8029FFA4;
}

loc_8029FF14:
{
    r3 = 25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8029FF20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029FFA4;
    }
}

loc_8029FF24:
{
    MemoryInline::FlatWriteRam8((r31 + 206), static_cast<uint8_t>(r29));
    goto loc_8029FFA4;
}

loc_8029FF2C:
{
    r0 = 6;
    MemoryInline::FlatWriteRam8((r31 + 23), static_cast<uint8_t>(r0));
    r3 = 6;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
    r30 = r3;
    r3 = 1;
    MemoryInline::FlatWriteRam8((r31 + 110), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r31 + 134), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r31 + 230), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_8029FF58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8029FF88;
    }
}

loc_8029FF5C:
{
    MemoryInline::FlatWriteRam8((r31 + 158), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 400));
    // inline leaf 0x8027D79C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 616));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8027D79C
    r4 = (1 - r3);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWriteRam8((r31 + 182), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 206), static_cast<uint8_t>(r0));
    goto loc_8029FFA4;
}

loc_8029FF88:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 182), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 158), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 206), static_cast<uint8_t>(r0));
    goto loc_8029FFA4;
}

loc_8029FF9C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 23), static_cast<uint8_t>(r0));
}

loc_8029FFA4:
{
    r4 = MemoryInline::FlatRead8((r31 + 23));
    r0 = MemoryInline::FlatRead8((r31 + 27));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8029FFB8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8029FFC8;
    }
}

loc_8029FFBC:
{
    r0 = (r4 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWriteRam8((r31 + 27), static_cast<uint8_t>(r0));
}

loc_8029FFC8:
{
    r4 = 0;
    r3 = (r31 + 108);
    goto loc_8029FFF0;
}

loc_8029FFD4:
{
}

loc_8029FFD8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8029FFE8;
    }
}

loc_8029FFDC:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r30 = (r30 + 4);
}

loc_8029FFE8:
{
    r3 = (r3 + 24);
    r4 = (r4 + 1);
}

loc_8029FFF0:
{
    r0 = MemoryInline::FlatRead8((r31 + 23));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8029FFFC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8029FFD4;
    }
}

loc_802A0000:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8029FD60 func_8029FD60 preserves=true fpr_mask=0x00000000
