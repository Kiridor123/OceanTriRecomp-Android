#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803A5BC4_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_subfic_ra_0 = 0;
    uint32_t r5_subfic_ra_1 = 0;
    uint32_t r5_subfic_ra_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803A5BC4u);
    goto loc_803A5BC4;

loc_803A5BC4:
{
    MemoryAlias::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r30 = r3;
    r31 = r4;
    r5 = MemoryAlias::FlatRead32((r3 + 208));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r5 + r0);
    r20 = MemoryAlias::FlatRead16((r4 + 16));
    r7 = 0;
    r6 = (r1 + 8);
    r4 = -1;
    r0 = 9;
    ctr = r0;
}

loc_803A5C08:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r5 = MemoryAlias::FlatRead16((r3 + 50));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_803A5C14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_803A5C24;
    }
}

loc_803A5C18:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    MemoryAlias::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_803A5C28;
}

loc_803A5C24:
{
    MemoryAlias::FlatWrite8(r6, static_cast<uint8_t>(r4));
}

loc_803A5C28:
{
    r7 = (r7 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r5 = MemoryAlias::FlatRead16((r3 + 50));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_803A5C38:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_803A5C48;
    }
}

loc_803A5C3C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    MemoryAlias::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    goto loc_803A5C4C;
}

loc_803A5C48:
{
    MemoryAlias::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
}

loc_803A5C4C:
{
    r7 = (r7 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r5 = MemoryAlias::FlatRead16((r3 + 50));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_803A5C5C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_803A5C6C;
    }
}

loc_803A5C60:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    MemoryAlias::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    goto loc_803A5C70;
}

loc_803A5C6C:
{
    MemoryAlias::FlatWrite8((r6 + 2), static_cast<uint8_t>(r4));
}

loc_803A5C70:
{
    r7 = (r7 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r5 = MemoryAlias::FlatRead16((r3 + 50));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_803A5C80:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_803A5C90;
    }
}

loc_803A5C84:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    MemoryAlias::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
    goto loc_803A5C94;
}

loc_803A5C90:
{
    MemoryAlias::FlatWrite8((r6 + 3), static_cast<uint8_t>(r4));
}

loc_803A5C94:
{
    r7 = (r7 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r5 = MemoryAlias::FlatRead16((r3 + 50));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_803A5CA4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_803A5CB4;
    }
}

loc_803A5CA8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    MemoryAlias::FlatWrite8((r6 + 4), static_cast<uint8_t>(r0));
    goto loc_803A5CB8;
}

loc_803A5CB4:
{
    MemoryAlias::FlatWrite8((r6 + 4), static_cast<uint8_t>(r4));
}

loc_803A5CB8:
{
    r6 = (r6 + 5);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A5C08;
    }
}

loc_803A5CC4:
{
    r4 = 0x80790000u;
    r18 = MemoryAlias::FlatRead32((r4 + 23408));
    r0 = 6;
    MemoryAlias::FlatWrite16((r3 + 56), static_cast<uint16_t>(r0));
    r21 = 0;
    MemoryAlias::FlatWrite16((r3 + 58), static_cast<uint16_t>(r21));
    r17 = (r3 + 112);
    r19 = 0;
    r27 = 1;
    r24 = 715849728;
    r23 = 5;
    r22 = 4;
    r26 = (r1 + 8);
    r3 = 0x805F0000u;
    r28 = (r3 + 10344);
    r3 = 1374420992;
    r29 = (r3 + -31457);
    goto loc_803A6098;
}

loc_803A5D0C:
{
    r3 = r17;
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r20 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl1_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl1_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF8C;
    }
}

loc_inl1_0x800CEF88:
{
    r0 = 1;
}

loc_inl1_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl1_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r0 = MemoryAlias::FlatRead16((r30 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803A5D2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803A5D8C;
    }
}

loc_803A5D30:
{
    r4 = (r3 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & -1073741824);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0 = (r0 - r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -1);
    r0 = (r0 + r4);
}

loc_803A5D4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A5D6C;
    }
}

loc_803A5D50:
{
}

loc_803A5D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803A5D74;
    }
}

loc_803A5D58:
{
}

loc_803A5D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803A5D7C;
    }
}

loc_803A5D60:
{
}

loc_803A5D64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803A5D84;
    }
}

loc_803A5D68:
{
    goto loc_803A5DB0;
}

loc_803A5D6C:
{
    MemoryAlias::FlatWrite8((r17 + 4), static_cast<uint8_t>(r21));
    goto loc_803A5DB0;
}

