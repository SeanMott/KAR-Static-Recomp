//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F5C14.hpp"



void fn_801C7D5C(PPC::Runtime::GCContext* context)
{
/*801C7D5C 001C4B5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C7D60 001C4B60*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C7D64 001C4B64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C7D68 001C4B68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C7D6C 001C4B6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801C7D70 001C4B70*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801C7D74 001C4B74*/ PPC::Runtime::ASM::bne(.L_801C7D80);
/*801C7D78 001C4B78*/ PPC::Runtime::ASM::bl(fn_801F5C14);
/*801C7D7C 001C4B7C*/ PPC::Runtime::ASM::b(.L_801C7D84);
RUNTIME_PPC_JUMP_LABEL(.L_801C7D80, 0x801C7D80) //this is a jump label
/*801C7D80 001C4B80*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E19E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_801C7D84, 0x801C7D84) //this is a jump label
/*801C7D84 001C4B84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C7D88 001C4B88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C7D8C 001C4B8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C7D90 001C4B90*/ PPC::Runtime::ASM::blr();
}