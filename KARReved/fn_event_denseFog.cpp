//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EE6CC.hpp"
#include "fn_800EE6C4.hpp"
#include "fn_800EE660.hpp"



void fn_event_denseFog(PPC::Runtime::GCContext* context)
{
/*801118DC 0010E6DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801118E0 0010E6E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801118E4 0010E6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801118E8 0010E6E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801118EC 0010E6EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801118F0 0010E6F0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801118F4 0010E6F4*/ PPC::Runtime::ASM::bl(fn_800EE6CC);
/*801118F8 0010E6F8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801118FC 0010E6FC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80111900 0010E700*/ PPC::Runtime::ASM::bl(fn_800EE6C4);
/*80111904 0010E704*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*80111908 0010E708*/ PPC::Runtime::ASM::blt(.L_80111914);
/*8011190C 0010E70C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80111910 0010E710*/ PPC::Runtime::ASM::bl(fn_800EE660);
RUNTIME_PPC_JUMP_LABEL(.L_80111914, 0x80111914) //this is a jump label
/*80111914 0010E714*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80111918 0010E718*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011191C 0010E71C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80111920 0010E720*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80111924 0010E724*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80111928 0010E728*/ PPC::Runtime::ASM::blr();
}