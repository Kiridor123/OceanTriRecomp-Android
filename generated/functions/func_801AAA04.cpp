#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126E10(CpuContext* ctx);
extern "C" uint64_t func_80126E10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012B3E4(CpuContext* ctx);
extern "C" uint64_t func_8012B3E4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801357C8(CpuContext* ctx);
extern "C" uint64_t func_801357C8_ra38_1a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80135880(CpuContext* ctx);
extern "C" uint64_t func_80135880_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803458F8(CpuContext* ctx);
extern "C" uint64_t func_803458F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801AAA04_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x801AAA04u);
    goto loc_801AAA04;

loc_801AAA04:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r28 = 0;
    r5 = MemoryInline::FlatRead8((r31 + 20));
    r4 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801AAA48:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_801AAA54;
    }
}

loc_801AAA4C:
{
    r28 = MemoryInline::FlatRead8((r31 + 54));
    goto loc_801AAEAC;
}

loc_801AAA54:
{
    r3 = r30;
    ctx->lr = 0x801AAA5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80126E10u>(&func_80126E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80126E10_B89 = func_80126E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126E10_B89);
        r4 = static_cast<uint32_t>(regargs_result_80126E10_B89 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80126E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r29 = r3;
    r3 = MemoryInline::FlatRead8((r30 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl2_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl2_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802B06E4:
{
    r3 = r0;
    goto loc_inl2_cont_802B06CC;
}

loc_inl2_return:
{
}

loc_inl2_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_801AAA70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAA98;
    }
}

loc_801AAA74:
{
}

loc_801AAA78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAB48;
    }
}

loc_801AAA7C:
{
}

loc_801AAA80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAC30;
    }
}

loc_801AAA84:
{
}

loc_801AAA88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801AAD18;
    }
}

loc_801AAA8C:
{
}

loc_801AAA90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801AADC8;
    }
}

loc_801AAA94:
{
    goto loc_801AAEAC;
}

loc_801AAA98:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801AAAA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAAB8;
    }
}

loc_801AAAA4:
{
}

loc_801AAAA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAAE8;
    }
}

loc_801AAAAC:
{
}

loc_801AAAB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAB18;
    }
}

loc_801AAAB4:
{
    goto loc_801AAEAC;
}

loc_801AAAB8:
{
    r0 = (r29 & 255);
}

loc_801AAAC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAAD0;
    }
}

loc_801AAAC4:
{
}

loc_801AAAC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAAD8;
    }
}

loc_801AAACC:
{
    goto loc_801AAAE0;
}

loc_801AAAD0:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAAD8:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAAE0:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAAE8:
{
    r0 = (r29 & 255);
}

loc_801AAAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAB00;
    }
}

loc_801AAAF4:
{
}

loc_801AAAF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAB08;
    }
}

loc_801AAAFC:
{
    goto loc_801AAB10;
}

loc_801AAB00:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAB08:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAB10:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAB18:
{
    r0 = (r29 & 255);
}

loc_801AAB20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAB30;
    }
}

loc_801AAB24:
{
}

loc_801AAB28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAB38;
    }
}

loc_801AAB2C:
{
    goto loc_801AAB40;
}

loc_801AAB30:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAB38:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAB40:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAB48:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801AAB50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAB70;
    }
}

loc_801AAB54:
{
}

loc_801AAB58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AABA0;
    }
}

loc_801AAB5C:
{
}

loc_801AAB60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AABD0;
    }
}

loc_801AAB64:
{
}

loc_801AAB68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801AAC00;
    }
}

loc_801AAB6C:
{
    goto loc_801AAEAC;
}

loc_801AAB70:
{
    r0 = (r29 & 255);
}

loc_801AAB78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAB88;
    }
}

loc_801AAB7C:
{
}

loc_801AAB80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801AAB90;
    }
}

loc_801AAB84:
{
    goto loc_801AAB98;
}

loc_801AAB88:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAB90:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAB98:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AABA0:
{
    r0 = (r29 & 255);
}

loc_801AABA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AABB8;
    }
}

