#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802DA270(CpuContext* ctx);
extern "C" uint32_t func_802DA270_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802DA338(CpuContext* ctx);
extern "C" uint32_t func_802DA338_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802DA4B8(CpuContext* ctx);
extern "C" uint64_t func_802DA4B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8034C02C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8034C02C;

loc_8034C02C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    r3 = 7;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl0_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl0_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl0_0x803BECF4;
    }
}

loc_inl0_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r3 = (r0 ^ 1);
    goto loc_inl0_cont_803BECD4;
}

loc_inl0_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_inl0_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_8034C058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034C064;
    }
}

loc_8034C05C:
{
    r3 = 0;
    goto loc_8034C110;
}

loc_8034C064:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_8034C06C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8034C078;
    }
}

loc_8034C070:
{
    r3 = 0;
    goto loc_8034C110;
}

loc_8034C078:
{
    r3 = 1;
    r4 = (r30 & 255);
    ctx->lr = 0x8034C084u;
    if constexpr (KnownRegArgsCpuCall<0x802DA270u>(&func_802DA270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DA270_AA3 = func_802DA270_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802DA270_AA3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DA270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_8034C088:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8034C094;
    }
}

loc_8034C08C:
{
    r3 = 0;
    goto loc_8034C110;
}

loc_8034C094:
{
    r3 = 1;
    ctx->lr = 0x8034C09Cu;
    if constexpr (KnownRegArgsCpuCall<0x802DA338u>(&func_802DA338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802DA338_E3E = func_802DA338_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802DA338_E3E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DA338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 1;
    r4 = (r30 & 255);
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8034C0BCu;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_1191 = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_1191);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_1191 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
}

loc_8034C0C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8034C0C8;
    }
}

loc_8034C0C4:
{
    r31 = 1;
}

loc_8034C0C8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_8034C0D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8034C10C;
    }
}

loc_8034C0D4:
{
}

loc_8034C0D8:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_8034C10C;
    }
}

loc_8034C0DC:
{
    r31 = 0;
    r3 = 1;
    r4 = 21;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8034C100u;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_18ED = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_18ED);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_18ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
}

loc_8034C104:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8034C10C;
    }
}

loc_8034C108:
{
    r31 = 1;
}

loc_8034C10C:
{
    r3 = r31;
}

loc_8034C110:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034C02C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034C02C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034C02C func_8034C02C preserves=true fpr_mask=0x00000000
