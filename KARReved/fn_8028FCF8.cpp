//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028FCF8(PPC::Runtime::GCContext* context)
{
/*8028FCF8 0028CAF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028FCFC 0028CAFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028FD00 0028CB00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028FD04 0028CB04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028FD08 0028CB08*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028FD0C 0028CB0C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028FD10 0028CB10  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028FD14 0028CB14*/ PPC::Runtime::ASM::beq(.L_8028FD48);
/*8028FD18 0028CB18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028FD1C 0028CB1C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028FD20 0028CB20*/ PPC::Runtime::ASM::beq(.L_8028FD38);
/*8028FD24 0028CB24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028FD28 0028CB28*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028FD2C 0028CB2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028FD30 0028CB30*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028FD34 0028CB34*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028FD38, 0x8028FD38) //this is a jump label
/*8028FD38 0028CB38*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028FD3C 0028CB3C*/ PPC::Runtime::ASM::ble(.L_8028FD48);
/*8028FD40 0028CB40*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028FD44 0028CB44*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028FD48, 0x8028FD48) //this is a jump label
/*8028FD48 0028CB48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028FD4C 0028CB4C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028FD50 0028CB50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028FD54 0028CB54*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028FD58 0028CB58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028FD5C 0028CB5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028FD60 0028CB60*/ PPC::Runtime::ASM::blr();
}