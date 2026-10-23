#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80457F7C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lfdx_804580A0_loc_0 = 0;
    uint32_t addr_lfdx_80458184_loc_0 = 0;
    uint32_t addr_lfdx_8045827C_loc_0 = 0;
    uint32_t addr_lfdx_80458294_loc_0 = 0;
    uint32_t addr_lfdx_804582AC_loc_0 = 0;
    uint32_t addr_lfdx_804582C4_loc_0 = 0;
    uint32_t addr_lfdx_804582DC_loc_0 = 0;
    uint32_t addr_lfdx_804582E8_loc_0 = 0;
    uint32_t addr_lfdx_804582F0_loc_0 = 0;
    uint32_t addr_lfdx_804582F8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_10 = 0;
    uint32_t r10_rot_11 = 0;
    uint32_t r10_rot_12 = 0;
    uint32_t r10_rot_13 = 0;
    uint32_t r10_rot_14 = 0;
    uint32_t r10_rot_15 = 0;
    uint32_t r10_rot_16 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r10_rot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_10 = 0;
    uint32_t r11_rot_11 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r11_rot_8 = 0;
    uint32_t r11_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_11 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r30_rot_6 = 0;
    uint32_t r30_rot_7 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r31_rot_7 = 0;
    uint32_t r31_rot_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_10 = 0;
    uint32_t r8_addr_11 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r8_addr_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_80457F7C;

loc_80457F7C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r5 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r3 + 644));
    r0 = MemoryInline::FlatRead16(r5);
    r7 = MemoryInline::FlatRead32(r6);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r5 = (r5_rot_0 & 1);
}

loc_80457FA4:
{
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r12 = (r12_rot_0 & 31);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80457FB8;
    }
}

loc_80457FAC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r8 = (r7 - r0);
    goto loc_80457FC0;
}

loc_80457FB8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r8 = (r7 - r0);
}

loc_80457FC0:
{
}

loc_80457FC4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804581DC;
    }
}

loc_80457FC8:
{
    r5 = (32 - r12);
    r6 = 0;
}

loc_80457FD4:
{
    r9 = 0;
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_8045833C;
    }
}

loc_80457FDC:
{
}

loc_80457FE0:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(8))) {
        goto loc_80458194;
    }
}

loc_80457FE4:
{
}

loc_80457FE8:
{
    r10 = 0;
    r11 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(33))) {
        goto loc_80457FFC;
    }
}

loc_80457FF8:
{
    r0 = 1;
}

loc_80457FFC:
{
}

loc_80458000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458014;
    }
}

loc_80458004:
{
    r0 = (r5 + -2147483648);
}

loc_8045800C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80458014;
    }
}

loc_80458010:
{
    r11 = 1;
}

loc_80458014:
{
}

loc_80458018:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80458044;
    }
}

loc_8045801C:
{
    r0 = (0 - r5);
    r11 = 1;
    r0 = (r0 & -2147483648);
}

loc_80458028:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80458038;
    }
}

loc_8045802C:
{
    r0 = (r12 & -2147483648);
}

loc_80458030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458038;
    }
}

loc_80458034:
{
    r11 = 0;
}

loc_80458038:
{
}

loc_8045803C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80458044;
    }
}

loc_80458040:
{
    r10 = 1;
}

loc_80458044:
{
}

loc_80458048:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80458194;
    }
}

loc_8045804C:
{
    r0 = (31 - r5);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r10 = (r10_rot_1 & -16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    r29 = (r3 + r10);
    ctr = r0;
}

loc_80458064:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(24))) {
        goto loc_80458194;
    }
}

loc_80458068:
{
    r11 = (r8 + r9);
    r0 = (r6 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r11 + 8));
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r10 = (r10_rot_3 & -16);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 128u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r29 + 8), f0.d);
    r28 = (r8 + r10);
    r0 = (r6 + 2);
    r10 = (r6 + 6);
    f0.d = MemoryInline::FlatReadFloat32((r11 + 12));
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r31 = (r31_rot_2 & -16);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r29 + 12), f0.d);
    r0 = (r6 + 3);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r30 = (r30_rot_2 & -16);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r10 = (r10_rot_4 & -16);
    addr_lfdx_804580A0_loc_0 = (r8 + r9);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804580A0_loc_0);
    r0 = (r6 + 4);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 0u, r29, f0.d);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r12 = (r12_rot_2 & -16);
    r0 = (r6 + 5);
    r31 = (r8 + r31);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r11 = (r11_rot_2 & -16);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 24), f0.d);
    r0 = (r6 + 7);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r30 = (r8 + r30);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    r12 = (r8 + r12);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r29 + 28), f0.d);
    r11 = (r8 + r11);
    r10 = (r8 + r10);
    r27 = (r8 + r0);
    f0.d = MemoryInline::FlatReadFloat64(r28);
    r6 = (r6 + 8);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 16u, (r29 + 16), f0.d);
    r9 = (r9 + 128);
    r5 = (r5 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r29 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat64(r31);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r29 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r29 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r29 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat64(r30);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r29 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r12 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r29 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r12 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r29 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat64(r12);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r29 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r11 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r29 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r11 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r29 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat64(r11);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r29 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r29 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r29 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat64(r10);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r29 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r29 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r29 + 124), f0.d);
    addr_lfdx_80458184_loc_0 = (r8 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80458184_loc_0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r29 + 112), f0.d);
    r29 = (r29 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80458068;
    }
}

