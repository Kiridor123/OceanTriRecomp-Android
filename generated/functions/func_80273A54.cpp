#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80273A54_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_psqx_80273B58_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80273A54;

loc_80273A54:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r31 = r6;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_80273A9C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80273AEC;
    }
}

loc_80273AA0:
{
    r4 = 65;
    ctx->lr = 0x80273AA8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80273AAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80273AC4;
    }
}

loc_80273AB0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14948));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80273B48;
}

loc_80273AC4:
{
    r3 = r30;
    r4 = 66;
    ctx->lr = 0x80273AD0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80273AD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80273B48;
    }
}

loc_80273AD8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14888));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r0 = 2;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80273B48;
}

loc_80273AEC:
{
    r4 = 63;
    ctx->lr = 0x80273AF4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80273AF8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80273B10;
    }
}

loc_80273AFC:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_E5B = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_E5B);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_E5B >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80273B0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80273B24;
    }
}

loc_80273B10:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14884));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80273B48;
}

loc_80273B24:
{
    r3 = r30;
    r4 = 64;
    ctx->lr = 0x80273B30u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80273B34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80273B48;
    }
}

loc_80273B38:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14920));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r0 = 2;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_80273B48:
{
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    r0 = 40;
    addr_psqx_80273B58_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80273B58_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80273A54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80273A54_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80273A54 func_80273A54 preserves=true fpr_mask=0x00000000
