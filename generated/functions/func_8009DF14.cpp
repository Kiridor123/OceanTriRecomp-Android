#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009EF58(CpuContext* ctx);
extern "C" uint64_t func_8009EF58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009DF14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_10 = 0;
    uint32_t r0_addze_src_11 = 0;
    uint32_t r0_addze_src_12 = 0;
    uint32_t r0_addze_src_13 = 0;
    uint32_t r0_addze_src_14 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_addze_src_5 = 0;
    uint32_t r0_addze_src_6 = 0;
    uint32_t r0_addze_src_7 = 0;
    uint32_t r0_addze_src_8 = 0;
    uint32_t r0_addze_src_9 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_10 = 0;
    uint32_t r0_ca_11 = 0;
    uint32_t r0_ca_12 = 0;
    uint32_t r0_ca_13 = 0;
    uint32_t r0_ca_14 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_9 = 0;
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
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8009DF14u);
    goto loc_8009DF14;

loc_8009DF14:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r24 = r3;
    r31 = r4;
    r23 = r5;
    r22 = r6;
    r21 = r7;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009DF60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DF78;
    }
}

loc_8009DF64:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8009DF70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DF78;
    }
}

loc_8009DF74:
{
    r10 = 0;
}

loc_8009DF78:
{
}

loc_8009DF7C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009DF94;
    }
}

loc_8009DF80:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8009DF8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DF94;
    }
}

loc_8009DF90:
{
    r9 = 0;
}

loc_8009DF94:
{
}

loc_8009DF98:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009DFAC;
    }
}

loc_8009DF9C:
{
    r0 = (r11 + 1073741824);
}

loc_8009DFA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DFAC;
    }
}

loc_8009DFA8:
{
    r8 = 0;
}

loc_8009DFAC:
{
}

loc_8009DFB0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009DFC8;
    }
}

loc_8009DFB4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009DFC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DFC8;
    }
}

loc_8009DFC4:
{
    r7 = 0;
}

loc_8009DFC8:
{
}

loc_8009DFCC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009DFE4;
    }
}

loc_8009DFD0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8009DFDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DFE4;
    }
}

loc_8009DFE0:
{
    r6 = 0;
}

loc_8009DFE4:
{
}

loc_8009DFE8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009E000;
    }
}

loc_8009DFEC:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009DFF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009E000;
    }
}

loc_8009DFFC:
{
    r5 = 0;
}

loc_8009E000:
{
}

loc_8009E004:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009E028;
    }
}

loc_8009E008:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 796;
    r5 = 0x80590000u;
    r5 = (r5 + 10060);
    r6 = r24;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009E028u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8009E028:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009E04C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009E064;
    }
}

loc_8009E050:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009E05C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009E064;
    }
}

loc_8009E060:
{
    r9 = 0;
}

loc_8009E064:
{
}

loc_8009E068:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009E080;
    }
}

loc_8009E06C:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009E078:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009E080;
    }
}

loc_8009E07C:
{
    r8 = 0;
}

loc_8009E080:
{
}

loc_8009E084:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009E098;
    }
}

loc_8009E088:
{
    r0 = (r10 + 1073741824);
}

loc_8009E090:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009E098;
    }
}

loc_8009E094:
{
    r7 = 0;
}

loc_8009E098:
{
}

loc_8009E09C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009E0B4;
    }
}

loc_8009E0A0:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009E0AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009E0B4;
    }
}

loc_8009E0B0:
{
    r6 = 0;
}

loc_8009E0B4:
{
}

loc_8009E0B8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009E0D0;
    }
}

loc_8009E0BC:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009E0C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009E0D0;
    }
}

loc_8009E0CC:
{
    r5 = 0;
}

loc_8009E0D0:
{
}

loc_8009E0D4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009E0EC;
    }
}

loc_8009E0D8:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009E0E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009E0EC;
    }
}

loc_8009E0E8:
{
    r4 = 0;
}

loc_8009E0EC:
{
}

loc_8009E0F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009E114;
    }
}

loc_8009E0F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 797;
    r5 = 0x80590000u;
    r5 = (r5 + 10116);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009E114u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8009E114:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_8009E11C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(171))) {
        goto loc_8009E138;
    }
}

loc_8009E120:
{
    r3 = r24;
    r4 = r31;
    r5 = r23;
    r6 = r21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A2568u>(ctx);
    goto loc_8009E8A0;
}

loc_8009E138:
{
    r28 = MemoryInline::FlatRead8((r24 + 3));
    r3 = r28;
    // inline leaf 0x8009F8AC (5 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80590000u;
    r3 = (r3 + 9512);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    // end of inlined leaf 0x8009F8AC
    r30 = r3;
    r3 = r28;
    // inline leaf 0x8009F898 (5 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80590000u;
    r3 = (r3 + 9256);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
    // end of inlined leaf 0x8009F898
    r25 = (r3 & 255);
}

