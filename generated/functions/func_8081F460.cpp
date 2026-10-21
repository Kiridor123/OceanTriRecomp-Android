#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045FCD8(CpuContext* ctx);
extern "C" uint32_t func_8045FCD8_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8081F460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8081F460u);
    goto loc_8081F460;

loc_8081F460:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r11 = (r1 + 192);
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r0 = 0;
    r27 = 0x80840000u;
    r28 = 0x80840000u;
    MemoryInline::FlatWrite8((r3 + 148), static_cast<uint8_t>(r0));
    r31 = r3;
    r27 = (r27 + 17656);
    MemoryInline::FlatWrite8((r3 + 149), static_cast<uint8_t>(r0));
    r28 = (r28 + 21768);
    MemoryInline::FlatWrite8((r3 + 150), static_cast<uint8_t>(r0));
    ctx->lr = 0x8081F4A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081FCC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081FE30u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r3 = 176;
    ctx->lr = 0x8081F4B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081F4B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F4C8;
    }
}

loc_8081F4BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F4C4;
    }
}

loc_8081F4C0:
{
    ctx->lr = 0x8081F4C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80829630u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_8081F4C4:
{
    MemoryInline::FlatWrite32((r31 + 588), r3);
}

loc_8081F4C8:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r28 + 2864);
    r3 = MemoryInline::FlatRead32((r31 + 588));
    r4 = MemoryInline::FlatRead32(r4);
    ctx->lr = 0x8081F4DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80829690u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_8081F4E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081F564;
    }
}

loc_8081F4EC:
{
    r21 = r31;
    r22 = (r28 + 64);
    r23 = 0;
}

loc_8081F4F8:
{
    r3 = 36;
    ctx->lr = 0x8081F500u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081F504:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F514;
    }
}

loc_8081F508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F510;
    }
}

loc_8081F50C:
{
    // inline leaf 0x8082B6B0 (16 guest instruction(s))
    r4 = 0x80840000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18576));
    r4 = 0x80840000u;
    r5 = (r3 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 33u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    r4 = (r4 + 25768);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 28), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_3, 32u, (r3 + 32), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8082B6B0
}

loc_8081F510:
{
    MemoryInline::FlatWrite32((r21 + 572), r3);
}

loc_8081F514:
{
    r3 = MemoryInline::FlatRead32((r31 + 588));
    r4 = 0;
    r5 = MemoryInline::FlatRead32(r22);
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081F534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r21 + 572));
    r5 = MemoryInline::FlatRead32((r31 + 588));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081F550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r23 = (r23 + 1);
    r22 = (r22 + 4);
}

loc_8081F55C:
{
    r21 = (r21 + 4);
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(4))) {
        goto loc_8081F4F8;
    }
}

loc_8081F564:
{
    r3 = 36;
    ctx->lr = 0x8081F56Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081F570:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F580;
    }
}

loc_8081F574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F57C;
    }
}

loc_8081F578:
{
    // inline leaf 0x8082B6B0 (16 guest instruction(s))
    r4 = 0x80840000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18576));
    r4 = 0x80840000u;
    r5 = (r3 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 33u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    r4 = (r4 + 25768);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r3 + 32), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8082B6B0
}

loc_8081F57C:
{
    MemoryInline::FlatWrite32((r31 + 568), r3);
}

loc_8081F580:
{
    r3 = MemoryInline::FlatRead32((r31 + 588));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r31 + 176));
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081F5A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 568));
    r5 = MemoryInline::FlatRead32((r31 + 588));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081F5BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 568));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r24 = MemoryInline::FlatRead32((r3 + 20));
    r21 = (r3 + 20);
    goto loc_8081F600;
}

loc_8081F5D0:
{
    r3 = (r24 + 176);
    r4 = (r28 + 2872);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8081F5E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081F5FC;
    }
}

loc_8081F5E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 732));
    MemoryInline::FlatWriteFloat32((r24 + 64), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 68), f0.d);
    goto loc_8081F608;
}

loc_8081F5FC:
{
    r24 = MemoryInline::FlatRead32(r24);
}

loc_8081F600:
{
}

loc_8081F604:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(r21))) {
        goto loc_8081F5D0;
    }
}

