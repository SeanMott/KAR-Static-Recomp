//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80172F68(PPC::Runtime::GCContext* context)
{
/*80172F68 0016FD68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80172F6C 0016FD6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80172F70 0016FD70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172F74 0016FD74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80172F78 0016FD78*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80172F7C 0016FD7C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80172F80 0016FD80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcac, context->r3));
/*80172F84 0016FD84*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80172F88 0016FD88*/ PPC::Runtime::ASM::beq(.L_80172F98);
/*80172F8C 0016FD8C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80172F90 0016FD90*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80172F94 0016FD94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcac, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80172F98, 0x80172F98) //this is a jump label
/*80172F98 0016FD98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172F9C 0016FD9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80172FA0 0016FDA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80172FA4 0016FDA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80172FA8 0016FDA8*/ PPC::Runtime::ASM::blr();
}