loc_803A5D74:
{
    MemoryAlias::FlatWrite8((r17 + 4), static_cast<uint8_t>(r27));
    goto loc_803A5DB0;
}

loc_803A5D7C:
{
    MemoryAlias::FlatWrite8((r17 + 4), static_cast<uint8_t>(r22));
    goto loc_803A5DB0;
}

loc_803A5D84:
{
    MemoryAlias::FlatWrite8((r17 + 4), static_cast<uint8_t>(r23));
    goto loc_803A5DB0;
}

loc_803A5D8C:
{
    r5 = (r3 & 65535);
    r0 = (r24 + -21845);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 6);
    r0 = (r5 - r0);
    r0 = (r0 & 255);
    MemoryAlias::FlatWrite8((r17 + 4), static_cast<uint8_t>(r0));
}

loc_803A5DB0:
{
    r3 = (r3 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl2_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl2_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF8C;
    }
}

loc_inl2_0x800CEF88:
{
    r0 = 1;
}

loc_inl2_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_5 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl2_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r25 = r3;
    r4 = MemoryAlias::FlatRead16((r30 + 50));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    r0 = (r4 - r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803A5DD0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_803A5DEC;
    }
}

loc_803A5DD4:
{
    r3 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r5 = (r0 & 65535);
    goto loc_803A5DF0;
}

loc_803A5DEC:
{
    r5 = 0;
}

loc_803A5DF0:
{
    r26_addr_2 = (r26 + r5);
    r0 = MemoryAlias::FlatRead8(r26_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 10);
    r0 = (r18 + r0);
    MemoryAlias::FlatWrite32(r17, r0);
    r3 = r26;
    r3 = (r3 + r5);
    r4 = r26;
    r4 = (r5 + r4);
    r4 = (r4 + 1);
    r5_subfic_ra_2 = r5;
    r5 = (44 - r5_subfic_ra_2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryAlias::FlatWrite8((r17 + 5), static_cast<uint8_t>(r21));
    r16 = 0;
    r20 = 0;
}

loc_803A5E2C:
{
    r3 = MemoryAlias::FlatRead32(r17);
    r3_addr_3 = (r3 + r20);
    r3 = MemoryAlias::FlatRead16(r3_addr_3);
}

loc_803A5E38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A5E5C;
    }
}

loc_803A5E3C:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17824));
    ctx->lr = 0x803A5E44u;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8004B108_31EA = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_31EA);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_31EA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r0 = MemoryAlias::FlatRead32(r17);
    r4 = (r0 + r20);
    r0 = MemoryAlias::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803A5E54:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_803A5E5C;
    }
}

loc_803A5E58:
{
    MemoryAlias::FlatWrite8((r17 + 5), static_cast<uint8_t>(r27));
}

loc_803A5E5C:
{
    r20 = (r20 + 4);
    r16 = (r16 + 1);
}

loc_803A5E68:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(2))) {
        goto loc_803A5E2C;
    }
}

