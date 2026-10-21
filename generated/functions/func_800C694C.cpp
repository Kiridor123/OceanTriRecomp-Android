#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800C694C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t mkw_fifo_burst_0[4];

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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800C694Cu);
    goto loc_800C694C;

loc_800C694C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C699C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C69B4;
    }
}

loc_800C69A0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C69AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C69B4;
    }
}

loc_800C69B0:
{
    r10 = 0;
}

loc_800C69B4:
{
}

loc_800C69B8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C69D0;
    }
}

loc_800C69BC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C69C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C69D0;
    }
}

loc_800C69CC:
{
    r9 = 0;
}

loc_800C69D0:
{
}

loc_800C69D4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C69E8;
    }
}

loc_800C69D8:
{
    r0 = (r11 + 1073741824);
}

loc_800C69E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C69E8;
    }
}

loc_800C69E4:
{
    r8 = 0;
}

loc_800C69E8:
{
}

loc_800C69EC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C6A04;
    }
}

loc_800C69F0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C69FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C6A04;
    }
}

loc_800C6A00:
{
    r7 = 0;
}

loc_800C6A04:
{
}

loc_800C6A08:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C6A20;
    }
}

loc_800C6A0C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C6A18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C6A20;
    }
}

loc_800C6A1C:
{
    r6 = 0;
}

loc_800C6A20:
{
}

loc_800C6A24:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C6A3C;
    }
}

loc_800C6A28:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C6A34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C6A3C;
    }
}

loc_800C6A38:
{
    r5 = 0;
}

loc_800C6A3C:
{
}

loc_800C6A40:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C6A64;
    }
}

loc_800C6A44:
{
    r3 = 0x80590000u;
    r3 = (r3 + 20496);
    r4 = 368;
    r5 = 0x80590000u;
    r5 = (r5 + 20564);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C6A64u;
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

loc_800C6A64:
{
    r3 = r26;
    r4 = r27;
    r5 = r28;
    r6 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800C72D4u>(ctx);
    r3 = ctx->gpr[3];
    r25 = 0;
}

loc_800C6A80:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800C6A8C;
    }
}

loc_800C6A84:
{
}

loc_800C6A88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C6A90;
    }
}

loc_800C6A8C:
{
    r25 = 1;
}

loc_800C6A90:
{
    r3 = r26;
    r4 = r27;
    r5 = r28;
    r6 = r30;
    ctx->lr = 0x800C6AA4u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C745Cu>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r31 = 0;
}

loc_800C6AAC:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_800C6AB8;
    }
}

loc_800C6AB0:
{
}

loc_800C6AB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C6ABC;
    }
}

loc_800C6AB8:
{
    r31 = 1;
}

loc_800C6ABC:
{
    r3 = r26;
    r4 = r27;
    r5 = r28;
    r6 = r29;
    r7 = r30;
    ctx->lr = 0x800C6AD4u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7D44u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r4 = 0;
}

loc_800C6ADC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800C6AEC;
    }
}

loc_800C6AE0:
{
}

loc_800C6AE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C6AEC;
    }
}

loc_800C6AE8:
{
    r4 = 1;
}

loc_800C6AEC:
{
    r0 = MemoryInline::FlatRead16(r28);
    r0 = (r0 & 8);
}

loc_800C6AF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C6FDC;
    }
}

loc_800C6AFC:
{
    r3 = MemoryInline::FlatRead32((r27 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -16284));
}

loc_800C6B18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C6B20;
    }
}

loc_800C6B1C:
{
    goto loc_800C6FDC;
}

loc_800C6B20:
{
}

loc_800C6B24:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C6FDC;
    }
}

