#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CFB34(CpuContext* ctx);
extern "C" uint64_t func_800CFB34_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D068(CpuContext* ctx);
extern "C" uint32_t func_8012D068_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8015D70C(CpuContext* ctx);
extern "C" uint32_t func_8015D70C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80345F48(CpuContext* ctx);
extern "C" uint64_t func_80345F48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8012D068_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8015D70C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8012D068_statefree_v0(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8015D70C_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80345FB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_80345FB0;

loc_80345FB0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 2;
    // inline leaf 0x80343AB8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -26328);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80343AB8
    r26 = r3;
}

loc_80345FE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803460B8;
    }
}

loc_80345FE4:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80345FEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803460B8;
    }
}

loc_80345FF0:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r25 = r3;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFB34u>(&func_800CFB34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFB34_FEF = func_800CFB34_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFB34_FEF);
        r4 = static_cast<uint32_t>(regargs_result_800CFB34_FEF >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFB34u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r24 = 0;
    r27 = (r3 & 65535);
    goto loc_803460B0;
}

loc_80346010:
{
    r3 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012D068u) && KnownTranslatedCpuCall<0x8012D068u>::kAvailable && !KnownTranslatedCpuCall<0x8012D068u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012D068u>()) {
        const auto state_free_result_8012D068_1349 = func_8012D068_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8012D068_1349[0]);
        r3 = static_cast<uint32_t>(state_free_result_8012D068_1349[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8012D068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
}

loc_8034601C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803460A8;
    }
}

loc_80346020:
{
    r0 = MemoryInline::FlatRead8((r25 + 485));
}

loc_80346028:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_803460A8;
    }
}

loc_8034602C:
{
    r0 = (r30 & 255);
}

loc_80346034:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80346054;
    }
}

loc_80346038:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
}

loc_80346040:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80346054;
    }
}

loc_80346044:
{
    r3 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8015D70Cu) && KnownTranslatedCpuCall<0x8015D70Cu>::kAvailable && !KnownTranslatedCpuCall<0x8015D70Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8015D70Cu>()) {
        const auto state_free_result_8015D70C_19A7 = func_8015D70C_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8015D70C_19A7[0]);
        r3 = static_cast<uint32_t>(state_free_result_8015D70C_19A7[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8015D70Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
}

loc_80346050:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803460A8;
    }
}

loc_80346054:
{
    r3 = MemoryInline::FlatRead8((r26 + 2));
    r0 = MemoryInline::FlatRead32((r25 + 456));
    r0 = (r3 & r0);
}

loc_80346064:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803460A8;
    }
}

loc_80346068:
{
    r3 = MemoryInline::FlatRead8((r25 + 3));
    r0 = MemoryInline::FlatRead8((r26 + 1));
}

loc_80346074:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803460A8;
    }
}

loc_80346078:
{
    r5 = MemoryInline::FlatRead8((r25 + 481));
    r4 = (r29 & 255);
}

loc_80346084:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_80346090;
    }
}

loc_80346088:
{
    r31 = 0;
    goto loc_803460B8;
}

loc_80346090:
{
    r3 = r28;
    ctx->lr = 0x80346098u;
    if constexpr (KnownRegArgsCpuCall<0x80345F48u>(&func_80345F48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80345F48_2089 = func_80345F48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80345F48_2089);
        r4 = static_cast<uint32_t>(regargs_result_80345F48_2089 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80345F48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_803460A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803460A8;
    }
}

loc_803460A4:
{
    r31 = 1;
}

loc_803460A8:
{
    r24 = (r24 + 1);
    r25 = (r25 + 2840);
}

loc_803460B0:
{
}

loc_803460B4:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r27))) {
        goto loc_80346010;
    }
}

loc_803460B8:
{
    r3 = r31;
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80345FB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80345FB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80345FB0 func_80345FB0 preserves=true fpr_mask=0x00000000
