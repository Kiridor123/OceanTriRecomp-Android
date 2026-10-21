#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80273218(CpuContext* ctx);
extern "C" uint64_t func_80273218_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027AE8C(CpuContext* ctx);
extern "C" uint64_t func_8027AE8C_ra18_e_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_8027D9CC(CpuContext* ctx);
extern "C" uint64_t func_8027D9CC_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802D7868(CpuContext* ctx);
extern "C" uint64_t func_802D7868_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802617D4_ra38_1ee_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x802617D4u);
    goto loc_802617D4;

loc_802617D4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r25 = r8;
    r31 = r9;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r24 = 255;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r24));
    r0 = MemoryInline::FlatRead8((r26 + 777));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r26 + 777), static_cast<uint8_t>(r0));
    r3 = (r25 & 65535);
    r0 = (r3 & 128);
}

loc_80261830:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026183C;
    }
}

loc_80261834:
{
    r3 = 0;
    goto loc_802621FC;
}

loc_8026183C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r25 = (r26 + r0);
    r3 = r26;
    r4 = MemoryInline::FlatRead16((r25 + 632));
    ctx->lr = 0x80261850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8027C26Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80261854:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80261868;
    }
}

loc_80261858:
{
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r24));
    r3 = 0;
    goto loc_802621FC;
}

loc_80261868:
{
    r0 = MemoryInline::FlatRead16((r25 + 632));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(265));
}

loc_80261870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261EF0;
    }
}

loc_80261874:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802619FC;
    }
}

loc_80261878:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(95));
}

loc_8026187C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802620B4;
    }
}

loc_80261880:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261944;
    }
}

loc_80261884:
{
}

loc_80261888:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(37))) {
        goto loc_802618EC;
    }
}

loc_8026188C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80261890:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261E6C;
    }
}

loc_80261894:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802618C0;
    }
}

loc_80261898:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8026189C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261DF8;
    }
}

loc_802618A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802618B4;
    }
}

loc_802618A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_802618A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261C60;
    }
}

loc_802618AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261D60;
    }
}

loc_802618B0:
{
    goto loc_802621DC;
}

loc_802618B4:
{
}

loc_802618B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_80261BC4;
    }
}

loc_802618BC:
{
    goto loc_80261E28;
}

loc_802618C0:
{
}

loc_802618C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(29))) {
        goto loc_802618DC;
    }
}

loc_802618C8:
{
}

loc_802618CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(26))) {
        goto loc_80261EC4;
    }
}

loc_802618D0:
{
}

loc_802618D4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(13))) {
        goto loc_80261E6C;
    }
}

loc_802618D8:
{
    goto loc_80261BC4;
}

loc_802618DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(33));
}

loc_802618E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261BC4;
    }
}

loc_802618E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261F6C;
    }
}

loc_802618E8:
{
    goto loc_80261CF0;
}

loc_802618EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(48));
}

loc_802618F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261DBC;
    }
}

loc_802618F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261920;
    }
}

loc_802618F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(43));
}

loc_802618FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261D9C;
    }
}

loc_80261900:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261914;
    }
}

loc_80261904:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(40));
}

loc_80261908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261EF0;
    }
}

loc_8026190C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802621DC;
    }
}

loc_80261910:
{
    goto loc_80261FEC;
}

loc_80261914:
{
}

loc_80261918:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(47))) {
        goto loc_80261EF0;
    }
}

loc_8026191C:
{
    goto loc_80261E6C;
}

loc_80261920:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(51));
}

loc_80261924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261E6C;
    }
}

loc_80261928:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261938;
    }
}

loc_8026192C:
{
}

loc_80261930:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(50))) {
        goto loc_80261BC4;
    }
}

loc_80261934:
{
    goto loc_80261E28;
}

loc_80261938:
{
}

loc_8026193C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(53))) {
        goto loc_802621DC;
    }
}

loc_80261940:
{
    goto loc_80261D60;
}

loc_80261944:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(145));
}

loc_80261948:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261E6C;
    }
}

loc_8026194C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802619A0;
    }
}