loc_8081F608:
{
    f31.d = MemoryInline::FlatReadFloat64((r27 + 744));
    r26 = r31;
    r25 = (r27 + 8);
    r30 = (r28 + 428);
    r29 = (r28 + 336);
    r24 = 0;
    r21 = 1127219200;
    goto loc_8081F750;
}

loc_8081F628:
{
    r4 = MemoryInline::FlatRead32((r31 + 180));
    r3 = (r1 + 72);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_42E8 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_42E8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r25 + 4));
    r3 = (r1 + 72);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r30_addr_2 = (r30 + r0);
    r4 = MemoryInline::FlatRead32(r30_addr_2);
    if constexpr (KnownRegArgsCpuCall<0x8045FCD8u>(&func_8045FCD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045FCD8_4748 = func_8045FCD8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FCD8_4748;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FCD8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r31 + 588));
    r5 = (r1 + 72);
    r4 = 0;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081F668u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = r3;
    r3 = 40;
    ctx->lr = 0x8081F674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081F678:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F688;
    }
}

loc_8081F67C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F684;
    }
}

loc_8081F680:
{
    // inline leaf 0x8081ABC0 (7 guest instruction(s))
    r4 = 0x80840000u;
    r0 = 0;
    r4 = (r4 + 20032);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 32), r0);
    MemoryInline::FlatWriteRam32((r3 + 36), r0);
    // end of inlined leaf 0x8081ABC0
}

loc_8081F684:
{
    MemoryInline::FlatWrite32((r26 + 704), r3);
}

loc_8081F688:
{
    r3 = MemoryInline::FlatRead32((r31 + 568));
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r31 + 588));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8081F6A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r26 + 704));
    r0 = MemoryInline::FlatRead32(r25);
    MemoryInline::FlatWrite32((r4 + 36), r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = MemoryInline::FlatRead32((r31 + 568));
    r29_addr_2 = (r29 + r0);
    r4 = MemoryInline::FlatRead32(r29_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    ctx->lr = 0x8081F6C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082B490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r26 + 704));
    MemoryInline::FlatWrite32((r4 + 32), r3);
    r3 = MemoryInline::FlatRead32((r26 + 704));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r23 = MemoryInline::FlatRead32((r3 + 16));
    r22 = (r3 + 16);
    goto loc_8081F704;
}

loc_8081F6E0:
{
    r3 = MemoryInline::FlatRead32((r23 + 8));
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r26 + 704));
    r12 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 36));
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x8081F700u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r23 = MemoryInline::FlatRead32(r23);
}

loc_8081F704:
{
}

loc_8081F708:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(r22))) {
        goto loc_8081F6E0;
    }
}

loc_8081F70C:
{
    r3 = MemoryInline::FlatRead32((r26 + 704));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    // inline leaf 0x808289E0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x808289E0
    r0 = (r3 & 65535);
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    stackword14 = r21;
    MemoryInline::FlatWriteRam32((r1 + 136), r21);
    r3 = MemoryInline::FlatRead32((r26 + 704));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword14), static_cast<uint32_t>(stackword13));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 736));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 48));
    // inline leaf 0x8081A9D0 (14 guest instruction(s))
}

loc_inl5_0x8081A9D0:
{
}

loc_inl5_0x8081A9D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f3.d);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl5_0x8081A9FC;
    }
}

loc_inl5_0x8081A9F4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    goto loc_inl5_0x8081AA00;
}

loc_inl5_0x8081A9FC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
}

loc_inl5_0x8081AA00:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl5_cont_8081A9D0:
{
    // end of inlined leaf 0x8081A9D0
    r25 = (r25 + 8);
    r26 = (r26 + 4);
    r24 = (r24 + 1);
}

loc_8081F750:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_8081F758:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r0))) {
        goto loc_8081F628;
    }
}

loc_8081F75C:
{
    f31.d = MemoryInline::FlatReadFloat64((r27 + 744));
    r25 = r31;
    r26 = (r27 + 104);
    r29 = (r28 + 1552);
    r30 = (r28 + 2104);
    r24 = 0;
    r21 = 1127219200;
}

loc_8081F778:
{
    r4 = MemoryInline::FlatRead32((r31 + 180));
    r3 = (r1 + 72);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_67CA = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_67CA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r26 + 4));
    r3 = (r1 + 72);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r29_addr_4 = (r29 + r0);
    r4 = MemoryInline::FlatRead32(r29_addr_4);
    if constexpr (KnownRegArgsCpuCall<0x8045FCD8u>(&func_8045FCD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045FCD8_6C2A = func_8045FCD8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FCD8_6C2A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FCD8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r31 + 588));
    r5 = (r1 + 72);
    r4 = 0;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081F7B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = r3;
    r3 = 40;
    ctx->lr = 0x8081F7C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081F7C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F7D8;
    }
}

