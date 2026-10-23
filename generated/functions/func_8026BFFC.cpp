#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A67C(CpuContext* ctx);
extern "C" uint32_t func_8026A67C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026A6A8(CpuContext* ctx);
extern "C" uint32_t func_8026A6A8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026B998(CpuContext* ctx);
extern "C" uint32_t func_8026B998_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8026BA68(CpuContext* ctx);
extern "C" uint32_t func_8026BA68_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8026BA80(CpuContext* ctx);
extern "C" uint64_t func_8026BA80_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8026BEF8(CpuContext* ctx);
extern "C" uint64_t func_8026BEF8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026F96C(CpuContext* ctx);
extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803BED2C(CpuContext* ctx);
extern "C" uint64_t func_803BED2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8026BA68_statefree(uint32_t);

extern "C" uint64_t func_8026BFFC_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_10 = 0;
    uint32_t r0_addze_src_11 = 0;
    uint32_t r0_addze_src_12 = 0;
    uint32_t r0_addze_src_13 = 0;
    uint32_t r0_addze_src_14 = 0;
    uint32_t r0_addze_src_15 = 0;
    uint32_t r0_addze_src_16 = 0;
    uint32_t r0_addze_src_17 = 0;
    uint32_t r0_addze_src_18 = 0;
    uint32_t r0_addze_src_19 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_20 = 0;
    uint32_t r0_addze_src_21 = 0;
    uint32_t r0_addze_src_22 = 0;
    uint32_t r0_addze_src_23 = 0;
    uint32_t r0_addze_src_24 = 0;
    uint32_t r0_addze_src_25 = 0;
    uint32_t r0_addze_src_26 = 0;
    uint32_t r0_addze_src_27 = 0;
    uint32_t r0_addze_src_28 = 0;
    uint32_t r0_addze_src_29 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_30 = 0;
    uint32_t r0_addze_src_31 = 0;
    uint32_t r0_addze_src_32 = 0;
    uint32_t r0_addze_src_33 = 0;
    uint32_t r0_addze_src_34 = 0;
    uint32_t r0_addze_src_35 = 0;
    uint32_t r0_addze_src_36 = 0;
    uint32_t r0_addze_src_37 = 0;
    uint32_t r0_addze_src_38 = 0;
    uint32_t r0_addze_src_39 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_addze_src_40 = 0;
    uint32_t r0_addze_src_41 = 0;
    uint32_t r0_addze_src_42 = 0;
    uint32_t r0_addze_src_43 = 0;
    uint32_t r0_addze_src_44 = 0;
    uint32_t r0_addze_src_45 = 0;
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
    uint32_t r0_ca_15 = 0;
    uint32_t r0_ca_16 = 0;
    uint32_t r0_ca_17 = 0;
    uint32_t r0_ca_18 = 0;
    uint32_t r0_ca_19 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_20 = 0;
    uint32_t r0_ca_21 = 0;
    uint32_t r0_ca_22 = 0;
    uint32_t r0_ca_23 = 0;
    uint32_t r0_ca_24 = 0;
    uint32_t r0_ca_25 = 0;
    uint32_t r0_ca_26 = 0;
    uint32_t r0_ca_27 = 0;
    uint32_t r0_ca_28 = 0;
    uint32_t r0_ca_29 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_30 = 0;
    uint32_t r0_ca_31 = 0;
    uint32_t r0_ca_32 = 0;
    uint32_t r0_ca_33 = 0;
    uint32_t r0_ca_34 = 0;
    uint32_t r0_ca_35 = 0;
    uint32_t r0_ca_36 = 0;
    uint32_t r0_ca_37 = 0;
    uint32_t r0_ca_38 = 0;
    uint32_t r0_ca_39 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_40 = 0;
    uint32_t r0_ca_41 = 0;
    uint32_t r0_ca_42 = 0;
    uint32_t r0_ca_43 = 0;
    uint32_t r0_ca_44 = 0;
    uint32_t r0_ca_45 = 0;
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
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8026BFFC;

