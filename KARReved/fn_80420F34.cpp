//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80420F34(PPC::Runtime::GCContext* context)
{
/*80420F34 0041DD34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80420F38 0041DD38*/ PPC::Runtime::ASM::mflr(context->r0);
/*80420F3C 0041DD3C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80420F40 0041DD40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80420F44 0041DD44*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80420F48 0041DD48*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80420F4C 0041DD4C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80420F50 0041DD50*/ PPC::Runtime::ASM::beq(.L_80420F5C);
/*80420F54 0041DD54*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80420F58 0041DD58*/ PPC::Runtime::ASM::bne(.L_80420F64);
RUNTIME_PPC_JUMP_LABEL(.L_80420F5C, 0x80420F5C) //this is a jump label
/*80420F5C 0041DD5C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80420F60 0041DD60*/ PPC::Runtime::ASM::b(.L_80420FA4);
RUNTIME_PPC_JUMP_LABEL(.L_80420F64, 0x80420F64) //this is a jump label
/*80420F64 0041DD64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80420F68 0041DD68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 80420F6C 0041DD6C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80420F70 0041DD70*/ PPC::Runtime::ASM::bne(.L_80420F98);
/*80420F74 0041DD74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80420F78 0041DD78*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80420F7C 0041DD7C*/ PPC::Runtime::ASM::bctrl();
/*80420F80 0041DD80*/ PPC::Runtime::ASM::b(.L_80420F98);
RUNTIME_PPC_JUMP_LABEL(.L_80420F84, 0x80420F84) //this is a jump label
/*80420F84 0041DD84*/ PPC::Runtime::ASM::cmplw(context->r31, context->r30);
/*80420F88 0041DD88*/ PPC::Runtime::ASM::bne(.L_80420F94);
/*80420F8C 0041DD8C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80420F90 0041DD90*/ PPC::Runtime::ASM::b(.L_80420FA4);
RUNTIME_PPC_JUMP_LABEL(.L_80420F94, 0x80420F94) //this is a jump label
/*80420F94 0041DD94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80420F98, 0x80420F98) //this is a jump label
/*80420F98 0041DD98*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80420F9C 0041DD9C*/ PPC::Runtime::ASM::bne(.L_80420F84);
/*80420FA0 0041DDA0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80420FA4, 0x80420FA4) //this is a jump label
/*80420FA4 0041DDA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80420FA8 0041DDA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80420FAC 0041DDAC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80420FB0 0041DDB0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80420FB4 0041DDB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80420FB8 0041DDB8*/ PPC::Runtime::ASM::blr();
}