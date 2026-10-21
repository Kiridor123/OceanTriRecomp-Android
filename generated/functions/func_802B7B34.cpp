#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026FECC(CpuContext* ctx);
extern "C" uint32_t func_8026FECC_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802B7B34_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802B7B34u);
    goto loc_802B7B34;

loc_802B7B34:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r0 = MemoryInline::FlatRead16((r3 + 168));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802B7B5C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_802B7B68;
    }
}

loc_802B7B60:
{
    r3 = 0;
    goto loc_802B803C;
}

loc_802B7B68:
{
    r0 = (r5 & 255);
}

loc_802B7B70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B7B80;
    }
}

loc_802B7B74:
{
}

loc_802B7B78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B7DE8;
    }
}

loc_802B7B7C:
{
    goto loc_802B8038;
}

loc_802B7B80:
{
    r0 = MemoryInline::FlatRead8((r3 + 136));
}

loc_802B7B88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B7B94;
    }
}

loc_802B7B8C:
{
    r3 = 0;
    goto loc_802B803C;
}

loc_802B7B94:
{
    r3 = r30;
    r4 = 0;
    r5 = 27;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl0_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl0_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8026FEF4;
    }
}

loc_inl0_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl0_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8026FEF4;
    }
}

loc_inl0_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl0_cont_8026FECC;
}

loc_inl0_0x8026FEF4:
{
    r3 = 0;
}

loc_inl0_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7BA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7BE8;
    }
}

loc_802B7BAC:
{
    r0 = MemoryInline::FlatRead8((r30 + 24));
}

loc_802B7BB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B7BD8;
    }
}

loc_802B7BB8:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_802B7BC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B7BCC;
    }
}

loc_802B7BC4:
{
    r3 = 0;
    goto loc_802B803C;
}

loc_802B7BCC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
    goto loc_802B7BE0;
}

loc_802B7BD8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
}

loc_802B7BE0:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7BE8:
{
    r3 = r30;
    r4 = 0;
    r5 = 23;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl1_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl1_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl1_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl1_cont_8026FECC;
}

loc_inl1_0x8026FEF4:
{
    r3 = 0;
}

loc_inl1_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7BFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B7C18;
    }
}

loc_802B7C00:
{
    r3 = r30;
    r4 = 0;
    r5 = 81;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl2_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl2_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl2_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl2_cont_8026FECC;
}

loc_inl2_0x8026FEF4:
{
    r3 = 0;
}

loc_inl2_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7C14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7C90;
    }
}

loc_802B7C18:
{
    r0 = MemoryInline::FlatRead8((r30 + 24));
}

loc_802B7C20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B7C30;
    }
}

loc_802B7C24:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
    goto loc_802B7C38;
}

loc_802B7C30:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
}

loc_802B7C38:
{
    r3 = r30;
    r4 = 0;
    r5 = 81;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl3_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl3_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8026FEF4;
    }
}

loc_inl3_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl3_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8026FEF4;
    }
}

loc_inl3_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl3_cont_8026FECC;
}

loc_inl3_0x8026FEF4:
{
    r3 = 0;
}

loc_inl3_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7C4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7C60;
    }
}

loc_802B7C50:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 162), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 271), static_cast<uint8_t>(r0));
}

loc_802B7C60:
{
    r0 = MemoryInline::FlatRead8((r29 + 162));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B7C6C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B7C78;
    }
}

loc_802B7C70:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7C78:
{
    r0 = MemoryInline::FlatRead32((r29 + 100));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B7C84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(-3072))) {
        goto loc_802B8038;
    }
}

loc_802B7C88:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7C90:
{
    r3 = r30;
    r4 = 0;
    r5 = 24;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl4_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl4_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8026FEF4;
    }
}

loc_inl4_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl4_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8026FEF4;
    }
}

loc_inl4_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl4_cont_8026FECC;
}

loc_inl4_0x8026FEF4:
{
    r3 = 0;
}

loc_inl4_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7CA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B7CC0;
    }
}

loc_802B7CA8:
{
    r3 = r30;
    r4 = 0;
    r5 = 82;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl5_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl5_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8026FEF4;
    }
}

loc_inl5_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl5_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8026FEF4;
    }
}

loc_inl5_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl5_cont_8026FECC;
}

