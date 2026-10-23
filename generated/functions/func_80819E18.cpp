#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80819E18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80819E18;

loc_80819E18:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r5 = (r3 & 49155);
}

loc_80819E34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(16386));
}

loc_80819E38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80819F44;
    }
}

loc_80819E3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80819E68;
    }
}

loc_80819E40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_80819E44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80819EFC;
    }
}

loc_80819E48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80819E5C;
    }
}

loc_80819E4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_80819E50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80819E9C;
    }
}

loc_80819E54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80819EB4;
    }
}

loc_80819E58:
{
    goto loc_80819F8C;
}

loc_80819E5C:
{
}

loc_80819E60:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(16384))) {
        goto loc_80819ECC;
    }
}

loc_80819E64:
{
    goto loc_80819F8C;
}

loc_80819E68:
{
    r3 = 65536;
    r0 = (r3 + -32767);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80819E74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80819F20;
    }
}

loc_80819E78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80819E8C;
    }
}

loc_80819E7C:
{
    r0 = (r3 + -32768);
}

loc_80819E84:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80819EE4;
    }
}

loc_80819E88:
{
    goto loc_80819F8C;
}

loc_80819E8C:
{
    r0 = (r3 + -16384);
}

loc_80819E94:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_80819F68;
    }
}

loc_80819E98:
{
    goto loc_80819F8C;
}

loc_80819E9C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17452));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    goto loc_80819F94;
}

loc_80819EB4:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17452));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    goto loc_80819F94;
}

loc_80819ECC:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17452));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    goto loc_80819F94;
}

loc_80819EE4:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17452));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    goto loc_80819F94;
}

loc_80819EFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 17456));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    goto loc_80819F94;
}

loc_80819F20:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 17456));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    goto loc_80819F94;
}

loc_80819F44:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 17456));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    goto loc_80819F94;
}

loc_80819F68:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 17456));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    goto loc_80819F94;
}

loc_80819F8C:
{
    r3 = 0;
    goto loc_80819FBC;
}

loc_80819F94:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    r31 = 0x80840000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 17440));
    // inline leaf 0x80819D18 (10 guest instruction(s))
}

loc_inl0_0x80819D18:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl0_0x80819D1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x80819D24;
    }
}

loc_inl0_0x80819D20:
{
    goto loc_inl0_0x80819D38;
}

loc_inl0_0x80819D24:
{
    f2.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl0_0x80819D2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x80819D34;
    }
}

loc_inl0_0x80819D30:
{
    goto loc_inl0_0x80819D38;
}

loc_inl0_0x80819D34:
{
    f2.d = f1.d;
}

loc_inl0_0x80819D38:
{
    f1.d = f2.d;
}

loc_inl0_cont_80819D18:
{
    // end of inlined leaf 0x80819D18
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 17440));
    // inline leaf 0x80819D18 (10 guest instruction(s))
}

loc_inl1_0x80819D18:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl1_0x80819D1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl1_0x80819D24;
    }
}

loc_inl1_0x80819D20:
{
    goto loc_inl1_0x80819D38;
}

loc_inl1_0x80819D24:
{
    f2.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl1_0x80819D2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x80819D34;
    }
}

loc_inl1_0x80819D30:
{
    goto loc_inl1_0x80819D38;
}

loc_inl1_0x80819D34:
{
    f2.d = f1.d;
}

loc_inl1_0x80819D38:
{
    f1.d = f2.d;
}

loc_inl1_cont_80819D18:
{
    // end of inlined leaf 0x80819D18
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    r3 = 1;
}

loc_80819FBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000002B gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80819E18 func_80819E18 preserves=true fpr_mask=0x00000000