loc_8026BFFC:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r30 = r3;
    r31 = (r3 + 184);
    r28 = (r1 + 8);
    r29 = (r1 + 200);
}

loc_8026C028:
{
    r3 = r28;
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r28 = (r28 + 12);
}

loc_8026C038:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r29))) {
        goto loc_8026C028;
    }
}

loc_8026C03C:
{
    r0 = MemoryInline::FlatRead8((r31 + 112));
}

loc_8026C044:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8026C054;
    }
}

loc_8026C048:
{
}

loc_8026C04C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026C77C;
    }
}

loc_8026C050:
{
    goto loc_8026CC28;
}

loc_8026C054:
{
    r5 = MemoryInline::FlatRead8((r31 + 125));
}

loc_8026C05C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_8026C0C4;
    }
}

loc_8026C060:
{
    r4 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r4 & 288);
}

loc_8026C068:
{
}

loc_8026C06C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(288))) {
        goto loc_8026C080;
    }
}

loc_8026C070:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
    goto loc_8026C244;
}

loc_8026C080:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r3));
    r0 = (r4 & 800);
}

loc_8026C08C:
{
}

loc_8026C090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C0B8;
    }
}

loc_8026C094:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r31 + 125), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 127), static_cast<uint8_t>(r0));
    r0 = (r4 & 800);
}

loc_8026C0A8:
{
    MemoryInline::FlatWrite16((r31 + 128), static_cast<uint16_t>(r0));
    r0 = (r4 & 256);
    MemoryInline::FlatWrite16((r31 + 130), static_cast<uint16_t>(r0));
    goto loc_8026C244;
}

loc_8026C0B8:
{
    MemoryInline::FlatWrite16((r31 + 128), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 130), static_cast<uint16_t>(r3));
    goto loc_8026C244;
}

loc_8026C0C4:
{
    r3 = MemoryInline::FlatRead8((r31 + 127));
    r3 = MH3_TickLoad(r3, 2150023364);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 127), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_8026C0D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C0EC;
    }
}

loc_8026C0DC:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 800);
}

loc_8026C0E4:
{
}

loc_8026C0E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C1D8;
    }
}

loc_8026C0EC:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r3 & 800);
}

loc_8026C0F4:
{
}

loc_8026C0F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C178;
    }
}

loc_8026C0FC:
{
    r0 = (r3 & 512);
}

loc_8026C104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C114;
    }
}

loc_8026C108:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
}

loc_8026C114:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 256);
}

loc_8026C120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C130;
    }
}

loc_8026C124:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
}

loc_8026C130:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32);
}

loc_8026C13C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C14C;
    }
}

loc_8026C140:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
}

loc_8026C14C:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = MemoryInline::FlatRead16((r31 + 128));
    r0 = (r3 | r0);
    r0 = (r0 & 65535);
    r0 = (r0 & 288);
}

loc_8026C160:
{
}

loc_8026C164:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(288))) {
        goto loc_8026C1CC;
    }
}

loc_8026C168:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
    goto loc_8026C1CC;
}

loc_8026C178:
{
    r0 = MemoryInline::FlatRead16((r31 + 128));
    r0 = (r0 & 512);
}

loc_8026C184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C194;
    }
}

loc_8026C188:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
}

loc_8026C194:
{
    r0 = MemoryInline::FlatRead16((r31 + 128));
    r0 = (r0 & 256);
}

loc_8026C1A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C1B0;
    }
}

loc_8026C1A4:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
}

loc_8026C1B0:
{
    r0 = MemoryInline::FlatRead16((r31 + 128));
    r0 = (r0 & 32);
}

loc_8026C1BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C1CC;
    }
}

loc_8026C1C0:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
}

loc_8026C1CC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 125), static_cast<uint8_t>(r0));
    goto loc_8026C244;
}