loc_8009E158:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8009E8A0;
    }
}

loc_8009E15C:
{
    r0 = (r25 + 13);
    r27 = (r0 & -2);
    r3 = r24;
    r4 = (r1 + 56);
    r5 = (r1 + 52);
    r6 = (r1 + 48);
    r7 = (r1 + 44);
    r8 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009F290u>(ctx);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r29 = (r29_rot_1 & -2);
    r3 = r21;
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r5 = r23;
    r6 = (r1 + 22);
    r7 = (r1 + 36);
    r8 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009CE20u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = MemoryInline::FlatRead32((r1 + 52));
    r26 = (r3 + 4);
    r3 = MemoryInline::FlatRead16(r3);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 24);
    r4 = (r1 + 16);
    r5 = (r1 + 20);
    r6 = (r1 + 18);
    r7 = MemoryInline::FlatRead16((r1 + 22));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r8 = r26;
    r9 = r27;
    r10 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009EFECu>(ctx);
    r0 = MemoryInline::FlatRead8((r1 + 16));
}

loc_8009E1EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009E33C;
    }
}

loc_8009E1F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r0 * r27);
    r21 = (r26 + r0);
    r21 = (r21 + 12);
    r0 = MemoryInline::FlatRead8((r21 + -10));
}

loc_8009E208:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E248;
    }
}

loc_8009E20C:
{
    r4 = 1;
    r0 = (r30 & 255);
    goto loc_8009E23C;
}

loc_8009E218:
{
    r3 = (r28 & r4);
}

loc_8009E220:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8009E230;
    }
}

loc_8009E224:
{
    r3 = MemoryInline::FlatRead8(r21);
    r21 = (r21 + 1);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r3));
}

loc_8009E230:
{
    r31 = (r31 + 1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r4 = (r3 & 65535);
}

loc_8009E23C:
{
}

loc_8009E240:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_8009E218;
    }
}

loc_8009E244:
{
    goto loc_8009E8A0;
}

loc_8009E248:
{
    r23 = MemoryInline::FlatRead16(r21);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r23;
    r6 = MemoryInline::FlatRead32((r1 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_8009EF58_3A5B = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_3A5B);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_3A5B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead8((r21 + -10));
    r0 = (r0 & 2);
}

loc_8009E270:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E288;
    }
}

loc_8009E274:
{
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r23 * r29);
    r4 = (r4 + r0);
    r26 = (r4 + 4);
    goto loc_8009E2B0;
}

loc_8009E288:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r26 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
}

loc_8009E2B0:
{
    r27 = 1;
    r21 = (r30 & 255);
    goto loc_8009E330;
}

loc_8009E2BC:
{
    r0 = (r28 & r27);
}

loc_8009E2C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009E30C;
    }
}

loc_8009E2C8:
{
    r5 = MemoryInline::FlatRead8(r26);
    r4 = MemoryInline::FlatRead8((r26 + 1));
    r26 = (r26 + 2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 * r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    r0 = (r5 + r0);
}

loc_8009E2F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8009E2F8;
    }
}

loc_8009E2F4:
{
    r0 = 0;
}

loc_8009E2F8:
{
}

loc_8009E2FC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_8009E304;
    }
}

loc_8009E300:
{
    r0 = 255;
}

loc_8009E304:
{
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_8009E30C:
{
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r0 = (r0 & 4);
}

loc_8009E31C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E324;
    }
}

loc_8009E320:
{
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
}

loc_8009E324:
{
    r31 = (r31 + 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r27 = (r0 & 65535);
}

loc_8009E330:
{
}

loc_8009E334:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(r21))) {
        goto loc_8009E2BC;
    }
}

loc_8009E338:
{
    goto loc_8009E8A0;
}

loc_8009E33C:
{
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead32((r1 + 52));
    r5 = MemoryInline::FlatRead32((r1 + 24));
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009EAB0u>(ctx);
    r21 = MemoryInline::FlatRead16((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    stackword16 = r21;
    MemoryInline::FlatWriteRam32((r1 + 68), r21);
    r0 = 1127219200;
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword17), static_cast<uint32_t>(stackword16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31436));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80457360_4FA5 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_4FA5;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead16((r1 + 18));
    r0 = (r0 - r21);
    r25 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r4 * r27);
    r3 = (r26 + r0);
    r24 = (r3 + 12);
    r0 = (r4 + 1);
    r0 = (r0 * r27);
    r26 = (r26 + r0);
    r26 = (r26 + 12);
    r27 = (r3 + 4);
    r3 = MemoryInline::FlatRead8((r24 + -10));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r3 = MemoryInline::FlatRead8((r26 + -10));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
}

loc_8009E3D8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009E438;
    }
}

