#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8040FB14(CpuContext* ctx);
extern "C" uint64_t func_8040FB14_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8040F96C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_10 = 0;
    uint32_t r6_addr_11 = 0;
    uint32_t r6_addr_12 = 0;
    uint32_t r6_addr_13 = 0;
    uint32_t r6_addr_14 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8040F96C;

loc_8040F96C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = 0;
}

loc_8040F980:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8040FAF8;
    }
}

loc_8040F984:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 887u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8040F990:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8040F9A0;
    }
}

loc_8040F994:
{
    r0 = 2;
    r5 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_8040F9A0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 64u, (r4 + 68));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8040F9AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8040F9EC;
    }
}

loc_8040F9B0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 65u, (r4 + 69));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8040F9BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8040F9EC;
    }
}

loc_8040F9C0:
{
    r6 = 3;
    r0 = r5;
    r5 = (r5 + 1);
    r0 = (r0 & 255);
    r7 = (r1 + 8);
    r7_addr_1 = (r7 + r0);
    MemoryInline::FlatWrite8(r7_addr_1, static_cast<uint8_t>(r6));
    r6 = 4;
    r0 = r5;
    r5 = (r5 + 1);
    r0 = (r0 & 255);
    r7_addr_2 = (r7 + r0);
    MemoryInline::FlatWrite8(r7_addr_2, static_cast<uint8_t>(r6));
}

loc_8040F9EC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 338u, (r4 + 342));
}

loc_8040F9F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8040FA10;
    }
}

loc_8040F9F8:
{
    r7 = 5;
    r0 = r5;
    r5 = (r5 + 1);
    r0 = (r0 & 255);
    r6 = (r1 + 8);
    r6_addr_1 = (r6 + r0);
    MemoryInline::FlatWrite8(r6_addr_1, static_cast<uint8_t>(r7));
}

loc_8040FA10:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 340u, (r4 + 344));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8040FA1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8040FA38;
    }
}

loc_8040FA20:
{
    r7 = 6;
    r0 = r5;
    r5 = (r5 + 1);
    r0 = (r0 & 255);
    r6 = (r1 + 8);
    r6_addr_3 = (r6 + r0);
    MemoryInline::FlatWrite8(r6_addr_3, static_cast<uint8_t>(r7));
}

loc_8040FA38:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 860u, (r4 + 864));
}

loc_8040FA40:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8040FA5C;
    }
}

loc_8040FA44:
{
    r7 = 9;
    r0 = r5;
    r5 = (r5 + 1);
    r0 = (r0 & 255);
    r6 = (r1 + 8);
    r6_addr_5 = (r6 + r0);
    MemoryInline::FlatWrite8(r6_addr_5, static_cast<uint8_t>(r7));
}

loc_8040FA5C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 864u, (r4 + 868));
}

loc_8040FA64:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8040FA80;
    }
}

loc_8040FA68:
{
    r7 = 10;
    r0 = r5;
    r5 = (r5 + 1);
    r0 = (r0 & 255);
    r6 = (r1 + 8);
    r6_addr_7 = (r6 + r0);
    MemoryInline::FlatWrite8(r6_addr_7, static_cast<uint8_t>(r7));
}

loc_8040FA80:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 884u, (r4 + 888));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8040FA8C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8040FAA8;
    }
}

loc_8040FA90:
{
    r7 = 14;
    r0 = r5;
    r5 = (r5 + 1);
    r0 = (r0 & 255);
    r6 = (r1 + 8);
    r6_addr_9 = (r6 + r0);
    MemoryInline::FlatWrite8(r6_addr_9, static_cast<uint8_t>(r7));
}

loc_8040FAA8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 885u, (r4 + 889));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8040FAB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8040FAD0;
    }
}

loc_8040FAB8:
{
    r7 = 15;
    r0 = r5;
    r5 = (r5 + 1);
    r0 = (r0 & 255);
    r6 = (r1 + 8);
    r6_addr_11 = (r6 + r0);
    MemoryInline::FlatWrite8(r6_addr_11, static_cast<uint8_t>(r7));
}

loc_8040FAD0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 886u, (r4 + 890));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8040FADC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8040FAF8;
    }
}

loc_8040FAE0:
{
    r7 = 16;
    r0 = r5;
    r5 = (r5 + 1);
    r0 = (r0 & 255);
    r6 = (r1 + 8);
    r6_addr_13 = (r6 + r0);
    MemoryInline::FlatWrite8(r6_addr_13, static_cast<uint8_t>(r7));
}

loc_8040FAF8:
{
    r5 = (r5 & 255);
    r6 = (r1 + 8);
    ctx->lr = 0x8040FB04u;
    if constexpr (KnownRegArgsCpuCall<0x8040FB14u>(&func_8040FB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8040FB14_1B1B = func_8040FB14_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8040FB14_1B1B);
        r4 = static_cast<uint32_t>(regargs_result_8040FB14_1B1B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8040FB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_8040F96C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8040F96C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8040F96C func_8040F96C preserves=true fpr_mask=0x00000000
