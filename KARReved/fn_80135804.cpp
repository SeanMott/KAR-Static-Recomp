//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015D1E0.hpp"



void fn_80135804(PPC::Runtime::GCContext* context)
{
/*80135804 00132604*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135808 00132608*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013580C 0013260C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135810 00132610*/ PPC::Runtime::ASM::bl(fn_8015D1E0);
/*80135814 00132614*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135818 00132618*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013581C 0013261C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135820 00132620*/ PPC::Runtime::ASM::blr();
}