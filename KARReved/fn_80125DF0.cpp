//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_80125DF0(PPC::Runtime::GCContext* context)
{
/*80125DF0 00122BF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80125DF4 00122BF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80125DF8 00122BF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80125DFC 00122BFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80125E00 00122C00*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80125E04 00122C04*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80125E08 00122C08*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80125E0C 00122C0C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80125E10 00122C10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb24, context->r3));
/*80125E14 00122C14*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80125E18 00122C18*/ PPC::Runtime::ASM::beq(.L_80125E20);
/*80125E1C 00122C1C*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80125E20, 0x80125E20) //this is a jump label
/*80125E20 00122C20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80125E24 00122C24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80125E28 00122C28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80125E2C 00122C2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80125E30 00122C30*/ PPC::Runtime::ASM::blr();
}