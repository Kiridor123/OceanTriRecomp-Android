#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D1C10(CpuContext* ctx);
extern "C" uint64_t func_804D1C10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8081DFB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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
    const uint32_t r27_entry = r27;

    MKW_GUEST_ENTER(0x8081DFB0u);
    goto loc_8081DFB0;

loc_8081DFB0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r31);
    r30 = 0x80870000u;
}

loc_8081DFD0:
{
    r3 = MemoryInline::FlatRead32((r30 + -32328));
    r4 = (r1 + 8);
    r5 = 1;
    r3 = (r3 + 65536);
    r3 = (r3 + 18048);
    ctx->lr = 0x8081DFE8u;
    if constexpr (KnownRegArgsCpuCall<0x804D1C10u>(&func_804D1C10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        const auto regargs_result_804D1C10_7C5 = func_804D1C10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D1C10_7C5);
        r4 = static_cast<uint32_t>(regargs_result_804D1C10_7C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
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
        ctx->gpr[27] = r27;
        InvokeDirectCpu<0x804D1C10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8081DFF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8081E1CC;
    }
}

loc_8081DFF4:
{
    ctx->lr = 0x8081DFF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80843FC0u>(ctx);
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
    ctx->lr = 0x8081DFFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80842350u>(ctx);
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
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808415E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r3 = MemoryInline::FlatRead32((r30 + -32328));
}

loc_8081E008:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081DFD0;
    }
}

loc_8081E00C:
{
    r3 = (r3 + 65536);
    r27 = MemoryInline::FlatRead32((r3 + 17204));
    goto loc_8081E0E0;
}

loc_8081E018:
{
    r0 = MemoryInline::FlatRead8((r27 + 11804));
    r28 = MemoryInline::FlatRead32((r27 + 11808));
}

loc_8081E024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E0DC;
    }
}

loc_8081E028:
{
    r3 = r27;
    // inline leaf 0x808443D0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x808443D0
}

loc_8081E034:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E0DC;
    }
}

loc_8081E038:
{
    r0 = MemoryInline::FlatRead32((r27 + 1048));
}

loc_8081E040:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081E0DC;
    }
}

loc_8081E044:
{
    r0 = MemoryInline::FlatRead32((r27 + 11816));
}

loc_8081E04C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8081E060;
    }
}

loc_8081E050:
{
}

loc_8081E054:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_8081E060;
    }
}

loc_8081E058:
{
}

loc_8081E05C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(25))) {
        goto loc_8081E070;
    }
}

loc_8081E060:
{
    r3 = MemoryInline::FlatRead32((r30 + -32328));
    r29 = (r3 + 65536);
    r29 = (r29 + 17212);
    goto loc_8081E07C;
}

loc_8081E070:
{
    r3 = MemoryInline::FlatRead32((r30 + -32328));
    r29 = (r3 + 65536);
    r29 = (r29 + 17204);
}

loc_8081E07C:
{
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x8081E088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80844280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r3 = r27;
    ctx->lr = 0x8081E090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808441E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    MemoryInline::FlatWrite8((r27 + 11804), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r27 + 11812));
}

loc_8081E09C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E0AC;
    }
}

loc_8081E0A0:
{
    r0 = MemoryInline::FlatRead32((r27 + 11808));
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_8081E0B4;
}

loc_8081E0AC:
{
    r0 = MemoryInline::FlatRead32((r27 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_8081E0B4:
{
    r3 = MemoryInline::FlatRead32((r27 + 11808));
}

loc_8081E0BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E0CC;
    }
}

loc_8081E0C0:
{
    r0 = MemoryInline::FlatRead32((r27 + 11812));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_8081E0D4;
}

loc_8081E0CC:
{
    r0 = MemoryInline::FlatRead32((r27 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_8081E0D4:
{
    MemoryInline::FlatWrite32((r27 + 11808), r31);
    MemoryInline::FlatWrite32((r27 + 11812), r31);
}

loc_8081E0DC:
{
    r27 = r28;
}

loc_8081E0E0:
{
}

loc_8081E0E4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8081E018;
    }
}

loc_8081E0E8:
{
    r3 = MemoryInline::FlatRead32((r30 + -32328));
    r3 = (r3 + 65536);
    r29 = MemoryInline::FlatRead32((r3 + 17212));
    goto loc_8081E1C0;
}

loc_8081E0F8:
{
    r0 = MemoryInline::FlatRead8((r29 + 11804));
    r28 = MemoryInline::FlatRead32((r29 + 11808));
}

loc_8081E104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E1BC;
    }
}

loc_8081E108:
{
    r3 = r29;
    // inline leaf 0x808443D0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x808443D0
}

loc_8081E114:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E1BC;
    }
}

loc_8081E118:
{
    r0 = MemoryInline::FlatRead32((r29 + 1048));
}

loc_8081E120:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081E1BC;
    }
}

loc_8081E124:
{
    r0 = MemoryInline::FlatRead32((r29 + 11816));
}

loc_8081E12C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8081E140;
    }
}

loc_8081E130:
{
}

loc_8081E134:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_8081E140;
    }
}

loc_8081E138:
{
}

loc_8081E13C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(25))) {
        goto loc_8081E150;
    }
}

loc_8081E140:
{
    r3 = MemoryInline::FlatRead32((r30 + -32328));
    r27 = (r3 + 65536);
    r27 = (r27 + 17212);
    goto loc_8081E15C;
}

loc_8081E150:
{
    r3 = MemoryInline::FlatRead32((r30 + -32328));
    r27 = (r3 + 65536);
    r27 = (r27 + 17204);
}

loc_8081E15C:
{
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8081E168u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80844280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r3 = r29;
    ctx->lr = 0x8081E170u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x808441E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    MemoryInline::FlatWrite8((r29 + 11804), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r29 + 11812));
}

loc_8081E17C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E18C;
    }
}

loc_8081E180:
{
    r0 = MemoryInline::FlatRead32((r29 + 11808));
    MemoryInline::FlatWrite32(r27, r0);
    goto loc_8081E194;
}

loc_8081E18C:
{
    r0 = MemoryInline::FlatRead32((r29 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_8081E194:
{
    r3 = MemoryInline::FlatRead32((r29 + 11808));
}

loc_8081E19C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E1AC;
    }
}

loc_8081E1A0:
{
    r0 = MemoryInline::FlatRead32((r29 + 11812));
    MemoryInline::FlatWrite32((r27 + 4), r0);
    goto loc_8081E1B4;
}

loc_8081E1AC:
{
    r0 = MemoryInline::FlatRead32((r29 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_8081E1B4:
{
    MemoryInline::FlatWrite32((r29 + 11808), r31);
    MemoryInline::FlatWrite32((r29 + 11812), r31);
}

loc_8081E1BC:
{
    r29 = r28;
}

loc_8081E1C0:
{
}

loc_8081E1C4:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8081E0F8;
    }
}

loc_8081E1C8:
{
    goto loc_8081DFD0;
}

loc_8081E1CC:
{
}

loc_8081E1D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8081DFD0;
    }
}

loc_8081E1D4:
{
    r11 = (r1 + 48);
    r3 = 0;
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081DFB0 func_8081DFB0 preserves=true fpr_mask=0x00000000
