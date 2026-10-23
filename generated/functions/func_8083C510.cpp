#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045E34C(CpuContext* ctx);
extern "C" uint64_t func_8045E34C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8083C510(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r1_addr_1 = 0;
    uint32_t r1_addr_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r28_entry = r28;
    uint32_t cr = ctx->cr;

    goto loc_8083C510;

loc_8083C510:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 276u, (r1 + 276), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 256u, (r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 240u, (r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r31 = r1;
    r30 = r3;
    r28 = r4;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8083C56C;
    }
}

loc_8083C54C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 40), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 0u, (r31 + 40), f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 8u, (r31 + 48), f2.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 16u, (r31 + 56), f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 24u, (r31 + 64), f4.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 32u, (r31 + 72), f5.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 40u, (r31 + 80), f6.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 48u, (r31 + 88), f7.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 56u, (r31 + 96), f8.d);
}

loc_8083C56C:
{
    r11 = 0x80870000u;
    r12 = (r31 + 280);
    r29 = MemoryInline::FlatRead32((r11 + -32136));
    r0 = (r31 + 8);
    r11 = 33554432;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 108u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 8), r3);
}

loc_8083C588:
{
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 12), r4);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 16), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 24), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 28), r8);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 32), r9);
    }
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 36), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r31 + 104), r11);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r31 + 108), r12);
    }
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r31 + 112), r0);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8083C5B8;
    }
}

loc_8083C5B4:
{
    goto loc_8083C5D4;
}

loc_8083C5B8:
{
    r3 = 0x80840000u;
    r0 = MemoryInline::FlatRead32(r1);
    r3 = MemoryInline::FlatRead32((r3 + 32024));
    r29 = (0 - r3);
    r29 = (r29 & -8);
    r1_addr_1 = (r1 + r29);
    MemoryInline::FlatWrite32(r1_addr_1, r0);
    r1 = r1_addr_1;
    r29 = (r1 + 8);
}

loc_8083C5D4:
{
    r4 = 0x80840000u;
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r4 + 32024));
    r5 = r28;
    r6 = (r31 + 104);
    ctx->lr = 0x8083C5ECu;
    if constexpr (KnownRegArgsCpuCall<0x8045E34Cu>(&func_8045E34C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_8045E34C_17B9 = func_8045E34C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E34C_17B9);
        r4 = static_cast<uint32_t>(regargs_result_8045E34C_17B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x8045E34Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    guest_range_3 = MemoryInline::ResolveRangeHost(r30, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, r30);
    r5 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 120), 0, 96u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 120), r0);
    r4 = r29;
    r3 = (r31 + 120);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r30 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 124), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r30 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 128), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r30 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 132), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 136), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r30 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 140), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r30 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 144), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r30 + 28));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 148), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r30 + 32));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 152), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r30 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r30 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + 160), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 156), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 44u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r30 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r30 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r31 + 168), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 164), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r30 + 52));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r31 + 172), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r30 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r30 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + 180), r0);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r31 + 176), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_3, 64u, (r30 + 64));
    MemoryInline::WriteResolved16(guest_range_0, 64u, (r31 + 184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 66u, (r30 + 66));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r31 + 186), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 67u, (r30 + 67));
    MemoryInline::WriteResolved8(guest_range_0, 67u, (r31 + 187), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 68u, (r30 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 188), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 72u, (r30 + 72));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r31 + 192), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 76u, (r30 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r31 + 196), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 80u, (r30 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r31 + 200), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 84u, (r30 + 84));
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r31 + 204), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 88u, (r30 + 88));
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r31 + 208), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 92u, (r30 + 92));
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r31 + 212), r0);
    ctx->lr = 0x8083C6CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8083D2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f30.d = f1.d;
    r3 = (r31 + 120);
    // inline leaf 0x80838950 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x80838950
    f31.d = f1.d;
    r3 = (r31 + 120);
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    f2.d = f31.d;
    r3 = r30;
    // inline leaf 0x80838870 (3 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    // end of inlined leaf 0x80838870
    r3 = (r31 + 120);
    r4 = 0;
    ctx->lr = 0x8083C6FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80837230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r10 = r31;
    f1.d = f30.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r31 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r31 + 240));
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0xFF003FFF fpr_write=0xFF003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083C510 func_8083C510 preserves=true fpr_mask=0x00000000
