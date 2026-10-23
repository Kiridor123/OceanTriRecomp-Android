#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026FF24(CpuContext* ctx);
extern "C" void func_8026FF24_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026FF54(CpuContext* ctx);
extern "C" void func_8026FF54_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80275B68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80275B68;

loc_80275B68:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r0 = (r4 & 65535);
    r0 = (r0 & 255);
}

loc_80275BA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80275BC0;
    }
}

loc_80275BA4:
{
}

loc_80275BA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80275BCC;
    }
}

loc_80275BAC:
{
}

loc_80275BB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80275BD8;
    }
}

loc_80275BB4:
{
    r4 = 0;
    // inline leaf 0x80275B60 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80275B60
    goto loc_80275BE0;
}

loc_80275BC0:
{
    r4 = 1;
    // inline leaf 0x80275B60 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80275B60
    goto loc_80275BE0;
}

loc_80275BCC:
{
    r4 = 2;
    // inline leaf 0x80275B60 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80275B60
    goto loc_80275BE0;
}

loc_80275BD8:
{
    r4 = 3;
    // inline leaf 0x80275B60 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80275B60
}

loc_80275BE0:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 32768);
}

loc_80275BEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275C00;
    }
}

loc_80275BF0:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x8026FF54 (12 guest instruction(s))
}

loc_inl4_0x8026FF54:
{
    r0 = (r4 & -2147483648);
}

loc_inl4_0x8026FF5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8026FF70;
    }
}

loc_inl4_0x8026FF60:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 860), r0);
    goto loc_inl4_cont_8026FF54;
}

loc_inl4_0x8026FF70:
{
    r5 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r0 = (r5 & ~r0);
    MemoryInline::FlatWrite32((r3 + 864), r0);
}

loc_inl4_cont_8026FF54:
{
    // end of inlined leaf 0x8026FF54
    goto loc_80275C0C;
}

loc_80275C00:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x8026FF24 (12 guest instruction(s))
}

loc_inl5_0x8026FF24:
{
    r0 = (r4 & -2147483648);
}

loc_inl5_0x8026FF2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8026FF40;
    }
}

loc_inl5_0x8026FF30:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 860), r0);
    goto loc_inl5_cont_8026FF24;
}

loc_inl5_0x8026FF40:
{
    r5 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r3 + 864), r0);
}

loc_inl5_cont_8026FF24:
{
    // end of inlined leaf 0x8026FF24
}

loc_80275C0C:
{
    r0 = (r30 & 65535);
}

loc_80275C14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80275C28;
    }
}

loc_80275C18:
{
    r3 = r28;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026FF54u>(&func_8026FF54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        func_8026FF54_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8026FF54u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_80275C34;
}

loc_80275C28:
{
    r3 = r28;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026FF24u>(&func_8026FF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        func_8026FF24_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8026FF24u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
}

loc_80275C34:
{
    r0 = (r31 & 65535);
}

loc_80275C3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80275C50;
    }
}

loc_80275C40:
{
    r3 = r28;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026FF54u>(&func_8026FF54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        func_8026FF54_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8026FF54u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_80275C5C;
}

loc_80275C50:
{
    r3 = r28;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026FF24u>(&func_8026FF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        func_8026FF24_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8026FF24u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
}

loc_80275C5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80275B68 func_80275B68 preserves=true fpr_mask=0x00000000
