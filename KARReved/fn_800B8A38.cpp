//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B5F08.hpp"



void fn_800B8A38(PPC::Runtime::GCContext* context)
{
/*800B8A38 000B5838*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800B8A3C 000B583C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B8A40 000B5840*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800B8A44 000B5844*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B8A48 000B5848*/ PPC::Runtime::ASM::blt(.L_800B8A54);
/*800B8A4C 000B584C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x20);
/*800B8A50 000B5850*/ PPC::Runtime::ASM::blt(.L_800B8A5C);
RUNTIME_PPC_JUMP_LABEL(.L_800B8A54, 0x800B8A54) //this is a jump label
/*800B8A54 000B5854*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B8A58 000B5858*/ PPC::Runtime::ASM::b(.L_800B8A70);
RUNTIME_PPC_JUMP_LABEL(.L_800B8A5C, 0x800B8A5C) //this is a jump label
/*800B8A5C 000B585C*/ PPC::Runtime::ASM::lis(context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800B8A60 000B5860*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800B8A64 000B5864*/ PPC::Runtime::ASM::addi(context->r3, context->r4, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800B8A68 000B5868*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800B8A6C 000B586C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800B8A70, 0x800B8A70) //this is a jump label
/*800B8A70 000B5870*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B8A74 000B5874*/ PPC::Runtime::ASM::beq(.L_800B8A80);
/*800B8A78 000B5878*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800B8A7C 000B587C*/ PPC::Runtime::ASM::b(.L_800B8A84);
RUNTIME_PPC_JUMP_LABEL(.L_800B8A80, 0x800B8A80) //this is a jump label
/*800B8A80 000B5880*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B8A84, 0x800B8A84) //this is a jump label
/*800B8A84 000B5884*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B8A88 000B5888*/ PPC::Runtime::ASM::beq(.L_800B8A94);
/*800B8A8C 000B588C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800B8A90 000B5890*/ PPC::Runtime::ASM::b(.L_800B8A98);
RUNTIME_PPC_JUMP_LABEL(.L_800B8A94, 0x800B8A94) //this is a jump label
/*800B8A94 000B5894*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B8A98, 0x800B8A98) //this is a jump label
/*800B8A98 000B5898*/ PPC::Runtime::ASM::bl(fn_800B5F08);
/*800B8A9C 000B589C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B8AA0 000B58A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B8AA4 000B58A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800B8AA8 000B58A8*/ PPC::Runtime::ASM::blr();
}