//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_8012ECFC(PPC::Runtime::GCContext* context)
{
/*8012ECFC 0012BAFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012ED00 0012BB00*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012ED04 0012BB04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012ED08 0012BB08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012ED0C 0012BB0C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012ED10 0012BB10*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012ED14 0012BB14*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8012ED18 0012BB18*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8012ED1C 0012BB1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcfc, context->r3));
/*8012ED20 0012BB20*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012ED24 0012BB24*/ PPC::Runtime::ASM::beq(.L_8012ED2C);
/*8012ED28 0012BB28*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_8012ED2C, 0x8012ED2C) //this is a jump label
/*8012ED2C 0012BB2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012ED30 0012BB30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012ED34 0012BB34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012ED38 0012BB38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012ED3C 0012BB3C*/ PPC::Runtime::ASM::blr();
}