#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800BEA64_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800BEA64u);
    goto loc_800BEA64;

loc_800BEA64:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BEAAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BEAC4;
    }
}

loc_800BEAB0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BEABC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BEAC4;
    }
}

loc_800BEAC0:
{
    r10 = 0;
}

loc_800BEAC4:
{
}

loc_800BEAC8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BEAE0;
    }
}

loc_800BEACC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BEAD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BEAE0;
    }
}

loc_800BEADC:
{
    r9 = 0;
}

loc_800BEAE0:
{
}

loc_800BEAE4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BEAF8;
    }
}

loc_800BEAE8:
{
    r0 = (r11 + 1073741824);
}

loc_800BEAF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BEAF8;
    }
}

loc_800BEAF4:
{
    r8 = 0;
}

loc_800BEAF8:
{
}

loc_800BEAFC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BEB14;
    }
}

loc_800BEB00:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BEB0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BEB14;
    }
}

loc_800BEB10:
{
    r7 = 0;
}

loc_800BEB14:
{
}

loc_800BEB18:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BEB30;
    }
}

loc_800BEB1C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BEB28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BEB30;
    }
}

loc_800BEB2C:
{
    r6 = 0;
}

loc_800BEB30:
{
}

loc_800BEB34:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BEB4C;
    }
}

loc_800BEB38:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BEB44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BEB4C;
    }
}

loc_800BEB48:
{
    r5 = 0;
}

loc_800BEB4C:
{
}

loc_800BEB50:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BEB74;
    }
}

loc_800BEB54:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18872);
    r4 = 136;
    r5 = 0x80590000u;
    r5 = (r5 + 19108);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BEB74u;
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

loc_800BEB74:
{
    r3 = (r1 + 48);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r30;
    r4 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B5518u>(ctx);
    r0 = (r31 & 255);
}

loc_800BEB90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BEBA8;
    }
}

loc_800BEB94:
{
}

loc_800BEB98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800BEC00;
    }
}

loc_800BEB9C:
{
}

loc_800BEBA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800BEC58;
    }
}

loc_800BEBA4:
{
    goto loc_800BECA8;
}

loc_800BEBA8:
{
    r3 = (r1 + 44);
    r4 = (r1 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    ctx->lr = 0x800BEBB8u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30972));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30976));
    f3.d = f2.d;
    f4.d = f2.d;
    f5.d = f2.d;
    f6.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f7.d = (-(f0.d));
    f8.d = f2.d;
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x80077E54
    goto loc_800BED74;
}

loc_800BEC00:
{
    r3 = (r1 + 36);
    r4 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    ctx->lr = 0x800BEC10u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30972));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f4.d = f2.d;
    f5.d = f2.d;
    f6.d = MemoryInline::FlatReadFloat32((r2 + -30976));
    f7.d = f2.d;
    f8.d = f2.d;
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x80077E54
    goto loc_800BED74;
}

loc_800BEC58:
{
    r3 = (r1 + 28);
    r4 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    ctx->lr = 0x800BEC68u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30972));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30976));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = (-(f5.d));
    f4.d = f3.d;
    f6.d = f1.d;
    f7.d = f3.d;
    f8.d = f3.d;
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x80077E54
    goto loc_800BED74;
}

loc_800BECA8:
{
    r3 = (r1 + 44);
    r4 = (r1 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    ctx->lr = 0x800BECB8u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    r3 = (r1 + 36);
    r4 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    ctx->lr = 0x800BECC8u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    r3 = (r1 + 28);
    r4 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    ctx->lr = 0x800BECD8u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f6.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f11.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r2 + -30972));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f4.d);
    r3 = r29;
    f5.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = PpcFmulsInline(f5.d, f10.d);
    f2.d = PpcFmulsInline(f6.d, f10.d);
    f9.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f9.d, f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f3.d = PpcFmulsInline(f11.d, f10.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = PpcFmulsInline(f8.d, f7.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f5.d = PpcFmulsInline(f5.d, f7.d);
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f0.d = PpcFmulsInline(f9.d, f10.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f7.d = PpcFmulsInline(f11.d, f7.d);
    f0.d = PpcFmulsInline(f8.d, f10.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    f8.d = f4.d;
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 32), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 36), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x80077E54
}

loc_800BED74:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800BEA64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800BEA64_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFD fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BEA64 func_800BEA64 preserves=true fpr_mask=0x00000000