loc_80261950:
{
}

loc_80261954:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(125))) {
        goto loc_80261980;
    }
}

loc_80261958:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(116));
}

loc_8026195C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261E6C;
    }
}

loc_80261960:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261974;
    }
}

loc_80261964:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(98));
}

loc_80261968:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261DBC;
    }
}

loc_8026196C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802621DC;
    }
}

loc_80261970:
{
    goto loc_80261BC4;
}

loc_80261974:
{
}

loc_80261978:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(123))) {
        goto loc_80261E6C;
    }
}

loc_8026197C:
{
    goto loc_802621DC;
}

loc_80261980:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(138));
}

loc_80261984:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261E6C;
    }
}

loc_80261988:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802621DC;
    }
}

loc_8026198C:
{
}

loc_80261990:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(136))) {
        goto loc_802621DC;
    }
}

loc_80261994:
{
}

loc_80261998:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(134))) {
        goto loc_80261E6C;
    }
}

loc_8026199C:
{
    goto loc_802621DC;
}

loc_802619A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(207));
}

loc_802619A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261DBC;
    }
}

loc_802619A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802619D8;
    }
}

loc_802619AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(194));
}

loc_802619B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80262104;
    }
}

loc_802619B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802619CC;
    }
}

loc_802619B8:
{
}

loc_802619BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(168))) {
        goto loc_802621DC;
    }
}

loc_802619C0:
{
}

loc_802619C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(166))) {
        goto loc_80261EC4;
    }
}

loc_802619C8:
{
    goto loc_802621DC;
}

loc_802619CC:
{
}

loc_802619D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(202))) {
        goto loc_8026204C;
    }
}

loc_802619D4:
{
    goto loc_802621DC;
}

loc_802619D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(214));
}

loc_802619DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261EC4;
    }
}

loc_802619E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802619F0;
    }
}

loc_802619E4:
{
}

loc_802619E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(209))) {
        goto loc_802621DC;
    }
}

loc_802619EC:
{
    goto loc_80261EC4;
}

loc_802619F0:
{
}

loc_802619F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(264))) {
        goto loc_80261C60;
    }
}

loc_802619F8:
{
    goto loc_802621DC;
}

loc_802619FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(374));
}

loc_80261A00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261E6C;
    }
}

loc_80261A04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261ABC;
    }
}

loc_80261A08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(352));
}

loc_80261A0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802621DC;
    }
}

loc_80261A10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261A68;
    }
}

loc_80261A14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(334));
}

loc_80261A18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261E6C;
    }
}

loc_80261A1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261A40;
    }
}

loc_80261A20:
{
}

loc_80261A24:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(331))) {
        goto loc_80261A34;
    }
}

loc_80261A28:
{
}

loc_80261A2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(273))) {
        goto loc_80261E6C;
    }
}

loc_80261A30:
{
    goto loc_802621DC;
}

loc_80261A34:
{
}

loc_80261A38:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(333))) {
        goto loc_802621DC;
    }
}

loc_80261A3C:
{
    goto loc_80261E6C;
}

loc_80261A40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(347));
}

loc_80261A44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261B9C;
    }
}

loc_80261A48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261A5C;
    }
}

loc_80261A4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(344));
}

loc_80261A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261E6C;
    }
}

loc_80261A54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261C2C;
    }
}

loc_80261A58:
{
    goto loc_802621DC;
}

loc_80261A5C:
{
}

loc_80261A60:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(351))) {
        goto loc_8026204C;
    }
}

loc_80261A64:
{
    goto loc_802621DC;
}

loc_80261A68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(361));
}

loc_80261A6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261B74;
    }
}

loc_80261A70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261A98;
    }
}

loc_80261A74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(355));
}

loc_80261A78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8026204C;
    }
}

loc_80261A7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261A8C;
    }
}

loc_80261A80:
{
}

loc_80261A84:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(354))) {
        goto loc_802621DC;
    }
}

loc_80261A88:
{
    goto loc_8026204C;
}

loc_80261A8C:
{
}

loc_80261A90:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(360))) {
        goto loc_80261E6C;
    }
}

