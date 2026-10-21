#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004B814(CpuContext* ctx);
extern "C" uint64_t func_8004B814_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004C068(CpuContext* ctx);
extern "C" uint32_t func_8004C068_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A9E84(CpuContext* ctx);
extern "C" uint32_t func_802A9E84_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031AC70(CpuContext* ctx);
extern "C" uint64_t func_8031AC70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031AE00(CpuContext* ctx);
extern "C" uint64_t func_8031AE00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8033B32C(CpuContext* ctx);
extern "C" uint64_t func_8033B32C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8031C11C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lhax_8031C314_loc_0 = 0;
    uint32_t addr_lhax_8031C328_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8031C11Cu);
    goto loc_8031C11C;

loc_8031C11C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    ctx->lr = 0x8031C140u;
    if constexpr (KnownRegArgsCpuCall<0x8033B32Cu>(&func_8033B32C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033B32C_92C = func_8033B32C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033B32C_92C);
        r4 = static_cast<uint32_t>(regargs_result_8033B32C_92C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033B32Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8031C144:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8031C15C;
    }
}

loc_8031C148:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 17), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 18), static_cast<uint8_t>(r0));
    goto loc_8031C16C;
}

loc_8031C15C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 17), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 18), static_cast<uint8_t>(r0));
}

loc_8031C16C:
{
    r4 = MemoryInline::FlatRead16((r30 + 8));
}

loc_8031C174:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(65535))) {
        goto loc_8031C184;
    }
}

loc_8031C178:
{
    r0 = MemoryInline::FlatRead16((r30 + 10));
}

loc_8031C180:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8031C194;
    }
}

loc_8031C184:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8031C384;
}

loc_8031C194:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 14));
}

loc_8031C1A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8031C238;
    }
}

loc_8031C1A8:
{
    r31 = MemoryInline::FlatRead32((r30 + 28));
    r3 = r31;
    r5 = MemoryInline::FlatRead16((r30 + 4));
    ctx->lr = 0x8031C1B8u;
    if constexpr (KnownRegArgsCpuCall<0x8031AC70u>(&func_8031AC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031AC70_11B0 = func_8031AC70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031AC70_11B0);
        r4 = static_cast<uint32_t>(regargs_result_8031AC70_11B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031AC70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8031C1BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031C1F0;
    }
}

loc_8031C1C0:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r30 + 4));
    if constexpr (KnownRegArgsCpuCall<0x802A9E84u>(&func_802A9E84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A9E84_1566 = func_802A9E84_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802A9E84_1566;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A9E84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
}

loc_8031C1D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8031C1F0;
    }
}

loc_8031C1DC:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
}

loc_8031C1F0:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r30 + 10));
    r5 = MemoryInline::FlatRead16((r30 + 6));
    ctx->lr = 0x8031C200u;
    if constexpr (KnownRegArgsCpuCall<0x8031AC70u>(&func_8031AC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031AC70_19E2 = func_8031AC70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031AC70_19E2);
        r4 = static_cast<uint32_t>(regargs_result_8031AC70_19E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031AC70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8031C204:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031C238;
    }
}

loc_8031C208:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r30 + 6));
    if constexpr (KnownRegArgsCpuCall<0x802A9E84u>(&func_802A9E84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A9E84_1D98 = func_802A9E84_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802A9E84_1D98;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A9E84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
}

loc_8031C220:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8031C238;
    }
}

loc_8031C224:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
}

loc_8031C238:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8031C244:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8031C378;
    }
}

loc_8031C248:
{
    r0 = MemoryInline::FlatRead8((r30 + 17));
}

loc_8031C250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031C340;
    }
}

loc_8031C254:
{
    r0 = MemoryInline::FlatRead8((r30 + 14));
}

loc_8031C25C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8031C278;
    }
}

