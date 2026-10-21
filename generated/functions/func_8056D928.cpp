#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052A270(CpuContext* ctx);
extern "C" uint64_t func_8052A270_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8056D928_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8056D928u);
    goto loc_8056D928;

loc_8056D928:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r7 = MemoryInline::FlatRead8((r3 + 6));
}

loc_8056D944:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(1))) {
        goto loc_8056D950;
    }
}

loc_8056D948:
{
    r3 = 0;
    goto loc_8056D9EC;
}

loc_8056D950:
{
    r8 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r8 + 52));
    r6 = MemoryInline::FlatRead32((r8 + 60));
    r0 = MemoryInline::FlatRead32((r8 + 56));
    r5 = (r5 & ~r6);
    r0 = (r0 & r6);
    r5 = (r5 | r0);
    r0 = (r5 & 13);
}

loc_8056D970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D988;
    }
}

loc_8056D974:
{
    r0 = (r5 & 5);
}

loc_8056D978:
{
}

loc_8056D97C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_8056D988;
    }
}

loc_8056D980:
{
    r3 = 0;
    goto loc_8056D9EC;
}

loc_8056D988:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8056D990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056D9CC;
    }
}

loc_8056D994:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056D9A4;
    }
}

loc_8056D998:
{
}

loc_8056D99C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8056D9AC;
    }
}

loc_8056D9A0:
{
    goto loc_8056D9E8;
}

loc_8056D9A4:
{
}

loc_8056D9A8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_8056D9E8;
    }
}

loc_8056D9AC:
{
    r0 = (r7 * 108);
    r3 = r4;
    r4 = r5;
    r5 = (r8 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 64));
    if constexpr (KnownRegArgsCpuCall<0x8052A270u>(&func_8052A270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8052A270_B92 = func_8052A270_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8052A270_B92);
        r4 = static_cast<uint32_t>(regargs_result_8052A270_B92 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052A270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r3));
    goto loc_8056D9E8;
}

loc_8056D9CC:
{
    r0 = (r7 * 108);
    r3 = r4;
    r4 = r5;
    r5 = (r8 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 64));
    if constexpr (KnownRegArgsCpuCall<0x8052A270u>(&func_8052A270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8052A270_10BD = func_8052A270_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8052A270_10BD);
        r4 = static_cast<uint32_t>(regargs_result_8052A270_10BD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052A270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r3));
}

loc_8056D9E8:
{
    r3 = MemoryInline::FlatRead16((r31 + 8));
}

loc_8056D9EC:
{
}

loc_8056D9F0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(61744))) {
        goto loc_8056DA0C;
    }
}

loc_8056D9F4:
{
}

loc_8056D9F8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(61753))) {
        goto loc_8056DA0C;
    }
}

loc_8056D9FC:
{
    r3 = (r3 + -65536);
    r0 = (r3 + 3840);
    r3 = (r0 & 65535);
    goto loc_8056DA58;
}

loc_8056DA0C:
{
}

loc_8056DA10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(61709))) {
        goto loc_8056DA20;
    }
}

loc_8056DA14:
{
    r3 = 65536;
    r3 = (r3 + -3635);
    goto loc_8056DA58;
}

loc_8056DA20:
{
}

loc_8056DA24:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(61696))) {
        goto loc_8056DA40;
    }
}

loc_8056DA28:
{
}

loc_8056DA2C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(61759))) {
        goto loc_8056DA40;
    }
}

loc_8056DA30:
{
    r3 = (r3 + -65536);
    r0 = (r3 + 3840);
    r3 = (r0 & 65535);
    goto loc_8056DA58;
}

loc_8056DA40:
{
}

loc_8056DA44:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(61760))) {
        goto loc_8056DA58;
    }
}

loc_8056DA48:
{
}

loc_8056DA4C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(61823))) {
        goto loc_8056DA58;
    }
}

loc_8056DA50:
{
    r0 = (r3 + 64);
    r3 = (r0 & 65535);
}

loc_8056DA58:
{
    r4 = (r3 & 61440);
    r0 = (r4 + 0);
}

loc_8056DA64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(61440))) {
        goto loc_8056DA70;
    }
}

loc_8056DA68:
{
    r3 = 0;
    goto loc_8056DA90;
}

loc_8056DA70:
{
    r0 = (r3 & 65535);
}

loc_8056DA78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(61166))) {
        goto loc_8056DA84;
    }
}

loc_8056DA7C:
{
    r3 = 0;
    goto loc_8056DA90;
}

loc_8056DA84:
{
}

loc_8056DA88:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(32))) {
        goto loc_8056DA90;
    }
}

loc_8056DA8C:
{
    r3 = 0;
}

loc_8056DA90:
{
    r6 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_8056DA9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056DAA4;
    }
}

loc_8056DAA0:
{
    goto loc_8056DAE8;
}

loc_8056DAA4:
{
    r0 = MemoryInline::FlatRead32((r6 + 16));
}

loc_8056DAAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056DAB4;
    }
}

loc_8056DAB0:
{
    goto loc_8056DAE8;
}

loc_8056DAB4:
{
    r5 = (r3 & 65535);
    r7 = 0;
    ctr = r0;
}

loc_8056DAC4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_8056DAE4;
    }
}

loc_8056DAC8:
{
    r4 = MemoryInline::FlatRead32((r6 + 12));
    r4_addr_2 = (r4 + r7);
    r0 = MemoryInline::FlatRead16(r4_addr_2);
}

loc_8056DAD4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056DADC;
    }
}

loc_8056DAD8:
{
    goto loc_8056DAE8;
}

loc_8056DADC:
{
    r7 = (r7 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8056DAC8;
    }
}

loc_8056DAE4:
{
    r3 = 0;
}

loc_8056DAE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056D928(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056D928_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056D928 func_8056D928 preserves=true fpr_mask=0x00000000
