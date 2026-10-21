#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009EF58(CpuContext* ctx);
extern "C" uint64_t func_8009EF58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800ADA24(CpuContext* ctx);
extern "C" uint64_t func_800ADA24_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" void func_800AD584(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800AD9F8_loc_0 = 0;
    uint32_t addr_psqx_800ADA04_loc_0 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800AD584u);
    goto loc_800AD584;

loc_800AD584:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 160);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r24 = r3;
    r25 = r4;
    r23 = r6;
    r26 = r7;
    r27 = r8;
    r28 = r10;
    r29 = MemoryInline::FlatRead32((r1 + 200));
    r30 = MemoryInline::FlatRead32((r1 + 204));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r3 = (r9 & 65535);
    r4 = MemoryInline::FlatRead16((r5 + 6));
    r5 = (r8 & 65535);
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8009EF58_F05 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_F05);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_F05 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r23 + 4));
    r0 = (r0 & 16);
}

loc_800AD5FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AD62C;
    }
}

loc_800AD600:
{
}

loc_800AD604:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800AD624;
    }
}

loc_800AD608:
{
    r3 = MemoryInline::FlatRead16((r25 + 12));
    r3 = (r3 + 1);
    r0 = PPC_Divwu(static_cast<uint32_t>(r27), static_cast<uint32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r27 - r0);
}

loc_800AD620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD65C;
    }
}

loc_800AD624:
{
    r3 = 0;
    goto loc_800AD9F4;
}

loc_800AD62C:
{
    r0 = MemoryInline::FlatRead16((r26 + 220));
}

loc_800AD634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD65C;
    }
}

loc_800AD638:
{
    r3 = MemoryInline::FlatRead16((r25 + 12));
    r3 = (r3 + 1);
    r0 = PPC_Divwu(static_cast<uint32_t>(r27), static_cast<uint32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r27 - r0);
}

loc_800AD650:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD65C;
    }
}

loc_800AD654:
{
    r3 = 0;
    goto loc_800AD9F4;
}

loc_800AD65C:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 & 1);
}

loc_800AD668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD6F0;
    }
}

loc_800AD66C:
{
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r25 + 1));
}

loc_800AD67C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD68C;
    }
}

loc_800AD680:
{
}

loc_800AD684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800AD69C;
    }
}

loc_800AD688:
{
    goto loc_800AD6D4;
}

loc_800AD68C:
{
    r3 = (r1 + 40);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800AD6D4;
}

loc_800AD69C:
{
    r0 = MemoryInline::FlatRead16((r26 + 220));
}

loc_800AD6A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AD6B8;
    }
}

loc_800AD6A8:
{
    r3 = (r1 + 40);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800AD6D4;
}

loc_800AD6B8:
{
    r3 = (r1 + 16);
    r4 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r26 + 196));
    ctx->lr = 0x800AD6C8u;
    if constexpr (KnownRegArgsCpuCall<0x800ADA24u>(&func_800ADA24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_800ADA24_1CE2 = func_800ADA24_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800ADA24_1CE2);
        r4 = static_cast<uint32_t>(regargs_result_800ADA24_1CE2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x800ADA24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    }
    r3 = (r1 + 40);
    r4 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800AD6D4:
{
    r3 = (r1 + 40);
    r4 = r30;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 40);
    ctx->lr = 0x800AD6ECu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32((r25 + 4), f1.d);
}

loc_800AD6F0:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 & 2);
}

loc_800AD6FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD7C8;
    }
}

loc_800AD700:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31184));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31196));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32(r24, f0.d);
    r3 = r31;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31184));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31196));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r24 + 4), f0.d);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31184));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31196));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r24 + 8), f0.d);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 & 1);
}

loc_800AD794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD7B4;
    }
}

loc_800AD798:
{
    r3 = r24;
    r4 = r24;
    ctx->lr = 0x800AD7A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C4E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800AD7A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800AD7B4;
    }
}

loc_800AD7AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31224));
    MemoryInline::FlatWriteFloat32((r24 + 4), f0.d);
}

loc_800AD7B4:
{
    r3 = r24;
    r4 = r24;
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f0.d);
    // end of inlined leaf 0x80051488
    goto loc_800AD9A8;
}

loc_800AD7C8:
{
    r3 = (r1 + 28);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead16((r26 + 220));
}

loc_800AD7D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AD7EC;
    }
}

loc_800AD7DC:
{
    r3 = (r1 + 28);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800AD7F8;
}

loc_800AD7EC:
{
    r3 = (r1 + 28);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800AD7F8:
{
    r3 = (r1 + 28);
    r4 = r30;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 28);
    r4 = r3;
    ctx->lr = 0x800AD814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C4E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800AD818:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800AD824;
    }
}

loc_800AD81C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31224));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
}

loc_800AD824:
{
    r3 = (r1 + 56);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 56);
    r4 = (r1 + 28);
    ctx->lr = 0x800AD838u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009B4ACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31220), 0, 52u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31220));
    f2.d = MemoryInline::FlatReadFloat32((r25 + 8));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AD844:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AD940;
    }
}

loc_800AD848:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r2 + -31176));
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -31192));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f31.d = PpcFmulsInline(f0.d, f2.d);
    r3 = r31;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r2 + -31176));
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -31192));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r2 + -31188));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31208));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r26 = r3;
    r3 = r24;
    f1.d = f31.d;
    ctx->lr = 0x800AD8B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C754u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r24);
    MemoryInline::FlatWriteFloat32((r24 + 8), f0.d);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f1.d = f30.d;
    ctx->lr = 0x800AD8C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r24);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r24, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 8), f0.d);
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 & 1);
}

loc_800AD8F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD90C;
    }
}

loc_800AD8F8:
{
    r3 = r24;
    r4 = r24;
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f0.d);
    // end of inlined leaf 0x80051488
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_800AD998;
}

loc_800AD90C:
{
    r3 = r24;
    r4 = r24;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31176));
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31192));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f0.d);
    // end of inlined leaf 0x80051488
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_800AD998;
}

loc_800AD940:
{
    MemoryInline::FlatWriteFloat32(r24, f0.d);
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 & 1);
}

loc_800AD950:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AD960;
    }
}

loc_800AD954:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    MemoryInline::FlatWriteFloat32((r24 + 4), f0.d);
    goto loc_800AD990;
}

loc_800AD960:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r2 + -31184));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31196));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 4), f0.d);
}

loc_800AD990:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31220));
    MemoryInline::FlatWriteFloat32((r24 + 8), f0.d);
}

loc_800AD998:
{
    r3 = r24;
    r4 = (r1 + 56);
    r5 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
}

loc_800AD9A8:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 & 4);
}

loc_800AD9B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AD9C0;
    }
}

loc_800AD9B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31220));
    MemoryInline::FlatWriteFloat32(r24, f0.d);
}

loc_800AD9C0:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 & 8);
}

loc_800AD9CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AD9D8;
    }
}

loc_800AD9D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31220));
    MemoryInline::FlatWriteFloat32((r24 + 4), f0.d);
}

loc_800AD9D8:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 & 16);
}

loc_800AD9E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AD9F0;
    }
}

loc_800AD9E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31220));
    MemoryInline::FlatWriteFloat32((r24 + 8), f0.d);
}

loc_800AD9F0:
{
    r3 = 1;
}

loc_800AD9F4:
{
    r0 = 184;
    addr_psqx_800AD9F8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800AD9F8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r0 = 168;
    addr_psqx_800ADA04_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800ADA04_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800AD584 func_800AD584 preserves=true fpr_mask=0x00000000