loc_8009E3DC:
{
}

loc_8009E3E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E438;
    }
}

loc_8009E3E4:
{
    r22 = 1;
    r21 = (r30 & 255);
    goto loc_8009E42C;
}

loc_8009E3F0:
{
    r0 = (r28 & r22);
}

loc_8009E3F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009E41C;
    }
}

loc_8009E3FC:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8(r24);
    r5 = MemoryInline::FlatRead8(r26);
    r6 = MemoryInline::FlatRead8(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009E8B8u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r3));
    r24 = (r24 + 1);
    r26 = (r26 + 1);
}

loc_8009E41C:
{
    r27 = (r27 + 1);
    r31 = (r31 + 1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r22 = (r0 & 65535);
}

loc_8009E42C:
{
}

loc_8009E430:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(r21))) {
        goto loc_8009E3F0;
    }
}

loc_8009E434:
{
    goto loc_8009E8A0;
}

loc_8009E438:
{
}

loc_8009E43C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8009E564;
    }
}

loc_8009E440:
{
}

loc_8009E444:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E564;
    }
}

loc_8009E448:
{
    r21 = MemoryInline::FlatRead16(r24);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r21;
    r6 = MemoryInline::FlatRead32((r1 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_8009EF58_5D74 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_5D74);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_5D74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r23 = r3;
    r0 = MemoryInline::FlatRead8((r24 + -10));
    r0 = (r0 & 2);
}

loc_8009E474:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E48C;
    }
}

loc_8009E478:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r24 = (r3 + 4);
    goto loc_8009E4B8;
}

loc_8009E48C:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_3 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r24 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_8009E4B8:
{
    r29 = 1;
    r21 = (r30 & 255);
    goto loc_8009E558;
}

loc_8009E4C4:
{
    r0 = (r28 & r29);
}

loc_8009E4CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009E528;
    }
}

loc_8009E4D0:
{
    r4 = MemoryInline::FlatRead8(r24);
    r3 = MemoryInline::FlatRead8((r24 + 1));
    r24 = (r24 + 2);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 * r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0_addze_src_5 = r0;
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_5 + r0_ca_5);
    r0 = (r4 + r0);
}

loc_8009E4F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8009E500;
    }
}

loc_8009E4FC:
{
    r0 = 0;
}

loc_8009E500:
{
}

loc_8009E504:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_8009E50C;
    }
}

loc_8009E508:
{
    r0 = 255;
}

loc_8009E50C:
{
    r3 = r25;
    r4 = (r0 & 255);
    r5 = MemoryInline::FlatRead8(r26);
    r6 = MemoryInline::FlatRead8(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009E8B8u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r3));
    r26 = (r26 + 1);
}

loc_8009E528:
{
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_8009E538:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E548;
    }
}

loc_8009E53C:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_8009E548:
{
    r27 = (r27 + 1);
    r31 = (r31 + 1);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r29 = (r0 & 65535);
}

loc_8009E558:
{
}

loc_8009E55C:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r21))) {
        goto loc_8009E4C4;
    }
}

loc_8009E560:
{
    goto loc_8009E8A0;
}

loc_8009E564:
{
}

loc_8009E568:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009E690;
    }
}

loc_8009E56C:
{
}

loc_8009E570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009E690;
    }
}

loc_8009E574:
{
    r21 = MemoryInline::FlatRead16(r26);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r21;
    r6 = MemoryInline::FlatRead32((r1 + 28));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_8009EF58_721A = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_721A);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_721A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r23 = r3;
    r0 = MemoryInline::FlatRead8((r26 + -10));
    r0 = (r0 & 2);
}

loc_8009E5A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E5B8;
    }
}

loc_8009E5A4:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r26 = (r3 + 4);
    goto loc_8009E5E4;
}

loc_8009E5B8:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_5 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r26 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_8009E5E4:
{
    r29 = 1;
    r21 = (r30 & 255);
    goto loc_8009E684;
}

loc_8009E5F0:
{
    r0 = (r28 & r29);
}

loc_8009E5F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009E654;
    }
}

loc_8009E5FC:
{
    r4 = MemoryInline::FlatRead8(r26);
    r3 = MemoryInline::FlatRead8((r26 + 1));
    r26 = (r26 + 2);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 * r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0_addze_src_8 = r0;
    r0_ca_8 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_8 + r0_ca_8);
    r0 = (r4 + r0);
}

loc_8009E624:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8009E62C;
    }
}

loc_8009E628:
{
    r0 = 0;
}

loc_8009E62C:
{
}

loc_8009E630:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_8009E638;
    }
}

loc_8009E634:
{
    r0 = 255;
}

loc_8009E638:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead8(r24);
    r5 = (r0 & 255);
    r6 = MemoryInline::FlatRead8(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009E8B8u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r3));
    r24 = (r24 + 1);
}

