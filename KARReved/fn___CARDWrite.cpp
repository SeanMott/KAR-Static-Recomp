//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_BlockReadWriteback?.hpp"
#include "fn_BlockReadWriteback?.hpp"
#include "fn___CARDWritePage.hpp"



void fn___CARDWrite(PPC::Runtime::GCContext* context)
{
/*803E4588 003E1388*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E458C 003E138C*/ PPC::Runtime::ASM::mulli(context->r9, context->r3, 0x110);
/*803E4590 003E1390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E4594 003E1394*/ PPC::Runtime::ASM::lis(context->r8, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E4598 003E1398*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803E459C 003E139C*/ PPC::Runtime::ASM::addi(context->r0, context->r8, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/*803E45A0 003E13A0*/ PPC::Runtime::ASM::add(context->r8, context->r0, context->r9);
/*803E45A4 003E13A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803E45A8 003E13A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803E45AC 003E13AC*/ PPC::Runtime::ASM::bne(.L_803E45B8);
/*803E45B0 003E13B0*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/*803E45B4 003E13B4*/ PPC::Runtime::ASM::b(.L_803E45DC);
RUNTIME_PPC_JUMP_LABEL(.L_803E45B8, 0x803E45B8) //this is a jump label
/*803E45B8 003E13B8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r8));
/*803E45BC 003E13BC*/ PPC::Runtime::ASM::srwi(context->r0, context->r5, 7);
/*803E45C0 003E13C0*/ PPC::Runtime::ASM::lis(context->r5, fn_BlockReadWriteback? @ Get_MemoryOffset_HighBit);
/*803E45C4 003E13C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r8));
/*803E45C8 003E13C8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, fn_BlockReadWriteback? @ Get_MemoryOffset_LowBit);
/*803E45CC 003E13CC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r8));
/*803E45D0 003E13D0*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
/*803E45D4 003E13D4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r8));
/*803E45D8 003E13D8*/ PPC::Runtime::ASM::bl(fn___CARDWritePage);
RUNTIME_PPC_JUMP_LABEL(.L_803E45DC, 0x803E45DC) //this is a jump label
/*803E45DC 003E13DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803E45E0 003E13E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803E45E4 003E13E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E45E8 003E13E8*/ PPC::Runtime::ASM::blr();
}