loc_80458194:
{
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r9 = (r9_rot_1 & -16);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r6 = (r6_rot_1 & -16);
    r0 = (32 - r5);
    r9 = (r8 + r9);
    r6 = (r3 + r6);
    ctr = r0;
}

loc_804581B0:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_8045833C;
    }
}

loc_804581B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 8));
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 12));
    MemoryInline::FlatWriteFloat32((r6 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat64(r9);
    r9 = (r9 + 16);
    MemoryInline::FlatWriteFloat64(r6, f0.d);
    r6 = (r6 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804581B4;
    }
}

loc_804581D8:
{
    goto loc_8045833C;
}

loc_804581DC:
{
    r5 = (32 - r12);
    r6 = 0;
}

loc_804581E8:
{
    r9 = 0;
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_8045833C;
    }
}

loc_804581F0:
{
}

loc_804581F4:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(8))) {
        goto loc_80458308;
    }
}

loc_804581F8:
{
}

loc_804581FC:
{
    r10 = 0;
    r11 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(33))) {
        goto loc_80458210;
    }
}

loc_8045820C:
{
    r0 = 1;
}

loc_80458210:
{
}

loc_80458214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458228;
    }
}

loc_80458218:
{
    r0 = (r5 + -2147483648);
}

loc_80458220:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80458228;
    }
}

loc_80458224:
{
    r11 = 1;
}

loc_80458228:
{
}

loc_8045822C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80458258;
    }
}

loc_80458230:
{
    r0 = (0 - r5);
    r11 = 1;
    r0 = (r0 & -2147483648);
}

loc_8045823C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045824C;
    }
}

loc_80458240:
{
    r0 = (r12 & -2147483648);
}

loc_80458244:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045824C;
    }
}

loc_80458248:
{
    r11 = 0;
}

loc_8045824C:
{
}

loc_80458250:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80458258;
    }
}

loc_80458254:
{
    r10 = 1;
}

loc_80458258:
{
}

loc_8045825C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80458308;
    }
}

loc_80458260:
{
    r0 = (31 - r5);
    r10_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r10 = (r10_rot_6 & -16);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    r31 = (r3 + r10);
    ctr = r0;
}

loc_80458278:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(24))) {
        goto loc_80458308;
    }
}

loc_8045827C:
{
    addr_lfdx_8045827C_loc_0 = (r8 + r9);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_8045827C_loc_0);
    r0 = (r6 + 1);
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 120u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 0u, r31, f0.d);
    r10_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r10 = (r10_rot_8 & -8);
    r0 = (r6 + 2);
    r30 = (r6 + 3);
    addr_lfdx_80458294_loc_0 = (r8 + r10);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80458294_loc_0);
    r12 = (r6 + 4);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 16u, (r31 + 16), f0.d);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r11 = (r6 + 5);
    r10 = (r6 + 6);
    addr_lfdx_804582AC_loc_0 = (r8 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804582AC_loc_0);
    r0 = (r6 + 7);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r31 + 32), f0.d);
    r30_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r30 = (r30_rot_5 & -8);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_5 & -8);
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r11 = (r11_rot_5 & -8);
    addr_lfdx_804582C4_loc_0 = (r8 + r30);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804582C4_loc_0);
    r10_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r10 = (r10_rot_9 & -8);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r31 + 48), f0.d);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r6 = (r6 + 8);
    r9 = (r9 + 64);
    addr_lfdx_804582DC_loc_0 = (r8 + r12);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804582DC_loc_0);
    r5 = (r5 + 8);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r31 + 64), f0.d);
    addr_lfdx_804582E8_loc_0 = (r8 + r11);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804582E8_loc_0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r31 + 80), f0.d);
    addr_lfdx_804582F0_loc_0 = (r8 + r10);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804582F0_loc_0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r31 + 96), f0.d);
    addr_lfdx_804582F8_loc_0 = (r8 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804582F8_loc_0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r31 + 112), f0.d);
    r31 = (r31 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045827C;
    }
}

