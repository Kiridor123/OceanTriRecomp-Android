#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80487258(CpuContext* ctx);
extern "C" uint64_t func_80487258_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80486B8C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_sthux_80486CE0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80486B8C;

loc_80486B8C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_80486BA4:
{
    r27 = r3;
    r26 = r4;
    r28 = r5;
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_80486BB8;
    }
}

loc_80486BB4:
{
    r27 = 128;
}

loc_80486BB8:
{
}

loc_80486BBC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80486BC8;
    }
}

loc_80486BC0:
{
    r3 = 5;
    goto loc_80486D44;
}

loc_80486BC8:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r29 = 0;
    r31 = (r0 & -17);
    r30 = (r3 + 52);
}

loc_80486BE0:
{
    r0 = MemoryInline::FlatRead8((r30 + 281));
}

loc_80486BE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486C04;
    }
}

loc_80486BEC:
{
    r4 = r26;
    r3 = (r30 + 8);
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_D38 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_D38);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_D38 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80486C00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80486C14;
    }
}

loc_80486C04:
{
    r29 = (r29 + 1);
    r30 = (r30 + 284);
}

loc_80486C10:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(4))) {
        goto loc_80486BE0;
    }
}

loc_80486C14:
{
    r30 = (r29 & 255);
}

loc_80486C1C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(4))) {
        goto loc_80486C28;
    }
}

loc_80486C20:
{
    r3 = 7;
    goto loc_80486D44;
}

loc_80486C28:
{
    r0 = (r30 * 34);
    r4 = 0x80740000u;
    r3 = (r31 & 255);
}

loc_80486C34:
{
    r4 = (r4 + -17608);
    r4 = (r4 + r0);
    r29 = (r4 + 1228);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80486C70;
    }
}

loc_80486C44:
{
    r26 = (r3 + -1);
    // inline leaf 0x80484644 (4 guest instruction(s))
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r3 = (r3 + 1600);
    // end of inlined leaf 0x80484644
    r4 = (r2 + -2528);
    r5 = (r2 + -2524);
    r4_addr_1 = (r4 + r26);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r5_addr_1 = (r5 + r26);
    r4 = MemoryInline::FlatRead8(r5_addr_1);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80486C70;
    }
}

loc_80486C68:
{
    r3 = 4;
    goto loc_80486D44;
}

loc_80486C70:
{
    r0 = MemoryInline::FlatRead8((r29 + 32));
    r3 = (r31 & 255);
}

loc_80486C7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80486CAC;
    }
}

loc_80486C80:
{
}

loc_80486C84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80486CA4;
    }
}

loc_80486C88:
{
    r3 = MemoryInline::FlatRead16((r29 + 30));
    r0 = MemoryInline::FlatRead16(r28);
}

loc_80486C94:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80486CAC;
    }
}

loc_80486C98:
{
    r0 = MemoryInline::FlatRead16((r28 + 2));
}

loc_80486CA0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r3))) {
        goto loc_80486CAC;
    }
}

loc_80486CA4:
{
    r3 = 0;
    goto loc_80486D44;
}

loc_80486CAC:
{
}

loc_80486CB0:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(128))) {
        goto loc_80486D04;
    }
}

loc_80486CB4:
{
    r3 = 0x80740000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 2040);
    r3 = (r3 + -17608);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1368));
    r0 = (r0 & 1);
}

loc_80486CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486D04;
    }
}

loc_80486CD0:
{
    r4 = MemoryInline::FlatRead16(r28);
    r5 = (r27 * 10);
    r3 = MemoryInline::FlatRead16((r28 + 2));
    r0 = 1;
    addr_sthux_80486CE0_loc_0 = (r5 + r29);
    MemoryInline::FlatWrite16(addr_sthux_80486CE0_loc_0, static_cast<uint16_t>(r4));
    r5 = addr_sthux_80486CE0_loc_0;
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead16((r28 + 4));
    r3 = MemoryInline::FlatRead16((r28 + 6));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r28 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r29 + 33), static_cast<uint8_t>(r0));
}

loc_80486D04:
{
    r0 = MemoryInline::FlatRead8((r29 + 32));
}

loc_80486D0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80486D2C;
    }
}

loc_80486D10:
{
}

loc_80486D14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_80486D2C;
    }
}

loc_80486D18:
{
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r0 = MemoryInline::FlatRead8((r3 + 1380));
}

loc_80486D28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_80486D34;
    }
}

loc_80486D2C:
{
    r3 = 13;
    goto loc_80486D44;
}

loc_80486D34:
{
    r3 = r27;
    r4 = r30;
    r5 = r28;
    ctx->lr = 0x80486D44u;
    if constexpr (KnownRegArgsCpuCall<0x80487258u>(&func_80487258)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80487258_215B = func_80487258_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80487258_215B);
        r4 = static_cast<uint32_t>(regargs_result_80487258_215B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80487258u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80486D44:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80486B8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80486B8C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80486B8C func_80486B8C preserves=true fpr_mask=0x00000000