loc_800C6B28:
{
    r3 = 9;
    r4 = (r1 + 36);
    ctx->lr = 0x800C6B34u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5910u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 10;
    r4 = (r1 + 24);
    ctx->lr = 0x800C6B40u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5910u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 11;
    r4 = (r1 + 48);
    ctx->lr = 0x800C6B4Cu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5910u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 12;
    r4 = (r1 + 60);
    ctx->lr = 0x800C6B58u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5910u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 13;
    r4 = (r1 + 12);
    ctx->lr = 0x800C6B64u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5910u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 0;
    r4 = 9;
    r5 = (r1 + 40);
    r6 = (r1 + 44);
    r7 = (r1 + 8);
    ctx->lr = 0x800C6B7Cu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5F00u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 0;
    r4 = 10;
    r5 = (r1 + 28);
    r6 = (r1 + 32);
    r7 = (r1 + 8);
    ctx->lr = 0x800C6B94u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5F00u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 0;
    r4 = 11;
    r5 = (r1 + 52);
    r6 = (r1 + 56);
    r7 = (r1 + 8);
    ctx->lr = 0x800C6BACu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5F00u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 0;
    r4 = 12;
    r5 = (r1 + 64);
    r6 = (r1 + 68);
    r7 = (r1 + 8);
    ctx->lr = 0x800C6BC4u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5F00u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 0;
    r4 = 13;
    r5 = (r1 + 16);
    r6 = (r1 + 20);
    r7 = (r1 + 8);
    ctx->lr = 0x800C6BDCu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5F00u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 152;
    r4 = 0;
    r5 = 8;
    ctx->lr = 0x800C6BECu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r26 = 0;
}

loc_800C6BF0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
}

loc_800C6BF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6D58;
    }
}

loc_800C6BFC:
{
}

loc_800C6C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6C18;
    }
}

loc_800C6C04:
{
}

loc_800C6C08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C6D44;
    }
}

loc_800C6C0C:
{
}

loc_800C6C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6D50;
    }
}

loc_800C6C14:
{
    goto loc_800C6D58;
}

loc_800C6C18:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
}

loc_800C6C20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6C30;
    }
}

loc_800C6C24:
{
}

loc_800C6C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6CC4;
    }
}

loc_800C6C2C:
{
    goto loc_800C6D58;
}

loc_800C6C30:
{
    r0 = MemoryInline::FlatRead32((r1 + 44));
}

loc_800C6C38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6C60;
    }
}

loc_800C6C3C:
{
}

loc_800C6C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6C74;
    }
}

loc_800C6C44:
{
}

loc_800C6C48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C6C88;
    }
}

loc_800C6C4C:
{
}

loc_800C6C50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6C9C;
    }
}

loc_800C6C54:
{
}

loc_800C6C58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C6CB0;
    }
}

loc_800C6C5C:
{
    goto loc_800C6D58;
}

loc_800C6C60:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800C72B4 (8 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r4 & 255);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r5 & 255);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C72B4
    goto loc_800C6D58;
}

loc_800C6C74:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800C7294 (8 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C7294
    goto loc_800C6D58;
}

loc_800C6C88:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800C7274 (8 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (r4 & 65535);
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (r5 & 65535);
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C7274
    goto loc_800C6D58;
}

loc_800C6C9C:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800C7254 (8 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C7254
    goto loc_800C6D58;
}

loc_800C6CB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30908));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x800C7240 (5 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
    // end of inlined leaf 0x800C7240
    goto loc_800C6D58;
}

loc_800C6CC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 44));
}

loc_800C6CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6CF4;
    }
}

loc_800C6CD0:
{
}

loc_800C6CD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6D04;
    }
}

loc_800C6CD8:
{
}

loc_800C6CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C6D14;
    }
}

loc_800C6CE0:
{
}

loc_800C6CE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6D24;
    }
}

loc_800C6CE8:
{
}

loc_800C6CEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C6D34;
    }
}

loc_800C6CF0:
{
    goto loc_800C6D58;
}

loc_800C6CF4:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x800C7228 (6 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r4 & 255);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C7228
    goto loc_800C6D58;
}