loc_80261A94:
{
    goto loc_802621DC;
}

loc_80261A98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(367));
}

loc_80261A9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802621DC;
    }
}

loc_80261AA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261AB0;
    }
}

loc_80261AA4:
{
}

loc_80261AA8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(366))) {
        goto loc_80261BF8;
    }
}

loc_80261AAC:
{
    goto loc_80261B88;
}

loc_80261AB0:
{
}

loc_80261AB4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(369))) {
        goto loc_802621DC;
    }
}

loc_80261AB8:
{
    goto loc_80261E6C;
}

loc_80261ABC:
{
}

loc_80261AC0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(395))) {
        goto loc_80261B1C;
    }
}

loc_80261AC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(383));
}

loc_80261AC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261D40;
    }
}

loc_80261ACC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261AF8;
    }
}

loc_80261AD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(379));
}

loc_80261AD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802621DC;
    }
}

loc_80261AD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261AEC;
    }
}

loc_80261ADC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(376));
}

loc_80261AE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802621DC;
    }
}

loc_80261AE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261E6C;
    }
}

loc_80261AE8:
{
    goto loc_80261E98;
}

loc_80261AEC:
{
}

loc_80261AF0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(381))) {
        goto loc_802621DC;
    }
}

loc_80261AF4:
{
    goto loc_8026212C;
}

loc_80261AF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(388));
}

loc_80261AFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80262104;
    }
}

loc_80261B00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261B10;
    }
}

loc_80261B04:
{
}

loc_80261B08:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(385))) {
        goto loc_802621DC;
    }
}

loc_80261B0C:
{
    goto loc_8026212C;
}

loc_80261B10:
{
}

loc_80261B14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(391))) {
        goto loc_80261E6C;
    }
}

loc_80261B18:
{
    goto loc_8026204C;
}

loc_80261B1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(567));
}

loc_80261B20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261C60;
    }
}

loc_80261B24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261B48;
    }
}

loc_80261B28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(438));
}

loc_80261B2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80261F24;
    }
}

loc_80261B30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802621DC;
    }
}

loc_80261B34:
{
}

loc_80261B38:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(400))) {
        goto loc_802621DC;
    }
}

loc_80261B3C:
{
}

loc_80261B40:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(398))) {
        goto loc_80261E6C;
    }
}

loc_80261B44:
{
    goto loc_802621DC;
}

loc_80261B48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(583));
}

loc_80261B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80262134;
    }
}

loc_80261B50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80261B60;
    }
}

loc_80261B54:
{
}

loc_80261B58:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(582))) {
        goto loc_80261D60;
    }
}

loc_80261B5C:
{
    goto loc_802621DC;
}

loc_80261B60:
{
}

loc_80261B64:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(602))) {
        goto loc_802621DC;
    }
}

loc_80261B68:
{
}

loc_80261B6C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(600))) {
        goto loc_80261C60;
    }
}

loc_80261B70:
{
    goto loc_802621DC;
}

loc_80261B74:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 135;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261B88:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 137;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261B9C:
{
    r0 = MemoryInline::FlatRead8((r26 + 10));
}

loc_80261BA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_80261BC4;
    }
}

loc_80261BA8:
{
    r0 = 7;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261BC4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261BD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261BE4;
    }
}

loc_80261BD8:
{
    r0 = 17;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261BE4:
{
    r0 = 108;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = 140;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261BF8:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261C08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261C18;
    }
}

loc_80261C0C:
{
    r0 = 19;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261C18:
{
    r0 = 110;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = 12;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261C2C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261C3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261C4C;
    }
}

loc_80261C40:
{
    r0 = 18;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261C4C:
{
    r0 = 109;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = 140;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261C60:
{
    r3 = r26;
    // inline leaf 0x80278044 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x80278044
}

loc_80261C6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802621E8;
    }
}

loc_80261C70:
{
    r0 = 12;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80261C98;
    }
}

loc_80261C84:
{
}

loc_80261C88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80261CAC;
    }
}

loc_80261C8C:
{
}

