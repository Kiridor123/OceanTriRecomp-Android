#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803AB49C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_803AB49C;

loc_803AB49C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r30 = r4;
    r31 = r5;
    r29 = 22;
    r4 = 145;
    ctx->lr = 0x803AB4D0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803AB4D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AB4DC;
    }
}

loc_803AB4D8:
{
    r29 = 26;
}

loc_803AB4DC:
{
    r3 = r28;
    r4 = 146;
    ctx->lr = 0x803AB4E8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803AB4EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AB4F4;
    }
}

loc_803AB4F0:
{
    r29 = 29;
}

loc_803AB4F4:
{
    r3 = r28;
    r4 = 147;
    ctx->lr = 0x803AB500u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803AB504:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AB50C;
    }
}

loc_803AB508:
{
    r29 = 16;
}

loc_803AB50C:
{
    r3 = r28;
    r4 = 148;
    ctx->lr = 0x803AB518u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803AB51C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AB524;
    }
}

loc_803AB520:
{
    r29 = 8;
}

loc_803AB524:
{
    r3 = r30;
    r4 = 0;
    r0 = 2;
    ctr = r0;
}

loc_803AB534:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803AB53C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_803AB544;
    }
}

loc_803AB540:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r29));
}

loc_803AB544:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_803AB54C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_803AB554;
    }
}

loc_803AB550:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r29));
}

loc_803AB554:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_803AB55C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_803AB564;
    }
}

loc_803AB560:
{
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r29));
}

loc_803AB564:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_803AB56C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_803AB574;
    }
}

loc_803AB570:
{
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r29));
}

loc_803AB574:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_803AB57C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_803AB584;
    }
}

loc_803AB580:
{
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r29));
}

loc_803AB584:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_803AB58C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_803AB594;
    }
}

loc_803AB590:
{
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r29));
}

loc_803AB594:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_803AB59C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_803AB5A4;
    }
}

loc_803AB5A0:
{
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r29));
}

loc_803AB5A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_803AB5AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_803AB5B4;
    }
}

loc_803AB5B0:
{
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r29));
}

loc_803AB5B4:
{
    r3 = (r3 + 8);
    r4 = (r4 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AB534;
    }
}

loc_803AB5C0:
{
    r29 = 0;
    r3 = r28;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_1546 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1546);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1546 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AB5D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AB5E0;
    }
}

loc_803AB5D8:
{
    r29 = 1;
    goto loc_803AB62C;
}

loc_803AB5E0:
{
    r3 = r28;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_18B2 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_18B2);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_18B2 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AB5F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AB62C;
    }
}

loc_803AB5F4:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_803AB624:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(50))) {
        goto loc_803AB62C;
    }
}

loc_803AB628:
{
    r29 = 1;
}

loc_803AB62C:
{
}

loc_803AB630:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_803AB658;
    }
}

loc_803AB634:
{
    r3 = 32;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r3));
    r0 = (r31 & 255);
}

loc_803AB644:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AB650;
    }
}

loc_803AB648:
{
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r3));
    goto loc_803AB658;
}

loc_803AB650:
{
    MemoryInline::FlatWrite8((r30 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 13), static_cast<uint8_t>(r3));
}

loc_803AB658:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AB49C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AB49C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AB49C func_803AB49C preserves=true fpr_mask=0x00000000
