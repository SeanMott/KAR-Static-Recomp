//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F3DC.hpp"



void fn_801C4E5C(PPC::Runtime::GCContext* context)
{
/*801C4E5C 001C1C5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C4E60 001C1C60*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C4E64 001C1C64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4E68 001C1C68*/ PPC::Runtime::ASM::bl(fn_8019F3DC);
/*801C4E6C 001C1C6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4E70 001C1C70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C4E74 001C1C74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4E78 001C1C78*/ PPC::Runtime::ASM::blr();
}