loc_80261C90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80261CC0;
    }
}

loc_80261C94:
{
    goto loc_802621E8;
}

loc_80261C98:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 40;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261CAC:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 155;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261CC0:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 152;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r25 + 632));
    r0 = (r3 + -600);
}

loc_80261CDC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802621E8;
    }
}

loc_80261CE0:
{
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 | 128);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261CF0:
{
    r3 = r26;
    // inline leaf 0x8027850C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 781));
    r0 = (r3 + -3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8027850C
}

loc_80261CFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802621E8;
    }
}

loc_80261D00:
{
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261D08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80261D18;
    }
}

loc_80261D0C:
{
}

loc_80261D10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80261D2C;
    }
}

loc_80261D14:
{
    goto loc_802621E8;
}

loc_80261D18:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 40;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261D2C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 155;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261D40:
{
    r0 = MemoryInline::FlatRead8((r26 + 1413));
}

loc_80261D48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802621E8;
    }
}

loc_80261D4C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 59;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261D60:
{
    r3 = r26;
    ctx->lr = 0x80261D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80277FB8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80261D6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802621E8;
    }
}

loc_80261D70:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261D80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261D90;
    }
}

loc_80261D84:
{
    r0 = 59;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261D90:
{
    r0 = 79;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261D9C:
{
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261DA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802621E8;
    }
}

loc_80261DA8:
{
    r0 = 10;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261DBC:
{
    r3 = r26;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_80261DC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802621E8;
    }
}

loc_80261DCC:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261DDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261DEC;
    }
}

loc_80261DE0:
{
    r0 = 61;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261DEC:
{
    r0 = 72;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261DF8:
{
    r3 = r26;
    ctx->lr = 0x80261E00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8027831Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80261E04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802621E8;
    }
}

loc_80261E08:
{
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261E10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802621E8;
    }
}

loc_80261E14:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 47;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261E28:
{
    r3 = r26;
    ctx->lr = 0x80261E30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x802784B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80261E34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802621E8;
    }
}

loc_80261E38:
{
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261E40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261E58;
    }
}

loc_80261E44:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 47;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261E58:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 125;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261E6C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261E7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261E8C;
    }
}

loc_80261E80:
{
    r0 = 53;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261E8C:
{
    r0 = 55;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261E98:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261EA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261EB8;
    }
}

loc_80261EAC:
{
    r0 = 57;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261EB8:
{
    r0 = 58;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261EC4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261ED4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261EE4;
    }
}

loc_80261ED8:
{
    r0 = 54;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261EE4:
{
    r0 = 56;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261EF0:
{
    r3 = r26;
    r4 = 29;
    ctx->lr = 0x80261EFCu;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80273218_82B7 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_82B7);
        r4 = static_cast<uint32_t>(regargs_result_80273218_82B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80261F00:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802621E8;
    }
}

loc_80261F04:
{
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261F0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802621E8;
    }
}

loc_80261F10:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 34;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261F24:
{
    r3 = r26;
    r4 = 29;
    ctx->lr = 0x80261F30u;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80273218_8865 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_8865);
        r4 = static_cast<uint32_t>(regargs_result_80273218_8865 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80261F34:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802621E8;
    }
}

loc_80261F38:
{
    r3 = 4;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15052));
    ctx->lr = 0x80261F44u;
    if constexpr (KnownRegArgsCpuCall<0x802D7868u>(&func_802D7868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802D7868_8CE1 = func_802D7868_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802D7868_8CE1);
        r4 = static_cast<uint32_t>(regargs_result_802D7868_8CE1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D7868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80261F48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802621E8;
    }
}

loc_80261F4C:
{
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261F54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802621E8;
    }
}

loc_80261F58:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 176;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261F6C:
{
    r3 = MemoryInline::FlatRead8((r26 + 8));
    r4 = MemoryInline::FlatRead8((r26 + 22));
    r5 = (r26 + 60);
    r6 = (r1 + 8);
    r7 = (r1 + 32);
    r8 = (r1 + 20);
    r9 = (r26 + 1140);
    ctx->lr = 0x80261F8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x803BAA14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_80261F94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_802621E8;
    }
}

