//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_80121178(PPC::Runtime::GCContext* context)
{
/*80121178 0011DF78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012117C 0011DF7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80121180 0011DF80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80121184 0011DF84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80121188 0011DF88*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8012118C 0011DF8C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80121190 0011DF90*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80121194 0011DF94*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80121198 0011DF98*/ PPC::Runtime::ASM::slwi(context->r4, context->r30, 7);
/*8012119C 0011DF9C*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*801211A0 0011DFA0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*801211A4 0011DFA4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801211A8 0011DFA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x378, context->r3));
/*801211AC 0011DFAC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801211B0 0011DFB0*/ PPC::Runtime::ASM::beq(.L_801211B8);
/*801211B4 0011DFB4*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_801211B8, 0x801211B8) //this is a jump label
/*801211B8 0011DFB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801211BC 0011DFBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801211C0 0011DFC0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801211C4 0011DFC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801211C8 0011DFC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801211CC 0011DFCC*/ PPC::Runtime::ASM::blr();
}