loc_8081F7CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F7D4;
    }
}

loc_8081F7D0:
{
    // inline leaf 0x8081ABC0 (7 guest instruction(s))
    r4 = 0x80840000u;
    r0 = 0;
    r4 = (r4 + 20032);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 32), r0);
    MemoryInline::FlatWriteRam32((r3 + 36), r0);
    // end of inlined leaf 0x8081ABC0
}

loc_8081F7D4:
{
    MemoryInline::FlatWrite32((r25 + 752), r3);
}

loc_8081F7D8:
{
    r3 = MemoryInline::FlatRead32((r31 + 568));
    r4 = r22;
    r5 = MemoryInline::FlatRead32((r31 + 588));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8081F7F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r25 + 752));
    r0 = MemoryInline::FlatRead32(r26);
    MemoryInline::FlatWrite32((r4 + 36), r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = MemoryInline::FlatRead32((r31 + 568));
    r30_addr_4 = (r30 + r0);
    r4 = MemoryInline::FlatRead32(r30_addr_4);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    ctx->lr = 0x8081F814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082B490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r25 + 752));
    MemoryInline::FlatWrite32((r4 + 32), r3);
    r3 = MemoryInline::FlatRead32((r25 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r22 = MemoryInline::FlatRead32((r3 + 16));
    r23 = (r3 + 16);
    goto loc_8081F854;
}

loc_8081F830:
{
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r25 + 752));
    r12 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 36));
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x8081F850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = MemoryInline::FlatRead32(r22);
}

loc_8081F854:
{
}

loc_8081F858:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(r23))) {
        goto loc_8081F830;
    }
}

loc_8081F85C:
{
    r3 = MemoryInline::FlatRead32((r25 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    // inline leaf 0x808289E0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x808289E0
    r0 = (r3 & 65535);
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    stackword16 = r21;
    MemoryInline::FlatWriteRam32((r1 + 136), r21);
    r3 = MemoryInline::FlatRead32((r25 + 752));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 736));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 48));
    // inline leaf 0x8081A9D0 (14 guest instruction(s))
}

loc_inl8_0x8081A9D0:
{
}

loc_inl8_0x8081A9D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f3.d);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl8_0x8081A9FC;
    }
}

loc_inl8_0x8081A9F4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    goto loc_inl8_0x8081AA00;
}

loc_inl8_0x8081A9FC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
}

loc_inl8_0x8081AA00:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl8_cont_8081A9D0:
{
    // end of inlined leaf 0x8081A9D0
    r24 = (r24 + 1);
    r25 = (r25 + 4);
}

loc_8081F8A0:
{
    r26 = (r26 + 8);
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(74))) {
        goto loc_8081F778;
    }
}

loc_8081F8A8:
{
    f31.d = MemoryInline::FlatReadFloat64((r27 + 744));
    r30 = r31;
    r29 = (r28 + 752);
    r26 = (r28 + 1024);
    r25 = 0;
    r24 = 1127219200;
}

loc_8081F8C0:
{
    r4 = MemoryInline::FlatRead32((r31 + 180));
    r3 = (r1 + 72);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_8C52 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_8C52;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32(r29);
    r3 = (r1 + 72);
    if constexpr (KnownRegArgsCpuCall<0x8045FCD8u>(&func_8045FCD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045FCD8_8FF1 = func_8045FCD8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FCD8_8FF1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FCD8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r31 + 588));
    r5 = (r1 + 72);
    r4 = 0;
    r6 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081F8F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r21 = r3;
    r3 = 40;
    ctx->lr = 0x8081F904u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081F908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F918;
    }
}

loc_8081F90C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F914;
    }
}

loc_8081F910:
{
    // inline leaf 0x8081ABC0 (7 guest instruction(s))
    r4 = 0x80840000u;
    r0 = 0;
    r4 = (r4 + 20032);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 32), r0);
    MemoryInline::FlatWriteRam32((r3 + 36), r0);
    // end of inlined leaf 0x8081ABC0
}

