//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_MObjRemove(PPC::Runtime::GCContext* context)
{
/*803FADB8 003F7BB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803FADBC 003F7BBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FADC0 003F7BC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FADC4 003F7BC4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 803FADC8 003F7BC8  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*803FADCC 003F7BCC*/ PPC::Runtime::ASM::beq(.L_803FADF4);
/*803FADD0 003F7BD0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FADD4 003F7BD4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*803FADD8 003F7BD8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FADDC 003F7BDC*/ PPC::Runtime::ASM::bctrl();
/*803FADE0 003F7BE0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FADE4 003F7BE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803FADE8 003F7BE8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*803FADEC 003F7BEC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FADF0 003F7BF0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FADF4, 0x803FADF4) //this is a jump label
/*803FADF4 003F7BF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FADF8 003F7BF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803FADFC 003F7BFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FAE00 003F7C00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803FAE04 003F7C04*/ PPC::Runtime::ASM::blr();
}