#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80431388(CpuContext* ctx);
extern "C" uint64_t func_80431388_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8042F0E4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8042F0E4u);
    goto loc_8042F0E4;

loc_8042F0E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = r4;
    r30 = r5;
    r3 = (r3 + 4896);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 4888), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 4890), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 4894), static_cast<uint16_t>(r0));
    r3 = 0;
}

loc_8042F130:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8042F148;
    }
}

loc_8042F134:
{
}

loc_8042F138:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(1))) {
        goto loc_8042F154;
    }
}

loc_8042F13C:
{
}

loc_8042F140:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(2))) {
        goto loc_8042F160;
    }
}

loc_8042F144:
{
    goto loc_8042F168;
}

loc_8042F148:
{
    r3 = 2;
    ctx->lr = 0x8042F150u;
    if constexpr (KnownRegArgsCpuCall<0x80431388u>(&func_80431388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80431388_9C9 = func_80431388_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80431388_9C9);
        r4 = static_cast<uint32_t>(regargs_result_80431388_9C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80431388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8042F168;
}

loc_8042F154:
{
    r3 = 1;
    ctx->lr = 0x8042F15Cu;
    if constexpr (KnownRegArgsCpuCall<0x80431388u>(&func_80431388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80431388_EA1 = func_80431388_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80431388_EA1);
        r4 = static_cast<uint32_t>(regargs_result_80431388_EA1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80431388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8042F168;
}

loc_8042F160:
{
    r3 = 0;
    ctx->lr = 0x8042F168u;
    if constexpr (KnownRegArgsCpuCall<0x80431388u>(&func_80431388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80431388_1379 = func_80431388_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80431388_1379);
        r4 = static_cast<uint32_t>(regargs_result_80431388_1379 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80431388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_8042F168:
{
}

loc_8042F16C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8042F17C;
    }
}

loc_8042F170:
{
    r0 = MemoryInline::FlatRead8((r31 + 5));
}

loc_8042F178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042F2A0;
    }
}

loc_8042F17C:
{
}

loc_8042F180:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042F268;
    }
}

loc_8042F184:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r7 = (r7_rot_1 & -8);
}

loc_8042F190:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r7))) {
        goto loc_8042F268;
    }
}

loc_8042F194:
{
    r8 = 0;
    r0 = 2;
    ctr = r0;
}

loc_8042F1A0:
{
    r4 = (r31 + r7);
    r4 = MemoryInline::FlatRead8((r4 + 4757));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8042F1B0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(-1))) {
        goto loc_8042F268;
    }
}

loc_8042F1B4:
{
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead16((r31 + 4894));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite16((r4 + 4896), static_cast<uint16_t>(r6));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r31 + 4894), static_cast<uint16_t>(r0));
    r4 = (r31 + r7);
    r4 = MemoryInline::FlatRead8((r4 + 4757));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8042F1E0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(-1))) {
        goto loc_8042F268;
    }
}

loc_8042F1E4:
{
    r7 = (r7 + 1);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite16((r4 + 4896), static_cast<uint16_t>(r6));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r31 + 4894), static_cast<uint16_t>(r0));
    r4 = (r31 + r7);
    r4 = MemoryInline::FlatRead8((r4 + 4757));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8042F210:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(-1))) {
        goto loc_8042F268;
    }
}

loc_8042F214:
{
    r7 = (r7 + 1);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite16((r4 + 4896), static_cast<uint16_t>(r6));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r31 + 4894), static_cast<uint16_t>(r0));
    r4 = (r31 + r7);
    r4 = MemoryInline::FlatRead8((r4 + 4757));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8042F240:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(-1))) {
        goto loc_8042F268;
    }
}

loc_8042F244:
{
    r7 = (r7 + 1);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite16((r4 + 4896), static_cast<uint16_t>(r6));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r31 + 4894), static_cast<uint16_t>(r0));
    r8 = (r8 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8042F1A0;
    }
}

loc_8042F268:
{
}

loc_8042F26C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8042F2A0;
    }
}

loc_8042F270:
{
    MemoryInline::FlatWrite16((r31 + 4888), static_cast<uint16_t>(r30));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl0_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x802A8F8C;
    }
}

loc_inl0_0x802A8F84:
{
    r3 = 1;
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl0_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_return:
{
}

loc_inl0_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r31 + 4890), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r31 + 4894));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 4892));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8042F290:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8042F2A0;
    }
}

loc_8042F294:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r31 + 4892), static_cast<uint16_t>(r0));
}

loc_8042F2A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042F0E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042F0E4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042F0E4 func_8042F0E4 preserves=true fpr_mask=0x00000000
