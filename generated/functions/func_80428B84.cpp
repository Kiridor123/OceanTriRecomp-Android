#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80428B84_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80428B84;

loc_80428B84:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r5 = (r4 + 308);
}

loc_80428B90:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80428F1C;
    }
}

loc_80428B94:
{
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r6 + -50);
}

loc_80428BA0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(25))) {
        goto loc_80428BB4;
    }
}

loc_80428BA4:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r3 + -2147483648);
}

loc_80428BB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_return;
    }
}

loc_80428BB4:
{
}

loc_80428BB8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(95))) {
        goto loc_80428BDC;
    }
}

loc_80428BBC:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_80428BC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11687))) {
        goto loc_80428BD4;
    }
}

loc_80428BC8:
{
    r0 = -2;
    r3 = (r4 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
}

loc_80428BD4:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428BDC:
{
    r0 = MemoryInline::FlatRead32(r5);
    r5 = 0x80030000u;
    r3 = (r5 + 51);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428BEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E8C;
    }
}

loc_80428BF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428CE0;
    }
}

loc_80428BF4:
{
    r3 = (r5 + 5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428BFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E3C;
    }
}

loc_80428C00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428C6C;
    }
}

loc_80428C04:
{
    r3 = 0x80020000u;
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428C10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E04;
    }
}

loc_80428C14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428C3C;
    }
}

loc_80428C18:
{
    r3 = 0x80000000u;
    r4 = (r3 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80428C24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E0C;
    }
}

loc_80428C28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428F1C;
    }
}

loc_80428C2C:
{
    r3 = (r3 + 2);
}

loc_80428C34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_80428DD4;
    }
}

loc_80428C38:
{
    goto loc_80428F1C;
}

loc_80428C3C:
{
    r3 = (r5 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E24;
    }
}

loc_80428C48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428C5C;
    }
}

loc_80428C4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_80428C50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E14;
    }
}

loc_80428C54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428E1C;
    }
}

loc_80428C58:
{
    goto loc_80428F1C;
}

loc_80428C5C:
{
    r3 = (r5 + 4);
}

loc_80428C64:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428E34;
    }
}

loc_80428C68:
{
    goto loc_80428E2C;
}

loc_80428C6C:
{
    r3 = (r5 + 21);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428C74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E64;
    }
}

loc_80428C78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428CAC;
    }
}

loc_80428C7C:
{
    r3 = (r5 + 18);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428C84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E4C;
    }
}

loc_80428C88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428C9C;
    }
}

loc_80428C8C:
{
    r3 = (r5 + 17);
}

loc_80428C94:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428E44;
    }
}

loc_80428C98:
{
    goto loc_80428F1C;
}

loc_80428C9C:
{
    r3 = (r5 + 20);
}

loc_80428CA4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428E5C;
    }
}

loc_80428CA8:
{
    goto loc_80428E54;
}

loc_80428CAC:
{
    r3 = (r5 + 34);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E74;
    }
}

loc_80428CB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428CCC;
    }
}

loc_80428CBC:
{
    r3 = (r5 + 33);
}

loc_80428CC4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428E6C;
    }
}

loc_80428CC8:
{
    goto loc_80428F1C;
}

loc_80428CCC:
{
    r3 = (r5 + 49);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428CD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E7C;
    }
}

loc_80428CD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428E84;
    }
}

loc_80428CDC:
{
    goto loc_80428F1C;
}

loc_80428CE0:
{
    r3 = (r5 + 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428CE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428EF4;
    }
}

loc_80428CEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428D64;
    }
}

loc_80428CF0:
{
    r3 = (r5 + 58);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428CF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428EC4;
    }
}

loc_80428CFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428D34;
    }
}

loc_80428D00:
{
    r3 = (r5 + 55);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428D08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428EAC;
    }
}

loc_80428D0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428D24;
    }
}

loc_80428D10:
{
    r3 = (r5 + 53);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428D18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E9C;
    }
}

loc_80428D1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428EA4;
    }
}