loc_8026C1D8:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 800);
}

loc_8026C1E0:
{
}

loc_8026C1E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026C244;
    }
}

loc_8026C1E8:
{
    r0 = MemoryInline::FlatRead16((r31 + 128));
    r0 = (r0 & 512);
}

loc_8026C1F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C204;
    }
}

loc_8026C1F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
}

loc_8026C204:
{
    r0 = MemoryInline::FlatRead16((r31 + 128));
    r0 = (r0 & 256);
}

loc_8026C210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C220;
    }
}

loc_8026C214:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
}

loc_8026C220:
{
    r0 = MemoryInline::FlatRead16((r31 + 128));
    r0 = (r0 & 32);
}

loc_8026C22C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C23C;
    }
}

loc_8026C230:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 126), static_cast<uint8_t>(r0));
}

loc_8026C23C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 125), static_cast<uint8_t>(r0));
}

loc_8026C244:
{
    r3 = r30;
    r4 = r31;
    r5 = 128;
    r6 = 2;
    ctx->lr = 0x8026C258u;
    if constexpr (KnownRegArgsCpuCall<0x8026BEF8u>(&func_8026BEF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BEF8_3767 = func_8026BEF8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026BEF8_3767);
        r4 = static_cast<uint32_t>(regargs_result_8026BEF8_3767 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026BEF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 128);
}

loc_8026C264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C298;
    }
}

loc_8026C268:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 34;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 37;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_3 = r0;
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_3 + r0_ca_3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 50;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_4 = r0;
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_4 + r0_ca_4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C298:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026C2A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C2E4;
    }
}

loc_8026C2A8:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_6 = r0;
    r0_ca_6 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_6 + r0_ca_6);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 20;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_7 = r0;
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_7 + r0_ca_7);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 13;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_8 = r0;
    r0_ca_8 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_8 + r0_ca_8);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 14;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_9 = r0;
    r0_ca_9 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_9 + r0_ca_9);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 22;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_10 = r0;
    r0_ca_10 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_10 + r0_ca_10);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C2E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1477));
}

loc_8026C2EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C394;
    }
}

loc_8026C2F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32768);
}

loc_8026C2FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C30C;
    }
}

loc_8026C300:
{
    r3 = r30;
    r4 = 8;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_12 = r0;
    r0_ca_12 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_12 + r0_ca_12);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C30C:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 1);
}

loc_8026C318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C334;
    }
}

loc_8026C31C:
{
    r3 = r30;
    r4 = 10;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_14 = r0;
    r0_ca_14 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_14 + r0_ca_14);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 11;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_15 = r0;
    r0_ca_15 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_15 + r0_ca_15);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C334:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 2);
}

loc_8026C340:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C480;
    }
}

loc_8026C344:
{
    r0 = MemoryInline::FlatRead8((r30 + 776));
}

loc_8026C34C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026C384;
    }
}

loc_8026C350:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_76E5 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_76E5);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_76E5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026C364:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026C378;
    }
}

loc_8026C368:
{
    r3 = r30;
    r4 = 27;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_17 = r0;
    r0_ca_17 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_17 + r0_ca_17);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026C384;
}

loc_8026C378:
{
    r3 = r30;
    r4 = 26;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_18 = r0;
    r0_ca_18 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_18 + r0_ca_18);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C384:
{
    r3 = r30;
    r4 = 76;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_20 = r0;
    r0_ca_20 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_20 + r0_ca_20);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026C480;
}

loc_8026C394:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 1);
}

loc_8026C3A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C3BC;
    }
}

loc_8026C3A4:
{
    r3 = r30;
    r4 = 8;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_21 = r0;
    r0_ca_21 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_21 + r0_ca_21);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 76;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_22 = r0;
    r0_ca_22 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_22 + r0_ca_22);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C3BC:
{
    r3 = MemoryInline::FlatRead16((r31 + 20));
    r0 = (r3 & 60);
}

