//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC80.hpp"



void fn_801C090C(PPC::Runtime::GCContext* context)
{
/*801C090C 001BD70C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0910 001BD710*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0914 001BD714*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0918 001BD718*/ PPC::Runtime::ASM::bl(fn_8019FC80);
/*801C091C 001BD71C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0920 001BD720*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0924 001BD724*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0928 001BD728*/ PPC::Runtime::ASM::blr();
}