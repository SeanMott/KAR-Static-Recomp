//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801507A8(PPC::Runtime::GCContext* context)
{
/*801507A8 0014D5A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801507AC 0014D5AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801507B0 0014D5B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801507B4 0014D5B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801507B8 0014D5B8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801507BC 0014D5BC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801507C0 0014D5C0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801507C4 0014D5C4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801507C8 0014D5C8*/ PPC::Runtime::ASM::extsb(context->r4, context->r30);
/*801507CC 0014D5CC*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801507D0 0014D5D0*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x4dc);
/*801507D4 0014D5D4*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 2);
/*801507D8 0014D5D8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801507DC 0014D5DC*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r3);
/*801507E0 0014D5E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801507E4 0014D5E4*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r0);
/*801507E8 0014D5E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801507EC 0014D5EC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801507F0 0014D5F0*/ PPC::Runtime::ASM::beq(.L_80150804);
/*801507F4 0014D5F4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*801507F8 0014D5F8*/ PPC::Runtime::ASM::bne(.L_80150800);
/*801507FC 0014D5FC*/ PPC::Runtime::ASM::b(.L_80150804);
RUNTIME_PPC_JUMP_LABEL(.L_80150800, 0x80150800) //this is a jump label
/*80150800 0014D600*/ PPC::Runtime::ASM::bl(fn_80429BE0);
RUNTIME_PPC_JUMP_LABEL(.L_80150804, 0x80150804) //this is a jump label
/*80150804 0014D604*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80150808 0014D608*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015080C 0014D60C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80150810 0014D610*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80150814 0014D614*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80150818 0014D618*/ PPC::Runtime::ASM::blr();
}