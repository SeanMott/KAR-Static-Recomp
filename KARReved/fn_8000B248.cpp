//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000B248(PPC::Runtime::GCContext* context)
{
/*8000B248 00008048*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000B24C 0000804C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000B250 00008050*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B254 00008054*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000B258 00008058*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000B25C 0000805C*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x356, context->r3));
/*8000B260 00008060*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000B264 00008064*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000B268 00008068*/ PPC::Runtime::ASM::blr();
}