loc_8026C3C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C414;
    }
}

loc_8026C3CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 776));
}

loc_8026C3D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026C414;
    }
}

loc_8026C3D8:
{
    r0 = (r3 & 16);
}

loc_8026C3E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C3FC;
    }
}

loc_8026C3E4:
{
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_24 = r0;
    r0_ca_24 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_24 + r0_ca_24);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_25 = r0;
    r0_ca_25 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_25 + r0_ca_25);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C3FC:
{
    r3 = r30;
    r4 = 11;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_27 = r0;
    r0_ca_27 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_27 + r0_ca_27);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 10;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_28 = r0;
    r0_ca_28 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_28 + r0_ca_28);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C414:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 256);
}

loc_8026C420:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C458;
    }
}

loc_8026C424:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_A815 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_A815);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_A815 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026C438:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026C44C;
    }
}

loc_8026C43C:
{
    r3 = r30;
    r4 = 27;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_30 = r0;
    r0_ca_30 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_30 + r0_ca_30);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026C458;
}

loc_8026C44C:
{
    r3 = r30;
    r4 = 26;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_31 = r0;
    r0_ca_31 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_31 + r0_ca_31);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C458:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32);
}

loc_8026C464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C480;
    }
}

loc_8026C468:
{
    r3 = r30;
    r4 = 13;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_33 = r0;
    r0_ca_33 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_33 + r0_ca_33);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 14;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_34 = r0;
    r0_ca_34 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_34 + r0_ca_34);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_34 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C480:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 128);
}

loc_8026C48C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C504;
    }
}

loc_8026C490:
{
    r3 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r3 & 8);
}

loc_8026C49C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C4D4;
    }
}

loc_8026C4A0:
{
    r3 = r30;
    r4 = 18;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_36 = r0;
    r0_ca_36 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_36 + r0_ca_36);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 19;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_37 = r0;
    r0_ca_37 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_37 + r0_ca_37);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_37 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 15;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_38 = r0;
    r0_ca_38 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_38 + r0_ca_38);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_38 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 16;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_39 = r0;
    r0_ca_39 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_39 + r0_ca_39);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_39 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026C4F8;
}

loc_8026C4D4:
{
    r0 = (r3 & 1);
}

loc_8026C4DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C4F8;
    }
}

loc_8026C4E0:
{
    r3 = r30;
    r4 = 15;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_40 = r0;
    r0_ca_40 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_40 + r0_ca_40);
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_40 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    r3 = r30;
    r4 = 16;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_41 = r0;
    r0_ca_41 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_41 + r0_ca_41);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_41 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C4F8:
{
    r3 = r30;
    r4 = 28;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_43 = r0;
    r0_ca_43 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_43 + r0_ca_43);
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_43 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026C504:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 128);
}

loc_8026C510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C520;
    }
}

loc_8026C514:
{
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_E23A = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_E23A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C520:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    r4 = 10;
    r5 = 1;
    ctx->lr = 0x8026C530u;
    if constexpr (KnownRegArgsCpuCall<0x803BED2Cu>(&func_803BED2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_803BED2C_E5D4 = func_803BED2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803BED2C_E5D4);
        r4 = static_cast<uint32_t>(regargs_result_803BED2C_E5D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803BED2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026C534:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026C570;
    }
}

loc_8026C538:
{
    r3 = MemoryInline::FlatRead16(r31);
    r0 = (r3 & 4);
}

loc_8026C544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C558;
    }
}

loc_8026C548:
{
    r3 = r30;
    r4 = 43;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_EB0B = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_EB0B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026C570;
}

loc_8026C558:
{
    r0 = (r3 & 16);
}

loc_8026C560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C570;
    }
}

loc_8026C564:
{
    r3 = r30;
    r4 = 44;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_EF3C = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_EF3C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C570:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 16);
}

loc_8026C57C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C58C;
    }
}