loc_80428D20:
{
    goto loc_80428E94;
}

loc_80428D24:
{
    r3 = (r5 + 57);
}

loc_80428D2C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428EBC;
    }
}

loc_80428D30:
{
    goto loc_80428EB4;
}

loc_80428D34:
{
    r3 = (r5 + 61);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428D3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428EDC;
    }
}

loc_80428D40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428D54;
    }
}

loc_80428D44:
{
    r3 = (r5 + 60);
}

loc_80428D4C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428ED4;
    }
}

loc_80428D50:
{
    goto loc_80428ECC;
}

loc_80428D54:
{
    r3 = (r5 + 63);
}

loc_80428D5C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428EEC;
    }
}

loc_80428D60:
{
    goto loc_80428EE4;
}

loc_80428D64:
{
    r4 = 0x80050000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80428D6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428E0C;
    }
}

loc_80428D70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428DA4;
    }
}

loc_80428D74:
{
    r3 = (r5 + 67);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428D7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428F0C;
    }
}

loc_80428D80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428D94;
    }
}

loc_80428D84:
{
    r3 = (r5 + 66);
}

loc_80428D8C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428F04;
    }
}

loc_80428D90:
{
    goto loc_80428EFC;
}

loc_80428D94:
{
    r3 = (r5 + 69);
}

loc_80428D9C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428F1C;
    }
}

loc_80428DA0:
{
    goto loc_80428F14;
}

loc_80428DA4:
{
    r3 = (r4 + 18);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80428DAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80428DDC;
    }
}

loc_80428DB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80428DC4;
    }
}

loc_80428DB4:
{
    r3 = (r4 + 17);
}

loc_80428DBC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80428DEC;
    }
}

loc_80428DC0:
{
    goto loc_80428F1C;
}

loc_80428DC4:
{
    r3 = (r4 + 55);
}

loc_80428DCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_80428DFC;
    }
}

loc_80428DD0:
{
    goto loc_80428F1C;
}

loc_80428DD4:
{
    r3 = 11620;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428DDC:
{
}

loc_80428DE0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(112))) {
        goto loc_80428F1C;
    }
}

loc_80428DE4:
{
    r3 = 11621;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428DEC:
{
}

loc_80428DF0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(112))) {
        goto loc_80428F1C;
    }
}

loc_80428DF4:
{
    r3 = 11622;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428DFC:
{
    r3 = 11623;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E04:
{
    r3 = 11624;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E0C:
{
    r3 = 11625;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E14:
{
    r3 = 11630;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E1C:
{
    r3 = 11631;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E24:
{
    r3 = 11632;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E2C:
{
    r3 = 11633;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E34:
{
    r3 = 11634;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E3C:
{
    r3 = 11635;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E44:
{
    r3 = 11640;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E4C:
{
    r3 = 11641;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E54:
{
    r3 = 11642;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E5C:
{
    r3 = 11643;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E64:
{
    r3 = 11644;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E6C:
{
    r3 = 11650;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E74:
{
    r3 = 11651;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E7C:
{
    r3 = 11660;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E84:
{
    r3 = 11661;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E8C:
{
    r3 = 11662;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E94:
{
    r3 = 11663;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428E9C:
{
    r3 = 11664;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EA4:
{
    r3 = 11665;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EAC:
{
    r3 = 11666;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EB4:
{
    r3 = 11667;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EBC:
{
    r3 = 11668;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EC4:
{
    r3 = 11669;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428ECC:
{
    r3 = 11670;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428ED4:
{
    r3 = 11671;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EDC:
{
    r3 = 11672;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EE4:
{
    r3 = 11673;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EEC:
{
    r3 = 11674;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EF4:
{
    r3 = 11675;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428EFC:
{
    r3 = 11676;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428F04:
{
    r3 = 11677;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428F0C:
{
    r3 = 11678;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428F14:
{
    r3 = 11679;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80428F1C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80428B84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80428B84_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80428B84 func_80428B84 preserves=true fpr_mask=0x00000000
