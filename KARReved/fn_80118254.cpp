//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_80118254(PPC::Runtime::GCContext* context)
{
/*80118254 00115054*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80118258 00115058*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011825C 0011505C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80118260 00115060*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80118264 00115064*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80118268 00115068*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011826C 0011506C*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80118270 00115070*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80118274 00115074*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r3));
/*80118278 00115078*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011827C 0011507C*/ PPC::Runtime::ASM::beq(.L_80118284);
/*80118280 00115080*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80118284, 0x80118284) //this is a jump label
/*80118284 00115084*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80118288 00115088*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011828C 0011508C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80118290 00115090*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80118294 00115094*/ PPC::Runtime::ASM::blr();
}