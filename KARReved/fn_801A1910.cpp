//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A16E0.hpp"



void fn_801A1910(PPC::Runtime::GCContext* context)
{
/*801A1910 0019E710*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A1914 0019E714*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A1918 0019E718*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A191C 0019E71C*/ PPC::Runtime::ASM::bl(fn_801A16E0);
/*801A1920 0019E720*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A1924 0019E724*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A1928 0019E728*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A192C 0019E72C*/ PPC::Runtime::ASM::blr();
}