loc_8031C260:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r4 = MemoryInline::FlatRead32((r31 + 404));
    r5 = MemoryInline::FlatRead32((r31 + 408));
    ctx->lr = 0x8031C274u;
    if constexpr (KnownRegArgsCpuCall<0x8031AE00u>(&func_8031AE00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031AE00_24BD = func_8031AE00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031AE00_24BD);
        r4 = static_cast<uint32_t>(regargs_result_8031AE00_24BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031AE00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8031C298;
}

loc_8031C278:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8031C280u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_285B = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_285B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 384);
    ctx->lr = 0x8031C298u;
    if constexpr (KnownRegArgsCpuCall<0x8004B814u>(&func_8004B814)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004B814_2BCD = func_8004B814_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B814_2BCD);
        r4 = static_cast<uint32_t>(regargs_result_8004B814_2BCD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004B814u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8031C298:
{
    r0 = MemoryInline::FlatRead8((r30 + 14));
}

loc_8031C2A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8031C2B8;
    }
}

loc_8031C2A4:
{
}

loc_8031C2A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031C2B8;
    }
}

loc_8031C2AC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    goto loc_8031C378;
}

loc_8031C2B8:
{
}

loc_8031C2BC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_8031C378;
    }
}

loc_8031C2C0:
{
}

loc_8031C2C4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8031C304;
    }
}

loc_8031C2C8:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r30 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x802A9E44 (16 guest instruction(s))
}

loc_inl0_0x802A9E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl0_0x802A9E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x802A9E70;
    }
}

loc_inl0_0x802A9E50:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x802A9E58:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(24))) {
        goto loc_inl0_0x802A9E70;
    }
}

loc_inl0_0x802A9E5C:
{
    r3 = MemoryInline::FlatRead32((r3 + 408));
    r0 = (r5 + -24);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    goto loc_inl0_cont_802A9E44;
}

loc_inl0_0x802A9E70:
{
    r3 = MemoryInline::FlatRead32((r3 + 404));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
}

loc_inl0_cont_802A9E44:
{
    // end of inlined leaf 0x802A9E44
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031C2DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_8031C378;
    }
}

loc_8031C2E0:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r30 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x802A9E44 (16 guest instruction(s))
}

loc_inl1_0x802A9E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl1_0x802A9E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A9E70;
    }
}

loc_inl1_0x802A9E50:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A9E58:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(24))) {
        goto loc_inl1_0x802A9E70;
    }
}

loc_inl1_0x802A9E5C:
{
    r3 = MemoryInline::FlatRead32((r3 + 408));
    r0 = (r5 + -24);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    goto loc_inl1_cont_802A9E44;
}

loc_inl1_0x802A9E70:
{
    r3 = MemoryInline::FlatRead32((r3 + 404));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
}

loc_inl1_cont_802A9E44:
{
    // end of inlined leaf 0x802A9E44
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031C2F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_8031C378;
    }
}

loc_8031C2F8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    goto loc_8031C378;
}

loc_8031C304:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 386);
    r0 = MemoryInline::FlatRead16((r30 + 8));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    addr_lhax_8031C314_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8031C314_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031C31C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_8031C378;
    }
}

loc_8031C320:
{
    r0 = MemoryInline::FlatRead16((r30 + 10));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    addr_lhax_8031C328_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8031C328_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031C330:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_8031C378;
    }
}

loc_8031C334:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    goto loc_8031C378;
}

loc_8031C340:
{
    r0 = MemoryInline::FlatRead8((r30 + 14));
}

loc_8031C348:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8031C378;
    }
}

loc_8031C34C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8031C354u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_42A5 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_42A5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 384);
    if constexpr (KnownRegArgsCpuCall<0x8004C068u>(&func_8004C068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C068_45A7 = func_8004C068_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004C068_45A7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004C068u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 65535);
}

loc_8031C36C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031C378;
    }
}

loc_8031C370:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
}

loc_8031C378:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
}

loc_8031C384:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031C11C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031C11C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8031C11C func_8031C11C preserves=true fpr_mask=0x00000000
