//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"



void fn_8015945C(PPC::Runtime::GCContext* context)
{
/*8015945C 0015625C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80159460 00156260*/ PPC::Runtime::ASM::mflr(context->r0);
/*80159464 00156264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80159468 00156268*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015946C 0015626C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80159470 00156270*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80159474 00156274*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80159478 00156278*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015947C 0015627C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80159480 00156280*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x788, context->r3));
/*80159484 00156284*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80159488 00156288*/ PPC::Runtime::ASM::beq(.L_80159490);
/*8015948C 0015628C*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_80159490, 0x80159490) //this is a jump label
/*80159490 00156290*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80159494 00156294*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80159498 00156298*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015949C 0015629C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801594A0 001562A0*/ PPC::Runtime::ASM::blr();
}