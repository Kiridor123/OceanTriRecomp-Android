#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130198(CpuContext* ctx);
extern "C" uint64_t func_80130198_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80175ED8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80175ED8;

loc_80175ED8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r0 = (r4 & 255);
}

loc_80175EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80175F14;
    }
}

loc_80175F00:
{
}

loc_80175F04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80175F2C;
    }
}

loc_80175F08:
{
}

loc_80175F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80176060;
    }
}

loc_80175F10:
{
    goto loc_801760D4;
}

loc_80175F14:
{
    r3 = MemoryInline::FlatRead8((r3 + 484));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
    r3 = (r0 & 255);
    goto loc_801760D8;
}

loc_80175F2C:
{
    r31 = 0;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_5 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_5);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
}

loc_80175F48:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80175FA8;
    }
}

loc_80175F4C:
{
    r4 = 0;
    r0 = (r3 & 65535);
    ctr = r0;
}

loc_80175F5C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_80175FA8;
    }
}

loc_80175F60:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80175F68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80175F9C;
    }
}

loc_80175F6C:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_80175F74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80175F9C;
    }
}

loc_80175F78:
{
    r3 = MemoryInline::FlatRead8((r29 + 1132));
    r0 = MemoryInline::FlatRead8((r30 + 1132));
}

loc_80175F84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80175F9C;
    }
}

loc_80175F88:
{
    r0 = MemoryInline::FlatRead8((r29 + 17));
}

loc_80175F90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80175F9C;
    }
}

loc_80175F94:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80175F9C:
{
    r4 = (r4 + 1);
    r29 = (r29 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80175F60;
    }
}

loc_80175FA8:
{
    r3 = 0x806A0000u;
    r5 = (r3 + 31072);
    r4 = 0;
    r0 = 64;
    ctr = r0;
}

loc_80175FBC:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80175FC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80175FF8;
    }
}

loc_80175FC8:
{
    r0 = MemoryInline::FlatRead8((r5 + 2));
}

loc_80175FD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80175FF8;
    }
}

loc_80175FD4:
{
    r3 = MemoryInline::FlatRead8((r5 + 9));
    r0 = MemoryInline::FlatRead8((r30 + 1132));
}

loc_80175FE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80175FF8;
    }
}

loc_80175FE4:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_80175FEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80175FF8;
    }
}

loc_80175FF0:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80175FF8:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 68));
}

loc_80176004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80176038;
    }
}

loc_80176008:
{
    r0 = MemoryInline::FlatRead8((r5 + 70));
}

loc_80176010:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80176038;
    }
}

loc_80176014:
{
    r3 = MemoryInline::FlatRead8((r5 + 77));
    r0 = MemoryInline::FlatRead8((r30 + 1132));
}

loc_80176020:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80176038;
    }
}

loc_80176024:
{
    r0 = MemoryInline::FlatRead8((r5 + 76));
}

loc_8017602C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80176038;
    }
}

loc_80176030:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80176038:
{
    r4 = (r4 + 1);
    r5 = (r5 + 136);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80175FBC;
    }
}

loc_80176044:
{
    r3 = 2;
    r0 = (r31 + -2);
    r3 = (r31 | ~r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    goto loc_801760D8;
}

loc_80176060:
{
    r29 = 0;
    r3 = MemoryInline::FlatRead8((r3 + 480));
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

loc_80176074:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80176084;
    }
}

loc_80176078:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80176080:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_801760A4;
    }
}

loc_80176084:
{
    r3 = MemoryInline::FlatRead8((r30 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl3_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl3_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802B06E4:
{
    r3 = r0;
    goto loc_inl3_cont_802B06CC;
}

loc_inl3_return:
{
}

loc_inl3_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80176094:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801760A8;
    }
}

loc_80176098:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801760A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801760A8;
    }
}

loc_801760A4:
{
    r29 = 1;
}

loc_801760A8:
{
}

loc_801760AC:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801760CC;
    }
}

loc_801760B0:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x801760BCu;
    if constexpr (KnownRegArgsCpuCall<0x80130198u>(&func_80130198)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80130198_2871 = func_80130198_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80130198_2871);
        r4 = static_cast<uint32_t>(regargs_result_80130198_2871 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80130198u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801760C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801760CC;
    }
}

loc_801760C4:
{
    r3 = 1;
    goto loc_801760D8;
}

loc_801760CC:
{
    r3 = 0;
    goto loc_801760D8;
}

loc_801760D4:
{
    r3 = 0;
}

loc_801760D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80175ED8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80175ED8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80175ED8 func_80175ED8 preserves=true fpr_mask=0x00000000
