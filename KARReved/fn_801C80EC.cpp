//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E3098.hpp"



void fn_801C80EC(PPC::Runtime::GCContext* context)
{
/*801C80EC 001C4EEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C80F0 001C4EF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C80F4 001C4EF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C80F8 001C4EF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C80FC 001C4EFC*/ PPC::Runtime::ASM::bl(fn_801E3098);
/*801C8100 001C4F00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8104 001C4F04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C8108 001C4F08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C810C 001C4F0C*/ PPC::Runtime::ASM::blr();
}