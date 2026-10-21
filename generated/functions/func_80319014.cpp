#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027FF84(CpuContext* ctx);
extern "C" uint64_t func_8027FF84_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80319014_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80319014u);
    goto loc_80319014;

loc_80319014:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r26 = r5;
    r27 = r6;
    r25 = MemoryInline::FlatRead32(r4);
    r24 = MemoryInline::FlatRead32((r4 + 12));
    r31 = 0;
    r30 = 0;
    r29 = 0;
    r28 = 0;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_73D = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_73D;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80319058:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_80319070;
    }
}

loc_8031905C:
{
}

loc_80319060:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_803190C8;
    }
}

loc_80319064:
{
}

loc_80319068:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_80319084;
    }
}

loc_8031906C:
{
    goto loc_80319168;
}

loc_80319070:
{
}

loc_80319074:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_80319168;
    }
}

loc_80319078:
{
}

loc_8031907C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_8031913C;
    }
}

loc_80319080:
{
    goto loc_8031910C;
}

loc_80319084:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_8031908C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80319168;
    }
}

loc_80319090:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_80319098:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_803190A4;
    }
}

loc_8031909C:
{
    r30 = MemoryInline::FlatRead8((r24 + 1));
    r28 = 1;
}

loc_803190A4:
{
    r29 = MemoryInline::FlatRead8((r25 + 1));
    r3 = r25;
    ctx->lr = 0x803190B0u;
    if constexpr (KnownRegArgsCpuCall<0x8027FF84u>(&func_8027FF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027FF84_EB0 = func_8027FF84_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027FF84_EB0);
        r4 = static_cast<uint32_t>(regargs_result_8027FF84_EB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027FF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_803190B8:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_803190C0;
    }
}

loc_803190BC:
{
    r31 = (r31 | 64);
}

loc_803190C0:
{
    r31 = (r31 | 1);
    goto loc_80319168;
}

loc_803190C8:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_803190D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80319168;
    }
}

loc_803190D4:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_803190DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_803190E8;
    }
}

loc_803190E0:
{
    r30 = MemoryInline::FlatRead8((r24 + 1));
    r28 = 1;
}

loc_803190E8:
{
    r29 = MemoryInline::FlatRead8((r25 + 1));
    r3 = r25;
    ctx->lr = 0x803190F4u;
    if constexpr (KnownRegArgsCpuCall<0x8027FF84u>(&func_8027FF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027FF84_14E2 = func_8027FF84_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027FF84_14E2);
        r4 = static_cast<uint32_t>(regargs_result_8027FF84_14E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027FF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_803190FC:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_80319104;
    }
}

loc_80319100:
{
    r31 = (r31 | 64);
}

loc_80319104:
{
    r31 = (r31 | 1);
    goto loc_80319168;
}

loc_8031910C:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_80319114:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80319168;
    }
}

loc_80319118:
{
    r29 = MemoryInline::FlatRead8((r25 + 1));
    r3 = r25;
    ctx->lr = 0x80319124u;
    if constexpr (KnownRegArgsCpuCall<0x8027FF84u>(&func_8027FF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027FF84_1A17 = func_8027FF84_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027FF84_1A17);
        r4 = static_cast<uint32_t>(regargs_result_8027FF84_1A17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027FF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_8031912C:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_80319134;
    }
}

loc_80319130:
{
    r31 = (r31 | 64);
}

loc_80319134:
{
    r31 = (r31 | 1);
    goto loc_80319168;
}

loc_8031913C:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_80319144:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80319168;
    }
}

loc_80319148:
{
    r29 = MemoryInline::FlatRead8((r25 + 1));
    r3 = r25;
    ctx->lr = 0x80319154u;
    if constexpr (KnownRegArgsCpuCall<0x8027FF84u>(&func_8027FF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027FF84_1F4C = func_8027FF84_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027FF84_1F4C);
        r4 = static_cast<uint32_t>(regargs_result_8027FF84_1F4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027FF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_8031915C:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_80319164;
    }
}

loc_80319160:
{
    r31 = (r31 | 64);
}

loc_80319164:
{
    r31 = (r31 | 1);
}

loc_80319168:
{
    r0 = (r31 & 255);
    r0 = (r0 & 1);
}

loc_80319174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803191C0;
    }
}

loc_80319178:
{
    r3 = (r26 & 255);
    r0 = (r3 & 8);
}

loc_80319184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803191B4;
    }
}

loc_80319188:
{
    r0 = (r3 & 1);
}

loc_80319190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803191B4;
    }
}

loc_80319194:
{
}

loc_80319198:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_803191B4;
    }
}

loc_8031919C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r29));
}

loc_803191A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803191B4;
    }
}

loc_803191A4:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803191B0;
    }
}

loc_803191AC:
{
    r0 = 2;
}

loc_803191B0:
{
    r31 = (r31 | r0);
}

loc_803191B4:
{
    r0 = (r29 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
}

loc_803191C0:
{
    r3 = r31;
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80319014(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80319014_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80319014 func_80319014 preserves=true fpr_mask=0x00000000
