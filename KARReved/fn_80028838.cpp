//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_80028838(PPC::Runtime::GCContext* context)
{
/*80028838 00025638*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8002883C 0002563C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80028840 00025640*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80028844 00025644*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80028848 00025648*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8002884C 0002564C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x196, context->r3));
/*80028850 00025650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80028854 00025654*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80028858 00025658*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8002885C 0002565C*/ PPC::Runtime::ASM::blr();
}