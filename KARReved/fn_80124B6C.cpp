//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_80124B6C(PPC::Runtime::GCContext* context)
{
/*80124B6C 0012196C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80124B70 00121970*/ PPC::Runtime::ASM::mflr(context->r0);
/*80124B74 00121974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124B78 00121978*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124B7C 0012197C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80124B80 00121980*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80124B84 00121984*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80124B88 00121988*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80124B8C 0012198C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r3));
/*80124B90 00121990*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80124B94 00121994*/ PPC::Runtime::ASM::beq(.L_80124B9C);
/*80124B98 00121998*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80124B9C, 0x80124B9C) //this is a jump label
/*80124B9C 0012199C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124BA0 001219A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124BA4 001219A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80124BA8 001219A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80124BAC 001219AC*/ PPC::Runtime::ASM::blr();
}