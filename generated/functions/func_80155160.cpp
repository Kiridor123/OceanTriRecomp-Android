#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012C284(CpuContext* ctx);
extern "C" uint64_t func_8012C284_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012D67C(CpuContext* ctx);
extern "C" uint64_t func_8012D67C_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80130FD8(CpuContext* ctx);
extern "C" uint64_t func_80130FD8_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80137718(CpuContext* ctx);
extern "C" uint32_t func_80137718_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80141BEC(CpuContext* ctx);
extern "C" uint64_t func_80141BEC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8015D734(CpuContext* ctx);
extern "C" uint64_t func_8015D734_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027D138(CpuContext* ctx);
extern "C" uint64_t func_8027D138_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80155160_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_80155160;

loc_80155160:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r6 = MemoryInline::FlatRead8((r3 + 484));
    r30 = 0;
    MemoryInline::FlatWrite8((r3 + 484), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite16((r3 + 2102), static_cast<uint16_t>(r0));
    r0 = (r4 & 255);
}

loc_801551A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801551D0;
    }
}

loc_801551A4:
{
}

loc_801551A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80155570;
    }
}

loc_801551AC:
{
}

loc_801551B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8015559C;
    }
}

loc_801551B4:
{
}

loc_801551B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_801555B4;
    }
}

loc_801551BC:
{
}

loc_801551C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_8015560C;
    }
}

loc_801551C4:
{
}

loc_801551C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_80155694;
    }
}

loc_801551CC:
{
    goto loc_801556A8;
}

loc_801551D0:
{
    r4 = (r5 & 255);
    r0 = (r4 + -5);
}

loc_801551DC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(32))) {
        goto loc_801556A8;
    }
}

loc_801551E0:
{
    r4 = 0x805A0000u;
    r4 = (r4 + 20596);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801551F8u:
        goto loc_801551F8;
        break;
    case 0x801556A8u:
        goto loc_801556A8;
        break;
    case 0x80155200u:
        goto loc_80155200;
        break;
    case 0x8015520Cu:
        goto loc_8015520C;
        break;
    case 0x80155220u:
        goto loc_80155220;
        break;
    case 0x8015522Cu:
        goto loc_8015522C;
        break;
    case 0x80155240u:
        goto loc_80155240;
        break;
    case 0x80155254u:
        goto loc_80155254;
        break;
    case 0x80155268u:
        goto loc_80155268;
        break;
    case 0x8015527Cu:
        goto loc_8015527C;
        break;
    case 0x801554F8u:
        goto loc_801554F8;
        break;
    case 0x801552B8u:
        goto loc_801552B8;
        break;
    case 0x801552C4u:
        goto loc_801552C4;
        break;
    case 0x801552D0u:
        goto loc_801552D0;
        break;
    case 0x8015539Cu:
        goto loc_8015539C;
        break;
    case 0x80155544u:
        goto loc_80155544;
        break;
    case 0x80155550u:
        goto loc_80155550;
        break;
    case 0x8015555Cu:
        goto loc_8015555C;
        break;
    case 0x80155290u:
        goto loc_80155290;
        break;
    case 0x801552A4u:
        goto loc_801552A4;
        break;
    case 0x80155568u:
        goto loc_80155568;
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_801551F8:
{
    ctx->lr = 0x801551FCu;
    if constexpr (KnownRegArgsCpuCall<0x80130FD8u>(&func_80130FD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80130FD8_1B90 = func_80130FD8_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130FD8_1B90);
        r4 = static_cast<uint32_t>(regargs_result_80130FD8_1B90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80130FD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_801556A8;
}

loc_80155200:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 820), static_cast<uint8_t>(r0));
    goto loc_801556A8;
}

loc_8015520C:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r3 + 816), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r3 + 824), static_cast<uint16_t>(r0));
    goto loc_801556A8;
}

loc_80155220:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 484), static_cast<uint8_t>(r0));
    goto loc_801556A8;
}

loc_8015522C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 816), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r3 + 824), static_cast<uint16_t>(r0));
    goto loc_801556A8;
}

loc_80155240:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 816), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r3 + 824), static_cast<uint16_t>(r0));
    goto loc_801556A8;
}

loc_80155254:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r3 + 816), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r3 + 824), static_cast<uint16_t>(r0));
    goto loc_801556A8;
}

loc_80155268:
{
    r0 = 16;
    MemoryInline::FlatWrite8((r3 + 816), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r3 + 824), static_cast<uint16_t>(r0));
    goto loc_801556A8;
}

