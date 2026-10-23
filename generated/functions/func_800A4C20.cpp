#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A377C(CpuContext* ctx);
extern "C" uint64_t func_800A377C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A4C20(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_800A4C20;

loc_800A4C20:
{
    MemoryInline::FlatWriteRam32((r1 + -2144), r1);
    r1 = (r1 + -2144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 2148), r0);
    r11 = (r1 + 2144);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r28 = r3;
    r24 = r4;
    r0 = (r4 & 1);
}

loc_800A4C44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A4CAC;
    }
}

loc_800A4C48:
{
    r26 = 0;
    goto loc_800A4C90;
}

loc_800A4C50:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
}

loc_800A4C5C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800A4C90;
    }
}

loc_800A4C60:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r3 & 65536);
}

loc_800A4C6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A4C7C;
    }
}

loc_800A4C70:
{
    r0 = (r3 & 32768);
}

loc_800A4C78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A4C90;
    }
}

loc_800A4C7C:
{
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x800A4C90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800A4C90:
{
    r3 = (r28 + 36);
    r4 = r26;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl1_0x805022E0:
{
}

loc_inl1_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x805022F0;
    }
}

loc_inl1_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_805022E0;
}

loc_inl1_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r26 = r3;
}

loc_800A4CA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A4C50;
    }
}

loc_800A4CA8:
{
    goto loc_800A5138;
}

loc_800A4CAC:
{
    // inline leaf 0x800A51A0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800A51A0
}

loc_800A4CB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A5138;
    }
}

loc_800A4CB8:
{
    r0 = (r24 & 2);
}

loc_800A4CC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A4D40;
    }
}

loc_800A4CC4:
{
    r27 = 0;
    r26 = 0;
    goto loc_800A4D28;
}

loc_800A4CD0:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
}

loc_800A4CDC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800A4CF0;
    }
}

loc_800A4CE0:
{
    r0 = MemoryInline::FlatRead32((r3 + 180));
}

loc_800A4CE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800A4CF0;
    }
}

loc_800A4CEC:
{
    MemoryInline::FlatWrite32((r3 + 180), r26);
}

loc_800A4CF0:
{
    r3 = (r3 + 276);
    r4 = (r27 + 264);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r29 = 0;
    goto loc_800A4D10;
}

loc_800A4D04:
{
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x800A4D10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800AE564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800A4D10:
{
    r3 = (r27 + 192);
    r4 = r29;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl3_0x805022E0:
{
}

loc_inl3_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x805022F0;
    }
}

loc_inl3_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_805022E0;
}

loc_inl3_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r29 = r3;
}

loc_800A4D24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A4D04;
    }
}

loc_800A4D28:
{
    r3 = (r28 + 36);
    r4 = r27;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl4_0x805022E0:
{
}

loc_inl4_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x805022F0;
    }
}

loc_inl4_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl4_cont_805022E0;
}

loc_inl4_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl4_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r27 = r3;
}

loc_800A4D3C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A4CD0;
    }
}

loc_800A4D40:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x800A5178 (10 guest instruction(s))
}

loc_inl5_0x800A5178:
{
}

loc_inl5_0x800A517C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x800A5190;
    }
}

loc_inl5_0x800A5180:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    goto loc_inl5_cont_800A5178;
}

loc_inl5_0x800A5190:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r0 = (r0 & -65537);
    MemoryInline::FlatWrite32((r3 + 84), r0);
}

loc_inl5_cont_800A5178:
{
    // end of inlined leaf 0x800A5178
    r27 = 0;
    r31 = (r1 + 56);
    r29 = 0x80590000u;
    r30 = 0x80590000u;
    goto loc_800A5090;
}

loc_800A4D60:
{
    r3 = r28;
    r4 = 0;
    // inline leaf 0x800A5178 (10 guest instruction(s))
}

loc_inl6_0x800A5178:
{
}

loc_inl6_0x800A517C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x800A5190;
    }
}

loc_inl6_0x800A5180:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    goto loc_inl6_cont_800A5178;
}

loc_inl6_0x800A5190:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r0 = (r0 & -65537);
    MemoryInline::FlatWrite32((r3 + 84), r0);
}

loc_inl6_cont_800A5178:
{
    // end of inlined leaf 0x800A5178
}

loc_800A4D6C:
{
    r3 = (r28 + 36);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r0 = (r3 & 65535);
}

loc_800A4D7C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(512))) {
        goto loc_800A4D94;
    }
}

