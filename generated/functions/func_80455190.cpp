#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050008(CpuContext* ctx);
extern "C" uint32_t func_80050008_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80455190_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80455190u);
    goto loc_80455190;

loc_80455190:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = 0;
    r3 = 0x80610000u;
    r29 = (r3 + -3928);
}

loc_804551B8:
{
    r3 = (r30 + 728);
    r4 = MemoryInline::FlatRead32(r29);
    if constexpr (KnownRegArgsCpuCall<0x80050008u>(&func_80050008)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80050008_5A2 = func_80050008_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80050008_5A2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80050008u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_804551C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804551DC;
    }
}

loc_804551CC:
{
    r29 = (r29 + 4);
    r31 = (r31 + 1);
}

loc_804551D8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(11))) {
        goto loc_804551B8;
    }
}

loc_804551DC:
{
}

loc_804551E0:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(10))) {
        goto loc_80455468;
    }
}

loc_804551E4:
{
    r3 = 0x80610000u;
    r3 = (r3 + -3884);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80455468u:
        goto loc_80455468;
        break;
    case 0x804551FCu:
        goto loc_804551FC;
        break;
    case 0x80455284u:
        goto loc_80455284;
        break;
    case 0x80455304u:
        goto loc_80455304;
        break;
    case 0x80455218u:
        goto loc_80455218;
        break;
    case 0x80455234u:
        goto loc_80455234;
        break;
    case 0x80455248u:
        goto loc_80455248;
        break;
    case 0x8045525Cu:
        goto loc_8045525C;
        break;
    case 0x80455270u:
        goto loc_80455270;
        break;
    case 0x80455424u:
        goto loc_80455424;
        break;
    case 0x80455394u:
        goto loc_80455394;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804551FC:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 780), static_cast<uint8_t>(r0));
    goto loc_80455468;
}

loc_80455218:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 780), static_cast<uint8_t>(r0));
    goto loc_80455468;
}

loc_80455234:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80455468;
}

loc_80455248:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80455468;
}

loc_8045525C:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80455468;
}

loc_80455270:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80455468;
}

loc_80455284:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = MemoryInline::FlatRead8((r30 + 733));
    r0 = (r3 + -48);
    r0 = (r0 & 255);
}

loc_804552A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_804552B4;
    }
}

loc_804552A8:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    goto loc_804552E8;
}

loc_804552B4:
{
    r0 = (r3 + -97);
    r0 = (r0 & 255);
}

loc_804552C0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(5))) {
        goto loc_804552D8;
    }
}

loc_804552C4:
{
    r0 = (r3 + -87);
    r0 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    goto loc_804552E8;
}

loc_804552D8:
{
    r0 = (r3 + -55);
    r0 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
}

loc_804552E8:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_804552F4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(15))) {
        goto loc_80455468;
    }
}

loc_804552F8:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    goto loc_80455468;
}

loc_80455304:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = MemoryInline::FlatRead8((r30 + 734));
    r0 = (r3 + -48);
    r0 = (r0 & 255);
}

loc_80455334:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_80455344;
    }
}

loc_80455338:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    goto loc_80455378;
}

loc_80455344:
{
    r0 = (r3 + -97);
    r0 = (r0 & 255);
}

loc_80455350:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(5))) {
        goto loc_80455368;
    }
}

loc_80455354:
{
    r0 = (r3 + -87);
    r0 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    goto loc_80455378;
}

loc_80455368:
{
    r0 = (r3 + -55);
    r0 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
}

loc_80455378:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80455384:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(15))) {
        goto loc_80455468;
    }
}

loc_80455388:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    goto loc_80455468;
}

loc_80455394:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = MemoryInline::FlatRead8((r30 + 730));
    r0 = (r3 + -48);
    r0 = (r0 & 255);
}

loc_804553C4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_804553D4;
    }
}

loc_804553C8:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    goto loc_80455408;
}

loc_804553D4:
{
    r0 = (r3 + -97);
    r0 = (r0 & 255);
}

loc_804553E0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(5))) {
        goto loc_804553F8;
    }
}

loc_804553E4:
{
    r0 = (r3 + -87);
    r0 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    goto loc_80455408;
}

loc_804553F8:
{
    r0 = (r3 + -55);
    r0 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
}

loc_80455408:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80455414:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(15))) {
        goto loc_80455468;
    }
}

loc_80455418:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    goto loc_80455468;
}

loc_80455424:
{
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = MemoryInline::FlatRead8((r30 + 731));
    r0 = (r3 + -48);
    r0 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 760));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 760));
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_80455454:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9))) {
        goto loc_80455460;
    }
}

loc_80455458:
{
    r0 = 9;
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
}

loc_80455460:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 780), static_cast<uint8_t>(r0));
}

loc_80455468:
{
    r0 = (r31 & 255);
    MemoryInline::FlatWrite8((r30 + 782), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80455190(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80455190_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80455190 func_80455190 preserves=true fpr_mask=0x00000000