loc_8026C580:
{
    r3 = r30;
    r4 = 39;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_F37E = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_F37E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C58C:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 4);
}

loc_8026C598:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C5A8;
    }
}

loc_8026C59C:
{
    r3 = r30;
    r4 = 38;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_F7BF = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_F7BF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C5A8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 16);
}

loc_8026C5B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C5D0;
    }
}

loc_8026C5B8:
{
    r3 = r30;
    r4 = 33;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_FC07 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_FC07;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 49;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_FF61 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_FF61;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C5D0:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 4);
}

loc_8026C5DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C5F8;
    }
}

loc_8026C5E0:
{
    r3 = r30;
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_103A8 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_103A8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 48;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_10704 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_10704;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C5F8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026C604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C644;
    }
}

loc_8026C608:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_10B4D = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_10B4D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 51;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_10EA9 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_10EA9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_11204 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_11204;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 47;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_11560 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_11560;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    ctx->lr = 0x8026C640u;
    if constexpr (KnownRegArgsCpuCall<0x8026BA80u>(&func_8026BA80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA80_118E1 = func_8026BA80_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8026BA80_118E1);
        r4 = static_cast<uint32_t>(regargs_result_8026BA80_118E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026BA80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8026C688;
}

loc_8026C644:
{
    r0 = MemoryInline::FlatRead8((r31 + 113));
}

loc_8026C64C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C688;
    }
}

loc_8026C650:
{
    r3 = MemoryInline::FlatRead16((r30 + 188));
    r0 = (r3 & 4);
}

loc_8026C65C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C670;
    }
}

loc_8026C660:
{
    r3 = r30;
    r4 = 64;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_11FAB = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_11FAB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026C688;
}

loc_8026C670:
{
    r0 = (r3 & 16);
}

loc_8026C678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C688;
    }
}

loc_8026C67C:
{
    r3 = r30;
    r4 = 65;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_123DE = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_123DE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C688:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32);
}

loc_8026C694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C6F8;
    }
}

loc_8026C698:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_12827 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_12827;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_12B82 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_12B82;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_12EDD = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_12EDD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 53;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_13239 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_13239;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r30 + 776));
}

loc_8026C6D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026C6F8;
    }
}

loc_8026C6D4:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_13657 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_13657;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 52;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_139B3 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_139B3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 77;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_13D0F = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_13D0F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C6F8:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 128);
}

loc_8026C704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C75C;
    }
}

loc_8026C708:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32);
}

loc_8026C714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C75C;
    }
}

loc_8026C718:
{
    r3 = r30;
    r4 = 71;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1422B = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1422B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 73;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_14587 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_14587;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6A8u>(&func_8026A6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A6A8_148C7 = func_8026A6A8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6A8_148C7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8026C740:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026C75C;
    }
}

loc_8026C744:
{
    r3 = r30;
    r4 = 70;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_14C65 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_14C65;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 72;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_14FC1 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_14FC1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C75C:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 128);
}

loc_8026C768:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CC28;
    }
}

loc_8026C76C:
{
    r3 = r30;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_15406 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_15406;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026CC28;
}

loc_8026C77C:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    r4 = 10;
    r5 = 1;
    ctx->lr = 0x8026C78Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BED2Cu>(&func_803BED2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_803BED2C_157BA = func_803BED2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803BED2C_157BA);
        r4 = static_cast<uint32_t>(regargs_result_803BED2C_157BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x803BED2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026C790:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026C7CC;
    }
}

loc_8026C794:
{
    r3 = MemoryInline::FlatRead16(r31);
    r0 = (r3 & 8192);
}

loc_8026C7A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C7B4;
    }
}

loc_8026C7A4:
{
    r3 = r30;
    r4 = 43;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_15CF7 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_15CF7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026C7CC;
}

loc_8026C7B4:
{
    r0 = (r3 & 4096);
}

loc_8026C7BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C7CC;
    }
}

loc_8026C7C0:
{
    r3 = r30;
    r4 = 44;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1612C = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1612C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C7CC:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 4);
}

