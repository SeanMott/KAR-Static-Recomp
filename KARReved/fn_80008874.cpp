//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_80008874(PPC::Runtime::GCContext* context)
{
/*80008874 00005674*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80008878 00005678*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000887C 0000567C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80008880 00005680*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80008884 00005684*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80008888 00005688*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x7d7);
/*8000888C 0000568C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80008890 00005690*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80008894 00005694*/ PPC::Runtime::ASM::blr();
}