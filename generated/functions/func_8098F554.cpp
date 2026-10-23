#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80053870(CpuContext* ctx);
extern "C" uint32_t func_80053870_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800538C4(CpuContext* ctx);
extern "C" uint32_t func_800538C4_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_800538E0(CpuContext* ctx);
extern "C" void func_800538E0_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005399C(CpuContext* ctx);
extern "C" uint32_t func_8005399C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80053B30(CpuContext* ctx);
extern "C" uint64_t func_80053B30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80053E00(CpuContext* ctx);
extern "C" uint64_t func_80053E00_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_800538C4_statefree(uint32_t);
extern "C" uint64_t func_800538E0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8005399C_statefree(uint32_t);
extern "C" void func_8005399C_statefree_v0(uint32_t);
extern "C" uint64_t func_8005399C_statefree_v1(uint32_t);

extern "C" void func_8098F554(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8098F554;

loc_8098F554:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r29 = r4;
    r4 = 0x80790000u;
    r30 = MemoryInline::FlatRead32((r4 + 29120));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r30;
    r4 = (r1 + 22);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = (r1 + 16);
    r8 = (r1 + 24);
    r9 = (r1 + 32);
    r10 = (r1 + 28);
    // inline leaf 0x8098F4E8 (27 guest instruction(s))
    r11 = MemoryInline::FlatRead8((r1 + 11));
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r7, static_cast<uint16_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32(r8, r0);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam16(r9, static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r9 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16(r10, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r9 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16(r7);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r10 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098F4E8
    r3 = MemoryInline::FlatRead16(r29);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 21);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 80), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead16((r29 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 15);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 82), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 84), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 86), static_cast<uint16_t>(r3));
    r6 = MemoryInline::FlatRead16((r1 + 18));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r5 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 88), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 90), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 92), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 94), static_cast<uint16_t>(r3));
    r0 = (r0 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 96), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 98), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 100), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 102), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead16((r1 + 32));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r1 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16((r1 + 30));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 62), static_cast<uint16_t>(r3));
    r5 = MemoryInline::FlatRead16((r1 + 28));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 66), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 68), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 72), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 76), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 78), static_cast<uint16_t>(r3));
    r3 = 5;
    r4 = 6;
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl2_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl2_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl2_0x800538AC;
    }
}

loc_inl2_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl2_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800538B0;
    }
}

loc_inl2_0x800538A8:
{
    goto loc_inl2_cont_80053870;
}

loc_inl2_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl2_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl2_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = (r1 + 80);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r3 = MemoryInline::FlatRead32((r1 + 24));
    // inline leaf 0x8005399C (10 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 131072);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 68), r3);
    r0 = (r4 + 68);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    // end of inlined leaf 0x8005399C
    r3 = 29;
    r4 = (r1 + 56);
    ctx->lr = 0x8098F674u;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_28FB = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_28FB);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_28FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x8098F678u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8005480Cu>(ctx);
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
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r30 + 16);
    r4 = (r1 + 22);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = (r1 + 16);
    r8 = (r1 + 24);
    r9 = (r1 + 32);
    r10 = (r1 + 28);
    // inline leaf 0x8098F4E8 (27 guest instruction(s))
    r11 = MemoryInline::FlatRead8((r1 + 11));
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r7, static_cast<uint16_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32(r8, r0);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam16(r9, static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r9 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16(r10, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r9 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16(r7);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r10 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098F4E8
    r3 = MemoryInline::FlatRead16(r29);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 20);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryInline::FlatRead16((r29 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 15);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = 3;
    r31 = 65536;
    r4 = (r31 + -1);
    r4 = (r4 & 65535);
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl6_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl6_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl6_0x800538AC;
    }
}

loc_inl6_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl6_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800538B0;
    }
}

loc_inl6_0x800538A8:
{
    goto loc_inl6_cont_80053870;
}

