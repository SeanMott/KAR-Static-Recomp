//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_80120054(PPC::Runtime::GCContext* context)
{
/*80120054 0011CE54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80120058 0011CE58*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012005C 0011CE5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80120060 0011CE60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80120064 0011CE64*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80120068 0011CE68*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012006C 0011CE6C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80120070 0011CE70*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80120074 0011CE74*/ PPC::Runtime::ASM::mulli(context->r4, context->r30, 0x14);
/*80120078 0011CE78*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8012007C 0011CE7C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*80120080 0011CE80*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80120084 0011CE84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r3));
/*80120088 0011CE88*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012008C 0011CE8C*/ PPC::Runtime::ASM::beq(.L_80120094);
/*80120090 0011CE90*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80120094, 0x80120094) //this is a jump label
/*80120094 0011CE94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80120098 0011CE98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012009C 0011CE9C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801200A0 0011CEA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801200A4 0011CEA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801200A8 0011CEA8*/ PPC::Runtime::ASM::blr();
}