loc_800A4D80:
{
    r3 = (r29 + 11248);
    r4 = 267;
    r5 = (r30 + 11464);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A4D94u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A4D94:
{
    r3 = (r28 + 36);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r5 = (r3 & 65535);
    r3 = (r28 + 36);
    r4 = (r1 + 56);
    ctx->lr = 0x800A4DACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009B3D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r25 = 0;
    r26 = (r3 & 65535);
    goto loc_800A4DD8;
}

loc_800A4DB8:
{
    r0 = (r25 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r31_addr_4 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_4);
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x800A4DD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r25 = (r25 + 1);
}

loc_800A4DD8:
{
    r0 = (r25 & 65535);
}

loc_800A4DE0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r26))) {
        goto loc_800A4DB8;
    }
}

loc_800A4DE4:
{
    r25 = 0;
    goto loc_800A4E2C;
}

loc_800A4DEC:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
}

loc_800A4DF8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800A4E2C;
    }
}

loc_800A4DFC:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r3 & 65536);
}

loc_800A4E08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A4E18;
    }
}

loc_800A4E0C:
{
    r0 = (r3 & 32768);
}

loc_800A4E14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A4E2C;
    }
}

loc_800A4E18:
{
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x800A4E2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800A4E2C:
{
    r3 = (r28 + 36);
    r4 = r25;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl9_0x805022E0:
{
}

loc_inl9_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x805022F0;
    }
}

loc_inl9_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl9_cont_805022E0;
}

loc_inl9_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl9_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r25 = r3;
}

loc_800A4E40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A4DEC;
    }
}

loc_800A4E44:
{
    r3 = (r28 + 36);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r0 = (r3 & 65535);
}

loc_800A4E54:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(512))) {
        goto loc_800A4E6C;
    }
}

loc_800A4E58:
{
    r3 = (r29 + 11248);
    r4 = 292;
    r5 = (r30 + 11464);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A4E6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A4E6C:
{
    r3 = (r28 + 36);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r5 = (r3 & 65535);
    r3 = (r28 + 36);
    r4 = (r1 + 56);
    ctx->lr = 0x800A4E84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009B3D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r25 = 0;
    r26 = (r3 & 65535);
    goto loc_800A4EE4;
}

loc_800A4E90:
{
    r0 = (r25 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r31_addr_6 = (r31 + r0);
    r24 = MemoryInline::FlatRead32(r31_addr_6);
    r0 = MemoryInline::FlatRead32((r24 + 180));
}

loc_800A4EA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A4EB4;
    }
}

loc_800A4EA8:
{
    r3 = MemoryInline::FlatRead32((r24 + 228));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r24 + 228), r0);
}

loc_800A4EB4:
{
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x800A4EC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r24 + 180));
}

loc_800A4ED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A4EE0;
    }
}

loc_800A4ED4:
{
    r3 = MemoryInline::FlatRead32((r24 + 228));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 228), r0);
}

loc_800A4EE0:
{
    r25 = (r25 + 1);
}

loc_800A4EE4:
{
    r0 = (r25 & 65535);
}

loc_800A4EEC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r26))) {
        goto loc_800A4E90;
    }
}

loc_800A4EF0:
{
    r3 = (r28 + 36);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r0 = (r3 & 65535);
}

loc_800A4F00:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(512))) {
        goto loc_800A4F18;
    }
}

loc_800A4F04:
{
    r3 = (r29 + 11248);
    r4 = 312;
    r5 = (r30 + 11464);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A4F18u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A4F18:
{
    r3 = (r28 + 36);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r5 = (r3 & 65535);
    r3 = (r28 + 36);
    r4 = (r1 + 56);
    ctx->lr = 0x800A4F30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009B3D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r24 = 0;
    r26 = (r3 & 65535);
    goto loc_800A4F5C;
}

loc_800A4F3C:
{
    r0 = (r24 & 65535);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r31_addr_8 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_8);
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x800A4F58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r24 = (r24 + 1);
}

loc_800A4F5C:
{
    r0 = (r24 & 65535);
}

loc_800A4F64:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r26))) {
        goto loc_800A4F3C;
    }
}

loc_800A4F68:
{
    r3 = (r28 + 36);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r0 = (r3 & 65535);
}

loc_800A4F78:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(512))) {
        goto loc_800A4F90;
    }
}

