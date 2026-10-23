#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126914(CpuContext* ctx);
extern "C" uint64_t func_80126914_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8037568C_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8037568C;

loc_8037568C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = 0;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803756B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80375828;
    }
}

loc_803756B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_803756BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_80375828;
    }
}

loc_803756C0:
{
    // inline leaf 0x80375558 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80375558
}

loc_803756C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803756D0;
    }
}

loc_803756CC:
{
    r31 = (r31 | 128);
}

loc_803756D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 480), 0, 1922u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803756E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_803757D8;
    }
}

loc_803756E4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 481));
}

loc_803756EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803757D8;
    }
}

loc_803756F0:
{
    r3 = r30;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_803756FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80375714;
    }
}

loc_80375700:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 340u, (r30 + 820));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80375708:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80375714;
    }
}

loc_8037570C:
{
    r0 = (r31 | 64);
    r31 = (r0 & 255);
}

loc_80375714:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 1472u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 1472u, (r30 + 1952));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 1476u, (r30 + 1956));
        }
    }
    f1.d = MemoryInline::FlatReadFloat64((r2 + -8816));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -7728));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
}

loc_80375750:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_8037575C;
    }
}

loc_80375754:
{
    r0 = (r31 | 8);
    r31 = (r0 & 255);
}

loc_8037575C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1622u, (r30 + 2102));
    r0 = (r0 & 2);
}

loc_80375768:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80375774;
    }
}

loc_8037576C:
{
    r31 = (r31 | 4);
    goto loc_80375828;
}

loc_80375774:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80375780u;
    if constexpr (KnownRegArgsCpuCall<0x80126914u>(&func_80126914)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80126914_17F4 = func_80126914_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80126914_17F4);
        r4 = static_cast<uint32_t>(regargs_result_80126914_17F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80126914u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead16((r3 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 1956));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -8816));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -7732));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r30 + 1952));
}

loc_803757C4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r3))) {
        goto loc_803757D0;
    }
}

loc_803757C8:
{
    r31 = (r31 | 2);
    goto loc_80375828;
}

loc_803757D0:
{
    r31 = (r31 | 1);
    goto loc_80375828;
}

loc_803757D8:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl3_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl3_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802B06E4:
{
    r3 = r0;
    goto loc_inl3_cont_802B06CC;
}

loc_inl3_return:
{
}

loc_inl3_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803757E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_80375828;
    }
}

loc_803757EC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 481));
}

loc_803757F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80375828;
    }
}

loc_803757F8:
{
    r3 = r30;
    // inline leaf 0x80375558 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80375558
}

loc_80375804:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80375828;
    }
}

loc_80375808:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1921u, (r30 + 2401));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_80375810:
{
    r0 = (r31 | 32);
    r0 = (r0 & 255);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80375824;
    }
}

loc_8037581C:
{
    r0 = (r31 | 16);
    r0 = (r0 & 255);
}

loc_80375824:
{
    r31 = r0;
}

loc_80375828:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8037568C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8037568C_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8037568C func_8037568C preserves=true fpr_mask=0x00000000
