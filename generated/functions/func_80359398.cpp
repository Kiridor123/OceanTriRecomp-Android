#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E7358(CpuContext* ctx);
extern "C" uint64_t func_801E7358_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80359398_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80359398;

loc_80359398:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r30 = (r30_rot_0 & -8);
    r29 = (r30 + 7);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r3 = (r3 + 16);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r28 = 0;
    r27 = MemoryInline::FlatRead16((r25 + 68));
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
    r26 = 0;
    r31 = 0;
    goto loc_803594CC;
}

loc_803593EC:
{
    r3 = MemoryInline::FlatRead32((r25 + 76));
    r3_addr_2 = (r3 + r31);
    r24 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r25 + 80));
}

loc_803593FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80359418;
    }
}

loc_80359400:
{
}

loc_80359404:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80359410;
    }
}

loc_80359408:
{
    r3 = 1;
    goto loc_80359424;
}

loc_80359410:
{
    r3 = 0;
    goto loc_80359424;
}

loc_80359418:
{
    r3 = r24;
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80359424u;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_DA6 = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_DA6);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_DA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80359424:
{
}

loc_80359428:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80359438;
    }
}

loc_8035942C:
{
    r0 = MemoryInline::FlatRead8((r25 + 80));
}

loc_80359434:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803594C4;
    }
}

loc_80359438:
{
}

loc_8035943C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r30))) {
        goto loc_803594C0;
    }
}

loc_80359440:
{
}

loc_80359444:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(r29))) {
        goto loc_803594C0;
    }
}

loc_80359448:
{
}

loc_8035944C:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r27))) {
        goto loc_803594C0;
    }
}

loc_80359450:
{
    r0 = MemoryInline::FlatRead16((r25 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r25 + r0);
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r24));
    r0 = MemoryInline::FlatRead8((r25 + 80));
}

loc_80359468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80359480;
    }
}

loc_8035946C:
{
}

loc_80359470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80359480;
    }
}

loc_80359474:
{
}

loc_80359478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80359498;
    }
}

loc_8035947C:
{
    goto loc_803594B4;
}

loc_80359480:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead16((r25 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r4));
    goto loc_803594B4;
}

loc_80359498:
{
    r3 = r24;
    if constexpr (KnownRegArgsCpuCall<0x801E7358u>(&func_801E7358)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E7358_1938 = func_801E7358_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E7358_1938);
        r4 = static_cast<uint32_t>(regargs_result_801E7358_1938 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801E7358u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = MemoryInline::FlatRead16((r25 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r4));
}

loc_803594B4:
{
    r3 = MemoryInline::FlatRead16((r25 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r25 + 8), static_cast<uint16_t>(r0));
}

loc_803594C0:
{
    r28 = (r28 + 1);
}

loc_803594C4:
{
    r31 = (r31 + 2);
    r26 = (r26 + 1);
}

loc_803594CC:
{
}

loc_803594D0:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r27))) {
        goto loc_803593EC;
    }
}

loc_803594D4:
{
    r3 = MemoryInline::FlatRead16((r25 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead8((r25 + 1));
}

loc_803594E0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_803594F0;
    }
}

loc_803594E4:
{
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r25 + 1), static_cast<uint8_t>(r0));
}

loc_803594F0:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl1_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A8F8C;
    }
}

loc_inl1_0x802A8F84:
{
    r3 = 1;
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl1_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_return:
{
}

loc_inl1_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r25 + 4), static_cast<uint16_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80359508:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80359514;
    }
}

loc_8035950C:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r25 + 4), static_cast<uint16_t>(r0));
}

loc_80359514:
{
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
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80359398(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80359398_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000205B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80359398 func_80359398 preserves=true fpr_mask=0x00000000
