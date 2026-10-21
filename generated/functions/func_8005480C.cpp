#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800534CC(CpuContext* ctx);
extern "C" uint64_t func_800534CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800534F0(CpuContext* ctx);
extern "C" uint64_t func_800534F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8005480C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80054C90_loc_0 = 0;
    uint32_t addr_psqx_80054C9C_loc_0 = 0;
    uint32_t addr_psqx_80054CA8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r27_rot_6 = 0;
    uint32_t r27_rot_7 = 0;
    uint32_t r27_rot_8 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8005480Cu);
    goto loc_8005480C;

loc_8005480C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 64u, (r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    r27 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r27 + -12896));
    r0 = (r0 & 12288);
}

loc_80054858:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12288))) {
        goto loc_80054C8C;
    }
}

loc_8005485C:
{
    ctx->lr = 0x80054860u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800545E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r27 = (r27 + -12896);
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 4), 0, 220u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r27 + 4));
}

loc_8005486C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800548A4;
    }
}

loc_80054870:
{
}

loc_80054874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800548C4;
    }
}

loc_80054878:
{
}

loc_8005487C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800548E4;
    }
}

loc_80054880:
{
}

loc_80054884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800548F8;
    }
}

loc_80054888:
{
}

loc_8005488C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8005490C;
    }
}

loc_80054890:
{
}

loc_80054894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8005492C;
    }
}

loc_80054898:
{
}

loc_8005489C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80054940;
    }
}

loc_800548A0:
{
    goto loc_80054C8C;
}

loc_800548A4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 216u, (r27 + 220));
    ctx->lr = 0x800548B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B7160u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = 184;
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r27 + 6));
    ctx->lr = 0x800548C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_80054958;
}

loc_800548C4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 216u, (r27 + 220));
    ctx->lr = 0x800548D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B7120u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = 168;
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r27 + 6));
    ctx->lr = 0x800548E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_80054958;
}

loc_800548E4:
{
    r3 = 144;
    r4 = 0;
    r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r27 + 6));
    ctx->lr = 0x800548F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_80054958;
}

loc_800548F8:
{
    r3 = 128;
    r4 = 0;
    r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r27 + 6));
    ctx->lr = 0x80054908u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_80054958;
}

loc_8005490C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r27 + 5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 216u, (r27 + 220));
    ctx->lr = 0x80054918u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B7120u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = 176;
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r27 + 6));
    ctx->lr = 0x80054928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_80054958;
}

loc_8005492C:
{
    r3 = 152;
    r4 = 0;
    r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r27 + 6));
    ctx->lr = 0x8005493Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_80054958;
}

loc_80054940:
{
    r3 = 160;
    r4 = 0;
    r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r27 + 6));
    ctx->lr = 0x80054950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
}

loc_80054958:
{
    r31 = 0x80670000u;
    r27 = (r31 + -12896);
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 6), 0, 14u, true, false);
    r30 = MemoryInline::ReadResolved32(guest_range_1, 6u, (r27 + 12));
    r3 = MemoryInline::FlatRead32((r31 + -12896));
    r0 = (r3 & 131072);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
    r0 = (r3 & 262144);
}

loc_8005497C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80054AB4;
    }
}

loc_80054980:
{
    r29 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r27 + 16));
    r0 = (r3 & 1);
}

loc_8005498C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80054A54;
    }
}

loc_80054990:
{
    r0 = (r3 & 65536);
}

loc_80054998:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800549F8;
    }
}

loc_8005499C:
{
    r26 = MemoryInline::ReadResolved32(guest_range_1, 2u, (r27 + 8));
    r25 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r27 + 6));
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r27 = (r27_rot_1 & -4);
    goto loc_800549EC;
}

loc_800549AC:
{
    r3 = MemoryInline::FlatRead16(r26);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r26 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x80053414 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80053414
    r3 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    r0 = MemoryInline::FlatRead32((r31 + -12896));
    r0 = (r0 & 2);
}

loc_800549CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800549DC;
    }
}

loc_800549D0:
{
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
}

loc_800549DC:
{
    r25 = (r25 + -1);
    r26 = (r26 + 4);
    r30 = (r30 + r27);
    r29 = (r29 + 8);
}

loc_800549EC:
{
}

loc_800549F0:
{
    if ((static_cast<int32_t>(r25) > static_cast<int32_t>(0))) {
        goto loc_800549AC;
    }
}

loc_800549F4:
{
    goto loc_80054C84;
}

loc_800549F8:
{
    r25 = MemoryInline::ReadResolved32(guest_range_1, 2u, (r27 + 8));
    r26 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r27 + 6));
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r27 = (r27_rot_2 & -4);
    goto loc_80054A48;
}

loc_80054A08:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    f2.d = MemoryInline::FlatReadFloat32((r25 + 4));
    // inline leaf 0x80054CC8 (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x80054CC8
    r3 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    r0 = MemoryInline::FlatRead32((r31 + -12896));
    r0 = (r0 & 2);
}

loc_80054A28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80054A38;
    }
}

loc_80054A2C:
{
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
}

loc_80054A38:
{
    r26 = (r26 + -1);
    r25 = (r25 + 8);
    r30 = (r30 + r27);
    r29 = (r29 + 8);
}

loc_80054A48:
{
}

loc_80054A4C:
{
    if ((static_cast<int32_t>(r26) > static_cast<int32_t>(0))) {
        goto loc_80054A08;
    }
}

loc_80054A50:
{
    goto loc_80054C84;
}

