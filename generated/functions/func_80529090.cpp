#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805293B0(CpuContext* ctx);
extern "C" uint64_t func_805293B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80529090_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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

    goto loc_80529090;

loc_80529090:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = 0;
    r6 = MemoryInline::FlatRead32((r13 + -13336));
    r0 = (r31 * 680);
    r29 = r4;
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
}

loc_805290C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80529110;
    }
}

loc_805290C4:
{
    r31 = 1;
    r0 = (r31 * 680);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
}

loc_805290D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80529110;
    }
}

loc_805290DC:
{
    r31 = 2;
    r0 = (r31 * 680);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
}

loc_805290F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80529110;
    }
}

loc_805290F4:
{
    r31 = 3;
    r0 = (r31 * 680);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
}

loc_80529108:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80529110;
    }
}

loc_8052910C:
{
    r31 = 4;
}

loc_80529110:
{
}

loc_80529114:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(4))) {
        goto loc_80529354;
    }
}

loc_80529118:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r4 = (r31 * 680);
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_8052912C:
{
    r30 = (r6 + r4);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80529168;
    }
}

loc_80529134:
{
    r3 = (r30 + 624);
    ctx->lr = 0x8052913Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804CBE80_EDD = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_EDD);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_EDD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_80529144:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80529158;
    }
}

loc_80529148:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_80529354;
}

loc_80529158:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_80529354;
}

loc_80529168:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    // inline leaf 0x804E9800 (5 guest instruction(s))
    r3 = 0x80760000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + -10472), r0);
    r3 = 1;
    // end of inlined leaf 0x804E9800
    r27 = 1;
    r26 = 0;
}

loc_8052917C:
{
    r0 = MemoryInline::FlatRead8((r30 + 76));
    r0 = (r0 & r27);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805291AC;
    }
}

loc_80529188:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (r0 & r27);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805291CC;
    }
}

loc_80529194:
{
    r0 = (r26 + 224);
    r5 = r31;
    r3 = (r0 & 255);
    r4 = 0;
    ctx->lr = 0x805291A8u;
    if constexpr (KnownRegArgsCpuCall<0x805293B0u>(&func_805293B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_805293B0_1785 = func_805293B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805293B0_1785);
        r4 = static_cast<uint32_t>(regargs_result_805293B0_1785 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x805293B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_805291CC;
}

loc_805291AC:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (r0 & r27);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805291CC;
    }
}

loc_805291B8:
{
    r0 = (r26 + 224);
    r5 = r31;
    r3 = (r0 & 255);
    r4 = 1;
    ctx->lr = 0x805291CCu;
    if constexpr (KnownRegArgsCpuCall<0x805293B0u>(&func_805293B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_805293B0_1F75 = func_805293B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805293B0_1F75);
        r4 = static_cast<uint32_t>(regargs_result_805293B0_1F75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x805293B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_805291CC:
{
    r26 = (r26 + 1);
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r27 = (r27_rot_2 & -2);
}

loc_805291D8:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(8))) {
        goto loc_8052917C;
    }
}

loc_805291DC:
{
    r26 = 0;
    r28 = 0;
}

loc_805291E4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r27 = (r30 + r0);
    r3 = MemoryInline::FlatRead8((r27 + 78));
}

loc_805291F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80529274;
    }
}

loc_805291F8:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r4 = 0;
}

loc_80529204:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8052925C;
    }
}

loc_80529208:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
    r4 = 1;
}

loc_80529214:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8052925C;
    }
}

loc_80529218:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r4 = 2;
}

loc_80529224:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8052925C;
    }
}

loc_80529228:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r4 = 3;
}

loc_80529234:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8052925C;
    }
}

loc_80529238:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
    r4 = 4;
}

loc_80529244:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8052925C;
    }
}

loc_80529248:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
    r4 = 5;
}

loc_80529254:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8052925C;
    }
}

loc_80529258:
{
    r4 = 6;
}

loc_8052925C:
{
}

loc_80529260:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(6))) {
        goto loc_80529274;
    }
}

loc_80529264:
{
    r5 = r31;
    r4 = 0;
    ctx->lr = 0x80529270u;
    if constexpr (KnownRegArgsCpuCall<0x805293B0u>(&func_805293B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_805293B0_2E69 = func_805293B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805293B0_2E69);
        r4 = static_cast<uint32_t>(regargs_result_805293B0_2E69 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x805293B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite8((r27 + 78), static_cast<uint8_t>(r28));
}

loc_80529274:
{
    r26 = (r26 + 1);
}

loc_8052927C:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(6))) {
        goto loc_805291E4;
    }
}

loc_80529280:
{
    r27 = 0;
}

loc_80529284:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r3 = (r29 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80529294:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80529310;
    }
}

loc_80529298:
{
    r0 = MemoryInline::FlatRead8((r30 + 78));
    r4 = 0;
}

loc_805292A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805292FC;
    }
}

loc_805292A8:
{
    r0 = MemoryInline::FlatRead8((r30 + 79));
    r4 = 1;
}

loc_805292B4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805292FC;
    }
}

loc_805292B8:
{
    r0 = MemoryInline::FlatRead8((r30 + 80));
    r4 = 2;
}

loc_805292C4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805292FC;
    }
}

loc_805292C8:
{
    r0 = MemoryInline::FlatRead8((r30 + 81));
    r4 = 3;
}

loc_805292D4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805292FC;
    }
}

loc_805292D8:
{
    r0 = MemoryInline::FlatRead8((r30 + 82));
    r4 = 4;
}

loc_805292E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805292FC;
    }
}

loc_805292E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 83));
    r4 = 5;
}

loc_805292F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805292FC;
    }
}

loc_805292F8:
{
    r4 = 6;
}

loc_805292FC:
{
}

loc_80529300:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(6))) {
        goto loc_80529310;
    }
}

loc_80529304:
{
    r5 = r31;
    r4 = 1;
    ctx->lr = 0x80529310u;
    if constexpr (KnownRegArgsCpuCall<0x805293B0u>(&func_805293B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_805293B0_3D23 = func_805293B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805293B0_3D23);
        r4 = static_cast<uint32_t>(regargs_result_805293B0_3D23 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x805293B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80529310:
{
    r27 = (r27 + 1);
}

loc_80529318:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(6))) {
        goto loc_80529284;
    }
}

loc_8052931C:
{
    r0 = MemoryInline::FlatRead8(r29);
    MemoryInline::FlatWrite8((r30 + 76), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    MemoryInline::FlatWrite8((r30 + 78), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 3));
    MemoryInline::FlatWrite8((r30 + 79), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 4));
    MemoryInline::FlatWrite8((r30 + 80), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 5));
    MemoryInline::FlatWrite8((r30 + 81), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 6));
    MemoryInline::FlatWrite8((r30 + 82), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 7));
    MemoryInline::FlatWrite8((r30 + 83), static_cast<uint8_t>(r0));
}

loc_80529354:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80529090(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80529090_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80529090 func_80529090 preserves=true fpr_mask=0x00000000
