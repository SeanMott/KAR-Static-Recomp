//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"
#include "fn_80117A10.hpp"



void fn_801234B0(PPC::Runtime::GCContext* context)
{
/*801234B0 001202B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801234B4 001202B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801234B8 001202B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801234BC 001202BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801234C0 001202C0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801234C4 001202C4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801234C8 001202C8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801234CC 001202CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*801234D0 001202D0*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*801234D4 001202D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r31));
/*801234D8 001202D8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801234DC 001202DC*/ PPC::Runtime::ASM::beq(.L_801234F4);
/*801234E0 001202E0*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*801234E4 001202E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801234E8 001202E8*/ PPC::Runtime::ASM::extsb(context->r3, context->r30);
/*801234EC 001202EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r31));
/*801234F0 001202F0*/ PPC::Runtime::ASM::bl(fn_80117A10);
RUNTIME_PPC_JUMP_LABEL(.L_801234F4, 0x801234F4) //this is a jump label
/*801234F4 001202F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801234F8 001202F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801234FC 001202FC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80123500 00120300*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80123504 00120304*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80123508 00120308*/ PPC::Runtime::ASM::blr();
}