loc_8009E654:
{
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_8009E664:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E674;
    }
}

loc_8009E668:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_8009E674:
{
    r27 = (r27 + 1);
    r31 = (r31 + 1);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r29 = (r0 & 65535);
}

loc_8009E684:
{
}

loc_8009E688:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r21))) {
        goto loc_8009E5F0;
    }
}

loc_8009E68C:
{
    goto loc_8009E8A0;
}

loc_8009E690:
{
    r21 = MemoryInline::FlatRead16(r24);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r21;
    r6 = MemoryInline::FlatRead32((r1 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_8009EF58_85B2 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_85B2);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_85B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r23 = r3;
    r0 = MemoryInline::FlatRead8((r24 + -10));
    r0 = (r0 & 2);
}

loc_8009E6BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E6D4;
    }
}

loc_8009E6C0:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r24 = (r3 + 4);
    goto loc_8009E700;
}

loc_8009E6D4:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_7 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r24 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_8009E700:
{
    r21 = MemoryInline::FlatRead16(r26);
    r3 = (r22 & 65535);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = r21;
    r6 = MemoryInline::FlatRead32((r1 + 28));
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_8009EF58_8E4C = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_8E4C);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_8E4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r22 = r3;
    r0 = MemoryInline::FlatRead8((r26 + -10));
    r0 = (r0 & 2);
}

loc_8009E72C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E744;
    }
}

loc_8009E730:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r21 * r29);
    r3 = (r3 + r0);
    r26 = (r3 + 4);
    goto loc_8009E770;
}

loc_8009E744:
{
    r6 = MemoryInline::FlatRead32((r1 + 44));
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_9 & 65535);
    r4 = MemoryInline::FlatRead16(r6);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r29 * r0);
    r4 = (r6 + r0);
    r26 = (r4 + 4);
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r22 = r3;
}

loc_8009E770:
{
    r21 = 1;
    r30 = (r30 & 255);
    goto loc_8009E898;
}

loc_8009E77C:
{
    r0 = (r28 & r21);
}

loc_8009E784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009E85C;
    }
}

loc_8009E788:
{
    r4 = MemoryInline::FlatRead8(r24);
    r3 = MemoryInline::FlatRead8((r24 + 1));
    r24 = (r24 + 2);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(16));
    r0 = (r0_rot_17 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 * r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0_addze_src_11 = r0;
    r0_ca_11 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_11 + r0_ca_11);
    r29 = (r4 + r0);
}

loc_8009E7B0:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_8009E7B8;
    }
}

loc_8009E7B4:
{
    r29 = 0;
}

loc_8009E7B8:
{
}

loc_8009E7BC:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(255))) {
        goto loc_8009E7C4;
    }
}

loc_8009E7C0:
{
    r29 = 255;
}

loc_8009E7C4:
{
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_8009E7D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E7E4;
    }
}

loc_8009E7D8:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
}

loc_8009E7E4:
{
    r4 = MemoryInline::FlatRead8(r26);
    r3 = MemoryInline::FlatRead8((r26 + 1));
    r26 = (r26 + 2);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 * r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0_addze_src_12 = r0;
    r0_ca_12 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_12 + r0_ca_12);
    r20 = (r4 + r0);
}

loc_8009E80C:
{
    if ((static_cast<int32_t>(r20) >= static_cast<int32_t>(0))) {
        goto loc_8009E814;
    }
}

loc_8009E810:
{
    r20 = 0;
}

loc_8009E814:
{
}

loc_8009E818:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(255))) {
        goto loc_8009E820;
    }
}

loc_8009E81C:
{
    r20 = 255;
}

loc_8009E820:
{
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_8009E830:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E840;
    }
}

loc_8009E834:
{
    r3 = r22;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r22 = r3;
}

loc_8009E840:
{
    r3 = r25;
    r4 = (r29 & 255);
    r5 = (r20 & 255);
    r6 = MemoryInline::FlatRead8(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009E8B8u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r3));
    goto loc_8009E888;
}

loc_8009E85C:
{
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 4);
}

loc_8009E86C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E888;
    }
}

loc_8009E870:
{
    r3 = r23;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r23 = r3;
    r3 = r22;
    // inline leaf 0x8009EF40 (6 guest instruction(s))
    r4 = 196608;
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    // end of inlined leaf 0x8009EF40
    r22 = r3;
}

loc_8009E888:
{
    r27 = (r27 + 1);
    r31 = (r31 + 1);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r21 = (r0 & 65535);
}

loc_8009E898:
{
}

loc_8009E89C:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(r30))) {
        goto loc_8009E77C;
    }
}

loc_8009E8A0:
{
    r11 = (r1 + 128);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009DF14 func_8009DF14 preserves=true fpr_mask=0x00000000