loc_8081F914:
{
    MemoryInline::FlatWrite32((r30 + 1048), r3);
}

loc_8081F918:
{
    r3 = MemoryInline::FlatRead32((r31 + 568));
    r4 = r21;
    r5 = MemoryInline::FlatRead32((r31 + 588));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8081F934u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 1048));
    MemoryInline::FlatWrite32((r4 + 36), r3);
    r3 = MemoryInline::FlatRead32((r31 + 568));
    r4 = MemoryInline::FlatRead32(r26);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    ctx->lr = 0x8081F94Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082B490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 1048));
    MemoryInline::FlatWrite32((r4 + 32), r3);
    r3 = MemoryInline::FlatRead32((r30 + 1048));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r22 = MemoryInline::FlatRead32((r3 + 16));
    r23 = (r3 + 16);
    goto loc_8081F98C;
}

loc_8081F968:
{
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r30 + 1048));
    r12 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 36));
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x8081F988u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = MemoryInline::FlatRead32(r22);
}

loc_8081F98C:
{
}

loc_8081F990:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(r23))) {
        goto loc_8081F968;
    }
}

loc_8081F994:
{
    r3 = MemoryInline::FlatRead32((r30 + 1048));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    // inline leaf 0x808289E0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x808289E0
    r0 = (r3 & 65535);
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    stackword18 = r24;
    MemoryInline::FlatWriteRam32((r1 + 136), r24);
    r3 = MemoryInline::FlatRead32((r30 + 1048));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword18), static_cast<uint32_t>(stackword17));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 736));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 48));
    // inline leaf 0x8081A9D0 (14 guest instruction(s))
}

loc_inl11_0x8081A9D0:
{
}

loc_inl11_0x8081A9D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f3.d);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl11_0x8081A9FC;
    }
}

loc_inl11_0x8081A9F4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    goto loc_inl11_0x8081AA00;
}

loc_inl11_0x8081A9FC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
}

loc_inl11_0x8081AA00:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl11_cont_8081A9D0:
{
    // end of inlined leaf 0x8081A9D0
    r25 = (r25 + 1);
    r30 = (r30 + 4);
}

loc_8081F9D8:
{
    r26 = (r26 + 4);
    r29 = (r29 + 4);
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(15))) {
        goto loc_8081F8C0;
    }
}

loc_8081F9E4:
{
    r3 = 12;
    ctx->lr = 0x8081F9ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081F9F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081FA0C;
    }
}

loc_8081F9F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081FA08;
    }
}

loc_8081F9F8:
{
    r4 = 0x80840000u;
    r4 = (r4 + 24880);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 8), r31);
}

loc_8081FA08:
{
    MemoryInline::FlatWrite32((r31 + 596), r3);
}

loc_8081FA0C:
{
    r3 = 44;
    ctx->lr = 0x8081FA14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081FA18:
{
    r21 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081FA94;
    }
}

loc_8081FA20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081FA90;
    }
}

loc_8081FA24:
{
    r4 = 0x80840000u;
    r0 = MemoryInline::FlatRead32((r31 + 596));
    r5 = MemoryInline::FlatRead32((r4 + 21764));
    r4 = 0x80840000u;
    r4 = (r4 + 20464);
}

loc_8081FA3C:
{
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 20), r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081FA64;
    }
}

loc_8081FA4C:
{
    r3 = r0;
    r4 = r21;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081FA64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8081FA64:
{
    r3 = (r21 + 8);
    r4 = 8;
    // inline leaf 0x80839B10 (6 guest instruction(s))
    r0 = 0;
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + -8), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 16u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_4, 18u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x80839B10
    r3 = 0x80840000u;
    r0 = 0;
    r3 = (r3 + 20304);
    MemoryInline::WriteResolved32(guest_range_4, 0u, r21, r3);
    r3 = (r21 + 24);
    r4 = 8;
    MemoryInline::WriteResolved32(guest_range_4, 36u, (r21 + 36), r0);
    // inline leaf 0x80839B10 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_4, 32u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_4, 34u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x80839B10
}

loc_8081FA90:
{
    MemoryInline::FlatWrite32((r31 + 592), r21);
}

loc_8081FA94:
{
    r3 = MemoryInline::FlatRead32((r31 + 592));
    r4 = MemoryInline::FlatRead32((r31 + 568));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x8081FAACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 504;
    ctx->lr = 0x8081FAB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081FAB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081FAD0;
    }
}