loc_800A4F7C:
{
    r3 = (r29 + 11248);
    r4 = 323;
    r5 = (r30 + 11464);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A4F90u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A4F90:
{
    r3 = (r28 + 36);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    r5 = (r3 & 65535);
    r3 = (r28 + 36);
    r4 = (r1 + 56);
    ctx->lr = 0x800A4FA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009B3D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r24 = 0;
    r26 = (r3 & 65535);
    goto loc_800A4FD4;
}

loc_800A4FB4:
{
    r0 = (r24 & 65535);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r31_addr_10 = (r31 + r0);
    r3 = MemoryInline::FlatRead32(r31_addr_10);
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x800A4FD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r24 = (r24 + 1);
}

loc_800A4FD4:
{
    r0 = (r24 & 65535);
}

loc_800A4FDC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r26))) {
        goto loc_800A4FB4;
    }
}

loc_800A4FE0:
{
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r3 = (r3 + 16);
    // inline leaf 0x800A5168 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    // end of inlined leaf 0x800A5168
}

loc_800A4FF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A5004;
    }
}

loc_800A4FF4:
{
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r3 = (r3 + 16);
    ctx->lr = 0x800A5000u;
    if constexpr (KnownRegArgsCpuCall<0x800A377Cu>(&func_800A377C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800A377C_6892 = func_800A377C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A377C_6892);
        r4 = static_cast<uint32_t>(regargs_result_800A377C_6892 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800A377Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_800A4D6C;
}

loc_800A5004:
{
    r3 = r28;
    // inline leaf 0x800A5150 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r3 = (r0 & 65536);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x800A5150
}

loc_800A5010:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A5090;
    }
}

loc_800A5014:
{
    r24 = 0;
    goto loc_800A5078;
}

loc_800A501C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_800A5024:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800A504C;
    }
}

loc_800A5028:
{
    r4 = MemoryInline::FlatRead16((r3 + 232));
}

loc_800A5030:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800A504C;
    }
}

loc_800A5034:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 232), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 180));
}

loc_800A5044:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800A504C;
    }
}

loc_800A5048:
{
    MemoryInline::FlatWrite32((r3 + 180), r27);
}

loc_800A504C:
{
    r25 = 0;
    goto loc_800A5060;
}

loc_800A5054:
{
    r3 = r25;
    r4 = 1;
    ctx->lr = 0x800A5060u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800AE564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800A5060:
{
    r3 = (r24 + 192);
    r4 = r25;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl18_0x805022E0:
{
}

loc_inl18_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl18_0x805022F0;
    }
}

loc_inl18_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl18_cont_805022E0;
}

loc_inl18_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl18_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r25 = r3;
}

loc_800A5074:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A5054;
    }
}

loc_800A5078:
{
    r3 = (r28 + 36);
    r4 = r24;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl19_0x805022E0:
{
}

loc_inl19_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl19_0x805022F0;
    }
}

loc_inl19_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl19_cont_805022E0;
}

loc_inl19_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl19_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r24 = r3;
}

loc_800A508C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A501C;
    }
}

loc_800A5090:
{
    r3 = r28;
    // inline leaf 0x800A5150 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r3 = (r0 & 65536);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x800A5150
}

loc_800A509C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A4D60;
    }
}

loc_800A50A0:
{
    r24 = 0;
    r29 = 1;
    goto loc_800A5120;
}

loc_800A50AC:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
}

loc_800A50B8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800A50CC;
    }
}

loc_800A50BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 180));
}

loc_800A50C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_800A50CC;
    }
}

loc_800A50C8:
{
    MemoryInline::FlatWrite32((r3 + 180), r29);
}

loc_800A50CC:
{
    r25 = 0;
    goto loc_800A50DC;
}

loc_800A50D4:
{
    r3 = r25;
    ctx->lr = 0x800A50DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800AE614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800A50DC:
{
    r3 = (r24 + 192);
    r4 = r25;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl21_0x805022E0:
{
}

loc_inl21_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl21_0x805022F0;
    }
}

loc_inl21_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl21_cont_805022E0;
}

loc_inl21_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl21_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r25 = r3;
}

loc_800A50F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A50D4;
    }
}

loc_800A50F4:
{
    r3 = (r1 + 8);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r24;
    r4 = (r1 + 8);
    ctx->lr = 0x800A5108u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800A9508u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r24 + 264), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r24 + 268), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r24 + 272), f0.d);
}

loc_800A5120:
{
    r3 = (r28 + 36);
    r4 = r24;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl23_0x805022E0:
{
}

loc_inl23_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl23_0x805022F0;
    }
}

loc_inl23_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl23_cont_805022E0;
}

loc_inl23_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl23_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r24 = r3;
}

loc_800A5134:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A50AC;
    }
}

loc_800A5138:
{
    r11 = (r1 + 2144);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 2148));
    ctx->lr = r0;
    r1 = (r1 + 2144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF000FFFF fpr_write=0xF000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A4C20 func_800A4C20 preserves=true fpr_mask=0x00000000
