//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802069E8.hpp"



void fn_8020EFA8(PPC::Runtime::GCContext* context)
{
/*8020EFA8 0020BDA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020EFAC 0020BDAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020EFB0 0020BDB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020EFB4 0020BDB4*/ PPC::Runtime::ASM::bl(fn_802069E8);
/*8020EFB8 0020BDB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020EFBC 0020BDBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020EFC0 0020BDC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020EFC4 0020BDC4*/ PPC::Runtime::ASM::blr();
}