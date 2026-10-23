#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80129AD4(CpuContext* ctx);
extern "C" uint64_t func_80129AD4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80129E1C(CpuContext* ctx);
extern "C" uint64_t func_80129E1C_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012A078(CpuContext* ctx);
extern "C" uint64_t func_8012A078_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80182140_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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

    goto loc_80182140;

loc_80182140:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r29 = r3;
    r0 = (r3 & 255);
}

loc_80182178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8018218C;
    }
}

loc_8018217C:
{
}

loc_80182180:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8018218C;
    }
}

loc_80182184:
{
    r3 = 0;
    goto loc_80182364;
}

loc_8018218C:
{
    r28 = 0;
    r0 = (r3 & 255);
}

loc_80182198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801821A8;
    }
}

loc_8018219C:
{
}

loc_801821A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801821B0;
    }
}

loc_801821A4:
{
    goto loc_801821B8;
}

loc_801821A8:
{
    r4 = 8;
    goto loc_801821BC;
}

loc_801821B0:
{
    r4 = 6;
    goto loc_801821BC;
}

loc_801821B8:
{
    r4 = 255;
}

loc_801821BC:
{
}

loc_801821C0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_801821F4;
    }
}

loc_801821C4:
{
    r3 = r30;
    ctx->lr = 0x801821CCu;
    if constexpr (KnownRegArgsCpuCall<0x80129E1Cu>(&func_80129E1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80129E1C_D97 = func_80129E1C_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80129E1C_D97);
        r4 = static_cast<uint32_t>(regargs_result_80129E1C_D97 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80129E1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 255);
}

loc_801821D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801821E4;
    }
}

loc_801821D8:
{
}

loc_801821DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801821EC;
    }
}

loc_801821E0:
{
    goto loc_801821F4;
}

loc_801821E4:
{
    r28 = 1;
    goto loc_801821F4;
}

loc_801821EC:
{
    r3 = 1;
    goto loc_80182364;
}

loc_801821F4:
{
}

loc_801821F8:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80182334;
    }
}

loc_801821FC:
{
    r0 = MemoryInline::FlatRead8((r30 + 508));
}

loc_80182204:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8018221C;
    }
}

loc_80182208:
{
    r0 = MemoryInline::FlatRead8((r30 + 510));
}

loc_80182210:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8018221C;
    }
}

loc_80182214:
{
    r3 = 1;
    goto loc_80182364;
}

loc_8018221C:
{
    r3 = MemoryInline::FlatRead16((r30 + 1106));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 1104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80182228:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80182238;
    }
}

loc_8018222C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1085));
}

loc_80182234:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80182334;
    }
}

loc_80182238:
{
    r3 = r30;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80182244:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801822CC;
    }
}

loc_80182248:
{
    r0 = MemoryInline::FlatRead8((r30 + 815));
}

loc_80182250:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801822CC;
    }
}

loc_80182254:
{
    r0 = (r29 & 255);
}

loc_8018225C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8018226C;
    }
}

loc_80182260:
{
}

loc_80182264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80182298;
    }
}

loc_80182268:
{
    goto loc_80182334;
}

loc_8018226C:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80182274:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80182334;
    }
}

loc_80182278:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 508), static_cast<uint8_t>(r0));
    r0 = 8;
    MemoryInline::FlatWrite8((r30 + 510), static_cast<uint8_t>(r0));
    r0 = 12;
    MemoryInline::FlatWrite8((r30 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80182364;
}

loc_80182298:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801822A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801822AC;
    }
}

loc_801822A4:
{
}

loc_801822A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80182334;
    }
}

loc_801822AC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 508), static_cast<uint8_t>(r0));
    r0 = 8;
    MemoryInline::FlatWrite8((r30 + 510), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80182364;
}

loc_801822CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 816));
}

loc_801822D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80182334;
    }
}

loc_801822D8:
{
    r0 = (r29 & 255);
}

loc_801822E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801822F0;
    }
}

loc_801822E4:
{
}

loc_801822E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801822F8;
    }
}

loc_801822EC:
{
    goto loc_80182300;
}

loc_801822F0:
{
    r5 = 8;
    goto loc_80182304;
}

loc_801822F8:
{
    r5 = 3;
    goto loc_80182304;
}

loc_80182300:
{
    r5 = 255;
}

loc_80182304:
{
    r3 = r30;
    r4 = 23;
    r6 = (r31 & 65535);
    r7 = 0x805B0000u;
    r7 = (r7 + -25396);
    r8 = 0x805B0000u;
    r8 = (r8 + -25384);
    ctx->lr = 0x80182324u;
    if constexpr (KnownRegArgsCpuCall<0x8012A078u>(&func_8012A078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8012A078_2470 = func_8012A078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012A078_2470);
        r4 = static_cast<uint32_t>(regargs_result_8012A078_2470 >> 32);
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8012A078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80182328:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80182334;
    }
}

loc_8018232C:
{
    r3 = 1;
    goto loc_80182364;
}

loc_80182334:
{
    r3 = r30;
    r4 = (r31 & 65535);
    ctx->lr = 0x80182340u;
    if constexpr (KnownRegArgsCpuCall<0x80129AD4u>(&func_80129AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80129AD4_292F = func_80129AD4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80129AD4_292F);
        r4 = static_cast<uint32_t>(regargs_result_80129AD4_292F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80129AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80182344:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80182350;
    }
}

loc_80182348:
{
    r3 = 1;
    goto loc_80182364;
}

loc_80182350:
{
    r3 = r30;
    // inline leaf 0x8012A268 (20 guest instruction(s))
}

loc_inl2_0x8012A268:
{
    r0 = MemoryInline::FlatRead16((r3 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl2_0x8012A270:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl2_0x8012A290;
    }
}

loc_inl2_0x8012A274:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
}

loc_inl2_0x8012A27C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl2_0x8012A2B0;
    }
}

loc_inl2_0x8012A280:
{
    r4 = MemoryInline::FlatRead16((r3 + 1106));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 1102));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl2_0x8012A28C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_inl2_0x8012A2B0;
    }
}

loc_inl2_0x8012A290:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 508), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_inl2_cont_8012A268;
}

loc_inl2_0x8012A2B0:
{
    r3 = 0;
}

loc_inl2_cont_8012A268:
{
    // end of inlined leaf 0x8012A268
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
}

loc_80182364:
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
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80182140(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80182140_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80182140 func_80182140 preserves=true fpr_mask=0x00000000
