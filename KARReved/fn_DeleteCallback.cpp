//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDFreeBlock.hpp"
#include "fn___CARDPutControlBlock.hpp"



void fn_DeleteCallback(PPC::Runtime::GCContext* context)
{
/*803E7E4C 003E4C4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E7E50 003E4C50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E7E54 003E4C54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803E7E58 003E4C58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7E5C 003E4C5C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E7E60 003E4C60*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 803E7E64 003E4C64  7C 9D 23 79 */ mr. context->r29 , context->r4
/*803E7E68 003E4C68*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E7E6C 003E4C6C*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x0);
/*803E7E70 003E4C70*/ PPC::Runtime::ASM::mulli(context->r5, context->r28, 0x110);
/*803E7E74 003E4C74*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E7E78 003E4C78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/*803E7E7C 003E4C7C*/ PPC::Runtime::ASM::add(context->r31, context->r0, context->r5);
/*803E7E80 003E4C80*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*803E7E84 003E4C84*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E7E88 003E4C88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*803E7E8C 003E4C8C*/ PPC::Runtime::ASM::blt(.L_803E7EA8);
/*803E7E90 003E4C90*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbe, context->r31));
/*803E7E94 003E4C94*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*803E7E98 003E4C98*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*803E7E9C 003E4C9C*/ PPC::Runtime::ASM::bl(fn___CARDFreeBlock);
/* 803E7EA0 003E4CA0  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*803E7EA4 003E4CA4*/ PPC::Runtime::ASM::bge(.L_803E7ED0);
RUNTIME_PPC_JUMP_LABEL(.L_803E7EA8, 0x803E7EA8) //this is a jump label
/*803E7EA8 003E4CA8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803E7EAC 003E4CAC*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*803E7EB0 003E4CB0*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
/*803E7EB4 003E4CB4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803E7EB8 003E4CB8*/ PPC::Runtime::ASM::beq(.L_803E7ED0);
/*803E7EBC 003E4CBC*/ PPC::Runtime::ASM::addi(context->r12, context->r30, 0x0);
/*803E7EC0 003E4CC0*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803E7EC4 003E4CC4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*803E7EC8 003E4CC8*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/* 803E7ECC 003E4CCC  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803E7ED0, 0x803E7ED0) //this is a jump label
/*803E7ED0 003E4CD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E7ED4 003E4CD4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7ED8 003E4CD8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E7EDC 003E4CDC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E7EE0 003E4CE0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E7EE4 003E4CE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803E7EE8 003E4CE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E7EEC 003E4CEC*/ PPC::Runtime::ASM::blr();
}