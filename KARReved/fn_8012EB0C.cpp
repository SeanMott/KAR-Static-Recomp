//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_8012EB0C(PPC::Runtime::GCContext* context)
{
/*8012EB0C 0012B90C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012EB10 0012B910*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012EB14 0012B914*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012EB18 0012B918*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012EB1C 0012B91C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012EB20 0012B920*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012EB24 0012B924*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8012EB28 0012B928*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8012EB2C 0012B92C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xce8, context->r3));
/*8012EB30 0012B930*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012EB34 0012B934*/ PPC::Runtime::ASM::beq(.L_8012EB3C);
/*8012EB38 0012B938*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_8012EB3C, 0x8012EB3C) //this is a jump label
/*8012EB3C 0012B93C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012EB40 0012B940*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012EB44 0012B944*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012EB48 0012B948*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012EB4C 0012B94C*/ PPC::Runtime::ASM::blr();
}