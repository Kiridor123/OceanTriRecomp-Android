#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CDD30(CpuContext* ctx);
extern "C" void func_804CDD30_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DD1C0(CpuContext* ctx);
extern "C" double func_804DD1C0_rae0_1e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804E9360(CpuContext* ctx);
extern "C" uint64_t func_804E9360_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804E93C0(CpuContext* ctx);
extern "C" uint64_t func_804E93C0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804E9420(CpuContext* ctx);
extern "C" uint64_t func_804E9420_ra0_0_18_0(CpuContext*);

extern "C" void func_8003F794(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_8003F794;

loc_8003F794:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    ctx->lr = 0x8003F7B0u;
    if constexpr (KnownRegArgsCpuCall<0x804DD1C0u>(&func_804DD1C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_804DD1C0_8C0 = func_804DD1C0_rae0_1e_0_2(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d);
        f1.d = regargs_result_804DD1C0_8C0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DD1C0u>(ctx);
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
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r13 + -18080), static_cast<uint8_t>(r3));
    ctx->lr = 0x8003F7B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x804DD060u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r13 + -18079), static_cast<uint8_t>(r3));
    ctx->lr = 0x8003F7C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x804DD150u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r13 + -18078), static_cast<uint8_t>(r3));
    ctx->lr = 0x8003F7C8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9420u>(&func_804E9420)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804E9420_131D = func_804E9420_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804E9420_131D);
        r4 = static_cast<uint32_t>(regargs_result_804E9420_131D >> 32);
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
        InvokeDirectCpu<0x804E9420u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r13 + -18075), static_cast<uint8_t>(r0));
    ctx->lr = 0x8003F7D4u;
    if constexpr (KnownRegArgsCpuCall<0x804E93C0u>(&func_804E93C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804E93C0_170A = func_804E93C0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804E93C0_170A);
        r4 = static_cast<uint32_t>(regargs_result_804E93C0_170A >> 32);
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
        InvokeDirectCpu<0x804E93C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    ctx->lr = 0x8003F7D8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9360u>(&func_804E9360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804E9360_1AA1 = func_804E9360_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804E9360_1AA1);
        r4 = static_cast<uint32_t>(regargs_result_804E9360_1AA1 >> 32);
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
        InvokeDirectCpu<0x804E9360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r13 + -18077), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite8((r13 + -18076), static_cast<uint8_t>(r4));
}

loc_8003F7EC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8003F80C;
    }
}

loc_8003F7F0:
{
    r31 = 0x80660000u;
    r3 = (r31 + -22144);
    r4 = r30;
    // inline leaf 0x8003F9A4 (41 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 57u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 57u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r3 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r4 + 25));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r3 + 25), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 26u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r4 + 26));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r4 + 30));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 26u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 26u, (r3 + 26), r5);
        MemoryInline::WriteResolved32(guest_range_1, 30u, (r3 + 30), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 34u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 34u, (r4 + 34));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 38u, (r4 + 38));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 34u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 34u, (r3 + 34), r5);
        MemoryInline::WriteResolved32(guest_range_1, 38u, (r3 + 38), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 42u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 42u, (r4 + 42));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 46u, (r4 + 46));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 42u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 42u, (r3 + 42), r5);
        MemoryInline::WriteResolved32(guest_range_1, 46u, (r3 + 46), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 50u, (r4 + 50));
    MemoryInline::WriteResolved32(guest_range_1, 50u, (r3 + 50), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 54u, (r4 + 54));
    MemoryInline::WriteResolved16(guest_range_1, 54u, (r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 56u, (r4 + 56));
    MemoryInline::WriteResolved8(guest_range_1, 56u, (r3 + 56), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8003F9A4
    r3 = (r31 + -22144);
    MemoryInline::FlatWrite32((r13 + -18104), r3);
    goto loc_8003F964;
}

loc_8003F80C:
{
    r3 = MemoryInline::FlatRead8((r13 + -18080));
}

loc_8003F814:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8003F860;
    }
}

