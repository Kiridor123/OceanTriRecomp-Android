#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082A580(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8082A580u);
    goto loc_8082A580;

loc_8082A580:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x8082A5B8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = -872349696;
    guest_range_0 = MemoryInline::ResolveRangeHost(r27, 0, 8u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r27);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_8082A5C8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8082A5DC;
    }
}

loc_8082A5D4:
{
    r0 = MemoryInline::FlatRead32(r31);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8082A5DC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8082A5E0:
{
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8082A6F4;
    }
}

loc_8082A5E8:
{
}

loc_8082A5EC:
{
    r4 = (r29 + -8);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_8082A6C0;
    }
}

loc_8082A5F4:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8082A610;
    }
}

loc_8082A5FC:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8082A608:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_8082A610;
    }
}

loc_8082A60C:
{
    r5 = 1;
}

loc_8082A610:
{
}

loc_8082A614:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8082A6C0;
    }
}

loc_8082A618:
{
    r0 = (r4 + 7);
    r5 = r30;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r3 = -872349696;
    ctr = r0;
}

loc_8082A630:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8082A6C0;
    }
}

loc_8082A634:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 232u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r5);
    r6 = (r6 + 8);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r5 + 32));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r5 + 36));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r5 + 64));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r5 + 68));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 96u, (r5 + 96));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 100u, (r5 + 100));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 128u, (r5 + 128));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 132u, (r5 + 132));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 160u, (r5 + 160));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 164u, (r5 + 164));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 192u, (r5 + 192));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 196u, (r5 + 196));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 224u, (r5 + 224));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 228u, (r5 + 228));
    r5 = (r5 + 256);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082A634;
    }
}

loc_8082A6C0:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r3 = (r3_rot_1 & -32);
    r0 = (r29 - r6);
    r4 = (r30 + r3);
    r3 = -872349696;
    ctr = r0;
}

loc_8082A6D8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_8082A6F4;
    }
}

loc_8082A6DC:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r4 = (r4 + 32);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082A6DC;
    }
}

loc_8082A6F4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r27);
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8082A704:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082A720;
    }
}

loc_8082A718:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8082A720:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8082A724:
{
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8082A838;
    }
}

loc_8082A72C:
{
}

loc_8082A730:
{
    r4 = (r29 + -8);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_8082A804;
    }
}

loc_8082A738:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8082A754;
    }
}

loc_8082A740:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8082A74C:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_8082A754;
    }
}

loc_8082A750:
{
    r5 = 1;
}

loc_8082A754:
{
}

loc_8082A758:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8082A804;
    }
}

loc_8082A75C:
{
    r0 = (r4 + 7);
    r5 = r30;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    r3 = -872349696;
    ctr = r0;
}

loc_8082A774:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8082A804;
    }
}

loc_8082A778:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 232u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r5 + 8));
    r6 = (r6 + 8);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r5 + 12));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r5 + 40));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r5 + 44));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r5 + 72));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r5 + 76));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 96u, (r5 + 104));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 100u, (r5 + 108));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 128u, (r5 + 136));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 132u, (r5 + 140));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 160u, (r5 + 168));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 164u, (r5 + 172));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 192u, (r5 + 200));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 196u, (r5 + 204));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 224u, (r5 + 232));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 228u, (r5 + 236));
    r5 = (r5 + 256);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082A778;
    }
}

loc_8082A804:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r3 = (r3_rot_3 & -32);
    r0 = (r29 - r6);
    r4 = (r30 + r3);
    r3 = -872349696;
    ctr = r0;
}

loc_8082A81C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_8082A838;
    }
}

loc_8082A820:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    r4 = (r4 + 32);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082A820;
    }
}

loc_8082A838:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r27);
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8082A848:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082A86C;
    }
}

loc_8082A864:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8082A86C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8082A870:
{
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8082A984;
    }
}

loc_8082A878:
{
}

loc_8082A87C:
{
    r4 = (r29 + -8);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_8082A950;
    }
}

loc_8082A884:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8082A8A0;
    }
}

loc_8082A88C:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8082A898:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_8082A8A0;
    }
}

loc_8082A89C:
{
    r5 = 1;
}

loc_8082A8A0:
{
}

loc_8082A8A4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8082A950;
    }
}

loc_8082A8A8:
{
    r0 = (r4 + 7);
    r5 = r30;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    r3 = -872349696;
    ctr = r0;
}

loc_8082A8C0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8082A950;
    }
}

loc_8082A8C4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 24), 0, 232u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r5 + 24));
    r6 = (r6 + 8);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r5 + 28));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r5 + 56));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r5 + 60));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 64u, (r5 + 88));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 68u, (r5 + 92));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 96u, (r5 + 120));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 100u, (r5 + 124));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 128u, (r5 + 152));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 132u, (r5 + 156));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 160u, (r5 + 184));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 164u, (r5 + 188));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 192u, (r5 + 216));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 196u, (r5 + 220));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 224u, (r5 + 248));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 228u, (r5 + 252));
    r5 = (r5 + 256);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082A8C4;
    }
}

loc_8082A950:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r3 = (r3_rot_5 & -32);
    r0 = (r29 - r6);
    r4 = (r30 + r3);
    r3 = -872349696;
    ctr = r0;
}

loc_8082A968:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_8082A984;
    }
}

loc_8082A96C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r4 = (r4 + 32);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082A96C;
    }
}

loc_8082A984:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 4));
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8082A994:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r27);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082A9B0;
    }
}

loc_8082A9A8:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8082A9B0:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8082A9B4:
{
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8082AAC8;
    }
}

loc_8082A9BC:
{
}

loc_8082A9C0:
{
    r4 = (r29 + -8);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_8082AA94;
    }
}

loc_8082A9C8:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8082A9E4;
    }
}

loc_8082A9D0:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8082A9DC:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_8082A9E4;
    }
}

loc_8082A9E0:
{
    r5 = 1;
}

loc_8082A9E4:
{
}

loc_8082A9E8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8082AA94;
    }
}

loc_8082A9EC:
{
    r0 = (r4 + 7);
    r5 = r30;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_10 & 536870911);
    r3 = -872349696;
    ctr = r0;
}

loc_8082AA04:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8082AA94;
    }
}

loc_8082AA08:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r5 + 16), 0, 232u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r5 + 16));
    r6 = (r6 + 8);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r5 + 20));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 32u, (r5 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 36u, (r5 + 52));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 64u, (r5 + 80));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r5 + 84));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 96u, (r5 + 112));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 100u, (r5 + 116));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 128u, (r5 + 144));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 132u, (r5 + 148));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 160u, (r5 + 176));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 164u, (r5 + 180));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 192u, (r5 + 208));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 196u, (r5 + 212));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 224u, (r5 + 240));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 228u, (r5 + 244));
    r5 = (r5 + 256);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082AA08;
    }
}

loc_8082AA94:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r3 = (r3_rot_7 & -32);
    r0 = (r29 - r6);
    r4 = (r30 + r3);
    r3 = -872349696;
    ctr = r0;
}

loc_8082AAAC:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_8082AAC8;
    }
}

loc_8082AAB0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    r4 = (r4 + 32);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082AAB0;
    }
}

loc_8082AAC8:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082A580 func_8082A580 preserves=true fpr_mask=0x00000000