loc_8026C7D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C800;
    }
}

loc_8026C7DC:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1656E = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1656E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 50;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_168CA = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_168CA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 37;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_16C26 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_16C26;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C800:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 128);
}

loc_8026C80C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C840;
    }
}

loc_8026C810:
{
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_17071 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_17071;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_173CD = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_173CD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_17729 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_17729;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_17A85 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_17A85;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C840:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r3 & 32);
}

loc_8026C84C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026C868;
    }
}

loc_8026C850:
{
    r0 = (r3 & 512);
}

loc_8026C858:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C898;
    }
}

loc_8026C85C:
{
    r0 = MemoryInline::FlatRead8((r30 + 776));
}

loc_8026C864:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026C898;
    }
}

loc_8026C868:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1803C = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1803C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_18398 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_18398;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_186F4 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_186F4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_18A50 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_18A50;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C898:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 256);
}

loc_8026C8A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026C8C8;
    }
}

loc_8026C8A8:
{
    r3 = MemoryInline::FlatRead8((r31 + 105));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
}

loc_8026C8B8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8026C8C8;
    }
}

loc_8026C8BC:
{
    r3 = r30;
    r4 = 47;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_18F84 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_18F84;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C8C8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 256);
}

loc_8026C8D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C940;
    }
}

loc_8026C8D8:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_193CE = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_193CE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 51;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1972A = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1972A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_19A85 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_19A85;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r31 + 120));
}

loc_8026C904:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(24))) {
        goto loc_8026C938;
    }
}

loc_8026C908:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026C914:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026C92C;
    }
}

loc_8026C91C:
{
    r3 = r30;
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1A045 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1A045;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026C938;
}

loc_8026C92C:
{
    r3 = r30;
    r4 = 33;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1A3D0 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1A3D0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C938:
{
    r3 = r30;
    ctx->lr = 0x8026C940u;
    if constexpr (KnownRegArgsCpuCall<0x8026BA80u>(&func_8026BA80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA80_1A768 = func_8026BA80_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8026BA80_1A768);
        r4 = static_cast<uint32_t>(regargs_result_8026BA80_1A768 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026BA80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8026C940:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 256);
}

loc_8026C94C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C9B8;
    }
}

loc_8026C950:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026C95C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026C990;
    }
}

loc_8026C964:
{
    r3 = r30;
    r4 = 38;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1AEF1 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1AEF1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r31 + 105));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8026C97C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8026C9B8;
    }
}

loc_8026C980:
{
    r3 = r30;
    r4 = 48;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1B34B = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1B34B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026C9B8;
}

loc_8026C990:
{
    r3 = r30;
    r4 = 39;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1B6D6 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1B6D6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r31 + 105));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8026C9A8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8026C9B8;
    }
}

loc_8026C9AC:
{
    r3 = r30;
    r4 = 49;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1BB30 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1BB30;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C9B8:
{
    r3 = r30;
    r4 = r31;
    r5 = 4;
    r6 = 7;
    ctx->lr = 0x8026C9CCu;
    if constexpr (KnownRegArgsCpuCall<0x8026BEF8u>(&func_8026BEF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BEF8_1BED6 = func_8026BEF8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026BEF8_1BED6);
        r4 = static_cast<uint32_t>(regargs_result_8026BEF8_1BED6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026BEF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026C9D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026C9E8;
    }
}

loc_8026C9DC:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1C404 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1C404;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026C9E8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026C9F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026CA08;
    }
}

loc_8026C9F8:
{
    r3 = r30;
    // inline leaf 0x8026BA68 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 308));
    r3 = (r0 & 2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026BA68
}

loc_8026CA04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CA4C;
    }
}

loc_8026CA08:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1CA2D = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1CA2D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6A8u>(&func_8026A6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A6A8_1CD6D = func_8026A6A8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6A8_1CD6D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8026CA24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026CA4C;
    }
}

