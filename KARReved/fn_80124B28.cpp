//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_80124B28(PPC::Runtime::GCContext* context)
{
/*80124B28 00121928*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80124B2C 0012192C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80124B30 00121930*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124B34 00121934*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124B38 00121938*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80124B3C 0012193C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80124B40 00121940*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80124B44 00121944*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80124B48 00121948*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r3));
/*80124B4C 0012194C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80124B50 00121950*/ PPC::Runtime::ASM::beq(.L_80124B58);
/*80124B54 00121954*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80124B58, 0x80124B58) //this is a jump label
/*80124B58 00121958*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124B5C 0012195C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124B60 00121960*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80124B64 00121964*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80124B68 00121968*/ PPC::Runtime::ASM::blr();
}