loc_800C6D04:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x800C7210 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C7210
    goto loc_800C6D58;
}

loc_800C6D14:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x800C71F8 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (r4 & 65535);
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C71F8
    goto loc_800C6D58;
}

loc_800C6D24:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x800C71E0 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C71E0
    goto loc_800C6D58;
}

loc_800C6D34:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30908));
    f2.d = f1.d;
    // inline leaf 0x800C71D0 (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800C71D0
    goto loc_800C6D58;
}

loc_800C6D44:
{
    r3 = 0;
    // inline leaf 0x800C71C0 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C71C0
    goto loc_800C6D58;
}

loc_800C6D50:
{
    r3 = 0;
    // inline leaf 0x800C71B0 (4 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C71B0
}

loc_800C6D58:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_800C6D60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6DFC;
    }
}

loc_800C6D64:
{
}

loc_800C6D68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6D80;
    }
}

loc_800C6D6C:
{
}

loc_800C6D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C6DE8;
    }
}

loc_800C6D74:
{
}

loc_800C6D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6DF4;
    }
}

loc_800C6D7C:
{
    goto loc_800C6DFC;
}

loc_800C6D80:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
}

loc_800C6D88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C6DFC;
    }
}

loc_800C6D8C:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
}

loc_800C6D94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6DAC;
    }
}

loc_800C6D98:
{
}

loc_800C6D9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6DC0;
    }
}

loc_800C6DA0:
{
}

loc_800C6DA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C6DD4;
    }
}

loc_800C6DA8:
{
    goto loc_800C6DFC;
}

loc_800C6DAC:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800C7190 (8 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C7190
    goto loc_800C6DFC;
}

loc_800C6DC0:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800C7170 (8 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C7170
    goto loc_800C6DFC;
}

loc_800C6DD4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30908));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x800C715C (5 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
    // end of inlined leaf 0x800C715C
    goto loc_800C6DFC;
}

loc_800C6DE8:
{
    r3 = 0;
    // inline leaf 0x800C714C (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C714C
    goto loc_800C6DFC;
}

loc_800C6DF4:
{
    r3 = 0;
    // inline leaf 0x800C713C (4 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C713C
}

loc_800C6DFC:
{
    r27 = 0;
    r25 = (r1 + 48);
}

loc_800C6E04:
{
    r0 = MemoryInline::FlatRead32(r25);
}

loc_800C6E0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6E24;
    }
}

loc_800C6E10:
{
}

loc_800C6E14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C6E68;
    }
}

loc_800C6E18:
{
}

loc_800C6E1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6E74;
    }
}

loc_800C6E20:
{
    goto loc_800C6E7C;
}

loc_800C6E24:
{
    r0 = MemoryInline::FlatRead32((r25 + 4));
}

loc_800C6E2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6E3C;
    }
}

loc_800C6E30:
{
}

loc_800C6E34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6E50;
    }
}

loc_800C6E38:
{
    goto loc_800C6E7C;
}

loc_800C6E3C:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800C711C (8 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r4 & 255);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r5 & 255);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C711C
    goto loc_800C6E7C;
}

loc_800C6E50:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    // inline leaf 0x800C70F4 (10 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r0);
    r0 = (r4 & 255);
    mkw_fifo_burst_0[1] = static_cast<uint8_t>(r0);
    r0 = (r5 & 255);
    mkw_fifo_burst_0[2] = static_cast<uint8_t>(r0);
    r0 = (r6 & 255);
    mkw_fifo_burst_0[3] = static_cast<uint8_t>(r0);
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 4u);
    // end of inlined leaf 0x800C70F4
    goto loc_800C6E7C;
}

loc_800C6E68:
{
    r3 = 0;
    // inline leaf 0x800C70E4 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C70E4
    goto loc_800C6E7C;
}

loc_800C6E74:
{
    r3 = 0;
    // inline leaf 0x800C70D4 (4 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C70D4
}

