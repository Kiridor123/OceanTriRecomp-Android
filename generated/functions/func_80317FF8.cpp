#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80317FF8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80317FF8;

loc_80317FF8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r26 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r27 = 0;
    r0 = 0;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r3 = r4;
    ctx->lr = 0x8031803Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_89B = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_89B);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_89B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80318040:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80318060;
    }
}

loc_80318044:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r4 = (r13 + -25176);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r3 = (r13 + -25184);
    r3_addr_1 = (r3 + r0);
    r27 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_80318060:
{
    r3 = r26;
    ctx->lr = 0x80318068u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_D7E = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_D7E);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_D7E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8031806C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80318084;
    }
}

loc_80318070:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r3 = (r13 + -25168);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    r0 = (r27 - r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80318084:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_8031808C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(5))) {
        goto loc_803180A0;
    }
}

loc_80318090:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_803180E4;
}

loc_803180A0:
{
}

loc_803180A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_803180C8;
    }
}

loc_803180A8:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803180B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803180E4;
    }
}

loc_803180BC:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_803180E4;
}

loc_803180C8:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803180D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803180E4;
    }
}

loc_803180DC:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_803180E4:
{
}

loc_803180E8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80318250;
    }
}

loc_803180EC:
{
    r3 = r28;
    r4 = 172;
    ctx->lr = 0x803180F8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803180FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80318154;
    }
}

loc_80318100:
{
    r3 = r28;
    r4 = 30;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_18BD = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_18BD);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_18BD >> 32);
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

loc_80318110:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80318134;
    }
}

loc_80318114:
{
    r3 = MemoryInline::FlatRead8(r29);
}

loc_8031811C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80318230;
    }
}

loc_80318120:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80318230;
}

loc_80318134:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8031813C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318230;
    }
}

loc_80318140:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80318230;
}

loc_80318154:
{
    r3 = r28;
    r4 = 171;
    ctx->lr = 0x80318160u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80318164:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8031819C;
    }
}

loc_80318168:
{
    r3 = r28;
    r4 = 30;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_2047 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_2047);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_2047 >> 32);
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

loc_80318178:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80318230;
    }
}

loc_8031817C:
{
    r3 = MemoryInline::FlatRead8(r29);
}

loc_80318184:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80318230;
    }
}

loc_80318188:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80318230;
}

loc_8031819C:
{
    r3 = r28;
    r4 = 173;
    ctx->lr = 0x803181A8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803181AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80318200;
    }
}

loc_803181B0:
{
    r3 = r28;
    r4 = 30;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_264F = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_264F);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_264F >> 32);
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

loc_803181C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803181E0;
    }
}

loc_803181C4:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_803181CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80318230;
    }
}

loc_803181D0:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80318230;
}

loc_803181E0:
{
    r3 = MemoryInline::FlatRead8(r29);
}

loc_803181E8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(2))) {
        goto loc_80318230;
    }
}

loc_803181EC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80318230;
}

loc_80318200:
{
    r3 = r28;
    r4 = 30;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_2C7C = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_2C7C);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_2C7C >> 32);
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

loc_80318210:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80318230;
    }
}

loc_80318214:
{
    r3 = MemoryInline::FlatRead8(r29);
}

loc_8031821C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(2))) {
        goto loc_80318230;
    }
}

loc_80318220:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_80318230:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80318238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318250;
    }
}

loc_8031823C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80318244:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80318250;
    }
}

loc_80318248:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_80318250:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80317FF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80317FF8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80317FF8 func_80317FF8 preserves=true fpr_mask=0x00000000