loc_80261F98:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80261FA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_802621E8;
    }
}

loc_80261FA4:
{
    r3 = (r26 + 60);
    r4 = (r1 + 32);
    ctx->lr = 0x80261FB0u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_99BE = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_99BE);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_99BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32(r30, r0);
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWrite16((r26 + 1144), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261FD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80261FE0;
    }
}

loc_80261FD4:
{
    r0 = 49;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261FE0:
{
    r0 = 99;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80261FEC:
{
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80261FF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802621E8;
    }
}

loc_80261FF8:
{
    r3 = MemoryInline::FlatRead8((r26 + 8));
    r4 = MemoryInline::FlatRead8((r26 + 22));
    r5 = (r26 + 60);
    r6 = (r1 + 8);
    r7 = (r1 + 32);
    r8 = (r1 + 20);
    r9 = (r26 + 1140);
    ctx->lr = 0x80262018u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x803BAA14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_80262020:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_802621E8;
    }
}

loc_80262024:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8026202C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_802621E8;
    }
}

loc_80262030:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 50;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWrite16((r26 + 1144), static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_8026204C:
{
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80262054:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802621E8;
    }
}

loc_80262058:
{
    r3 = MemoryInline::FlatRead8((r26 + 8));
    r4 = MemoryInline::FlatRead8((r26 + 22));
    r5 = (r26 + 60);
    r6 = (r1 + 8);
    r7 = (r1 + 32);
    r8 = (r1 + 20);
    r9 = (r26 + 1140);
    ctx->lr = 0x80262078u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x803BAA14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_80262080:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_802621E8;
    }
}

loc_80262084:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8026208C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_802621E8;
    }
}

loc_80262090:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 63;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWrite32(r30, r0);
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWrite16((r26 + 1144), static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_802620B4:
{
    r3 = r26;
    // inline leaf 0x8027A1F4 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x8027A1F4
}

loc_802620C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802621E8;
    }
}

loc_802620C4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_802620D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802620E4;
    }
}

loc_802620D8:
{
    r0 = 71;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_802620E4:
{
}

loc_802620E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802620F8;
    }
}

loc_802620EC:
{
    r0 = 69;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_802620F8:
{
    r0 = 68;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_80262104:
{
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_8026210C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802621E8;
    }
}

loc_80262110:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 93;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = 140;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_8026212C:
{
    r24 = 1;
    goto loc_80262138;
}

loc_80262134:
{
    r24 = 5;
}

loc_80262138:
{
    r3 = r26;
    r4 = (r1 + 32);
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    ctx->lr = 0x8026214Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027D9CCu>(&func_8027D9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_8027D9CC_BA54 = func_8027D9CC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8027D9CC_BA54);
        r4 = static_cast<uint32_t>(regargs_result_8027D9CC_BA54 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027D9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80262150:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(r3))) {
        goto loc_802621E8;
    }
}

loc_80262154:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32(r30, r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r26 + 144), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r26 + 148), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r26 + 152), f0.d);
    r3 = r26;
    r4 = 20;
    ctx->lr = 0x80262180u;
    if constexpr (KnownRegArgsCpuCall<0x8027AE8Cu>(&func_8027AE8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8027AE8C_C1DE = func_8027AE8C_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8027AE8C_C1DE);
        r4 = static_cast<uint32_t>(regargs_result_8027AE8C_C1DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027AE8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r26 + 9));
}

loc_80262188:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802621B4;
    }
}

loc_8026218C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 172;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = 12;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_802621B4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    r0 = 169;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = 12;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    goto loc_802621E8;
}

loc_802621DC:
{
    r0 = 255;
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
}

loc_802621E8:
{
    r4 = MemoryInline::FlatRead8(r27);
    r3 = (255 - r4);
    r0 = (r4 + -255);
    r0 = (r3 | r0);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
}

loc_802621FC:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802617D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802617D4_ra38_1ee_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802617D4 func_802617D4 preserves=true fpr_mask=0x00000000