loc_80458308:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r9 = (r9_rot_2 & -8);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r6 = (r6_rot_2 & -16);
    r0 = (32 - r5);
    r9 = (r8 + r9);
    r6 = (r3 + r6);
    ctr = r0;
}

loc_80458324:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_8045833C;
    }
}

loc_80458328:
{
    f0.d = MemoryInline::FlatReadFloat64(r9);
    r9 = (r9 + 8);
    MemoryInline::FlatWriteFloat64(r6, f0.d);
    r6 = (r6 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80458328;
    }
}

loc_8045833C:
{
    r4 = MemoryInline::FlatRead32(r4);
    r6 = 0;
    r9 = 0;
    r0 = MemoryInline::FlatRead16(r4);
    r11 = (static_cast<int32_t>(r0) >> 11);
    r5 = (32 - r11);
}

loc_80458358:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r8 = (r8 - r0);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_804584B0;
    }
}

loc_80458364:
{
}

loc_80458368:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(8))) {
        goto loc_8045847C;
    }
}

loc_8045836C:
{
}

loc_80458370:
{
    r4 = 0;
    r10 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(33))) {
        goto loc_80458384;
    }
}

loc_80458380:
{
    r0 = 1;
}

loc_80458384:
{
}

loc_80458388:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045839C;
    }
}

loc_8045838C:
{
    r0 = (r5 + -2147483648);
}

loc_80458394:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8045839C;
    }
}

loc_80458398:
{
    r10 = 1;
}

loc_8045839C:
{
}

loc_804583A0:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_804583CC;
    }
}

loc_804583A4:
{
    r0 = (0 - r5);
    r10 = 1;
    r0 = (r0 & -2147483648);
}

loc_804583B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804583C0;
    }
}

loc_804583B4:
{
    r0 = (r11 & -2147483648);
}

loc_804583B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804583C0;
    }
}

loc_804583BC:
{
    r10 = 0;
}

loc_804583C0:
{
}

loc_804583C4:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_804583CC;
    }
}

loc_804583C8:
{
    r4 = 1;
}

loc_804583CC:
{
}

loc_804583D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045847C;
    }
}

loc_804583D4:
{
    r0 = (31 - r5);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_14 & 536870911);
    r4 = (r3 + r4);
    ctr = r0;
}

loc_804583EC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(24))) {
        goto loc_8045847C;
    }
}

loc_804583F0:
{
    r8_addr_2 = (r8 + r9);
    r10 = MemoryInline::FlatRead32(r8_addr_2);
    r31 = (r6 + 3);
    r0 = (r6 + 1);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 512), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r4 + 512), r10);
    r10_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r10 = (r10_rot_13 & -4);
    r12 = (r6 + 4);
    r8_addr_3 = (r8 + r10);
    r10 = MemoryInline::FlatRead32(r8_addr_3);
    r0 = (r6 + 2);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 516), r10);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r11 = (r6 + 5);
    r10 = (r6 + 6);
    r8_addr_4 = (r8 + r0);
    r30 = MemoryInline::FlatRead32(r8_addr_4);
    r0 = (r6 + 7);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 520), r30);
    r31_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r31 = (r31_rot_6 & -4);
    r12_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r12 = (r12_rot_9 & -4);
    r11_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r11 = (r11_rot_9 & -4);
    r8_addr_5 = (r8 + r31);
    r31 = MemoryInline::FlatRead32(r8_addr_5);
    r10_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r10 = (r10_rot_14 & -4);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 524), r31);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r6 = (r6 + 8);
    r9 = (r9 + 32);
    r8_addr_6 = (r8 + r12);
    r12 = MemoryInline::FlatRead32(r8_addr_6);
    r5 = (r5 + 8);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 528), r12);
    r8_addr_7 = (r8 + r11);
    r11 = MemoryInline::FlatRead32(r8_addr_7);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 532), r11);
    r8_addr_8 = (r8 + r10);
    r10 = MemoryInline::FlatRead32(r8_addr_8);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 536), r10);
    r8_addr_9 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_9);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 540), r0);
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804583F0;
    }
}

loc_8045847C:
{
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_4 & -4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r0 = (32 - r5);
    r6 = (r8 + r6);
    r4 = (r3 + r4);
    ctr = r0;
}

loc_80458498:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_804584B0;
    }
}

loc_8045849C:
{
    r0 = MemoryInline::FlatRead32(r6);
    r6 = (r6 + 4);
    MemoryInline::FlatWrite32((r4 + 512), r0);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045849C;
    }
}

loc_804584B0:
{
    MemoryInline::FlatWrite32((r3 + 644), r7);
    r11 = (r1 + 32);
    r3 = MemoryInline::FlatRead32((r7 + 4));
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80457F7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80457F7C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80457F7C func_80457F7C preserves=true fpr_mask=0x00000000
