//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80068D68.hpp"



void fn_80221300(PPC::Runtime::GCContext* context)
{
/*80221300 0021E100*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80221304 0021E104*/ PPC::Runtime::ASM::mflr(context->r0);
/*80221308 0021E108*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x3c);
/*8022130C 0021E10C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221310 0021E110*/ PPC::Runtime::ASM::bl(fn_80068D68);
/*80221314 0021E114*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221318 0021E118*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022131C 0021E11C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80221320 0021E120*/ PPC::Runtime::ASM::blr();
}