loc_803A5E6C:
{
    r3 = MemoryAlias::FlatRead32(r17);
    r0 = MemoryAlias::FlatRead8((r3 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryAlias::FlatWrite8((r17 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead32(r17);
    r0 = MemoryAlias::FlatRead8((r3 + 8));
    MemoryAlias::FlatWrite16((r17 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryAlias::FlatRead32(r17);
    r0 = MemoryAlias::FlatRead8((r3 + 8));
    MemoryAlias::FlatWrite16((r17 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r17 + 4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r28_addr_2 = (r28 + r0);
    r16 = MemoryAlias::FlatRead32(r28_addr_2);
    r3 = MemoryAlias::FlatRead16((r17 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryAlias::FlatRead8((r16 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + r0);
    MemoryAlias::FlatWrite16((r17 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryAlias::FlatRead16((r17 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryAlias::FlatRead8((r16 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + r0);
    MemoryAlias::FlatWrite16((r17 + 10), static_cast<uint16_t>(r0));
    r3 = (r25 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl3_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl3_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CEF8C;
    }
}

loc_inl3_0x800CEF88:
{
    r0 = 1;
}

loc_inl3_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_9 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_6 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl3_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r20 = r3;
    r5 = (r3 & 65535);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r29)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_7 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 100);
    r0 = (r5 - r0);
    r8 = (r0 & 65535);
    r7 = 0;
    r9 = 0;
    r5 = 0;
    r4 = r16;
    goto loc_803A5FD0;
}

loc_803A5F08:
{
    r9 = (r9 + r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_803A5F14:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_803A5FC4;
    }
}

loc_803A5F18:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r4 = (r16 + r0);
    r5 = MemoryAlias::FlatRead8((r4 + 1));
    r4 = MemoryAlias::FlatRead8((r17 + 4));
    r0 = (r4 + -2);
}

loc_803A5F34:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803A5FB4;
    }
}

loc_803A5F38:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_803A5F40:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803A5F54;
    }
}

loc_803A5F44:
{
    r0 = MemoryAlias::FlatRead8((r17 + 6));
    r0 = (r0 + r5);
    MemoryAlias::FlatWrite8((r17 + 6), static_cast<uint8_t>(r0));
    goto loc_803A5FE0;
}

loc_803A5F54:
{
    r0 = MemoryAlias::FlatRead16((r30 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803A5F5C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_803A5FE0;
    }
}

loc_803A5F60:
{
    r0 = MemoryAlias::FlatRead8((r17 + 7));
    r0 = (r0 + r5);
    MemoryAlias::FlatWrite8((r17 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl4_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl4_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CEF8C;
    }
}

loc_inl4_0x800CEF88:
{
    r0 = 1;
}

loc_inl4_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_11 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_8 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl4_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r20 = r3;
    r6 = MemoryAlias::FlatRead16((r30 + 54));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = MemoryAlias::FlatRead16((r30 + 36));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = (r3 & 65535);
    r3 = (r6 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r3 = (r5 + r0);
    r3 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r6));
    r0 = (r0 * r6);
    r0 = (r3 - r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryAlias::FlatWrite8((r17 + 8), static_cast<uint8_t>(r0));
    goto loc_803A5FE0;
}

loc_803A5FB4:
{
    r0 = MemoryAlias::FlatRead8((r17 + 6));
    r0 = (r0 + r5);
    MemoryAlias::FlatWrite8((r17 + 6), static_cast<uint8_t>(r0));
    goto loc_803A5FE0;
}

loc_803A5FC4:
{
    r5 = (r5 + 2);
    r4 = (r4 + 2);
    r7 = (r7 + 1);
}

loc_803A5FD0:
{
    r6 = MemoryAlias::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_803A5FDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A5F08;
    }
}

loc_803A5FE0:
{
    r4 = 0;
    r0 = MemoryAlias::FlatRead8((r30 + 2));
}

loc_803A5FEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803A600C;
    }
}

loc_803A5FF0:
{
}

loc_803A5FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803A6024;
    }
}

loc_803A5FF8:
{
}

loc_803A5FFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803A6038;
    }
}

loc_803A6000:
{
}

loc_803A6004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803A6050;
    }
}

loc_803A6008:
{
    goto loc_803A6064;
}

loc_803A600C:
{
    r3 = MemoryAlias::FlatRead8((r30 + 3));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_803A6018:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_803A6064;
    }
}

loc_803A601C:
{
    r4 = 1;
    goto loc_803A6064;
}

loc_803A6024:
{
    r0 = MemoryAlias::FlatRead8((r17 + 4));
}

loc_803A602C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803A6064;
    }
}

loc_803A6030:
{
    r4 = 1;
    goto loc_803A6064;
}

loc_803A6038:
{
    r3 = MemoryAlias::FlatRead8((r17 + 4));
    r0 = (r3 + -2);
}

loc_803A6044:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803A6064;
    }
}

loc_803A6048:
{
    r4 = 1;
    goto loc_803A6064;
}

loc_803A6050:
{
    r3 = MemoryAlias::FlatRead8((r17 + 4));
    r0 = (r3 + -4);
}

loc_803A605C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803A6064;
    }
}

loc_803A6060:
{
    r4 = 1;
}

loc_803A6064:
{
}

loc_803A6068:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_803A6090;
    }
}

loc_803A606C:
{
    r3 = MemoryAlias::FlatRead8((r17 + 6));
    r0 = (r3 + 5);
    MemoryAlias::FlatWrite8((r17 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead16((r17 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 5);
    MemoryAlias::FlatWrite16((r17 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryAlias::FlatRead16((r17 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 5);
    MemoryAlias::FlatWrite16((r17 + 10), static_cast<uint16_t>(r0));
}

loc_803A6090:
{
    r19 = (r19 + 1);
    r17 = (r17 + 16);
}

loc_803A6098:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    r0 = MemoryAlias::FlatRead16((r30 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803A60A4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_803A5D0C;
    }
}

loc_803A60A8:
{
    r11 = (r1 + 128);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_1 = MemoryAlias::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryAlias::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A5BC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A5BC4_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A5BC4 func_803A5BC4 preserves=true fpr_mask=0x00000000
