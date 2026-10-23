#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A8DB0(CpuContext* ctx);
extern "C" uint32_t func_803A8DB0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803C3AC0(CpuContext* ctx);
extern "C" uint64_t func_803C3AC0_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803C3E80(CpuContext* ctx);
extern "C" uint64_t func_803C3E80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803C41CC(CpuContext* ctx);
extern "C" uint64_t func_803C41CC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803C3AD4_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
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
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_803C3AD4;

loc_803C3AD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806D0000u;
    r31 = (r3 + 20384);
    r3 = 0;
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
    ctx->lr = 0x803C3AF8u;
    if constexpr (KnownRegArgsCpuCall<0x803C3AC0u>(&func_803C3AC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3AC0_A52 = func_803C3AC0_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_803C3AC0_A52);
        r4 = static_cast<uint32_t>(regargs_result_803C3AC0_A52 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3AC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = 255;
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_803C3B0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_803C3DC4;
    }
}

loc_803C3B10:
{
    r3 = r31;
    ctx->lr = 0x803C3B18u;
    if constexpr (KnownRegArgsCpuCall<0x803C41CCu>(&func_803C41CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C41CC_1000 = func_803C41CC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C41CC_1000);
        r4 = static_cast<uint32_t>(regargs_result_803C41CC_1000 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C41CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl3_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
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

loc_803C3B2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_803C3B3C;
    }
}

loc_803C3B30:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21880);
    ctx->lr = 0x803C3B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_172B = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_172B);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_172B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_803C3B3C:
{
    ctx->lr = 0x803C3B40u;
    if constexpr (KnownRegArgsCpuCall<0x803A8DB0u>(&func_803A8DB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803A8DB0_1ABA = func_803A8DB0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A8DB0_1ABA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803A8DB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1031));
}

loc_803C3B48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3D2C;
    }
}

loc_803C3B4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3BC0;
    }
}

loc_803C3B50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1004));
}

loc_803C3B54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3C8C;
    }
}

loc_803C3B58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3B8C;
    }
}

loc_803C3B5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_803C3B60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3C7C;
    }
}

loc_803C3B64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3B80;
    }
}

loc_803C3B68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_803C3B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3C6C;
    }
}

loc_803C3B70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3DC4;
    }
}

loc_803C3B74:
{
}

loc_803C3B78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_803C3C40;
    }
}

loc_803C3B7C:
{
    goto loc_803C3DC4;
}

loc_803C3B80:
{
}

loc_803C3B84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1000))) {
        goto loc_803C3C5C;
    }
}

loc_803C3B88:
{
    goto loc_803C3DC4;
}

loc_803C3B8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1025));
}

loc_803C3B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3DC4;
    }
}

loc_803C3B94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3BB0;
    }
}

loc_803C3B98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1013));
}

loc_803C3B9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3CCC;
    }
}

loc_803C3BA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_803C3DC4;
    }
}

loc_803C3BA4:
{
}

loc_803C3BA8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1024))) {
        goto loc_803C3CEC;
    }
}

loc_803C3BAC:
{
    goto loc_803C3DC4;
}

loc_803C3BB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1027));
}

loc_803C3BB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3D0C;
    }
}

loc_803C3BB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3DC4;
    }
}

loc_803C3BBC:
{
    goto loc_803C3CFC;
}

loc_803C3BC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1049));
}

loc_803C3BC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3D8C;
    }
}

loc_803C3BC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3C08;
    }
}

loc_803C3BCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1044));
}

loc_803C3BD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3D5C;
    }
}

loc_803C3BD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3BF0;
    }
}

loc_803C3BD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1037));
}

loc_803C3BDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3D4C;
    }
}

loc_803C3BE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3DC4;
    }
}

loc_803C3BE4:
{
}

loc_803C3BE8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1036))) {
        goto loc_803C3D3C;
    }
}

loc_803C3BEC:
{
    goto loc_803C3DC4;
}

loc_803C3BF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1047));
}

loc_803C3BF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3DC4;
    }
}

loc_803C3BF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3D9C;
    }
}

loc_803C3BFC:
{
}

loc_803C3C00:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1046))) {
        goto loc_803C3D7C;
    }
}

loc_803C3C04:
{
    goto loc_803C3D6C;
}

