#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AAFEC(CpuContext* ctx);
extern "C" uint64_t func_803AAFEC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800FD92C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_800FD92C;

loc_800FD92C:
{
}

loc_800FD930:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(12))) {
        goto loc_800FDA88;
    }
}

loc_800FD934:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -13584);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FD94Cu:
        goto loc_800FD94C;
        break;
    case 0x800FD984u:
        goto loc_800FD984;
        break;
    case 0x800FD99Cu:
        goto loc_800FD99C;
        break;
    case 0x800FD9B0u:
        goto loc_800FD9B0;
        break;
    case 0x800FD9C4u:
        goto loc_800FD9C4;
        break;
    case 0x800FD9D8u:
        goto loc_800FD9D8;
        break;
    case 0x800FD9ECu:
        goto loc_800FD9EC;
        break;
    case 0x800FDA00u:
        goto loc_800FDA00;
        break;
    case 0x800FDA1Cu:
        goto loc_800FDA1C;
        break;
    case 0x800FDA30u:
        goto loc_800FDA30;
        break;
    case 0x800FDA44u:
        goto loc_800FDA44;
        break;
    case 0x800FDA58u:
        goto loc_800FDA58;
        break;
    case 0x800FDA6Cu:
        goto loc_800FDA6C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FD94C:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    ctx->lr = 0x800FD954u;
    if constexpr (KnownRegArgsCpuCall<0x803AAFECu>(&func_803AAFEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAFEC_D43 = func_803AAFEC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAFEC_D43);
        r4 = static_cast<uint32_t>(regargs_result_803AAFEC_D43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAFECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800FD95C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800FD96C;
    }
}

loc_800FD960:
{
    r3 = 62;
    r4 = 7;
    goto loc_800FD974;
}

loc_800FD96C:
{
    r3 = 60;
    r4 = 9;
}

loc_800FD974:
{
    r5 = 10;
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FD984:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 112;
    r4 = 18;
    r5 = 15;
    goto loc_800FE8E8;
}

loc_800FD99C:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 69;
    r4 = 6;
    r5 = 11;
    goto loc_800FE8E8;
}

loc_800FD9B0:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 92;
    r4 = 5;
    r5 = 13;
    goto loc_800FE8E8;
}

loc_800FD9C4:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 359;
    r4 = 7;
    r5 = 42;
    goto loc_800FE8E8;
}

loc_800FD9D8:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 130;
    r4 = 2;
    r5 = 16;
    goto loc_800FE8E8;
}

loc_800FD9EC:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 370;
    r4 = 6;
    r5 = 44;
    goto loc_800FE8E8;
}

loc_800FDA00:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 520;
    r4 = 5;
    r5 = 53;
    MemoryInline::FlatWrite8((r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDA1C:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 348;
    r4 = 11;
    r5 = 41;
    goto loc_800FE8E8;
}

loc_800FDA30:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 75;
    r4 = 16;
    r5 = 12;
    goto loc_800FE8E8;
}

loc_800FDA44:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 100;
    r4 = 3;
    r5 = 14;
    goto loc_800FE8E8;
}

loc_800FDA58:
{
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r31));
    r3 = 389;
    r4 = 22;
    r5 = 45;
    goto loc_800FE8E8;
}

loc_800FDA6C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = 135;
    r4 = 17;
    r5 = 17;
    MemoryInline::FlatWrite8((r29 + 2260), static_cast<uint8_t>(r0));
    goto loc_800FE8E8;
}

loc_800FDA88:
{
    r3 = r30;
    ctx->lr = 0x800FDA90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F88D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_800FE934;
}

loc_800FE8E8:
{
    MemoryInline::FlatWrite32(r29, r4);
    MemoryInline::FlatWrite32((r29 + 208), r3);
    MemoryInline::FlatWrite32((r29 + 212), r5);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 124), r0);
    MemoryInline::FlatWrite32((r29 + 2256), r0);
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r28));
    r3 = r30;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80100000u;
    r0 = (r3 + -5812);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + -5728);
    MemoryInline::FlatWrite32((r30 + 52), r0);
}

loc_800FE934:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800FD92C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FD92C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xF0003FFF gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FD92C func_800FD92C preserves=true fpr_mask=0x00000000