loc_800C6E7C:
{
    r25 = (r25 + 12);
    r27 = (r27 + 1);
}

loc_800C6E88:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_800C6E04;
    }
}

loc_800C6E8C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_800C6E94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6FCC;
    }
}

loc_800C6E98:
{
}

loc_800C6E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6EB4;
    }
}

loc_800C6EA0:
{
}

loc_800C6EA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C6FB8;
    }
}

loc_800C6EA8:
{
}

loc_800C6EAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6FC4;
    }
}

loc_800C6EB0:
{
    goto loc_800C6FCC;
}

loc_800C6EB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_800C6EBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6ECC;
    }
}

loc_800C6EC0:
{
}

loc_800C6EC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6F4C;
    }
}

loc_800C6EC8:
{
    goto loc_800C6FCC;
}

loc_800C6ECC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_800C6ED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6EFC;
    }
}

loc_800C6ED8:
{
}

loc_800C6EDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6F0C;
    }
}

loc_800C6EE0:
{
}

loc_800C6EE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C6F1C;
    }
}

loc_800C6EE8:
{
}

loc_800C6EEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6F2C;
    }
}

loc_800C6EF0:
{
}

loc_800C6EF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C6F3C;
    }
}

loc_800C6EF8:
{
    goto loc_800C6FCC;
}

loc_800C6EFC:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x800C70BC (6 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r4 & 255);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C70BC
    goto loc_800C6FCC;
}

loc_800C6F0C:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x800C70A4 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C70A4
    goto loc_800C6FCC;
}

loc_800C6F1C:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x800C708C (6 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (r4 & 65535);
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C708C
    goto loc_800C6FCC;
}

loc_800C6F2C:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x800C7074 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C7074
    goto loc_800C6FCC;
}

loc_800C6F3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30908));
    f2.d = f1.d;
    // inline leaf 0x800C7064 (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800C7064
    goto loc_800C6FCC;
}

loc_800C6F4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_800C6F54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6F7C;
    }
}

loc_800C6F58:
{
}

loc_800C6F5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C6F88;
    }
}

loc_800C6F60:
{
}

loc_800C6F64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C6F94;
    }
}

loc_800C6F68:
{
}

loc_800C6F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C6FA0;
    }
}

loc_800C6F70:
{
}

loc_800C6F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C6FAC;
    }
}

loc_800C6F78:
{
    goto loc_800C6FCC;
}

loc_800C6F7C:
{
    r3 = 0;
    // inline leaf 0x800C7054 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C7054
    goto loc_800C6FCC;
}

loc_800C6F88:
{
    r3 = 0;
    // inline leaf 0x800C7044 (4 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C7044
    goto loc_800C6FCC;
}

loc_800C6F94:
{
    r3 = 0;
    // inline leaf 0x800C7034 (4 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C7034
    goto loc_800C6FCC;
}

loc_800C6FA0:
{
    r3 = 0;
    // inline leaf 0x800C7024 (4 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C7024
    goto loc_800C6FCC;
}

loc_800C6FAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30908));
    // inline leaf 0x800C7018 (3 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    // end of inlined leaf 0x800C7018
    goto loc_800C6FCC;
}

loc_800C6FB8:
{
    r3 = 0;
    // inline leaf 0x800C7008 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800C7008
    goto loc_800C6FCC;
}

loc_800C6FC4:
{
    r3 = 0;
    // inline leaf 0x800C6FF8 (4 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800C6FF8
}

loc_800C6FCC:
{
    r26 = (r26 + 1);
}

loc_800C6FD4:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(8))) {
        goto loc_800C6BF0;
    }
}

loc_800C6FD8:
{
    // inline leaf 0x800C6FF4 (1 guest instruction(s))
    // end of inlined leaf 0x800C6FF4
}

loc_800C6FDC:
{
    r11 = (r1 + 112);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C694C func_800C694C preserves=true fpr_mask=0x00000000