loc_803C3C08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2003));
}

loc_803C3C0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3C9C;
    }
}

loc_803C3C10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3C2C;
    }
}

loc_803C3C14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2001));
}

loc_803C3C18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803C3CDC;
    }
}

loc_803C3C1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803C3D1C;
    }
}

loc_803C3C20:
{
}

loc_803C3C24:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2000))) {
        goto loc_803C3CBC;
    }
}

loc_803C3C28:
{
    goto loc_803C3DC4;
}

loc_803C3C2C:
{
}

loc_803C3C30:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2007))) {
        goto loc_803C3DC4;
    }
}

loc_803C3C34:
{
}

loc_803C3C38:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2005))) {
        goto loc_803C3DAC;
    }
}

loc_803C3C3C:
{
    goto loc_803C3CAC;
}

loc_803C3C40:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22248);
    ctx->lr = 0x803C3C4Cu;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_334A = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_334A);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_334A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 20);
    r4 = (r13 + -22096);
    ctx->lr = 0x803C3C58u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_36D7 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_36D7);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_36D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3C5C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22240);
    ctx->lr = 0x803C3C68u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_3A93 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_3A93);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_3A93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3C6C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22056);
    ctx->lr = 0x803C3C78u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_3E4F = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_3E4F);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_3E4F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3C7C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22048);
    ctx->lr = 0x803C3C88u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_420B = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_420B);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_420B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3C8C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22040);
    ctx->lr = 0x803C3C98u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_45C7 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_45C7);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_45C7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3C9C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22032);
    ctx->lr = 0x803C3CA8u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_4983 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_4983);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_4983 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3CAC:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22024);
    ctx->lr = 0x803C3CB8u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_4D3F = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_4D3F);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_4D3F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3CBC:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22016);
    ctx->lr = 0x803C3CC8u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_50FB = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_50FB);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_50FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3CCC:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22008);
    ctx->lr = 0x803C3CD8u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_54B7 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_54B7);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_54B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3CDC:
{
    r3 = (r31 + 12);
    r4 = (r13 + -22000);
    ctx->lr = 0x803C3CE8u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_5873 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_5873);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_5873 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3CEC:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21992);
    ctx->lr = 0x803C3CF8u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_5C2F = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_5C2F);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_5C2F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3CFC:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21984);
    ctx->lr = 0x803C3D08u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_5FEB = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_5FEB);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_5FEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D0C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21976);
    ctx->lr = 0x803C3D18u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_63A7 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_63A7);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_63A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D1C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21968);
    ctx->lr = 0x803C3D28u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_6763 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_6763);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_6763 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D2C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21960);
    ctx->lr = 0x803C3D38u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_6B1F = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_6B1F);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_6B1F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D3C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21952);
    ctx->lr = 0x803C3D48u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_6EDB = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_6EDB);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_6EDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D4C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21944);
    ctx->lr = 0x803C3D58u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_7297 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_7297);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_7297 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D5C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21936);
    ctx->lr = 0x803C3D68u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_7653 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_7653);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_7653 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D6C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21928);
    ctx->lr = 0x803C3D78u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_7A0F = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_7A0F);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_7A0F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D7C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21920);
    ctx->lr = 0x803C3D88u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_7DCB = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_7DCB);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_7DCB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D8C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21912);
    ctx->lr = 0x803C3D98u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_8187 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_8187);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_8187 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3D9C:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21904);
    ctx->lr = 0x803C3DA8u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_8543 = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_8543);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_8543 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_803C3DC4;
}

loc_803C3DAC:
{
    r3 = (r31 + 12);
    r4 = (r13 + -21896);
    ctx->lr = 0x803C3DB8u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_88FF = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_88FF);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_88FF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r31 + 20);
    r4 = (r13 + -21888);
    ctx->lr = 0x803C3DC4u;
    if constexpr (KnownRegArgsCpuCall<0x803C3E80u>(&func_803C3E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803C3E80_8C8C = func_803C3E80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803C3E80_8C8C);
        r4 = static_cast<uint32_t>(regargs_result_803C3E80_8C8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803C3E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_803C3DC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C3AD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C3AD4_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020DB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C3AD4 func_803C3AD4 preserves=true fpr_mask=0x00000000
