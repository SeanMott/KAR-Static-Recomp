//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ARStartDMA.hpp"
#include "fn_ARStartDMA.hpp"
#include "fn___ARQServiceQueueLo.hpp"



void fn___ARQInterruptServiceRoutine(PPC::Runtime::GCContext* context)
{
/*803E1B90 003DE990*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E1B94 003DE994*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E1B98 003DE998*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803E1B9C 003DE99C*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE038 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1BA0 003DE9A0*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803E1BA4 003DE9A4*/ PPC::Runtime::ASM::beq(.L_803E1BC4);
/*803E1BA8 003DE9A8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE030 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1BAC 003DE9AC*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 803E1BB0 003DE9B0  4E 80 00 21 */ blrl
/*803E1BB4 003DE9B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E1BB8 003DE9B8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE030 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1BBC 003DE9BC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE038 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1BC0 003DE9C0*/ PPC::Runtime::ASM::b(.L_803E1BE8);
RUNTIME_PPC_JUMP_LABEL(.L_803E1BC4, 0x803E1BC4) //this is a jump label
/*803E1BC4 003DE9C4*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE03C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1BC8 003DE9C8*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803E1BCC 003DE9CC*/ PPC::Runtime::ASM::beq(.L_803E1BE8);
/*803E1BD0 003DE9D0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE034 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1BD4 003DE9D4*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 803E1BD8 003DE9D8  4E 80 00 21 */ blrl
/*803E1BDC 003DE9DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E1BE0 003DE9E0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE034 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1BE4 003DE9E4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE03C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803E1BE8, 0x803E1BE8) //this is a jump label
/*803E1BE8 003DE9E8*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE020 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1BEC 003DE9EC*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*803E1BF0 003DE9F0*/ PPC::Runtime::ASM::beq(.L_803E1C3C);
/*803E1BF4 003DE9F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803E1BF8 003DE9F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803E1BFC 003DE9FC*/ PPC::Runtime::ASM::bne(.L_803E1C14);
/*803E1C00 003DEA00*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803E1C04 003DEA04*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*803E1C08 003DEA08*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*803E1C0C 003DEA0C*/ PPC::Runtime::ASM::bl(fn_ARStartDMA);
/*803E1C10 003DEA10*/ PPC::Runtime::ASM::b(.L_803E1C24);
RUNTIME_PPC_JUMP_LABEL(.L_803E1C14, 0x803E1C14) //this is a jump label
/*803E1C14 003DEA14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*803E1C18 003DEA18*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803E1C1C 003DEA1C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*803E1C20 003DEA20*/ PPC::Runtime::ASM::bl(fn_ARStartDMA);
RUNTIME_PPC_JUMP_LABEL(.L_803E1C24, 0x803E1C24) //this is a jump label
/*803E1C24 003DEA24*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE020 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1C28 003DEA28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*803E1C2C 003DEA2C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE038 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1C30 003DEA30*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE030 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1C34 003DEA34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803E1C38 003DEA38*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE020 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803E1C3C, 0x803E1C3C) //this is a jump label
/*803E1C3C 003DEA3C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE030 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E1C40 003DEA40*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803E1C44 003DEA44*/ PPC::Runtime::ASM::bne(.L_803E1C4C);
/*803E1C48 003DEA48*/ PPC::Runtime::ASM::bl(fn___ARQServiceQueueLo);
RUNTIME_PPC_JUMP_LABEL(.L_803E1C4C, 0x803E1C4C) //this is a jump label
/*803E1C4C 003DEA4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803E1C50 003DEA50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803E1C54 003DEA54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E1C58 003DEA58*/ PPC::Runtime::ASM::blr();
}