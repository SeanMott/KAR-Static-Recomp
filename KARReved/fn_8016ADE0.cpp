//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8016ADE0(PPC::Runtime::GCContext* context)
{
/*8016ADE0 00167BE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016ADE4 00167BE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016ADE8 00167BE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016ADEC 00167BEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016ADF0 00167BF0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8016ADF4 00167BF4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016ADF8 00167BF8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016ADFC 00167BFC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8016AE00, 0x8016AE00) //this is a jump label
/*8016AE00 00167C00*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016AE04 00167C04*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8016AE08 00167C08*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016AE0C 00167C0C*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*8016AE10 00167C10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac8, context->r30));
/*8016AE14 00167C14*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016AE18 00167C18*/ PPC::Runtime::ASM::beq(.L_8016AE24);
/*8016AE1C 00167C1C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8016AE20 00167C20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8016AE24, 0x8016AE24) //this is a jump label
/*8016AE24 00167C24*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8016AE28 00167C28*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8016AE2C 00167C2C*/ PPC::Runtime::ASM::blt(.L_8016AE00);
/*8016AE30 00167C30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016AE34 00167C34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016AE38 00167C38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016AE3C 00167C3C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016AE40 00167C40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016AE44 00167C44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016AE48 00167C48*/ PPC::Runtime::ASM::blr();
}