loc_inl6_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl6_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl6_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = r27;
    r4 = r26;
    r5 = MemoryInline::FlatRead16((r1 + 18));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 16));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    // inline leaf 0x800538E0 (20 guest instruction(s))
    r7 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r7 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r7 + -12896), r0);
    r7 = (r7 + -12896);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 8), 0, 28u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r7 + 32), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r7 + 20), static_cast<uint16_t>(r3));
    r0 = (r3 + r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r7 + 28), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r7 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r7 + 26), r4);
    }
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r7 + 22), static_cast<uint16_t>(r4));
    r0 = (r4 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r7 + 34), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r7 + 30), static_cast<uint16_t>(r0));
    r0 = (r7 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r7 + 8), r0);
    // end of inlined leaf 0x800538E0
    r3 = MemoryInline::FlatRead32((r1 + 24));
    // inline leaf 0x8005399C (10 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 131072);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 68), r3);
    r0 = (r4 + 68);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    // end of inlined leaf 0x8005399C
    r3 = 29;
    r4 = (r1 + 32);
    r5 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80053BCCu>(ctx);
    ctx->lr = 0x8098F700u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8005480Cu>(ctx);
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
    r3 = MemoryInline::FlatRead16(r29);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 225);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = r26;
    r5 = MemoryInline::FlatRead16((r1 + 18));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 16));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800538E0u) && KnownTranslatedCpuCall<0x800538E0u>::kAvailable && !KnownTranslatedCpuCall<0x800538E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800538E0u>()) {
        const auto state_free_result_800538E0_4C0C = func_800538E0_statefree(r3, r4, r5, r6);
        r7 = static_cast<uint32_t>(state_free_result_800538E0_4C0C);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800538E0u>(ctx);
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
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead32((r1 + 24));
    // inline leaf 0x8005399C (10 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 131072);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 68), r3);
    r0 = (r4 + 68);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    // end of inlined leaf 0x8005399C
    r3 = 29;
    r4 = (r1 + 32);
    r5 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80053BCCu>(ctx);
    ctx->lr = 0x8098F738u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8005480Cu>(ctx);
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
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r30 + 32);
    r4 = (r1 + 22);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = (r1 + 16);
    r8 = (r1 + 24);
    r9 = (r1 + 32);
    r10 = (r1 + 28);
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
    InvokeDirectCpu<0x8098F4E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
    r3 = MemoryInline::FlatRead16(r29);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 20);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 48u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r1 + 80), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead16((r29 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 243);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 26u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r1 + 82), r4);
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r1 + 84), r5);
    }
    r0 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r1 + 86), static_cast<uint16_t>(r3));
    r6 = MemoryInline::FlatRead16((r1 + 18));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r5 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 32u, (r1 + 88), r0);
        MemoryInline::WriteResolved16(guest_range_1, 34u, (r1 + 90), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 36u, (r1 + 92), r0);
        MemoryInline::WriteResolved16(guest_range_1, 38u, (r1 + 94), r3);
    }
    r0 = (r0 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 40u, (r1 + 96), r0);
        MemoryInline::WriteResolved16(guest_range_1, 42u, (r1 + 98), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 44u, (r1 + 100), r0);
        MemoryInline::WriteResolved16(guest_range_1, 46u, (r1 + 102), r3);
    }
    r4 = MemoryInline::FlatRead16((r1 + 32));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 56), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r1 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 58), r0);
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 60), r4);
    }
    r3 = MemoryInline::FlatRead16((r1 + 30));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 62), static_cast<uint16_t>(r3));
    r5 = MemoryInline::FlatRead16((r1 + 28));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 64), r5);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 66), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r1 + 68), r5);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 70), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 72), r4);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r1 + 74), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r1 + 76), r4);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r1 + 78), r3);
    }
    r3 = 5;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x80053870u>(&func_80053870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80053870_6B11 = func_80053870_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80053870_6B11;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80053870u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 80);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800538C4u) && KnownTranslatedCpuCall<0x800538C4u>::kAvailable && !KnownTranslatedCpuCall<0x800538C4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800538C4u>()) {
        func_800538C4_statefree(r3);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800538C4u>(ctx);
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
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead32((r1 + 24));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8005399Cu) && KnownTranslatedCpuCall<0x8005399Cu>::kAvailable && !KnownTranslatedCpuCall<0x8005399Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8005399Cu>()) {
        func_8005399C_statefree_v0(r3);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005399Cu>(ctx);
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
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = 29;
    r4 = (r1 + 56);
    ctx->lr = 0x8098F834u;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_76C2 = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_76C2);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_76C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x8098F838u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8005480Cu>(ctx);
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
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r30 + 48);
    r4 = (r1 + 22);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = (r1 + 16);
    r8 = (r1 + 24);
    r9 = (r1 + 32);
    r10 = (r1 + 28);
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
    InvokeDirectCpu<0x8098F4E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
    r5 = MemoryInline::FlatRead16(r29);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 48u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 24u, (r1 + 80), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead16((r29 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 26u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_2, 26u, (r1 + 82), r4);
        MemoryInline::WriteResolved16(guest_range_2, 28u, (r1 + 84), r5);
    }
    r0 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 30u, (r1 + 86), static_cast<uint16_t>(r3));
    r6 = MemoryInline::FlatRead16((r1 + 18));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r5 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_2, 32u, (r1 + 88), r0);
        MemoryInline::WriteResolved16(guest_range_2, 34u, (r1 + 90), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_2, 36u, (r1 + 92), r0);
        MemoryInline::WriteResolved16(guest_range_2, 38u, (r1 + 94), r3);
    }
    r0 = (r0 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_2, 40u, (r1 + 96), r0);
        MemoryInline::WriteResolved16(guest_range_2, 42u, (r1 + 98), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_2, 44u, (r1 + 100), r0);
        MemoryInline::WriteResolved16(guest_range_2, 46u, (r1 + 102), r3);
    }
    r4 = MemoryInline::FlatRead16((r1 + 32));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::WriteResolved16(guest_range_2, 0u, (r1 + 56), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r1 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r1 + 58), r0);
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r1 + 60), r4);
    }
    r3 = MemoryInline::FlatRead16((r1 + 30));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r1 + 62), static_cast<uint16_t>(r3));
    r5 = MemoryInline::FlatRead16((r1 + 28));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 64), r5);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r1 + 66), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r1 + 68), r5);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r1 + 70), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 72), r4);
        MemoryInline::WriteResolved16(guest_range_2, 18u, (r1 + 74), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_2, 20u, (r1 + 76), r4);
        MemoryInline::WriteResolved16(guest_range_2, 22u, (r1 + 78), r3);
    }
    r3 = 5;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x80053870u>(&func_80053870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80053870_9159 = func_80053870_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80053870_9159;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80053870u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 80);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800538C4u) && KnownTranslatedCpuCall<0x800538C4u>::kAvailable && !KnownTranslatedCpuCall<0x800538C4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800538C4u>()) {
        func_800538C4_statefree(r3);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800538C4u>(ctx);
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
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead32((r1 + 24));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8005399Cu) && KnownTranslatedCpuCall<0x8005399Cu>::kAvailable && !KnownTranslatedCpuCall<0x8005399Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8005399Cu>()) {
        func_8005399C_statefree_v0(r3);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005399Cu>(ctx);
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
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = 29;
    r4 = (r1 + 56);
    ctx->lr = 0x8098F924u;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_9D0A = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_9D0A);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_9D0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x8098F928u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8005480Cu>(ctx);
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
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r30 + 64);
    r4 = (r1 + 22);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = (r1 + 16);
    r8 = (r1 + 24);
    r9 = (r1 + 32);
    r10 = (r1 + 28);
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
    InvokeDirectCpu<0x8098F4E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
    r3 = MemoryInline::FlatRead16(r29);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 29);
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryInline::FlatRead16((r29 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 57);
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = 0x809A0000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -11864));
    r0 = (r28 ^ -2147483648);
    stackword15 = r0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 80u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 108), r0);
    r3 = 1127219200;
    stackword16 = r3;
    MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 104), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 48), f0.d);
    r0 = (r29 ^ -2147483648);
    stackword17 = r0;
    stackword18 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 116), r0);
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 112), r3);
    }
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword18), static_cast<uint32_t>(stackword17));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 52), f0.d);
    r3 = 0x809A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11856));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 40), f0.d);
    r3 = 0x809A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11852));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 44), f0.d);
    r3 = 3;
    r4 = (r31 + -1);
    r4 = (r4 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x80053870u>(&func_80053870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80053870_AD3A = func_80053870_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80053870_AD3A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80053870u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r28;
    r4 = r29;
    r5 = MemoryInline::FlatRead16((r1 + 18));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 16));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800538E0u) && KnownTranslatedCpuCall<0x800538E0u>::kAvailable && !KnownTranslatedCpuCall<0x800538E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800538E0u>()) {
        const auto state_free_result_800538E0_B15C = func_800538E0_statefree(r3, r4, r5, r6);
        r7 = static_cast<uint32_t>(state_free_result_800538E0_B15C);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800538E0u>(ctx);
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
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead32((r1 + 24));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8005399Cu) && KnownTranslatedCpuCall<0x8005399Cu>::kAvailable && !KnownTranslatedCpuCall<0x8005399Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8005399Cu>()) {
        const auto state_free_result_8005399C_B64C = func_8005399C_statefree_v1(r3);
        r0 = static_cast<uint32_t>(state_free_result_8005399C_B64C);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005399Cu>(ctx);
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
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = 29;
    r4 = (r1 + 32);
    r5 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80053BCCu>(ctx);
    r3 = (r1 + 48);
    r4 = (r1 + 40);
    ctx->lr = 0x8098FA08u;
    if constexpr (KnownRegArgsCpuCall<0x80053E00u>(&func_80053E00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80053E00_BBF7 = func_80053E00_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80053E00_BBF7);
        r4 = static_cast<uint32_t>(regargs_result_80053E00_BBF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80053E00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    ctx->lr = 0x8098FA0Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8005480Cu>(ctx);
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
    r11 = (r1 + 144);
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000301E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x8000FFFF fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8098F554 func_8098F554 preserves=true fpr_mask=0x00000000