loc_8015527C:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r3 + 816), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r3 + 824), static_cast<uint16_t>(r0));
    goto loc_801556A8;
}

loc_80155290:
{
    r0 = 15;
    MemoryInline::FlatWrite8((r3 + 816), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r3 + 824), static_cast<uint16_t>(r0));
    goto loc_801556A8;
}

loc_801552A4:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r3 + 816), static_cast<uint8_t>(r0));
    r0 = 900;
    MemoryInline::FlatWrite16((r3 + 824), static_cast<uint16_t>(r0));
    goto loc_801556A8;
}

loc_801552B8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 484), static_cast<uint8_t>(r0));
    goto loc_801556A8;
}

loc_801552C4:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 484), static_cast<uint8_t>(r0));
    goto loc_801556A8;
}

loc_801552D0:
{
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_801552D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801556A8;
    }
}

loc_801552DC:
{
    r4 = MemoryInline::FlatRead8((r31 + 820));
}

loc_801552E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801556A8;
    }
}

loc_801552E8:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 20464);
    r5 = 255;
    goto loc_80155308;
}

loc_801552F8:
{
}

loc_801552FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80155304;
    }
}

loc_80155300:
{
    r5 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80155304:
{
    r3 = (r3 + 2);
}

loc_80155308:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80155310:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801552F8;
    }
}

loc_80155314:
{
}

loc_80155318:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(255))) {
        goto loc_80155354;
    }
}

loc_8015531C:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead16((r31 + 26));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 481));
    r7 = 255;
    r8 = 2;
    r9 = 255;
    r10 = 1;
    ctx->lr = 0x80155350u;
    if constexpr (KnownRegArgsCpuCall<0x80141BECu>(&func_80141BEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_80141BEC_307E = func_80141BEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80141BEC_307E);
        r4 = static_cast<uint32_t>(regargs_result_80141BEC_307E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80141BECu>(ctx);
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
    goto loc_80155384;
}

loc_80155354:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead16((r31 + 26));
    r6 = MemoryInline::FlatRead8((r31 + 481));
    r7 = 255;
    r8 = 2;
    r9 = 255;
    r10 = 9;
    ctx->lr = 0x80155384u;
    if constexpr (KnownRegArgsCpuCall<0x80141BECu>(&func_80141BEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_80141BEC_3A5D = func_80141BEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80141BEC_3A5D);
        r4 = static_cast<uint32_t>(regargs_result_80141BEC_3A5D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80141BECu>(ctx);
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
}

loc_80155384:
{
    r0 = MemoryInline::FlatRead8((r31 + 820));
}

loc_8015538C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_801556A8;
    }
}

loc_80155390:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 821), static_cast<uint8_t>(r0));
    goto loc_801556A8;
}

loc_8015539C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 817), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 818));
}

loc_801553AC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(255))) {
        goto loc_801553B8;
    }
}

loc_801553B0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 818), static_cast<uint8_t>(r0));
}

loc_801553B8:
{
    r5 = 0;
    r3 = MemoryInline::FlatRead8((r3 + 816));
}

loc_801553C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801556A8;
    }
}

loc_801553C8:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 31072);
    r6 = 0;
    r0 = 32;
    ctr = r0;
}

loc_801553DC:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801553E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80155408;
    }
}

loc_801553E8:
{
    r0 = MemoryInline::FlatRead8((r4 + 8));
}

loc_801553F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80155408;
    }
}

loc_801553F4:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801553FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80155408;
    }
}

loc_80155400:
{
    r5 = 1;
    goto loc_80155498;
}

loc_80155408:
{
    r0 = MemoryInline::FlatRead8((r4 + 68));
}

loc_80155410:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80155434;
    }
}

loc_80155414:
{
    r0 = MemoryInline::FlatRead8((r4 + 76));
}

loc_8015541C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80155434;
    }
}

loc_80155420:
{
    r0 = MemoryInline::FlatRead8((r4 + 70));
}

loc_80155428:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80155434;
    }
}

loc_8015542C:
{
    r5 = 1;
    goto loc_80155498;
}

loc_80155434:
{
    r0 = MemoryInline::FlatRead8((r4 + 136));
}

loc_8015543C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80155460;
    }
}

loc_80155440:
{
    r0 = MemoryInline::FlatRead8((r4 + 144));
}

loc_80155448:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80155460;
    }
}