loc_801AABAC:
{
}

loc_801AABB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AABC0;
    }
}

loc_801AABB4:
{
    goto loc_801AABC8;
}

loc_801AABB8:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AABC0:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AABC8:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AABD0:
{
    r0 = (r29 & 255);
}

loc_801AABD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AABE8;
    }
}

loc_801AABDC:
{
}

loc_801AABE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801AABF0;
    }
}

loc_801AABE4:
{
    goto loc_801AABF8;
}

loc_801AABE8:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AABF0:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AABF8:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAC00:
{
    r0 = (r29 & 255);
}

loc_801AAC08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAC18;
    }
}

loc_801AAC0C:
{
}

loc_801AAC10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAC20;
    }
}

loc_801AAC14:
{
    goto loc_801AAC28;
}

loc_801AAC18:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAC20:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAC28:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAC30:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801AAC38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAC58;
    }
}

loc_801AAC3C:
{
}

loc_801AAC40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAC88;
    }
}

loc_801AAC44:
{
}

loc_801AAC48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801AACB8;
    }
}

loc_801AAC4C:
{
}

loc_801AAC50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801AACE8;
    }
}

loc_801AAC54:
{
    goto loc_801AAEAC;
}

loc_801AAC58:
{
    r0 = (r29 & 255);
}

loc_801AAC60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801AAC70;
    }
}

loc_801AAC64:
{
}

loc_801AAC68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801AAC78;
    }
}

loc_801AAC6C:
{
    goto loc_801AAC80;
}

loc_801AAC70:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAC78:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAC80:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAC88:
{
    r0 = (r29 & 255);
}

loc_801AAC90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801AACA0;
    }
}

loc_801AAC94:
{
}

loc_801AAC98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801AACA8;
    }
}

loc_801AAC9C:
{
    goto loc_801AACB0;
}

loc_801AACA0:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AACA8:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AACB0:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AACB8:
{
    r0 = (r29 & 255);
}

loc_801AACC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AACD0;
    }
}

loc_801AACC4:
{
}

loc_801AACC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AACD8;
    }
}

loc_801AACCC:
{
    goto loc_801AACE0;
}

loc_801AACD0:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AACD8:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AACE0:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AACE8:
{
    r0 = (r29 & 255);
}

loc_801AACF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAD00;
    }
}

loc_801AACF4:
{
}

loc_801AACF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAD08;
    }
}

loc_801AACFC:
{
    goto loc_801AAD10;
}

loc_801AAD00:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAD08:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAD10:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAD18:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801AAD20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAD38;
    }
}

loc_801AAD24:
{
}

loc_801AAD28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAD68;
    }
}

loc_801AAD2C:
{
}

loc_801AAD30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAD98;
    }
}

loc_801AAD34:
{
    goto loc_801AAEAC;
}

loc_801AAD38:
{
    r0 = (r29 & 255);
}

loc_801AAD40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAD50;
    }
}

loc_801AAD44:
{
}

loc_801AAD48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAD58;
    }
}

loc_801AAD4C:
{
    goto loc_801AAD60;
}

loc_801AAD50:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAD58:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAD60:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAD68:
{
    r0 = (r29 & 255);
}

loc_801AAD70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAD80;
    }
}

loc_801AAD74:
{
}

loc_801AAD78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAD88;
    }
}

loc_801AAD7C:
{
    goto loc_801AAD90;
}

loc_801AAD80:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAD88:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAD90:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAD98:
{
    r0 = (r29 & 255);
}

loc_801AADA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AADB0;
    }
}

loc_801AADA4:
{
}

loc_801AADA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AADB8;
    }
}

loc_801AADAC:
{
    goto loc_801AADC0;
}

loc_801AADB0:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AADB8:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AADC0:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AADC8:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801AADD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AADF0;
    }
}

loc_801AADD4:
{
}

loc_801AADD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAE20;
    }
}

loc_801AADDC:
{
}

loc_801AADE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAE50;
    }
}

loc_801AADE4:
{
}

