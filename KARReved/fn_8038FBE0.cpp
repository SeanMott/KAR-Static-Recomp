//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038FBE0(PPC::Runtime::GCContext* context)
{
/*8038FBE0 0038C9E0*/ PPC::Runtime::ASM::mullw(context->r6, context->r6, context->r4);
/*8038FBE4 0038C9E4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8038FBE8 0038C9E8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8038FBEC 0038C9EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8038FBF0 0038C9F0*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r7);
/*8038FBF4 0038C9F4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4EA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038FBF8 0038C9F8*/ PPC::Runtime::ASM::xoris(context->r8, context->r0, 0x8000);
/*8038FBFC 0038C9FC*/ PPC::Runtime::ASM::slwi(context->r6, context->r6, 1);
/*8038FC00 0038CA00*/ PPC::Runtime::ASM::lis(context->r7, 0x4330);
/*8038FC04 0038CA04*/ PPC::Runtime::ASM::ble(.L_8038FCF8);
/* 8038FC08 0038CA08  54 80 F0 BF */ srwi. context->r0 , context->r4 , 2
/*8038FC0C 0038CA0C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8038FC10 0038CA10*/ PPC::Runtime::ASM::beq(.L_8038FCC4);
RUNTIME_PPC_JUMP_LABEL(.L_8038FC14, 0x8038FC14) //this is a jump label
/*8038FC14 0038CA14*/ PPC::Runtime::ASM::lhax(context->r0, context->r5, context->r6);
/*8038FC18 0038CA18*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FC1C 0038CA1C*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr5);
/*8038FC20 0038CA20*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*8038FC24 0038CA24*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FC28 0038CA28*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FC2C 0038CA2C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FC30 0038CA30*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FC34 0038CA34*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FC38 0038CA38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038FC3C 0038CA3C*/ PPC::Runtime::ASM::lhax(context->r0, context->r5, context->r6);
/*8038FC40 0038CA40*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FC44 0038CA44*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr5);
/*8038FC48 0038CA48*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*8038FC4C 0038CA4C*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FC50 0038CA50*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FC54 0038CA54*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FC58 0038CA58*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FC5C 0038CA5C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FC60 0038CA60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038FC64 0038CA64*/ PPC::Runtime::ASM::lhax(context->r0, context->r5, context->r6);
/*8038FC68 0038CA68*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FC6C 0038CA6C*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr5);
/*8038FC70 0038CA70*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*8038FC74 0038CA74*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FC78 0038CA78*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FC7C 0038CA7C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FC80 0038CA80*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FC84 0038CA84*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FC88 0038CA88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8038FC8C 0038CA8C*/ PPC::Runtime::ASM::lhax(context->r0, context->r5, context->r6);
/*8038FC90 0038CA90*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FC94 0038CA94*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr5);
/*8038FC98 0038CA98*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*8038FC9C 0038CA9C*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FCA0 0038CAA0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FCA4 0038CAA4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FCA8 0038CAA8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FCAC 0038CAAC*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FCB0 0038CAB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8038FCB4 0038CAB4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10);
/*8038FCB8 0038CAB8*/ PPC::Runtime::ASM::bdnz(.L_8038FC14);
/*8038FCBC 0038CABC*/ PPC::Runtime::ASM::andi.(context->r4, context->r4, 0x3);
/*8038FCC0 0038CAC0*/ PPC::Runtime::ASM::beq(.L_8038FCF8);
RUNTIME_PPC_JUMP_LABEL(.L_8038FCC4, 0x8038FCC4) //this is a jump label
/*8038FCC4 0038CAC4*/ PPC::Runtime::ASM::mtctr(context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8038FCC8, 0x8038FCC8) //this is a jump label
/*8038FCC8 0038CAC8*/ PPC::Runtime::ASM::lhax(context->r0, context->r5, context->r6);
/*8038FCCC 0038CACC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038FCD0 0038CAD0*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1)1, context->qr5);
/*8038FCD4 0038CAD4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x2);
/*8038FCD8 0038CAD8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038FCDC 0038CADC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FCE0 0038CAE0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038FCE4 0038CAE4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038FCE8 0038CAE8*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*8038FCEC 0038CAEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038FCF0 0038CAF0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8038FCF4 0038CAF4*/ PPC::Runtime::ASM::bdnz(.L_8038FCC8);
RUNTIME_PPC_JUMP_LABEL(.L_8038FCF8, 0x8038FCF8) //this is a jump label
/*8038FCF8 0038CAF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8038FCFC 0038CAFC*/ PPC::Runtime::ASM::blr();
}