//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_8012F0C8(PPC::Runtime::GCContext* context)
{
/*8012F0C8 0012BEC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012F0CC 0012BECC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012F0D0 0012BED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012F0D4 0012BED4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012F0D8 0012BED8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012F0DC 0012BEDC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012F0E0 0012BEE0*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*8012F0E4 0012BEE4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8012F0E8 0012BEE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd10, context->r3));
/*8012F0EC 0012BEEC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012F0F0 0012BEF0*/ PPC::Runtime::ASM::beq(.L_8012F0F8);
/*8012F0F4 0012BEF4*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_8012F0F8, 0x8012F0F8) //this is a jump label
/*8012F0F8 0012BEF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012F0FC 0012BEFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012F100 0012BF00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012F104 0012BF04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012F108 0012BF08*/ PPC::Runtime::ASM::blr();
}