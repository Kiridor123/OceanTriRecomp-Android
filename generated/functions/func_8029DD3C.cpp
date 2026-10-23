#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008C4E8(CpuContext* ctx);
extern "C" uint32_t func_8008C4E8_ra58_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8029DD3C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8029E33C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8029DD3C;

loc_8029DD3C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 176);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 96);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 48);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r29 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r25 + 6), 0, 34u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 30u, (r25 + 36));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r25 + 6));
}

loc_8029DDA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029DDC0;
    }
}

loc_8029DDA4:
{
}

loc_8029DDA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029DDD0;
    }
}

loc_8029DDAC:
{
}

loc_8029DDB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029DDF0;
    }
}

loc_8029DDB4:
{
}

loc_8029DDB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029DDF8;
    }
}

loc_8029DDBC:
{
    goto loc_8029DE00;
}

loc_8029DDC0:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r25 + 16));
    r3 = MemoryInline::FlatRead32((r31 + 316));
    r30 = (r3 + 4);
    goto loc_8029DE00;
}

loc_8029DDD0:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r25 + 16));
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r26 + 8));
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x801357AC
}

loc_8029DDE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029DE00;
    }
}

loc_8029DDE8:
{
    r3 = 2;
    goto loc_8029E338;
}

loc_8029DDF0:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r25 + 16));
    goto loc_8029DE00;
}

loc_8029DDF8:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r25 + 16));
    r30 = (r31 + 8);
}

loc_8029DE00:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 16));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 20));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 24));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r4 = MemoryInline::FlatRead16(r26);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8029DE2C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1000))) {
        goto loc_8029DF28;
    }
}

loc_8029DE30:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r25 + 6));
}

loc_8029DE44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029DE64;
    }
}

loc_8029DE48:
{
}

loc_8029DE4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029DE80;
    }
}

loc_8029DE50:
{
}

loc_8029DE54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029DEB0;
    }
}

loc_8029DE58:
{
}

loc_8029DE5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029DECC;
    }
}

loc_8029DE60:
{
    goto loc_8029DEE4;
}

loc_8029DE64:
{
    r3 = r28;
    r4 = (r31 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 84);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
    goto loc_8029DEE4;
}

loc_8029DE80:
{
    r3 = r28;
    r4 = (r31 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 444);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
    r3 = r31;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
    goto loc_8029DEE4;
}

loc_8029DEB0:
{
    r3 = r28;
    r4 = (r31 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 36);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
    goto loc_8029DEE4;
}

loc_8029DECC:
{
    r3 = r28;
    r4 = (r31 + 376);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 400);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
}

loc_8029DEE4:
{
    r3 = (r1 + 32);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    r3 = 0;
    goto loc_8029E338;
}

loc_8029DF28:
{
}

loc_8029DF2C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1001))) {
        goto loc_8029E038;
    }
}

loc_8029DF30:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r27 + 24), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r25 + 6));
}

loc_8029DF44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029DF64;
    }
}

loc_8029DF48:
{
}

loc_8029DF4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029DF98;
    }
}

loc_8029DF50:
{
}

loc_8029DF54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029DFCC;
    }
}

loc_8029DF58:
{
}

loc_8029DF5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029E000;
    }
}

loc_8029DF60:
{
    goto loc_8029E030;
}

loc_8029DF64:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
    goto loc_8029E030;
}

loc_8029DF98:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 392));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 396));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 400));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 404));
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 408));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 412));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
    goto loc_8029E030;
}

loc_8029DFCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
    goto loc_8029E030;
}

loc_8029E000:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 376));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 380));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 384));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 388));
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 392));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 396));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
}

loc_8029E030:
{
    r3 = 1;
    goto loc_8029E338;
}

loc_8029E038:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r25 + 6));
}

loc_8029E040:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029E058;
    }
}

loc_8029E044:
{
}

loc_8029E048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029E068;
    }
}

loc_8029E04C:
{
}

loc_8029E050:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029E078;
    }
}

loc_8029E054:
{
    goto loc_8029E084;
}

loc_8029E058:
{
    r3 = r30;
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8029E084;
}

loc_8029E068:
{
    r3 = r31;
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8029E084;
}

loc_8029E078:
{
    r3 = r30;
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_8029E084:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r26 + 4), 0, 36u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r26 + 4));
    r0 = (r3 + -1);
}

loc_8029E090:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8029E118;
    }
}

loc_8029E094:
{
}

loc_8029E098:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029E0A8;
    }
}

loc_8029E09C:
{
}

loc_8029E0A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_8029E24C;
    }
}

loc_8029E0A4:
{
    goto loc_8029E334;
}

loc_8029E0A8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r26 + 12));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
    r0 = MemoryInline::FlatRead8((r25 + 6));
}

loc_8029E0BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029E0D4;
    }
}

loc_8029E0C0:
{
    r3 = r31;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
}

loc_8029E0D4:
{
    r3 = (r1 + 32);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    r29 = 0;
    goto loc_8029E334;
}

loc_8029E118:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r26 + 12));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r27 + 24), f0.d);
    r0 = MemoryInline::FlatRead8((r25 + 6));
}

loc_8029E12C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029E144;
    }
}

loc_8029E130:
{
    r3 = r31;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f0.d = MemoryInline::FlatReadFloat32((r27 + 24));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 24), f0.d);
}

loc_8029E144:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r26 + 28));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r26 + 32));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r26 + 36));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = (r1 + 32);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    r0 = MemoryInline::FlatRead16((r26 + 4));
}

loc_8029E1AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8029E208;
    }
}

loc_8029E1B0:
{
    r0 = MemoryInline::FlatRead8((r25 + 6));
}

loc_8029E1B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029E1D0;
    }
}

loc_8029E1BC:
{
}

loc_8029E1C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029E1E4;
    }
}

loc_8029E1C4:
{
}

loc_8029E1C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029E1F8;
    }
}

loc_8029E1CC:
{
    goto loc_8029E208;
}

loc_8029E1D0:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r26 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8029E208;
}

loc_8029E1E4:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r26 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8029E208;
}

loc_8029E1F8:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r26 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_8029E208:
{
    r3 = (r1 + 20);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
    r29 = 1;
    goto loc_8029E334;
}

loc_8029E24C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r26 + 12));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r27 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = (r1 + 48);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r26 + 16));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r26 + 20));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r26 + 24));
    if constexpr (KnownRegArgsCpuCall<0x8008C4E8u>(&func_8008C4E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_8008C4E8_5A17 = func_8008C4E8_ra58_1fe_10_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_8008C4E8_5A17;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8008C4E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r1 + 96);
    r4 = r3;
    r5 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14084));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = (r1 + 32);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r1 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
    r29 = 1;
}

loc_8029E334:
{
    r3 = r29;
}

loc_8029E338:
{
    r0 = 184;
    addr_psqx_8029E33C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029E33C_loc_0));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 148), 0, 52u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 28u, (r1 + 176));
    r11 = (r1 + 176);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029DD3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029DD3C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x800003FF fpr_write=0x800003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029DD3C func_8029DD3C preserves=true fpr_mask=0x00000000