loc_8015544C:
{
    r0 = MemoryInline::FlatRead8((r4 + 138));
}

loc_80155454:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80155460;
    }
}

loc_80155458:
{
    r5 = 1;
    goto loc_80155498;
}

loc_80155460:
{
    r0 = MemoryInline::FlatRead8((r4 + 204));
}

loc_80155468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015548C;
    }
}

loc_8015546C:
{
    r0 = MemoryInline::FlatRead8((r4 + 212));
}

loc_80155474:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8015548C;
    }
}

loc_80155478:
{
    r0 = MemoryInline::FlatRead8((r4 + 206));
}

loc_80155480:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8015548C;
    }
}

loc_80155484:
{
    r5 = 1;
    goto loc_80155498;
}

loc_8015548C:
{
    r6 = (r6 + 3);
    r4 = (r4 + 272);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801553DC;
    }
}

loc_80155498:
{
}

loc_8015549C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801554AC;
    }
}

loc_801554A0:
{
    r4 = MemoryInline::FlatRead8((r31 + 481));
    ctx->lr = 0x801554A8u;
    if constexpr (KnownRegArgsCpuCall<0x8012C284u>(&func_8012C284)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8012C284_51DD = func_8012C284_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012C284_51DD);
        r4 = static_cast<uint32_t>(regargs_result_8012C284_51DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012C284u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    goto loc_801556A8;
}

loc_801554AC:
{
    r3 = r31;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_801554B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801556A8;
    }
}

loc_801554BC:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead16((r31 + 26));
    r4 = MemoryInline::FlatRead8((r31 + 816));
    r5 = 0;
    r6 = 255;
    r7 = 255;
    r8 = 1;
    r9 = 1;
    r10 = 0;
    ctx->lr = 0x801554F4u;
    if constexpr (KnownRegArgsCpuCall<0x80141BECu>(&func_80141BEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_80141BEC_5925 = func_80141BEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80141BEC_5925);
        r4 = static_cast<uint32_t>(regargs_result_80141BEC_5925 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80141BECu>(ctx);
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
    goto loc_801556A8;
}

loc_801554F8:
{
}

loc_801554FC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_80155514;
    }
}

loc_80155500:
{
}

loc_80155504:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_80155524;
    }
}

loc_80155508:
{
}

loc_8015550C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_80155534;
    }
}

loc_80155510:
{
    goto loc_801556A8;
}

loc_80155514:
{
    r4 = MemoryInline::FlatRead8((r3 + 481));
    r5 = 0;
    ctx->lr = 0x80155520u;
    if constexpr (KnownRegArgsCpuCall<0x8012D67Cu>(&func_8012D67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_8012D67C_63DE = func_8012D67C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D67C_63DE);
        r4 = static_cast<uint32_t>(regargs_result_8012D67C_63DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012D67Cu>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        ctr = ctx->ctr;
    }
    goto loc_801556A8;
}

loc_80155524:
{
    r4 = MemoryInline::FlatRead8((r3 + 481));
    r5 = 2;
    ctx->lr = 0x80155530u;
    if constexpr (KnownRegArgsCpuCall<0x8012D67Cu>(&func_8012D67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_8012D67C_6AA3 = func_8012D67C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D67C_6AA3);
        r4 = static_cast<uint32_t>(regargs_result_8012D67C_6AA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012D67Cu>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        ctr = ctx->ctr;
    }
    goto loc_801556A8;
}

loc_80155534:
{
    r4 = MemoryInline::FlatRead8((r3 + 481));
    r5 = 1;
    ctx->lr = 0x80155540u;
    if constexpr (KnownRegArgsCpuCall<0x8012D67Cu>(&func_8012D67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_8012D67C_7168 = func_8012D67C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D67C_7168);
        r4 = static_cast<uint32_t>(regargs_result_8012D67C_7168 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012D67Cu>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        ctr = ctx->ctr;
    }
    goto loc_801556A8;
}

loc_80155544:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r3 + 820), static_cast<uint8_t>(r0));
    goto loc_801556A8;
}

loc_80155550:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r3 + 820), static_cast<uint8_t>(r0));
    goto loc_801556A8;
}

loc_8015555C:
{
    r0 = 29;
    MemoryInline::FlatWrite8((r3 + 820), static_cast<uint8_t>(r0));
    goto loc_801556A8;
}

