//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803162A0.hpp"



void fn_80316220(PPC::Runtime::GCContext* context)
{
/*80316220 00313020*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80316224 00313024*/ PPC::Runtime::ASM::mflr(context->r0);
/*80316228 00313028*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8031622C 0031302C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80316230 00313030*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80316234 00313034*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80316238 00313038*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8031623C 0031303C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80316240 00313040*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80316244 00313044*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xac);
/*80316248 00313048*/ PPC::Runtime::ASM::add(context->r30, context->r31, context->r0);
/*8031624C 0031304C*/ PPC::Runtime::ASM::b(.L_80316274);
RUNTIME_PPC_JUMP_LABEL(.L_80316250, 0x80316250) //this is a jump label
/* 80316250 00313050  37 DE FF 54 */ subic. context->r30 , context->r30 , 0xac
/*80316254 00313054*/ PPC::Runtime::ASM::beq(.L_80316274);
/*80316258 00313058*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa0);
/*8031625C 0031305C*/ PPC::Runtime::ASM::beq(.L_80316274);
/*80316260 00313060*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa0);
/*80316264 00313064*/ PPC::Runtime::ASM::beq(.L_80316274);
/*80316268 00313068*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa0);
/*8031626C 0031306C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80316270 00313070*/ PPC::Runtime::ASM::bl(fn_803162A0);
RUNTIME_PPC_JUMP_LABEL(.L_80316274, 0x80316274) //this is a jump label
/*80316274 00313074*/ PPC::Runtime::ASM::cmplw(context->r30, context->r31);
/*80316278 00313078*/ PPC::Runtime::ASM::bgt(.L_80316250);
/*8031627C 0031307C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80316280 00313080*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80316284 00313084*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80316288 00313088*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8031628C 0031308C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80316290 00313090*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80316294 00313094*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80316298 00313098*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8031629C 0031309C*/ PPC::Runtime::ASM::blr();
}