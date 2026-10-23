#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DCEC8(CpuContext* ctx);
extern "C" uint64_t func_800DCEC8_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_801E1AA4(CpuContext* ctx);
extern "C" uint64_t func_801E1AA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801E1BCC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_801E1BCC;

loc_801E1BCC:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r28 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r31 = MemoryInline::FlatRead32((r3 + 48));
    r29 = MemoryInline::FlatRead32((r31 + 364));
    r3 = (r1 + 64);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 52);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r0);
    r3 = r29;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r3 = (r3 & 65535);
    r0 = (r3 + -333);
}

loc_801E1C30:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(17))) {
        goto loc_801E1F10;
    }
}

loc_801E1C34:
{
    r3 = 0x805B0000u;
    r3 = (r3 + 32300);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801E1C4Cu:
        goto loc_801E1C4C;
        break;
    case 0x801E1C88u:
        goto loc_801E1C88;
        break;
    case 0x801E1CD0u:
        goto loc_801E1CD0;
        break;
    case 0x801E1F10u:
        goto loc_801E1F10;
        break;
    case 0x801E1D68u:
        goto loc_801E1D68;
        break;
    case 0x801E1DC8u:
        goto loc_801E1DC8;
        break;
    case 0x801E1E2Cu:
        goto loc_801E1E2C;
        break;
    case 0x801E1EA4u:
        goto loc_801E1EA4;
        break;
    case 0x801E1EDCu:
        goto loc_801E1EDC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_801E1C4C:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17096));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1C60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1C64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E2148;
    }
}

loc_801E1C68:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    goto loc_801E1F10;
}

loc_801E1C88:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17092));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1C9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1CA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E2148;
    }
}

loc_801E1CA4:
{
    r3 = r29;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17088));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1CB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1CBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1F10;
    }
}

loc_801E1CC0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    goto loc_801E1F10;
}

loc_801E1CD0:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17084));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1CE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1CE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E2148;
    }
}

loc_801E1CEC:
{
    r3 = r29;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17080));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1D00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1D04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1D18;
    }
}

loc_801E1D08:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 12), r0);
}

loc_801E1D18:
{
    r3 = r29;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17088));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1D2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1D30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1F10;
    }
}

loc_801E1D34:
{
    r3 = MemoryInline::FlatRead8((r28 + 7));
}

loc_801E1D3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801E1D50;
    }
}

loc_801E1D40:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    goto loc_801E1F10;
}

loc_801E1D50:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    goto loc_801E1F10;
}

loc_801E1D68:
{
    r3 = r29;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17088));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1D7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1D80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1D9C;
    }
}

loc_801E1D84:
{
    r3 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 & 253);
}

loc_801E1D98:
{
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
}

loc_801E1D9C:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17076));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1DB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1DB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1F10;
    }
}

loc_801E1DB8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r28 + 12), r0);
    goto loc_801E1F10;
}

loc_801E1DC8:
{
    r3 = r29;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17088));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1DDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1DE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1DFC;
    }
}

loc_801E1DE4:
{
    r3 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
}

loc_801E1DFC:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17076));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1E10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1E14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1F10;
    }
}

loc_801E1E18:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 12), r0);
    goto loc_801E1F10;
}

loc_801E1E2C:
{
    r3 = r29;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17088));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1E40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1E44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1E78;
    }
}

loc_801E1E48:
{
    r3 = MemoryInline::FlatRead8((r28 + 7));
}

loc_801E1E50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801E1E64;
    }
}

loc_801E1E54:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    goto loc_801E1E78;
}

loc_801E1E64:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 & 253);
}

loc_801E1E74:
{
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
}

loc_801E1E78:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17120));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1E8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1E90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1F10;
    }
}

loc_801E1E94:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r28 + 12), r0);
    goto loc_801E1F10;
}

loc_801E1EA4:
{
    r3 = r29;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17116));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1EB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1EBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1F10;
    }
}

loc_801E1EC0:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    goto loc_801E1F10;
}

loc_801E1EDC:
{
    r3 = r29;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17072));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1EF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E1EF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E1F10;
    }
}

loc_801E1EF8:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
}

loc_801E1F10:
{
    r0 = MemoryInline::FlatRead8((r30 + 91));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x88890000u;
    r0 = (r3 + -30583);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 30);
    r0 = (r4 - r0);
}

loc_801E1F40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E1F64;
    }
}

loc_801E1F44:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_801E1F54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801E1F64;
    }
}

loc_801E1F58:
{
    r3 = MemoryInline::FlatRead32((r31 + 1176));
    r4 = (r28 + 24);
    ctx->lr = 0x801E1F64u;
    if constexpr (KnownRegArgsCpuCall<0x800DCEC8u>(&func_800DCEC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_800DCEC8_52CA = func_800DCEC8_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DCEC8_52CA);
        r4 = static_cast<uint32_t>(regargs_result_800DCEC8_52CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DCEC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_801E1F64:
{
    r3 = MemoryInline::FlatRead8((r30 + 91));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 91), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_801E1F8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E1FC8;
    }
}

loc_801E1F90:
{
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r3 = (r3 + 65536);
    r0 = (r3 + -162);
    r0 = (r0 & 65535);
}

loc_801E1FA4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_801E1FC8;
    }
}

loc_801E1FA8:
{
    r3 = 0;
    r4 = 0;
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_5B17 = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_5B17);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_5B17 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801E2068;
}

loc_801E1FC8:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
}

loc_801E1FD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_801E2020;
    }
}

loc_801E1FD4:
{
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_801E1FDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E2000;
    }
}

loc_801E1FE0:
{
    r3 = 0;
    r4 = MemoryInline::FlatRead8((r29 + 1466));
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_6171 = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_6171);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_6171 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801E2068;
}

loc_801E2000:
{
    r3 = 1;
    r4 = MemoryInline::FlatRead8((r29 + 1466));
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_6648 = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_6648);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_6648 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801E2068;
}

loc_801E2020:
{
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_801E2028:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E204C;
    }
}

loc_801E202C:
{
    r3 = 1;
    r4 = MemoryInline::FlatRead8((r29 + 1466));
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_6BE0 = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_6BE0);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_6BE0 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801E2068;
}

loc_801E204C:
{
    r3 = 0;
    r4 = MemoryInline::FlatRead8((r29 + 1466));
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_70B7 = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_70B7);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_70B7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_801E2068:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 8;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 9;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 & 1);
}

loc_801E2094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E20E8;
    }
}

loc_801E2098:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 8;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 1;
    r5 = 4;
    r6 = (r1 + 20);
    r7 = 0;
    ctx->lr = 0x801E20C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 2;
    r5 = 4;
    r6 = (r1 + 16);
    r7 = 0;
    ctx->lr = 0x801E20E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E20E8:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 & 2);
}

loc_801E20F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E2148;
    }
}

loc_801E20F8:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 9;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 3;
    r5 = 4;
    r6 = (r1 + 12);
    r7 = 0;
    ctx->lr = 0x801E2128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 4;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x801E2148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
}

loc_801E2148:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E1BCC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E1BCC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E1BCC func_801E1BCC preserves=true fpr_mask=0x00000000