loc_8003F818:
{
    r3 = MemoryInline::FlatRead8((r13 + -18075));
}

loc_8003F820:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8003F860;
    }
}

loc_8003F824:
{
    MemoryInline::FlatWrite8((r13 + -18076), static_cast<uint8_t>(r4));
    r3 = 0x80620000u;
    r3 = (r3 + -19780);
    MemoryInline::FlatWrite32((r13 + -18104), r3);
    r31 = 0x80660000u;
    r4 = (r31 + -22144);
    r5 = 0;
    r6 = 16;
    ctx->lr = 0x8003F848u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B7280u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r13 + -18077));
}

loc_8003F850:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003F944;
    }
}

loc_8003F854:
{
    r0 = 22;
    MemoryInline::FlatWriteRam32((r31 + -22144), r0);
    goto loc_8003F944;
}

loc_8003F860:
{
}

loc_8003F864:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003F87C;
    }
}

loc_8003F868:
{
}

loc_8003F86C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8003F8A8;
    }
}

loc_8003F870:
{
}

loc_8003F874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8003F8DC;
    }
}

loc_8003F878:
{
    goto loc_8003F928;
}

loc_8003F87C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -18076), static_cast<uint8_t>(r0));
    r3 = 0x80620000u;
    r3 = (r3 + -19840);
    MemoryInline::FlatWrite32((r13 + -18104), r3);
    r4 = 0x80660000u;
    r4 = (r4 + -22144);
    r5 = 0;
    r6 = 16;
    ctx->lr = 0x8003F8A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B7280u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    goto loc_8003F944;
}

loc_8003F8A8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -18076), static_cast<uint8_t>(r0));
    r3 = 0x80620000u;
    r3 = (r3 + -19840);
    MemoryInline::FlatWrite32((r13 + -18104), r3);
    r31 = 0x80660000u;
    r4 = (r31 + -22144);
    r5 = 0;
    r6 = 16;
    ctx->lr = 0x8003F8D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B7280u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    r0 = 20;
    MemoryInline::FlatWriteRam32((r31 + -22144), r0);
    goto loc_8003F944;
}

loc_8003F8DC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -18076), static_cast<uint8_t>(r0));
    r3 = 0x80620000u;
    r3 = (r3 + -19660);
    MemoryInline::FlatWrite32((r13 + -18104), r3);
    r31 = 0x80660000u;
    r4 = (r31 + -22144);
    r5 = 0;
    r6 = 40;
    ctx->lr = 0x8003F904u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B7280u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r13 + -18104));
    r0 = MemoryInline::FlatRead16((r4 + 8));
    r3 = (r31 + -22144);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 12));
    MemoryInline::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 16));
    MemoryInline::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    goto loc_8003F944;
}

loc_8003F928:
{
    r3 = 0x80580000u;
    r3 = (r3 + -12320);
    r4 = 749;
    r5 = 0x80580000u;
    r5 = (r5 + -12308);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8003F944u;
    if constexpr (KnownRegArgsCpuCall<0x804CDD30u>(&func_804CDD30)) {
        ctx->gpr[1] = r1;
        func_804CDD30_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CDD30u>(ctx);
    }
}

loc_8003F944:
{
    r3 = 0x80580000u;
    r3 = (r3 + -12272);
    r31 = 0x80660000u;
    r4 = MemoryInline::FlatRead32((r31 + -22144));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8003F95Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804CDCA0_4A33 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_4A33);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_4A33 >> 32);
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = (r31 + -22144);
    MemoryInline::FlatWrite32((r13 + -18104), r3);
}

loc_8003F964:
{
    r4 = MemoryInline::FlatRead8((r13 + -18079));
    r0 = (r4 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r13 + -18063), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    MemoryInline::FlatWrite16((r13 + -18062), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 12));
    MemoryInline::FlatWrite16((r13 + -18060), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8003F794 func_8003F794 preserves=true fpr_mask=0x00000000
