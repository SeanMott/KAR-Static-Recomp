//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_80130C94(PPC::Runtime::GCContext* context)
{
/*80130C94 0012DA94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80130C98 0012DA98*/ PPC::Runtime::ASM::mflr(context->r0);
/*80130C9C 0012DA9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80130CA0 0012DAA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80130CA4 0012DAA4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80130CA8 0012DAA8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80130CAC 0012DAAC*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80130CB0 0012DAB0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80130CB4 0012DAB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3c, context->r3));
/*80130CB8 0012DAB8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80130CBC 0012DABC*/ PPC::Runtime::ASM::beq(.L_80130CC4);
/*80130CC0 0012DAC0*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80130CC4, 0x80130CC4) //this is a jump label
/*80130CC4 0012DAC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80130CC8 0012DAC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80130CCC 0012DACC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80130CD0 0012DAD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80130CD4 0012DAD4*/ PPC::Runtime::ASM::blr();
}