loc_inl5_0x8026FEF4:
{
    r3 = 0;
}

loc_inl5_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7CBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7D38;
    }
}

loc_802B7CC0:
{
    r0 = MemoryInline::FlatRead8((r30 + 24));
}

loc_802B7CC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B7CD8;
    }
}

loc_802B7CCC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
    goto loc_802B7CE0;
}

loc_802B7CD8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
}

loc_802B7CE0:
{
    r3 = r30;
    r4 = 0;
    r5 = 82;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl6_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl6_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl6_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl6_cont_8026FECC;
}

loc_inl6_0x8026FEF4:
{
    r3 = 0;
}

loc_inl6_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7CF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7D08;
    }
}

loc_802B7CF8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 162), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 271), static_cast<uint8_t>(r0));
}

loc_802B7D08:
{
    r0 = MemoryInline::FlatRead8((r29 + 162));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B7D14:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B7D20;
    }
}

loc_802B7D18:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7D20:
{
    r0 = MemoryInline::FlatRead32((r29 + 100));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B7D2C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3072))) {
        goto loc_802B8038;
    }
}

loc_802B7D30:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7D38:
{
    r3 = r30;
    r4 = 0;
    r5 = 100;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl7_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl7_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl7_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl7_cont_8026FECC;
}

loc_inl7_0x8026FEF4:
{
    r3 = 0;
}

loc_inl7_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7D4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7D90;
    }
}

loc_802B7D50:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 166), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 165));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B7D6C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B7D78;
    }
}

loc_802B7D70:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7D78:
{
    r0 = MemoryInline::FlatRead32((r29 + 100));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B7D84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(-8192))) {
        goto loc_802B8038;
    }
}

loc_802B7D88:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7D90:
{
    r3 = r30;
    r4 = 0;
    r5 = 101;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl8_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl8_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x8026FEF4;
    }
}

loc_inl8_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl8_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x8026FEF4;
    }
}

loc_inl8_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl8_cont_8026FECC;
}

loc_inl8_0x8026FEF4:
{
    r3 = 0;
}

loc_inl8_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7DA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B8038;
    }
}

loc_802B7DA8:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 166), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 165));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B7DC4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B7DD0;
    }
}

loc_802B7DC8:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7DD0:
{
    r0 = MemoryInline::FlatRead32((r29 + 100));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B7DDC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8192))) {
        goto loc_802B8038;
    }
}

loc_802B7DE0:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7DE8:
{
    r4 = MemoryInline::FlatRead32((r4 + 88));
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 - r4);
    r31 = (r0 & 65535);
    r3 = r30;
    r4 = 0;
    r5 = 27;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl9_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl9_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl9_0x8026FEF4;
    }
}

loc_inl9_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl9_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl9_0x8026FEF4;
    }
}

loc_inl9_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl9_cont_8026FECC;
}

loc_inl9_0x8026FEF4:
{
    r3 = 0;
}

loc_inl9_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7E0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7E90;
    }
}

loc_802B7E10:
{
    r0 = MemoryInline::FlatRead8((r29 + 136));
}

loc_802B7E18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B7E24;
    }
}

loc_802B7E1C:
{
    r3 = 0;
    goto loc_802B803C;
}

loc_802B7E24:
{
    r0 = MemoryInline::FlatRead8((r30 + 24));
}

loc_802B7E2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B7E50;
    }
}

loc_802B7E30:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_802B7E38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B7E44;
    }
}

loc_802B7E3C:
{
    r3 = 0;
    goto loc_802B803C;
}

loc_802B7E44:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
    goto loc_802B7E58;
}

loc_802B7E50:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
}

loc_802B7E58:
{
    MemoryInline::FlatWrite16((r29 + 272), static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead8((r29 + 163));
}

loc_802B7E64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B8038;
    }
}

loc_802B7E68:
{
    r3 = (r31 + 65536);
    r0 = (r3 + -12289);
    r0 = (r0 & 65535);
}

loc_802B7E78:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(40958))) {
        goto loc_802B7E84;
    }
}

loc_802B7E7C:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7E84:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 163), static_cast<uint8_t>(r0));
    goto loc_802B8038;
}

loc_802B7E90:
{
    r3 = r30;
    r4 = 0;
    r5 = 25;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl10_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl10_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl10_0x8026FEF4;
    }
}

