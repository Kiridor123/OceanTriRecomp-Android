#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804514C8(CpuContext* ctx);
extern "C" uint64_t func_804514C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80339B2C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80339B2C;

loc_80339B2C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r28 = r6;
    r0 = (r6 & 255);
}

loc_80339B60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80339B84;
    }
}

loc_80339B64:
{
    // inline leaf 0x80451720 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x80451720
}

loc_80339B6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80339B78;
    }
}

loc_80339B70:
{
    r28 = 0;
    goto loc_80339B84;
}

loc_80339B78:
{
    r0 = MemoryInline::FlatRead8((r29 + 27200));
}

loc_80339B80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80339C2C;
    }
}

loc_80339B84:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r4 = (r3 & 255);
    r3 = (r1 + 8);
    r5 = 13;
    r6 = 25;
    // inline leaf 0x80334A98 (6 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 27u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x80334A98
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r31);
    r0 = MemoryInline::FlatRead32((r29 + 148));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r0);
    r0 = MemoryInline::FlatRead32((r29 + 244));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r29 + 340));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 24), r0);
    r0 = MemoryInline::FlatRead8((r29 + 27196));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r1 + 28), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r1 + 29), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead8((r29 + 27194));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 27195));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r1 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 27197));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r1 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 27198));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r1 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 27199));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r1 + 34), static_cast<uint8_t>(r0));
    r0 = (r28 & 255);
}

loc_80339BF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80339C08;
    }
}

loc_80339BF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 27200), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r0));
    goto loc_80339C10;
}

loc_80339C08:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r0));
}

loc_80339C10:
{
    r3 = (r1 + 8);
    r4 = 28;
    ctx->lr = 0x80339C1Cu;
    if constexpr (KnownRegArgsCpuCall<0x804514C8u>(&func_804514C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804514C8_154D = func_804514C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804514C8_154D);
        r4 = static_cast<uint32_t>(regargs_result_804514C8_154D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804514C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite8((r29 + 27240), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite32((r29 + 32), r31);
    r0 = 4;
    MemoryInline::FlatWrite8((r29 + 44), static_cast<uint8_t>(r0));
}

loc_80339C2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_80339B2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80339B2C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80339B2C func_80339B2C preserves=true fpr_mask=0x00000000
