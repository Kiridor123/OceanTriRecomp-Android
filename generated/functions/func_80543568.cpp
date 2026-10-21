#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80503994(CpuContext* ctx);
extern "C" uint64_t func_80503994_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80527320(CpuContext* ctx);
extern "C" uint32_t func_80527320_ra68_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80543568_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80543568u);
    goto loc_80543568;

loc_80543568:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r12 = 0x80660000u;
    r31 = r3;
    r12 = (r12 + -25840);
    r27 = r4;
    MemoryInline::FlatWrite32(r3, r12);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8054359Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    ctr = ctx->ctr;
    r28 = (r31 + 16);
    r3 = r28;
    ctx->lr = 0x805435A8u;
    if constexpr (KnownRegArgsCpuCall<0x80503994u>(&func_80503994)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80503994_E33 = func_80503994_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80503994_E33);
        r4 = static_cast<uint32_t>(regargs_result_80503994_E33 >> 32);
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80503994u>(ctx);
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
    }
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1144));
    r4 = 0x80650000u;
    r29 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1140));
    r3 = 65536;
    r4 = (r4 + 15264);
    r0 = (r3 + -1);
    r30 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 76), 0, 186u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r28 + 76), r4);
    r3 = (r28 + 248);
    r4 = 0;
    r5 = 12;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r28 + 80), r29);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r28 + 136), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r28 + 140), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r28 + 144), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r28 + 148), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r28 + 152), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r28 + 156), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 81u, (r28 + 157), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r28 + 160), r29);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r28 + 164), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r28 + 168), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r28 + 172), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r28 + 176), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r28 + 180), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r28 + 184), f1.d);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r28 + 188), r29);
    }
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r28 + 192), r0);
    MemoryInline::WriteResolved8(guest_range_0, 124u, (r28 + 200), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r28 + 204), r29);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r28 + 208), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r28 + 212), r29);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r28 + 216), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r28 + 220), r29);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r28 + 224), r29);
    }
    MemoryInline::WriteResolved8(guest_range_0, 152u, (r28 + 228), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (r28 + 232), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (r28 + 236), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (r28 + 240), f1.d);
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r28 + 244), r29);
    }
    MemoryInline::WriteResolved8(guest_range_0, 184u, (r28 + 260), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 185u, (r28 + 261), static_cast<uint8_t>(r30));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r10 = 0x80650000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1144));
    r10 = (r10 + 5020);
    r6 = 0x80650000u;
    r9 = (r10 + 32);
    r7 = 2;
    r8 = (r10 + 184);
    r6 = (r6 + 6096);
    r5 = 512;
    r4 = 9999;
    r3 = 255;
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 284), r29);
    MemoryInline::FlatWrite32((r31 + 288), r29);
    MemoryInline::FlatWrite32(r31, r10);
    MemoryInline::FlatWrite32((r31 + 92), r9);
    MemoryInline::FlatWrite32((r31 + 280), r8);
    MemoryInline::FlatWriteFloat32((r31 + 6392), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 6396), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 6400), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 6404), f0.d);
    MemoryInline::FlatWrite32((r31 + 6460), r29);
    MemoryInline::FlatWrite32((r31 + 6464), r29);
    MemoryInline::FlatWrite32((r31 + 6468), r29);
    MemoryInline::FlatWrite32((r31 + 6472), r29);
    MemoryInline::FlatWrite32((r31 + 6476), r7);
    MemoryInline::FlatWrite8((r31 + 6480), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 6481), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 6482), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r31 + 6484), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 6488), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 6492), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 6496), f0.d);
    MemoryInline::FlatWrite32((r31 + 6500), r6);
    MemoryInline::FlatWriteFloat32((r31 + 6516), f0.d);
    MemoryInline::FlatWrite8((r31 + 6520), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 6521), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite32((r31 + 6524), r29);
    MemoryInline::FlatWriteFloat32((r31 + 6532), f0.d);
    MemoryInline::FlatWrite32((r31 + 6536), r29);
    MemoryInline::FlatWrite32((r31 + 6540), r29);
    MemoryInline::FlatWrite32((r31 + 6544), r5);
    MemoryInline::FlatWrite32((r31 + 6552), r4);
    MemoryInline::FlatWriteFloat32((r31 + 6560), f0.d);
    MemoryInline::FlatWrite8((r31 + 6564), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r31 + 6568), r0);
    MemoryInline::FlatWrite32((r31 + 6588), r29);
    MemoryInline::FlatWrite32((r31 + 6592), r27);
    // inline leaf 0x80527310 (4 guest instruction(s))
    r3 = 0x80520000u;
    r3 = (r3 + 30656);
    MemoryInline::FlatWrite32((r13 + -13360), r3);
    // end of inlined leaf 0x80527310
    r3 = (r31 + 6596);
    ctx->lr = 0x80543724u;
    if constexpr (KnownRegArgsCpuCall<0x80527320u>(&func_80527320)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_80527320_32DD = func_80527320_ra68_1fe_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_80527320_32DD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctr = ctx->ctr;
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80527320u>(ctx);
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
        ctr = ctx->ctr;
    }
    r3 = (r31 + 6596);
    r4 = 2;
    // inline leaf 0x805273A0 (6 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 17), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 20), r0);
    // end of inlined leaf 0x805273A0
    r0 = MemoryInline::FlatRead32((r31 + 6544));
    r11 = (r1 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 6620), r30);
    r3 = r31;
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r31 + 6624), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r31 + 6625), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 6628), r29);
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r31 + 6632), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 6636), r29);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r31 + 6640), r29);
    }
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r31 + 6648), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r31 + 6650), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r31 + 6652), r29);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r31 + 6656), r29);
    }
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80543568(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80543568_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80543568 func_80543568 preserves=true fpr_mask=0x00000000
