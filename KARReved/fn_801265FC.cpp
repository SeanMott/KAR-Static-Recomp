//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_801265FC(PPC::Runtime::GCContext* context)
{
/*801265FC 001233FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80126600 00123400*/ PPC::Runtime::ASM::mflr(context->r0);
/*80126604 00123404*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80126608 00123408*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012660C 0012340C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80126610 00123410*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80126614 00123414*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80126618 00123418*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8012661C 0012341C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r3));
/*80126620 00123420*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80126624 00123424*/ PPC::Runtime::ASM::beq(.L_8012662C);
/*80126628 00123428*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_8012662C, 0x8012662C) //this is a jump label
/*8012662C 0012342C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80126630 00123430*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80126634 00123434*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80126638 00123438*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012663C 0012343C*/ PPC::Runtime::ASM::blr();
}