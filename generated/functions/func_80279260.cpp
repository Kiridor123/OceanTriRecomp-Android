#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80279260_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_left_0 = 0;
    uint32_t r0_addc_left_1 = 0;
    uint32_t r0_addc_left_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_80279260;

loc_80279260:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_80279288:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80279294;
    }
}

loc_8027928C:
{
    r3 = 1;
    goto loc_802793A8;
}

loc_80279294:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -776);
    r0 = (r30 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r31 = MemoryInline::FlatRead8((r3 + 1));
    r3 = (r29 + 464);
    ctx->lr = 0x802792B4u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8027ED7C_9A1 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_9A1);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_9A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = MemoryInline::FlatRead8((r3 + 9));
    r0 = MemoryInline::FlatRead8((r29 + 500));
}

loc_802792C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_802792D4;
    }
}

loc_802792C4:
{
    r3 = (r29 + 500);
    ctx->lr = 0x802792CCu;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8027ED7C_DA5 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_DA5);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_DA5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r30 = (r30 + r0);
}

loc_802792D4:
{
    r3 = r29;
    r4 = 39;
    ctx->lr = 0x802792E0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802792E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802792F0;
    }
}

loc_802792E8:
{
    r0 = (r30 + 2);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802792F0:
{
    r3 = r29;
    r4 = 40;
    ctx->lr = 0x802792FCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80279300:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027930C;
    }
}

loc_80279304:
{
    r0 = (r30 + 3);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8027930C:
{
    r3 = r29;
    r4 = 41;
    ctx->lr = 0x80279318u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027931C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80279328;
    }
}

loc_80279320:
{
    r0 = (r30 + 4);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80279328:
{
    r3 = r29;
    r4 = 42;
    ctx->lr = 0x80279334u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80279338:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80279344;
    }
}

loc_8027933C:
{
    r0 = (r30 + -1);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80279344:
{
    r3 = r29;
    r4 = 43;
    ctx->lr = 0x80279350u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80279354:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80279360;
    }
}

loc_80279358:
{
    r0 = (r30 + -2);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80279360:
{
    r3 = r29;
    r4 = 44;
    ctx->lr = 0x8027936Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80279370:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027937C;
    }
}

loc_80279374:
{
    r0 = (r30 + -3);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8027937C:
{
    r31 = (r31 - r30);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_80279388:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(4))) {
        goto loc_80279394;
    }
}

loc_8027938C:
{
    r3 = 0;
    goto loc_802793A8;
}

loc_80279394:
{
    r3 = (r0 ^ -2147483648);
    r0_subfic_ra_1 = r0;
    r0 = (7 - r0_subfic_ra_1);
    r0_addc_left_1 = r0;
    r0 = (r0_addc_left_1 + r3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_1 = ~(r0);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r0);
    r3 = (r3 + r3_ca_1);
    r3 = (r3 + 2);
}

loc_802793A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80279260(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80279260_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80279260 func_80279260 preserves=true fpr_mask=0x00000000