loc_8026CA28:
{
    r3 = r30;
    r4 = 52;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1D10B = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1D10B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1D466 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1D466;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1D7C1 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1D7C1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CA4C:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 4);
}

loc_8026CA58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CA6C;
    }
}

loc_8026CA5C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026CA68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026CA7C;
    }
}

loc_8026CA6C:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8026BA68u) && KnownTranslatedCpuCall<0x8026BA68u>::kAvailable && !KnownTranslatedCpuCall<0x8026BA68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026BA68u>()) {
        const auto state_free_result_8026BA68_1DD0F = func_8026BA68_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_8026BA68_1DD0F[0]);
        r3 = static_cast<uint32_t>(state_free_result_8026BA68_1DD0F[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026BA68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8026CA78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CAE8;
    }
}

loc_8026CA7C:
{
    r3 = r30;
    r4 = 71;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1E1E1 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1E1E1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026CA94:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026CAA8;
    }
}

loc_8026CA9C:
{
    r3 = r30;
    r4 = 73;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1E6DD = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1E6DD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CAA8:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6A8u>(&func_8026A6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A6A8_1EA34 = func_8026A6A8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6A8_1EA34;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8026CAB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026CAE8;
    }
}

loc_8026CABC:
{
    r3 = r30;
    r4 = 70;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1EDD2 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1EDD2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026CAD4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026CAE8;
    }
}

loc_8026CADC:
{
    r3 = r30;
    r4 = 72;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1F2CE = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1F2CE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CAE8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 544);
}

loc_8026CAF0:
{
}

loc_8026CAF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026CB08;
    }
}

loc_8026CAF8:
{
    r0 = MemoryInline::FlatRead8((r31 + 124));
    r0 = (r0 & 4);
}

loc_8026CB04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CB14;
    }
}

loc_8026CB08:
{
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1F806 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1F806;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CB14:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 4);
}

loc_8026CB20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CB30;
    }
}

loc_8026CB24:
{
    r3 = r30;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_1FC49 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_1FC49;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CB30:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32);
}

loc_8026CB3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CB4C;
    }
}

loc_8026CB40:
{
    r3 = r30;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_20093 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_20093;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CB4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026CB58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CB94;
    }
}

loc_8026CB5C:
{
    r3 = r30;
    r4 = 76;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_204DE = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_204DE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6A8u>(&func_8026A6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A6A8_2081E = func_8026A6A8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6A8_2081E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8026CB78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026CB94;
    }
}

loc_8026CB7C:
{
    r3 = r30;
    r4 = 53;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_20BBC = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_20BBC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 77;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_20F18 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_20F18;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CB94:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32);
}

loc_8026CBA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CBB0;
    }
}

loc_8026CBA4:
{
    r3 = r30;
    r4 = 22;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_21362 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_21362;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CBB0:
{
    r3 = r30;
    ctx->lr = 0x8026CBB8u;
    if constexpr (KnownRegArgsCpuCall<0x8026B998u>(&func_8026B998)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026B998_216FA = func_8026B998_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026B998_216FA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026B998u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026CBBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CBD8;
    }
}

loc_8026CBC0:
{
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_21B14 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_21B14;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_21E70 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_21E70;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CBD8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026CBE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CC28;
    }
}

loc_8026CBE8:
{
    r0 = MemoryInline::FlatRead8((r30 + 776));
}

loc_8026CBF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026CC28;
    }
}

loc_8026CBF4:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_22379 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_22379);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_22379 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026CC08:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026CC1C;
    }
}

loc_8026CC0C:
{
    r3 = r30;
    r4 = 27;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_22813 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_22813;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026CC28;
}

loc_8026CC1C:
{
    r3 = r30;
    r4 = 26;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_22B9E = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_22B9E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CC28:
{
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026BFFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026BFFC_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8026BFFC func_8026BFFC preserves=true fpr_mask=0x00000000