loc_8081FABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081FACC;
    }
}

loc_8081FAC0:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    ctx->lr = 0x8081FACCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081D5C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
}

loc_8081FACC:
{
    MemoryInline::FlatWrite32((r31 + 700), r3);
}

loc_8081FAD0:
{
    r21 = r31;
    r22 = 0;
}

loc_8081FAD8:
{
    r3 = 72;
    ctx->lr = 0x8081FAE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8081FAE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081FAFC;
    }
}

loc_8081FAE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081FAF8;
    }
}

loc_8081FAEC:
{
    r5 = MemoryInline::FlatRead32((r31 + 700));
    r4 = r22;
    ctx->lr = 0x8081FAF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081C7D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8081FAF8:
{
    MemoryInline::FlatWrite32((r21 + 684), r3);
}

loc_8081FAFC:
{
    r22 = (r22 + 1);
    r21 = (r21 + 4);
}

loc_8081FB08:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(4))) {
        goto loc_8081FAD8;
    }
}

loc_8081FB0C:
{
    r3 = MemoryInline::FlatRead32((r31 + 592));
    r4 = (r31 + 600);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x8081FB24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 740));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    r4 = MemoryInline::FlatRead8((r31 + 143));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r0 = MemoryInline::FlatRead8((r31 + 680));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0_mrot_0 = (r0_rot_7 & 32);
    r0_mdest_0 = (r0 & -33);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 672), f1.d);
    MemoryInline::FlatWrite8((r31 + 680), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 668), f0.d);
    // inline leaf 0x804C6290 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2084));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2088));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, f2.d);
    // end of inlined leaf 0x804C6290
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 48u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 24));
    r27 = 0x80870000u;
    r0 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 28));
    r29 = (r28 + 2532);
    MemoryInline::FlatWrite32((r31 + 608), r0);
    r27 = (r27 + -32200);
    r28 = 0;
    r30 = 0;
    MemoryInline::FlatWrite32((r31 + 604), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 36));
        }
    }
    MemoryInline::FlatWrite32((r31 + 616), r0);
    MemoryInline::FlatWrite32((r31 + 612), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 44));
        }
    }
    MemoryInline::FlatWrite32((r31 + 624), r0);
    MemoryInline::FlatWrite32((r31 + 620), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 52));
        }
    }
    MemoryInline::FlatWrite32((r31 + 632), r0);
    MemoryInline::FlatWrite32((r31 + 628), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 60));
        }
    }
    MemoryInline::FlatWrite32((r31 + 640), r0);
    MemoryInline::FlatWrite32((r31 + 636), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r1 + 64));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r1 + 68));
        }
    }
    MemoryInline::FlatWrite32((r31 + 648), r0);
    MemoryInline::FlatWrite32((r31 + 644), r3);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_8081FBD0:
{
    r3 = MemoryInline::FlatRead32((r31 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8081FBF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r3);
    r21 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8081FC04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8081FC1C;
}

loc_8081FC08:
{
}

loc_8081FC0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r27))) {
        goto loc_8081FC18;
    }
}

loc_8081FC10:
{
    r0 = 1;
    goto loc_8081FC28;
}

loc_8081FC18:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8081FC1C:
{
}

loc_8081FC20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081FC08;
    }
}

loc_8081FC24:
{
    r0 = 0;
}

loc_8081FC28:
{
}

loc_8081FC2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081FC34;
    }
}

loc_8081FC30:
{
    goto loc_8081FC38;
}

loc_8081FC34:
{
    r21 = 0;
}

loc_8081FC38:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r30 + r31);
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r3 = (r3 * 24);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r3 = r4;
}

loc_8081FC58:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_8081FC60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(34))) {
        goto loc_8081FC70;
    }
}

loc_8081FC64:
{
    r3 = (r3 + 2);
    r5 = (r5 + 1);
    goto loc_8081FC58;
}

loc_8081FC70:
{
    r12 = MemoryInline::FlatRead32(r21);
    r6 = (r5 & 65535);
    r3 = r21;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x8081FC8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    r30 = (r30 + 4);
}

loc_8081FC98:
{
    r29 = (r29 + 4);
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_8081FBD0;
    }
}

loc_8081FCA0:
{
    r11 = (r1 + 192);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081F460 func_8081F460 preserves=true fpr_mask=0x00000000