loc_801AADE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801AAE80;
    }
}

loc_801AADEC:
{
    goto loc_801AAEAC;
}

loc_801AADF0:
{
    r0 = (r29 & 255);
}

loc_801AADF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAE08;
    }
}

loc_801AADFC:
{
}

loc_801AAE00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801AAE10;
    }
}

loc_801AAE04:
{
    goto loc_801AAE18;
}

loc_801AAE08:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAE10:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAE18:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAE20:
{
    r0 = (r29 & 255);
}

loc_801AAE28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAE38;
    }
}

loc_801AAE2C:
{
}

loc_801AAE30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAE40;
    }
}

loc_801AAE34:
{
    goto loc_801AAE48;
}

loc_801AAE38:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAE40:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAE48:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAE50:
{
    r0 = (r29 & 255);
}

loc_801AAE58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AAE68;
    }
}

loc_801AAE5C:
{
}

loc_801AAE60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801AAE70;
    }
}

loc_801AAE64:
{
    goto loc_801AAE78;
}

loc_801AAE68:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAE70:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAE78:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAE80:
{
    r0 = (r29 & 255);
}

loc_801AAE88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AAE98;
    }
}

loc_801AAE8C:
{
}

loc_801AAE90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AAEA0;
    }
}

loc_801AAE94:
{
    goto loc_801AAEA8;
}

loc_801AAE98:
{
    r28 = 0;
    goto loc_801AAEAC;
}

loc_801AAEA0:
{
    r28 = 1;
    goto loc_801AAEAC;
}

loc_801AAEA8:
{
    r28 = 0;
}

loc_801AAEAC:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r30 + 481));
    r5 = r28;
    ctx->lr = 0x801AAEBCu;
    if constexpr (KnownRegArgsCpuCall<0x803458F8u>(&func_803458F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803458F8_430D = func_803458F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803458F8_430D);
        r4 = static_cast<uint32_t>(regargs_result_803458F8_430D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803458F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
}

loc_801AAEC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801AAF60;
    }
}

loc_801AAEC8:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801AAED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AAF04;
    }
}

loc_801AAED4:
{
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 12));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 392);
    r4 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r5 = 0;
    r6 = MemoryInline::FlatRead16((r30 + 492));
    ctx->lr = 0x801AAF00u;
    if constexpr (KnownRegArgsCpuCall<0x801357C8u>(&func_801357C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_801357C8_49DE = func_801357C8_ra38_1a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801357C8_49DE);
        r4 = static_cast<uint32_t>(regargs_result_801357C8_49DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x801357C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_801AAF48;
}

loc_801AAF04:
{
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 12));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 24));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 392);
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r6 = 0;
    r7 = MemoryInline::FlatRead16((r30 + 492));
    ctx->lr = 0x801AAF48u;
    if constexpr (KnownRegArgsCpuCall<0x80135880u>(&func_80135880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80135880_53A8 = func_80135880_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80135880_53A8);
        r4 = static_cast<uint32_t>(regargs_result_80135880_53A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80135880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_801AAF48:
{
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 444), r3);
    r0 = MemoryInline::FlatRead16((r30 + 492));
    MemoryInline::FlatWrite32((r30 + 448), r0);
    MemoryInline::FlatWrite32((r30 + 452), r3);
    goto loc_801AAF98;
}

loc_801AAF60:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20836));
    MemoryInline::FlatWriteFloat32((r30 + 400), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 396), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 392), f0.d);
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 444), r3);
    r0 = MemoryInline::FlatRead16((r30 + 492));
    MemoryInline::FlatWrite32((r30 + 448), r0);
    MemoryInline::FlatWrite32((r30 + 452), r3);
    r3 = r30;
    r4 = 5;
    r5 = 2;
    r6 = 10;
    ctx->lr = 0x801AAF98u;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012B3E4_5C24 = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_5C24);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_5C24 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
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
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
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

loc_801AAF98:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
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

extern "C" void func_801AAA04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801AAA04_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AAA04 func_801AAA04 preserves=true fpr_mask=0x00000000
