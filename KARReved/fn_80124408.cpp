//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_80124408(PPC::Runtime::GCContext* context)
{
/*80124408 00121208*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012440C 0012120C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80124410 00121210*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124414 00121214*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124418 00121218*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012441C 0012121C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80124420 00121220*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80124424 00121224*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80124428 00121228*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x610, context->r3));
/*8012442C 0012122C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80124430 00121230*/ PPC::Runtime::ASM::beq(.L_80124438);
/*80124434 00121234*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80124438, 0x80124438) //this is a jump label
/*80124438 00121238*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012443C 0012123C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124440 00121240*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80124444 00121244*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80124448 00121248*/ PPC::Runtime::ASM::blr();
}