loc_inl10_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl10_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl10_0x8026FEF4;
    }
}

loc_inl10_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl10_cont_8026FECC;
}

loc_inl10_0x8026FEF4:
{
    r3 = 0;
}

loc_inl10_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7EA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B7ED8;
    }
}

loc_802B7EA8:
{
    r3 = r30;
    r4 = 0;
    r5 = 15;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl11_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl11_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl11_0x8026FEF4;
    }
}

loc_inl11_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl11_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl11_0x8026FEF4;
    }
}

loc_inl11_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl11_cont_8026FECC;
}

loc_inl11_0x8026FEF4:
{
    r3 = 0;
}

loc_inl11_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7EBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B7ED8;
    }
}

loc_802B7EC0:
{
    r3 = r30;
    r4 = 0;
    r5 = 140;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl12_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl12_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl12_0x8026FEF4;
    }
}

loc_inl12_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl12_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl12_0x8026FEF4;
    }
}

loc_inl12_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl12_cont_8026FECC;
}

loc_inl12_0x8026FEF4:
{
    r3 = 0;
}

loc_inl12_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B7ED4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7F60;
    }
}

loc_802B7ED8:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_802B7EE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B7EF8;
    }
}

loc_802B7EE4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 166), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
    goto loc_802B7F08;
}

loc_802B7EF8:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 166), static_cast<uint8_t>(r0));
    r0 = 7;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
}

loc_802B7F08:
{
    r3 = (r31 + 65536);
    r0 = (r3 + -32768);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r29 + 272), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 163));
}

loc_802B7F20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B8038;
    }
}

loc_802B7F24:
{
    r0 = MemoryInline::FlatRead8((r29 + 165));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B7F30:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B7F3C;
    }
}

loc_802B7F34:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7F3C:
{
    r0 = (r31 + 20479);
    r0 = (r0 & 65535);
}

loc_802B7F48:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8190))) {
        goto loc_802B7F54;
    }
}

loc_802B7F4C:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B7F54:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 163), static_cast<uint8_t>(r0));
    goto loc_802B8038;
}

loc_802B7F60:
{
    r3 = r30;
    r4 = 0;
    r5 = 26;
    if constexpr (KnownRegArgsCpuCall<0x8026FECCu>(&func_8026FECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026FECC_5218 = func_8026FECC_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8026FECC_5218;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026FECCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_802B7F74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B7FA8;
    }
}

loc_802B7F78:
{
    r3 = r30;
    r4 = 0;
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026FECCu>(&func_8026FECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026FECC_553F = func_8026FECC_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8026FECC_553F;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026FECCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_802B7F8C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B7FA8;
    }
}

loc_802B7F90:
{
    r3 = r30;
    r4 = 0;
    r5 = 141;
    if constexpr (KnownRegArgsCpuCall<0x8026FECCu>(&func_8026FECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026FECC_5867 = func_8026FECC_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8026FECC_5867;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026FECCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_802B7FA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B8030;
    }
}

loc_802B7FA8:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_802B7FB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B7FC8;
    }
}

loc_802B7FB4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 166), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
    goto loc_802B7FD8;
}

loc_802B7FC8:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 166), static_cast<uint8_t>(r0));
    r0 = 7;
    MemoryInline::FlatWrite8((r29 + 270), static_cast<uint8_t>(r0));
}

loc_802B7FD8:
{
    r0 = (r31 + -32768);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r29 + 272), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 163));
}

loc_802B7FEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B8038;
    }
}

loc_802B7FF0:
{
    r0 = MemoryInline::FlatRead8((r29 + 165));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B7FFC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B8008;
    }
}

loc_802B8000:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B8008:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_802B8010:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(12288))) {
        goto loc_802B801C;
    }
}

loc_802B8014:
{
}

loc_802B8018:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(20480))) {
        goto loc_802B8024;
    }
}

loc_802B801C:
{
    r3 = 1;
    goto loc_802B803C;
}

loc_802B8024:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 163), static_cast<uint8_t>(r0));
    goto loc_802B8038;
}

loc_802B8030:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 163), static_cast<uint8_t>(r0));
}

loc_802B8038:
{
    r3 = 0;
}

loc_802B803C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B7B34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B7B34_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B7B34 func_802B7B34 preserves=true fpr_mask=0x00000000