loc_80054A54:
{
    r25 = MemoryInline::ReadResolved32(guest_range_1, 2u, (r27 + 8));
    r26 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r27 + 6));
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r27 = (r27_rot_3 & -4);
    goto loc_80054AA8;
}

loc_80054A64:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    f2.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r25 + 8));
    // inline leaf 0x8005385C (5 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
    // end of inlined leaf 0x8005385C
    r3 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    r0 = MemoryInline::FlatRead32((r31 + -12896));
    r0 = (r0 & 2);
}

loc_80054A88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80054A98;
    }
}

loc_80054A8C:
{
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
}

loc_80054A98:
{
    r26 = (r26 + -1);
    r25 = (r25 + 12);
    r30 = (r30 + r27);
    r29 = (r29 + 8);
}

loc_80054AA8:
{
}

loc_80054AAC:
{
    if ((static_cast<int32_t>(r26) > static_cast<int32_t>(0))) {
        goto loc_80054A64;
    }
}

loc_80054AB0:
{
    goto loc_80054C84;
}

loc_80054AB4:
{
    r29 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r27 + 16));
    r3 = (r27 + 224);
    ctx->lr = 0x80054AC0u;
    if constexpr (KnownRegArgsCpuCall<0x800534F0u>(&func_800534F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800534F0_45FE = func_800534F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800534F0_45FE);
        r4 = static_cast<uint32_t>(regargs_result_800534F0_45FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800534F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32408));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32412));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = (r27 + 224);
    ctx->lr = 0x80054AE4u;
    if constexpr (KnownRegArgsCpuCall<0x800534CCu>(&func_800534CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800534CC_4ABC = func_800534CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800534CC_4ABC);
        r4 = static_cast<uint32_t>(regargs_result_800534CC_4ABC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800534CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32408));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32412));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = MemoryInline::FlatRead32((r31 + -12896));
    r0 = (r3 & 1);
}

loc_80054B0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80054C0C;
    }
}

loc_80054B10:
{
    r0 = (r3 & 65536);
}

loc_80054B18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80054B94;
    }
}

loc_80054B1C:
{
    r25 = MemoryInline::FlatRead32((r27 + 8));
    r26 = MemoryInline::FlatRead16((r27 + 6));
    r27_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r27 = (r27_rot_4 & -4);
    f30.d = MemoryInline::FlatReadFloat64((r2 + -32400));
    goto loc_80054B88;
}

loc_80054B30:
{
    r3 = MemoryInline::FlatRead16(r25);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r25 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x80053414 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80053414
    r3 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f2.d = PpcFmulsInline(f0.d, f29.d);
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
    r26 = (r26 + -1);
    r25 = (r25 + 4);
    r30 = (r30 + r27);
    r29 = (r29 + 4);
}

loc_80054B88:
{
}

loc_80054B8C:
{
    if ((static_cast<int32_t>(r26) > static_cast<int32_t>(0))) {
        goto loc_80054B30;
    }
}

loc_80054B90:
{
    goto loc_80054C84;
}

loc_80054B94:
{
    r25 = MemoryInline::FlatRead32((r27 + 8));
    r26 = MemoryInline::FlatRead16((r27 + 6));
    r27_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r27 = (r27_rot_5 & -4);
    f30.d = MemoryInline::FlatReadFloat64((r2 + -32400));
    goto loc_80054C00;
}

loc_80054BA8:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    f2.d = MemoryInline::FlatReadFloat32((r25 + 4));
    // inline leaf 0x80054CC8 (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x80054CC8
    r3 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f2.d = PpcFmulsInline(f0.d, f29.d);
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
    r26 = (r26 + -1);
    r25 = (r25 + 8);
    r30 = (r30 + r27);
    r29 = (r29 + 4);
}

loc_80054C00:
{
}

loc_80054C04:
{
    if ((static_cast<int32_t>(r26) > static_cast<int32_t>(0))) {
        goto loc_80054BA8;
    }
}

loc_80054C08:
{
    goto loc_80054C84;
}

loc_80054C0C:
{
    r25 = MemoryInline::FlatRead32((r27 + 8));
    r26 = MemoryInline::FlatRead16((r27 + 6));
    r27_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r27 = (r27_rot_6 & -4);
    f30.d = MemoryInline::FlatReadFloat64((r2 + -32400));
    goto loc_80054C7C;
}

loc_80054C20:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    f2.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r25 + 8));
    // inline leaf 0x8005385C (5 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
    // end of inlined leaf 0x8005385C
    r3 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f2.d = PpcFmulsInline(f0.d, f29.d);
    // inline leaf 0x800534BC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800534BC
    r26 = (r26 + -1);
    r25 = (r25 + 12);
    r30 = (r30 + r27);
    r29 = (r29 + 4);
}

loc_80054C7C:
{
}

loc_80054C80:
{
    if ((static_cast<int32_t>(r26) > static_cast<int32_t>(0))) {
        goto loc_80054C20;
    }
}

loc_80054C84:
{
    // inline leaf 0x80053404 (1 guest instruction(s))
    // end of inlined leaf 0x80053404
    ctx->lr = 0x80054C8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800533D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    mkw_gqr0 = ctx->gqr[0];
}

loc_80054C8C:
{
    r0 = 104;
    addr_psqx_80054C90_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80054C90_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 84u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 60u, (r1 + 96));
    r0 = 88;
    addr_psqx_80054C9C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80054C9C_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 44u, (r1 + 80));
    r0 = 72;
    addr_psqx_80054CA8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80054CA8_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 28u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_3, 80u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005480C func_8005480C preserves=true fpr_mask=0x00000000