loc_80155568:
{
    if constexpr (KnownRegArgsCpuCall<0x80137718u>(&func_80137718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80137718_78D4 = func_80137718_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80137718_78D4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137718u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801556A8;
}

loc_80155570:
{
    r0 = (r5 & 255);
}

loc_80155578:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_801556A8;
    }
}

loc_8015557C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 819), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8015558C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3600))) {
        goto loc_801556A8;
    }
}

loc_80155590:
{
    r0 = 3600;
    MemoryInline::FlatWrite16((r3 + 1100), static_cast<uint16_t>(r0));
    goto loc_801556A8;
}

loc_8015559C:
{
    r0 = (r5 & 255);
}

loc_801555A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_801556A8;
    }
}

loc_801555A8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 507), static_cast<uint8_t>(r0));
    goto loc_801556A8;
}

loc_801555B4:
{
    r0 = (r5 & 255);
}

loc_801555BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(93))) {
        goto loc_801556A8;
    }
}

loc_801555C0:
{
}

loc_801555C4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_801555DC;
    }
}

loc_801555C8:
{
}

loc_801555CC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_801555EC;
    }
}

loc_801555D0:
{
}

loc_801555D4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_801555FC;
    }
}

loc_801555D8:
{
    goto loc_801556A8;
}

loc_801555DC:
{
    r3 = MemoryInline::FlatRead8((r3 + 481));
    r4 = 0;
    ctx->lr = 0x801555E8u;
    if constexpr (KnownRegArgsCpuCall<0x8027D138u>(&func_8027D138)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_8027D138_82AD = func_8027D138_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027D138_82AD);
        r4 = static_cast<uint32_t>(regargs_result_8027D138_82AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
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
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027D138u>(ctx);
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
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801556A8;
}

loc_801555EC:
{
    r3 = MemoryInline::FlatRead8((r3 + 481));
    r4 = 2;
    ctx->lr = 0x801555F8u;
    if constexpr (KnownRegArgsCpuCall<0x8027D138u>(&func_8027D138)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_8027D138_8930 = func_8027D138_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027D138_8930);
        r4 = static_cast<uint32_t>(regargs_result_8027D138_8930 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
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
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027D138u>(ctx);
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
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801556A8;
}

loc_801555FC:
{
    r3 = MemoryInline::FlatRead8((r3 + 481));
    r4 = 1;
    ctx->lr = 0x80155608u;
    if constexpr (KnownRegArgsCpuCall<0x8027D138u>(&func_8027D138)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_8027D138_8FB3 = func_8027D138_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027D138_8FB3);
        r4 = static_cast<uint32_t>(regargs_result_8027D138_8FB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
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
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027D138u>(ctx);
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
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801556A8;
}

loc_8015560C:
{
    ctx->lr = 0x80155610u;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_9558 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_9558;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80155614:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801556A8;
    }
}

loc_80155618:
{
    r3 = 0x806A0000u;
    r29 = (r3 + 31072);
    r28 = 0;
}

loc_80155624:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8015562C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80155680;
    }
}

loc_80155630:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_80155638:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80155680;
    }
}

loc_8015563C:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    if constexpr (KnownRegArgsCpuCall<0x8015D734u>(&func_8015D734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8015D734_9A56 = func_8015D734_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8015D734_9A56);
        r4 = static_cast<uint32_t>(regargs_result_8015D734_9A56 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8015D734u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80155648:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80155680;
    }
}

loc_8015564C:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    r3 = MemoryInline::FlatRead16((r31 + 26));
    r4 = MemoryInline::FlatRead8((r29 + 2));
    r5 = 0;
    r6 = 255;
    r7 = 255;
    r8 = 1;
    r9 = 1;
    r10 = 0;
    ctx->lr = 0x80155680u;
    if constexpr (KnownRegArgsCpuCall<0x80141BECu>(&func_80141BEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_80141BEC_9F9C = func_80141BEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80141BEC_9F9C);
        r4 = static_cast<uint32_t>(regargs_result_80141BEC_9F9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80141BECu>(ctx);
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
}

loc_80155680:
{
    r28 = (r28 + 1);
    r29 = (r29 + 68);
}

loc_8015568C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(128))) {
        goto loc_80155624;
    }
}

loc_80155690:
{
    goto loc_801556A8;
}

loc_80155694:
{
    r0 = (r5 & 255);
}

loc_8015569C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801556A8;
    }
}

loc_801556A0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 822), static_cast<uint8_t>(r0));
}

loc_801556A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80155160(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80155160_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80155160 func_80155160 preserves=true fpr_mask=0x00000000
