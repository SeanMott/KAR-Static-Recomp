//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_80449DC0.hpp"
#include "fn___assert.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80442A54(PPC::Runtime::GCContext* context)
{
/*80442A54 0043F854*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80442A58 0043F858*/ PPC::Runtime::ASM::mflr(context->r0);
/*80442A5C 0043F85C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80442A60 0043F860*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80442A64 0043F864*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80442A68 0043F868*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80442A6C 0043F86C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80442A70 0043F870*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 80442A74 0043F874  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*80442A78 0043F878*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE494 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80442A7C 0043F87C*/ PPC::Runtime::ASM::and(context->r30, context->r28, context->r0);
/*80442A80 0043F880*/ PPC::Runtime::ASM::blt(.L_80442A90);
/*80442A84 0043F884*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE49C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80442A88 0043F888*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*80442A8C 0043F88C*/ PPC::Runtime::ASM::ble(.L_80442A98);
RUNTIME_PPC_JUMP_LABEL(.L_80442A90, 0x80442A90) //this is a jump label
/*80442A90 0043F890*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80442A94 0043F894*/ PPC::Runtime::ASM::b(.L_80442B68);
RUNTIME_PPC_JUMP_LABEL(.L_80442A98, 0x80442A98) //this is a jump label
/*80442A98 0043F898*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80442A9C 0043F89C*/ PPC::Runtime::ASM::mulli(context->r0, context->r30, 0x48);
/*80442AA0 0043F8A0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE48C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80442AA4 0043F8A4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80442AA8 0043F8A8*/ PPC::Runtime::ASM::add(context->r29, context->r4, context->r0);
/*80442AAC 0043F8AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80442AB0 0043F8B0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*80442AB4 0043F8B4*/ PPC::Runtime::ASM::bne(.L_80442AC4);
/*80442AB8 0043F8B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/* 80442ABC 0043F8BC  54 04 00 03 */ clrrwi. context->r4 , context->r0 , 30
/*80442AC0 0043F8C0*/ PPC::Runtime::ASM::bne(.L_80442AD4);
RUNTIME_PPC_JUMP_LABEL(.L_80442AC4, 0x80442AC4) //this is a jump label
/*80442AC4 0043F8C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80442AC8 0043F8C8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80442ACC 0043F8CC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80442AD0 0043F8D0*/ PPC::Runtime::ASM::b(.L_80442B68);
RUNTIME_PPC_JUMP_LABEL(.L_80442AD4, 0x80442AD4) //this is a jump label
/*80442AD4 0043F8D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80442AD8 0043F8D8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80442ADC 0043F8DC*/ PPC::Runtime::ASM::beq(.L_80442B28);
/*80442AE0 0043F8E0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r31, 24);
/*80442AE4 0043F8E4*/ PPC::Runtime::ASM::li(context->r4, 0xfe);
/*80442AE8 0043F8E8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfe);
/*80442AEC 0043F8EC*/ PPC::Runtime::ASM::bge(.L_80442AF4);
/*80442AF0 0043F8F0*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80442AF4, 0x80442AF4) //this is a jump label
/*80442AF4 0043F8F4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80442AF8 0043F8F8*/ PPC::Runtime::ASM::bge(.L_80442B04);
/*80442AFC 0043F8FC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80442B00 0043F900*/ PPC::Runtime::ASM::b(.L_80442B18);
RUNTIME_PPC_JUMP_LABEL(.L_80442B04, 0x80442B04) //this is a jump label
/*80442B04 0043F904*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r31, 24);
/*80442B08 0043F908*/ PPC::Runtime::ASM::li(context->r4, 0xfe);
/*80442B0C 0043F90C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfe);
/*80442B10 0043F910*/ PPC::Runtime::ASM::bge(.L_80442B18);
/*80442B14 0043F914*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80442B18, 0x80442B18) //this is a jump label
/*80442B18 0043F918*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r4, 24);
/*80442B1C 0043F91C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80442B20 0043F920*/ PPC::Runtime::ASM::bl(fn_80449DC0);
/*80442B24 0043F924*/ PPC::Runtime::ASM::b(.L_80442B5C);
RUNTIME_PPC_JUMP_LABEL(.L_80442B28, 0x80442B28) //this is a jump label
/*80442B28 0043F928*/ PPC::Runtime::ASM::subis(context->r0, context->r4, 0x4000);
/*80442B2C 0043F92C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80442B30 0043F930*/ PPC::Runtime::ASM::beq(.L_80442B4C);
/*80442B34 0043F934*/ PPC::Runtime::ASM::lis(context->r3, lbl_805089E8 @ Get_MemoryOffset_HighBit);
/*80442B38 0043F938*/ PPC::Runtime::ASM::lis(context->r5, lbl_80508B48 @ Get_MemoryOffset_HighBit);
/*80442B3C 0043F93C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805089E8 @ Get_MemoryOffset_LowBit);
/*80442B40 0043F940*/ PPC::Runtime::ASM::li(context->r4, 0x48d);
/*80442B44 0043F944*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80508B48 @ Get_MemoryOffset_LowBit);
/*80442B48 0043F948*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80442B4C, 0x80442B4C) //this is a jump label
/*80442B4C 0043F94C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29, context->r29));
/*80442B50 0043F950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80442B54 0043F954*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x2);
/*80442B58 0043F958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80442B5C, 0x80442B5C) //this is a jump label
/*80442B5C 0043F95C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80442B60 0043F960*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80442B64 0043F964*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80442B68, 0x80442B68) //this is a jump label
/*80442B68 0043F968*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80442B6C 0043F96C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80442B70 0043F970*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80442B74 0043F974*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80442B78 0043F978*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80442B7C 0043F97C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80442B80 0043F980*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80442B84 0043F984*/ PPC::Runtime::ASM::blr();
}